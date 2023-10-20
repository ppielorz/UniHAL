/******************************************************************************
 @file ssd1306.c

 @brief SSD1306 driver implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "unihal/unihal.h"
#include "unihal/unihal_os.h"
#include "unihal/utils/array.h"
#include "unihal/drivers/display/ssd1306.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define CHECK_AND_RETURN_STATUS(condition, failStatus) if(!(condition)) { return failStatus; }
#define CHECK_AND_RETURN_IF_ERROR(expression) ret = expression; if(ret != SSD1306_status_ok) { return ret; }

#define HEIGHT_MAX 128
#define WIDTH_MAX 64

#define REG_ADDRESSING_MODE 0x20
#define REG_COLUMN_ADDRESS 0x21
#define REG_PAGE_ADDRESS 0x22
#define REG_DISPLAY_START_LINE 0x40
#define REG_CONTRAST 0x81
#define REG_ENABLE_CHARGE_PUMP_REGULATOR 0x8D
#define REG_MULTIPLEX_RATIO 0xA8
#define REG_SEGMENT_REMAP 0xA0
#define REG_DISPLAY_RAM_CONTENT 0xA4
#define REG_IGNORE_RAM_CONTENT 0xA5
#define REG_NORMAL_DISPLAY 0xA6
#define REG_INVERT_DISPLAY 0xA7
#define REG_DISPLAY_OFF 0xAE
#define REG_DISPLAY_ON 0xAF
#define REG_COM_OUTPUT_SCAN_DIRECTION 0xC0
#define REG_DISPLAY_OFFSET 0xD3
#define REG_DISPLAY_OSCILLATOR_FREQUENCY 0xD5
#define REG_COM_PINS_HARDWARE_CONFIGURATION 0xDA


#define MULTIPLEX_RATIO_MIN 16
#define MULTIPLEX_RATIO_MAX 64

#define OSCILLATOR_FREQUENCY 0x80

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
static SSD1306_status_t reset(const SSD1306_t* const display);
static SSD1306_status_t sendCommand(const SSD1306_t* const display, const uint8_t command);
static SSD1306_status_t setAddressingMode(SSD1306_t* const display, const SSD1306_addressingMode_t addressingMode);
static SSD1306_status_t setCursor(const SSD1306_t* const display, const size_t xPosition, const size_t yPosition);
static SSD1306_status_t setMuxRatio(const SSD1306_t* const display, const uint8_t muxRatio);
static SSD1306_status_t setDisplayOffset(const SSD1306_t* const display, const uint8_t offset);
static SSD1306_status_t setDisplayStartLine(const SSD1306_t* const display, const uint8_t startLine);

/*!
 * @brief Sets segment remap register to A0 (segment remap false, default) or A1
 * (segment remap true).
 *
 * @details For segmentRemap false column address 0 is mapped to SEG0.
 * For segmentRemap true column address 127 is mapped to SEG0.
 *
 * @param display Pointer to @ref SSD1306_t display struct.
 * @param segmentRemap Segment remap setting.
 *
 * @return SSD1306 status code (see @ref SSD1306_status_t).
 */
static SSD1306_status_t setSegmentRemap(const SSD1306_t* const display, const bool segmentRemap);
static SSD1306_status_t setComOutputScanDirection(const SSD1306_t* const display, const bool comOutputScanDirection);

/*!
 * @brief Sets COM pin hardware configuration.
 *
 * @details For alternativeConf false sequential COM pin configuration.
 * For alternativeConf true alternative COM pin configuration (default).
 * For remap false left/right remap disabled (default).
 * For remap true left/right remap enabled.
 *
 * @param display Pointer to @ref SSD1306_t display struct.
 * @param alternativeConf Enable alternative COM pin configuration.
 * @param remap Enable/disable left/right remap.
 *
 * @return SSD1306 status code (see @ref SSD1306_status_t).
 */
static SSD1306_status_t setComPinsHardwareConfiguration(const SSD1306_t* const display, const bool alternativeConf, const bool remap);

static SSD1306_status_t invertDisplay(const SSD1306_t* const display, const bool invertDisplay);
static SSD1306_status_t displayRamContent(const SSD1306_t* const display, const bool displayRamContent);
static SSD1306_status_t setOscillatorFrequency(const SSD1306_t* const display, const uint8_t oscillatorFrequencySetting);
static SSD1306_status_t enableChargePump(const SSD1306_t* const display, const bool chargePumpEnabled);

/******************************************************************************
 Global functions
 ******************************************************************************/

