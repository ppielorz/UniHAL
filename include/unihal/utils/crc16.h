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

uint16_t crc16_CCITT(const uint8_t* const buffer, const size_t bufferLen, const size_t offset, const size_t byteCount);

#ifdef __cplusplus
}
#endif

#endif /* _CRC16_H_ */
