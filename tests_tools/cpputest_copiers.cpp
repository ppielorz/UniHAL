/******************************************************************************
 @file cpputest_copiers.cpp

 @brief CppUTest Copiers implementations for UniHAL utils
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include "unihal/utils/array.h"
#include "cpputest_copiers.hpp"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Member Function Definitions
 *****************************************************************************/

void VectorCopier::copy(void* out, const void* in)
{
    vector_t* outVector = (vector_t*) out;
    vector_t* inVector = (vector_t*) in;
    memcpy(outVector->data, inVector->data, outVector->size);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/