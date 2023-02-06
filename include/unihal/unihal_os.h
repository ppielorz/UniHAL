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

typedef struct
{
    /*!
     * @brief OS specific driver object.
     */
    void* obj;

} UniHALos_swTimer_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern bool unihalos_swTimer_init(UniHALos_swTimer_t* const instance, const uint32_t periodUs, const bool oneShot, void (*handler)(void* const arg), void* const arg);
extern bool unihalos_swTimer_deinit(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_start(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_stop(UniHALos_swTimer_t* const instance);
extern bool unihalos_swTimer_setPeriod(UniHALos_swTimer_t* const instance, const uint32_t periodUs);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_OS_H_ */