SSD1306_status_t ssd1306_initSPI(SSD1306_t* const display, monoGFX_t* const gfx, UniHAL_spi_t* const spi,
                                        UniHAL_gpio_t* const cs, UniHAL_gpio_t* const rst, UniHAL_gpio_t* const dc)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(gfx != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(spi != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(cs != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(rst != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(dc != NULL, SSD1306_status_nullPointer);

    display->spi = spi;
    display->cs = cs;
    display->rst = rst;
    display->dc = dc;
    display->gfx = gfx;

    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->cs) == true, SSD1306_status_csPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->rst) == true, SSD1306_status_rstPinInitError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_init(display->dc) == true, SSD1306_status_dcPinInitError);

    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->cs, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull) == true, SSD1306_status_csPinConfigureError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->rst, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull) == true, SSD1306_status_rstPinConfigureError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_configureOutput(display->dc, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull) == true, SSD1306_status_dcPinConfigureError);

    CHECK_AND_RETURN_STATUS(gfx->xSizeBuffer <= WIDTH_MAX, SSD1306_status_widthTooLarge);
    CHECK_AND_RETURN_STATUS(gfx->ySizeBuffer <= HEIGHT_MAX, SSD1306_status_heightTooLarge);
    display->xSize = gfx->xSizeBuffer;
    display->ySize = gfx->ySizeBuffer;
    gfx->bitReverseOrder = true;

    CHECK_AND_RETURN_IF_ERROR(reset(display));
    CHECK_AND_RETURN_IF_ERROR(setMuxRatio(display, display->xSize));
    CHECK_AND_RETURN_IF_ERROR(setDisplayOffset(display, 0U));
    CHECK_AND_RETURN_IF_ERROR(setDisplayStartLine(display, 0U));
    CHECK_AND_RETURN_IF_ERROR(setSegmentRemap(display, false));
    CHECK_AND_RETURN_IF_ERROR(setComOutputScanDirection(display, true));
    CHECK_AND_RETURN_IF_ERROR(setComPinsHardwareConfiguration(display, true, false));
    CHECK_AND_RETURN_IF_ERROR(ssd1306_setContrast(display, 255));
    CHECK_AND_RETURN_IF_ERROR(displayRamContent(display, true));
    CHECK_AND_RETURN_IF_ERROR(invertDisplay(display, false));
    CHECK_AND_RETURN_IF_ERROR(setOscillatorFrequency(display, OSCILLATOR_FREQUENCY));
    CHECK_AND_RETURN_IF_ERROR(enableChargePump(display, true));
    CHECK_AND_RETURN_IF_ERROR(ssd1306_displayOn(display, true));
    CHECK_AND_RETURN_IF_ERROR(setAddressingMode(display, SSD1306_addressingMode_vertical));

    return ret;
}

void ssd1306_initI2C(SSD1306_t* display, monoGFX_t* gfx,UniHAL_i2c_t* i2c, uint8_t address)
{
    //DU_ASSERT(display != NULL);
    //DU_ASSERT(gfx != NULL);
    //DU_ASSERT(i2c != NULL);

    display->i2c = i2c;
    display->gfx = gfx;
    display->address = address;

    //DU_ASSERT(false);
}


SSD1306_status_t ssd1306_refresh(const SSD1306_t* const display)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(setCursor(display, 0, 0));
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_high) == true, SSD1306_status_dcPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_low) == true, SSD1306_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_spi_transfer(display->spi, display->gfx->bufferSize, display->gfx->buffer, NULL) == true, SSD1306_status_spiCommunicationError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_high) == true, SSD1306_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_high) == true, SSD1306_status_dcPinWriteError);

    return ret;
}

SSD1306_status_t ssd1306_setContrast(const SSD1306_t* const display, const uint8_t contrast)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_CONTRAST));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, contrast));

    return ret;
}

SSD1306_status_t ssd1306_displayOn(const SSD1306_t* const display, const bool displayOn)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    return sendCommand(display, displayOn ? REG_DISPLAY_ON : REG_DISPLAY_OFF);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static SSD1306_status_t reset(const SSD1306_t* const display)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->rst, UniHAL_gpio_value_low) == true, SSD1306_status_rstPinWriteError);
    unihalos_usleep(5000);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->rst, UniHAL_gpio_value_high) == true, SSD1306_status_rstPinWriteError);

    return SSD1306_status_ok;
}

