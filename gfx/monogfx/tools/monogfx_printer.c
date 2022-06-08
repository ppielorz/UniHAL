/******************************************************************************
 @file monogfx_printer.c

 @brief MonoGFX printer to BMP

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include "libbmp.h"
#include "monogfx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

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
 Global functions
 ******************************************************************************/

void print(monoGFX_t* gfx, const char* filename)
{
    bmp_img img;
    bmp_img_init_df (&img, gfx->xSize, gfx->ySize);
    printf("Printing to: %s\n", filename);
    
    // Draw a checkerboard pattern:
    for (size_t y = 0, x; y < gfx->ySize; y++)
    {
        for (x = 0; x < gfx->xSize; x++)
        {
            uint8_t value = monoGFX_getPixel(gfx, x, y);
            bmp_pixel_init(&img.img_pixels[y][x], value, value, value);
        }
    }

    for(size_t i = 0U; i < gfx->bufferSize; i++)
    {
        printf("%02X, ", gfx->buffer[i]);
    }

    printf("\n\n");
    
    bmp_img_write (&img, filename);
    bmp_img_free (&img);
}

int main(int argc, char** argv)
{
    monoGFX_t gfx;
    size_t xSize = 16;
    size_t ySize = 16;
    size_t bufferSize = ((xSize + (8 - 1)) / 8 ) * ySize;
    uint8_t* buffer = malloc(bufferSize);

    monoGFX_init(&gfx, xSize, ySize, buffer, bufferSize);
    monoGFX_setPixel(&gfx, 0, 0);
    print(&gfx, "1.bmp");
    monoGFX_setPixel(&gfx, 0, 1);
    print(&gfx, "2.bmp");
    monoGFX_setPixel(&gfx, 1, 0);
    print(&gfx, "3.bmp");
    monoGFX_setPixel(&gfx, 1, 1);
    print(&gfx, "4.bmp");



    free(buffer);
    return 0;
}
