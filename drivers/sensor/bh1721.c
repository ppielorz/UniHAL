/******************************************************************************
 @file bh1721.c

 @brief BH1721FVC driver implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"
#include "unihal/utils/array.h"
#include "unihal/drivers/sensor/bh1721.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define I2C_ADDRESS 0x23

#define POWER_DOWN              0x00
#define POWER_ON                0x01
#define AUTO_RESOLUTION_MODE    0x10
#define H_RESOLUTION_MODE       0x12
#define L_RESOLUTION_MODE       0x13

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

static bool writeCommand(BH1721_t* instance, uint8_t command);

/******************************************************************************
 Global functions
 ******************************************************************************/
bool bh1721_init(BH1721_t* instance, UniHAL_i2c_t* i2cDriver, UniHAL_gpio_t* rst)
{
    if(instance == NULL || i2cDriver == NULL || rst == NULL)
    {
        return false;
    }

    memset(instance, 0, sizeof(*instance));
    instance->i2cDriver = i2cDriver;
    instance->rst = rst;

    if (!unihal_gpio_init(instance->rst))
    {
        return false;
    }
    if (!unihal_gpio_configureOutput(instance->rst, UniHAL_gpio_value_low, UniHAL_gpio_outputType_pushPull))
    {
        return false;
    }
    unihalos_usleep(10);
    if (!unihal_gpio_write(instance->rst, UniHAL_gpio_value_high))
    {
        return false;
    }

    return true;
}

uint16_t bh1721_readIlluminance(BH1721_t* instance)
{
    if (instance == NULL)
    {
        return 0U;
    }

    if (!writeCommand(instance, POWER_ON))
    {
        return 0U;
    }

    if (!writeCommand(instance, AUTO_RESOLUTION_MODE))
    {
        return 0U;
    }

    unihalos_usleep(180000);

    bool status = true;
    uint16_t illuminance = 0U;
    uint8_t readVectorData[2] = {0U};
    vector_t readVector = {.data = readVectorData, .size = sizeof(readVectorData)};
    vector_t writeVector = {.data = NULL, .size = 0U};

    status = unihal_i2c_transfer(instance->i2cDriver, I2C_ADDRESS, 100U, &writeVector, &readVector);

    if(status)
    {
        illuminance = (readVectorData[0] << 8 | readVectorData[1]) * 6 / 5;
    }

    writeCommand(instance, POWER_DOWN);

    return illuminance;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static bool writeCommand(BH1721_t* instance, uint8_t command)
{
    if(instance == NULL)
    {
        return false;
    }

    vector_t readVector = {.data = NULL, .size = 0U};
    vector_t writeVector = {.data = &command, .size = sizeof(command)};

    return unihal_i2c_transfer(instance->i2cDriver, I2C_ADDRESS, 100U, &writeVector, &readVector);
}
