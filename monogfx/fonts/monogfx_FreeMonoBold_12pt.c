#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1956] =
{
    0x00,0xf6,0xff,0xff,0xff,0x66,0x06,0x60,0x6f,0xe7,0xe7,0x67,0x42,0x42,0x42,0x42,
    0xb8,0xc3,0x1d,0xee,0x78,0xc7,0xb9,0xff,0xff,0xff,0xff,0xdc,0xe1,0xce,0xff,0xff,
    0xff,0x7f,0xee,0x70,0x87,0x3b,0xdc,0x61,0x0e,0x38,0xe0,0x80,0x83,0x7f,0xff,0x1d,
    0x77,0xd8,0x0f,0xfe,0xf1,0x07,0xfc,0xe0,0x83,0x1f,0xff,0xdf,0x3f,0x38,0xe0,0x80,
    0x03,0x0e,0x1c,0xf8,0x30,0x46,0x10,0x41,0x8c,0xe1,0x23,0xf7,0xf8,0xfc,0x37,0x1e,
    0xcc,0x10,0xc2,0x0c,0x1e,0x78,0xf0,0x81,0x3f,0xfc,0xc3,0x01,0x1c,0xc0,0x03,0x38,
    0xe0,0xe7,0xef,0x7f,0x7c,0xc7,0xf3,0x7f,0xfe,0x8f,0x7f,0xff,0x24,0x09,0x10,0xce,
    0x71,0x8e,0xe3,0x1c,0xc7,0x71,0x1c,0x87,0xe3,0x38,0x1c,0x87,0x43,0xc2,0xe1,0x38,
    0x1c,0xc7,0xe1,0x38,0x8e,0xe3,0x38,0xc7,0x71,0x8e,0x73,0x08,0x20,0x80,0x03,0x1c,
    0xe0,0xf0,0xff,0xff,0xe3,0x03,0x1f,0xdc,0x71,0x1c,0x41,0x00,0x70,0x80,0x03,0x1c,
    0xe0,0x00,0x87,0xff,0xff,0xff,0xff,0x70,0x80,0x03,0x1c,0xe0,0x00,0x07,0x38,0x00,
    0xdc,0x39,0x73,0x46,0x00,0xff,0xff,0xff,0xff,0x7f,0xff,0x0f,0x00,0x07,0x38,0xc0,
    0x00,0x07,0x18,0xe0,0x00,0x03,0x1c,0x60,0x80,0x03,0x1c,0x70,0x80,0x03,0x0e,0x70,
    0xc0,0x01,0x0e,0x38,0xc0,0x01,0x04,0x00,0xf8,0xe0,0x8f,0xff,0x1c,0x77,0xf0,0x83,
    0x1f,0xfc,0xe0,0x07,0x3f,0xf8,0xc1,0x0f,0xee,0x38,0xff,0xf1,0x07,0x1f,0x78,0xf0,
    0xf1,0xc7,0x1c,0x70,0xc0,0x01,0x07,0x1c,0x70,0xc0,0x01,0x07,0x1c,0xfe,0xfb,0xef,
    0x3f,0xf8,0xf0,0xcf,0xff,0x0e,0x3f,0x70,0x80,0x03,0x1e,0x78,0xe0,0x81,0x07,0x1e,
    0x38,0xf0,0xf0,0xff,0xff,0xff,0xff,0xf8,0xe0,0x3f,0xff,0x73,0x78,0x00,0x07,0x78,
    0xf0,0x03,0x1f,0xf0,0x03,0x70,0x00,0x0e,0xe0,0x04,0xef,0x7f,0xfe,0x87,0x1f,0xe0,
    0x01,0x0f,0x7c,0xe0,0x83,0x1d,0xe6,0x30,0xc7,0x38,0xc6,0xf9,0xff,0xff,0xff,0x0f,
    0x7e,0xf0,0x83,0x1f,0xfe,0xe3,0x3f,0xfe,0xe3,0x00,0x0e,0xe0,0x1f,0xfe,0xe3,0x7f,
    0x0e,0x0f,0xe0,0x00,0x0e,0xe0,0x03,0xff,0x7f,0xfe,0xc3,0x1f,0xe0,0x83,0x3f,0xfe,
    0x79,0xe0,0x01,0x07,0xdc,0xe3,0x7f,0xff,0x7b,0xfc,0xc1,0x0f,0xee,0x78,0xff,0xf1,
    0x0f,0x1f,0xff,0xff,0xff,0xff,0x07,0x0e,0x30,0xc0,0x01,0x0e,0x30,0xc0,0x01,0x0e,
    0x38,0xc0,0x01,0x0e,0x38,0xc0,0x01,0x06,0xf8,0xe0,0x9f,0xff,0x1e,0x7f,0xf0,0xc7,
    0xf3,0x0f,0x1f,0xfe,0x7b,0xfc,0xc1,0x0f,0xfe,0x78,0xff,0xf9,0x0f,0x1f,0xf8,0xf0,
    0x8f,0xff,0x1e,0x77,0xf0,0x83,0x3f,0xde,0xff,0xfe,0xc7,0x3b,0xe0,0x80,0x07,0x9e,
    0x7f,0xfc,0xc1,0x07,0xff,0x0f,0x00,0x00,0xff,0x0f,0xde,0x7b,0x00,0x00,0x00,0xde,
    0x99,0x33,0x46,0x00,0x00,0x08,0xc0,0x03,0x3e,0xf0,0x81,0x0f,0x7c,0x80,0x0f,0xc0,
    0x07,0xe0,0x03,0xf0,0x01,0x78,0x00,0x04,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,
    0xfe,0xff,0xff,0xff,0xff,0x02,0xe0,0x01,0xf8,0x00,0x7c,0x00,0x3e,0x80,0x1f,0xe0,
    0x03,0x1f,0xf8,0xc0,0x07,0x3c,0x00,0x01,0x00,0xfc,0xfc,0xf7,0xff,0xf1,0x87,0x03,
    0x0e,0x1c,0x3c,0x70,0xc0,0x00,0x00,0x00,0x78,0xe0,0x81,0x07,0x78,0xe0,0x8f,0xe3,
    0x0c,0x76,0xb0,0xe1,0xcd,0x6f,0x7e,0x3b,0xdb,0xd8,0xce,0xf6,0x3f,0xff,0xf1,0x0f,
    0xe0,0x00,0x06,0x70,0x1c,0xff,0xf0,0x01,0xfc,0x03,0xf8,0x0f,0xf0,0x1f,0x00,0x7f,
    0x00,0xff,0x00,0xce,0x01,0x0c,0x07,0x1c,0x0e,0xf8,0x3f,0xf8,0x7f,0xf0,0xff,0x61,
    0x80,0xf3,0xc3,0xff,0x87,0xff,0x0f,0x7f,0xff,0xc3,0xff,0xf3,0xff,0x39,0x78,0x0e,
    0x9c,0x83,0xe7,0xff,0xf8,0x3f,0xfe,0x9f,0x03,0xef,0x80,0x3b,0xe0,0xff,0xff,0xff,
    0xf7,0xff,0x00,0xf0,0x9d,0xff,0xfb,0x7f,0x0f,0xff,0xc0,0x0f,0xc0,0x01,0x38,0x00,
    0x07,0xe0,0x00,0x3c,0x00,0x0f,0xee,0xff,0xf9,0x1f,0xfc,0x01,0xff,0xe1,0xff,0xfc,
    0x3f,0x87,0xe7,0xe0,0x1d,0xb8,0x03,0x77,0xe0,0x0e,0xdc,0x81,0x3b,0x78,0x87,0xf7,
    0xff,0xfe,0xcf,0x7f,0x00,0xff,0xef,0xff,0xfd,0x3f,0x07,0xe7,0xe0,0x9c,0x83,0x7f,
    0xf0,0x0f,0xfe,0xc1,0x39,0x38,0x77,0x07,0xfe,0xff,0xff,0xff,0xff,0x07,0xff,0xff,
    0xff,0xff,0x7f,0x07,0xee,0xdc,0x9d,0x83,0x7f,0xf0,0x0f,0xfe,0xc1,0x39,0x38,0x00,
    0x07,0xf0,0x07,0xfe,0xc0,0x1f,0x00,0xf0,0x1b,0xff,0xe7,0xff,0x79,0x78,0x0f,0xdc,
    0x01,0x70,0x00,0x1c,0x00,0x87,0xff,0xe1,0xff,0xf8,0x7b,0x70,0xfe,0x1f,0xff,0x03,
    0x3f,0x00,0x3f,0xff,0xcf,0xff,0xf3,0x3b,0x38,0x0e,0x8e,0x83,0xe3,0xff,0xf8,0x3f,
    0xfe,0x8f,0x83,0xe3,0xe0,0x38,0x38,0x3f,0xff,0xcf,0xff,0xf3,0x03,0xff,0xff,0xff,
    0xc7,0x81,0x03,0x07,0x0e,0x1c,0x38,0x70,0xe0,0xc0,0xf1,0xff,0xff,0x7f,0xe0,0x3f,
    0xf8,0x0f,0xfe,0x03,0x38,0x00,0x0e,0x80,0x03,0xe0,0x00,0x38,0x07,0xce,0x81,0x73,
    0xe0,0x1c,0x3c,0xff,0xc7,0xff,0x80,0x1f,0x00,0x3f,0xbf,0x9f,0xdf,0xcf,0xcf,0xe1,
    0xe1,0x78,0x70,0x0f,0xf8,0x03,0xfc,0x03,0xde,0x03,0xc7,0x83,0xc3,0xc1,0xc1,0xf1,
    0xe3,0xff,0xe1,0xff,0xf0,0x01,0x7f,0xe0,0x0f,0xfc,0x01,0x0e,0xc0,0x01,0x38,0x00,
    0x07,0xe0,0x00,0x1c,0x80,0x83,0x73,0x70,0x0e,0xfe,0xff,0xff,0xff,0xff,0x07,0x1e,
    0xe0,0xf9,0xc0,0xe7,0x03,0x1f,0x1f,0x3e,0x7c,0xf8,0xf0,0xf3,0xc3,0xcf,0x0f,0xf7,
    0x3b,0xdc,0xef,0x70,0xbf,0xc3,0xf9,0x0e,0x07,0x38,0x3f,0xf0,0xff,0xc0,0xff,0x03,
    0x3f,0x1e,0xfc,0x3e,0xfc,0x7e,0xfc,0x7c,0x38,0xfc,0x38,0xfc,0x38,0xdc,0x39,0xdc,
    0x3b,0x9c,0x3b,0x1c,0x3f,0x1c,0x3f,0x1c,0x3e,0x3f,0x3c,0x3f,0x3c,0x3f,0x38,0xf0,
    0x01,0xfe,0xc1,0xff,0x78,0x78,0x0e,0xdc,0x01,0x7e,0x80,0x1f,0xe0,0x07,0xf8,0x01,
    0xee,0xc0,0x79,0x78,0xfc,0x0f,0xfe,0x01,0x3f,0x00,0xff,0xe3,0xff,0xfd,0x3f,0x07,
    0xef,0xc0,0x1d,0xb8,0x83,0xf7,0x7f,0xfe,0xc7,0x7f,0x38,0x00,0x07,0xf0,0x07,0xfe,
    0xc0,0x1f,0x00,0xe0,0x01,0xfe,0xc1,0xff,0x78,0x78,0x0e,0xdc,0x01,0x7e,0x80,0x1f,
    0xe0,0x07,0xf8,0x01,0xee,0xc0,0x79,0x78,0xfc,0x0f,0xfe,0x01,0x3e,0xc0,0xe7,0xf8,
    0x3f,0xfe,0x8f,0xe1,0x00,0xff,0x83,0xff,0xc7,0xff,0x83,0xc3,0xc3,0xc1,0xe1,0xe0,
    0x70,0x78,0xf8,0x1f,0xfc,0x07,0xfe,0x03,0xc7,0x83,0xc3,0xf3,0xc7,0xff,0xc3,0xff,
    0xe1,0x01,0xf0,0x1d,0xff,0xf3,0x7f,0x0f,0xef,0xc0,0x3d,0x80,0x7f,0xe0,0x3f,0xf0,
    0x0f,0xc0,0x1f,0xf0,0x07,0xff,0xff,0xfe,0xcf,0xfd,0x00,0xff,0xff,0xff,0xff,0xff,
    0x73,0x7e,0xce,0xcf,0x39,0x38,0x00,0x07,0xe0,0x00,0x1c,0x80,0x03,0x70,0x80,0x3f,
    0xf0,0x07,0xfe,0x00,0x3f,0xfc,0x3f,0xfc,0x3f,0xfc,0x1c,0x38,0x1c,0x38,0x1c,0x38,
    0x1c,0x38,0x1c,0x38,0x1c,0x38,0x1c,0x38,0x1c,0x38,0x3c,0x3c,0xf8,0x1f,0xf0,0x0f,
    0xe0,0x07,0x3f,0xfc,0x3f,0xfc,0x3f,0xfc,0x0c,0x30,0x1c,0x38,0x18,0x18,0x38,0x1c,
    0x38,0x1c,0x70,0x0e,0x70,0x0e,0xf0,0x06,0xe0,0x07,0xe0,0x07,0xc0,0x03,0xc0,0x03,
    0x3f,0xfe,0x1f,0xff,0x8f,0xdf,0x01,0xe6,0x9c,0x73,0xde,0xb9,0xef,0xd8,0x77,0x6c,
    0x1b,0xbe,0x0f,0xdf,0x87,0xc7,0xc3,0xe3,0xe1,0xf1,0x70,0x70,0x00,0x1f,0xbe,0x0f,
    0xdf,0x87,0x8f,0xc3,0x81,0xf3,0xc0,0x3b,0xc0,0x0f,0xc0,0x03,0xf0,0x03,0xbc,0x03,
    0x8f,0x83,0x83,0xf3,0xe3,0xff,0xf1,0xff,0xf8,0x01,0x1f,0xff,0xe3,0x7f,0x7c,0x8e,
    0xc3,0x71,0x70,0x07,0x7c,0x80,0x0f,0xe0,0x00,0x1c,0x80,0x03,0x70,0x80,0x3f,0xf0,
    0x07,0xfe,0x00,0xff,0xf3,0x3f,0xff,0x73,0x38,0x87,0x71,0x0c,0x60,0x00,0x07,0x30,
    0x80,0xe1,0x0c,0xee,0xe0,0xfe,0xef,0xff,0xfe,0x0f,0xff,0xff,0x73,0xce,0x39,0xe7,
    0x9c,0x73,0xce,0x39,0xe7,0xff,0x0f,0x03,0x38,0x80,0x01,0x1c,0xc0,0x00,0x0e,0x60,
    0x00,0x07,0x30,0x80,0x03,0x1c,0xc0,0x01,0x0e,0xe0,0x00,0x07,0x70,0x80,0x03,0x38,
    0xc0,0x01,0x0c,0xff,0x7f,0xce,0x39,0xe7,0x9c,0x73,0xce,0x39,0xe7,0xfc,0xff,0x0f,
    0x20,0x80,0x03,0x3e,0xf8,0xc1,0x1d,0xc7,0x1d,0x7c,0xc0,0xff,0xff,0xff,0xff,0xff,
    0x1f,0x73,0xce,0xf0,0x03,0xff,0xe0,0x3f,0xfc,0xc7,0xff,0xfc,0xdf,0x83,0x3b,0x78,
    0xff,0xdf,0xff,0xf3,0x7b,0x0f,0xc0,0x03,0xf0,0x00,0x38,0x00,0x0e,0x80,0xfb,0xe0,
    0xff,0xf8,0x7f,0x1e,0x9c,0x03,0xee,0x80,0x3b,0xe0,0x1e,0xfc,0xff,0xf7,0xff,0xbc,
    0x0f,0xf0,0xcd,0xff,0xfe,0xff,0xe0,0x07,0x7c,0x00,0x07,0xf0,0xc0,0xfe,0xcf,0x7f,
    0xf8,0x03,0x00,0x1e,0x80,0x07,0xe0,0x01,0x70,0x00,0x1c,0x7c,0xc7,0xff,0xf9,0x7f,
    0x1e,0xde,0x01,0x77,0xc0,0x1d,0x70,0x1f,0x9e,0xff,0xcf,0xff,0xc3,0xf7,0xf0,0x81,
    0xff,0xf8,0xbf,0x03,0xf7,0xff,0xff,0xff,0xff,0x3f,0x00,0xfe,0x9f,0xff,0xe1,0x0f,
    0xf0,0xc3,0x3f,0xff,0x39,0xc0,0x81,0xff,0xfc,0xe7,0x3f,0x1c,0xe0,0x00,0x07,0x38,
    0xc0,0x81,0xff,0xfc,0xe7,0x3f,0xf8,0x9e,0xff,0xfb,0xff,0x87,0x77,0xe0,0x0e,0xdc,
    0x81,0x7b,0x78,0xfe,0x8f,0xff,0xe1,0x3b,0x00,0x07,0xf0,0xf0,0x1f,0xfe,0xc1,0x1f,
    0x1e,0x00,0x0f,0x80,0x07,0x80,0x03,0xc0,0x01,0xe0,0x3c,0xf0,0x3f,0xf8,0x3f,0x3c,
    0x1c,0x0e,0x0e,0x07,0x87,0x83,0xc3,0xc1,0xf9,0xf1,0xff,0xf8,0x7f,0xfc,0x70,0x80,
    0x03,0x1c,0x00,0x00,0x00,0x3f,0xf8,0xc1,0x0f,0x70,0x80,0x03,0x1c,0xe0,0x00,0x87,
    0xff,0xff,0xff,0xff,0x70,0xe0,0xc0,0x01,0x00,0xe0,0xff,0xff,0xff,0xc0,0x81,0x03,
    0x07,0x0e,0x1c,0x38,0x70,0xe0,0xc0,0xc1,0xff,0xff,0xf7,0x07,0x0f,0xf0,0x00,0x0f,
    0xe0,0x00,0x0e,0xe0,0x7e,0xee,0xe7,0x7e,0xee,0xe0,0x07,0x3e,0xe0,0x0f,0xee,0xf1,
    0xfc,0xcf,0xff,0xfc,0x7e,0xf0,0x83,0x1f,0xe0,0x00,0x07,0x38,0xc0,0x01,0x0e,0x70,
    0x80,0x03,0x1c,0xe0,0x00,0x87,0xff,0xff,0xff,0xff,0xfe,0x3c,0xfc,0xff,0xf8,0xff,
    0xe3,0x1c,0xc7,0x39,0x8e,0x73,0x1c,0xe7,0x38,0xce,0x71,0x9f,0xe7,0x3f,0xcf,0x7f,
    0x9e,0x07,0xde,0xc3,0xff,0xf9,0x7f,0x1e,0xcf,0xc1,0x39,0x38,0x07,0xe7,0xe0,0x3f,
    0xff,0xe7,0xff,0x7c,0xf0,0x81,0xff,0xf8,0xbf,0x07,0x7f,0xc0,0x0f,0xf8,0x01,0x7f,
    0xf0,0xfe,0x8f,0xff,0xc0,0x07,0xde,0x07,0xff,0x8f,0xff,0x8f,0x87,0xcf,0x01,0xe7,
    0x80,0x73,0xc0,0x79,0xf8,0xfc,0x3f,0xfe,0x0f,0xf7,0x81,0x03,0xc0,0x01,0xf8,0x03,
    0xfc,0x01,0xfe,0x00,0xf0,0x1e,0xff,0xe7,0xff,0x3d,0x3c,0x07,0xce,0x81,0x73,0xe0,
    0x3c,0x3c,0xfe,0x0f,0xff,0x83,0xef,0x00,0x38,0x00,0x0e,0xe0,0x0f,0xf8,0x03,0xfe,
    0x9f,0xf7,0xfd,0xff,0xcf,0x07,0x3c,0xc0,0x01,0x1c,0xc0,0x01,0xff,0xf1,0x1f,0xff,
    0x01,0xf8,0xc7,0x7f,0xfe,0xe7,0x60,0xfe,0xc0,0x7f,0xf0,0x6f,0xe0,0xff,0xff,0x7f,
    0xfe,0x01,0x1c,0xc0,0x01,0x1c,0xc0,0x01,0xff,0xf3,0x3f,0xff,0xc3,0x01,0x1c,0xc0,
    0x01,0x1c,0xc0,0xc1,0xfc,0xcf,0x7f,0xf0,0x01,0x8f,0xef,0xf1,0x3d,0x3e,0x07,0xe7,
    0xe0,0x1c,0x9c,0x83,0xf3,0x78,0xfe,0x9f,0xff,0xe3,0x7b,0x3f,0xff,0xcf,0xff,0xf3,
    0x73,0x38,0x18,0x06,0xce,0x81,0x73,0xc0,0x0f,0xf0,0x03,0x78,0x00,0x1e,0x00,0x1f,
    0xfe,0x87,0xff,0xe1,0x3b,0xe7,0xec,0x39,0x7f,0xc7,0xff,0xe1,0x7f,0x38,0x0f,0xce,
    0x83,0xe1,0x00,0x3e,0x9f,0xcf,0xc7,0xf3,0xe0,0x1f,0xf0,0x03,0x78,0x00,0x3f,0xe0,
    0x1c,0x1c,0xde,0xcf,0xff,0xf3,0x03,0x1f,0xff,0xe3,0x7f,0x7c,0x07,0xc7,0x61,0x38,
    0x0e,0xee,0xc0,0x0d,0xf0,0x01,0x1e,0x80,0x03,0x30,0x00,0x07,0xfe,0xc1,0x3f,0xf8,
    0x07,0xff,0xff,0xff,0xff,0x71,0xe0,0xe0,0xc0,0x81,0xc3,0xff,0xff,0xff,0x3f,0x70,
    0x3c,0x9f,0xc3,0xe1,0x70,0x38,0x8f,0xc3,0x83,0xc3,0xe1,0x70,0x38,0x1c,0x3e,0x1e,
    0x0e,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0x0d,0x87,0xc7,0x87,0xc3,0xe1,0x70,0x38,
    0x78,0x38,0x9e,0xc3,0xe1,0x70,0x38,0x9c,0xcf,0xe3,0x00,0x1c,0xf8,0xc1,0x9f,0xe7,
    0x0f,0x7e,0xe0,0x00,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 15, 0, 25, 1, 1},
