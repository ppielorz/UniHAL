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

typedef enum
{
    SSD1306_status_ok = 0U,
    SSD1306_status_nullPointer = 1U,
    SSD1306_status_gfxSizeMismatch = 2U,
    SSD1306_status_widthTooLarge = 3U,
    SSD1306_status_heightTooLarge = 4U,
    SSD1306_status_csPinInitError = 5U,
    SSD1306_status_rstPinInitError = 6U,
    SSD1306_status_dcPinInitError = 7U,
    SSD1306_status_csPinConfigureError = 8U,
    SSD1306_status_rstPinConfigureError = 9U,
    SSD1306_status_dcPinConfigureError = 10U,
    SSD1306_status_csPinWriteError = 11U,
    SSD1306_status_rstPinWriteError = 12U,
    SSD1306_status_dcPinWriteError = 13U,
    SSD1306_status_spiCommunicationError = 14U,
    SSD1306_status_invalidMuxRatio = 15U,
    SSD1306_status_invalidDisplayStartLine = 16U,
    SSD1306_status_invalidAddressingMode = 17U,
} SSD1306_status_t;

typedef enum
{
    SSD1306_addressingMode_horizontal = 0x00,
    SSD1306_addressingMode_vertical = 0x01,
    SSD1306_addressingMode_page = 0x02,

    SSD1306_addressingMode_count
} SSD1306_addressingMode_t;


typedef struct
{
    monoGFX_t* gfx;
    size_t xSize;
    size_t ySize;
    uint8_t address;
    SSD1306_addressingMode_t addressingMode;

   UniHAL_spi_t* spi;
   UniHAL_i2c_t* i2c;
   UniHAL_gpio_t* cs;
   UniHAL_gpio_t* rst;
   UniHAL_gpio_t* dc;
} SSD1306_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/
extern SSD1306_status_t ssd1306_initSPI(SSD1306_t* const display, monoGFX_t* const gfx, const UniHAL_spi_t* const spi,
                                        const UniHAL_gpio_t* const cs, const UniHAL_gpio_t* const rst, const UniHAL_gpio_t* const dc);

extern void ssd1306_initI2C(SSD1306_t* display, monoGFX_t* gfx, UniHAL_i2c_t* i2c, uint8_t address);

extern SSD1306_status_t ssd1306_refresh(const SSD1306_t* const display);

/*!
 * @brief Sets fundamental display parameters.
 *
 * @details
 *
 * @param display Pointer to @ref SSD1306_t display struct.
 * @param
 * @param
 *
 * @return SSD1306 status code (see @ref SSD1306_status_t).
 */
extern SSD1306_status_t ssd1306_setContrast(const SSD1306_t* const display, const uint8_t contrast);

extern SSD1306_status_t ssd1306_displayOn(const SSD1306_t* const display, const bool displayOn);

#ifdef __cplusplus
}
#endif

#endif /* _SSD1306_H_ */
