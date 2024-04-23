/******************************************************************************
 @file cpputest_mocks.c

 @brief UniHAL mock for CppUTest framework
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>
#include <CppUTestExt/MockSupport.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
typedef struct
{
    UniHALos_swTimer_callbackFp_t callback;
    void* arg;
} UniHALos_swTimer_mockObj_t;


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

void unihal_reboot(void)
{
    mock().actualCall("unihal_reboot");
}

bool unihal_i2c_transfer(const UniHAL_i2c_t* const instance, const uint8_t slaveAddress, const uint32_t timeout,
                        const vector_t* const writeVector, vector_t* const readVector)
{
    if(readVector == NULL)
    {
        mock().actualCall("unihal_i2c_transfer").withConstPointerParameter("instance", instance)
            .withUnsignedIntParameter("address", slaveAddress)
            .withUnsignedIntParameter("timeout", timeout)
            .withPointerParameter("readVector", readVector)
            .withParameterOfType("vector_t", "writeVector", writeVector);
    }
    else
    {
        mock().actualCall("unihal_i2c_transfer").withConstPointerParameter("instance", instance)
            .withUnsignedIntParameter("address", slaveAddress)
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

void unihalos_usleep(uint32_t microseconds)
{
    mock().actualCall("unihalos_usleep").withUnsignedIntParameter("microseconds", microseconds);
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

bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodMs, const bool oneShot, UniHALos_swTimer_callbackFp_t callback, void* const arg)
{
    instance->callback = callback;
    instance->arg = arg;

    return mock().actualCall("unihalos_swTimer_init")
        .withPointerParameter("instance", instance)
        .withUnsignedIntParameter("perdiodMs", periodMs)
        .withBoolParameter("oneShot", oneShot)
        //.withFunctionPointerParameter("callback", callback)
        .withPointerParameter("arg", arg)
        .returnBoolValueOrDefault(true);
}

bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance)
{
    return mock().actualCall("unihalos_swTimer_deinit")
        .withPointerParameter("instance", instance)
        .returnBoolValueOrDefault(true);
}

bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance)
{
    return mock().actualCall("unihalos_swTimer_start")
        .withPointerParameter("instance", instance)
        .returnBoolValueOrDefault(true);
}

bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance)
{
    return mock().actualCall("unihalos_swTimer_stop")
        .withPointerParameter("instance", instance)
        .returnBoolValueOrDefault(true);
}

bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodMs)
{
    return mock().actualCall("unihalos_swTimer_setPeriod")
        .withPointerParameter("instance", instance)
        .withUnsignedIntParameter("perdiodMs", periodMs)
        .returnBoolValueOrDefault(true);
}


/******************************************************************************
 Local Functions
 *****************************************************************************/

