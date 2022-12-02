/******************************************************************************
 @file monogfx_tests.cpp

 @brief MonoGFX tests

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>
#include <time.h>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "unihal/monogfx/monogfx.h"
#include "../tools/monogfx_printers.h"

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

    return CommandLineTestRunner::RunAllTests(ac, av);
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/

/******************************************************************************
 Tests - setPixel
 *****************************************************************************/

TEST_GROUP(monoGFX_setPixel)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

    void setup()
    {
        memset(&gfx, 0, sizeof(gfx));
        memset(&gfxBuffer, 0, sizeof(gfxBuffer));
        memset(&expectedGfxBuffer, 0, sizeof(expectedGfxBuffer));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(monoGFX_setPixel, nullPointer)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_nullPointer, monoGFX_setPixel(NULL, 0, 0));
}

TEST(monoGFX_setPixel, xAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_xAxisExceeded, monoGFX_setPixel(&gfx, 32, 0));
}

TEST(monoGFX_setPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_yAxisExceeded, monoGFX_setPixel(&gfx, 0, 16));
}

TEST(monoGFX_setPixel, plainSetPixel)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 0));
    expectedGfxBuffer[0] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 1));
    expectedGfxBuffer[4] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 1));
    expectedGfxBuffer[4] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, reversedBitOrder)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    gfx.bitReverseOrder = true;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 0));
    expectedGfxBuffer[0] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 1));
    expectedGfxBuffer[4] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 1));
    expectedGfxBuffer[4] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateClockwise)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_clockwise));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[1] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 0));
    expectedGfxBuffer[3] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 1));
    expectedGfxBuffer[1] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 1));
    expectedGfxBuffer[3] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateCounterclockwise)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_counterclockwise));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[62] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 0));
    expectedGfxBuffer[60] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 1));
    expectedGfxBuffer[62] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 1));
    expectedGfxBuffer[60] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateHalfTurn)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_halfTurn));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[63] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 0));
    expectedGfxBuffer[63] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 1));
    expectedGfxBuffer[59] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 1, 1));
    expectedGfxBuffer[59] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

/******************************************************************************
 Tests - clearPixel
 *****************************************************************************/

TEST_GROUP(monoGFX_clearPixel)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

    void setup()
    {
        memset(&gfx, 0, sizeof(gfx));
        memset(&gfxBuffer, 0, sizeof(gfxBuffer));
        memset(&expectedGfxBuffer, 0, sizeof(expectedGfxBuffer));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(monoGFX_clearPixel, nullPointer)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_nullPointer, monoGFX_clearPixel(NULL, 0, 0));
}

TEST(monoGFX_clearPixel, xAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_xAxisExceeded, monoGFX_clearPixel(&gfx, 32, 0));
}

TEST(monoGFX_clearPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_yAxisExceeded, monoGFX_clearPixel(&gfx, 0, 16));
}

TEST(monoGFX_clearPixel, plainClearPixel)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_clearPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] &= ~0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_clearPixel, reversedBitOrder)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    gfx.bitReverseOrder = true;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_clearPixel(&gfx, 0, 0));
    expectedGfxBuffer[0] &= ~0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

/******************************************************************************
 Tests - getPixel
 *****************************************************************************/

TEST_GROUP(monoGFX_getPixel)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    bool pixelSet = false;

    void setup()
    {
        memset(&gfx, 0, sizeof(gfx));
        memset(&gfxBuffer, 0, sizeof(gfxBuffer));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(monoGFX_getPixel, nullPointer)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    LONGS_EQUAL(monoGFX_status_nullPointer, monoGFX_getPixel(NULL, 0, 0, &pixelSet));
    LONGS_EQUAL(monoGFX_status_nullPointer, monoGFX_getPixel(&gfx, 0, 0, NULL));
}

TEST(monoGFX_getPixel, xAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    LONGS_EQUAL(monoGFX_status_xAxisExceeded, monoGFX_getPixel(&gfx, 32, 0, &pixelSet));
}

TEST(monoGFX_getPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    LONGS_EQUAL(monoGFX_status_yAxisExceeded, monoGFX_getPixel(&gfx, 0, 16, &pixelSet));
}

TEST(monoGFX_getPixel, plainGetPixel)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));

    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 0));
    LONGS_EQUAL(monoGFX_status_success, monoGFX_getPixel(&gfx, 0, 0, &pixelSet));
    CHECK_TRUE(pixelSet);

    LONGS_EQUAL(monoGFX_status_success, monoGFX_clearPixel(&gfx, 0, 0));
    LONGS_EQUAL(monoGFX_status_success, monoGFX_getPixel(&gfx, 0, 0, &pixelSet));
    CHECK_FALSE(pixelSet);
}

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
        monoGFX_print(&gfx, 0, 0, &monoGFX_FreeMono_9pt, "testString123");
    }
    clock_t endTime = clock();
    monoGFX_pngPrinter(&gfx, "/home/ppielorz/Drzemlik/source/unihal/monogfx/printBenchmark.png");
    printf("printBenchmark time: %lu us\n", endTime - startTime);
}
