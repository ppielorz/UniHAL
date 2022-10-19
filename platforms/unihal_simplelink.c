/******************************************************************************
 @file unihal_simplelink.c

 @brief UniHAL Simplelink implementation definitions

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include <ti/drivers/I2C.h>
#include <ti/drivers/SPI.h>
#include <ti/drivers/PIN.h>

#include "aon_batmon.h"
#include "sys_ctrl.h"

#include "unihal.h"
#include "unihal_simplelink.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define SIMPLELINK_PIN_ID(instance) ((UniHAL_SimpleLink_gpioStruct_t*) instance->obj)->index

typedef struct
{
    PIN_Id pinId;
    UniHAL_gpio_interruptHandlerFp_t fxn;
    void* arg;
} gpioInterruptEntry_t;

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
static PIN_Handle pin = {0};
static PIN_State pinState = {0};
static gpioInterruptEntry_t gpioInterruptTable[8] = {};

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void pinIntHandler(PIN_Handle handle, PIN_Id pinId);

/******************************************************************************
 Global functions
 ******************************************************************************/



extern bool unihal_init(void)
{
    const PIN_Config pinList[1] = {PIN_TERMINATE};
    pin = PIN_open(&pinState, pinList);
    bool status = true;

    AONBatMonEnable();

    if(pin == NULL)
    {
        status = false;
    }
    else
    {
        if(PIN_SUCCESS != PIN_registerIntCb(pin, pinIntHandler))
        {
            status = false;
        }
    }

    return status;
}

extern bool unihal_gpio_init(UniHAL_gpio_t* const instance)
{
    //DU_ASSERT(instance != NULL);

    PIN_Status status = PIN_add(pin, SIMPLELINK_PIN_ID(instance) | PIN_GPIO_OUTPUT_DIS);

    return (PIN_SUCCESS == status);
}

extern bool unihal_gpio_configureInput(UniHAL_gpio_t* const instance, const UniHAL_gpio_pull_t pull)
{
    //DU_ASSERT(instance != NULL);
    PIN_Config pinConfig = SIMPLELINK_PIN_ID(instance) | PIN_INPUT_EN;
    bool status = true;

    switch (pull)
    {
    case UniHAL_gpio_pull_noPull:
        pinConfig |= PIN_NOPULL;
        break;
    case UniHAL_gpio_pull_pullDown:
        pinConfig |= PIN_PULLDOWN;
        break;
    case UniHAL_gpio_pull_pullUp:
        pinConfig |= PIN_PULLUP;
        break;

    default:
        status = false;
    }

    if(status)
    {
        PIN_Status pinStatus = PIN_setConfig(pin, PIN_BM_ALL, pinConfig);
        if(pinStatus != PIN_SUCCESS)
        {
            status = false;
        }
    }

    return status;
}

extern bool unihal_gpio_configureOutput(UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t outputValue,
                                    const UniHAL_gpio_outputType_t outputType)
{
    //DU_ASSERT(instance != NULL);
    PIN_Config pinConfig = SIMPLELINK_PIN_ID(instance) | PIN_GPIO_OUTPUT_EN;
    bool status = true;

    switch (outputValue)
    {
    case UniHAL_gpio_value_low:
        pinConfig |= PIN_GPIO_LOW;
        break;
    case UniHAL_gpio_value_high:
        pinConfig |= PIN_GPIO_HIGH;
        break;

    default:
        status = false;
    }

    switch (outputType)
    {
    case UniHAL_gpio_outputType_pushPull:
        pinConfig |= PIN_PUSHPULL;
        break;
    case UniHAL_gpio_outputType_openDrain:
        pinConfig |= PIN_OPENDRAIN;
        break;
    case UniHAL_gpio_outputType_openSource:
        pinConfig |= PIN_OPENSOURCE;
        break;

    default:
        status = false;
    }
    //TODO pin drive strength

    if(status)
    {
        PIN_Status pinStatus = PIN_setConfig(pin, PIN_BM_ALL, pinConfig);
        if(pinStatus != PIN_SUCCESS)
        {
            status = false;
        }
    }

    return status;
}

extern bool unihal_gpio_deinit(UniHAL_gpio_t* const instance)
{
    //DU_ASSERT(instance != NULL);
    //PIN_Status status = PIN_remove(pin, instance->index);
    return true;
}


extern bool unihal_gpio_registerInterrupt(UniHAL_gpio_t* const instance, const UniHAL_gpio_interrupt_t type, 
                void (*handler)(void* const arg), void* const arg)
{
    size_t gpioInterruptEntry = 0U;
    bool status = true;
    //UniHAL_gpio_interrupt_disabled = 0,
    PIN_Config pinConfig = SIMPLELINK_PIN_ID(instance);
    switch (type)
    {
    case UniHAL_gpio_interrupt_falling:
        pinConfig |= PIN_IRQ_NEGEDGE;
        break;
    case UniHAL_gpio_interrupt_rising:
        pinConfig |= PIN_IRQ_POSEDGE;
        break;
    case UniHAL_gpio_interrupt_both:
        pinConfig |= PIN_IRQ_BOTHEDGES;
        break;

    default:
        status = false;
    }

    if(status)
    {
        PIN_Status pinStatus = PIN_setConfig(pin, PIN_BM_IRQ, pinConfig);
        if(pinStatus != PIN_SUCCESS)
        {
            status = false;
        }
    }

    //TODO ARRAY_LEN
    for(; gpioInterruptEntry < sizeof(gpioInterruptTable)/sizeof(gpioInterruptTable[0]); gpioInterruptEntry++)
    {
        if(0U == gpioInterruptTable[gpioInterruptEntry].pinId)
        {
            gpioInterruptTable[gpioInterruptEntry].pinId = SIMPLELINK_PIN_ID(instance);
            gpioInterruptTable[gpioInterruptEntry].fxn = handler;
            gpioInterruptTable[gpioInterruptEntry].arg = arg;
            break;
        }
    }

    if(sizeof(gpioInterruptTable)/sizeof(gpioInterruptTable[0]) == gpioInterruptEntry)
    {
        status = false;
    }

    return status;
}

