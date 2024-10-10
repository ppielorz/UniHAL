/******************************************************************************
 @file unihal_button_controller_tests.cpp

 @brief UniHAL Button Controller tests
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>
#include <stdexcept>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "unihal/utils/button_controller.h"

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
static uint32_t actualTickCount = 0U;

/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

/******************************************************************************
 Local functions
 ******************************************************************************/
static void resetTickCount(void)
{
    actualTickCount = 0U;
}

static void passTime(const uint32_t ticksToPass)
{
    actualTickCount += ticksToPass;
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/
SimpleString StringFrom(UniHAL_buttonController_status_t status)
{
    const char* statusString[] = {
    #define XMACRO(status) #status,
        UNIHAL_BUTTON_CONTROLLER_STATUSES 
    #undef XMACRO
    };

    if(status >= sizeof(statusString)/sizeof(statusString[0]))
    {
        throw std::invalid_argument("status string representation not in array");
    }

    return StringFrom(statusString[status]);
}

void interruptHandlerFake(UniHAL_gpio_t* instance, const UniHAL_gpio_value_t value, void* arg1, void* arg2)
{
}

bool unihal_gpio_registerInterrupt(UniHAL_gpio_t* const instance, const UniHAL_gpio_interrupt_t type, 
                UniHAL_gpio_interruptHandlerFp_t handler, void* const arg1, void* const arg2)
{
    instance->irqHandler = handler;
    instance->irqArg1 = arg1;
    instance->irqArg2 = arg2;

    return true;
}

uint32_t unihal_getTickCount(void)
{
    return actualTickCount;
}

void triggerInterrupt(UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t value)
{
    instance->irqHandler(instance, value, instance->irqArg1, instance->irqArg2);
}

void buttonControllerEventCallbackMock(const uint8_t buttonIndex, const UniHAL_buttonController_event_t event, void* const arg)
{
    mock().actualCall("buttonControllerEventCallbackMock")
        .withUnsignedIntParameter("buttonIndex", buttonIndex)
        .withUnsignedIntParameter("event", event);
}

/******************************************************************************
 Tests - init
 *****************************************************************************/

TEST_GROUP(ButtonController_init)
{
    void setup()
    {
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(ButtonController_init, invalidArgs)
{
    UniHAL_buttonController_t buttonController = {};

    UniHAL_buttonController_status_t status = unihal_buttonController_init(NULL, buttonControllerEventCallbackMock, NULL);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);

    status = unihal_buttonController_init(&buttonController, NULL, NULL);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);
}

TEST(ButtonController_init, properUsage)
{
    UniHAL_buttonController_t buttonController = {};

    UniHAL_buttonController_status_t status = unihal_buttonController_init(&buttonController, buttonControllerEventCallbackMock, NULL);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
}

/******************************************************************************
 Tests - addButtonMonostable
 *****************************************************************************/

TEST_GROUP(ButtonController_addButtonMonostable)
{
    void setup()
    {
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(ButtonController_addButtonMonostable, invalidArgs)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(NULL, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);

    status = unihal_buttonController_addButtonMonostable(&buttonController, NULL, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);

    status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_count);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);
}

TEST(ButtonController_addButtonMonostable, properUsageReleasedHigh)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);
    // mock().expectOneCall("unihal_gpio_registerInterrupt")
    //         .withConstPointerParameter("instance", &gpio)
    //         .andReturnValue(UniHAL_gpio_value_low);
    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
}

TEST(ButtonController_addButtonMonostable, properUsageReleasedLow)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);
    // mock().expectOneCall("unihal_gpio_registerInterrupt")
    //         .withConstPointerParameter("instance", &gpio)
    //         .andReturnValue(UniHAL_gpio_value_low);
    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_low);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
}

TEST(ButtonController_addButtonMonostable, errorDuringInputConfigure)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(false);
    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_low);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_hardwareError, status);
}

TEST(ButtonController_addButtonMonostable, maximumButtonsCount)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio[UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS + 1] = {};

    for(size_t index = 0U; index < UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS; index++)
    {
        mock().expectOneCall("unihal_gpio_configureInput")
                .withPointerParameter("instance", &gpio[index])
                .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
                .andReturnValue(true);
        UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio[index], UniHAL_gpio_value_high);
        ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
    }

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio[UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS], UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_noResources, status);
}

