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
 Tests
 *****************************************************************************/

TEST_GROUP(monoGFX_invalidation)
{
    void setup()
    {
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(monoGFX_invalidation, setPixel)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

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

TEST(monoGFX_invalidation, setPixelReversedBitOrder)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

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

TEST(monoGFX_invalidation, setPixelRotateClockwise)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

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

TEST(monoGFX_invalidation, setPixelRotateCounterclockwise)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

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

TEST(monoGFX_invalidation, setPixelRotateHalfTurn)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[64] = {0};
    uint8_t expectedGfxBuffer[64] = {0};

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
