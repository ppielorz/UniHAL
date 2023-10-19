/******************************************************************************
 @file unihal_os_freertos.h

 @brief UniHALos implementation declarations for FreeRTOS.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_OS_FREERTOS_H_
#define _UNIHAL_OS_FREERTOS_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include <FreeRTOS.h>
#include <timers.h>

#include "unihal/unihal_os.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

typedef struct
{
    StaticTimer_t timer;
    TimerHandle_t timerHandle;
} UniHALos_FreeRTOS_timerStruct_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_OS_FREERTOS_H_ */
