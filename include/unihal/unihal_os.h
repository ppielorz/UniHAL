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

#define UNIHALOS_SWTIMER_OBJECT_SIZE 48
typedef void (*UniHALos_swTimer_callbackFp_t)(void* arg);

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    uint8_t obj[UNIHALOS_SWTIMER_OBJECT_SIZE];


} UniHALos_swTimer_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

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

extern bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodMs, const bool oneShot, UniHALos_swTimer_callbackFp_t callback, void* const arg);
extern bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodMs);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_OS_H_ */
