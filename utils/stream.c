/******************************************************************************
 @file stream.c

 @brief Stream implementation
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>

#include "unihal/utils/stream.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

#ifndef UNIT_TESTS
    #define STATIC static
#endif

#define CHECK(expr, retVal) if(!(expr)) { return retVal; }

/******************************************************************************
 Local variables
 *****************************************************************************/

/******************************************************************************
 Local function prototypes
 *****************************************************************************/

/******************************************************************************
 Public Functions
 *****************************************************************************/

Stream_status_t stream_init(Stream_t* const stream, uint8_t* const buffer, const size_t bufLen, const Stream_dataFormat_t dataFormat)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(buffer != NULL, Stream_status_nullPointer);
    CHECK((dataFormat == Stream_dataFormat_littleEndian) || (dataFormat == Stream_dataFormat_bigEndian), Stream_status_wrongDataFormat);

    memset(stream, 0, sizeof(*stream));
    stream->actualPosition = 0U;
    stream->bufLen = bufLen;
    stream->buffer = buffer;
    stream->dataFormat = dataFormat;

    return Stream_status_success;
}

Stream_status_t stream_initReadonly(Stream_t* const stream, const uint8_t* const buffer, const size_t bufLen, const Stream_dataFormat_t dataFormat)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(buffer != NULL, Stream_status_nullPointer);
    CHECK((dataFormat == Stream_dataFormat_littleEndian) || (dataFormat == Stream_dataFormat_bigEndian), Stream_status_wrongDataFormat);

    memset(stream, 0, sizeof(*stream));
    stream->actualPosition = 0U;
    stream->bufLen = bufLen;
    stream->buffer = (uint8_t*) buffer; /* Cast potentially unsafe but readonly flag should handle it. */
    stream->dataFormat = dataFormat;
    stream->readonly = true;

    return Stream_status_success;
}

Stream_status_t stream_getUint8(Stream_t* const stream, uint8_t* const value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(value != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(*value)), Stream_status_bufferOverflow);

    *value = stream->buffer[stream->actualPosition];
    stream->actualPosition += sizeof(*value);

    return Stream_status_success;
}

Stream_status_t stream_putUint8(Stream_t* const stream, const uint8_t value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(value)), Stream_status_bufferOverflow);

    stream->buffer[stream->actualPosition] = value;
    stream->actualPosition += sizeof(value);

    return Stream_status_success;
}

Stream_status_t stream_getUint16(Stream_t* const stream, uint16_t* const value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(value != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(*value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;
    *value = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * (sizeof(*value) - 1 - i);
                *value |= stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * i;
                *value |= stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(*value);

    return Stream_status_success;
}

Stream_status_t stream_putUint16(Stream_t* const stream, const uint16_t value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * (sizeof(value) - 1 - i);
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * i;
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(value);

    return Stream_status_success;
}

Stream_status_t stream_getUint32(Stream_t* const stream, uint32_t* const value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(value != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(*value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;
    *value = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * (sizeof(*value) - 1 - i);
                *value |= stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * i;
                *value |= stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(*value);

    return Stream_status_success;
}

Stream_status_t stream_putUint32(Stream_t* const stream, const uint32_t value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * (sizeof(value) - 1 - i);
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * i;
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(value);

    return Stream_status_success;
}

Stream_status_t stream_getUint64(Stream_t* const stream, uint64_t* const value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(value != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(*value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;
    *value = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * (sizeof(*value) - 1 - i);
                *value |= (uint64_t) stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(*value); i++)
            {
                calculatedShift = 8 * i;
                *value |= (uint64_t) stream->buffer[stream->actualPosition + i] << calculatedShift;
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(*value);

    return Stream_status_success;
}

Stream_status_t stream_putUint64(Stream_t* const stream, const uint64_t value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(value)), Stream_status_bufferOverflow);

    uint8_t calculatedShift = 0U;

    switch(stream->dataFormat)
    {
        case Stream_dataFormat_bigEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * (sizeof(value) - 1 - i);
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        case Stream_dataFormat_littleEndian:
            for(uint8_t i = 0U; i < sizeof(value); i++)
            {
                calculatedShift = 8 * i;
                stream->buffer[stream->actualPosition + i] = (uint8_t)(value >> calculatedShift);
            }
            break;

        default:
            return Stream_status_wrongDataFormat;
    }

    stream->actualPosition += sizeof(value);

    return Stream_status_success;
}

Stream_status_t stream_getBool(Stream_t* const stream, bool* const value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(value != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(uint8_t)), Stream_status_bufferOverflow);

    uint8_t temporaryValue = 0U;
    Stream_status_t status = stream_getUint8(stream, &temporaryValue);
    if(status == Stream_status_success)
    {
        *value = temporaryValue > 0 ? true : false;
    }

    return status;
}

Stream_status_t stream_putBool(Stream_t* const stream, const bool value)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + sizeof(uint8_t)), Stream_status_bufferOverflow);
    
    return stream_putUint8(stream, value ? 0xFF : 0x00);
}

