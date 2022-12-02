/*****************************************************************************
 @file monogfx_printers.h

 @brief monoGFX_printers library allows to print monoGFX screens.

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef MONOGFX_PRINTERS_H_
#define MONOGFX_PRINTERS_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "unihal/monogfx/monogfx.h"

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

/**
 * @brief Prints monoGFX screen to console as standard output.
 * 
 * @param gfx Pointer to monoGFX struct.
 * @param printInfo Prints monoGFX struct details and row/column numbers id true.
 */
extern void monoGFX_consolePrinter(const monoGFX_t* const gfx, const bool printInfo);

/**
 * @brief Prints monoGFX screen to PNG file.
 * 
 * @param gfx Pointer to monoGFX struct.
 * @param filename Target PNG filename.
 */
extern void monoGFX_pngPrinter(const monoGFX_t* const gfx, const char* const filename);

#ifdef __cplusplus
}
#endif

#endif /* MONOGFX_PRINTERS_H_ */
