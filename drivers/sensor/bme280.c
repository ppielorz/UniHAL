/******************************************************************************
 @file bme280.c

 @brief BME280 driver implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>

#include "array.h"
#include "stream.h"
#include "unihal.h"
#include "bme280.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#define BME280_CHIP_ID 0x60

#define REGISTER_CHIP_ID_ADDRESS    0xD0
#define REGISTER_DEVICE_STATUS_ADDRESS     0xF3
#define REGISTER_RESET_ADDRESS      0xE0
#define REGISTER_CTRL_MEAS_MODE_ADDRESS  0xF4
#define REGISTER_CTRL_HUM_ADDRESS   0xF2

#define REGISTER_RESET_VALUE    0xB6

#define CALIB_DATA_1_ADDRESS    0x88
#define CALIB_DATA_1_LENGTH     26
#define CALIB_DATA_2_ADDRESS    0xE1
#define CALIB_DATA_2_LENGTH     7
#define RAW_DATA_ADDRESS        0xF7
#define RAW_DATA_LENGTH         8

#define RAW_DATA_PRESSURE_MSB_OFFSET        0U
#define RAW_DATA_PRESSURE_LSB_OFFSET        1U
#define RAW_DATA_PRESSURE_XLSB_OFFSET       2U
#define RAW_DATA_TEMPERATURE_MSB_OFFSET     3U
#define RAW_DATA_TEMPERATURE_LSB_OFFSET     4U
#define RAW_DATA_TEMPERATURE_XLSB_OFFSET    5U
#define RAW_DATA_HUMIDITY_MSB_OFFSET        6U
#define RAW_DATA_HUMIDITY_LSB_OFFSET        7U

#define RESET_TIME_US       2000
#define RESET_RETRY_COUNT   3
#define SINGLE_CONVERSION_DELAY_US 1000
#define MAX_CONVERSION_TIME_US (500 * 1000)

#define REGISTER_STATUS_MEASURING_BIT   (1 << 3)
#define REGISTER_STATUS_UPDATE_BIT      (1 << 0)


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

static BME280_status_t getChipID(BME280_t* instance, uint8_t* chipId);
static BME280_status_t getDeviceStatus(BME280_t* instance, uint8_t* deviceStatus);
static BME280_status_t getMode(BME280_t* instance, BME280_mode_t* mode);
static BME280_status_t resetDevice(BME280_t* instance);
static BME280_status_t waitForConversion(BME280_t* instance);
static BME280_status_t getCalibrationData(BME280_t* instance);
static BME280_status_t getRawData(BME280_t* instance, int16_t* rawHumidity, int32_t* rawTemperature, int32_t* rawPressure);
static bool i2cWrite(BME280_t* instance, uint8_t address, uint8_t data);
static int32_t compensateTemperature(BME280_t* instance, int32_t rawTemperature);
static uint32_t compensatePressure(BME280_t* instance, int32_t rawPressure);
static uint32_t compensateHumidity(BME280_t* instance, int16_t rawHumidity);
/******************************************************************************
 Global functions
 ******************************************************************************/

BME280_status_t bme280_init(BME280_t* instance, UniHAL_i2c_t* i2c, uint8_t i2cAddress)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(i2c != NULL);

    uint8_t chipId = 0U;
    BME280_status_t status = BME280_status_ok;

    memset(instance, 0, sizeof(*instance));
    instance->i2c = i2c;
    instance->i2cAddress = i2cAddress;

    status = getChipID(instance, &chipId);
    if(status != BME280_status_ok)
    {
        return status;
    }

    if(chipId != BME280_CHIP_ID)
    {
        return BME280_status_wrongChipID;
    }

    status = resetDevice(instance);
    if(status != BME280_status_ok)
    {
        return status;
    }

    status = getCalibrationData(instance);
    if(status != BME280_status_ok)
    {
        return status;
    }

    return BME280_status_ok;
}

