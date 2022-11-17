/******************************************************************************
 @file bh1721.h

 @brief BH1721FVC driver header

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _BH1721_H_
#define _BH1721_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>

#include "unihal/unihal.h"

#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************
 Constants and definitions
 *****************************************************************************/

typedef struct
{
    UniHAL_i2c_t* i2cDriver;
    UniHAL_gpio_t* rst;
} BH1721_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern bool bh1721_init(BH1721_t* instance, UniHAL_i2c_t* i2cDriver, UniHAL_gpio_t* rst);

extern uint16_t bh1721_readIlluminance(BH1721_t* instance);

#ifdef __cplusplus
}
#endif

#endif /* _BH1721_H_ */
