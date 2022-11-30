/*****************************************************************************
 @file monogfx_consolePrinter.h

 @brief monoGFX_consolePrinter library allows to print monoGFX screen as 
        standard output. Pixels turned on are shown as '#'.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef MONOGFX_CONSOLE_PRINTER_H_
#define MONOGFX_CONSOLE_PRINTER_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "unihal/gfx/monogfx/monogfx.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern void monoGFX_consolePrinter(const monoGFX_t* const gfx, const bool printInfo);

#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_CONSOLE_PRINTER_H_ */
