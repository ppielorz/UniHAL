/******************************************************************************
 @file monogfx_fontTests.cpp

 @brief MonoGFX font tests

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "unihal/monogfx/monogfx.h"
#include "unihal/utils/array.h"
#include "unihal/monogfx/tools/monogfx_printers.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
typedef struct
{
    const monoGFX_font_t* font;
    const char* fontName;
} fontTestEntry_t;

/******************************************************************************
 External Variables
 *****************************************************************************/

extern const monoGFX_font_t monoGFX_FreeMonoBoldOblique_12pt;
extern const monoGFX_font_t monoGFX_FreeMonoBoldOblique_18pt;
extern const monoGFX_font_t monoGFX_FreeMonoBoldOblique_24pt;
extern const monoGFX_font_t monoGFX_FreeMonoBoldOblique_9pt;
extern const monoGFX_font_t monoGFX_FreeMonoBold_12pt;
extern const monoGFX_font_t monoGFX_FreeMonoBold_18pt;
extern const monoGFX_font_t monoGFX_FreeMonoBold_24pt;
extern const monoGFX_font_t monoGFX_FreeMonoBold_9pt;
extern const monoGFX_font_t monoGFX_FreeMonoOblique_12pt;
extern const monoGFX_font_t monoGFX_FreeMonoOblique_18pt;
extern const monoGFX_font_t monoGFX_FreeMonoOblique_24pt;
extern const monoGFX_font_t monoGFX_FreeMonoOblique_9pt;
extern const monoGFX_font_t monoGFX_FreeMono_12pt;
extern const monoGFX_font_t monoGFX_FreeMono_18pt;
extern const monoGFX_font_t monoGFX_FreeMono_24pt;
extern const monoGFX_font_t monoGFX_FreeMono_9pt;
extern const monoGFX_font_t monoGFX_FreeSansBoldOblique_12pt;
extern const monoGFX_font_t monoGFX_FreeSansBoldOblique_18pt;
extern const monoGFX_font_t monoGFX_FreeSansBoldOblique_24pt;
extern const monoGFX_font_t monoGFX_FreeSansBoldOblique_9pt;
extern const monoGFX_font_t monoGFX_FreeSansBold_12pt;
extern const monoGFX_font_t monoGFX_FreeSansBold_18pt;
extern const monoGFX_font_t monoGFX_FreeSansBold_24pt;
extern const monoGFX_font_t monoGFX_FreeSansBold_9pt;
extern const monoGFX_font_t monoGFX_FreeSansOblique_12pt;
extern const monoGFX_font_t monoGFX_FreeSansOblique_18pt;
extern const monoGFX_font_t monoGFX_FreeSansOblique_24pt;
extern const monoGFX_font_t monoGFX_FreeSansOblique_9pt;
extern const monoGFX_font_t monoGFX_FreeSans_12pt;
extern const monoGFX_font_t monoGFX_FreeSans_18pt;
extern const monoGFX_font_t monoGFX_FreeSans_24pt;
extern const monoGFX_font_t monoGFX_FreeSans_9pt;
extern const monoGFX_font_t monoGFX_FreeSerifBoldItalic_12pt;
extern const monoGFX_font_t monoGFX_FreeSerifBoldItalic_18pt;
extern const monoGFX_font_t monoGFX_FreeSerifBoldItalic_24pt;
extern const monoGFX_font_t monoGFX_FreeSerifBoldItalic_9pt;
extern const monoGFX_font_t monoGFX_FreeSerifBold_12pt;
extern const monoGFX_font_t monoGFX_FreeSerifBold_18pt;
extern const monoGFX_font_t monoGFX_FreeSerifBold_24pt;
extern const monoGFX_font_t monoGFX_FreeSerifBold_9pt;
extern const monoGFX_font_t monoGFX_FreeSerifItalic_12pt;
extern const monoGFX_font_t monoGFX_FreeSerifItalic_18pt;
extern const monoGFX_font_t monoGFX_FreeSerifItalic_24pt;
extern const monoGFX_font_t monoGFX_FreeSerifItalic_9pt;
extern const monoGFX_font_t monoGFX_FreeSerif_12pt;
extern const monoGFX_font_t monoGFX_FreeSerif_18pt;
extern const monoGFX_font_t monoGFX_FreeSerif_24pt;
extern const monoGFX_font_t monoGFX_FreeSerif_9pt;

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
static const fontTestEntry_t fontTests[] = {
    {&monoGFX_FreeMonoBoldOblique_12pt, "monoGFX_FreeMonoBoldOblique_12pt.c"},
    {&monoGFX_FreeMonoBoldOblique_18pt, "monoGFX_FreeMonoBoldOblique_18pt.c"},
    {&monoGFX_FreeMonoBoldOblique_24pt, "monoGFX_FreeMonoBoldOblique_24pt.c"},
    {&monoGFX_FreeMonoBoldOblique_9pt, "monoGFX_FreeMonoBoldOblique_9pt.c"},
    {&monoGFX_FreeMonoBold_12pt, "monoGFX_FreeMonoBold_12pt.c"},
    {&monoGFX_FreeMonoBold_18pt, "monoGFX_FreeMonoBold_18pt.c"},
    {&monoGFX_FreeMonoBold_24pt, "monoGFX_FreeMonoBold_24pt.c"},
    {&monoGFX_FreeMonoBold_9pt, "monoGFX_FreeMonoBold_9pt.c"},
    {&monoGFX_FreeMonoOblique_12pt, "monoGFX_FreeMonoOblique_12pt.c"},
    {&monoGFX_FreeMonoOblique_18pt, "monoGFX_FreeMonoOblique_18pt.c"},
    {&monoGFX_FreeMonoOblique_24pt, "monoGFX_FreeMonoOblique_24pt.c"},
    {&monoGFX_FreeMonoOblique_9pt, "monoGFX_FreeMonoOblique_9pt.c"},
    {&monoGFX_FreeMono_12pt, "monoGFX_FreeMono_12pt.c"},
    {&monoGFX_FreeMono_18pt, "monoGFX_FreeMono_18pt.c"},
    {&monoGFX_FreeMono_24pt, "monoGFX_FreeMono_24pt.c"},
    {&monoGFX_FreeMono_9pt, "monoGFX_FreeMono_9pt.c"},
    {&monoGFX_FreeSansBoldOblique_12pt, "monoGFX_FreeSansBoldOblique_12pt.c"},
    {&monoGFX_FreeSansBoldOblique_18pt, "monoGFX_FreeSansBoldOblique_18pt.c"},
    {&monoGFX_FreeSansBoldOblique_24pt, "monoGFX_FreeSansBoldOblique_24pt.c"},
    {&monoGFX_FreeSansBoldOblique_9pt, "monoGFX_FreeSansBoldOblique_9pt.c"},
    {&monoGFX_FreeSansBold_12pt, "monoGFX_FreeSansBold_12pt.c"},
    {&monoGFX_FreeSansBold_18pt, "monoGFX_FreeSansBold_18pt.c"},
    {&monoGFX_FreeSansBold_24pt, "monoGFX_FreeSansBold_24pt.c"},
    {&monoGFX_FreeSansBold_9pt, "monoGFX_FreeSansBold_9pt.c"},
    {&monoGFX_FreeSansOblique_12pt, "monoGFX_FreeSansOblique_12pt.c"},
    {&monoGFX_FreeSansOblique_18pt, "monoGFX_FreeSansOblique_18pt.c"},
    {&monoGFX_FreeSansOblique_24pt, "monoGFX_FreeSansOblique_24pt.c"},
    {&monoGFX_FreeSansOblique_9pt, "monoGFX_FreeSansOblique_9pt.c"},
    {&monoGFX_FreeSans_12pt, "monoGFX_FreeSans_12pt.c"},
    {&monoGFX_FreeSans_18pt, "monoGFX_FreeSans_18pt.c"},
    {&monoGFX_FreeSans_24pt, "monoGFX_FreeSans_24pt.c"},
    {&monoGFX_FreeSans_9pt, "monoGFX_FreeSans_9pt.c"},
    {&monoGFX_FreeSerifBoldItalic_12pt, "monoGFX_FreeSerifBoldItalic_12pt.c"},
    {&monoGFX_FreeSerifBoldItalic_18pt, "monoGFX_FreeSerifBoldItalic_18pt.c"},
    {&monoGFX_FreeSerifBoldItalic_24pt, "monoGFX_FreeSerifBoldItalic_24pt.c"},
    {&monoGFX_FreeSerifBoldItalic_9pt, "monoGFX_FreeSerifBoldItalic_9pt.c"},
    {&monoGFX_FreeSerifBold_12pt, "monoGFX_FreeSerifBold_12pt.c"},
    {&monoGFX_FreeSerifBold_18pt, "monoGFX_FreeSerifBold_18pt.c"},
    {&monoGFX_FreeSerifBold_24pt, "monoGFX_FreeSerifBold_24pt.c"},
    {&monoGFX_FreeSerifBold_9pt, "monoGFX_FreeSerifBold_9pt.c"},
    {&monoGFX_FreeSerifItalic_12pt, "monoGFX_FreeSerifItalic_12pt.c"},
    {&monoGFX_FreeSerifItalic_18pt, "monoGFX_FreeSerifItalic_18pt.c"},
    {&monoGFX_FreeSerifItalic_24pt, "monoGFX_FreeSerifItalic_24pt.c"},
    {&monoGFX_FreeSerifItalic_9pt, "monoGFX_FreeSerifItalic_9pt.c"},
    {&monoGFX_FreeSerif_12pt, "monoGFX_FreeSerif_12pt.c"},
    {&monoGFX_FreeSerif_18pt, "monoGFX_FreeSerif_18pt.c"},
    {&monoGFX_FreeSerif_24pt, "monoGFX_FreeSerif_24pt.c"},
    {&monoGFX_FreeSerif_9pt, "monoGFX_FreeSerif_9pt.c"},
};

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void testFont(const fontTestEntry_t* entry);

