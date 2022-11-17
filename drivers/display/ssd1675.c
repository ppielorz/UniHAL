/******************************************************************************
 @file ssd1675.c

 @brief SSD1675 driver implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "unihal/unihal.h"
#include "unihal/utils/array.h"
#include "unihal/drivers/display/ssd1675.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define HEIGHT_MAX 296
#define WIDTH_MAX 160

#define REG_DEEP_SLEEP 0x10
#define REG_RESET 0x12
#define REG_DISPLAY_UPDATE_CONTROL_1    0x21
#define REG_DISPLAY_UPDATE_CONTROL_2    0x22
#define REG_RAM_X_ADDRESS               0x4E
#define REG_RAM_Y_ADDRESS               0x4F
#define REG_ANALOG_BLOCK_CONTROL        0x74
#define REG_DIGITAL_BLOCK_CONTROL       0x7E
#define REG_WRITE_RAM_BW                0x24
#define REG_WRITE_RAM_RED               0x26


#define OPERATION_MODE_NORMAL       0x00
#define OPERATION_MODE_SLEEP_1      0x01
#define OPERATION_MODE_SLEEP_2      0x02

#define DISPLAY_UPDATE_CONTROL_1_RAM_NORMAL     0x0
#define DISPLAY_UPDATE_CONTROL_1_RAM_BYPASS_0   0x1
#define DISPLAY_UPDATE_CONTROL_1_RAM_INVERSE    0x8
#define DISPLAY_UPDATE_CONTROL_1_BW_RAM_OFFSET  0
#define DISPLAY_UPDATE_CONTROL_1_RED_RAM_OFFSET 4


#define ANALOG_BLOCK_CONTROL_VALUE 0x54
#define DIGITAL_BLOCK_CONTROL_VALUE 0x3B

#define HW_RESET_TIMESPAN_US    10000
#define SW_RESET_TIMESPAN_US    20000
#define SW_RESET_TIMEOUT_MS     300

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
static SSD1675_status_t sendCommand(const SSD1675_t* const display, const uint8_t command);
static SSD1675_status_t sendData(const SSD1675_t* const display, const uint8_t data);
static SSD1675_status_t initDisplay(const SSD1675_t* const display);
static SSD1675_status_t hwReset(const SSD1675_t* const display);
static SSD1675_status_t swReset(const SSD1675_t* const display);
static SSD1675_status_t waitForBusyFlag(const SSD1675_t* const display, const uint32_t delayMs, const uint32_t pollTimespanUs);
static SSD1675_status_t enterSleep(const SSD1675_t* const display);
static SSD1675_status_t setCursor(const SSD1675_t* const display, const uint8_t x, const uint16_t y);

#define DU_ASSERT(x) x

#define CHECK_AND_RETURN_STATUS(condition, failStatus) if(!(condition)) { return failStatus; }
#define CHECK_AND_RETURN_IF_ERROR(expression) ret = expression; if(ret != SSD1675_status_ok) { return ret; }

/******************************************************************************
 Global functions
 ******************************************************************************/
SSD1675_status_t ssd1675_init(SSD1675_t* const display, monoGFX_t* const bwGfx, monoGFX_t* const rGfx, UniHAL_spi_t* const spi,
                    UniHAL_gpio_t* const cs, UniHAL_gpio_t* const rst, UniHAL_gpio_t* const bsy, UniHAL_gpio_t* const dc)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(bwGfx != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(spi != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(cs != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(rst != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(bsy != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(dc != NULL, SSD1675_status_nullPointer);

    display->spi = spi;
    display->cs = cs;
    display->rst = rst;
    display->bsy = bsy;
    display->dc = dc;

    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->cs) == true, SSD1675_status_csPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->rst) == true, SSD1675_status_rstPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->bsy) == true, SSD1675_status_bsyPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->dc) == true, SSD1675_status_dcPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->cs, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull) == true, SSD1675_status_csPinConfigureError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->rst, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull) == true, SSD1675_status_rstPinConfigureError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureInput(display->bsy, UniHAL_gpio_pull_pullDown) == true, SSD1675_status_bsyPinConfigureError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->dc, UniHAL_gpio_value_low, UniHAL_gpio_outputType_pushPull) == true, SSD1675_status_dcPinConfigureError);

    display->xSize = bwGfx->xSizeBuffer;
    display->ySize = bwGfx->ySizeBuffer;
    display->bwGfx = bwGfx;
    display->rGfx = rGfx;
    CHECK_AND_RETURN_STATUS(display->xSize <= WIDTH_MAX, SSD1675_status_widthTooLarge);
    CHECK_AND_RETURN_STATUS(display->ySize <= HEIGHT_MAX, SSD1675_status_heightTooLarge);
    CHECK_AND_RETURN_STATUS(rGfx == NULL || bwGfx->xSize == rGfx->xSize, SSD1675_status_gfxSizeMismatch);
    CHECK_AND_RETURN_STATUS(rGfx == NULL || bwGfx->ySize == rGfx->ySize, SSD1675_status_gfxSizeMismatch);

    return SSD1675_status_ok;
}

SSD1675_status_t ssd1675_refresh(SSD1675_t* const display)
{
    SSD1675_status_t ret = SSD1675_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(initDisplay(display));

    sendCommand(display, 0x22);
    sendData(display, 0xB1);
    unihal_usleep(100000);
    setCursor(display, 0, 0);

    CHECK_AND_RETURN_IF_ERROR(setCursor(display, 0, 0));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_WRITE_RAM_BW));
    unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, display->bwGfx->bufferSize, display->bwGfx->buffer, NULL);
    unihal_gpio_write(display->cs, UniHAL_gpio_value_high);

    if(display->rGfx != NULL)
    {
        setCursor(display, 0, 0);
        CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_WRITE_RAM_RED));
        unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
        unihal_spi_transfer(display->spi, display->rGfx->bufferSize, display->rGfx->buffer, NULL);
        unihal_gpio_write(display->cs, UniHAL_gpio_value_high);

    }


    sendCommand(display, 0x22);
    sendData(display, 0xC7);
    unihal_usleep(100000);
    sendCommand(display, 0x20);

    CHECK_AND_RETURN_IF_ERROR(enterSleep(display));

    //while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high); TODO timeout
    return SSD1675_status_ok;
}


