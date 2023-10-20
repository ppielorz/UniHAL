/******************************************************************************
 @file unihal_cc13xx_cc26xx.c

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
#include <ti/drivers/GPIO.h>

#include "aon_batmon.h"
#include "sys_ctrl.h"

#include "unihal/unihal.h"
#include "unihal_cc13xx_cc26xx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define GPIO_INDEX(instance) ((UniHAL_SimpleLink_gpioStruct_t*) instance->obj)->index

typedef struct
{
    Timer_Handle handle;
    void (*handler)(void* const arg);
    void* arg;
} timerInterruptHandlerEntry_t;


/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
static timerInterruptHandlerEntry_t timerInterruptHandlers[8];

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void interruptHandler(uint_least8_t index);
static void timerHandler(Timer_Handle handle, int_fast16_t status);

/******************************************************************************
 Global functions
 ******************************************************************************/



extern bool unihal_init(void)
{
    bool status = true;

    AONBatMonEnable();
    GPIO_init();
    SPI_init();
    Timer_init();


    /*if(pin == NULL)
    {
        status = false;
    }
    else
    {
        if(PIN_SUCCESS != PIN_registerIntCb(pin, pinIntHandler))
        {
            status = false;
        }
    }*/

    return status;
}

extern bool unihal_gpio_init(UniHAL_gpio_t* const instance)
{
    //DU_ASSERT(instance != NULL);

    /*PIN_Status status = PIN_add(pin, SIMPLELINK_PIN_ID(instance) | PIN_GPIO_OUTPUT_DIS);

    return (PIN_SUCCESS == status);*/return true;
}

extern bool unihal_gpio_configureInput(UniHAL_gpio_t* const instance, const UniHAL_gpio_pull_t pull)
{
    //DU_ASSERT(instance != NULL);

    GPIO_PinConfig pinConfig = GPIO_CFG_INPUT;
    bool status = true;

    switch (pull)
    {
    case UniHAL_gpio_pull_noPull:
        pinConfig = GPIO_CFG_IN_NOPULL;
        break;
    case UniHAL_gpio_pull_pullDown:
        pinConfig = GPIO_CFG_IN_PD;
        break;
    case UniHAL_gpio_pull_pullUp:
        pinConfig = GPIO_CFG_IN_PU;
        break;

    default:
        status = false;
    }

    if(status)
    {
        int_fast16_t setConfigStatus = GPIO_setConfig(GPIO_INDEX(instance), pinConfig);
        if(setConfigStatus != GPIO_STATUS_SUCCESS)
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
    GPIO_PinConfig pinConfig = GPIO_CFG_OUTPUT;
    bool status = true;

    switch (outputValue)
    {
    case UniHAL_gpio_value_low:
        pinConfig |= GPIO_CFG_OUT_LOW;
        break;
    case UniHAL_gpio_value_high:
        pinConfig |= GPIO_CFG_OUT_HIGH;
        break;

    default:
        status = false;
    }

    switch (outputType)
    {
    case UniHAL_gpio_outputType_pushPull:
        pinConfig |= GPIO_CFG_OUT_STD;
        break;
    case UniHAL_gpio_outputType_openDrain:
        pinConfig |= GPIO_CFG_OUT_OD_NOPULL;
        break;

    default:
        status = false;
    }
    //TODO pin drive strength

    if(status)
    {
        int_fast16_t setConfigStatus = GPIO_setConfig(GPIO_INDEX(instance), pinConfig);
        if(setConfigStatus != GPIO_STATUS_SUCCESS)
        {
            status = false;
        }
    }

    return status;
}

extern bool unihal_gpio_deinit(UniHAL_gpio_t* const instance)
{
    return true;
}


extern bool unihal_gpio_registerInterrupt(UniHAL_gpio_t* const instance, const UniHAL_gpio_interrupt_t type, 
                void (*handler)(void* const arg), void* const arg)
{
    GPIO_PinConfig pinConfig = GPIO_CFG_IN_INT_NONE;
    uint_least8_t index = GPIO_INDEX(instance);
    bool status = true;
    switch (type)
    {
    case UniHAL_gpio_interrupt_falling:
        pinConfig = GPIO_CFG_IN_INT_FALLING;
        break;
    case UniHAL_gpio_interrupt_rising:
        pinConfig = GPIO_CFG_IN_INT_RISING;
        break;
    case UniHAL_gpio_interrupt_both:
        pinConfig = GPIO_CFG_IN_INT_BOTH_EDGES;
        break;

    default:
        status = false;
    }

    if(status)
    {
        instance->irqHandler = handler;
        instance->irqArg = arg;
        GPIO_setCallback(index, interruptHandler);
        GPIO_setUserArg(index, instance);
        GPIO_setInterruptConfig(index, pinConfig);
        GPIO_enableInt(index);
    }

    return status;
}

bool unihal_gpio_enableInterrupt(UniHAL_gpio_t* const instance)
{
    GPIO_enableInt(GPIO_INDEX(instance));
    return true;
}

bool unihal_gpio_disableInterrupt(UniHAL_gpio_t* const instance)
{
    GPIO_disableInt(GPIO_INDEX(instance));
    return true;
}

extern bool unihal_gpio_write(const UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t outputValue)
{
    //DU_ASSERT(instance != NULL);
    GPIO_write(GPIO_INDEX(instance), (unsigned int) outputValue);
    return true;
}

extern UniHAL_gpio_value_t unihal_gpio_read(const UniHAL_gpio_t* const instance)
{
    return (UniHAL_gpio_value_t) GPIO_read(GPIO_INDEX(instance));
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
    transaction.targetAddress = slaveAddress;
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
            break;
            //DU_ASSERT(false);
    }

    return unihal_i2c_transfer(instance, slaveAddress, timeout, &writeBuffer, &readBuffer);
}

