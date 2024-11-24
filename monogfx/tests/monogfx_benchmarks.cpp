/******************************************************************************
 @file monogfx_benchmarks.cpp

 @brief MonoGFX benchmarks

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include "unihal/monogfx/monogfx.h"
#include "unihal/monogfx/tools/monogfx_printers.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void setPixelBenchmark();
static void clearPixelBenchmark();
static void getPixelBenchmark();
static void printBenchmark();

/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    setPixelBenchmark();
    clearPixelBenchmark();
    getPixelBenchmark();
    printBenchmark();
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/

/******************************************************************************
 Tests - benchmark
 *****************************************************************************/

static void setPixelBenchmark()
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    clock_t summaryTime = 0U;

    for(size_t rotation = 0U; rotation < monoGFX_rotation_count; rotation++)
    {
        monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), static_cast<monoGFX_rotation_t>(rotation));

        clock_t startTime = clock();
        for(size_t i = 0U; i < 1000000; i++)
        {
            monoGFX_setPixel(&gfx, 0, 0);
            monoGFX_setPixel(&gfx, 1, 1);
            monoGFX_setPixel(&gfx, 2, 2);
            monoGFX_setPixel(&gfx, 10, 0);
            monoGFX_setPixel(&gfx, 0, 10);
            monoGFX_setPixel(&gfx, 15, 15);
        }
        clock_t endTime = clock();
        summaryTime += endTime - startTime;
    }
    printf("setPixelBenchmark time: %lu us\n", summaryTime);
}

static void clearPixelBenchmark()
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    clock_t startTime = clock();
    for(size_t i = 0U; i < 1000000; i++)
    {
        monoGFX_clearPixel(&gfx, 0, 0);
        monoGFX_clearPixel(&gfx, 1, 1);
        monoGFX_clearPixel(&gfx, 2, 2);
        monoGFX_clearPixel(&gfx, 10, 0);
        monoGFX_clearPixel(&gfx, 0, 10);
        monoGFX_clearPixel(&gfx, 15, 15);
    }
    clock_t endTime = clock();
    printf("clearPixelBenchmark time: %lu us\n", endTime - startTime);
}

static void getPixelBenchmark()
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    bool pixelSet = false;
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    clock_t startTime = clock();
    for(size_t i = 0U; i < 1000000; i++)
    {
        monoGFX_getPixel(&gfx, 0, 0, &pixelSet);
        monoGFX_getPixel(&gfx, 1, 1, &pixelSet);
        monoGFX_getPixel(&gfx, 2, 2, &pixelSet);
        monoGFX_getPixel(&gfx, 10, 0, &pixelSet);
        monoGFX_getPixel(&gfx, 0, 10, &pixelSet);
        monoGFX_getPixel(&gfx, 15, 15, &pixelSet);
    }
    clock_t endTime = clock();
    printf("getPixelBenchmark time: %lu us\n", endTime - startTime);
}

static void printBenchmark()
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[MONOGFX_BUFFER_SIZE(3200, 1600)] = {0};
    bool pixelSet = false;
    extern monoGFX_font_t monoGFX_FreeMono_9pt;
    monoGFX_init(&gfx, 120, 40, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    clock_t startTime = clock();
    for(size_t i = 0U; i < 10000; i++)
    {
        //monoGFX_print(&gfx, 0, 0, &monoGFX_FreeMono_9pt, "testString123");
    }
    clock_t endTime = clock();
    monoGFX_pngPrinter(&gfx, "printBenchmark.png");
    printf("printBenchmark time: %lu us\n", endTime - startTime);
}
