/******************************************************************************
 @file monogfx_tests.cpp

 @brief MonoGFX tests

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "unihal/gfx/monogfx/monogfx.h"

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
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
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
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_setPixel(NULL, 0, 0);

    LONGS_EQUAL(monoGFX_status_nullPointer, status);
}

TEST(monoGFX_setPixel, xAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_setPixel(&gfx, 32, 0);

    LONGS_EQUAL(monoGFX_status_xAxisExceeded, status);
}

TEST(monoGFX_setPixel, yAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_setPixel(&gfx, 0, 16);

    LONGS_EQUAL(monoGFX_status_yAxisExceeded, status);
}

TEST(monoGFX_setPixel, plainSetPixel)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 0);
    expectedGfxBuffer[0] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 1);
    expectedGfxBuffer[4] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 1);
    expectedGfxBuffer[4] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, reversedBitOrder)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    gfx.bitReverseOrder = true;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 0);
    expectedGfxBuffer[0] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 1);
    expectedGfxBuffer[4] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 1);
    expectedGfxBuffer[4] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateClockwise)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_clockwise);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[1] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 0);
    expectedGfxBuffer[3] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 1);
    expectedGfxBuffer[1] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 1);
    expectedGfxBuffer[3] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateCounterclockwise)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_counterclockwise);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[62] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 0);
    expectedGfxBuffer[60] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 1);
    expectedGfxBuffer[62] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 1);
    expectedGfxBuffer[60] |= 0x40;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, rotateHalfTurn)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_halfTurn);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[63] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 0);
    expectedGfxBuffer[63] |= 0x02;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 1);
    expectedGfxBuffer[59] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 1, 1);
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
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_clearPixel(NULL, 0, 0);

    LONGS_EQUAL(monoGFX_status_nullPointer, status);
}

TEST(monoGFX_clearPixel, xAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_clearPixel(&gfx, 32, 0);

    LONGS_EQUAL(monoGFX_status_xAxisExceeded, status);
}

TEST(monoGFX_clearPixel, yAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_status_t status = monoGFX_clearPixel(&gfx, 0, 16);

    LONGS_EQUAL(monoGFX_status_yAxisExceeded, status);
}

TEST(monoGFX_clearPixel, plainClearPixel)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] |= 0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_clearPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] &= ~0x80;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_clearPixel, reversedBitOrder)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    gfx.bitReverseOrder = true;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_setPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] |= 0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    monoGFX_clearPixel(&gfx, 0, 0);
    expectedGfxBuffer[0] &= ~0x01;
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

/******************************************************************************
 Tests - getPixel
 *****************************************************************************/

TEST_GROUP(monoGFX_getPixel)
{
    monoGFX_status_t status = monoGFX_status_success;
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
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    monoGFX_status_t status = monoGFX_getPixel(NULL, 0, 0, &pixelSet);
    LONGS_EQUAL(monoGFX_status_nullPointer, status);

    status = monoGFX_getPixel(&gfx, 0, 0, NULL);
    LONGS_EQUAL(monoGFX_status_nullPointer, status);
}

TEST(monoGFX_getPixel, xAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    monoGFX_status_t status = monoGFX_getPixel(&gfx, 32, 0, &pixelSet);

    LONGS_EQUAL(monoGFX_status_xAxisExceeded, status);
}

TEST(monoGFX_getPixel, yAxisExceeded)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);

    monoGFX_status_t status = monoGFX_getPixel(&gfx, 0, 16, &pixelSet);

    LONGS_EQUAL(monoGFX_status_yAxisExceeded, status);
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










/*
#include <time.h>
TEST(monoGFX_setPixel, aaa)
{
    monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_halfTurn);
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));

    clock_t startTime = clock();

    for(size_t i = 0U; i < 1000000; i++)
    {
        monoGFX_setPixel(&gfx, 0, 0);
        monoGFX_setPixel(&gfx, 1, 0);
        monoGFX_setPixel(&gfx, 2, 0);
        monoGFX_setPixel(&gfx, 3, 0);
        monoGFX_setPixel(&gfx, 4, 0);
        monoGFX_setPixel(&gfx, 5, 0);
        monoGFX_setPixel(&gfx, 6, 0);
        monoGFX_setPixel(&gfx, 7, 0);
        monoGFX_setPixel(&gfx, 8, 0);
        monoGFX_setPixel(&gfx, 9, 0);
    }

    clock_t endTime = clock();
    printf("bench time: %lu us\n", endTime - startTime);
}


void printAscii(const monoGFX_t* const gfx)
{
    for(size_t yPosition = 0U; yPosition < gfx->ySize; yPosition++)
    {
        for(size_t xPosition = 0U; xPosition < gfx->xSize; xPosition++)
        {
            uint8_t glyph = gfx->buffer[xPosition + yPosition / 8 * gfx->xSize];
            if(monoGFX_getPixel(gfx, xPosition, yPosition))
            {
                printf("# %d", xPosition + yPosition / 8 * gfx->xSize);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
#include <unistd.h>
//https://www3.nd.edu/~dthain/courses/cse20211/fall2013/gfx/
TEST(monoGFX_invalidation, init)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[32] = {0};
    monoGFX_init(&gfx, 16, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none);
    //printAscii(&gfx);
    //printf("%02X %02X %02X %02X %02X %02X %02X %02X\n", gfxBuffer[0], gfxBuffer[1], gfxBuffer[2], gfxBuffer[3], gfxBuffer[4], gfxBuffer[5], gfxBuffer[6], gfxBuffer[7]);
    for(size_t i = 0U; i < 16 * 16; i++)
    {
        monoGFX_setPixel(&gfx, i % 16, i / 16);
        printAscii(&gfx);
        sleep(1);

    }
    //monoGFX_setPixel(&gfx, 7, 0);
    extern const GFXfont FreeSans9pt7b;
    //monoGFX_print(&gfx, 0, 0, &FreeSans9pt7b, "test");
    //printf("%02X %02X %02X %02X %02X %02X %02X %02X\n", gfxBuffer[0], gfxBuffer[1], gfxBuffer[2], gfxBuffer[3], gfxBuffer[4], gfxBuffer[5], gfxBuffer[6], gfxBuffer[7]);
    //monoGFX_setPixel(&gfx, 1, 0);
    //printAscii(&gfx);
    //printf("%02X %02X %02X %02X %02X %02X %02X %02X\n", gfxBuffer[0], gfxBuffer[1], gfxBuffer[2], gfxBuffer[3], gfxBuffer[4], gfxBuffer[5], gfxBuffer[6], gfxBuffer[7]);
    //monoGFX_setPixel(&gfx, 0, 1);
    //printAscii(&gfx);
    //printf("%02X %02X %02X %02X %02X %02X %02X %02X\n", gfxBuffer[0], gfxBuffer[1], gfxBuffer[2], gfxBuffer[3], gfxBuffer[4], gfxBuffer[5], gfxBuffer[6], gfxBuffer[7]);
}
*/