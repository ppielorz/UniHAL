/******************************************************************************
 @file unihal_norflash.c

 @brief UniHAL NOR-Flash driver definitions.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <string.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"
#include "unihal/generic/norflash.h"
#include "unihal/utils/array.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define CHECK_AND_RETURN_STATUS(condition, failStatus) if(!(condition)) { return failStatus; }
#define COMMAND_AND_ADDRESS_TO_ARRAY(command, address) { command, (address >> 16) & 0xFF, (address >> 8) & 0xFF, address & 0xFF}

#define COMMAND_WRITE_DATA                  0x02
#define COMMAND_READ_DATA                   0x03
#define COMMAND_WRITE_DISABLE               0x04
#define COMMAND_READ_STATUS_REGISTER_1      0x05
#define COMMAND_WRITE_ENABLE                0x06
#define COMMAND_ERASE_SECTOR                0x20
#define COMMAND_READ_STATUS_REGISTER_2      0x35
#define COMMAND_ERASE_BLOCK_32K             0x52
#define COMMAND_ERASE_CHIP                  0x60
#define COMMAND_READ_ID                     0x9F
#define COMMAND_RELEASE_DEEP_POWER_DOWN     0xAB
#define COMMAND_DEEP_POWER_DOWN             0xB9
#define COMMAND_ERASE_BLOCK_64K             0xD8

#define STATUS_REGISTER_1_WEL           (1 << 1)
#define STATUS_REGISTER_1_WIP           (1 << 0)

#define ERASE_SECTOR_MASK               0xFFFFF000
#define ERASE_BLOCK_32K_MASK            0xFFFF8000
#define ERASE_BLOCK_64K_MASK            0xFFFF0000


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
static UniHAL_NORFlash_status_t commandWithoutAddressAndRead(UniHAL_NORFlash_t* const instance, const uint8_t command, uint8_t* const readBuffer, const size_t readBufferSize);
static UniHAL_NORFlash_status_t commandWithAddressAndRead(UniHAL_NORFlash_t* const instance, const uint8_t command, const uint32_t address, uint8_t* const readBuffer, const size_t readBufferSize);
static UniHAL_NORFlash_status_t isWriteFinished(UniHAL_NORFlash_t* const instance);
static UniHAL_NORFlash_status_t isWriteEnabled(UniHAL_NORFlash_t* const instance);
static UniHAL_NORFlash_status_t waitForWriteFinish(UniHAL_NORFlash_t* const instance, const uint32_t timeout);

/******************************************************************************
 Global functions
 ******************************************************************************/
UniHAL_NORFlash_status_t unihal_norflash_init(UniHAL_NORFlash_t* const instance, UniHAL_spi_t* const spi, UniHAL_gpio_t* const cs)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(spi != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(cs != NULL, UniHAL_NORFlash_status_nullPointer);

    memset(instance, 0, sizeof(*instance));
    instance->spi = spi;
    instance->cs = cs;

    unihal_gpio_configureOutput(instance->cs, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull);

    return UniHAL_NORFlash_status_success;
}

UniHAL_NORFlash_status_t unihal_norflash_readId(UniHAL_NORFlash_t* const instance, uint8_t* const manafacturerId, uint16_t* const deviceId)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(manafacturerId != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(deviceId != NULL, UniHAL_NORFlash_status_nullPointer);

    uint8_t rawIdData[sizeof(*manafacturerId) + sizeof(*deviceId)];
    UniHAL_NORFlash_status_t status = commandWithoutAddressAndRead(instance, COMMAND_READ_ID, rawIdData, sizeof(rawIdData));

    if(status == UniHAL_NORFlash_status_success)
    {
        *manafacturerId = rawIdData[0];
        *deviceId = (rawIdData[1] << 8) | rawIdData[2];
    }

    return status;
}

UniHAL_NORFlash_status_t unihal_norflash_deepPowerDown(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    return commandWithoutAddressAndRead(instance, COMMAND_DEEP_POWER_DOWN, NULL, 0U);
}

UniHAL_NORFlash_status_t unihal_norflash_releasePowerDown(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    return commandWithoutAddressAndRead(instance, COMMAND_RELEASE_DEEP_POWER_DOWN, NULL, 0U);
}

UniHAL_NORFlash_status_t unihal_norflash_read(UniHAL_NORFlash_t* const instance, const uint32_t address, uint8_t* const readBuffer, const size_t readBufferSize)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(readBuffer != NULL, UniHAL_NORFlash_status_nullPointer);

    return commandWithAddressAndRead(instance, COMMAND_READ_DATA, address, readBuffer, readBufferSize);
}

UniHAL_NORFlash_status_t unihal_norflash_write(UniHAL_NORFlash_t* const instance, const uint32_t address, const uint8_t* const writeBuffer, const size_t writeBufferSize, const uint32_t timeout)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS(writeBuffer != NULL, UniHAL_NORFlash_status_nullPointer);

    UniHAL_NORFlash_status_t status = isWriteEnabled(instance);
    if(status != UniHAL_NORFlash_status_success)
    {
        return status;
    }

    const uint8_t addressArray[] = COMMAND_AND_ADDRESS_TO_ARRAY(COMMAND_WRITE_DATA, address);

    if(!unihal_gpio_write(instance->cs, UniHAL_gpio_value_low))
    {
        status = UniHAL_NORFlash_status_csAssertFail;
        goto deassert;
    }

    if(!unihal_spi_transfer(instance->spi, sizeof(addressArray), addressArray, NULL))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    if(writeBufferSize > 0U && !unihal_spi_transfer(instance->spi, writeBufferSize, writeBuffer, NULL))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    deassert:
    unihal_gpio_write(instance->cs, UniHAL_gpio_value_high);

    if(status == UniHAL_NORFlash_status_success)
    {
        status = waitForWriteFinish(instance, timeout);
    }

    return status;
}

