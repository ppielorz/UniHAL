/******************************************************************************
 @file cpputest_copiers.hpp

 @brief CppUTest Copiers declarations for UniHAL utils

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _CPPUTEST_COPIERS_HPP_
#define _CPPUTEST_COPIERS_HPP_

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

class VectorCopier : public MockNamedValueCopier
{
public:
    virtual void copy(void* out, const void* in);
};

#endif /* _CPPUTEST_COPIERS_HPP_ */
