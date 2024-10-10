/******************************************************************************
 @file unihal.h

 @brief UniHAL declaration

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _UNIHAL_H_
#define _UNIHAL_H_


/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <time.h>

#include "unihal/utils/array.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
typedef enum
{
    UniHAL_status_success = 0,
} UniHAL_status_t;

typedef enum
{
    UniHAL_gpio_interrupt_disabled = 0,
    UniHAL_gpio_interrupt_falling = 1,
    UniHAL_gpio_interrupt_rising = 2,
    UniHAL_gpio_interrupt_both = 3,

    UniHAL_gpio_interrupt_count

} UniHAL_gpio_interrupt_t;

typedef enum
{
    UniHAL_gpio_pull_noPull = 0,
    UniHAL_gpio_pull_pullDown = 1,
    UniHAL_gpio_pull_pullUp = 2,

    UniHAL_gpio_pull_count
} UniHAL_gpio_pull_t;

typedef enum
{
    UniHAL_gpio_value_low = 0,
    UniHAL_gpio_value_high = 1,

    UniHAL_gpio_value_count
} UniHAL_gpio_value_t;

typedef enum
{
    UniHAL_gpio_outputType_pushPull = 0,
    UniHAL_gpio_outputType_openDrain = 1,

    UniHAL_gpio_outputType_count
} UniHAL_gpio_outputType_t;

typedef enum
{
    UniHAL_gpio_direction_input = 0,
    UniHAL_gpio_direction_output = 1,

    UniHAL_gpio_direction_count

} UniHAL_gpio_direction_t;

typedef struct UniHAL_gpio_t UniHAL_gpio_t;

typedef void (*UniHAL_gpio_interruptHandlerFp_t)(UniHAL_gpio_t* instance, const UniHAL_gpio_value_t value, void* arg1, void* arg2);

struct UniHAL_gpio_t
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_interruptHandlerFp_t irqHandler;
    void* irqArg1;
    void* irqArg2;

};

/*typedef enum
{

} UniHAL_i2c_t;*/

typedef struct UniHAL_i2c_t
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* sdaGpio;
    UniHAL_gpio_t* sclGpio;
} UniHAL_i2c_t;

typedef struct UniHAL_spi_t
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* mosiGpio;
    UniHAL_gpio_t* misoGpio;
    UniHAL_gpio_t* sckGpio;

} UniHAL_spi_t;

typedef struct UniHAL_uart_t
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* txGpio;
    UniHAL_gpio_t* rxGpio;

} UniHAL_uart_t;

typedef struct UniHAL_timer_t
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;

} UniHAL_timer_t;

/******************************************************************************
 Generic Function Prototypes
 *****************************************************************************/
extern void unihal_gpio_construct(UniHAL_gpio_t* const instance, void* const obj);
extern void unihal_spi_construct(UniHAL_spi_t* const instance, void* const obj, UniHAL_gpio_t* const mosiGpio, UniHAL_gpio_t* const misoGpio, UniHAL_gpio_t* const sckGpio);


extern void unihal_uart_construct(UniHAL_uart_t* const instance, void* const obj, UniHAL_gpio_t* const txGpio, UniHAL_gpio_t* const rxGpio);

extern void unihal_i2c_construct(UniHAL_i2c_t* const instance, void* const obj, UniHAL_gpio_t* const sdaGpio, UniHAL_gpio_t* const sclGpio);
extern void unihal_timer_construct(UniHAL_timer_t* const instance, void* const obj);

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern bool unihal_init(void);

extern void unihal_reboot(void);

extern void unihal_getRtcTime(struct tm* const time, uint32_t* const microseconds);
extern void unihal_setRtcOffset(const uint32_t seconds);

extern bool unihal_gpio_init(UniHAL_gpio_t* const instance);
extern bool unihal_gpio_deinit(UniHAL_gpio_t* const instance);

extern bool unihal_gpio_configureInput(UniHAL_gpio_t* const instance, const UniHAL_gpio_pull_t pull);
extern bool unihal_gpio_configureOutput(UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t outputValue,
                                    const UniHAL_gpio_outputType_t outputType);

extern bool unihal_gpio_registerInterrupt(UniHAL_gpio_t* const instance, const UniHAL_gpio_interrupt_t type, UniHAL_gpio_interruptHandlerFp_t handler, void* const arg1, void* const arg2);
extern bool unihal_gpio_enableInterrupt(UniHAL_gpio_t* const instance);
extern bool unihal_gpio_disableInterrupt(UniHAL_gpio_t* const instance);
extern bool unihal_gpio_clearInterrupt(UniHAL_gpio_t* const instance);

extern bool unihal_gpio_write(const UniHAL_gpio_t* const instance, const UniHAL_gpio_value_t outputValue);
extern UniHAL_gpio_value_t unihal_gpio_read(const UniHAL_gpio_t* const instance);

extern bool unihal_spi_transfer(const UniHAL_spi_t* const instance, const size_t dataLen, const uint8_t* const writeBuffer, uint8_t* const readBuffer);

extern bool unihal_uart_send(const UniHAL_uart_t* const instance, const size_t dataLen, const uint8_t* const writeBuffer);

/*!
 * @brief 
 * 
 * @param instance 
 * @param address 
 * @param timeout Transfer timout in miliseconds. UINT32_MAX to wait forever.
 * @param readBuffer 
 * @param writeBuffer 
 * @return 
 */
extern bool unihal_i2c_transfer(const UniHAL_i2c_t* const instance, const uint8_t slaveAddress, const uint32_t timeout,
                        const vector_t* const writeVector, vector_t* const readVector);

extern bool unihal_i2c_readMem(const UniHAL_i2c_t* const instance, const uint8_t slaveAddress, const uint32_t timeout, 
                        const uint16_t memoryAddress, const uint8_t memoryAddressSize, uint8_t* const data, const size_t dataLen);

extern uint32_t unihal_getVoltage(void);

extern bool unihal_timer_init(UniHAL_timer_t* const instance, const uint32_t periodUs, const bool oneShot, void (*handler)(void* const arg), void* const arg);
extern bool unihal_timer_deinit(UniHAL_timer_t* const instance);
extern bool unihal_timer_start(UniHAL_timer_t* const instance);
extern bool unihal_timer_stop(UniHAL_timer_t* const instance);
extern bool unihal_timer_setPeriod(UniHAL_timer_t* const instance, const uint32_t periodUs);

#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_H_ */
