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
#include "unihal/unihal.h"
#include "unihal/utils/array.h"

#include <FreeRTOS.h>
#include <task.h>
#include <semphr.h>
#include <queue.h>
#include <timers.h>

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

typedef struct
{
    StaticTask_t cb;
    TaskHandle_t handle;
} UniHALos_FreeRTOS_taskStruct_t;
_Static_assert(UNIHALOS_TASK_OBJECT_SIZE >= sizeof(UniHALos_FreeRTOS_taskStruct_t), "UniHAL task object size not big enough!");

typedef struct
{
    StaticSemaphore_t cb;
    SemaphoreHandle_t handle;
} UniHALos_FreeRTOS_mutexStruct_t;
_Static_assert(UNIHALOS_MUTEX_OBJECT_SIZE >= sizeof(UniHALos_FreeRTOS_mutexStruct_t), "UniHAL mutex object size not big enough!");

typedef struct
{
    StaticTimer_t cb;
    TimerHandle_t handle;
} UniHALos_FreeRTOS_timerStruct_t;
_Static_assert(UNIHALOS_SWTIMER_OBJECT_SIZE >= sizeof(UniHALos_FreeRTOS_timerStruct_t), "UniHAL SW timer object size not big enough!");

typedef struct
{
    StaticQueue_t cb;
    QueueHandle_t handle;
} UniHALos_FreeRTOS_queueStruct_t;
_Static_assert(UNIHALOS_QUEUE_OBJECT_SIZE >= sizeof(UniHALos_FreeRTOS_queueStruct_t), "UniHAL queue object size not big enough!");

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
 Global functions - General
 *****************************************************************************/

void unihalos_start(void)
{
    vTaskStartScheduler();
}
uint32_t unihalos_getTickCount(void)
{
    return xTaskGetTickCount();
}

void unihalos_sleep(const uint32_t milliseconds)
{
    vTaskDelay(pdMS_TO_TICKS(milliseconds));
}

/******************************************************************************
 Global functions - Task
 *****************************************************************************/
extern bool unihalos_task_init(UniHALos_task_t* const instance, UniHALos_task_taskFp_t taskFunction, void* arg, uint8_t* const stack,
                                const size_t stackSize, const char* const name, const UniHALos_task_priority_t priority)
{
    UniHALos_FreeRTOS_taskStruct_t* taskStruct = (UniHALos_FreeRTOS_taskStruct_t*) instance->obj;
    taskStruct->handle = xTaskCreateStatic(taskFunction, name, stackSize / sizeof(portSTACK_TYPE), arg, 1 /* TODO priority*/, (portSTACK_TYPE*) stack, &taskStruct->cb);

    return taskStruct->handle != NULL;
}

/******************************************************************************
 Global functions - Mutex
 *****************************************************************************/

bool unihalos_mutex_init(UniHALos_mutex_t* const instance)
{
    UniHALos_FreeRTOS_mutexStruct_t* mutexStruct = (UniHALos_FreeRTOS_mutexStruct_t*) instance->obj;
    mutexStruct->handle = xSemaphoreCreateMutexStatic(&mutexStruct->cb);

    return mutexStruct->handle != NULL;
}

bool unihalos_mutex_acquire(UniHALos_mutex_t* const instance, uint32_t timeout)
{
    UniHALos_FreeRTOS_mutexStruct_t* mutexStruct = (UniHALos_FreeRTOS_mutexStruct_t*) instance->obj;
    const BaseType_t status = xSemaphoreTake(mutexStruct->handle, pdMS_TO_TICKS(timeout));
    return status == pdTRUE;
}

bool unihalos_mutex_release(UniHALos_mutex_t* const instance)
{
    UniHALos_FreeRTOS_mutexStruct_t* mutexStruct = (UniHALos_FreeRTOS_mutexStruct_t*) instance->obj;
    const BaseType_t status = xSemaphoreGive(mutexStruct->handle);
    return status == pdTRUE;
}

