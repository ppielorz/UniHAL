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
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

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
/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

void fillWithRandom(void* structToRandomize, const size_t structSize)
{
    int fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0) {
        perror("Failed to open /dev/urandom");
        exit(EXIT_FAILURE);
    }

    read(fd, structToRandomize, structSize);

    close(fd);
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
    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 32, 0));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_setPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_success, monoGFX_setPixel(&gfx, 0, 16));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
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
    LONGS_EQUAL(monoGFX_status_success, monoGFX_clearPixel(&gfx, 32, 0));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
}

TEST(monoGFX_clearPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
    LONGS_EQUAL(monoGFX_status_success, monoGFX_clearPixel(&gfx, 0, 16));
    MEMCMP_EQUAL(expectedGfxBuffer, gfxBuffer, sizeof(expectedGfxBuffer));
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
    LONGS_EQUAL(monoGFX_status_success, monoGFX_getPixel(&gfx, 32, 0, &pixelSet));
    CHECK_FALSE(pixelSet);
}

TEST(monoGFX_getPixel, yAxisExceeded)
{
    LONGS_EQUAL(monoGFX_status_success, monoGFX_init(&gfx, 32, 16, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    LONGS_EQUAL(monoGFX_status_success, monoGFX_getPixel(&gfx, 0, 16, &pixelSet));
    CHECK_FALSE(pixelSet);
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
 Tests - screen init
 *****************************************************************************/

TEST_GROUP(monoGFX_screenInit)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_screenInit, nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_screenInit(NULL, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_screenInit(&gfx, NULL));
}

TEST(monoGFX_screenInit, gfxAssignment)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    POINTERS_EQUAL(&gfx, screen.gfx);
}

TEST(monoGFX_screenInit, widgetsAssignment)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    POINTERS_EQUAL(NULL, screen.widgets);
}

/******************************************************************************
 Tests - screen init
 *****************************************************************************/

TEST_GROUP(monoGFX_screenRender)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_screenRender, nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_screenRender(NULL, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_screenRender(&gfx, NULL));
}

/******************************************************************************
 Tests - screen clear widget
 *****************************************************************************/

TEST_GROUP(monoGFX_screenUnlinkWidgets)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_widget_t widgetA = {0};
    monoGFX_widget_t widgetB = {0};

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
        fillWithRandom(&widgetA, sizeof(widgetA));
        fillWithRandom(&widgetB, sizeof(widgetB));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_screenUnlinkWidgets, nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_screenUnlinkWidgets(NULL));
}

TEST(monoGFX_screenUnlinkWidgets, widgetClearing)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    POINTERS_EQUAL(NULL, screen.widgets);
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetA));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(NULL, widgetA.next);
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetB));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetB, widgetA.next);
    POINTERS_EQUAL(NULL, widgetB.next);
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenUnlinkWidgets(&screen));
    POINTERS_EQUAL(NULL, screen.widgets);
    POINTERS_EQUAL(NULL, widgetA.next);
    POINTERS_EQUAL(NULL, widgetB.next);
}

/******************************************************************************
 Tests - widget link
 *****************************************************************************/

TEST_GROUP(monoGFX_widgetLink)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_widget_t widgetA = {0};
    monoGFX_widget_t widgetB = {0};

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
        fillWithRandom(&widgetA, sizeof(widgetA));
        fillWithRandom(&widgetB, sizeof(widgetB));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_widgetLink, nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_widgetLink(NULL, &widgetA));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_widgetLink(&screen, NULL));
}

TEST(monoGFX_widgetLink, widgetsLinkage)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    POINTERS_EQUAL(NULL, screen.widgets);
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetA));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(NULL, widgetA.next);
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetB));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetB, widgetA.next);
    POINTERS_EQUAL(NULL, widgetB.next);
}

/******************************************************************************
 Tests - widget unlink
 *****************************************************************************/