BME280_status_t bme280_setOptions(BME280_t* instance, BME280_oversampling_t humidityOversampling, BME280_oversampling_t temperatureOversampling, BME280_oversampling_t pressureOversampling)
{
    //DU_ASSERT(instance != NULL);

    if(humidityOversampling >= BME280_oversampling_count ||
            temperatureOversampling >= BME280_oversampling_count ||
            pressureOversampling >= BME280_oversampling_count)
    {
        return BME280_status_wrongOversamplingValue;
    }

    uint8_t tempCtrlMeasureModeRegister = (temperatureOversampling << 5) | (pressureOversampling << 2) | BME280_mode_sleep;

    if(!i2cWrite(instance, REGISTER_CTRL_HUM_ADDRESS, humidityOversampling))
    {
        return BME280_status_communicationError;
    }

    if(!i2cWrite(instance, REGISTER_CTRL_MEAS_MODE_ADDRESS, tempCtrlMeasureModeRegister))
    {
        return BME280_status_communicationError;
    }

    return BME280_status_ok;
}

BME280_status_t bme280_setMode(BME280_t* instance, BME280_mode_t mode)
{
    //DU_ASSERT(instance != NULL);

    if(mode >= BME280_mode_count)
    {
        return BME280_status_wrongMode;
    }

    uint8_t tempCtrlMeasureModeRegister = 0U;
    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, REGISTER_CTRL_MEAS_MODE_ADDRESS, sizeof(uint8_t), &tempCtrlMeasureModeRegister, sizeof(tempCtrlMeasureModeRegister)))
    {
        return BME280_status_communicationError;
    }

    tempCtrlMeasureModeRegister &= ~(0x03);
    tempCtrlMeasureModeRegister |= mode;

    if(!i2cWrite(instance, REGISTER_CTRL_MEAS_MODE_ADDRESS, tempCtrlMeasureModeRegister))
    {
        return BME280_status_communicationError;
    }

    return BME280_status_ok;
}

BME280_status_t bme280_getMeasurements(BME280_t* instance, int32_t* temperature, uint32_t* pressure, uint32_t* humidity)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(temperature != NULL);
    //DU_ASSERT(pressure != NULL);
    //DU_ASSERT(humidity != NULL);

    int16_t rawHumidity = 0;
    int32_t rawTemperature = 0;
    int32_t rawPressure = 0;
    BME280_status_t status = BME280_status_ok;
    BME280_mode_t mode = BME280_mode_count;

    status = getMode(instance, &mode);
    if(status != BME280_status_ok)
    {
        return status;
    }

    switch(mode)
    {
        case BME280_mode_forced:
            return BME280_status_measurementOngoing;

        case BME280_mode_sleep:
            status = bme280_setMode(instance, BME280_mode_forced);
            if(status != BME280_status_ok)
            {
                return status;
            }
            break;

        case BME280_mode_normal:
            break;

        default:
            return BME280_status_wrongMode;
    }

    status = waitForConversion(instance);
    if(status != BME280_status_ok)
    {
        return status;
    }

    status = getRawData(instance, &rawHumidity, &rawTemperature, &rawPressure);
    if(status != BME280_status_ok)
    {
        return status;
    }

    *temperature = compensateTemperature(instance, rawTemperature);
    *pressure = compensatePressure(instance, rawPressure);
    *humidity = compensateHumidity(instance, rawHumidity);

    return BME280_status_ok;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

static BME280_status_t getChipID(BME280_t* instance, uint8_t* chipId)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(chipId != NULL);

    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, REGISTER_CHIP_ID_ADDRESS, sizeof(uint8_t), chipId, sizeof(*chipId)))
    {
        return BME280_status_communicationError;
    }

    return BME280_status_ok;
}

static BME280_status_t getDeviceStatus(BME280_t* instance, uint8_t* deviceStatus)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(deviceStatus != NULL);

    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, REGISTER_DEVICE_STATUS_ADDRESS, sizeof(uint8_t), deviceStatus, sizeof(*deviceStatus)))
    {
        return BME280_status_communicationError;
    }

    return BME280_status_ok;
}

static BME280_status_t getMode(BME280_t* instance, BME280_mode_t* mode)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(mode != NULL);

    uint8_t temp = 0U;
    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, REGISTER_CTRL_MEAS_MODE_ADDRESS, sizeof(uint8_t), &temp, sizeof(temp)))
    {
        return BME280_status_communicationError;
    }
    *mode = (BME280_mode_t) (temp & 0x03);

    return BME280_status_ok;
}

