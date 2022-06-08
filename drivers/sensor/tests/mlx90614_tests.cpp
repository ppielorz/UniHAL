/******************************************************************************
 @file mlx90614_tests.cpp

 @brief MLX90614 driver tests
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "array.h"
#include "unihal.h"
#include "mlx90614.h"
#include "cpputest_comparators.hpp"
#include "cpputest_copiers.hpp"

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

TEST_GROUP(MLX90614)
{
    VectorComparator vectorComparator;
    VectorCopier vectorCopier;

    void setup()
    {
        mock().installComparator("vector_t", vectorComparator);
        mock().installCopier("vector_t", vectorCopier);
    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(MLX90614, init)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;

    CHECK(!mlx90614_init(NULL, &mockI2c, MLX90614_DEFAULT_ADDRESS));
    CHECK(!mlx90614_init(&testedMlx, NULL, MLX90614_DEFAULT_ADDRESS));
    CHECK(mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS));
}

TEST(MLX90614, getObjectTemperature)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    /* 0x07 - command RAM, object temperature. */
    uint8_t mockWriteVectorData[] = {0x07};
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    /* 0x3AD2 - temperature value (about 28 C degree), LSB. 0x30 - CRC8. */
    uint8_t mockReadVectorData[] = {0xD2, 0x3A, 0x30};
    vector_t mockReadVector = {.data = mockReadVectorData, .size = sizeof(mockReadVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withOutputParameterOfTypeReturning("vector_t", "readVector", &mockReadVector)
                                           .andReturnValue(true);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    DOUBLES_EQUAL(28, mlx90614_getObjectTemperature(&testedMlx), 0.3);
}

TEST(MLX90614, getAmbientTemperature)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    /* 0x06 - command RAM, ambient temperature. */
    uint8_t mockWriteVectorData[] = {0x06};
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    /* 0x3AD2 - temperature value (about 28 C degree), LSB. 0x26 - CRC8. */
    uint8_t mockReadVectorData[] = {0xD2, 0x3A, 0x26};
    vector_t mockReadVector = {.data = mockReadVectorData, .size = sizeof(mockReadVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withOutputParameterOfTypeReturning("vector_t", "readVector", &mockReadVector)
                                           .andReturnValue(true);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    DOUBLES_EQUAL(28, mlx90614_getAmbientTemperature(&testedMlx), 0.3);
}

TEST(MLX90614, getObjectTemperatureNullPointer)
{
    DOUBLES_EQUAL(ABSOLUTE_ZERO, mlx90614_getObjectTemperature(NULL), 0.3);
}

TEST(MLX90614, getObjectTemperatureFail)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    /* 0x07 - command RAM, object temperature. */
    uint8_t mockWriteVectorData[] = {0x07};
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    /* 0x3AD2 - temperature value (about 28 C degree), LSB. 0x30 - CRC8. */
    uint8_t mockReadVectorData[] = {0xD2, 0x3A, 0x30};
    vector_t mockReadVector = {.data = mockReadVectorData, .size = sizeof(mockReadVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withOutputParameterOfTypeReturning("vector_t", "readVector", &mockReadVector)
                                           .andReturnValue(false);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    DOUBLES_EQUAL(ABSOLUTE_ZERO, mlx90614_getObjectTemperature(&testedMlx), 0.3);
}

TEST(MLX90614, getAmbientTemperatureNullPointer)
{
    DOUBLES_EQUAL(ABSOLUTE_ZERO, mlx90614_getAmbientTemperature(NULL), 0.3);
}

TEST(MLX90614, getAmbientTemperatureFail)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    uint8_t mockWriteVectorData[] = {0x06};
    /* 0x06 - command RAM, ambient temperature. */
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    /* 0x3AD2 - temperature value (about 28 C degree), LSB. 0x26 - CRC8. */
    uint8_t mockReadVectorData[] = {0xD2, 0x3A, 0x26};
    vector_t mockReadVector = {.data = mockReadVectorData, .size = sizeof(mockReadVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withOutputParameterOfTypeReturning("vector_t", "readVector", &mockReadVector)
                                           .andReturnValue(false);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    DOUBLES_EQUAL(ABSOLUTE_ZERO, mlx90614_getAmbientTemperature(&testedMlx), 0.3);
}

TEST(MLX90614, getAmbientTemperatureWrongCrc)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    uint8_t mockWriteVectorData[] = {0x06};
    /* 0x06 - command RAM, ambient temperature. */
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    /* 0x3AD2 - temperature value (about 28 C degree), LSB. 0x27 - CRC8 (wrong). */
    uint8_t mockReadVectorData[] = {0xD2, 0x3A, 0x27};
    vector_t mockReadVector = {.data = mockReadVectorData, .size = sizeof(mockReadVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withOutputParameterOfTypeReturning("vector_t", "readVector", &mockReadVector)
                                           .andReturnValue(true);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    DOUBLES_EQUAL(ABSOLUTE_ZERO, mlx90614_getAmbientTemperature(&testedMlx), 0.3);
}


TEST(MLX90614, setEmissivityNullPointer)
{
    CHECK(!mlx90614_setEmissivity(NULL, 10000));
}
TEST(MLX90614, setEmissivity)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    /* 0x24 - command EEPROM, emissivity. 0x2710 - emissivity, about 10000 in HEX LSB.
       0x8A - CRC8 (including device address). */
    uint8_t mockWriteVectorData[] = {0x24, 0x10, 0x27, 0x8A};
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withPointerParameter("readVector", NULL)
                                           .andReturnValue(true);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    CHECK(mlx90614_setEmissivity(&testedMlx, 10000));
}

TEST(MLX90614, setEmissivityFail)
{
    MLX90614_t testedMlx;
    UniHAL_i2c_t mockI2c;
    /* 0x24 - command EEPROM, emissivity. 0x2710 - emissivity, about 10000 in HEX LSB.
       0x8A - CRC8 (including device address). */
    uint8_t mockWriteVectorData[] = {0x24, 0x10, 0x27, 0x8A};
    vector_t mockWriteVector = {.data = mockWriteVectorData, .size = sizeof(mockWriteVectorData)};

    mock().expectOneCall("unihal_i2c_transfer").withPointerParameter("instance", &mockI2c)
                                           .withUnsignedIntParameter("address", MLX90614_DEFAULT_ADDRESS)
                                           .withUnsignedIntParameter("timeout", 100U)
                                           .withParameterOfType("vector_t", "writeVector", &mockWriteVector)
                                           .withPointerParameter("readVector", NULL)
                                           .andReturnValue(false);
    mlx90614_init(&testedMlx, &mockI2c, MLX90614_DEFAULT_ADDRESS);
    CHECK(!mlx90614_setEmissivity(&testedMlx, 10000));
}
