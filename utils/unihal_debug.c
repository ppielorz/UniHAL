/******************************************************************************
 @file unihal_debug.c

 @brief UniHAL debug wrapper implementation.
 
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

#include "unihal/utils/unihal_debug.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#ifndef UNIHAL_DEBUG_DEFAULT_BUFFER_LEN
#define UNIHAL_DEBUG_DEFAULT_BUFFER_LEN 128U
#endif

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/
static UniHAL_debugCallbackFp_t debugCallback = NULL;
static void* debugCallbackArg = NULL;

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Global functions
 ******************************************************************************/
void unihal_debug_init(UniHAL_debugCallbackFp_t newDebugCallback, void* newDebugCallbackArg)
{
    if(newDebugCallback != NULL)
    {
        debugCallback = newDebugCallback;
        debugCallbackArg = newDebugCallbackArg;
    }
}

void unihal_debug_printf(const char *fmt, ...)
{
    if(debugCallback != NULL)
    {
        va_list argptr;
        va_start(argptr, fmt);
        const uint32_t tickCount = unihalos_getTickCount();
        const uint32_t milliseconds = tickCount % 1000U;
        const uint32_t seconds = (tickCount / 1000U) % 60U;
        const uint32_t minutes = ((tickCount / 1000U) / 60U) % 60U;
        const uint32_t hours = ((tickCount / 1000U) / 60U) / 60U;
        char* debugBuffer = (char*) malloc(UNIHAL_DEBUG_DEFAULT_BUFFER_LEN);
        size_t position = snprintf(debugBuffer, UNIHAL_DEBUG_DEFAULT_BUFFER_LEN, "%02u:%02u:%02u.%03u ", hours, minutes, seconds, milliseconds);
        position += vsnprintf(&debugBuffer[position], UNIHAL_DEBUG_DEFAULT_BUFFER_LEN - position, fmt, argptr);
        va_end(argptr);
        debugCallback(debugCallbackArg, debugBuffer, position);
    }
}

void unihal_debug_assert(const char* file, int line)
{
    unihal_debug_printf("Assert failed: %s:%d\n", file, line);
    while(1);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
