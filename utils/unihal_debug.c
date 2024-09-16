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
#ifdef UNIHAL_DEBUG_PRINT_TIME
#include "unihal/unihal_os.h"
#endif

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
        size_t position = 0U;
        char* debugBuffer = (char*) malloc(UNIHAL_DEBUG_DEFAULT_BUFFER_LEN);
        #ifdef UNIHAL_DEBUG_PRINT_TIME
        struct tm time = {0U};
        uint32_t microseconds = 0U;
        unihal_getRtcTime(&time, &microseconds);
        const uint32_t milliseconds = microseconds / 1000;
        const uint32_t seconds = time.tm_sec;
        const uint32_t minutes = time.tm_min;
        const uint32_t hours = time.tm_hour;
        position += snprintf(&debugBuffer[position], UNIHAL_DEBUG_DEFAULT_BUFFER_LEN - position, "%02u:%02u:%02u.%03u ", hours, minutes, seconds, milliseconds);
        #endif
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