UniHAL_NORFlash_status_t unihal_norflash_eraseSector(UniHAL_NORFlash_t* const instance, const uint32_t address, const uint32_t timeout)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS((address & ERASE_SECTOR_MASK) == 0U, UniHAL_NORFlash_status_unalignedBlockAddress);

    UniHAL_NORFlash_status_t status = isWriteEnabled(instance);
    if(status == UniHAL_NORFlash_status_success)
    {
        status = commandWithAddressAndRead(instance, COMMAND_ERASE_SECTOR, address, NULL, 0U);
    }

    if(status == UniHAL_NORFlash_status_success)
    {
        status = waitForWriteFinish(instance, timeout);
    }

    return status;
}

UniHAL_NORFlash_status_t unihal_norflash_writeEnable(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    return commandWithoutAddressAndRead(instance, COMMAND_WRITE_ENABLE, NULL, 0U);
}

UniHAL_NORFlash_status_t unihal_norflash_writeDisable(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    return commandWithoutAddressAndRead(instance, COMMAND_WRITE_DISABLE, NULL, 0U);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static UniHAL_NORFlash_status_t commandWithoutAddressAndRead(UniHAL_NORFlash_t* const instance, const uint8_t command, uint8_t* const readBuffer, const size_t readBufferSize)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS((readBufferSize == 0U) || (readBuffer != NULL && readBufferSize > 0U), UniHAL_NORFlash_status_nullPointer);

    UniHAL_NORFlash_status_t status = UniHAL_NORFlash_status_success;

    if(!unihal_gpio_write(instance->cs, UniHAL_gpio_value_low))
    {
        status = UniHAL_NORFlash_status_csAssertFail;
        goto deassert;
    }

    if(!unihal_spi_transfer(instance->spi, sizeof(command), &command, NULL))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    if(readBufferSize > 0U && !unihal_spi_transfer(instance->spi, readBufferSize, NULL, readBuffer))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    deassert:
    unihal_gpio_write(instance->cs, UniHAL_gpio_value_high);
    return status;
}

static UniHAL_NORFlash_status_t commandWithAddressAndRead(UniHAL_NORFlash_t* const instance, const uint8_t command, const uint32_t address, uint8_t* const readBuffer, const size_t readBufferSize)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);
    CHECK_AND_RETURN_STATUS((readBufferSize == 0U) || (readBuffer != NULL && readBufferSize > 0U), UniHAL_NORFlash_status_nullPointer);

    UniHAL_NORFlash_status_t status = UniHAL_NORFlash_status_success;
    const uint8_t addressArray[] = COMMAND_AND_ADDRESS_TO_ARRAY(command, address);

    if(!unihal_gpio_write(instance->cs, UniHAL_gpio_value_low))
    {
        status = UniHAL_NORFlash_status_csAssertFail;
        goto deassert;
    }

    if(!unihal_spi_transfer(instance->spi, sizeof(addressArray), addressArray, NULL))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    if(readBufferSize > 0U && !unihal_spi_transfer(instance->spi, readBufferSize, NULL, readBuffer))
    {
        status = UniHAL_NORFlash_status_communicationFail;
        goto deassert;
    }

    deassert:
    unihal_gpio_write(instance->cs, UniHAL_gpio_value_high);
    return status;
}

static UniHAL_NORFlash_status_t isWriteFinished(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);

    uint8_t statusRegister1 = 0U;
    UniHAL_NORFlash_status_t status = commandWithoutAddressAndRead(instance, COMMAND_READ_STATUS_REGISTER_1, &statusRegister1, sizeof(statusRegister1));

    if(status == UniHAL_NORFlash_status_success)
    {
        if(statusRegister1 & STATUS_REGISTER_1_WIP)
        {
            status = UniHAL_NORFlash_status_writeInProgress;
        }
    }

    return status;
}

UniHAL_NORFlash_status_t isWriteEnabled(UniHAL_NORFlash_t* const instance)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);

    uint8_t statusRegister1 = 0U;
    UniHAL_NORFlash_status_t status = commandWithoutAddressAndRead(instance, COMMAND_READ_STATUS_REGISTER_1, &statusRegister1, sizeof(statusRegister1));

    if(status == UniHAL_NORFlash_status_success)
    {
        if(!(statusRegister1 & STATUS_REGISTER_1_WEL))
        {
            status = UniHAL_NORFlash_status_writeDisabled;
        }
    }

    return status;
}

static UniHAL_NORFlash_status_t waitForWriteFinish(UniHAL_NORFlash_t* const instance, const uint32_t timeout)
{
    CHECK_AND_RETURN_STATUS(instance != NULL, UniHAL_NORFlash_status_nullPointer);

    UniHAL_NORFlash_status_t status = UniHAL_NORFlash_status_success;

    if(timeout > 0)
    {
        const uint32_t wipStartTime = unihalos_getTickCount();

        while((unihalos_getTickCount() - wipStartTime < timeout) || (timeout == UNIHAL_NORFLASH_TIMEOUT_FOREVER))
        {
            status = isWriteFinished(instance);

            if(status == UniHAL_NORFlash_status_writeInProgress)
            {
                continue;
            }
            break;
        }
        const uint32_t wipEndTime = unihalos_getTickCount();
        (void) wipEndTime;
    }

    return status;
}
