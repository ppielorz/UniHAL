/******************************************************************************
 @file monogfx_tests.cpp

 @brief MonoGFX tests

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "monogfx.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/******************************************************************************
 External Variables
 *****************************************************************************/

/******************************************************************************
 Global variables
 *****************************************************************************/

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Global functions
 ******************************************************************************/

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

/******************************************************************************
 Mock Functions
 *****************************************************************************/

/******************************************************************************
 Tests
 *****************************************************************************/
