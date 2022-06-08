/******************************************************************************
 @file mlx90614.c

 @brief MLX90614 driver implementation

 @author Paweł Pielorz (pawel.pielorz@gmail.com)
 
 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "array.h"
#include "unihal.h"
#include "mlx90614.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define MLX90614_EEPROM_TOMAX       0x00
#define MLX90614_EEPROM_TOMIN       0x01
#define MLX90614_EEPROM_PWMCTRL     0x02
#define MLX90614_EEPROM_TARANGE     0x03
#define MLX90614_EEPROM_EMISS_CORR  0x04
#define MLX90614_EEPROM_CONFIG_1    0x05
#define MLX90614_EEPROM_SMBUS_ADDR  0x0E
#define MLX90614_EEPROM_ID_1        0x1C
#define MLX90614_EEPROM_ID_2        0x1D
#define MLX90614_EEPROM_ID_3        0x1E
#define MLX90614_EEPROM_ID_4        0x1F

#define MLX90614_RAM_RAW_IR_CH_1    0x04
#define MLX90614_RAM_RAW_IR_CH_2    0x05
#define MLX90614_RAM_TAMB           0x06
#define MLX90614_RAM_TOBJ_1         0x07
#define MLX90614_RAM_TOBJ_2         0x08

#define MLX90614_COMMAND_RAM        0x00
#define MLX90614_COMMAND_EEPROM     0x20
#define MLX90614_COMMAND_FLAGS      0xF0
#define MLX90614_COMMAND_SLEEP      0xFF

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

static float mlxConvertTemperature(uint16_t rawTemperature);
static bool mlxRead(MLX90614_t* instance, uint8_t command, uint16_t* data);
static bool mlxWrite(MLX90614_t* instance, uint8_t command, uint16_t data);
static uint8_t mlxCrc(const uint8_t* buffer, size_t bufferLen);

/******************************************************************************
 Global functions
 ******************************************************************************/
extern bool mlx90614_init(MLX90614_t* instance, UniHAL_i2c_t* i2cDriver, uint8_t mlxAddress)
{
    if(instance == NULL || i2cDriver == NULL)
    {
        return false;
    }

    memset(instance, 0, sizeof(*instance));
    instance->deviceAddress = mlxAddress;
    instance->i2cDriver = i2cDriver;

    return true;
}

extern uint64_t mlx90614_getId(MLX90614_t* instance)
{
    uint64_t dummyId = 0U;

    return dummyId;
}

extern float mlx90614_getAmbientTemperature(MLX90614_t* instance)
{
    if(instance == NULL)
    {
        return ABSOLUTE_ZERO;
    }
    
    uint16_t rawTemperature = 0U;
    
    if(mlxRead(instance, MLX90614_COMMAND_RAM | MLX90614_RAM_TAMB, &rawTemperature))
    {
        return mlxConvertTemperature(rawTemperature);
    }
    else
    {
        return ABSOLUTE_ZERO;
    }
}

extern float mlx90614_getObjectTemperature(MLX90614_t* instance)
{
    if(instance == NULL)
    {
        return ABSOLUTE_ZERO;
    }
    
    uint16_t rawTemperature = 0U;
    
    if(mlxRead(instance, MLX90614_COMMAND_RAM | MLX90614_RAM_TOBJ_1, &rawTemperature))
    {
        return mlxConvertTemperature(rawTemperature);
    }
    else
    {
        return ABSOLUTE_ZERO;
    }
}

extern bool mlx90614_setEmissivity(MLX90614_t* instance, uint16_t emissivity)
{
    if(instance == NULL)
    {
        return false;
    }
    
    return mlxWrite(instance, MLX90614_COMMAND_EEPROM | MLX90614_EEPROM_EMISS_CORR, emissivity);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static float mlxConvertTemperature(uint16_t rawTemperature)
{
    float convertedTemperature = (float) rawTemperature;
    convertedTemperature = (convertedTemperature / 50) + ABSOLUTE_ZERO;
    return convertedTemperature;
}

static bool mlxRead(MLX90614_t* instance, uint8_t command, uint16_t* data)
{
    if(instance == NULL || data == NULL)
    {
        return false;
    }

    uint8_t readBufferData[3] = {};
    uint8_t crcTemporary[5] = {};
    bool status = true;
    vector_t readVector = {.data = readBufferData, .size = sizeof(readBufferData)};
    vector_t writeVector = {.data = &command, .size = sizeof(command)};

    status = unihal_i2c_transfer(instance->i2cDriver, instance->deviceAddress, 100U, &writeVector, &readVector);

    if(status)
    {
        crcTemporary[0] = (instance->deviceAddress << 1) | 0;
        crcTemporary[1] = command;
        crcTemporary[2] = (instance->deviceAddress << 1) | 1;
        memcpy(&crcTemporary[3], readVector.data, 2);

        status = (mlxCrc(crcTemporary, sizeof(crcTemporary)) == readVector.data[2]);
    }

    if(status)
    {
        *data = readVector.data[0] | (readVector.data[1] << 8);
    }

    return status;
}

static bool mlxWrite(MLX90614_t* instance, uint8_t command, uint16_t data)
{
    if(instance == NULL)
    {
        return false;
    }

    uint8_t writeBufferData[5] = {};
    writeBufferData[0] = (instance->deviceAddress << 1) | 0;
    writeBufferData[1] = command;
    writeBufferData[2] = (uint8_t) data & 0xFF;
    writeBufferData[3] = (uint8_t) ((data & 0xFF00) >> 8);
    writeBufferData[4] = mlxCrc(writeBufferData, sizeof(writeBufferData) - 1);
    vector_t writeBuffer = {.data = &writeBufferData[1], .size = sizeof(writeBufferData) - 1};

    return unihal_i2c_transfer(instance->i2cDriver, instance->deviceAddress, 100U, &writeBuffer, NULL);
}

static uint8_t mlxCrc(const uint8_t* buffer, size_t bufferLen)
{
    const uint8_t crcTable[16] = {0x00U, 0x07U, 0x0EU, 0x09U, 0x1CU, 0x1BU, 0x12U, 0x15U,
                                   0x38U, 0x3FU, 0x36U, 0x31U, 0x24U, 0x23U, 0x2AU, 0x2DU};
    uint8_t tblIdx;
    uint8_t crc = 0U;

    while (bufferLen--)
    {
        tblIdx = (crc >> 4) ^ (*buffer >> 4);
        crc = crcTable[tblIdx & 0x0F] ^ (crc << 4);
        tblIdx = (crc >> 4) ^ (*buffer >> 0);
        crc = crcTable[tblIdx & 0x0F] ^ (crc << 4);
        buffer++;
    }

    return crc & 0xFF;
}