static BME280_status_t resetDevice(BME280_t* instance)
{
    //DU_ASSERT(instance != NULL);

    uint8_t deviceStatus = 0U;
    BME280_status_t status = BME280_status_ok;

    if(!i2cWrite(instance, REGISTER_RESET_ADDRESS, REGISTER_RESET_VALUE))
    {
        return BME280_status_communicationError;
    }

    for(uint8_t attempt = 0U; attempt < RESET_RETRY_COUNT; attempt++)
    {
        unihal_usleep(RESET_TIME_US);
        status = getDeviceStatus(instance, &deviceStatus);

        if(status != BME280_status_ok)
        {
            return status;
        }

        if((deviceStatus & REGISTER_STATUS_UPDATE_BIT) == 0)
        {
            return BME280_status_ok;
        }
    }

    return BME280_status_resetFail;
}

static BME280_status_t waitForConversion(BME280_t* instance)
{
    //DU_ASSERT(instance != NULL);
    uint32_t conversionTime = 0U;
    BME280_status_t status = BME280_status_ok;
    uint8_t deviceStatus = 0U;

    while(conversionTime < MAX_CONVERSION_TIME_US)
    {
        status = getDeviceStatus(instance, &deviceStatus);

        if(status != BME280_status_ok)
        {
            return status;
        }

        if((deviceStatus & REGISTER_STATUS_MEASURING_BIT) == 0)
        {
            return BME280_status_ok;
        }

        unihal_usleep(SINGLE_CONVERSION_DELAY_US);
        conversionTime += SINGLE_CONVERSION_DELAY_US;
    }

    return BME280_status_ok;
}


static BME280_status_t getCalibrationData(BME280_t* instance)
{
    //DU_ASSERT(instance != NULL);

    uint8_t calibrationData[CALIB_DATA_1_LENGTH + CALIB_DATA_2_LENGTH];
    uint8_t dummyByte = 0U;

    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, CALIB_DATA_1_ADDRESS, sizeof(uint8_t), &calibrationData[0], CALIB_DATA_1_LENGTH))
    {
        return BME280_status_communicationError;
    }

    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, CALIB_DATA_2_ADDRESS, sizeof(uint8_t), &calibrationData[CALIB_DATA_1_LENGTH], CALIB_DATA_2_LENGTH))
    {
        return BME280_status_communicationError;
    }

    Stream_t stream;
    stream_init(&stream, calibrationData, sizeof(calibrationData), Stream_dataFormat_littleEndian);

    stream_getUint16(&stream, &instance->calibrationData.T1);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.T2);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.T3);

    stream_getUint16(&stream, &instance->calibrationData.P1);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P2);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P3);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P4);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P5);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P6);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P7);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P8);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.P9);

    stream_getUint8(&stream, &dummyByte);
    stream_getUint8(&stream, &instance->calibrationData.H1);
    stream_getUint16(&stream, (uint16_t*) &instance->calibrationData.H2);
    stream_getUint8(&stream, &instance->calibrationData.H3);
    stream_getUint8(&stream, (uint8_t*) &instance->calibrationData.H4);
    stream_getUint8(&stream, &dummyByte);
    stream_getUint8(&stream, (uint8_t*) &instance->calibrationData.H5);
    stream_getUint8(&stream, (uint8_t*) &instance->calibrationData.H6);
    instance->calibrationData.H4 = (instance->calibrationData.H4 << 4) | (dummyByte & 0x0F);
    instance->calibrationData.H5 = (instance->calibrationData.H5 << 4) | (dummyByte >> 4);

    return BME280_status_ok;
}

static BME280_status_t getRawData(BME280_t* instance, int16_t* rawHumidity, int32_t* rawTemperature, int32_t* rawPressure)
{
    //DU_ASSERT(instance != NULL);
    //DU_ASSERT(rawHumidity != NULL);
    //DU_ASSERT(rawTemperature != NULL);
    //DU_ASSERT(rawPressure != NULL);

    uint8_t rawData[RAW_DATA_LENGTH];
    if(!unihal_i2c_readMem(instance->i2c, instance->i2cAddress, UINT32_MAX, RAW_DATA_ADDRESS, sizeof(uint8_t), rawData, sizeof(rawData)))
    {
        return BME280_status_communicationError;
    }

    *rawPressure = rawData[RAW_DATA_PRESSURE_MSB_OFFSET] << 12 | rawData[RAW_DATA_PRESSURE_LSB_OFFSET] << 4 | rawData[RAW_DATA_PRESSURE_XLSB_OFFSET];
    *rawTemperature = rawData[RAW_DATA_TEMPERATURE_MSB_OFFSET] << 12 | rawData[RAW_DATA_TEMPERATURE_LSB_OFFSET] << 4 | rawData[RAW_DATA_TEMPERATURE_XLSB_OFFSET];
    *rawHumidity = rawData[RAW_DATA_HUMIDITY_MSB_OFFSET] << 8 | rawData[RAW_DATA_HUMIDITY_LSB_OFFSET];

    return BME280_status_ok;
}

