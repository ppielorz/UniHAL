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
    monoGFX_status_invalidThickness = 6U,
    monoGFX_status_bufferOverflow = 7U, /* internal error */
    monoGFX_status_unknownCharacter = 8U,
    monoGFX_status_widgetNotFound = 9U,
    monoGFX_status_invalidLineStyle = 10U,
    monoGFX_status_invalidParameter = 11U,
    monoGFX_status_invalidTextAlignment = 12U
} monoGFX_status_t;

typedef enum
{
    monoGFX_rotation_none = 0U,
    monoGFX_rotation_clockwise = 1U,
    monoGFX_rotation_counterclockwise = 2U,
    monoGFX_rotation_halfTurn = 3U,

    monoGFX_rotation_count
} monoGFX_rotation_t;

typedef enum
{
    monoGFX_widgetType_text = 0U,
    monoGFX_widgetType_line = 1U,

    monoGFX_widgetType_count
} monoGFX_widgetType_t;

typedef struct monoGFX_glyph_t
{
    const size_t bitmapOffset;
    const uint8_t xAdvance;
    const int8_t xOffset;
    const int8_t yOffset;
    const uint8_t width;
    const uint8_t height;
} monoGFX_glyph_t;

typedef struct monoGFX_font_t
{
    const uint8_t* bitmap;
    const size_t bitmapSize;
    const monoGFX_glyph_t* const glyphs;
} monoGFX_font_t;


typedef struct monoGFX_t
{
    uint8_t* buffer;
    size_t bufferSize;
    uint16_t xSize;
    uint16_t ySize;
    uint16_t xSizeBuffer;
    uint16_t ySizeBuffer;
    bool bitReverseOrder;
    monoGFX_rotation_t rotation;
} monoGFX_t;

#define MONOGFX_WIDGET_BASE         \
    struct monoGFX_widget_t* next;  \
    monoGFX_widgetType_t type;      \

typedef struct monoGFX_widget_t
{
    MONOGFX_WIDGET_BASE
} monoGFX_widget_t;

typedef struct monoGFX_screen_t
{
    monoGFX_t* gfx;
    monoGFX_widget_t* widgets;
} monoGFX_screen_t;

typedef enum
{
    monoGFX_textWidget_alignment_left,
    monoGFX_textWidget_alignment_center,
    monoGFX_textWidget_alignment_right,

    monoGFX_textWidget_alignment_count
} monoGFX_textWidget_alignment_t;

typedef struct monoGFX_textWidget_t
{
    MONOGFX_WIDGET_BASE
    int16_t xPosition;
    int16_t yPosition;
    const monoGFX_font_t* font;
    char* textBuffer;
    monoGFX_textWidget_alignment_t alignment;
} monoGFX_textWidget_t;

typedef enum
{
    monoGFX_lineWidget_style_solid,
    monoGFX_lineWidget_style_dashed,

    monoGFX_lineWidget_style_count
} monoGFX_lineWidget_style_t;

typedef struct monoGFX_lineWidget_t
{
    MONOGFX_WIDGET_BASE
    int16_t xStart;
    int16_t yStart;
    int16_t xEnd;
    int16_t yEnd;
    uint8_t thickness;
    monoGFX_lineWidget_style_t style;
} monoGFX_lineWidget_t;


/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern monoGFX_status_t monoGFX_init(monoGFX_t* const gfx, const uint16_t xSize, const uint16_t ySize, uint8_t* const buffer, 
                                        const size_t bufferSize, const monoGFX_rotation_t rotation);
extern monoGFX_status_t monoGFX_clear(const monoGFX_t* const gfx);
extern monoGFX_status_t monoGFX_setPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition);
extern monoGFX_status_t monoGFX_clearPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition);
extern monoGFX_status_t monoGFX_getPixel(const monoGFX_t* const gfx, const int16_t xPosition, const int16_t yPosition, bool* const pixelSet);

extern monoGFX_status_t monoGFX_screenInit(monoGFX_t* const gfx, monoGFX_screen_t* const screen);
extern monoGFX_status_t monoGFX_screenUnlinkWidgets(monoGFX_screen_t* const screen);
extern monoGFX_status_t monoGFX_screenRender(monoGFX_t* const gfx, const monoGFX_screen_t* const screen);

extern monoGFX_status_t monoGFX_widgetLink(monoGFX_screen_t* const screen, monoGFX_widget_t* const widget);
extern monoGFX_status_t monoGFX_widgetUnlink(monoGFX_screen_t* const screen, monoGFX_widget_t* const widget);

extern monoGFX_status_t monoGFX_textInit(monoGFX_textWidget_t* const text, const int16_t xPosition, const int16_t yPosition, 
                            const monoGFX_font_t* const font, char* const textBuffer);

extern monoGFX_status_t monoGFX_textSetAlignment(monoGFX_textWidget_t* const text, const monoGFX_textWidget_alignment_t alignment);

extern monoGFX_status_t monoGFX_lineInit(monoGFX_lineWidget_t* const line, 
                            const int16_t xStart, const int16_t yStart, const int16_t xEnd, const int16_t yEnd);

extern monoGFX_status_t monoGFX_lineSetStyle(monoGFX_lineWidget_t* const line,
                            const uint8_t thickness, const monoGFX_lineWidget_style_t style);
#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_H_ */
