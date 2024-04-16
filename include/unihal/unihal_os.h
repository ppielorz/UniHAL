/******************************************************************************
 @file unihal_os.h

 @brief UniHAL OS declaration

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_OS_H_
#define _UNIHAL_OS_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define UNIHALOS_WAIT_FOREVER   UINT32_MAX

#define UNIHALOS_TASK_OBJECT_SIZE 108
typedef void (*UniHALos_task_taskFp_t)(void* arg);

typedef enum
{
    UniHALos_task_priority_low,
    UniHALos_task_priority_medium,
    UniHALos_task_priority_high,

    UniHALos_task_priority_count
} UniHALos_task_priority_t;

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    uint8_t obj[UNIHALOS_TASK_OBJECT_SIZE];

    UniHALos_task_taskFp_t taskFunction;
    void* arg;
    uint8_t* stack;
    size_t stackSize;
    const char* name;
    UniHALos_task_priority_t priority;

} UniHALos_task_t;


#define UNIHALOS_MUTEX_OBJECT_SIZE 84

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    uint8_t obj[UNIHALOS_MUTEX_OBJECT_SIZE];

} UniHALos_mutex_t;

#define UNIHALOS_QUEUE_OBJECT_SIZE 84

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    uint8_t obj[UNIHALOS_QUEUE_OBJECT_SIZE];

    size_t elementSize;
    size_t queueLength;
    uint8_t* buffer;

} UniHALos_queue_t;


#define UNIHALOS_SWTIMER_OBJECT_SIZE 48
typedef void (*UniHALos_swTimer_callbackFp_t)(void* arg);

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    uint8_t obj[UNIHALOS_SWTIMER_OBJECT_SIZE];

    UniHALos_swTimer_callbackFp_t callback;
    void* arg;

} UniHALos_swTimer_t;

/******************************************************************************
 Function Prototypes - General
 *****************************************************************************/

extern void unihalos_start(void);

/*!
 * @brief Returns actual tick count in miliseconds.
 * 
 * @details Returned value can overflow and maximum value can vary between HAL
 * implementations.
 * 
 * @return Actual tick count in miliseconds.
 */
extern uint32_t unihalos_getTickCount(void);

extern void unihalos_sleep(const uint32_t milliseconds);

/******************************************************************************
 Function Prototypes - Task
 *****************************************************************************/
extern bool unihalos_task_init(UniHALos_task_t* const instance, UniHALos_task_taskFp_t taskFunction, void* arg, uint8_t* const stack,
                                const size_t stackSize, const char* const name, const UniHALos_task_priority_t priority);

/******************************************************************************
 Function Prototypes - Mutex
 *****************************************************************************/
extern bool unihalos_mutex_init(UniHALos_mutex_t* const instance);
extern bool unihalos_mutex_acquire(UniHALos_mutex_t* const instance, uint32_t timeout);
extern bool unihalos_mutex_release(UniHALos_mutex_t* const instance);

/******************************************************************************
 Function Prototypes - Queue
 *****************************************************************************/
extern bool unihalos_queue_init(UniHALos_queue_t* const instance, const size_t queueLength, const size_t elementSize, uint8_t* buffer, const size_t bufferSize);
extern bool unihalos_queue_put(UniHALos_queue_t* const instance, const void* element, uint32_t timeout);
extern bool unihalos_queue_get(UniHALos_queue_t* const instance, void* element, uint32_t timeout);

/******************************************************************************
 Function Prototypes - Software Timer
 *****************************************************************************/

extern bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodMs, const bool oneShot, UniHALos_swTimer_callbackFp_t callback, void* const arg);
extern bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodMs);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_OS_H_ */