TEST(ButtonController_addButtonMonostable, buttonInterruptAlreadyConfigured)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};
    unihal_gpio_registerInterrupt(&gpio, UniHAL_gpio_interrupt_falling, interruptHandlerFake, NULL, NULL);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_alreadyUsed, status);
}

/******************************************************************************
 Tests - addButtonBistable
 *****************************************************************************/
#if 0
TEST_GROUP(ButtonController_addButtonBistable)
{
    void setup()
    {
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(ButtonController_addButtonBistable, invalidArgs)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(NULL, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);

    status = unihal_buttonController_addButtonMonostable(&buttonController, NULL, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);

    status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_count);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_invalidArg, status);
}

TEST(ButtonController_addButtonBistable, properUsage)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};

    mock().expectOneCall("unihal_gpio_read").withConstPointerParameter("instance", &gpio).andReturnValue(UniHAL_gpio_value_low);
    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
}

TEST(ButtonController_addButtonBistable, maximumButtonsCount)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio[UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS + 1] = {};

    for(size_t index = 0U; index < UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS; index++)
    {
        mock().expectOneCall("unihal_gpio_read").withConstPointerParameter("instance", &gpio[index]).andReturnValue(UniHAL_gpio_value_low);
        UniHAL_buttonController_status_t status = unihal_buttonController_addButton(&buttonController, &gpio[index], UniHAL_buttonController_buttonType_bistable);
        ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);
    }

    UniHAL_buttonController_status_t status = unihal_buttonController_addButton(&buttonController, &gpio[UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS], UniHAL_buttonController_buttonType_bistable);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_noResources, status);
}

TEST(ButtonController_addButtonBistable, buttonInterruptAlreadyConfigured)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};
    unihal_gpio_registerInterrupt(&gpio, UniHAL_gpio_interrupt_falling, interruptControllerFake, NULL, NULL);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButton(&buttonController, &gpio, UniHAL_buttonController_buttonType_bistable);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_alreadyUsed, status);
}
#endif

/******************************************************************************
 Tests - monostable button tests
 *****************************************************************************/

TEST_GROUP(ButtonController_monostableButtonTests)
{
    UniHAL_buttonController_t buttonController = {};
    UniHAL_gpio_t gpio = {};

    void setup()
    {
        resetTickCount();
        memset(&buttonController, 0, sizeof(buttonController));
        memset(&gpio, 0, sizeof(gpio));
        unihal_buttonController_init(&buttonController, buttonControllerEventCallbackMock, NULL);
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    }
};

TEST(ButtonController_monostableButtonTests, releasedHighShortPress)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
    passTime(UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS - 1U);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_shortPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
}

TEST(ButtonController_monostableButtonTests, releasedLowShortPress)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_low);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
    passTime(UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS - 1U);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_shortPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
}

TEST(ButtonController_monostableButtonTests, releasedHighLongPress)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
    passTime(UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_longPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
}

TEST(ButtonController_monostableButtonTests, releasedLowLongPress)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_low);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
    passTime(UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_longPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
}

TEST(ButtonController_monostableButtonTests, releasedHighShortPressAfterTickOverflow)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_high);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    passTime(UINT32_MAX - 100U);
    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
    passTime(200U);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_shortPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
}

TEST(ButtonController_monostableButtonTests, releasedLowShortPressAfterTickOverflow)
{
    mock().expectOneCall("unihal_gpio_configureInput")
            .withPointerParameter("instance", &gpio)
            .withUnsignedIntParameter("pull", UniHAL_gpio_pull_noPull)
            .andReturnValue(true);

    UniHAL_buttonController_status_t status = unihal_buttonController_addButtonMonostable(&buttonController, &gpio, UniHAL_gpio_value_low);
    ENUMS_EQUAL_TYPE(UniHAL_buttonController_status_t, UniHAL_buttonController_status_success, status);

    passTime(UINT32_MAX - 100U);
    triggerInterrupt(&gpio, UniHAL_gpio_value_high);
    passTime(200U);

    mock().expectOneCall("buttonControllerEventCallbackMock").withUnsignedIntParameter("buttonIndex", 0U).withUnsignedIntParameter("event", UniHAL_buttonController_event_shortPress);
    triggerInterrupt(&gpio, UniHAL_gpio_value_low);
}


