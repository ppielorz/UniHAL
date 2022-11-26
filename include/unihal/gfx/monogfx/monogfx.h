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
typedef enum
{
    monoGFX_status_success = 0U,
    monoGFX_status_nullPointer = 1U,
    monoGFX_status_invalidRotation = 2U,
    monoGFX_status_bufferTooSmall = 3U,
    monoGFX_status_xAxisExceeded = 4U,
    monoGFX_status_yAxisExceeded = 5U,
    monoGFX_status_invalidThickness = 6U
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
    uint8_t* buffer;
    size_t bufferSize;
    size_t xSize;
    size_t ySize;
    size_t xSizeBuffer;
    size_t ySizeBuffer;
    bool bitReverseOrder;
    monoGFX_rotation_t rotation;
} monoGFX_t;


/*typedef struct
{
    uint8_t height;
    uint8_t bitmapWidth[95];
    const uint8_t* bitmapAddr[95];
} monoGFX_Font_t;

*/

/// Font data stored PER GLYPH
typedef struct {
  uint16_t bitmapOffset; ///< Pointer into GFXfont->bitmap
  uint8_t width;         ///< Bitmap dimensions in pixels
  uint8_t height;        ///< Bitmap dimensions in pixels
  uint8_t xAdvance;      ///< Distance to advance cursor (x axis)
  int8_t xOffset;        ///< X dist from cursor pos to UL corner
  int8_t yOffset;        ///< Y dist from cursor pos to UL corner
} GFXglyph;

/// Data stored for FONT AS A WHOLE
typedef struct {
  uint8_t *bitmap;  ///< Glyph bitmaps, concatenated
  GFXglyph *glyph;  ///< Glyph array
  uint16_t first;   ///< ASCII extents (first char)
  uint16_t last;    ///< ASCII extents (last char)
  uint8_t yAdvance; ///< Newline distance (y axis)
} GFXfont;

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
extern uint8_t monoGFX_getPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition);
extern void monoGFX_drawLine(monoGFX_t* gfx, size_t xStart, size_t yStart, size_t xEnd, size_t yEnd);
extern void monoGFX_putChar(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const GFXfont* const gfxFont, const char ch);
extern void monoGFX_print(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const GFXfont* const gfxFont, const char* const string);
#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_H_ */
