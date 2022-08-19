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

#include "array.h"
#include "unihal.h"
#include "ssd1306.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
#define HEIGHT_MAX 64
#define WIDTH_MAX 128



#define SSD1306_SETCONTRAST 0x81
#define SSD1306_DISPLAYALLON_RESUME 0xA4
#define SSD1306_DISPLAYALLON 0xA5
#define SSD1306_NORMALDISPLAY 0xA6
#define SSD1306_INVERTDISPLAY 0xA7
#define SSD1306_DISPLAYOFF 0xAE
#define SSD1306_DISPLAYON 0xAF

#define SSD1306_SETDISPLAYOFFSET 0xD3
#define SSD1306_SETCOMPINS 0xDA

#define SSD1306_SETVCOMDETECT 0xDB

#define SSD1306_SETDISPLAYCLOCKDIV 0xD5
#define SSD1306_SETPRECHARGE 0xD9

#define SSD1306_SETMULTIPLEX 0xA8

#define SSD1306_SETLOWCOLUMN 0x00
#define SSD1306_SETHIGHCOLUMN 0x10

#define SSD1306_SETSTARTLINE 0x40

#define SSD1306_MEMORYMODE 0x20
#define SSD1306_COLUMNADDR 0x21
#define SSD1306_PAGEADDR   0x22

#define SSD1306_COMSCANINC 0xC0
#define SSD1306_COMSCANDEC 0xC8

#define SSD1306_SEGREMAP 0xA0

#define SSD1306_CHARGEPUMP 0x8D

#define SSD1306_EXTERNALVCC 0x1
#define SSD1306_SWITCHCAPVCC 0x2

#define REFRESH_MIN     0x80
#define REFRESH_MID     0xB0
#define REFRESH_MAX     0xF0


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
static void writecmd(SSD1306_t* display, uint8_t data);
static void writedata(SSD1306_t* display, uint8_t data);

/******************************************************************************
 Global functions
 ******************************************************************************/
