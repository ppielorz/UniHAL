/******************************************************************************
 @file crc16.h

 @brief CRC16 helpers declaration

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _CRC16_H_
#define _CRC16_H_

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdint.h>
#include <stddef.h>

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

uint16_t crc16_CCITT(uint8_t* buffer, size_t bufferLen, size_t offset, size_t byteCount);

#ifdef __cplusplus
}
#endif

#endif /* _CRC16_H_ */
