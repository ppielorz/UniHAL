/******************************************************************************
 @file cpputest_copiers.cpp

 @brief CppUTest Comparators implementations for UniHAL utils
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include "unihal/utils/array.h"
#include "cpputest_comparators.hpp"

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

bool VectorComparator::isEqual(const void* object1, const void* object2)
{
    vector_t* vector1 = (vector_t*) object1;
    vector_t* vector2 = (vector_t*) object2;

    return((vector1->size == vector2->size) && (memcmp(vector1->data, vector2->data, vector1->size) == 0));
}

SimpleString VectorComparator::valueToString(const void* object)
{
    return StringFrom(object);
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