#define DU_ASSERT(x) x
void ssd1306_initSPI(SSD1306_t* display, monoGFX_t* gfx,UniHAL_spi_t* spi,
                   UniHAL_gpio_t* cs,UniHAL_gpio_t* rst,UniHAL_gpio_t* dc)
{
    //DU_ASSERT(display != NULL);
    //DU_ASSERT(gfx != NULL);
    //DU_ASSERT(spi != NULL);
    //DU_ASSERT(cs != NULL);
    //DU_ASSERT(rst != NULL);
    //DU_ASSERT(dc != NULL);

    display->spi = spi;
    display->cs = cs;
    display->rst = rst;
    display->dc = dc;
    display->gfx = gfx;

    DU_ASSERT(unihal_gpio_init(display->cs));
    DU_ASSERT(unihal_gpio_init(display->rst));
    DU_ASSERT(unihal_gpio_init(display->dc));

    DU_ASSERT(unihal_gpio_configureOutput(display->cs,UniHAL_gpio_value_high,UniHAL_gpio_outputType_pushPull));
    DU_ASSERT(unihal_gpio_configureOutput(display->rst,UniHAL_gpio_value_high,UniHAL_gpio_outputType_pushPull));
    DU_ASSERT(unihal_gpio_configureOutput(display->dc,UniHAL_gpio_value_low,UniHAL_gpio_outputType_pushPull));

    ssd1306_reset(display);

    /*writecmd(display, SSD1306_DISPLAYOFF);
    writecmd(display, SSD1306_SETDISPLAYCLOCKDIV);
    writecmd(display, REFRESH_MAX);

    writecmd(display, SSD1306_SETDISPLAYOFFSET);
    writecmd(display, 0x0);
    writecmd(display, SSD1306_SETSTARTLINE | 0x0);
    writecmd(display, SSD1306_CHARGEPUMP);

    writecmd(display, 0x14);

    writecmd(display, SSD1306_MEMORYMODE);
    writecmd(display, 0x00);
    writecmd(display, SSD1306_SEGREMAP | 0x1 );
    writecmd(display, SSD1306_COMSCANDEC);

    writecmd(display, SSD1306_SETCONTRAST);

    writecmd(display, 0xAF);

    writecmd(display, SSD1306_SETPRECHARGE);



    writecmd(display, SSD1306_SETMULTIPLEX);
    writecmd(display, 0x3F);

    writecmd(display, SSD1306_SETCOMPINS);
    writecmd(display, 0x12);

    writecmd(display, SSD1306_DISPLAYALLON_RESUME);
    writecmd(display, SSD1306_NORMALDISPLAY);
    writecmd(display, SSD1306_DISPLAYON);*/

    writecmd(display, 0xAE);  // Display Off

        writecmd(display, 0x00);
        writecmd(display, 0x10);
        writecmd(display, 0x40);
        writecmd(display, 0x20);  // Set addressing mode
        writecmd(display, 0x00);  // Horizontal Addressing Mode

        writecmd(display, 0x81);
        writecmd(display, 0xFF);

        writecmd(display, 0xA1);
        //writecmd(display, 0xA0 | (0x01 & 1));  // Set Segment Re-Map Default
                                    // 0xA0 (0x00) => column Address 0 mapped to 127
                                    // 0xA1 (0x01) => Column Address 127 mapped to 0

        //writecmd(display, 0xC0 | (0x08 & (1<<3)));  //
        writecmd(display, 0xC8);
        writecmd(display, 0xA6);  // Set Normal Display

        writecmd(display, 0xA8);  // Select Multiplex Ratio
        writecmd(display, 0x3F);  // Default => 0x3F (1/64 Duty)  0x1F(1/32 Duty)

        writecmd(display, 0xD3);  // Setting Display Offset
        writecmd(display, 0x00);  // 00H Reset

        writecmd(display, 0xD5);  // SET DISPLAY CLOCK
        writecmd(display, 0x80);  // 105HZ

        writecmd(display, 0xD9);  // Set Pre-Charge period
        writecmd(display, 0x22);

        writecmd(display, 0xDA);  // Set COM Hardware Configuration
        writecmd(display, 0x12);  // Alternative COM Pin---See IC Spec page 34
                                // (0x02)=> A4=0;Sequential COM pin configuration;A5=0;Disable COM Left/Right remap

        writecmd(display, 0xDB);  // Set Deselect Vcomh level
        writecmd(display, 0x40);

        writecmd(display, 0x8D);  // Set Charge Pump
        //writecmd(display, (0x10);  // Disable Charge Pump
        writecmd(display, 0x14);  // Endable Charge Pump

        writecmd(display, 0xA4);  // Entire Display ON
        writecmd(display, 0xAF);
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

void ssd1306_reset(SSD1306_t* display)
{
    unihal_gpio_write(display->rst,UniHAL_gpio_value_low);
    unihal_usleep(5000);
    unihal_gpio_write(display->rst,UniHAL_gpio_value_high);
}

void ssd1306_setCursor(SSD1306_t* display, uint8_t x, uint16_t y)
{
    
}

void ssd1306_refresh(SSD1306_t* display)
{
    size_t i = 0;

    //writecmd(display, SSD1306_SETLOWCOLUMN | 0x0);
    //writecmd(display, SSD1306_SETHIGHCOLUMN | 0x0);
    //writecmd(display, SSD1306_SETSTARTLINE | 0x0);
    writecmd(display, 0x21);
    writecmd(display, 0x00);
    writecmd(display, 0x7F);
    writecmd(display, 0x22);
    writecmd(display, 0x00);
    writecmd(display, 0x07);
    unihal_gpio_write(display->dc,UniHAL_gpio_value_high);
    unihal_gpio_write(display->cs,UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, display->gfx->bufferSize, display->gfx->buffer, NULL);
    unihal_gpio_write(display->cs,UniHAL_gpio_value_high);
    /*for (i = 0; i < display->gfx->bufferSize; i++)
    {
        writedata(display, display->gfx->buffer[i]);
    }*/
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
static void writecmd(SSD1306_t* display, uint8_t data)
{
    unihal_gpio_write(display->dc,UniHAL_gpio_value_low);
    unihal_gpio_write(display->cs,UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, sizeof(data), &data, NULL);
    unihal_gpio_write(display->cs,UniHAL_gpio_value_high);
    unihal_gpio_write(display->dc,UniHAL_gpio_value_high);
}
static void writedata(SSD1306_t* display, uint8_t data)
{
    unihal_gpio_write(display->cs,UniHAL_gpio_value_low);
    unihal_spi_transfer(display->spi, sizeof(data), &data, NULL);
    unihal_gpio_write(display->cs,UniHAL_gpio_value_high);
}

