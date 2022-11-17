/******************************************************************************
 @file array.h

 @brief Array helpers declaration

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _ARRAY_H_
#define _ARRAY_H_

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

/*!
 * @brief Calculates one dimensional array length.
 */
#define ARRAY_LEN(array) (sizeof(array)/sizeof(array[0]))


typedef struct
{
    uint8_t* data;
    size_t size;
} vector_t;

#define createVector(vectorName, vectorSize) uint8_t data_##vectorName[vectorSize] = {}; vector_t ##vectorName = {.data = data_##vectorName, .size = vectorSize};

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _ARRAY_H_ */
