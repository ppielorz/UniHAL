/******************************************************************************
 @file monogfx.c

 @brief MonoGFX implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdlib.h>
#include <string.h>
#include "monogfx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/


/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Public Functions
 *****************************************************************************/

void monoGFX_init(monoGFX_t* gfx, size_t xSize, size_t ySize, uint8_t* buffer, size_t bufferSize)
{
    //DU_ASSERT(gfx != NULL);
    //DU_ASSERT(buffer != NULL);
    //DU_ASSERT(xSize < (SIZE_MAX - 7));
    //DU_ASSERT(bufferSize >= (((ySize + (8 - 1)) / 8 ) * xSize));
    memset(gfx, 0U, sizeof(gfx));

    gfx->xSize = xSize;
    gfx->ySize = ySize;
    gfx->buffer = buffer;
    gfx->bufferSize = bufferSize;
}

void monoGFX_clear(monoGFX_t* gfx)
{
    memset(gfx->buffer, 0U, gfx->bufferSize);
}

void monoGFX_drawVLine(monoGFX_t* gfx, size_t xPosition, size_t thickness)
{
    size_t y = 0;
    size_t xBufferWidth = (gfx->xSize + 8 - 1) / 8;
    uint8_t firstColumnMask = 0;
    uint8_t lastColumnMask = 0;

    uint8_t i = 0;
    //for(i = 0; i < )

    //if(display->xSize % 8 != 0)
    //{
    //    xBufferWidth++;
    //}
    for(y = 0; y < gfx->ySize / 8; y++)
    {
        gfx->buffer[xPosition + y * gfx->xSize] = 0xFF;
        //monoGFX_setPixel(gfx, xPosition, y);
    }
}

void monoGFX_drawHLine(monoGFX_t* gfx, size_t yPosition, size_t thickness)
{
    size_t x = 0;
    for(x = 0; x < gfx->xSize; x++)
    {
        //monoGFX_setPixel(gfx, x, yPosition);
        gfx->buffer[yPosition / 8 * gfx->xSize + x] |= 0x01 << (yPosition % 8);
    }
}

void monoGFX_setPixel(monoGFX_t* gfx, size_t xPosition, size_t yPosition)
{
    /* TODO
    Dla SSD1306 oraz SSD1675 potrzebna jest odwrotna kolejność bitów w bajcie.
    Do uwzględnienia jako parametr konfiguracyjny monoGFX.
    */
    gfx->buffer[xPosition + yPosition / 8 * gfx->xSize] |= 0x01 << (yPosition % 8);
}

void monoGFX_clearPixel(monoGFX_t* gfx, size_t x, size_t y)
{

}

uint8_t monoGFX_getPixel(monoGFX_t* gfx, size_t xPosition, size_t yPosition)
{
    uint8_t glyph = gfx->buffer[xPosition + yPosition / 8 * gfx->xSize];
    if(glyph & (0x80 >> (xPosition % 8)))
    {
        return 0;
    }
    
    return 255;
}

void monoGFX_drawLine(monoGFX_t* gfx, size_t xStart, size_t yStart, size_t xEnd, size_t yEnd)
{
    int32_t a = ((int32_t) yEnd - (int32_t) yStart) / ((int32_t) xEnd - (int32_t) xStart);
    int32_t b = (int32_t) yStart - (int32_t) xStart * a;

    if(gfx->xSize > gfx->ySize)
    {
        size_t x = 0;
        for (x = xStart; x < xEnd; x++)
        {
            monoGFX_setPixel(gfx, x, a * x + b);
        }
    }
    else
    {
        size_t y = 0;
        for (y = yStart; y < yEnd; y++)
        {
            monoGFX_setPixel(gfx, (y - b) / a, y);
        }
    }
}

void monoGFX_putChar(monoGFX_t* gfx, size_t xPosition, size_t yPosition, const GFXfont* gfxFont, uint8_t ch)
{
    ch -= gfxFont->first;
    GFXglyph *glyph = &gfxFont->glyph[ch];
    uint8_t *bitmap = gfxFont->bitmap;

    uint16_t bo = glyph->bitmapOffset;
    uint8_t w = glyph->width;
    uint8_t h = glyph->height;
    int8_t xo = glyph->xOffset;
    int8_t yo = glyph->yOffset;
    uint8_t size_x = 1;
    uint8_t size_y = 1;
    uint8_t xx;
    uint8_t yy;
    uint8_t bits = 0;
    uint8_t bit = 0;
    int16_t xo16 = 0;
    int16_t yo16 = 0;

    if (size_x > 1 || size_y > 1) {
      xo16 = xo;
      yo16 = yo;
    }

    // Todo: Add character clipping here

    // NOTE: THERE IS NO 'BACKGROUND' COLOR OPTION ON CUSTOM FONTS.
    // THIS IS ON PURPOSE AND BY DESIGN.  The background color feature
    // has typically been used with the 'classic' font to overwrite old
    // screen contents with new data.  This ONLY works because the
    // characters are a uniform size; it's not a sensible thing to do with
    // proportionally-spaced fonts with glyphs of varying sizes (and that
    // may overlap).  To replace previously-drawn text when using a custom
    // font, use the getTextBounds() function to determine the smallest
    // rectangle encompassing a string, erase the area with fillRect(),
    // then draw new text.  This WILL infortunately 'blink' the text, but
    // is unavoidable.  Drawing 'background' pixels will NOT fix this,
    // only creates a new set of problems.  Have an idea to work around
    // this (a canvas object type for MCUs that can afford the RAM and
    // displays supporting setAddrWindow() and pushColors()), but haven't
    // implemented this yet.

    yo = gfxFont->yAdvance + yo;

    for (yy = 0; yy < h; yy++)
    {
        for (xx = 0; xx < w; xx++)
        {
            if (!(bit++ & 7))
            {
                bits = bitmap[bo++];
            }
            if (bits & 0x80)
            {
                if (size_x == 1 && size_y == 1)
                {
                    monoGFX_setPixel(gfx, xPosition + xo + xx,
                                     yPosition + yo + yy);
                    //monoGFX_setPixel(gfx, yPosition + yo + yy, xPosition + xo + xx);
                }
                else
                {
                    //writeFillRect(x + (xo16 + xx) * size_x, y + (yo16 + yy) * size_y,
                    //size_x, size_y, color);
                }
            }
            bits <<= 1;
        }
    }

}

void monoGFX_print(monoGFX_t* gfx, size_t xPosition, size_t yPosition, const GFXfont* gfxFont, uint8_t* string)
{
    //DU_ASSERT(gfx != NULL);
    //DU_ASSERT(gfx->xSize > xPosition);
    //DU_ASSERT(gfx->ySize > yPosition);
    //DU_ASSERT(string != NULL);

    size_t x = xPosition;
    size_t y = yPosition;

    while(*string != 0U)
    {
        uint8_t bitmapWidth = gfxFont->glyph[*string - gfxFont->first].xAdvance;
        if((x + bitmapWidth) > gfx->xSize)
        {
            y += gfxFont->yAdvance;
            x = 0;
        }
        monoGFX_putChar(gfx, x, y, gfxFont, *string);
        x += bitmapWidth;
        string++;
    }

}
/******************************************************************************
 Local Functions
 *****************************************************************************/

