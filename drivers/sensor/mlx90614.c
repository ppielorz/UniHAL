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

#include "unihal/unihal.h"
#include "unihal/utils/array.h"
#include "unihal/drivers/sensor/mlx90614.h"
#include "unihal/utils/unihal_debug.h"

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
    (void) instance;

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

    uint8_t readBufferData[3] = {0U};
    vector_t readVector = {.data = readBufferData, .size = sizeof(readBufferData)};
    vector_t writeVector = {.data = &command, .size = sizeof(command)};

    if(!unihal_i2c_transfer(instance->i2cDriver, instance->deviceAddress, 100U, &writeVector, &readVector))
    {
        DEBUG_ERROR("MLX90614 communication error");
        return false;
    }

    #if 0
    const uint8_t crcTemporary[] = 
    {
        (instance->deviceAddress << 1) | 0,
        command,
        (instance->deviceAddress << 1) | 1,
        readVector.data[0],
        readVector.data[1]
    };
    const uint8_t calculatedCrc = mlxCrc(crcTemporary, sizeof(crcTemporary));

    if(calculatedCrc != readVector.data[2])
    {
        unihal_callErrorHandler("MLX90614 CRC error");
        return false;
    }
    #endif

    *data = readVector.data[0] | (readVector.data[1] << 8);
    return true;
}

static bool mlxWrite(MLX90614_t* instance, uint8_t command, uint16_t data)
{
    if(instance == NULL)
    {
        return false;
    }

    uint8_t writeBufferData[5] = {0U};
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
    uint8_t crc = 0U;
    while (bufferLen--)
    {
        uint8_t i = 8;
        crc ^= *buffer;
        while(i--)
        {
            crc = crc & 0x80 ? (crc << 1) ^ 7 : crc << 1;
        }
        buffer++;
    }
    return crc;
}
