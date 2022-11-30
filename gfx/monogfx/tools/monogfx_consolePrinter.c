/******************************************************************************
 @file monogfx_consolePrinter.c

 @brief MonoGFX console printer implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "unihal/gfx/monogfx/monogfx.h"
#include "monogfx_consolePrinter.h"

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
    if(NULL != gfx)
    {
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
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
