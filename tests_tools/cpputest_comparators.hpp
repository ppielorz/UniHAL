/******************************************************************************
 @file cpputest_comparators.hpp

 @brief CppUTest Comparators declarations for UniHAL utils

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _CPPUTEST_COMPARATORS_HPP_
#define _CPPUTEST_COMPARATORS_HPP_

/******************************************************************************
 Includes
 *****************************************************************************/

#include <stdint.h>
#include <stddef.h>
#include <CppUTestExt/MockSupport.h>

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 Class declarations
 *****************************************************************************/

class VectorComparator : public MockNamedValueComparator
{
public:
    virtual bool isEqual(const void* object1, const void* object2);

    virtual SimpleString valueToString(const void* object);
};

#endif /* _CPPUTEST_COMPARATORS_HPP_ */
