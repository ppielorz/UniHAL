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
#include "unihal/monogfx/monogfx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define CHECK_AND_RETURN_STATUS(condition, failStatus) if(!(condition)) { return failStatus; }
#define IS_ROTATED_BY_90_DEG(gfx) (gfx->rotation == monoGFX_rotation_clockwise || gfx->rotation == monoGFX_rotation_counterclockwise)
#define BUFFER_OFFSET(xPositionRotated, yPositionRotated, xSizeBuffer) (xPositionRotated / 8U + yPositionRotated * ((xSizeBuffer + 7U) / 8U))
#define PIXEL_BITMASK(bitReverseOrder, xPositionRotated) ((uint8_t) ((bitReverseOrder) ? (0x01 << (xPositionRotated % 8)) : (0x80 >> (xPositionRotated % 8))))

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
#define APPLY_X_POSITION_ROTATION(rotation, xSizeBuffer, xPosition, yPosition) (uint16_t) \
    (rotation == monoGFX_rotation_none ?                xPosition : \
    (rotation == monoGFX_rotation_clockwise ?           (xSizeBuffer - yPosition - 1U) : \
    (rotation == monoGFX_rotation_counterclockwise ?    yPosition : \
                                                        (xSizeBuffer - xPosition - 1U))))

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
#define APPLY_Y_POSITION_ROTATION(rotation, ySizeBuffer, xPosition, yPosition) (uint16_t) \
    (rotation == monoGFX_rotation_none ?                yPosition : \
    (rotation == monoGFX_rotation_clockwise ?           xPosition : \
    (rotation == monoGFX_rotation_counterclockwise ?    (ySizeBuffer - xPosition - 1U) : \
                                                        (ySizeBuffer - yPosition - 1U))))


/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

static void setPixelInternal(const monoGFX_t* const gfx, const uint16_t xPosition, const uint16_t yPosition);

static monoGFX_status_t textWidget_render(monoGFX_t* const gfx, const monoGFX_textWidget_t* const text);
static monoGFX_status_t lineWidget_render(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line);

static bool applyStyleOnLineRenderStep(const monoGFX_lineWidget_t* const line, const uint16_t step);
static void renderLineStep(const monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line, const uint16_t xPosition, const uint16_t yPosition, const uint16_t stepCount);
static monoGFX_status_t drawVerticalLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line);
static monoGFX_status_t drawHorizontalLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line);
static monoGFX_status_t drawLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line);

/******************************************************************************
 Public Functions
 *****************************************************************************/

monoGFX_status_t monoGFX_init(monoGFX_t* const gfx, const uint16_t xSize, const uint16_t ySize, uint8_t* const buffer, 
                                const size_t bufferSize, const monoGFX_rotation_t rotation)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(buffer != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);
    CHECK_AND_RETURN_STATUS(bufferSize >= ((((size_t) ySize + (8 - 1)) / 8 ) * (size_t) xSize), monoGFX_status_bufferTooSmall);

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

monoGFX_status_t monoGFX_setPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);

    if(xPosition >= 0 && xPosition < gfx->xSize && yPosition >= 0 && yPosition < gfx->ySize)
    {
        setPixelInternal(gfx, (uint16_t) xPosition, (uint16_t) yPosition);
    }

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_clearPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);

    if(xPosition >= 0 && xPosition < gfx->xSize && yPosition >= 0 && yPosition < gfx->ySize)
    {
        uint16_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, (uint16_t) xPosition, (uint16_t) yPosition);
        uint16_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, (uint16_t) xPosition, (uint16_t) yPosition);
        size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
        CHECK_AND_RETURN_STATUS(offset < gfx->bufferSize, monoGFX_status_bufferOverflow);
        gfx->buffer[offset] &= ~PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);
    }

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_getPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition, bool* const pixelSet)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(gfx->rotation < monoGFX_rotation_count, monoGFX_status_invalidRotation);
    CHECK_AND_RETURN_STATUS(pixelSet != NULL, monoGFX_status_nullPointer);

    if(xPosition >= 0 && xPosition < gfx->xSize && yPosition >= 0 && yPosition < gfx->ySize)
    {
        uint16_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, (uint16_t) xPosition, (uint16_t) yPosition);
        uint16_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, (uint16_t) xPosition, (uint16_t) yPosition);
        size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
        CHECK_AND_RETURN_STATUS(offset < gfx->bufferSize, monoGFX_status_bufferOverflow);
        *pixelSet = gfx->buffer[offset] & PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);
    }

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_putChar(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char character)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    //CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    //CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
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

