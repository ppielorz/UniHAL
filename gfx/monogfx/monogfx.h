/*****************************************************************************
 @file monogfx.h

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef MONOGFX_H_
#define MONOGFX_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
typedef struct
{
    uint8_t* buffer;
    size_t bufferSize;
    size_t xSize;
    size_t ySize;
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

extern void monoGFX_init(monoGFX_t* gfx, size_t xSize, size_t ySize, uint8_t* buffer, size_t bufferSize);
extern void monoGFX_clear(monoGFX_t* gfx);
extern void monoGFX_drawHLine(monoGFX_t* gfx, size_t yPosition, size_t thickness);
extern void monoGFX_drawVLine(monoGFX_t* gfx, size_t xPosition, size_t thickness);
extern void monoGFX_setPixel(monoGFX_t* gfx, size_t xPosition, size_t yPosition);
extern void monoGFX_clearPixel(monoGFX_t* gfx, size_t x, size_t y);
extern uint8_t monoGFX_getPixel(monoGFX_t* gfx, size_t xPosition, size_t yPosition);
extern void monoGFX_drawLine(monoGFX_t* gfx, size_t xStart, size_t yStart, size_t xEnd, size_t yEnd);
extern void monoGFX_putChar(monoGFX_t* gfx, size_t xPosition, size_t yPosition, const GFXfont* gfxFont, uint8_t ch);
extern void monoGFX_print(monoGFX_t* gfx, size_t xPosition, size_t yPosition, const GFXfont* gfxFont, uint8_t* string);
#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_H_ */
