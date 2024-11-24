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
static UniHAL_assertCallbackFp_t assertCallback = NULL;
static void* arg = NULL;

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Global functions
 ******************************************************************************/
void unihal_debug_init(UniHAL_debugCallbackFp_t newDebugCallback, UniHAL_assertCallbackFp_t newAssertCallback, void* newArg)
{

    debugCallback = newDebugCallback;
    assertCallback = newAssertCallback;
    arg = newArg;
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
        const int seconds = time.tm_sec;
        const int minutes = time.tm_min;
        const int hours = time.tm_hour;
        position += (size_t) snprintf(&debugBuffer[position], UNIHAL_DEBUG_DEFAULT_BUFFER_LEN - position, "%02d:%02d:%02d.%03u ", hours, minutes, seconds, milliseconds);
        #endif
        position += (size_t) vsnprintf(&debugBuffer[position], UNIHAL_DEBUG_DEFAULT_BUFFER_LEN - position, fmt, argptr);
        va_end(argptr);
        debugCallback(arg, debugBuffer, position);
    }
}

void unihal_debug_assert(const char* file, int line)
{
    if(assertCallback != NULL)
    {
        assertCallback(arg, file, line);
    }
    while(1);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
