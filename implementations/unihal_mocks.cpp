/******************************************************************************
 @file unihal_mocks.c

 @brief UniHAL mock for CppUTest framework
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>
#include <CppUTestExt/MockSupport.h>

#include "unihal.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

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

/******************************************************************************
 Global functions
 ******************************************************************************/

bool unihal_i2c_transfer(UniHAL_i2c_t* instance, uint8_t address, uint32_t timeout, vector_t* writeVector, vector_t* readVector)
{
    if(readVector == NULL)
    {
        mock().actualCall("unihal_i2c_transfer").withPointerParameter("instance", instance)
            .withUnsignedIntParameter("address", address)
            .withUnsignedIntParameter("timeout", timeout)
            .withPointerParameter("readVector", readVector)
            .withParameterOfType("vector_t", "writeVector", writeVector);
    }
    else
    {
        mock().actualCall("unihal_i2c_transfer").withPointerParameter("instance", instance)
            .withUnsignedIntParameter("address", address)
            .withUnsignedIntParameter("timeout", timeout)
            .withParameterOfType("vector_t", "writeVector", writeVector)
            .withOutputParameterOfType("vector_t", "readVector", readVector);
    }
    return mock().boolReturnValue();
}
bool unihal_i2c_readMem(UniHAL_i2c_t* instance, uint8_t slaveAddress, uint32_t timeout, uint16_t memoryAddress, uint8_t memoryAddressSize, uint8_t* data, size_t dataLen)
{
    mock().actualCall("unihal_i2c_readMem").withPointerParameter("instance", instance)
        .withUnsignedIntParameter("slaveAddress", slaveAddress)
        .withUnsignedIntParameter("timeout", timeout)
        .withUnsignedIntParameter("memoryAddress", memoryAddress)
        .withUnsignedIntParameter("memoryAddressSize", memoryAddressSize)
        .withOutputParameterOfType("uint8_t*", "data", data)
        .withUnsignedIntParameter("dataLen", dataLen);
    return mock().boolReturnValue();
}


bool unihal_spi_transfer(UniHAL_spi_t* instance, size_t dataLen, uint8_t* writeBuffer, uint8_t* readBuffer)
{
    mock().actualCall("unihal_spi_transfer").withPointerParameter("instance", instance)
        .withUnsignedIntParameter("dataLen", dataLen)
        .withPointerParameter("writeBuffer", writeBuffer)
        .withOutputParameterOfType("readBuffer", "uint8_t*", readBuffer);

    return mock().boolReturnValue();
}

void unihal_usleep(uint32_t microseconds)
{
    mock().actualCall("unihal_usleep").withUnsignedIntParameter("microseconds", microseconds);
}

bool unihal_gpio_init(UniHAL_gpio_t* instance)
{
    mock().actualCall("unihal_gpio_write").withPointerParameter("instance", instance);
    return mock().boolReturnValue();
}

bool unihal_gpio_write(UniHAL_gpio_t* instance, UniHAL_gpio_value_t outputValue)
{
    mock().actualCall("unihal_gpio_write").withPointerParameter("instance", instance)
        .withParameter("outputValue", outputValue);
    return mock().boolReturnValue();
}

bool unihal_gpio_configureOutput(UniHAL_gpio_t* instance, UniHAL_gpio_value_t outputValue,
                                    UniHAL_gpio_outputType_t outputType)
{
    mock().actualCall("unihal_gpio_configureOutput").withPointerParameter("instance", instance)
        .withParameter("outputValue", outputValue)
        .withParameter("outputType", outputType);
    return mock().boolReturnValue();
}

uint32_t unihal_getVoltage(void)
{
    mock().actualCall("unihal_getVoltage");
    return mock().unsignedIntReturnValue();
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