bool unihal_spi_transfer(const UniHAL_spi_t* const instance, const size_t dataLen, const uint8_t* const writeBuffer, uint8_t* const readBuffer)
{
    UniHAL_SimpleLink_spiStruct_t* spiStruct = (UniHAL_SimpleLink_spiStruct_t*) instance->obj;
    SPI_Handle spiHandle = SPI_open(spiStruct->index, NULL);//TODO spi params
    bool status = false;

    if(spiHandle != NULL)
    {
        SPI_Transaction spiTransaction = {0};
        spiTransaction.rxBuf = readBuffer;
        spiTransaction.txBuf = (void*) writeBuffer;
        spiTransaction.count = dataLen;
        status = SPI_transfer(spiHandle, &spiTransaction);
        SPI_close(spiHandle);
    }

    return status;
}

void unihal_reboot(void)
{
    SysCtrlSystemReset();
}

uint32_t unihal_getVoltage(void)
{
    return (AONBatMonBatteryVoltageGet() * 125) >> 5;
}

extern bool unihal_timer_init(UniHAL_timer_t* const instance, const uint32_t periodUs, const bool oneShot, void (*handler)(void* const arg), void* const arg)
{

    UniHAL_SimpleLink_timerStruct_t* timerStruct = (UniHAL_SimpleLink_timerStruct_t*) instance->obj;

    Timer_Params params;
    Timer_Params_init(&params);
    params.periodUnits = Timer_PERIOD_US;
    params.period = periodUs;
    params.timerMode  = oneShot ? Timer_ONESHOT_CALLBACK : Timer_CONTINUOUS_CALLBACK;
    params.timerCallback = timerHandler;
    timerStruct->handle = Timer_open(timerStruct->index, &params);

    timerInterruptHandlers[timerStruct->index].handle = timerStruct->handle;
    timerInterruptHandlers[timerStruct->index].handler = handler;
    timerInterruptHandlers[timerStruct->index].arg = arg;

    if(NULL == timerStruct->handle)
    {
        return false;
    }

    return true;
}

bool unihal_timer_deinit(UniHAL_timer_t* const instance)
{
    Timer_close(((UniHAL_SimpleLink_timerStruct_t*) instance->obj)->handle);
    return true;
}

bool unihal_timer_start(UniHAL_timer_t* const instance)
{
    if(Timer_STATUS_SUCCESS != Timer_start(((UniHAL_SimpleLink_timerStruct_t*) instance->obj)->handle))
    {
        return false;
    }
    return true;
}

bool unihal_timer_stop(UniHAL_timer_t* const instance)
{
    Timer_stop(((UniHAL_SimpleLink_timerStruct_t*) instance->obj)->handle);
    return true;
}

bool unihal_timer_setPeriod(UniHAL_timer_t* const instance, const uint32_t periodUs)
{
    if(Timer_STATUS_SUCCESS != Timer_setPeriod(((UniHAL_SimpleLink_timerStruct_t*) instance->obj)->handle, Timer_PERIOD_US, periodUs))
    {
        return false;
    }
    return true;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static void interruptHandler(uint_least8_t index)
{
    const UniHAL_gpio_t* const instance = (const UniHAL_gpio_t* const) GPIO_getUserArg(index);
    if(instance->irqHandler)
    {
        instance->irqHandler(instance->irqArg);
    }
}

static void timerHandler(Timer_Handle handle, int_fast16_t status)
{
    for(size_t entry = 0U; entry < ARRAY_LEN(timerInterruptHandlers); entry++)
    {
        if(timerInterruptHandlers[entry].handle == handle)
        {
            timerInterruptHandlers[entry].handler(timerInterruptHandlers[entry].arg);
            break;
        }
    }
}
