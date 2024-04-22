/******************************************************************************
 @file drzemlik_device_debug.h

 @brief UniHAL debug wrapper declaration.
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/
#ifndef _UNIHAL_DEBUG_H_
#define _UNIHAL_DEBUG_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <assert.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"

#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#ifndef DEBUG_MODULE
#define DEBUG_MODULE_INTERNAL "       "
#else
static_assert(sizeof(DEBUG_MODULE) == sizeof("1234"), "Debug module length has to be 4 chars long!");
#define DEBUG_MODULE_INTERNAL "[" DEBUG_MODULE "] "
#endif

#define DEBUG_LEVEL_OFF         0
#define DEBUG_LEVEL_ERROR       1
#define DEBUG_LEVEL_WARNING     2
#define DEBUG_LEVEL_INFO        3
#define DEBUG_LEVEL_TRACE       4

#define DEBUG_TRACE(...)
#define DEBUG_TRACE_IF(cond, ...)
#define DEBUG_INFO(...)
#define DEBUG_INFO_IF(cond, ...)
#define DEBUG_WARNING(...)
#define DEBUG_WARNING_IF(cond, ...)
#define DEBUG_ERROR(...)
#define DEBUG_ERROR_IF(cond, ...)

#define DEBUG_PRINTF_INTERNAL(...) unihal_debug_printf(DEBUG_MODULE_INTERNAL __VA_ARGS__)
#define DEBUG_PRINTF_INTERNAL_COND(cond, ...) if((cond)) { unihal_debug_printf(__VA_ARGS__); }

#ifdef DEBUG
#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL DEBUG_LEVEL_INFO
#endif
#endif

#ifdef DEBUG_LEVEL
    #if DEBUG_LEVEL >= DEBUG_LEVEL_TRACE
        #undef DEBUG_TRACE
        #undef DEBUG_TRACE_IF
        #define DEBUG_TRACE(...) DEBUG_PRINTF_INTERNAL(__VA_ARGS__)
        #define DEBUG_TRACE_IF(cond, ...) DEBUG_PRINTF_INTERNAL_COND(cond, __VA_ARGS__)
    #endif

    #if DEBUG_LEVEL >= DEBUG_LEVEL_INFO
        #undef DEBUG_INFO
        #undef DEBUG_INFO_IF
        #define DEBUG_INFO(...) DEBUG_PRINTF_INTERNAL(__VA_ARGS__)
        #define DEBUG_INFO_IF(cond, ...) DEBUG_PRINTF_INTERNAL_COND(cond, __VA_ARGS__)
    #endif

    #if DEBUG_LEVEL >= DEBUG_LEVEL_WARNING
        #undef DEBUG_WARNING
        #undef DEBUG_WARNING_IF
        #define DEBUG_WARNING(...) DEBUG_PRINTF_INTERNAL(__VA_ARGS__)
        #define DEBUG_WARNING_IF(cond, ...) DEBUG_PRINTF_INTERNAL_COND(cond, __VA_ARGS__)
    #endif

    #if DEBUG_LEVEL >= DEBUG_LEVEL_ERROR
        #undef DEBUG_ERROR
        #undef DEBUG_ERROR_IF
        #define DEBUG_ERROR(...) DEBUG_PRINTF_INTERNAL(__VA_ARGS__)
        #define DEBUG_ERROR_IF(cond, ...) DEBUG_PRINTF_INTERNAL_COND(cond, __VA_ARGS__)
    #endif
#endif

#undef ASSERT
#define ASSERT(expr) if(!(expr)) { unihal_debug_assert(__FILE__, __LINE__); }

typedef void (*UniHAL_debugCallbackFp_t)(void* arg, const char* debugBuffer, const size_t debugBufferLen);

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

void unihal_debug_init(UniHAL_debugCallbackFp_t newDebugCallback, void* newDebugCallbackArg);

void unihal_debug_printf(const char *fmt, ...) __attribute__ ( ( format ( printf, 1, 2 ) ) );

void unihal_debug_assert(const char* file, int line);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_DEBUG_H_ */