#if 0
monoGFX_status_t monoGFX_print(const monoGFX_t* const gfx, const size_t xPosition, const size_t yPosition, const monoGFX_font_t* const font, const char* const string)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    //CHECK_AND_RETURN_STATUS(xPosition < gfx->xSize, monoGFX_status_xAxisExceeded);
    //CHECK_AND_RETURN_STATUS(yPosition < gfx->ySize, monoGFX_status_yAxisExceeded);
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
#endif

monoGFX_status_t monoGFX_screenInit(monoGFX_t* const gfx, monoGFX_screen_t* const screen)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(screen != NULL, monoGFX_status_nullPointer);

    screen->gfx = gfx;
    screen->widgets = NULL;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_screenUnlinkWidgets(monoGFX_screen_t* const screen)
{
    CHECK_AND_RETURN_STATUS(screen != NULL, monoGFX_status_nullPointer);

    monoGFX_widget_t** cleared = &screen->widgets;
    while(*cleared != NULL)
    {
        monoGFX_widget_t** next = &(*cleared)->next;
        *cleared = NULL;
        cleared = next;
    }

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_screenRender(monoGFX_t* const gfx, const monoGFX_screen_t* const screen)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(screen != NULL, monoGFX_status_nullPointer);

    monoGFX_widget_t* const* toRender = &screen->widgets;
    monoGFX_status_t status = monoGFX_status_widgetNotFound;
    while(*toRender != NULL)
    {
        switch((*toRender)->type)
        {
            case monoGFX_widgetType_text:
                status = textWidget_render(gfx, (const monoGFX_textWidget_t*) (*toRender));
            break;

            case monoGFX_widgetType_line:
                status = lineWidget_render(gfx, (const monoGFX_lineWidget_t*) (*toRender));
            break;

            default:
                status = monoGFX_status_widgetNotFound;
            break;
        }

        if(status != monoGFX_status_success)
        {
            break;
        }
        toRender = &(*toRender)->next;
    }

    return status;
}

