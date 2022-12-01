/******************************************************************************
 @file monogfx_printers.c

 @brief MonoGFX printers implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <libpng16/png.h>
//#include <libpng16/pngconf.h>
//#include <libpng16/pnglibconf.h>

#include "unihal/gfx/monogfx/monogfx.h"
#include "monogfx_printers.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Public Functions
 *****************************************************************************/

void monoGFX_consolePrinter(const monoGFX_t* const gfx, const bool printInfo)
{
    if(NULL == gfx)
    {
        fprintf(stderr, "monoGFX_consolePrinter gfx null pointer");
        return;
    }

    if(printInfo)
    {
        printf("  ");
        for(size_t xPosition = 0U; xPosition < gfx->xSize; xPosition++)
        {
            printf("%lu", xPosition % 10);
        }
        printf("\n");
    }

    for(size_t yPosition = 0U; yPosition < gfx->ySize; yPosition++)
    {
        if(printInfo)
        {
            printf("%lu ", yPosition % 10);
        }
        for(size_t xPosition = 0U; xPosition < gfx->xSize; xPosition++)
        {
            bool pixelSet = false;
            monoGFX_getPixel(gfx, xPosition, yPosition, &pixelSet);
            printf("%c", pixelSet ? '#' : ' ');
        }
        printf("\n");
    }
}

void monoGFX_pngPrinter(const monoGFX_t* const gfx, const char* const filename)
{
    if(NULL == gfx)
    {
        fprintf(stderr, "monoGFX_consolePrinter gfx null pointer");
        return;
    }

    if(NULL == filename)
    {
        fprintf(stderr, "monoGFX_consolePrinter filename null pointer");
        return;
    }

    int code = 0;
    FILE *fp = NULL;
    png_structp png_ptr = NULL;
    png_infop info_ptr = NULL;
    png_bytep row = NULL;

    // Open file for writing (binary mode)
    fp = fopen(filename, "wb");
    if (fp == NULL) 
    {
        fprintf(stderr, "Could not open file %s for writing\n", filename);
        code = 1;
        goto finalise;
    }

   // Initialize write structure
   png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
   if (png_ptr == NULL) {
      fprintf(stderr, "Could not allocate write struct\n");
      code = 1;
      goto finalise;
   }

   // Initialize info structure
   info_ptr = png_create_info_struct(png_ptr);
   if (info_ptr == NULL) {
      fprintf(stderr, "Could not allocate info struct\n");
      code = 1;
      goto finalise;
   }

   // Setup Exception handling
   if (setjmp(png_jmpbuf(png_ptr))) {
      fprintf(stderr, "Error during png creation\n");
      code = 1;
      goto finalise;
   }

   png_init_io(png_ptr, fp);

   // Write header (8 bit colour depth)
   png_set_IHDR(png_ptr, info_ptr, gfx->xSize, gfx->ySize,
         8, PNG_COLOR_TYPE_RGB, PNG_INTERLACE_NONE,
         PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);

   png_write_info(png_ptr, info_ptr);
   // Allocate memory for one row (3 bytes per pixel - RGB)
   row = (png_bytep) malloc(3 * gfx->xSize * sizeof(png_byte));

   // Write image data
    for(size_t yPosition = 0U; yPosition < gfx->ySize; yPosition++)
    {
        for(size_t xPosition = 0U; xPosition < gfx->xSize; xPosition++)
        {
            bool pixelSet = false;
            monoGFX_getPixel(gfx, xPosition, yPosition, &pixelSet);
            row[xPosition * 3 + 0] = pixelSet ? 255: 0;
            row[xPosition * 3 + 1] = pixelSet ? 255: 0;
            row[xPosition * 3 + 2] = pixelSet ? 255: 0;
        }
        png_write_row(png_ptr, row);
    }

   // End write
   png_write_end(png_ptr, NULL);
   finalise:
   if (fp != NULL) fclose(fp);
   if (info_ptr != NULL) png_free_data(png_ptr, info_ptr, PNG_FREE_ALL, -1);
   if (png_ptr != NULL) png_destroy_write_struct(&png_ptr, (png_infopp)NULL);
   if (row != NULL) free(row);

   return code;

}

/******************************************************************************
 Local Functions
 *****************************************************************************/
