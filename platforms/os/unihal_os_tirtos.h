/******************************************************************************
 @file unihal_os_tirtos.h

 @brief UniHALos implementation declarations for TI-RTOS.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_OS_TIRTOS_H_
#define _UNIHAL_OS_TIRTOS_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include <ti/sysbios/knl/Clock.h>

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
    Clock_Params params;
    Clock_Handle handle;
    Clock_Struct clock;
} UniHALos_TIRTOS_timerStruct_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_OS_TIRTOS_H_ */
