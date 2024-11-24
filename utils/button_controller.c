/******************************************************************************
 @file button_controller.c

 @brief UniHAL button controller implementation.
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"

#include "unihal/utils/button_controller.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define CHECK(expr, retVal) if(!(expr)) { return retVal; }

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
void interruptController(UniHAL_gpio_t* instance, const UniHAL_gpio_value_t value, void* arg1, void* arg2);

/******************************************************************************
 Global functions
 *****************************************************************************/
UniHAL_buttonController_status_t unihal_buttonController_init(UniHAL_buttonController_t* instance, const UniHAL_buttonController_eventCallbackFp_t callback, void* const arg)
{
    CHECK(instance != NULL, UniHAL_buttonController_status_invalidArg);
    CHECK(callback != NULL, UniHAL_buttonController_status_invalidArg);

    instance->callback = callback;
    instance->arg = arg;

    return UniHAL_buttonController_status_success;
}


UniHAL_buttonController_status_t unihal_buttonController_addButtonMonostable(UniHAL_buttonController_t* instance, UniHAL_gpio_t* gpio, const UniHAL_gpio_value_t releasedValue)
{
    CHECK(instance != NULL, UniHAL_buttonController_status_invalidArg);
    CHECK(gpio != NULL, UniHAL_buttonController_status_invalidArg);
    CHECK(gpio->irqHandler == NULL, UniHAL_buttonController_status_alreadyUsed);
    CHECK(releasedValue < UniHAL_gpio_value_count, UniHAL_buttonController_status_invalidArg);

    size_t buttonIndex = 0U;
    for(; buttonIndex < UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS; buttonIndex++)
    {
        if(instance->buttons[buttonIndex].gpio == NULL)
        {
            break;
        }
    }
    CHECK(buttonIndex != UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS, UniHAL_buttonController_status_noResources);

    const bool inputConfigureStatus = unihal_gpio_configureInput(gpio, UniHAL_gpio_pull_noPull);
    CHECK(inputConfigureStatus, UniHAL_buttonController_status_hardwareError);
    //unihalos_sleep(100);
    unihal_gpio_registerInterrupt(gpio, UniHAL_gpio_interrupt_both, interruptController, instance, (size_t*) buttonIndex);

    instance->buttons[buttonIndex].gpio = gpio;
    instance->buttons[buttonIndex].type = UniHAL_buttonController_buttonType_monostable;
    instance->buttons[buttonIndex].buttonData.monostable.releasedValue = releasedValue;

    return UniHAL_buttonController_status_success;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
void interruptController(UniHAL_gpio_t* instance, const UniHAL_gpio_value_t value, void* arg1, void* arg2)
{
    (void) instance;
    UniHAL_buttonController_t* buttonController = (UniHAL_buttonController_t*) arg1;
    uint8_t buttonIndex = (uint8_t)((uintptr_t) arg2);
    UniHAL_buttonController_button_t* button = &buttonController->buttons[buttonIndex];

    switch(button->type)
    {
        case UniHAL_buttonController_buttonType_bistable:
            //ASSERT(false);
            /*if(button->lastValue != value)
            {
                button->lastValue = value;
                buttonController->callback(buttonIndex, value == UniHAL_gpio_value_high ? UniHAL_buttonController_event_on : UniHAL_buttonController_event_off);
            }*/
        break;

        case UniHAL_buttonController_buttonType_monostable:
        {
            UniHAL_buttonController_monostableButtonData_t* buttonData = &button->buttonData.monostable;
            if(value == buttonData->releasedValue)
            {
                buttonData->releasedTickCount = unihal_getTickCount();
                const uint32_t timeDiff = buttonData->releasedTickCount - buttonData->pressedTickCount;
                if(timeDiff < UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS)
                {
                    buttonController->callback(buttonIndex, UniHAL_buttonController_event_shortPress, buttonController->arg);
                }
                else
                {
                    buttonController->callback(buttonIndex, UniHAL_buttonController_event_longPress, buttonController->arg);
                }
            }
            else
            {
                buttonData->pressedTickCount = unihal_getTickCount();
            }
        }
        break;

        default:
        break;
    }
}
