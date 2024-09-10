/******************************************************************************
 @file unihal.c

 @brief UniHAL generic definitions.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include "unihal/unihal.h"

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

extern void unihal_gpio_construct(UniHAL_gpio_t* instance, void* obj)
{
    if(instance)
    {
        instance->obj = obj;
    }
}

extern void unihal_spi_construct(UniHAL_spi_t* instance, void* obj, UniHAL_gpio_t* mosiGpio, UniHAL_gpio_t* misoGpio, UniHAL_gpio_t* sckGpio)
{
    if(instance)
    {
        instance->obj = obj;
        instance->mosiGpio = mosiGpio;
        instance->misoGpio = misoGpio;
        instance->sckGpio = sckGpio;
    }
}

extern void unihal_uart_construct(UniHAL_uart_t* instance, void* obj, UniHAL_gpio_t* txGpio, UniHAL_gpio_t* rxGpio)
{
    if(instance)
    {
        instance->obj = obj;
        instance->txGpio = txGpio;
        instance->rxGpio = rxGpio;
    }
}

extern void unihal_i2c_construct(UniHAL_i2c_t* instance, void* obj, UniHAL_gpio_t* sdaGpio, UniHAL_gpio_t* sclGpio)
{
    if(instance)
    {
        instance->obj = obj;
        instance->sdaGpio = sdaGpio;
        instance->sclGpio = sclGpio;
    }
}

extern void unihal_timer_construct(UniHAL_timer_t* instance, void* obj)
{
    if(instance)
    {
        instance->obj = obj;
    }
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



/******************************************************************************
 Local Functions
 *****************************************************************************/