/* ! */ {1, 15, 6, 9, 4, 16},
/* " */ {9, 15, 3, 10, 8, 7},
/* # */ {16, 15, 2, 9, 11, 18},
/* $ */ {41, 15, 3, 8, 10, 20},
/* % */ {66, 15, 1, 9, 10, 16},
/* & */ {86, 15, 2, 11, 12, 14},
/* ' */ {107, 15, 6, 10, 3, 7},
/* ( */ {110, 15, 7, 9, 6, 20},
/* ) */ {125, 15, 3, 9, 6, 20},
/* * */ {140, 15, 1, 9, 11, 11},
/* + */ {156, 15, 2, 11, 11, 14},
/* , */ {176, 15, 4, 22, 5, 7},
/* - */ {181, 15, 1, 16, 13, 3},
/* . */ {186, 15, 6, 22, 4, 3},
/* / */ {188, 15, 2, 7, 11, 20},
/* 0 */ {216, 15, 2, 9, 11, 16},
/* 1 */ {238, 15, 1, 10, 10, 15},
/* 2 */ {257, 15, 2, 9, 11, 16},
/* 3 */ {279, 15, 2, 9, 12, 16},
/* 4 */ {303, 16, 3, 10, 11, 15},
/* 5 */ {324, 15, 1, 9, 12, 16},
/* 6 */ {348, 15, 3, 9, 11, 16},
/* 7 */ {370, 15, 1, 9, 11, 16},
/* 8 */ {392, 15, 2, 9, 11, 16},
/* 9 */ {414, 15, 2, 9, 11, 16},
/* : */ {436, 15, 6, 14, 4, 11},
/* ; */ {442, 15, 3, 14, 5, 15},
/* < */ {452, 15, 1, 12, 13, 12},
/* = */ {472, 15, 1, 14, 13, 8},
/* > */ {485, 15, 1, 12, 13, 12},
/* ? */ {505, 15, 3, 10, 10, 15},
/* @ */ {524, 15, 2, 9, 11, 20},
/* A */ {552, 15, -1, 10, 17, 15},
/* B */ {584, 15, 1, 10, 14, 15},
/* C */ {611, 15, 1, 10, 13, 15},
/* D */ {636, 15, 1, 10, 13, 15},
/* E */ {661, 15, 1, 10, 13, 15},
/* F */ {686, 15, 1, 10, 13, 15},
/* G */ {711, 15, 1, 10, 14, 15},
/* H */ {738, 15, 1, 10, 14, 15},
/* I */ {765, 15, 3, 10, 9, 15},
/* J */ {782, 15, 1, 10, 14, 15},
/* K */ {809, 15, 1, 10, 15, 15},
/* L */ {838, 15, 2, 10, 13, 15},
/* M */ {863, 16, -1, 10, 18, 15},
/* N */ {897, 16, 0, 10, 16, 15},
/* O */ {927, 15, 1, 10, 14, 15},
/* P */ {954, 15, 1, 10, 13, 15},
/* Q */ {979, 15, 1, 10, 14, 19},
/* R */ {1013, 15, -1, 10, 15, 15},
/* S */ {1042, 15, 1, 10, 13, 15},
/* T */ {1067, 15, 1, 10, 13, 15},
/* U */ {1092, 16, 0, 10, 16, 15},
/* V */ {1122, 15, -1, 10, 16, 15},
/* W */ {1152, 15, 0, 10, 15, 15},
/* X */ {1181, 15, 0, 10, 15, 15},
/* Y */ {1210, 15, 1, 10, 13, 15},
/* Z */ {1235, 15, 2, 10, 12, 15},
/* [ */ {1258, 15, 6, 9, 5, 20},
/* \ */ {1271, 15, 2, 7, 11, 20},
/* ] */ {1299, 15, 2, 9, 5, 20},
/* ^ */ {1312, 15, 2, 9, 11, 8},
/* _ */ {1323, 15, 0, 27, 15, 3},
/* ` */ {1329, 15, 4, 9, 4, 4},
/* a */ {1331, 15, 1, 14, 13, 11},
/* b */ {1349, 15, 1, 9, 14, 16},
/* c */ {1377, 15, 1, 14, 12, 11},
/* d */ {1394, 15, 1, 9, 14, 16},
/* e */ {1422, 15, 0, 14, 13, 11},
/* f */ {1440, 15, 3, 9, 11, 16},
/* g */ {1462, 15, 1, 14, 13, 16},
/* h */ {1488, 15, 0, 9, 15, 16},
/* i */ {1518, 15, 2, 9, 11, 16},
/* j */ {1540, 15, 3, 9, 9, 21},
/* k */ {1564, 15, 2, 9, 12, 16},
/* l */ {1588, 15, 2, 9, 11, 16},
/* m */ {1610, 15, -1, 14, 17, 11},
/* n */ {1634, 15, 0, 14, 13, 11},
/* o */ {1652, 15, 1, 14, 13, 11},
/* p */ {1670, 15, 0, 14, 15, 16},
/* q */ {1700, 15, 1, 14, 14, 16},
/* r */ {1728, 15, 2, 14, 12, 11},
/* s */ {1745, 15, 1, 14, 12, 11},
/* t */ {1762, 15, 1, 10, 12, 15},
/* u */ {1785, 15, 1, 14, 13, 11},
/* v */ {1803, 15, 0, 14, 14, 11},
/* w */ {1823, 15, 0, 14, 14, 11},
/* x */ {1843, 15, 0, 14, 14, 11},
/* y */ {1863, 15, 1, 14, 13, 16},
/* z */ {1889, 15, 2, 14, 10, 11},
/* { */ {1903, 15, 4, 9, 7, 20},
/* | */ {1921, 15, 6, 9, 3, 20},
/* } */ {1929, 15, 4, 9, 7, 20},
/* ~ */ {1947, 15, 1, 15, 11, 6},
};

const monoGFX_font_t monoGFX_FreeMonoBold_12pt = {bitmapBuffer, 1956, glyphs, 20};