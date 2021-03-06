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

#include "array.h"

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

typedef void (*UniHAL_gpio_interruptHandlerFp_t)(void* arg);

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
    UniHAL_gpio_outputType_openSource = 2,

    UniHAL_gpio_outputType_count
} UniHAL_gpio_outputType_t;

typedef enum
{
    UniHAL_gpio_direction_input = 0,
    UniHAL_gpio_direction_output = 1,

    UniHAL_gpio_direction_count

} UniHAL_gpio_direction_t;

typedef struct
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_interruptHandlerFp_t irqHandler;

} UniHAL_gpio_t;

/*typedef enum
{

} UniHAL_i2c_t;*/

typedef struct
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* sdaGpio;
    UniHAL_gpio_t* sclGpio;
} UniHAL_i2c_t;

typedef struct
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* mosiGpio;
    UniHAL_gpio_t* misoGpio;
    UniHAL_gpio_t* sckGpio;

} UniHAL_spi_t;

typedef struct
{
    /*!
     * @brief Hardware specific driver object.
     */
    void* obj;
    UniHAL_gpio_t* txGpio;
    UniHAL_gpio_t* rxGpio;

} UniHAL_uart_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

extern bool unihal_init(void);
extern void unihal_sleep(uint32_t seconds);
extern void unihal_usleep(uint32_t microseconds);
extern void unihal_reboot(void);

extern bool unihal_gpio_init(UniHAL_gpio_t* instance);
extern bool unihal_gpio_deinit(UniHAL_gpio_t* instance);
extern bool unihal_gpio_registerInterrupt(UniHAL_gpio_t* instance, UniHAL_gpio_interrupt_t type, void (*handler)(void* arg), void* arg);
extern bool unihal_gpio_clearInterrupt(UniHAL_gpio_t* instance);
extern bool unihal_gpio_write(UniHAL_gpio_t* instance, UniHAL_gpio_value_t outputValue);
extern UniHAL_gpio_value_t unihal_gpio_read(UniHAL_gpio_t* instance);

extern bool unihal_gpio_configureInput(UniHAL_gpio_t* instance, UniHAL_gpio_pull_t pull);
extern bool unihal_gpio_configureOutput(UniHAL_gpio_t* instance, UniHAL_gpio_value_t outputValue,
                                    UniHAL_gpio_outputType_t outputType);

extern bool unihal_spi_init(UniHAL_spi_t* instance, void* obj, UniHAL_gpio_t* mosiGpio, UniHAL_gpio_t* misoGpio, UniHAL_gpio_t* sckGpio);

extern bool unihal_spi_transfer(UniHAL_spi_t* instance, size_t dataLen, uint8_t* writeBuffer, uint8_t* readBuffer);

extern bool unihal_uart_init(UniHAL_uart_t* instance, void* obj, UniHAL_gpio_t* txGpio, UniHAL_gpio_t* rxGpio);

extern bool unihal_i2c_init(UniHAL_i2c_t* instance, void* obj, UniHAL_gpio_t* sdaGpio, UniHAL_gpio_t* sclGpio);
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
extern bool unihal_i2c_transfer(UniHAL_i2c_t* instance, uint8_t slaveAddress, uint32_t timeout,
                        vector_t* writeVector, vector_t* readVector);

extern bool unihal_i2c_readMem(UniHAL_i2c_t* instance, uint8_t slaveAddress, uint32_t timeout, uint16_t memoryAddress, uint8_t memoryAddressSize, uint8_t* data, size_t dataLen);

extern uint32_t unihal_getVoltage(void);

/*!
 * @brief Returns actual tick count in miliseconds.
 * 
 * @details Returned value can overflow and maximum value can vary between HAL
 * implementations.
 * 
 * @return Actual tick count in miliseconds.
 */
extern uint32_t unihal_getTickCount(void);
extern uint32_t unihal_getMicroTickCount(void);


#ifdef __cplusplus
}
#endif

#endif /* _UNIHAL_H_ */