Stream_status_t stream_getBytes(Stream_t* const stream, const size_t byteCount, uint8_t* const outputBuffer, const size_t outputBufferLen)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(outputBuffer != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + byteCount), Stream_status_bufferOverflow);
    CHECK(byteCount <= outputBufferLen, Stream_status_bufferOverflow);

    memcpy(outputBuffer, &stream->buffer[stream->actualPosition], byteCount);
    stream->actualPosition += byteCount;

    return Stream_status_success;
}

Stream_status_t stream_putBytes(Stream_t* const stream, const size_t byteCount, const uint8_t* const sourceBuffer, const size_t sourceBufferLen)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(sourceBuffer != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + byteCount), Stream_status_bufferOverflow);
    CHECK(byteCount <= sourceBufferLen, Stream_status_bufferOverflow);

    memcpy(&stream->buffer[stream->actualPosition], sourceBuffer, byteCount);
    stream->actualPosition += byteCount;

    return Stream_status_success;
}

Stream_status_t stream_getFromStream(Stream_t* const stream, const size_t byteCount, Stream_t* const outputStream)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(outputStream != NULL, Stream_status_nullPointer);
    CHECK(stream->bufLen >= (stream->actualPosition + byteCount), Stream_status_bufferOverflow);
    CHECK(outputStream->bufLen >= (outputStream->actualPosition + byteCount), Stream_status_bufferOverflow);
    CHECK(outputStream->readonly == false, Stream_status_notAllowed);

    memcpy(&outputStream->buffer[outputStream->actualPosition], &stream->buffer[stream->actualPosition], byteCount);
    stream->actualPosition += byteCount;
    outputStream->actualPosition += byteCount;

    return Stream_status_success;
}

Stream_status_t stream_putFromStream(Stream_t* const stream, const size_t byteCount, Stream_t* const sourceStream)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(sourceStream != NULL, Stream_status_nullPointer);
    CHECK(stream->readonly == false, Stream_status_notAllowed);
    CHECK(stream->bufLen >= (stream->actualPosition + byteCount), Stream_status_bufferOverflow);
    CHECK(sourceStream->bufLen >= (sourceStream->actualPosition + byteCount), Stream_status_bufferOverflow);

    memcpy(&stream->buffer[stream->actualPosition], &sourceStream->buffer[sourceStream->actualPosition], byteCount);
    stream->actualPosition += byteCount;
    sourceStream->actualPosition += byteCount;

    return Stream_status_success;
}

Stream_status_t stream_print(const Stream_t* const stream)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    
    const size_t columnsPerRow = 16U;

    printf("Stream buffer length: %zd, actual position: %zd, data format: %d%s\n\n", stream->bufLen, stream->actualPosition, stream->dataFormat, stream->readonly ? ", readonly" : "");

    for(size_t row = 0U; row < ((stream->bufLen / columnsPerRow) + 1U); row++)
    {
        printf("\t");
        for(size_t column = 0U; column < columnsPerRow; column++)
        {
            printf("%02X ", stream->buffer[row * columnsPerRow + column]);
        }
        printf("\n");
    }
    printf("\n");

    return Stream_status_success;
}

Stream_status_t stream_getCursor(const Stream_t* const stream, size_t* const actualPosition)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(actualPosition != NULL, Stream_status_nullPointer);

    *actualPosition = stream->actualPosition;

    return Stream_status_success;
}

Stream_status_t stream_setCursor(Stream_t* const stream, const size_t cursor)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(cursor < stream->bufLen, Stream_status_bufferOverflow);

    stream->actualPosition = cursor;

    return Stream_status_success;
}

Stream_status_t stream_freeBytes(const Stream_t* const stream, size_t* const freeBytes)
{
    CHECK(stream != NULL, Stream_status_nullPointer);
    CHECK(freeBytes != NULL, Stream_status_nullPointer);

    *freeBytes = stream->bufLen - stream->actualPosition;

    return Stream_status_success;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/
