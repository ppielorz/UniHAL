/******************************************************************************
 @file stream_tests.cpp

 @brief Stream tests
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <cstring>

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

#include "stream.h"

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

TEST_GROUP(Stream)
{
    void setup()
    {

    }

    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
        mock().removeAllComparatorsAndCopiers();
    }
};

TEST(Stream, initNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[100] = {};

    Stream_status_t status = stream_init(NULL, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, initNullPointerStreamBuffer)
{
    Stream_t stream = {};
    uint8_t streamBuffer[100] = {};

    Stream_status_t status = stream_init(&stream, NULL, sizeof(streamBuffer), Stream_dataFormat_littleEndian);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, initWrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[100] = {};

    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_count);

    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, getUint8NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    uint8_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint8(NULL, &value);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint8NullPointerValue)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    uint8_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint8(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint8CorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    uint8_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint8(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xAB, value);

    status = stream_getUint8(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xCD, value);
}

TEST(Stream, getUint8BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    uint8_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint8(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xAB, value);

    status = stream_getUint8(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xCD, value);

    status = stream_getUint8(&stream, &value);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putUint8NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint8(NULL, 0xAB);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putUint8CorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint8(&stream, 0xAB);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xAB);

    status = stream_putUint8(&stream, 0xCD);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[1], 0xCD);
}

TEST(Stream, putUint8BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint8(&stream, 0xAB);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xAB);

    status = stream_putUint8(&stream, 0xCD);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[1], 0xCD);

    status = stream_putUint8(&stream, 0xEF);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getUint16NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint16(NULL, &value);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint16NullPointerValue)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint16(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint16CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x3412, value);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x7856, value);
}

TEST(Stream, getUint16CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x1234, value);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x5678, value);
}

TEST(Stream, getUint16BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x3412, value);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x7856, value);

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getUint16WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {0x12, 0x34, 0x56, 0x78};
    uint16_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_getUint16(&stream, &value);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, putUint16NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint16(NULL, 0x1234);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putUint16CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint16(&stream, 0x1234);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x34);
    LONGS_EQUAL(streamBuffer[1], 0x12);

    status = stream_putUint16(&stream, 0x5678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[2], 0x78);
    LONGS_EQUAL(streamBuffer[3], 0x56);
}

TEST(Stream, putUint16CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint16(&stream, 0x1234);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x12);
    LONGS_EQUAL(streamBuffer[1], 0x34);

    status = stream_putUint16(&stream, 0x5678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[2], 0x56);
    LONGS_EQUAL(streamBuffer[3], 0x78);
}

TEST(Stream, putUint16BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint16(&stream, 0x1234);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x34);
    LONGS_EQUAL(streamBuffer[1], 0x12);

    status = stream_putUint16(&stream, 0x5678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[2], 0x78);
    LONGS_EQUAL(streamBuffer[3], 0x56);

    status = stream_putUint16(&stream, 0xABCD);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putUint16WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint16_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_putUint16(&stream, 0x1234);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, getUint32NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint32(NULL, &value);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint32NullPointerValue)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint32(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint32CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x78563412, value);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xF0DEBC9A, value);
}

TEST(Stream, getUint32CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x12345678, value);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x9ABCDEF0, value);
}

TEST(Stream, getUint32BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x78563412, value);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xF0DEBC9A, value);

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getUint32WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    uint32_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_getUint32(&stream, &value);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, putUint32NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint32(NULL, 0x12345678);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putUint32CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint32(&stream, 0x12345678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x78);
    LONGS_EQUAL(streamBuffer[1], 0x56);
    LONGS_EQUAL(streamBuffer[2], 0x34);
    LONGS_EQUAL(streamBuffer[3], 0x12);

    status = stream_putUint32(&stream, 0x9ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[4], 0xF0);
    LONGS_EQUAL(streamBuffer[5], 0xDE);
    LONGS_EQUAL(streamBuffer[6], 0xBC);
    LONGS_EQUAL(streamBuffer[7], 0x9A);
}

TEST(Stream, putUint32CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint32(&stream, 0x12345678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x12);
    LONGS_EQUAL(streamBuffer[1], 0x34);
    LONGS_EQUAL(streamBuffer[2], 0x56);
    LONGS_EQUAL(streamBuffer[3], 0x78);

    status = stream_putUint32(&stream, 0x9ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[4], 0x9A);
    LONGS_EQUAL(streamBuffer[5], 0xBC);
    LONGS_EQUAL(streamBuffer[6], 0xDE);
    LONGS_EQUAL(streamBuffer[7], 0xF0);
}

TEST(Stream, putUint32BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint32(&stream, 0x12345678);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0x78);
    LONGS_EQUAL(streamBuffer[1], 0x56);
    LONGS_EQUAL(streamBuffer[2], 0x34);
    LONGS_EQUAL(streamBuffer[3], 0x12);

    status = stream_putUint32(&stream, 0x9ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[4], 0xF0);
    LONGS_EQUAL(streamBuffer[5], 0xDE);
    LONGS_EQUAL(streamBuffer[6], 0xBC);
    LONGS_EQUAL(streamBuffer[7], 0x9A);

    status = stream_putUint32(&stream, 0x11111111);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putUint32WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint32_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_putUint32(&stream, 0x12345678);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, getUint64NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint64(NULL, &value);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint64NullPointerValue)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint64(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getUint64CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0xF0DEBC9A78563412, value);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0x8877665544332211, value);
}

TEST(Stream, getUint64CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0x123456789ABCDEF0, value);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0x1122334455667788, value);
}

TEST(Stream, getUint64BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0xF0DEBC9A78563412, value);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    UNSIGNED_LONGLONGS_EQUAL(0x8877665544332211, value);

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getUint64WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    uint64_t value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_getUint64(&stream, &value);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, putUint64NullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint64(NULL, 0x123456789ABCDEF0);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putUint64CorrectOperationLittleEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint64(&stream, 0x123456789ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xF0);
    LONGS_EQUAL(streamBuffer[1], 0xDE);
    LONGS_EQUAL(streamBuffer[2], 0xBC);
    LONGS_EQUAL(streamBuffer[3], 0x9A);
    LONGS_EQUAL(streamBuffer[4], 0x78);
    LONGS_EQUAL(streamBuffer[5], 0x56);
    LONGS_EQUAL(streamBuffer[6], 0x34);
    LONGS_EQUAL(streamBuffer[7], 0x12);

    status = stream_putUint64(&stream, 0x1122334455667788);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[8], 0x88);
    LONGS_EQUAL(streamBuffer[9], 0x77);
    LONGS_EQUAL(streamBuffer[10], 0x66);
    LONGS_EQUAL(streamBuffer[11], 0x55);
    LONGS_EQUAL(streamBuffer[12], 0x44);
    LONGS_EQUAL(streamBuffer[13], 0x33);
    LONGS_EQUAL(streamBuffer[14], 0x22);
    LONGS_EQUAL(streamBuffer[15], 0x11);
}

TEST(Stream, putUint64CorrectOperationBigEndian)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_bigEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint64(&stream, 0x123456789ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[7], 0xF0);
    LONGS_EQUAL(streamBuffer[6], 0xDE);
    LONGS_EQUAL(streamBuffer[5], 0xBC);
    LONGS_EQUAL(streamBuffer[4], 0x9A);
    LONGS_EQUAL(streamBuffer[3], 0x78);
    LONGS_EQUAL(streamBuffer[2], 0x56);
    LONGS_EQUAL(streamBuffer[1], 0x34);
    LONGS_EQUAL(streamBuffer[0], 0x12);

    status = stream_putUint64(&stream, 0x1122334455667788);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[15], 0x88);
    LONGS_EQUAL(streamBuffer[14], 0x77);
    LONGS_EQUAL(streamBuffer[13], 0x66);
    LONGS_EQUAL(streamBuffer[12], 0x55);
    LONGS_EQUAL(streamBuffer[11], 0x44);
    LONGS_EQUAL(streamBuffer[10], 0x33);
    LONGS_EQUAL(streamBuffer[9], 0x22);
    LONGS_EQUAL(streamBuffer[8], 0x11);
}

TEST(Stream, putUint64BufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint64(&stream, 0x123456789ABCDEF0);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xF0);
    LONGS_EQUAL(streamBuffer[1], 0xDE);
    LONGS_EQUAL(streamBuffer[2], 0xBC);
    LONGS_EQUAL(streamBuffer[3], 0x9A);
    LONGS_EQUAL(streamBuffer[4], 0x78);
    LONGS_EQUAL(streamBuffer[5], 0x56);
    LONGS_EQUAL(streamBuffer[6], 0x34);
    LONGS_EQUAL(streamBuffer[7], 0x12);

    status = stream_putUint64(&stream, 0x1122334455667788);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[8], 0x88);
    LONGS_EQUAL(streamBuffer[9], 0x77);
    LONGS_EQUAL(streamBuffer[10], 0x66);
    LONGS_EQUAL(streamBuffer[11], 0x55);
    LONGS_EQUAL(streamBuffer[12], 0x44);
    LONGS_EQUAL(streamBuffer[13], 0x33);
    LONGS_EQUAL(streamBuffer[14], 0x22);
    LONGS_EQUAL(streamBuffer[15], 0x11);

    status = stream_putUint64(&stream, 0x1111111111111111);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putUint64WrongDataFormat)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint64_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    stream.dataFormat = Stream_dataFormat_count;

    status = stream_putUint64(&stream, 0x123456789ABCDEF0);
    LONGS_EQUAL(Stream_status_wrongDataFormat, status);
}

TEST(Stream, getBoolNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    bool value = false;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBool(NULL, &value);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getBoolNullPointerValue)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0xAB, 0xCD};
    bool value = false;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBool(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putBoolNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBool(NULL, true);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getBoolCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0x00, 0xFF};
    bool value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBool(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    CHECK_FALSE(value);

    status = stream_getBool(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    CHECK_TRUE(value);
}

TEST(Stream, getBoolBufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {0x00, 0xFF};
    bool value = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBool(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    CHECK_FALSE(value);

    status = stream_getBool(&stream, &value);
    LONGS_EQUAL(Stream_status_success, status);
    CHECK_TRUE(value);

    status = stream_getBool(&stream, &value);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putBoolCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBool(&stream, true);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xFF);

    status = stream_putBool(&stream, false);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[1], 0x00);
}

TEST(Stream, putBoolBufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[2 * sizeof(uint8_t)] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBool(&stream, true);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[0], 0xFF);

    status = stream_putBool(&stream, false);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(streamBuffer[1], 0x00);

    status = stream_putBool(&stream, true);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getBytesNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    uint8_t outputBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(NULL, 2, outputBuffer, sizeof(outputBuffer));

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getBytesNullPointerOutputBuffer)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    uint8_t outputBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 2, NULL, sizeof(outputBuffer));

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getBytesBufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    uint8_t outputBuffer[6] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 6, outputBuffer, sizeof(outputBuffer));

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getBytesBufferOverflowOutputBufferTooSmall)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    uint8_t outputBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 5, outputBuffer, sizeof(outputBuffer));

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getBytesCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    uint8_t outputBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 4, outputBuffer, sizeof(outputBuffer));

    LONGS_EQUAL(Stream_status_success, status);
    MEMCMP_EQUAL(streamBuffer, outputBuffer, 4);
}

TEST(Stream, putBytesNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    uint8_t sourceBuffer[4] = {0x11, 0x22, 0x33, 0x44};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBytes(NULL, 2, sourceBuffer, sizeof(sourceBuffer));

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putBytesNullPointerSourceBuffer)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    uint8_t sourceBuffer[4] = {0x11, 0x22, 0x33, 0x44};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBytes(&stream, 2, NULL, sizeof(sourceBuffer));

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putBytesBufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    uint8_t sourceBuffer[6] = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 6, sourceBuffer, sizeof(sourceBuffer));

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getBytesBufferOverflowInputBufferTooSmall)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    uint8_t sourceBuffer[4] = {0x11, 0x22, 0x33, 0x44};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getBytes(&stream, 5, sourceBuffer, sizeof(sourceBuffer));

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putBytesCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    uint8_t sourceBuffer[4] = {0x11, 0x22, 0x33, 0x44};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putBytes(&stream, 4, sourceBuffer, sizeof(sourceBuffer));

    LONGS_EQUAL(Stream_status_success, status);
    MEMCMP_EQUAL(streamBuffer, sourceBuffer, 4);
}

TEST(Stream, getFromStreamNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t outputStream = {};
    uint8_t outputStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&outputStream, outputStreamBuffer, sizeof(outputStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getFromStream(NULL, 2, &outputStream);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getFromStreamNullPointerOutputStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t outputStream = {};
    uint8_t outputStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&outputStream, outputStreamBuffer, sizeof(outputStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getFromStream(&stream, 2, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getFromStreamBufferOverflowStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[4] = {};
    Stream_t outputStream = {};
    uint8_t outputStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&outputStream, outputStreamBuffer, sizeof(outputStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getFromStream(&stream, 5, &outputStream);

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getFromStreamBufferOverflowOutputStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t outputStream = {};
    uint8_t outputStreamBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&outputStream, outputStreamBuffer, sizeof(outputStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getFromStream(&stream, 5, &outputStream);

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, getFromStreamCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    Stream_t outputStream = {};
    uint8_t outputStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&outputStream, outputStreamBuffer, sizeof(outputStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getFromStream(&stream, 3, &outputStream);

    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x11, outputStreamBuffer[0]);
    LONGS_EQUAL(0x22, outputStreamBuffer[1]);
    LONGS_EQUAL(0x33, outputStreamBuffer[2]);
}

TEST(Stream, putFromStreamNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t sourceStream = {};
    uint8_t sourceStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&sourceStream, sourceStreamBuffer, sizeof(sourceStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putFromStream(NULL, 2, &sourceStream);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putFromStreamNullPointerSourceStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t sourceStream = {};
    uint8_t sourceStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&sourceStream, sourceStreamBuffer, sizeof(sourceStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putFromStream(&stream, 2, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, putFromStreamBufferOverflowStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[4] = {};
    Stream_t sourceStream = {};
    uint8_t sourceStreamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&sourceStream, sourceStreamBuffer, sizeof(sourceStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putFromStream(&stream, 5, &sourceStream);

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putFromStreamBufferOverflowSourceStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t sourceStream = {};
    uint8_t sourceStreamBuffer[4] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&sourceStream, sourceStreamBuffer, sizeof(sourceStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putFromStream(&stream, 5, &sourceStream);

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, putFromStreamCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_t sourceStream = {};
    uint8_t sourceStreamBuffer[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_init(&sourceStream, sourceStreamBuffer, sizeof(sourceStreamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putFromStream(&stream, 3, &sourceStream);

    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x11, streamBuffer[0]);
    LONGS_EQUAL(0x22, streamBuffer[1]);
    LONGS_EQUAL(0x33, streamBuffer[2]);
}

TEST(Stream, getCursorNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t cursor = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getCursor(NULL, &cursor);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getCursorNullPointerCursor)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t cursor = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getCursor(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, getCursorCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t cursor = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_putUint32(&stream, 0x11223344);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_getCursor(&stream, &cursor);

    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(uint32_t), cursor);
}

TEST(Stream, setCursorNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_setCursor(NULL, 4);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, setCursorBufferOverflow)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_setCursor(&stream, 6);

    LONGS_EQUAL(Stream_status_bufferOverflow, status);
}

TEST(Stream, setCursorCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_setCursor(&stream, 4);

    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(4, stream.actualPosition);
}

TEST(Stream, freeBytesNullPointerStream)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t freeBytes = sizeof(streamBuffer);
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_freeBytes(NULL, &freeBytes);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, freeBytesNullPointerFreeBytes)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t freeBytes = sizeof(streamBuffer);
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_freeBytes(&stream, NULL);

    LONGS_EQUAL(Stream_status_nullPointer, status);
}

TEST(Stream, freeBytesCorrectOperation)
{
    Stream_t stream = {};
    uint8_t streamBuffer[5] = {};
    size_t freeBytes = sizeof(streamBuffer);
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer), freeBytes);

    status = stream_putUint32(&stream, 0x11223344);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - sizeof(uint32_t), freeBytes);
}

TEST(Stream, exampleUsage1)
{
    Stream_t stream = {};
    uint8_t streamBuffer[20] = {};
    size_t freeBytes = sizeof(streamBuffer);
    size_t usedBytes = 0U;
    size_t cursorPosition = 0U;
    uint8_t tempUint8 = 0U;
    uint16_t tempUint16 = 0U;
    uint32_t tempUint32 = 0U;
    uint64_t tempUint64 = 0U;
    Stream_status_t status = stream_init(&stream, streamBuffer, sizeof(streamBuffer), Stream_dataFormat_littleEndian);
    LONGS_EQUAL(Stream_status_success, status);

    status = stream_putUint8(&stream, 0xAA);
    usedBytes += sizeof(uint8_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint16(&stream, 0xBBCC);
    usedBytes += sizeof(uint16_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint32(&stream, 0x00112233);
    usedBytes += sizeof(uint32_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint64(&stream, 0x1234123412341234);
    usedBytes += sizeof(uint64_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint16(&stream, 0xBBCC);
    usedBytes += sizeof(uint16_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint32(&stream, 0xBBCCDDEE);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);

    status = stream_putUint16(&stream, 0xBBCC);
    usedBytes += sizeof(uint16_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint16(&stream, 0xDDEE);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);

    status = stream_putUint8(&stream, 0xAA);
    usedBytes += sizeof(uint8_t);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(usedBytes, cursorPosition);
    status = stream_freeBytes(&stream, &freeBytes);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer) - usedBytes, freeBytes);

    status = stream_putUint8(&stream, 0xFF);
    LONGS_EQUAL(Stream_status_bufferOverflow, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(sizeof(streamBuffer), cursorPosition);

    status = stream_setCursor(&stream, 0U);
    LONGS_EQUAL(Stream_status_success, status);
    status = stream_getCursor(&stream, &cursorPosition);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0U, cursorPosition);

    status = stream_getUint8(&stream, &tempUint8);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xAA, tempUint8);

    status = stream_getUint16(&stream, &tempUint16);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0xBBCC, tempUint16);

    status = stream_getUint32(&stream, &tempUint32);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x00112233, tempUint32);

    status = stream_getUint64(&stream, &tempUint64);
    LONGS_EQUAL(Stream_status_success, status);
    LONGS_EQUAL(0x1234123412341234, tempUint64);


}