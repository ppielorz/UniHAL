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
#include "unihal/gfx/monogfx/monogfx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define CHECK_AND_RETURN_STATUS(condition, failStatus) if(!(condition)) { return failStatus; }
#define IS_ROTATED_BY_90_DEG(gfx) (gfx->rotation == monoGFX_rotation_clockwise || gfx->rotation == monoGFX_rotation_counterclockwise)
#define BUFFER_OFFSET(xPositionRotated, yPositionRotated, xSizeBuffer) (xPositionRotated / 8 + yPositionRotated * ((xSizeBuffer + 7) / 8))
#define PIXEL_BITMASK(bitReverseOrder, xPositionRotated) ((bitReverseOrder) ? (0x01 << (xPositionRotated % 8)) : (0x80 >> (xPositionRotated % 8)))

/**
 * @brief Converts xPosition according to actual rotation.
 * 
 * @param rotation Actual rotation.
 * @param xSizeBuffer Size of X axis in the buffer.
 * @param xPosition Original position in X axis.
 * @param yPosition Original position in Y axis.
 * 
 * @pre xPosition and yPosition shall be checked for being "in bounds" before calling this macro.
 * @pre rotation shall be checked for being "in bounds" before calling this macro.
 */
#define APPLY_X_POSITION_ROTATION(rotation, xSizeBuffer, xPosition, yPosition) (rotation == monoGFX_rotation_none ? xPosition : (rotation == monoGFX_rotation_clockwise ? (xSizeBuffer - yPosition - 1) : (rotation == monoGFX_rotation_counterclockwise ? yPosition : (xSizeBuffer - xPosition - 1))))

/**
 * @brief Converts xPosition according to actual rotation.
 * 
 * @param rotation Actual rotation.
 * @param ySizeBuffer Size of Y axis in the buffer.
 * @param xPosition Original position in X axis.
 * @param yPosition Original position in Y axis.
 * 
 * @pre xPosition and yPosition shall be checked for being "in bounds" before calling this macro.
 * @pre rotation shall be checked for being "in bounds" before calling this macro.
 */
#define APPLY_Y_POSITION_ROTATION(rotation, ySizeBuffer, xPosition, yPosition) (rotation == monoGFX_rotation_none ? yPosition : (rotation == monoGFX_rotation_clockwise ? xPosition : (rotation == monoGFX_rotation_counterclockwise ? (ySizeBuffer - xPosition - 1) : (ySizeBuffer - yPosition - 1))))


/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Public Functions
 *****************************************************************************/

monoGFX_status_t monoGFX_init(monoGFX_t* const gfx, const size_t xSize, const size_t ySize, uint8_t* const buffer, 
                                const size_t bufferSize, const monoGFX_rotation_t rotation)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(buffer != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);
    CHECK_AND_RETURN_STATUS(bufferSize >= (((ySize + (8 - 1)) / 8 ) * xSize), monoGFX_status_bufferTooSmall);

    memset(gfx, 0U, sizeof(*gfx));
    memset(buffer, 0U, bufferSize);

    gfx->xSize = xSize;
    gfx->ySize = ySize;
    gfx->rotation = rotation;
    gfx->xSizeBuffer = IS_ROTATED_BY_90_DEG(gfx) ? ySize : xSize;
    gfx->ySizeBuffer = IS_ROTATED_BY_90_DEG(gfx) ? xSize : ySize;
    gfx->buffer = buffer;
    gfx->bufferSize = bufferSize;
    gfx->bitReverseOrder = false;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_clear(const monoGFX_t* const gfx)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);

    memset(gfx->buffer, 0U, gfx->bufferSize);

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_drawVLine(const monoGFX_t* const gfx, const size_t xPosition, const size_t thickness)
{
    monoGFX_status_t status = monoGFX_status_success;
    const size_t xStart = (thickness / 2) >= xPosition ? 0U : xPosition - thickness / 2;
    const size_t xEnd = (xPosition + (thickness / 2) - 1) >= gfx->xSize ? gfx->xSize - 1 : xPosition + thickness / 2;

    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(thickness > 0U, monoGFX_status_invalidThickness);

    for(size_t x = xStart; x <= xEnd; x++)
    {
        for(size_t yPosition = 0; yPosition < gfx->ySize; yPosition++)
        {
            status = monoGFX_setPixel(gfx, x, yPosition);
            if(status != monoGFX_status_success)
            {
                return status;
            }
        }
    }

    return status;
}

void monoGFX_drawHLine(monoGFX_t* gfx, size_t yPosition, size_t thickness)
{
    (void) thickness;
    size_t x = 0;
    for(x = 0; x < gfx->xSize; x++)
    {
        //monoGFX_setPixel(gfx, x, yPosition);
        gfx->buffer[yPosition / 8 * gfx->xSize + x] |= 0x01 << (yPosition % 8);
    }
}

monoGFX_status_t monoGFX_setPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);

    size_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, xPosition, yPosition);
    size_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, xPosition, yPosition);
    size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
    CHECK_AND_RETURN_STATUS(offset < gfx->bufferSize, monoGFX_status_bufferOverflow);
    gfx->buffer[offset] |= PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_clearPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);

    size_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, xPosition, yPosition);
    size_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, xPosition, yPosition);
    size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
    CHECK_AND_RETURN_STATUS(offset < gfx->bufferSize, monoGFX_status_bufferOverflow);
    gfx->buffer[offset] &= ~PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_getPixel(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, bool* const pixelSet)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);
    CHECK_AND_RETURN_STATUS(pixelSet != NULL, monoGFX_status_nullPointer);

    size_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, xPosition, yPosition);
    size_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, xPosition, yPosition);
    size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
    CHECK_AND_RETURN_STATUS(offset < gfx->bufferSize, monoGFX_status_bufferOverflow);
    *pixelSet = gfx->buffer[offset] & PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);

    return monoGFX_status_success;
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

monoGFX_status_t monoGFX_putChar(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char character)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
    CHECK_AND_RETURN_STATUS(font != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(character >= MONOGFX_FIRST_ASCII_CHARACTER, monoGFX_status_unknownCharacter);

    const monoGFX_glyph_t* glyph = &font->glyphs[character - MONOGFX_FIRST_ASCII_CHARACTER];
    const uint8_t* glyphBitmap = &font->bitmap[glyph->bitmapOffset];
    size_t bitNumber = 0U;

    for(size_t y = 0U; y < glyph->height; y++)
    {
        for(size_t x = 0U; x < glyph->width; x++)
        {
            if(*(glyphBitmap + bitNumber / 8) & (1 << bitNumber % 8))
            {
                monoGFX_setPixel(gfx, xPosition + x + glyph->xOffset, yPosition + y + glyph->yOffset);
            }
            bitNumber++;
        }
    }

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_print(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char* const string)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
    CHECK_AND_RETURN_STATUS(font != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(string != NULL, monoGFX_status_nullPointer);

    size_t x = xPosition;
    size_t y = yPosition;
    //size_t length = ;

    for(size_t position = 0U; position < strlen(string); position++)
    //while(*string != 0U)
    {
        const char character = string[position];
        uint8_t bitmapWidth = font->glyphs[character - MONOGFX_FIRST_ASCII_CHARACTER].xAdvance;
        /*if((x + bitmapWidth) > gfx->xSize)
        {
            y += gfxFont->yAdvance;
            x = 0;
        }*/
        monoGFX_putChar(gfx, x, y, font, character);
        x += bitmapWidth;
    }

    return monoGFX_status_success;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
