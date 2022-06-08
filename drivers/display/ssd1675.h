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

#include "unihal.h"
#include "monogfx.h"

#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************
 Constants and definitions
 *****************************************************************************/


typedef struct
{
    monoGFX_t* bwGfx;
    monoGFX_t* rGfx;
    uint8_t xSize;
    uint8_t ySize;

    UniHAL_spi_t* spi;
    UniHAL_gpio_t* cs;
    UniHAL_gpio_t* rst;
    UniHAL_gpio_t* bsy;
    UniHAL_gpio_t* dc;
} SSD1675_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/
extern void ssd1675_init(SSD1675_t* display, monoGFX_t* bwGfx, monoGFX_t* rGfx, UniHAL_spi_t* spi,
                    UniHAL_gpio_t* cs, UniHAL_gpio_t* rst, UniHAL_gpio_t* bsy, UniHAL_gpio_t* dc);

extern void ssd1675_hwReset(SSD1675_t* display);

extern void ssd1675_swReset(SSD1675_t* display);

extern void ssd1675_setCursor(SSD1675_t* display, uint8_t x, uint16_t y);

extern void ssd1675_refresh(SSD1675_t* display);
extern void ssd1675_sleep(SSD1675_t* display);

#ifdef __cplusplus
}
#endif

#endif