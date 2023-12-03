/******************************************************************************
 @file unihal_os_tfreertos.c

 @brief UniHALos implementation for FreeRTOS.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "unihal/unihal_os.h"
#include "unihal_os_freertos.h"
#include "unihal/utils/array.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
_Static_assert(sizeof(UniHALos_FreeRTOS_timerStruct_t) <= sizeof(UniHALos_swTimer_t), "UniHAL OS UniHALos_swTimer_t struct not big enough!");

#define DISPATCHER_SLOTS_COUNT 16

typedef struct
{
    TimerHandle_t handle;
    UniHALos_swTimer_t* swTimer;
} dispatcherSlot_t;

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
static dispatcherSlot_t timerCallbackDispatcherData[DISPATCHER_SLOTS_COUNT];

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void timerCallbackDispatcher(TimerHandle_t xTimer);
static dispatcherSlot_t* findFreeTimerCallbackDispatcherSlot(void);
static dispatcherSlot_t* findTimerCallbackDispatcherSlot(const TimerHandle_t handle);


/******************************************************************************
 Global functions
 ******************************************************************************/

uint32_t unihalos_getTickCount(void)
{
    return xTaskGetTickCount();
}

void unihalos_sleep(const uint32_t milliseconds)
{
    vTaskDelay(pdMS_TO_TICKS(milliseconds));
}

bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodMs, const bool oneShot, UniHALos_swTimer_callbackFp_t callback, void* const arg)
{
    if(instance == NULL)
    {
        return false;
    }
    dispatcherSlot_t* dispatcherSlot = findFreeTimerCallbackDispatcherSlot();
    if(dispatcherSlot == NULL)
    {
        return false;
    }

    UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
    timerStruct->timerHandle = xTimerCreateStatic(NULL, pdMS_TO_TICKS(periodMs), oneShot ? pdFALSE : pdTRUE, NULL, timerCallbackDispatcher, &timerStruct->timer);

    if(timerStruct->timerHandle == NULL)
    {
        return false;
    }

    instance->callback = callback;
    instance->arg = arg;
    dispatcherSlot->handle = timerStruct->timerHandle;
    dispatcherSlot->swTimer = instance;
    return true;
}

bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance)
{
    if(instance == NULL)
    {
        return false;
    }
    UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
    dispatcherSlot_t* dispatcherSlot = findTimerCallbackDispatcherSlot(timerStruct->timerHandle);
    if(dispatcherSlot == NULL)
    {
        return false;
    }

    dispatcherSlot->handle = NULL;
    dispatcherSlot->swTimer = NULL;
    return xTimerStop(timerStruct->timerHandle, 0U) == pdPASS;
}

bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerStart(timerStruct->timerHandle, 0U) == pdPASS;
    }
    return false;
}

bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerStop(timerStruct->timerHandle, 0U) == pdPASS;
    }
    return false;
}

bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodMs)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerChangePeriod(timerStruct->timerHandle, pdMS_TO_TICKS(periodMs), 0U) == pdPASS;
    }
    return false;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
static void timerCallbackDispatcher(TimerHandle_t xTimer)
{
    dispatcherSlot_t* dispatcherSlot = findTimerCallbackDispatcherSlot(xTimer);
    if(dispatcherSlot != NULL)
    {
        dispatcherSlot->swTimer->callback(dispatcherSlot->swTimer->arg);
    }
}

static dispatcherSlot_t* findFreeTimerCallbackDispatcherSlot(void)
{
    for(size_t slot = 0U; slot < ARRAY_LEN(timerCallbackDispatcherData); slot++)
    {
        dispatcherSlot_t* checkedSlot = &timerCallbackDispatcherData[slot];
        if(checkedSlot->handle == NULL)
        {
            return checkedSlot;
        }
    }
    return NULL;
}

static dispatcherSlot_t* findTimerCallbackDispatcherSlot(const TimerHandle_t handle)
{
    for(size_t slot = 0U; slot < ARRAY_LEN(timerCallbackDispatcherData); slot++)
    {
        dispatcherSlot_t* checkedSlot = &timerCallbackDispatcherData[slot];
        if(checkedSlot->handle == handle)
        {
            return checkedSlot;
        }
    }
    return NULL;
}
