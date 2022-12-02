/******************************************************************************
 @file ssd1675.h

 @brief SSD1675 driver header

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _SSD1675_H_
#define _SSD1675_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>

#include "unihal/unihal.h"
#include "unihal/monogfx/monogfx.h"

#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************
 Constants and definitions
 *****************************************************************************/

typedef enum
{
    SSD1675_status_ok = 0U,
    SSD1675_status_nullPointer = 1U,
    SSD1675_status_gfxSizeMismatch = 2U,
    SSD1675_status_widthTooLarge = 3U,
    SSD1675_status_heightTooLarge = 4U,
    SSD1675_status_csPinInitError = 5U,
    SSD1675_status_rstPinInitError = 6U,
    SSD1675_status_bsyPinInitError = 7U,
    SSD1675_status_dcPinInitError = 8U,
    SSD1675_status_csPinConfigureError = 9U,
    SSD1675_status_rstPinConfigureError = 10U,
    SSD1675_status_bsyPinConfigureError = 11U,
    SSD1675_status_dcPinConfigureError = 12U,
    SSD1675_status_csPinWriteError = 13U,
    SSD1675_status_rstPinWriteError = 14U,
    SSD1675_status_bsyPinWriteError = 15U,
    SSD1675_status_dcPinWriteError = 16U,
    SSD1675_status_spiCommunicationError = 17U,
    SSD1675_status_timeout = 18U,
} SSD1675_status_t;

typedef struct
{
    monoGFX_t* bwGfx;
    monoGFX_t* rGfx;
    uint8_t xSize;
    uint16_t ySize;

    UniHAL_spi_t* spi;
    UniHAL_gpio_t* cs;
    UniHAL_gpio_t* rst;
    UniHAL_gpio_t* bsy;
    UniHAL_gpio_t* dc;
} SSD1675_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/
extern SSD1675_status_t ssd1675_init(SSD1675_t* display, monoGFX_t* bwGfx, monoGFX_t* rGfx, UniHAL_spi_t* spi,
                    UniHAL_gpio_t* cs, UniHAL_gpio_t* rst, UniHAL_gpio_t* bsy, UniHAL_gpio_t* dc);




extern SSD1675_status_t ssd1675_refresh(SSD1675_t* display);

#ifdef __cplusplus
}
#endif

#endif
