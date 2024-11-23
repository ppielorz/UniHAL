/******************************************************************************
 @file monogfx_widgetTests.cpp

 @brief MonoGFX widget tests

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

/******************************************************************************
 External Variables
 *****************************************************************************/
extern const monoGFX_font_t monoGFX_FreeMono_12pt;

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
const char* lineWidgetStyleNames[monoGFX_lineWidget_style_count] =
{
    "solid",
    "dashed"
};

const char* textWidgetAlignmentNames[monoGFX_textWidget_alignment_count] =
{
    "left",
    "center",
    "right"
};

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void lineWidgetTests(void);
static void textWidgetTests(void);

/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    lineWidgetTests();
    textWidgetTests();
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/

/******************************************************************************
 Tests - benchmark
 *****************************************************************************/

static void lineWidgetTests(void)
{
    typedef struct
    {
        monoGFX_textWidget_t caption;
        char captionText[32];
        monoGFX_lineWidget_t line_90deg;
        monoGFX_lineWidget_t line_60deg;
        monoGFX_lineWidget_t line_45deg;
        monoGFX_lineWidget_t line_30deg;
        monoGFX_lineWidget_t line_0deg;
    } lineWidgetTestData_t;

    const uint8_t thickessesList[] = {1U, 2U, 3U, 5U, 10U};
    const size_t testCount = ARRAY_LEN(thickessesList) * monoGFX_lineWidget_style_count;
    lineWidgetTestData_t testsData[testCount];
    const size_t xSize = 220U;
    const size_t ySize = 260U * testCount;
    uint8_t gfxBuffer[MONOGFX_BUFFER_SIZE(xSize, ySize)];
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};

    monoGFX_init(&gfx, xSize, ySize, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    monoGFX_screenInit(&gfx, &screen);

    size_t testIndex = 0U;
    for(uint8_t thicknessIndex = 0U; thicknessIndex < ARRAY_LEN(thickessesList); thicknessIndex++)
    {
        const uint8_t thickness = thickessesList[thicknessIndex];
        for(monoGFX_lineWidget_style_t style = 0U; style < monoGFX_lineWidget_style_count; style++)
        {
            lineWidgetTestData_t* testData = &testsData[testIndex];

            monoGFX_textInit(&testData->caption, 10U, 260U * testIndex + 30U, &monoGFX_FreeMono_12pt, testData->captionText);
            snprintf(testData->captionText, sizeof(testData->captionText), "%upx %s", thickness, lineWidgetStyleNames[style]);
            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->caption);

            monoGFX_lineInit(&testData->line_90deg, 10U, 260U * testIndex + 50U,  10U, 260U * testIndex + 250U);
            monoGFX_lineInit(&testData->line_60deg, 10U, 260U * testIndex + 50U, 125U, 260U * testIndex + 250U);
            monoGFX_lineInit(&testData->line_45deg, 10U, 260U * testIndex + 50U, 210U, 260U * testIndex + 250U);
            monoGFX_lineInit(&testData->line_30deg, 10U, 260U * testIndex + 50U, 210U, 260U * testIndex + 165U);
            monoGFX_lineInit(&testData->line_0deg,  10U, 260U * testIndex + 50U, 210U, 260U * testIndex +  50U);

            monoGFX_lineSetStyle(&testData->line_90deg, thickness, style);
            monoGFX_lineSetStyle(&testData->line_60deg, thickness, style);
            monoGFX_lineSetStyle(&testData->line_45deg, thickness, style);
            monoGFX_lineSetStyle(&testData->line_30deg, thickness, style);
            monoGFX_lineSetStyle(&testData->line_0deg,  thickness, style);

            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->line_90deg);
            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->line_60deg);
            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->line_45deg);
            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->line_30deg);
            monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->line_0deg);

            testIndex++;
        }
    }

    monoGFX_screenRender(&gfx, &screen);
    monoGFX_pngPrinter(&gfx, "lineWidgetTests.png");
}

static void textWidgetTests(void)
{
    typedef struct
    {
        monoGFX_textWidget_t text;
        char textBuffer[32];
    } textWidgetTestData_t;

    const size_t testCount = monoGFX_textWidget_alignment_count;
    textWidgetTestData_t testsData[testCount];
    const size_t xSize = 400U;
    const size_t ySize = 100U * testCount;
    uint8_t gfxBuffer[MONOGFX_BUFFER_SIZE(xSize, ySize)];
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_lineWidget_t line = {0};

    monoGFX_init(&gfx, xSize, ySize, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    monoGFX_screenInit(&gfx, &screen);

    monoGFX_lineInit(&line, xSize / 2, 0, xSize / 2, ySize - 1);
    monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &line);

    size_t testIndex = 0U;
    for(monoGFX_textWidget_alignment_t alignment = 0U; alignment < monoGFX_textWidget_alignment_count; alignment++)
    {
        textWidgetTestData_t* testData = &testsData[testIndex];

        monoGFX_textInit(&testData->text, xSize / 2, 100U * testIndex + 30U, &monoGFX_FreeMono_12pt, testData->textBuffer);
        monoGFX_textSetAlignment(&testData->text, alignment);
        snprintf(testData->textBuffer, sizeof(testData->textBuffer), "Alignment: %s", textWidgetAlignmentNames[alignment]);
        monoGFX_widgetLink(&screen, (monoGFX_widget_t*) &testData->text);

        testIndex++;
    }

    monoGFX_screenRender(&gfx, &screen);
    monoGFX_pngPrinter(&gfx, "textWidgetTests.png");
}