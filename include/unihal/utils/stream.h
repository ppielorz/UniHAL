/******************************************************************************
 @file stream.h

 @brief Stream declaration

 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

#ifndef _STREAM_H_
#define _STREAM_H_

/******************************************************************************
 Includes
 *****************************************************************************/
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Constants and definitions
 *****************************************************************************/

/*!
 * @brief Stream status codes.
 */
typedef enum
{
    Stream_status_success = 0,          /*!< Operation success. */
    Stream_status_nullPointer = 1,      /*!< Null pointer provided. */
    Stream_status_wrongDataFormat = 2,  /*!< Wrong data format provided. */
    Stream_status_bufferOverflow = 3,   /*!< Operation would cause buffer overflow. */
    Stream_status_notAllowed = 4,       /*!< Operation not allowed (stream is readonly). */

    Stream_status_count /*!< Number of possible statuses. */
} Stream_status_t;

/*!
 * @brief Stream possible data formats.
 */
typedef enum
{
    Stream_dataFormat_littleEndian = 0, /*!< Integers are stored with LSB order. */
    Stream_dataFormat_bigEndian = 1, /*!< Integers are stored with MSB order. */

    Stream_dataFormat_count /*!< Number of possible data formats. */
} Stream_dataFormat_t;

/*!
 * @brief Main Stream structure.
 * 
 * @details Stream is a very intuitive comfortable way for handling received 
 * binary data from sensors or to handle communication with other devices.
 */
typedef struct
{
    uint8_t* buffer;                    /*!< Internal buffer for all operations. */
    size_t bufLen;                      /*!< Internal buffer length. */
    size_t actualPosition;              /*!< Actual position of cursor. */
    Stream_dataFormat_t dataFormat;     /*!< Selected data format. */
    bool readonly;                      /*!< Readonly flag. */
} Stream_t;

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

/*!
 * @brief Initializes @ref Stream_t "Stream" struct.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" struct to be initialized.
 * @param buffer Pointer to byte buffer which shall be used as a stream buffer.
 * @param bufLen Buffer length (in bytes).
 * @param dataFormat Data format selection (see @ref Stream_dataFormat_t).
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Stream initialized properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_init(Stream_t* const stream, uint8_t* const buffer, const size_t bufLen, const Stream_dataFormat_t dataFormat);

/*!
 * @brief Initializes @ref Stream_t "Stream" struct with readonly flag.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" struct to be initialized.
 * @param buffer Pointer to byte buffer which shall be used as a readonly stream buffer.
 * @param bufLen Buffer length (in bytes).
 * @param dataFormat Data format selection (see @ref Stream_dataFormat_t).
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Stream initialized properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_initReadonly(Stream_t* const stream, const uint8_t* const buffer, const size_t bufLen, const Stream_dataFormat_t dataFormat);

/*!
 * @brief Takes out an uint8_t number from given Stream and moves the cursor forwards by 1.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which number shall be taken.
 * @param value Pointer to a variable where taken out number shall be placed.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number would overflow the buffer.
 */
Stream_status_t stream_getUint8(Stream_t* const stream, uint8_t* const value);

/*!
 * @brief Inserts an uint8_t number to given Stream and moves the cursor forwards by 1.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" to which number shall be inserted.
 * @param value Number to insert.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested number would overflow the buffer.
 */
Stream_status_t stream_putUint8(Stream_t* const stream, const uint8_t value);

/*!
 * @brief Takes out an uint16_t number from given Stream and moves the cursor forwards by 2.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which number shall be taken.
 * @param value Pointer to a variable where taken out number shall be placed.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_getUint16(Stream_t* const stream, uint16_t* const value);

/*!
 * @brief Inserts an uint16_t number to given Stream and moves the cursor forwards by 2.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" to which number shall be inserted.
 * @param value Number to insert.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_putUint16(Stream_t* const stream, const uint16_t value);

/*!
 * @brief Takes out an uint32_t number from given Stream and moves the cursor forwards by 4.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which number shall be taken.
 * @param value Pointer to a variable where taken out number shall be placed.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_getUint32(Stream_t* const stream, uint32_t* const value);

/*!
 * @brief Inserts an uint32_t number to given Stream and moves the cursor forwards by 4.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" to which number shall be inserted.
 * @param value Number to insert.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_putUint32(Stream_t* const stream, const uint32_t value);

/*!
 * @brief Takes out an uint64_t number from given Stream and moves the cursor forwards by 8.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which number shall be taken.
 * @param value Pointer to a variable where taken out number shall be placed.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_getUint64(Stream_t* const stream, uint64_t* const value);

/*!
 * @brief Inserts an uint32_t number to given Stream and moves the cursor forwards by 8.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" to which number shall be inserted.
 * @param value Number to insert.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested number would overflow the buffer.
 * @retval Stream_status_wrongDataFormat Wrong data format provided.
 */
