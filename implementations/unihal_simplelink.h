/******************************************************************************
 @file unihal_simplelink.h

 @brief UniHAL Simplelink implementation declarations

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_SIMPLELINK_H_
#define _UNIHAL_SIMPLELINK_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include <ti/drivers/I2C.h>
#include <ti/drivers/SPI.h>
#include <ti/drivers/PIN.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/NVS.h>

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

typedef struct
{
    uint8_t index;
} UniHAL_SimpleLink_gpioStruct_t;

typedef struct
{
    I2C_Params params;
    uint8_t index;
} UniHAL_SimpleLink_i2cStruct_t;

typedef struct
{
    SPI_Params params;
    uint8_t index;
} UniHAL_SimpleLink_spiStruct_t;

typedef struct
{
    UART_Params params;
    uint8_t index;
} UniHAL_SimpleLink_uartStruct_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/


#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_SIMPLELINK_H_ */