/******************************************************************************
 Global functions - Queue
 *****************************************************************************/
extern bool unihalos_queue_init(UniHALos_queue_t* const instance, const size_t queueLength, const size_t elementSize, uint8_t* buffer, const size_t bufferSize)
{
    if(bufferSize < (elementSize * queueLength))
    {
        return false;
    }

    UniHALos_FreeRTOS_queueStruct_t* queueStruct = (UniHALos_FreeRTOS_queueStruct_t*) instance->obj;
    queueStruct->handle = xQueueCreateStatic(queueLength, elementSize, buffer, &queueStruct->cb);

    return queueStruct->handle != NULL;
}
uint32_t __get_IPSR(void)
{
    uint32_t ipsr;

    __asm volatile (
        "MRS %0, IPSR\n"  // Read Main Stack Pointer (MSP) into sp_value
        : "=r" (ipsr)
        :  // No input operands
        : "memory"  // Specify that memory is being modified (avoid compiler optimizations)
    );

  return(ipsr);
}

extern bool unihalos_queue_put(UniHALos_queue_t* const instance, const void* element, uint32_t timeout)
{
    UniHALos_FreeRTOS_queueStruct_t* queueStruct = (UniHALos_FreeRTOS_queueStruct_t*) instance->obj;
    BaseType_t status = pdFALSE;
    /*if(__get_IPSR() != 0U)
    {
        BaseType_t yeld = pdFALSE;
        status = xQueueSendFromISR(queueStruct->handle, element, &yeld);
        portYIELD_FROM_ISR(yeld);
    }
    else
    {*/
        status = xQueueSend(queueStruct->handle, element, pdMS_TO_TICKS(timeout));
    //}
    return status == pdTRUE;
}

extern bool unihalos_queue_get(UniHALos_queue_t* const instance, void* element, uint32_t timeout)
{
    HeapStats_t xHeapStats;
    vPortGetHeapStats(&xHeapStats);
    UniHALos_FreeRTOS_queueStruct_t* queueStruct = (UniHALos_FreeRTOS_queueStruct_t*) instance->obj;
    const BaseType_t status = xQueueReceive(queueStruct->handle, element, (timeout == UNIHALOS_WAIT_FOREVER) ? portMAX_DELAY : pdMS_TO_TICKS(timeout));
    return status == pdTRUE;
}

/******************************************************************************
 Global functions - Software Timer
 *****************************************************************************/

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
    timerStruct->handle = xTimerCreateStatic(NULL, pdMS_TO_TICKS(periodMs), oneShot ? pdFALSE : pdTRUE, NULL, timerCallbackDispatcher, &timerStruct->cb);

    if(timerStruct->handle == NULL)
    {
        return false;
    }

    instance->callback = callback;
    instance->arg = arg;
    dispatcherSlot->handle = timerStruct->handle;
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
    dispatcherSlot_t* dispatcherSlot = findTimerCallbackDispatcherSlot(timerStruct->handle);
    if(dispatcherSlot == NULL)
    {
        return false;
    }

    dispatcherSlot->handle = NULL;
    dispatcherSlot->swTimer = NULL;
    return xTimerStop(timerStruct->handle, 0U) == pdPASS;
}

bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerStart(timerStruct->handle, 0U) == pdPASS;
    }
    return false;
}

bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerStop(timerStruct->handle, 0U) == pdPASS;
    }
    return false;
}

bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodMs)
{
    if(instance != NULL)
    {
        UniHALos_FreeRTOS_timerStruct_t* timerStruct = (UniHALos_FreeRTOS_timerStruct_t*) instance->obj;
        return xTimerChangePeriod(timerStruct->handle, pdMS_TO_TICKS(periodMs), 0U) == pdPASS;
    }
    return false;
}

void vApplicationStackOverflowHook(TaskHandle_t xTask, char * pcTaskName)
{
    unihal_callErrorHandler("Task overflow");
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