Stream_status_t stream_putUint64(Stream_t* const stream, const uint64_t value);

/*!
 * @brief Takes out a boolean from given Stream and moves the cursor forwards by 1.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which boolean shall be taken.
 * @param value Pointer to a variable where taken out boolean shall be placed.
 * 
 * @note bool in Stream is stored as uint8_t number.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Boolean taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested boolean would overflow the buffer.
 */
Stream_status_t stream_getBool(Stream_t* const stream, bool* const value);

/*!
 * @brief Inserts a boolean to given Stream and moves the cursor forwards by 1.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" to which number shall be inserted.
 * @param value Boolean to insert.
 * 
 * @note bool in Stream is stored as uint8_t number.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Boolean inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested boolean would overflow the buffer.
 */
Stream_status_t stream_putBool(Stream_t* const stream, const bool value);

/*!
 * @brief Takes out given number of bytes from given Stream to outputBuffer and moves the cursor forwards by byteCount.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which bytes shall be taken.
 * @param byteCount Number of bytes to be taken.
 * @param outputBuffer Pointer to an array where taken out bytes shall be placed.
 * @param outputBufferLen Output buffer length.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Bytes taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number of bytes would overflow the buffer or outputBuffer is too small.
 */
Stream_status_t stream_getBytes(Stream_t* const stream, const size_t byteCount, uint8_t* const outputBuffer, const size_t outputBufferLen);

/*!
 * @brief Inserts given number of bytes from given sourceBuffer to stream and moves the cursor forwards by byteCount.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from where bytes shall be inserted.
 * @param byteCount Number of bytes to be inserted.
 * @param sourceBuffer Pointer to an array from which bytes shall be inserted to stream.
 * @param sourceBufferLen Source buffer length.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Bytes inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Inserting requested number of bytes would overflow the buffer or sourceBuffer is too small.
 */
Stream_status_t stream_putBytes(Stream_t* const stream, const size_t byteCount, const uint8_t* const sourceBuffer, const size_t sourceBufferLen);

/*!
 * @brief Takes out given number of bytes from given Stream to outputStream and moves the cursor forwards by byteCount in both streams.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which bytes shall be taken.
 * @param byteCount Number of bytes to be taken.
 * @param outputStream Pointer to @ref Stream_t "Stream" where taken out bytes shall be inserted.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Bytes taken out properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number of bytes would overflow the buffer(s).
 */
Stream_status_t stream_getFromStream(Stream_t* const stream, const size_t byteCount, Stream_t* const outputStream);

/*!
 * @brief Inserts given number of bytes from sourceStream to given stream and moves the cursor forwards by byteCount in both streams.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" where bytes shall be inserted.
 * @param byteCount Number of bytes to be taken.
 * @param sourceStream Pointer to @ref Stream_t "Stream" from where bytes shall be taken out.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Bytes inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Reading out requested number of bytes would overflow the buffer(s).
 */
Stream_status_t stream_putFromStream(Stream_t* const stream, const size_t byteCount, Stream_t* const sourceStream);

/*!
 * @brief Prints given stream details and content to stdout.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" which shall be printed out.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Bytes inserted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 */
Stream_status_t stream_print(const Stream_t* const stream);

/*!
 * @brief Gets the actual cursor position of the given Stream.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" which cursor position shall be extracted.
 * @param actualPosition Pointer to variable where cursor position shall be extracted.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Cursor extracted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 */
Stream_status_t stream_getCursor(const Stream_t* const stream, size_t* const actualPosition);

/*!
 * @brief Sets the actual cursor position of the given Stream to the given value.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" which cursor position shall be set.
 * @param cursor Cursor value which shall be set.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Cursor set properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Given cursor value exceeds buffer length.
 */
Stream_status_t stream_setCursor(Stream_t* const stream, const size_t cursor);

/*!
 * @brief Advances the actual cursor position of the given Stream with the given value.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" which cursor position shall be advanced.
 * @param advance Cursor advance which shall be applied.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Cursor advanced properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 * @retval Stream_status_bufferOverflow Given advance value would exceed buffer length.
 */
Stream_status_t stream_advanceCursor(Stream_t* const stream, const size_t advance);

/*!
 * @brief Gets the actual number of free bytes in the given Stream.
 * 
 * @param stream Pointer to @ref Stream_t "Stream" from which number of free bytes shall be extracted.
 * @param freeBytes Pointer to variable where number of free bytes shall be extracted.
 * 
 * @return Stream status code (see @ref Stream_status_t).
 * 
 * @retval Stream_status_success Number of free bytes extracted properly.
 * @retval Stream_status_nullPointer NULL pointer provided.
 */
Stream_status_t stream_freeBytes(const Stream_t* const stream, size_t* const freeBytes);

#ifdef __cplusplus
}
#endif

#endif /* _STREAM_H_ */