TEST_GROUP(monoGFX_widgetUnlink)
{
    monoGFX_t gfx = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_widget_t widgetA = {0};
    monoGFX_widget_t widgetB = {0};
    monoGFX_widget_t widgetC = {0};
    monoGFX_widget_t widgetD = {0};

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
        fillWithRandom(&widgetA, sizeof(widgetA));
        fillWithRandom(&widgetB, sizeof(widgetB));
        fillWithRandom(&widgetC, sizeof(widgetC));
        fillWithRandom(&widgetD, sizeof(widgetD));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_widgetUnlink, nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_widgetUnlink(NULL, &widgetA));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_widgetUnlink(&screen, NULL));
}

TEST(monoGFX_widgetUnlink, widgetsUnlinkageSuccess)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetA));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetB));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetC));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetB, widgetA.next);
    POINTERS_EQUAL(&widgetC, widgetB.next);
    POINTERS_EQUAL(NULL, widgetC.next);

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetUnlink(&screen, &widgetB));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetC, widgetA.next);
    POINTERS_EQUAL(NULL, widgetC.next);

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetUnlink(&screen, &widgetC));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(NULL, widgetA.next);

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetUnlink(&screen, &widgetA));
    POINTERS_EQUAL(NULL, screen.widgets);
}

TEST(monoGFX_widgetUnlink, widgetsUnlinkageNotFound)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetA));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetB));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_widgetLink(&screen, &widgetC));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetB, widgetA.next);
    POINTERS_EQUAL(&widgetC, widgetB.next);
    POINTERS_EQUAL(NULL, widgetC.next);

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_widgetNotFound, monoGFX_widgetUnlink(&screen, &widgetD));
    POINTERS_EQUAL(&widgetA, screen.widgets);
    POINTERS_EQUAL(&widgetB, widgetA.next);
    POINTERS_EQUAL(&widgetC, widgetB.next);
    POINTERS_EQUAL(NULL, widgetC.next);
}

/******************************************************************************
 Tests - textWidget
 *****************************************************************************/

TEST_GROUP(monoGFX_textWidget)
{
    monoGFX_t gfx = {0};
    uint8_t gfxBuffer[MONOGFX_BUFFER_SIZE(140, 30)] = {0};
    monoGFX_screen_t screen = {0};
    monoGFX_textWidget_t text = {0};
    char textBuffer[16] = "test 123";

    void setup()
    {
        fillWithRandom(&gfx, sizeof(gfx));
        fillWithRandom(&screen, sizeof(screen));
        fillWithRandom(&text, sizeof(text));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_textWidget, init_nullPointer)
{
    extern const monoGFX_font_t monoGFX_FreeMono_12pt;

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_init(&gfx, 140, 30, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_screenInit(&gfx, &screen));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_textInit(NULL, 0, 0, &monoGFX_FreeMono_12pt, textBuffer));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_textInit(&text, 0, 0, NULL, textBuffer));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_textInit(&text, 0, 0, &monoGFX_FreeMono_12pt, NULL));
}

TEST(monoGFX_textWidget, init_parameterAssignment)
{
    extern const monoGFX_font_t monoGFX_FreeMono_12pt;

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_textInit(&text, 10, 20, &monoGFX_FreeMono_12pt, textBuffer));
    LONGS_EQUAL(10, text.xPosition);
    LONGS_EQUAL(20, text.yPosition);
    POINTERS_EQUAL(&monoGFX_FreeMono_12pt, text.font);
    POINTERS_EQUAL(textBuffer, text.textBuffer);
    ENUMS_EQUAL_TYPE(monoGFX_textWidget_alignment_t, monoGFX_textWidget_alignment_left, text.alignment);
    ENUMS_EQUAL_TYPE(monoGFX_widgetType_t, monoGFX_widgetType_text, text.type);
}

TEST(monoGFX_textWidget, setAlignment_inputArgs)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_textSetAlignment(NULL, monoGFX_textWidget_alignment_left));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_invalidTextAlignment, monoGFX_textSetAlignment(&text, monoGFX_textWidget_alignment_count));
}

