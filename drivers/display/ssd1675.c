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

#include "unihal.h"
#include "monogfx.h"
#include "ssd1675.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define HEIGHT_MAX 160
#define WIDTH_MAX 296

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
static void writecmd(SSD1675_t* display, uint8_t data);
static void writedata(SSD1675_t* display, uint8_t data);

/******************************************************************************
 Global functions
 ******************************************************************************/
void ssd1675_init(SSD1675_t* display, monoGFX_t* bwGfx, monoGFX_t* rGfx, UniHAL_spi_t* spi,
                    UniHAL_gpio_t* cs, UniHAL_gpio_t* rst, UniHAL_gpio_t* bsy, UniHAL_gpio_t* dc)
{
    //DU_ASSERT(display != NULL);
    //DU_ASSERT(bwGfx != NULL);
    //DU_ASSERT(rGfx != NULL);
    //DU_ASSERT(spi != NULL);
    //DU_ASSERT(cs != NULL);
    //DU_ASSERT(rst != NULL);
    //DU_ASSERT(bsy != NULL);
    //DU_ASSERT(dc != NULL);

    display->spi = spi;
    display->cs = cs;
    display->rst = rst;
    display->bsy = bsy;
    display->dc = dc;

    display->xSize = 122;
    display->ySize = 250;

    display->bwGfx = bwGfx;
    display->rGfx = rGfx;
    //DU_ASSERT(unihal_gpio_init(display->cs));
    //DU_ASSERT(unihal_gpio_init(display->rst));
    //DU_ASSERT(unihal_gpio_init(display->bsy));
    //DU_ASSERT(unihal_gpio_init(display->dc));

    //DU_ASSERT(unihal_gpio_configureOutput(display->cs, UniHAL_gpio_value_high, UniHAL_gpio_outputType_pushPull));
    //DU_ASSERT(unihal_gpio_configureOutput(display->rst, UniHAL_gpio_value_low, UniHAL_gpio_outputType_pushPull));
    //DU_ASSERT(unihal_gpio_configureInput(display->bsy, UniHAL_gpio_pull_noPull));
    //DU_ASSERT(unihal_gpio_configureOutput(display->dc, UniHAL_gpio_value_low, UniHAL_gpio_outputType_pushPull));

    ssd1675_hwReset(display);
    ssd1675_swReset(display);

        writecmd(display, 0x74);
    writedata(display, 0x54);

    writecmd(display, 0x7E);
    writedata(display, 0x3B);

    //writecmd(display, 0x21);
    //writedata(display, 0x08);

    writecmd(display, 0x22);
    writedata(display, 0xB0);
    writecmd(display, 0x20);

    //while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high); TODO timeout

    writecmd(display, 0x01);
    //writedata(display, 0xD3);
    writedata(display, 0xF9);
    writedata(display, 0x00);
    writedata(display, 0x00);

    writecmd(display, 0x11); //data entry mode setting,0x01,Y decrement,X increment
    writedata(display, 0x03);

    writecmd(display, 0x44); //set RAM X-address start/end position
    writedata(display, 0x00); //RAM X -address start at 00H
    writedata(display, 0x0F); //RAM X-address end at 11H->(17D),that is (17+1*4=72)start/end position

    writecmd(display, 0x45); //set RAM Y-address start/end position
    writedata(display, 0x00);
    writedata(display, 0x00);
    writedata(display, 0xF9); //RAM Y-address end at 00H
    writedata(display, 0x00);
}

void ssd1675_hwReset(SSD1675_t* display)
{
    unihal_gpio_write(display->cs, UniHAL_gpio_value_high);
    unihal_gpio_write(display->rst, UniHAL_gpio_value_high);
    unihal_usleep(1000);
    unihal_gpio_write(display->rst, UniHAL_gpio_value_low);
    unihal_usleep(1000);
    unihal_gpio_write(display->rst, UniHAL_gpio_value_high);
    unihal_usleep(1000);
}

void ssd1675_swReset(SSD1675_t* display)
{
    writecmd(display, 0x12);
    //while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high); //TODO timeout
}

void ssd1675_setCursor(SSD1675_t* display, uint8_t x, uint16_t y)
{
    writecmd(display, 0x4E);
    writedata(display, x / 8);//x

    writecmd(display, 0x4F);
    writedata(display, y & 0xFF);//y
    writedata(display, (y >> 8) & 0xFF);
}

void ssd1675_refresh(SSD1675_t* display)
{
    size_t i = 0;
    ssd1675_setCursor(display, 0, 0);

    writecmd(display, 0x24);
    for (i = 0; i < display->bwGfx->bufferSize; i++)
    {
        writedata(display, ~display->bwGfx->buffer[i]);
    }
        /*unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
        unihal_spi_transfer(display->spi, display->bwGfx->bufferSize, display->bwGfx->buffer, NULL);
        unihal_gpio_write(display->cs, UniHAL_gpio_value_high);*/

    ssd1675_setCursor(display, 0, 0);

    writecmd(display, 0x26);
    for (i = 0; i < display->rGfx->bufferSize; i++)
    {
        writedata(display, ~display->rGfx->buffer[i]);
    }
        /*unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
        unihal_spi_transfer(display->spi, display->rGfx->bufferSize, display->rGfx->buffer, NULL);
        unihal_gpio_write(display->cs, UniHAL_gpio_value_high);*/

    writecmd(display, 0x22);
    writedata(display, 0xC7);
    writecmd(display, 0x20);

    //while(unihal_gpio_read(display->bsy) == UniHAL_gpio_value_high); TODO timeout
}

void ssd1675_sleep(SSD1675_t* display)
{
    writecmd(display, 0x10);
    writedata(display, 0x01);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
static void writecmd(SSD1675_t* display, uint8_t data)
{
    unihal_gpio_write(display->dc, UniHAL_gpio_value_low);
    unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, sizeof(data), &data, NULL);
    unihal_gpio_write(display->cs, UniHAL_gpio_value_high);
    unihal_gpio_write(display->dc, UniHAL_gpio_value_high);
}
static void writedata(SSD1675_t* display, uint8_t data)
{
    unihal_gpio_write(display->cs, UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, sizeof(data), &data, NULL);
    unihal_gpio_write(display->cs, UniHAL_gpio_value_high);
}
