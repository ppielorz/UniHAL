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


/******************************************************************************
 Local Functions
 *****************************************************************************/

