/******************************************************************************
 @file button_controller.h

 @brief UniHAL button controller declarations.
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/
#ifndef _BUTTON_CONTROLLER_H_
#define _BUTTON_CONTROLLER_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>

#include "unihal/unihal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define UNIHAL_BUTTON_CONTROLLER_STATUSES  \
    XMACRO(success)                     \
    XMACRO(invalidArg)                  \
    XMACRO(noResources)                 \
    XMACRO(alreadyUsed)                 \
    XMACRO(hardwareError)               \

typedef enum
{
    #define XMACRO(status) UniHAL_buttonController_status_##status,
        UNIHAL_BUTTON_CONTROLLER_STATUSES 
    #undef XMACRO
    UniHAL_buttonController_status_count
} UniHAL_buttonController_status_t;

#define UNIHAL_BUTTON_CONTROLLER_EVENTS    \
    XMACRO(on)                          \
    XMACRO(off)                         \
    XMACRO(shortPress)                  \
    XMACRO(longPress)                   \

typedef enum
{
    #define XMACRO(event) UniHAL_buttonController_event_##event,
        UNIHAL_BUTTON_CONTROLLER_EVENTS 
    #undef XMACRO
    UniHAL_buttonController_event_count
} UniHAL_buttonController_event_t;

typedef enum
{
    UniHAL_buttonController_buttonType_monostable,
    UniHAL_buttonController_buttonType_bistable,

    UniHAL_buttonController_buttonType_count
} UniHAL_buttonController_buttonType_t;

#define UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS   (8U)

#define UNIHAL_BUTTON_CONTROLLER_LONG_PRESS_MS (500U)


typedef void (*UniHAL_buttonController_eventCallbackFp_t)(const uint8_t buttonIndex, const UniHAL_buttonController_event_t event, void* const arg);

typedef struct UniHAL_buttonController_monostableButtonData_t
{
    UniHAL_gpio_value_t releasedValue;
    uint32_t pressedTickCount;
    uint32_t releasedTickCount;
} UniHAL_buttonController_monostableButtonData_t;

typedef struct UniHAL_buttonController_bistableButtonData_t
{
    UniHAL_gpio_value_t lastValue;
} UniHAL_buttonController_bistableButtonData_t;

typedef struct UniHAL_buttonController_button_t
{
    UniHAL_gpio_t* gpio;
    UniHAL_buttonController_buttonType_t type;
    union
    {
        UniHAL_buttonController_bistableButtonData_t bistable;
        UniHAL_buttonController_monostableButtonData_t monostable;
    } buttonData;
    
    UniHAL_gpio_value_t lastValue;
    uint32_t pressedTickCount;
    uint32_t releasedTickCount;
} UniHAL_buttonController_button_t;

typedef struct UniHAL_buttonController_t
{
    UniHAL_buttonController_button_t buttons[UNIHAL_BUTTON_CONTROLLER_MAX_BUTTONS];
    UniHAL_buttonController_eventCallbackFp_t callback;
    void* arg;
} UniHAL_buttonController_t;


/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern UniHAL_buttonController_status_t unihal_buttonController_init(UniHAL_buttonController_t* instance, const UniHAL_buttonController_eventCallbackFp_t callback, void* const arg);

extern UniHAL_buttonController_status_t unihal_buttonController_addButtonMonostable(UniHAL_buttonController_t* instance, UniHAL_gpio_t* gpio, const UniHAL_gpio_value_t releasedValue);

#ifdef __cplusplus
}
#endif

#endif /* _BUTTON_CONTROLLER_H_ */