static SSD1306_status_t sendCommand(const SSD1306_t* const display, const uint8_t command)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_low) == true, SSD1306_status_dcPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_low) == true, SSD1306_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_spi_transfer(display->spi, sizeof(command), &command, NULL) == true, SSD1306_status_spiCommunicationError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->cs, UniHAL_gpio_value_high) == true, SSD1306_status_csPinWriteError);
    CHECK_AND_RETURN_STATUS(unihal_gpio_write(display->dc, UniHAL_gpio_value_high) == true, SSD1306_status_dcPinWriteError);

    return SSD1306_status_ok;
}

static SSD1306_status_t setAddressingMode(SSD1306_t* const display, const SSD1306_addressingMode_t addressingMode)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(addressingMode < SSD1306_addressingMode_count, SSD1306_status_invalidAddressingMode);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_ADDRESSING_MODE));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, addressingMode));
    display->addressingMode = addressingMode;

    return ret;
}

static SSD1306_status_t setCursor(const SSD1306_t* const display, const size_t xPosition, const size_t yPosition)
{
    SSD1306_status_t ret = SSD1306_status_ok;
    (void) xPosition;
    (void) yPosition;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    switch(display->addressingMode)
    {
        case SSD1306_addressingMode_vertical:
        case SSD1306_addressingMode_horizontal:
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_COLUMN_ADDRESS));
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, 0x00));
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, display->ySize - 1));
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_PAGE_ADDRESS));
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, 0x00));
            CHECK_AND_RETURN_IF_ERROR(sendCommand(display, display->xSize / 8 - 1));
            break;

        default:
            ret = SSD1306_status_invalidAddressingMode;
            break;
    }

    return ret;
}

static SSD1306_status_t setMuxRatio(const SSD1306_t* const display, const uint8_t muxRatio)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(muxRatio >= MULTIPLEX_RATIO_MIN, SSD1306_status_invalidMuxRatio);
    CHECK_AND_RETURN_STATUS(muxRatio <= MULTIPLEX_RATIO_MAX, SSD1306_status_invalidMuxRatio);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_MULTIPLEX_RATIO));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, muxRatio - 1));

    return ret;
}

static SSD1306_status_t setDisplayOffset(const SSD1306_t* const display, const uint8_t offset)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_DISPLAY_OFFSET));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, offset));

    return ret;
}

static SSD1306_status_t setDisplayStartLine(const SSD1306_t* const display, const uint8_t startLine)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    CHECK_AND_RETURN_STATUS(startLine <= WIDTH_MAX, SSD1306_status_invalidDisplayStartLine);

    return sendCommand(display, REG_DISPLAY_START_LINE | startLine);
}

static SSD1306_status_t setSegmentRemap(const SSD1306_t* const display, const bool segmentRemap)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    return sendCommand(display, REG_SEGMENT_REMAP | (segmentRemap ? 0x1 : 0x0));
}

static SSD1306_status_t setComOutputScanDirection(const SSD1306_t* const display, const bool comOutputScanDirection)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    return sendCommand(display, REG_COM_OUTPUT_SCAN_DIRECTION | (comOutputScanDirection ? 0x8 : 0x0));
}

static SSD1306_status_t setComPinsHardwareConfiguration(const SSD1306_t* const display, const bool alternativeConf, const bool remap)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_COM_PINS_HARDWARE_CONFIGURATION));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, 0x02 | (alternativeConf ? 0x10 : 0x00) | (remap ? 0x20 : 0x00)));

    return ret;
}

static SSD1306_status_t invertDisplay(const SSD1306_t* const display, const bool invertDisplay)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    return sendCommand(display, invertDisplay ? REG_INVERT_DISPLAY : REG_NORMAL_DISPLAY);
}

static SSD1306_status_t displayRamContent(const SSD1306_t* const display, const bool displayRamContent)
{
    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);
    return sendCommand(display, displayRamContent ? REG_DISPLAY_RAM_CONTENT : REG_IGNORE_RAM_CONTENT);
}

static SSD1306_status_t setOscillatorFrequency(const SSD1306_t* const display, const uint8_t oscillatorFrequencySetting)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_DISPLAY_OSCILLATOR_FREQUENCY));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, oscillatorFrequencySetting));

    return ret;
}

static SSD1306_status_t enableChargePump(const SSD1306_t* const display, const bool chargePumpEnabled)
{
    SSD1306_status_t ret = SSD1306_status_ok;

    CHECK_AND_RETURN_STATUS(display != NULL, SSD1306_status_nullPointer);

    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, REG_ENABLE_CHARGE_PUMP_REGULATOR));
    CHECK_AND_RETURN_IF_ERROR(sendCommand(display, 0x10 | (chargePumpEnabled ? 0x04 : 0x00)));

    return ret;
}