/******************************************************************************
 Local Functions
 *****************************************************************************/
static SSD1675_status_t sendCommand(const SSD1675_t* const display, const uint8_t command)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_low) == true, SSD1675_status_dcPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_low) == true, SSD1675_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_spi_transfer(display->spi, sizeof(command), &command, NULL) == true, SSD1675_status_spiCommunicationError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_high) == true, SSD1675_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_high) == true, SSD1675_status_dcPinWriteError);

    return SSD1675_status_ok;
}

static SSD1675_status_t sendData(const SSD1675_t* const display, const uint8_t data)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_low) == true, SSD1675_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_spi_transfer(display->spi, sizeof(data), &data, NULL) == true, SSD1675_status_spiCommunicationError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_high) == true, SSD1675_status_csPinWriteError);

    return SSD1675_status_ok;
}

static SSD1675_status_t initDisplay(const SSD1675_t* const display)
{
    SSD1675_status_t ret = SSD1675_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(hwReset(display));
    CHECK_AND_RETURN_IF_ERROR(swReset(display));

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_ANALOG_BLOCK_CONTROL));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, ANALOG_BLOCK_CONTROL_VALUE));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_DIGITAL_BLOCK_CONTROL));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, DIGITAL_BLOCK_CONTROL_VALUE));

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_DISPLAY_UPDATE_CONTROL_1));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, (DISPLAY_UPDATE_CONTROL_1_RAM_INVERSE << DISPLAY_UPDATE_CONTROL_1_BW_RAM_OFFSET)
                                       | (DISPLAY_UPDATE_CONTROL_1_RAM_INVERSE << DISPLAY_UPDATE_CONTROL_1_RED_RAM_OFFSET)));

    sendCommand(display, 0x22);
    sendData(display, 0xB0);
    sendCommand(display, 0x20);

    //while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high);

    sendCommand(display, 0x01);
    //sendData(display, 0xD3);
    sendData(display, 0xF9);
    sendData(display, 0x00);
    sendData(display, 0x00);

    sendCommand(display, 0x11); //data entry mode setting,0x01,Y decrement,X increment
    //sendData(display, 0x03); org
    sendData(display, 0x03);

    sendCommand(display, 0x44); //set RAM X-address start/end position
    sendData(display, 0x00); //RAM X -address start at 00H
    sendData(display, display->xSize / 8); //RAM X-address end at 11H->(17D),that is (17+1*4=72)start/end position

    sendCommand(display, 0x45); //set RAM Y-address start/end position
    sendData(display, 0x00);
    sendData(display, 0x00);
    sendData(display, display->ySize % UINT8_MAX); //RAM Y-address end at 00H
    sendData(display, display->ySize / UINT8_MAX);

    return SSD1675_status_ok;
}

static SSD1675_status_t hwReset(const SSD1675_t* const display)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->rst, UniHAL_gpio_value_high) == true, SSD1675_status_rstPinWriteError);
    unihal_usleep(HW_RESET_TIMESPAN_US);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->rst, UniHAL_gpio_value_low) == true, SSD1675_status_rstPinWriteError);
    unihal_usleep(HW_RESET_TIMESPAN_US);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->rst, UniHAL_gpio_value_high) == true, SSD1675_status_rstPinWriteError);
    unihal_usleep(HW_RESET_TIMESPAN_US);

    return SSD1675_status_ok;
}

static SSD1675_status_t swReset(const SSD1675_t* const display)
{
    SSD1675_status_t ret = SSD1675_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_RESET));
    CHECK_AND_RETURN_IF_ERROR(waitForBusyFlag(display, SW_RESET_TIMEOUT_MS, SW_RESET_TIMESPAN_US));

    return ret;
}

static SSD1675_status_t waitForBusyFlag(const SSD1675_t* const display, const uint32_t delayMs, const uint32_t pollTimespanUs)
{
    uint32_t timeoutTicksStart;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    timeoutTicksStart = unihal_getTickCount();
    while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high)
    {
        if((unihal_getTickCount() - timeoutTicksStart) > delayMs)
        {
            return SSD1675_status_timeout;
        }
        unihal_usleep(pollTimespanUs);
    }

    return SSD1675_status_ok;
}

static SSD1675_status_t enterSleep(const SSD1675_t* const display)
{
    SSD1675_status_t ret = SSD1675_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);

    ret = sendCommand(display, REG_DEEP_SLEEP);
    if(ret == SSD1675_status_ok)
    {
        ret = sendData(display, OPERATION_MODE_SLEEP_1);
    }

    return ret;
}

static SSD1675_status_t setCursor(const SSD1675_t* const display, const uint8_t x, const uint16_t y)
{
    SSD1675_status_t ret = SSD1675_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1675_status_nullPointer);
    CHECK_AND_RETURN_STATUS(x < display->xSize, SSD1675_status_widthTooLarge);
    CHECK_AND_RETURN_STATUS(y < display->ySize, SSD1675_status_heightTooLarge);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_DISPLAY_UPDATE_CONTROL_1));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_RAM_X_ADDRESS));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, x / 8));

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_RAM_Y_ADDRESS));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, y & 0xFF));
    CHECK_AND_RETURN_IF_ERROR(sendData(display, (y >> 8) & 0xFF));

    return ret;
}
