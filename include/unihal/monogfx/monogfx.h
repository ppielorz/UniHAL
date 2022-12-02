/*****************************************************************************
 @file monogfx.h

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 @brief monoGFX is a simple graphics library for 2-D static binary image
 generation.

 @details

 *****************************************************************************/

#ifndef MONOGFX_H_
#define MONOGFX_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define MONOGFX_BUFFER_SIZE(xSize, ySize) (((ySize + (8 - 1)) / 8 ) * xSize)
#define MONOGFX_FIRST_ASCII_CHARACTER (' ')
typedef enum
{
    monoGFX_status_success = 0U,
    monoGFX_status_nullPointer = 1U,
    monoGFX_status_invalidRotation = 2U,
    monoGFX_status_bufferTooSmall = 3U,
    monoGFX_status_xAxisExceeded = 4U,
    monoGFX_status_yAxisExceeded = 5U,
    monoGFX_status_invalidThickness = 6U,
    monoGFX_status_bufferOverflow = 7U, /* internal error */
    monoGFX_status_unknownCharacter = 8U 
} monoGFX_status_t;

typedef enum
{
    monoGFX_rotation_none = 0U,
    monoGFX_rotation_clockwise = 1U,
    monoGFX_rotation_counterclockwise = 2U,
    monoGFX_rotation_halfTurn = 3U,

    monoGFX_rotation_count
} monoGFX_rotation_t;

typedef struct
{
    const size_t bitmapOffset;
    const uint8_t xAdvance;
    const int8_t xOffset;
    const int8_t yOffset;
    const uint8_t width;
    const uint8_t height;
} monoGFX_glyph_t;

typedef struct
{
    const uint8_t* bitmap;
    const size_t bitmapSize;
    const monoGFX_glyph_t* const glyphs;
    const uint8_t yAdvance;
} monoGFX_font_t;

typedef struct
{
    uint8_t* buffer;
    size_t bufferSize;
    size_t xSize;
    size_t ySize;
    size_t xSizeBuffer;
    size_t ySizeBuffer;
    bool bitReverseOrder;
    monoGFX_rotation_t rotation;
} monoGFX_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern monoGFX_status_t monoGFX_init(monoGFX_t* const gfx, const size_t xSize, const size_t ySize, uint8_t* const buffer, 
                                        const size_t bufferSize, const monoGFX_rotation_t rotation);
extern monoGFX_status_t monoGFX_clear(const monoGFX_t* const gfx);
extern monoGFX_status_t monoGFX_drawVLine(const monoGFX_t* const gfx, const size_t xPosition, const size_t thickness);
extern void monoGFX_drawHLine(monoGFX_t* gfx, size_t yPosition, size_t thickness);
extern monoGFX_status_t monoGFX_setPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition);
extern monoGFX_status_t monoGFX_clearPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition);
extern monoGFX_status_t monoGFX_getPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, bool* const pixelSet);
extern void monoGFX_drawLine(monoGFX_t* gfx, size_t xStart, size_t yStart, size_t xEnd, size_t yEnd);
extern monoGFX_status_t monoGFX_putChar(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char character);
extern monoGFX_status_t monoGFX_print(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char* const string);
#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_H_ */