monoGFX_status_t monoGFX_widgetLink(monoGFX_screen_t* const screen, monoGFX_widget_t* const widget)
{
    CHECK_AND_RETURN_STATUS(screen != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(widget != NULL, monoGFX_status_nullPointer);

    widget->next = NULL;

    monoGFX_widget_t** next = &screen->widgets;
    while(*next != NULL)
    {
        next = &(*next)->next;
    }
    *next = widget;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_widgetUnlink(monoGFX_screen_t* const screen, monoGFX_widget_t* const widget)
{
    CHECK_AND_RETURN_STATUS(screen != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(widget != NULL, monoGFX_status_nullPointer);

    if(screen->widgets == widget)
    {
        screen->widgets = screen->widgets->next;
        return monoGFX_status_success;
    }
    else
    {
        monoGFX_widget_t* checked = screen->widgets;
        while(checked != NULL)
        {
            if(checked->next == widget)
            {
                checked->next = checked->next->next;
                return monoGFX_status_success;
            }
            checked = checked->next;
        }
    }

    return monoGFX_status_widgetNotFound;
}

monoGFX_status_t monoGFX_textInit(monoGFX_textWidget_t* const text, const int16_t xPosition, const int16_t yPosition, 
                            const monoGFX_font_t* const font, char* const textBuffer)
{
    CHECK_AND_RETURN_STATUS(text != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(font != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(textBuffer != NULL, monoGFX_status_nullPointer);

    text->type = monoGFX_widgetType_text;
    text->xPosition = xPosition;
    text->yPosition = yPosition;
    text->font = font;
    text->textBuffer = textBuffer;
    text->alignment = monoGFX_textWidget_alignment_left;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_textSetAlignment(monoGFX_textWidget_t* const text, const monoGFX_textWidget_alignment_t alignment)
{
    CHECK_AND_RETURN_STATUS(text != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(alignment < monoGFX_textWidget_alignment_count, monoGFX_status_invalidTextAlignment);

    text->alignment = alignment;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_lineInit(monoGFX_lineWidget_t* const line, 
                            const int16_t xStart, const int16_t yStart, const int16_t xEnd, const int16_t yEnd)
{
    CHECK_AND_RETURN_STATUS(line != NULL, monoGFX_status_nullPointer);

    line->type = monoGFX_widgetType_line;
    line->xStart = xStart < xEnd ? xStart : xEnd;
    line->yStart = yStart < yEnd ? yStart : yEnd;
    line->xEnd = xStart < xEnd ? xEnd : xStart;
    line->yEnd = yStart < yEnd ? yEnd : yStart;
    line->thickness = 1;
    line->style = monoGFX_lineWidget_style_solid;

    return monoGFX_status_success;
}

monoGFX_status_t monoGFX_lineSetStyle(monoGFX_lineWidget_t* const line,
                            const uint8_t thickness, const monoGFX_lineWidget_style_t style)
{
    CHECK_AND_RETURN_STATUS(line != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(style < monoGFX_lineWidget_style_count, monoGFX_status_invalidLineStyle);

    line->thickness = thickness;
    line->style = style;

    return monoGFX_status_success;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
static void setPixelInternal(const monoGFX_t* const gfx, const uint16_t xPosition, const uint16_t yPosition)
{
    if(gfx != NULL)
    {
        const uint16_t xPositionRotated = APPLY_X_POSITION_ROTATION(gfx->rotation, gfx->xSizeBuffer, xPosition, yPosition);
        const uint16_t yPositionRotated = APPLY_Y_POSITION_ROTATION(gfx->rotation, gfx->ySizeBuffer, xPosition, yPosition);
        const size_t offset = BUFFER_OFFSET(xPositionRotated, yPositionRotated, gfx->xSizeBuffer);
        if(offset < gfx->bufferSize)
        {
            gfx->buffer[offset] |= PIXEL_BITMASK(gfx->bitReverseOrder, xPositionRotated);
        }
    }
}


static monoGFX_status_t textWidget_render(monoGFX_t* const gfx, const monoGFX_textWidget_t* const text)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(text != NULL, monoGFX_status_nullPointer);

    int16_t xPosition = text->xPosition;
    int16_t yPosition = text->yPosition;

    if(text->alignment != monoGFX_textWidget_alignment_left)
    {
        int16_t textLength = 0U;
        for(size_t position = 0U; position < strlen(text->textBuffer); position++)
        {
            const char character = text->textBuffer[position];
            textLength += text->font->glyphs[character - MONOGFX_FIRST_ASCII_CHARACTER].xAdvance;
        }

        if(text->alignment == monoGFX_textWidget_alignment_center)
        {
            xPosition -= textLength / 2;
        }
        else if(text->alignment == monoGFX_textWidget_alignment_right)
        {
            xPosition -= textLength;
        }
    }


    for(size_t position = 0U; position < strlen(text->textBuffer); position++)
    {
        const char character = text->textBuffer[position];
        uint8_t bitmapWidth = text->font->glyphs[character - MONOGFX_FIRST_ASCII_CHARACTER].xAdvance;
        monoGFX_putChar(gfx, xPosition, yPosition, text->font, character);
        xPosition += bitmapWidth;
    }

    return monoGFX_status_success;
}

static bool applyStyleOnLineRenderStep(const monoGFX_lineWidget_t* const line, const uint16_t step)
{
    switch(line->style)
    {
        case monoGFX_lineWidget_style_solid:
            return true;

        case monoGFX_lineWidget_style_dashed:
            return step % 16 < 8;

        default:
            return false;
    }
}

static void renderLineStep(const monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line, const uint16_t xPosition, const uint16_t yPosition, const uint16_t stepCount)
{
    if(applyStyleOnLineRenderStep(line, stepCount))
    {
        for(int16_t yThicknessOffset = - line->thickness / 2; yThicknessOffset <= line->thickness / 2; yThicknessOffset++)
        {
            if((int16_t) yPosition + yThicknessOffset >= 0)
            {
                setPixelInternal(gfx, xPosition, (uint16_t) yPosition + yThicknessOffset);
            }
        }
    }
}

static monoGFX_status_t lineWidget_render(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(line != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(line->xEnd >= line->xStart, monoGFX_status_invalidParameter);
    CHECK_AND_RETURN_STATUS(line->yEnd >= line->yStart, monoGFX_status_invalidParameter);

    if(line->xEnd == line->xStart)
    {
        return drawVerticalLine(gfx, line);
    }
    else if(line->yEnd == line->yStart)
    {
        return drawHorizontalLine(gfx, line);
    }
    else
    {
        return drawLine(gfx, line);
    }
}

static monoGFX_status_t drawVerticalLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(line != NULL, monoGFX_status_nullPointer);

    if(line->xStart > 0)
    {
        const uint16_t yStart = (line->yStart < 0) ? 0U : (uint16_t) line->yStart;
        const uint16_t yEnd = (line->yEnd < yStart) ? 0U : ((line->yEnd > gfx->ySize) ? gfx->ySize : (uint16_t) line->yEnd);
        const uint16_t xStart = ((uint16_t) (line->thickness / 2U) >= line->xStart) ? 0U : (uint16_t) (line->xStart - (uint16_t) (line->thickness / 2U) + (uint16_t) (1U - line->thickness % 2U));
        const uint16_t xEnd = ((line->xStart + (line->thickness / 2) - 1) >= gfx->xSize) ? (uint16_t) (gfx->xSize - 1) : (uint16_t) (line->xStart + (uint16_t) (line->thickness / 2U));

        for(uint16_t y = yStart; y < yEnd; y++)
        {
            if(applyStyleOnLineRenderStep(line, y - yStart))
            {
                for(uint16_t x = xStart; x <= xEnd; x++)
                {
                    setPixelInternal(gfx, x, y);
                }
            }
        }
    }

    return monoGFX_status_success;
}

static monoGFX_status_t drawHorizontalLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line)
{
    CHECK_AND_RETURN_STATUS(gfx != NULL, monoGFX_status_nullPointer);
    CHECK_AND_RETURN_STATUS(line != NULL, monoGFX_status_nullPointer);

    if(line->yStart > 0)
    {
        const uint16_t xStart = (line->xStart < 0) ? 0U : (uint16_t) line->xStart;
        const uint16_t xEnd = (line->xEnd < xStart) ? 0U : ((line->xEnd > gfx->xSize) ? gfx->xSize : (uint16_t) line->xEnd);
        const uint16_t yStart = ((uint16_t) (line->thickness / 2U) >= line->yStart) ? 0U : (uint16_t) (line->yStart - (uint16_t) (line->thickness / 2U) + (uint16_t) (1U - line->thickness % 2U));
        const uint16_t yEnd = ((line->yStart + (line->thickness / 2) - 1) >= gfx->ySize) ? (uint16_t) (gfx->ySize - 1) : (uint16_t) (line->yStart + (uint16_t) (line->thickness / 2U));

        for(uint16_t x = xStart; x < xEnd; x++)
        {
            if(applyStyleOnLineRenderStep(line, x - xStart))
            {
                for(uint16_t y = yStart; y <= yEnd; y++)
                {
                    setPixelInternal(gfx, x, y);
                }
            }
        }
    }

    return monoGFX_status_success;
}

static monoGFX_status_t drawLine(monoGFX_t* const gfx, const monoGFX_lineWidget_t* const line)
{
    const int32_t a = (((int32_t) line->yEnd - (int32_t) line->yStart)) * 100 / ((int32_t) line->xEnd - (int32_t) line->xStart);
    const int32_t b = (int32_t) line->yStart * 100 - (int32_t) line->xStart * a;
    const int16_t xLength = line->xEnd - line->xStart;
    const int16_t yLength = line->yEnd - line->yStart;
    uint16_t stepCount = 0U;

    if(xLength > yLength)
    {
        const uint16_t xStart = (line->xStart < 0) ? 0U : (uint16_t) line->xStart;
        const uint16_t xEnd = (line->xEnd < xStart) ? 0U : ((line->xEnd > gfx->xSize) ? gfx->xSize : (uint16_t) line->xEnd);

        for (uint16_t x = xStart; x < xEnd; x++)
        {
            renderLineStep(gfx, line, x, (uint16_t) ((a * x + b) / 100), stepCount++);
        }
    }
    else
    {
        const uint16_t yStart = (line->yStart < 0) ? 0U : (uint16_t) line->yStart;
        const uint16_t yEnd = (line->yEnd < yStart) ? 0U : ((line->yEnd > gfx->ySize) ? gfx->ySize : (uint16_t) line->yEnd);

        for (uint16_t y = yStart; y < yEnd; y++)
        {
            renderLineStep(gfx, line, (uint16_t) ((100 * y - b) / a), y, stepCount++);
        }
    }

    return monoGFX_status_success;
}

