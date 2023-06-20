/******************************************************************************
 @file unihal_os_tirtos.c

 @brief UniHALos implementation for TI-RTOS.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "unihal/unihal_os.h"
#include "unihal_os_tirtos.h"

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

bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodUs, const bool oneShot, void (*handler)(void* const arg), void* const arg)
{
    if(instance == NULL)
    {
        return false;
    }
    UniHALos_TIRTOS_timerStruct_t* timer = (UniHALos_TIRTOS_timerStruct_t*) instance->obj;
    Clock_Params_init(&timer->params);
    timer->params.arg       = (uintptr_t) arg;
    timer->params.startFlag = false;
    timer->params.period    = oneShot ? 0 : periodUs / Clock_tickPeriod;
    timer->handle = Clock_construct(&timer->clock, (Clock_FuncPtr)handler, periodUs / Clock_tickPeriod, &timer->params);

    return (timer->handle != NULL);
}

bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance)
{
    UniHALos_TIRTOS_timerStruct_t* timer = (UniHALos_TIRTOS_timerStruct_t*) instance->obj;
    Clock_destruct(&timer->clock);
    return true;
}

bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance)
{
    UniHALos_TIRTOS_timerStruct_t* timer = (UniHALos_TIRTOS_timerStruct_t*) instance->obj;
    Clock_start(timer->handle);
    return true;
}

bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance)
{
    UniHALos_TIRTOS_timerStruct_t* timer = (UniHALos_TIRTOS_timerStruct_t*) instance->obj;
    Clock_stop(timer->handle);
    return true;
}

bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodUs)
{
    UniHALos_TIRTOS_timerStruct_t* timer = (UniHALos_TIRTOS_timerStruct_t*) instance->obj;
    //TODO must be stopped
    Clock_setTimeout(timer->handle, periodUs / Clock_tickPeriod);
    if(timer->clock.period != 0)
    {
        Clock_setPeriod(timer->handle, periodUs / Clock_tickPeriod);
    }
    return true;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
