/******************************************************************************
 @file unihal.c

 @brief UniHAL general definitions

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

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

extern bool unihal_spi_init(UniHAL_spi_t* instance, void* obj, UniHAL_gpio_t* mosiGpio, UniHAL_gpio_t* misoGpio, UniHAL_gpio_t* sckGpio)
{
    //TODO assert
    instance->obj = obj;
    instance->mosiGpio = mosiGpio;
    instance->misoGpio = misoGpio;
    instance->sckGpio = sckGpio;

    return true;
}

extern bool unihal_uart_init(UniHAL_uart_t* instance, void* obj, UniHAL_gpio_t* txGpio, UniHAL_gpio_t* rxGpio)
{
    //TODO assert
    instance->obj = obj;
    instance->txGpio = txGpio;
    instance->rxGpio = rxGpio;
    return true;
}

extern bool unihal_i2c_init(UniHAL_i2c_t* instance, void* obj, UniHAL_gpio_t* sdaGpio, UniHAL_gpio_t* sclGpio)
{
    //TODO assert
    instance->obj = obj;
    instance->sdaGpio = sdaGpio;
    instance->sclGpio = sclGpio;
    return true;
}


/******************************************************************************
 Local Functions
 *****************************************************************************/