/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    for(size_t testedFontIndex = 0U; testedFontIndex < ARRAY_LEN(fontTests); testedFontIndex++)
    {
        testFont(&fontTests[testedFontIndex]);
    }
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/

/******************************************************************************
 Tests - benchmark
 *****************************************************************************/

static void testFont(const fontTestEntry_t* entry)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_textWidget_t text = {0};
    monoGFX_lineWidget_t line = {0};
    char textBuffer[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

    size_t xSize = 0U;
    size_t ySize = 80;
    for(size_t glyphIndex = 0U; glyphIndex < sizeof(textBuffer); glyphIndex++)
    {
        xSize += entry->font->glyphs[glyphIndex].xAdvance;
    }

    const size_t gfxBufferSize = MONOGFX_BUFFER_SIZE(xSize, ySize);
    uint8_t* gfxBuffer = (uint8_t*) malloc(gfxBufferSize);

    size_t xPosition = 0U;
    monoGFX_init(&gfx, xSize, ySize, gfxBuffer, gfxBufferSize, monoGFX_rotation_none);
    monoGFX_textInit(&text, 0, 40, 80, 20, entry->font, textBuffer);
    monoGFX_lineInit(&line, 0, 41, xSize, 41);
    monoGFX_lineSetStyle(&line, 1, monoGFX_lineWidget_style_dashed);
    monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &text);
    monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &line);
    monoGFX_clear(&gfx);
    monoGFX_screenRender(&gfx, &screen);

    char outputFileName[128];
    snprintf(outputFileName, sizeof(outputFileName), "%s.png", entry->fontName);
    monoGFX_pngPrinter(&gfx, outputFileName);
    free(gfxBuffer);
}