static bool i2cWrite(BME280_t* instance, uint8_t address, uint8_t data)
{
    //DU_ASSERT(instance != NULL);

    uint8_t writeVectorData[sizeof(address) + sizeof(data)] = {address, data};
    vector_t writevector = {writeVectorData, sizeof(writeVectorData)};

    return unihal_i2c_transfer(instance->i2c, instance->i2cAddress, UINT32_MAX, &writevector, NULL);
}

// Returns temperature in DegC, resolution is 0.01 DegC. Output value of “5123” equals 51.23 DegC.
static int32_t compensateTemperature(BME280_t* instance, int32_t rawTemperature)
{
    //DU_ASSERT(instance != NULL);

    int32_t compensatedTemperature = 0;
    int32_t var1 = (((rawTemperature >> 3) - (instance->calibrationData.T1 << 1)) * instance->calibrationData.T2) >> 11;
    int32_t var2 = (((((rawTemperature >> 4) - instance->calibrationData.T1) * ((rawTemperature >> 4) - instance->calibrationData.T1)) >> 12) * instance->calibrationData.T3) >> 14;
    instance->fineTemperature = var1 + var2;
    compensatedTemperature = (instance->fineTemperature * 5 + 128) >> 8;

    return compensatedTemperature;
}
// Returns pressure in Pa as unsigned 32 bit integer in Q24.8 format (24 integer bits and 8 fractional bits).
// Output value of “24674867” represents 24674867/256 = 96386.2 Pa = 963.862 hPa
static uint32_t compensatePressure(BME280_t* instance, int32_t rawPressure)
{
    int64_t var1 = 0;
    int64_t var2 = 0;
    int64_t compensatedPressure = 0;
    var1 = ((int64_t) instance->fineTemperature) - 128000;
    var2 = var1 * var1 * instance->calibrationData.P6;
    var2 = var2 + ((var1 * instance->calibrationData.P5) << 17);
    var2 = var2 + (((int64_t) instance->calibrationData.P4) << 35);
    var1 = ((var1 * var1 * instance->calibrationData.P3) >> 8) + ((var1 * instance->calibrationData.P2) << 12);
    var1 = ((((int64_t) 1 << 47) + var1) * (instance->calibrationData.P1)) >> 33;

    if (var1 == 0)
    {
        return 0;
    }

    compensatedPressure = 1048576 - rawPressure;
    compensatedPressure = (((compensatedPressure << 31) - var2) * 3125) / var1;
    var1 = (instance->calibrationData.P9 * (compensatedPressure >> 13) * (compensatedPressure >> 13)) >> 25;
    var2 = ((instance->calibrationData.P8) * compensatedPressure) >> 19;
    compensatedPressure = ((compensatedPressure + var1 + var2) >> 8) + ((instance->calibrationData.P7) << 4);

    return (uint32_t) compensatedPressure;
}

// Returns humidity in %RH as unsigned 32 bit integer in Q22.10 format (22 integer and 10 fractional bits).
// Output value of “47445” represents 47445/1024 = 46.333 %RH
static uint32_t compensateHumidity(BME280_t* instance, int16_t rawHumidity)
{
    int32_t var = instance->fineTemperature - 76800;
    var = ((((rawHumidity << 14) - (instance->calibrationData.H4 << 20) - (instance->calibrationData.H5 * var)) + 16384) >> 15)
            * (((((((var * instance->calibrationData.H6) >> 10) * (((var * (instance->calibrationData.H3)) >> 11) + 32768)) >> 10) + 2097152 *
                    (instance->calibrationData.H2) + 8192) >> 14));
    var = (var - (((((var >> 15) * (var >> 15)) >> 7) * (instance->calibrationData.H1)) >> 4));
    var = (var < 0 ? 0 : var);
    var = (var > 419430400 ? 419430400 : var);

    return (uint32_t) (var >> 12);
}

