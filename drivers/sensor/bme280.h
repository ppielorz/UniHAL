/******************************************************************************
 @file bme280.h

 @brief BME280 driver header
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _BME280_H_
#define _BME280_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>

#include "unihal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/


#define BME280_I2C_ADDRESS_1 0x76
#define BME280_I2C_ADDRESS_2 0x77

typedef enum
{
    BME280_oversampling_skipped = 0U,
    BME280_oversampling_1x = 1U,
    BME280_oversampling_2x = 2U,
    BME280_oversampling_4x = 3U,
    BME280_oversampling_8x = 4U,
    BME280_oversampling_16x = 5U,

    BME280_oversampling_count
} BME280_oversampling_t;

typedef enum
{
    BME280_mode_sleep = 0U,
    BME280_mode_forced = 1U,
    BME280_mode_normal = 3U,

    BME280_mode_count = 4U
} BME280_mode_t;

typedef enum
{
    BME280_status_ok = 0U,
    BME280_status_wrongChipID = 1U,
    BME280_status_communicationError = 2U,
    BME280_status_resetFail = 3U,
    BME280_status_wrongOversamplingValue = 4U,
    BME280_status_wrongMode = 5U,
    BME280_status_measurementOngoing = 6U,
    BME280_status_conversionTimeout = 7U,
} BME280_status_t;

typedef struct
{
    uint16_t    T1;
    int16_t     T2;
    int16_t     T3;

    uint16_t    P1;
    int16_t     P2;
    int16_t     P3;
    int16_t     P4;
    int16_t     P5;
    int16_t     P6;
    int16_t     P7;
    int16_t     P8;
    int16_t     P9;

    uint8_t     H1;
    int16_t     H2;
    uint8_t     H3;
    int16_t     H4;
    int16_t     H5;
    int8_t      H6;
} BME280_calibrationData_t;

typedef struct
{
    UniHAL_i2c_t* i2c;
    uint8_t i2cAddress;
    BME280_calibrationData_t calibrationData;
    int32_t fineTemperature;
} BME280_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern BME280_status_t bme280_init(BME280_t* instance, UniHAL_i2c_t* i2c, uint8_t i2cAddress);
extern BME280_status_t bme280_setOptions(BME280_t* instance, BME280_oversampling_t humidityOversampling, BME280_oversampling_t temperatureOversampling, BME280_oversampling_t pressureOversampling);
extern BME280_status_t bme280_setMode(BME280_t* instance, BME280_mode_t mode);
extern BME280_status_t bme280_getMeasurements(BME280_t* instance, int32_t* temperature, uint32_t* pressure, uint32_t* humidity);

#ifdef __cplusplus
}
#endif

#endif /* _BME280_H_ */