extern bool unihal_gpio_write(const UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t outputValue)
{
    //DU_ASSERT(instance != NULL);
    bool status = true;
    uint32_t value = 0;

    switch (outputValue)
    {
    case UniHAL_gpio_value_low:
        value = 0;
        break;
    case UniHAL_gpio_value_high:
        value = 1;
        break;

    default:
        status = false;
    }

    if(status)
    {
        PIN_Status pinStatus = PIN_setOutputValue(pin, SIMPLELINK_PIN_ID(instance), value);
        if(pinStatus != PIN_SUCCESS)
        {
            status = false;
        }
    }

    return status;
}

extern UniHAL_gpio_value_t unihal_gpio_read(const UniHAL_gpio_t* const instance)
{
    return PIN_getInputValue(SIMPLELINK_PIN_ID(instance));
}

/*bool unihal_i2c_init(UniHAL_i2c_t* instance)
{
    I2C_init();
    I2C_Params_init(&i2cStruct.params);
    i2cStruct.index = 0U;
    instance->obj = &i2cStruct;

    return true;
}*/

bool unihal_i2c_transfer(const UniHAL_i2c_t* const instance, const uint8_t slaveAddress, const uint32_t timeout,
                        const vector_t* const writeVector, vector_t* const readVector)
{
    //DU_ASSERT(instance != NULL);
    UniHAL_SimpleLink_i2cStruct_t* i2cStruct = (UniHAL_SimpleLink_i2cStruct_t*) instance->obj;
    I2C_Handle i2cHandle = I2C_open(i2cStruct->index, &i2cStruct->params);

    I2C_Transaction transaction = {};
    transaction.slaveAddress = slaveAddress;
    if (readVector != NULL)
    {
        transaction.readBuf = readVector->data;
        transaction.readCount = readVector->size;
    }
    if (writeVector != NULL)
    {
        transaction.writeBuf = writeVector->data;
        transaction.writeCount = writeVector->size;
    }

    int_fast16_t i2cStatus = I2C_transferTimeout(i2cHandle, &transaction, timeout);

    I2C_close(i2cHandle);
    return (I2C_STATUS_SUCCESS == i2cStatus);
}

bool unihal_i2c_readMem(const UniHAL_i2c_t* const instance, const uint8_t slaveAddress, const uint32_t timeout, 
                        const uint16_t memoryAddress, const uint8_t memoryAddressSize, uint8_t* const data, const size_t dataLen)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(data != NULL);

    uint8_t writeBufferData[sizeof(uint16_t)];
    vector_t writeBuffer = {writeBufferData, memoryAddressSize};
    vector_t readBuffer = {data, dataLen};

    switch(memoryAddressSize)
    {
        case sizeof(uint8_t):
            writeBufferData[0] = (uint8_t) memoryAddress;
            break;

        case sizeof(uint16_t):
            writeBufferData[0] = (uint8_t) (memoryAddress >> 8);
            writeBufferData[1] = (uint8_t) (memoryAddress & 0xFF);
            break;

        default:
            //DU_ASSERT(false);
    }

    return unihal_i2c_transfer(instance, slaveAddress, timeout, &writeBuffer, &readBuffer);
}

bool unihal_spi_transfer(const UniHAL_spi_t* const instance, const size_t dataLen, const uint8_t* const writeBuffer, uint8_t* const readBuffer)
{
    UniHAL_SimpleLink_spiStruct_t* spiStruct = (UniHAL_SimpleLink_spiStruct_t*) instance->obj;
    SPI_Handle spiHandle = SPI_open(spiStruct->index, NULL);//TODO spi params
    bool status = false;

    SPI_Transaction spiTransaction = {0};
    spiTransaction.rxBuf = readBuffer;
    spiTransaction.txBuf = writeBuffer;
    spiTransaction.count = dataLen;
    status = SPI_transfer(spiHandle, &spiTransaction);
    SPI_close(spiHandle);

    return status;
}

#include <ti/sysbios/knl/Task.h>
void unihal_usleep(const uint32_t microseconds)
{
    Task_sleep(microseconds / 10);
}

void unihal_sleep(const uint32_t seconds)
{
    Task_sleep(seconds * 1000 * 100);
}
void unihal_reboot(void)
{
    SysCtrlSystemReset();
}

uint32_t unihal_getVoltage(void)
{
    return (AONBatMonBatteryVoltageGet() * 125) >> 5;
}

#include <ti/sysbios/knl/Clock.h>
uint32_t unihal_getTickCount(void)
{
    return Clock_getTicks() * Clock_tickPeriod / 1000;
}

uint32_t unihal_getMicroTickCount(void)
{
    return Clock_getTicks() * Clock_tickPeriod;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static void pinIntHandler(PIN_Handle handle, PIN_Id pinId)
{
    size_t gpioInterruptEntry = 0U;
        //TODO ARRAY_LEN
    for(; gpioInterruptEntry < sizeof(gpioInterruptTable)/sizeof(gpioInterruptTable[0]); gpioInterruptEntry++)
    {
        if(pinId == gpioInterruptTable[gpioInterruptEntry].pinId)
        {
            gpioInterruptTable[gpioInterruptEntry].fxn(gpioInterruptTable[gpioInterruptEntry].arg);
            break;
        }
    }
}
