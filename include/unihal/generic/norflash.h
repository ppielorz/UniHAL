/******************************************************************************
 @file norflash.h

 @brief UniHAL NOR-Flash driver declarations.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_NORFLASH_H_
#define _UNIHAL_NORFLASH_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "unihal/unihal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define UNIHAL_NORFLASH_TIMEOUT_FOREVER UINT32_MAX
#define UNIHAL_NORFLASH_SECTOR_SIZE     4096U

typedef enum
{
    UniHAL_NORFlash_status_success = 0,
    UniHAL_NORFlash_status_nullPointer = 1,
    UniHAL_NORFlash_status_csAssertFail = 2,
    UniHAL_NORFlash_status_communicationFail = 3,
    UniHAL_NORFlash_status_writeInProgress = 4,
    UniHAL_NORFlash_status_unalignedBlockAddress = 5,
    UniHAL_NORFlash_status_writeDisabled = 6,

    UniHAL_NORFlash_status_count
} UniHAL_NORFlash_status_t;


typedef struct UniHAL_NORFlash_t
{
    UniHAL_spi_t* spi;
    UniHAL_gpio_t* cs;

} UniHAL_NORFlash_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern UniHAL_NORFlash_status_t unihal_norflash_init(UniHAL_NORFlash_t* const instance, UniHAL_spi_t* const spi, UniHAL_gpio_t* const cs);
extern UniHAL_NORFlash_status_t unihal_norflash_readId(UniHAL_NORFlash_t* const instance, uint8_t* const manafacturerId, uint16_t* const deviceId);
extern UniHAL_NORFlash_status_t unihal_norflash_deepPowerDown(UniHAL_NORFlash_t* const instance);
extern UniHAL_NORFlash_status_t unihal_norflash_releasePowerDown(UniHAL_NORFlash_t* const instance);
extern UniHAL_NORFlash_status_t unihal_norflash_read(UniHAL_NORFlash_t* const instance, const uint32_t address, uint8_t* const readBuffer, const size_t readBufferSize);
extern UniHAL_NORFlash_status_t unihal_norflash_write(UniHAL_NORFlash_t* const instance, const uint32_t address, const uint8_t* const writeBuffer, const size_t writeBufferSize, const uint32_t timeout);
extern UniHAL_NORFlash_status_t unihal_norflash_eraseSector(UniHAL_NORFlash_t* const instance, const uint32_t address, const uint32_t timeout);

extern UniHAL_NORFlash_status_t unihal_norflash_writeEnable(UniHAL_NORFlash_t* const instance);
extern UniHAL_NORFlash_status_t unihal_norflash_writeDisable(UniHAL_NORFlash_t* const instance);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_NORFLASH_H_ */
