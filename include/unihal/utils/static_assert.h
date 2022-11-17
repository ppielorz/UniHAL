/******************************************************************************
 @file static_assert.h

 @brief Static assert definitions

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _STATIC_ASSERT_H_
#define _STATIC_ASSERT_H_

/******************************************************************************
 Includes
 *****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/*!
 * @brief Static assertion.
 * 
 * @details Macro evaluates given condition at compile and time stops the compilation if it is not satisfied.
 * 
 */
#define STATIC_ASSERT(cond) _Static_assert((cond), "(" #cond ") failed")

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _STATIC_ASSERT_H_ */
