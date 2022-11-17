/******************************************************************************
 @file mlx90614.h

 @brief MLX90614 driver header

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _MLX90614_H_
#define _MLX90614_H_

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

#define ABSOLUTE_ZERO -273.15
#define MLX90614_DEFAULT_ADDRESS        0x5A

typedef struct
{
    UniHAL_i2c_t* i2cDriver;
    uint8_t deviceAddress;

} MLX90614_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern bool mlx90614_init(MLX90614_t* instance, UniHAL_i2c_t* i2cDriver, uint8_t mlxAddress);
extern uint64_t mlx90614_getId(MLX90614_t* instance);
extern float mlx90614_getAmbientTemperature(MLX90614_t* instance);
extern float mlx90614_getObjectTemperature(MLX90614_t* instance);
extern bool mlx90614_setEmissivity(MLX90614_t* instance, uint16_t emissivity);

#ifdef __cplusplus
}
#endif

#endif /* _MLX90614_H_ */