TEST(monoGFX_textWidget, setAlignment_parameterAssignment)
{
    extern const monoGFX_font_t monoGFX_FreeMono_12pt;

    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_textInit(&text, 10, 20, &monoGFX_FreeMono_12pt, textBuffer));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_textSetAlignment(&text, monoGFX_textWidget_alignment_center));

    LONGS_EQUAL(10, text.xPosition);
    LONGS_EQUAL(20, text.yPosition);
    POINTERS_EQUAL(&monoGFX_FreeMono_12pt, text.font);
    POINTERS_EQUAL(textBuffer, text.textBuffer);
    ENUMS_EQUAL_TYPE(monoGFX_textWidget_alignment_t, monoGFX_textWidget_alignment_center, text.alignment);
    ENUMS_EQUAL_TYPE(monoGFX_widgetType_t, monoGFX_widgetType_text, text.type);
}

/******************************************************************************
 Tests - lineWidget
 *****************************************************************************/

TEST_GROUP(monoGFX_lineWidget)
{
    monoGFX_lineWidget_t line = {0};

    void setup()
    {
        fillWithRandom(&line, sizeof(line));
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(monoGFX_lineWidget, init_nullPointer)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_lineInit(NULL, 0, 0, 20, 20));
}

TEST(monoGFX_lineWidget, init_parameterAssignment)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_lineInit(&line, 10, 20, 30, 40));
    LONGS_EQUAL(10, line.xStart);
    LONGS_EQUAL(20, line.yStart);
    LONGS_EQUAL(30, line.xEnd);
    LONGS_EQUAL(40, line.yEnd);
    LONGS_EQUAL(1, line.thickness);
    ENUMS_EQUAL_TYPE(monoGFX_lineWidget_style_t, monoGFX_lineWidget_style_solid, line.style);
    ENUMS_EQUAL_TYPE(monoGFX_widgetType_t, monoGFX_widgetType_line, line.type);
}

TEST(monoGFX_lineWidget, init_parameterAssignmentReversed)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_lineInit(&line, 30, 40, 10, 20));
    LONGS_EQUAL(10, line.xStart);
    LONGS_EQUAL(20, line.yStart);
    LONGS_EQUAL(30, line.xEnd);
    LONGS_EQUAL(40, line.yEnd);
    LONGS_EQUAL(1, line.thickness);
    ENUMS_EQUAL_TYPE(monoGFX_lineWidget_style_t, monoGFX_lineWidget_style_solid, line.style);
    ENUMS_EQUAL_TYPE(monoGFX_widgetType_t, monoGFX_widgetType_line, line.type);
}

TEST(monoGFX_lineWidget, setStyle_inputArgs)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_nullPointer, monoGFX_lineSetStyle(NULL, 0, monoGFX_lineWidget_style_dashed));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_invalidLineStyle, monoGFX_lineSetStyle(&line, 0, monoGFX_lineWidget_style_count));
}

TEST(monoGFX_lineWidget, setStyle_parameterAssignment)
{
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_lineInit(&line, 10, 20, 30, 40));
    ENUMS_EQUAL_TYPE(monoGFX_status_t, monoGFX_status_success, monoGFX_lineSetStyle(&line, 4, monoGFX_lineWidget_style_dashed));

    LONGS_EQUAL(10, line.xStart);
    LONGS_EQUAL(20, line.yStart);
    LONGS_EQUAL(30, line.xEnd);
    LONGS_EQUAL(40, line.yEnd);
    LONGS_EQUAL(4, line.thickness);
    ENUMS_EQUAL_TYPE(monoGFX_lineWidget_style_t, monoGFX_lineWidget_style_dashed, line.style);
    ENUMS_EQUAL_TYPE(monoGFX_widgetType_t, monoGFX_widgetType_line, line.type);
}


/*
extern monoGFX_status_t monoGFX_textInit(monoGFX_textWidget_t* const widget, 
                            const size_t xPosition, const size_t yPosition, const size_t xSize, const size_t ySize, 
                            const monoGFX_font_t* const font, char* const textBuffer);*/

//TEST FOR WIDGET WHICH WOULD BE OUT OF BOUNDS
