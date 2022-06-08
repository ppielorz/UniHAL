/******************************************************************************
 @file ssd1306.h

 @brief SSD1306 driver header

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _SSD1306_H_
#define _SSD1306_H_

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
    monoGFX_t* gfx;
    uint8_t xSize;
    uint8_t ySize;
    uint8_t address;

   UniHAL_spi_t* spi;
   UniHAL_i2c_t* i2c;
   UniHAL_gpio_t* cs;
   UniHAL_gpio_t* rst;
   UniHAL_gpio_t* dc;
} SSD1306_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/
extern void ssd1306_initSPI(SSD1306_t* display, monoGFX_t* gfx,UniHAL_spi_t* spi,
                   UniHAL_gpio_t* cs, UniHAL_gpio_t* rst, UniHAL_gpio_t* dc);

extern void ssd1306_initI2C(SSD1306_t* display, monoGFX_t* gfx,UniHAL_i2c_t* i2c, uint8_t address);

extern void ssd1306_reset(SSD1306_t* display);

extern void ssd1306_setCursor(SSD1306_t* display, uint8_t x, uint16_t y);

extern void ssd1306_refresh(SSD1306_t* display);

#ifdef __cplusplus
}
#endif

#endif /* _SSD1306_H_ */
