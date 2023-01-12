#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[4920] =
{
    0x00,0xe0,0x81,0x0f,0x3f,0xfc,0xf0,0xc1,0x07,0x1f,0x7e,0xf8,0xe0,0x83,0x0f,0x1e,
    0x78,0xf0,0xc1,0x03,0x0f,0x1c,0x00,0x00,0x00,0x07,0x3f,0xfc,0xf0,0x83,0x07,0x3e,
    0xde,0xc3,0x7b,0x3c,0x8f,0xe7,0xf0,0x1c,0x8e,0xc3,0x39,0x38,0x07,0xe3,0x60,0x0c,
    0x0c,0x00,0x8e,0x03,0xf0,0x78,0x00,0xcf,0x03,0x70,0x3c,0x80,0xc7,0x03,0x78,0x1c,
    0x80,0xe7,0x01,0x3c,0x1e,0xf8,0xff,0xc7,0xff,0xff,0xfc,0xff,0x8f,0xff,0x7f,0xe0,
    0x71,0x00,0x9e,0x07,0xf0,0x78,0x00,0x8f,0x07,0xfe,0xff,0xf1,0xff,0x1f,0xff,0xff,
    0xf1,0xff,0x0f,0x78,0x1e,0xc0,0xe3,0x01,0x3c,0x1e,0xc0,0xf3,0x00,0x1c,0x0f,0xe0,
    0xf1,0x00,0x1e,0x07,0xe0,0x70,0x00,0x00,0x70,0x00,0x00,0x07,0x00,0x70,0x00,0x80,
    0x07,0x00,0xff,0x0f,0xf8,0xff,0xc0,0xff,0x0f,0x3e,0x7c,0xf0,0x80,0x07,0x0f,0x38,
    0xf0,0x00,0x00,0x3f,0x00,0xf0,0x3f,0x00,0xfe,0x0f,0xc0,0xff,0x01,0xc0,0x3f,0x00,
    0xe0,0x03,0x00,0x3c,0x1c,0xc0,0xe3,0x01,0x3c,0x1e,0xe0,0xe1,0x87,0x1f,0xfe,0xff,
    0xf0,0xff,0x07,0xf6,0x0f,0x00,0x38,0x00,0xc0,0x03,0x00,0x3c,0x00,0xc0,0x03,0x00,
    0x1c,0x00,0xc0,0x01,0x00,0xc0,0x07,0xc0,0x3f,0x80,0xc3,0x01,0x06,0x06,0x0c,0x18,
    0x30,0x60,0xc0,0xc0,0x00,0xc7,0x01,0xf8,0x83,0xc3,0xc3,0x0f,0xf0,0x0f,0xf8,0x07,
    0xfc,0x01,0xfc,0x78,0x70,0xf8,0x03,0x70,0x1c,0x60,0x60,0xc0,0x80,0x01,0x03,0x06,
    0x0c,0x0c,0x70,0x38,0x80,0x7f,0x00,0x7c,0x00,0x00,0x5e,0x00,0xff,0x01,0xff,0x03,
    0xff,0x07,0x1f,0x03,0x1e,0x00,0x3c,0x00,0x78,0x00,0xf0,0x01,0xe0,0x03,0xe0,0x0f,
    0xe0,0x9f,0xef,0x7f,0xdf,0xf3,0xdf,0xe3,0x9f,0x87,0x1f,0x0f,0x3f,0xfe,0xff,0xfc,
    0xff,0xf3,0xff,0x83,0xdf,0x03,0xde,0xbb,0xf7,0xce,0x39,0x67,0x0c,0x00,0x07,0x3c,
    0xf0,0x81,0x07,0x1e,0xf8,0xc0,0x03,0x0f,0x78,0xe0,0x01,0x0f,0x3c,0xe0,0x01,0x0f,
    0x3c,0xe0,0x01,0x0f,0x78,0xc0,0x03,0x1e,0xf0,0x80,0x07,0x3c,0xe0,0x03,0x1e,0xf0,
    0x80,0x0f,0x7c,0xc0,0x03,0x0e,0x00,0xc0,0x01,0x0f,0xf8,0xc0,0x07,0x3c,0xe0,0x01,
    0x1f,0xf0,0x80,0x07,0x3c,0xe0,0x01,0x0f,0x78,0xc0,0x03,0x1e,0x78,0xc0,0x03,0x1e,
    0xf0,0xc0,0x03,0x1e,0x78,0xc0,0x03,0x0f,0x3c,0xe0,0x81,0x07,0x1e,0xf0,0x00,0x01,
    0x00,0x00,0x02,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x03,0xce,0xe3,0xff,0xff,0xff,
    0xff,0xfe,0x7f,0xf8,0x0f,0xf0,0x07,0xf8,0x07,0xfc,0x0f,0x3e,0x0f,0x1e,0x0f,0x0e,
    0x06,0x00,0x1c,0x00,0xc0,0x01,0x00,0x1e,0x00,0xe0,0x01,0x00,0x1e,0x00,0xe0,0x01,
    0x00,0x0e,0x00,0xf0,0x00,0xfe,0xff,0xf7,0xff,0xff,0xff,0xff,0xf7,0xff,0x7f,0x80,
    0x07,0x00,0x78,0x00,0x80,0x07,0x00,0x38,0x00,0xc0,0x03,0x00,0x3c,0x00,0xc0,0x03,
    0x00,0x1c,0x00,0xc0,0x01,0x00,0xe0,0xc3,0x07,0x0f,0x1e,0x78,0xf0,0xc0,0x81,0x03,
    0x0e,0x1c,0x30,0x00,0xfe,0xff,0xf7,0xff,0xff,0xff,0xff,0xf7,0xff,0x7f,0xdc,0xff,
    0xff,0x1e,0x00,0x00,0x38,0x00,0x00,0x0f,0x00,0xe0,0x01,0x00,0x78,0x00,0x00,0x0f,
    0x00,0xe0,0x01,0x00,0x7c,0x00,0x00,0x0f,0x00,0xe0,0x01,0x00,0x7c,0x00,0x00,0x0f,
    0x00,0xe0,0x01,0x00,0x7c,0x00,0x00,0x0f,0x00,0xe0,0x01,0x00,0x7c,0x00,0x00,0x0f,
    0x00,0xe0,0x01,0x00,0x3c,0x00,0x00,0x0f,0x00,0xe0,0x01,0x00,0x3c,0x00,0x00,0x0f,
    0x00,0xe0,0x01,0x00,0x3c,0x00,0x80,0x0f,0x00,0xe0,0x01,0x00,0x3c,0x00,0x00,0x0f,
    0x00,0xc0,0x01,0x00,0x00,0x00,0x3e,0x00,0xfe,0x03,0xfe,0x1f,0xfc,0x7f,0xf8,0xf1,
    0xe3,0x81,0xcf,0x03,0x3c,0x0f,0xf0,0x1e,0xc0,0x7b,0x00,0xef,0x01,0x9c,0x07,0x78,
    0x0e,0xe0,0x3d,0x80,0xf7,0x00,0xde,0x03,0x38,0x0f,0xf0,0x3c,0xe0,0xf3,0x80,0xc7,
    0x87,0x0f,0xfe,0x3f,0xf8,0x7f,0xc0,0x7f,0x00,0x7c,0x00,0x00,0x7c,0x00,0xfc,0x00,
    0xfe,0x01,0xff,0x03,0xbf,0x03,0x9e,0x07,0x08,0x0f,0x00,0x1e,0x00,0x3c,0x00,0x38,
    0x00,0x78,0x00,0xf0,0x00,0xe0,0x01,0xc0,0x01,0xc0,0x03,0x80,0x07,0x00,0x0f,0x00,
    0x1e,0x00,0x1c,0x00,0x3c,0xe0,0xff,0xdf,0xff,0xbf,0xff,0x7f,0xff,0x7f,0x00,0xf8,
    0x01,0xc0,0xff,0x00,0xfc,0x3f,0xc0,0xff,0x07,0x7c,0xf0,0xc1,0x07,0x3c,0x78,0x80,
    0x07,0x07,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x01,0x00,0x1f,0x00,0xf0,0x01,0x00,0x1f,
    0x00,0xf8,0x01,0x80,0x1f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0x7e,0x00,0xe0,0x07,0x0e,
    0x3f,0xc0,0xe1,0xff,0x3f,0xfc,0xff,0xc7,0xff,0xff,0xf8,0xff,0x0f,0x00,0xfe,0x00,
    0xfe,0x0f,0xf8,0xff,0xe0,0xff,0x0f,0x0f,0x7c,0x38,0xc0,0x03,0x00,0x1e,0x00,0xf8,
    0x00,0xe0,0x03,0xf0,0x0f,0xc0,0x1f,0x00,0xfe,0x00,0xf0,0x1f,0x00,0xf8,0x00,0x80,
    0x0f,0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0x78,0x1c,0xf0,0xf3,0xff,0x8f,0xff,
    0x3f,0xf8,0xff,0x00,0xff,0x00,0x00,0xe0,0x03,0xc0,0x0f,0x80,0x1f,0x00,0x7f,0x00,
    0xfe,0x01,0xfc,0x07,0xf8,0x1e,0xe0,0x39,0xc0,0xf3,0x80,0xc7,0x03,0x0f,0x0f,0x3e,
    0x1c,0x7c,0x78,0xf0,0xe0,0xe1,0xff,0xcf,0xff,0x7f,0xff,0xff,0xfd,0xff,0x03,0xc0,
    0x03,0xe0,0x1f,0xc0,0xff,0x00,0xff,0x03,0xfc,0x07,0xe0,0xff,0x07,0xff,0x3f,0xf8,
    0xff,0xc1,0xff,0x07,0x0e,0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0xf0,0x3f,0xc0,
    0xff,0x07,0xfe,0x7f,0xf0,0xff,0x83,0x07,0x3e,0x00,0xe0,0x01,0x00,0x0f,0x00,0x78,
    0x00,0xc0,0x03,0x00,0x0f,0x00,0x78,0x1c,0xf0,0xf1,0xff,0x8f,0xff,0x3f,0xf8,0x7f,
    0x00,0xff,0x00,0x00,0xf0,0x03,0xf0,0x3f,0xc0,0xff,0x81,0xff,0x0f,0xfe,0x30,0xf8,
    0x01,0xe0,0x03,0x00,0x0f,0x00,0x7c,0x00,0xe0,0xf9,0x80,0xf7,0x0f,0xfc,0xff,0xf0,
    0xff,0x8f,0x3f,0x7c,0x7c,0xc0,0xe3,0x01,0x1e,0x0f,0xf0,0x78,0xc0,0xc7,0x03,0x1e,
    0x3e,0xf8,0xe0,0xff,0x03,0xff,0x0f,0xf0,0x3f,0x00,0x7f,0x00,0xfe,0xff,0xfd,0xff,
    0xff,0xff,0xff,0xff,0xff,0x00,0xef,0x00,0x1e,0x00,0x1e,0x00,0x3c,0x00,0x3c,0x00,
    0x78,0x00,0x78,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xe0,0x01,0xe0,0x01,0xc0,0x03,
    0xc0,0x03,0x80,0x07,0x80,0x07,0x00,0x0f,0x00,0x0f,0x00,0x1e,0x00,0x1c,0x00,0x00,
    0x7e,0x00,0xfc,0x0f,0xf0,0xff,0xc0,0xff,0x0f,0x1f,0x7c,0x7c,0xc0,0xe3,0x01,0x1e,
    0x0f,0xf0,0x78,0xc0,0xc3,0x07,0x0f,0xfc,0x3f,0xc0,0xff,0x00,0xff,0x07,0xfc,0x7f,
    0xf0,0xc1,0xc7,0x03,0x3c,0x0f,0xe0,0x79,0x00,0xcf,0x03,0x7c,0x7e,0xf0,0xf1,0xff,
    0x07,0xff,0x3f,0xf0,0x7f,0x00,0xfe,0x00,0x00,0xfc,0x00,0xf8,0x3f,0xc0,0xff,0x07,
    0xfe,0x7f,0xf0,0xc3,0x0f,0x0f,0xf8,0xf8,0x00,0x8f,0x07,0xf0,0x78,0x00,0x8f,0x07,
    0xfc,0xf8,0xe0,0x8f,0xff,0x7f,0xf0,0xff,0x07,0xfe,0x7b,0xc0,0xcf,0x03,0x00,0x3e,
    0x00,0xf0,0x01,0x80,0x0f,0x00,0xfc,0x00,0xf8,0x03,0xfe,0x1f,0xf0,0xff,0x00,0xff,
    0x03,0xe0,0x07,0x00,0xe0,0xf0,0xe3,0xc7,0x0f,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xc0,0xe1,0xc7,0x8f,0x1f,0x1e,0x00,0x00,0x07,0xfc,0xc0,0x0f,0xfc,0x80,0x03,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x03,0x1f,0xf0,0x80,0x07,
    0x78,0xc0,0x03,0x1c,0xe0,0x00,0x0e,0x70,0x00,0x03,0x00,0x00,0x00,0x0e,0x00,0xf8,
    0x00,0xe0,0x0f,0x80,0x3f,0x00,0xff,0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x3f,0x00,0xff,
    0x00,0xc0,0x3f,0x00,0xf0,0x07,0x00,0xfe,0x01,0x80,0x7f,0x00,0xe0,0x1f,0x00,0xf8,
    0x01,0x00,0x1f,0x00,0xc0,0x01,0xfc,0xff,0x9f,0xff,0xff,0xf3,0xff,0x7f,0xfe,0xff,
    0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0x3f,0xff,0xff,0xef,0xff,0xff,
    0xfd,0xff,0x1f,0x30,0x00,0x80,0x0f,0x00,0xf8,0x03,0x00,0x7f,0x00,0xc0,0x1f,0x00,
    0xf8,0x07,0x00,0xfe,0x01,0x80,0x3f,0x00,0xf0,0x0f,0xc0,0x3f,0x00,0xff,0x00,0xfc,
    0x03,0xf0,0x0f,0xc0,0x1f,0x00,0x7f,0x00,0xf0,0x01,0x00,0x07,0x00,0x00,0xe0,0x0f,
    0xfe,0x8f,0xff,0xef,0xff,0xff,0xc0,0x7f,0xc0,0x1f,0xe0,0x01,0xf0,0x00,0x3c,0x80,
    0x1f,0xf8,0x07,0xfe,0x81,0x3f,0xc0,0x07,0xe0,0x01,0x70,0x00,0x00,0x00,0x00,0x00,
    0x0e,0xc0,0x0f,0xe0,0x07,0xf0,0x03,0xf0,0x00,0x00,0x00,0x7c,0x00,0xfc,0x03,0xfc,
    0x1f,0xf8,0xf0,0xe0,0x80,0xc3,0x01,0x8e,0x07,0x38,0x0e,0xe0,0x1c,0x80,0x73,0xc0,
    0xcf,0xc1,0x1f,0xc3,0x7f,0x8e,0xcf,0x39,0x0e,0xe7,0x1c,0x8e,0x73,0x38,0xc7,0xe1,
    0x1c,0x8f,0x73,0xfc,0xcf,0xe1,0x3f,0x07,0xfe,0x1c,0x00,0x70,0x00,0xc0,0x01,0x00,
    0x0f,0x00,0x38,0x00,0xe0,0xc1,0x81,0xff,0x07,0xfc,0x0f,0xe0,0x0f,0x00,0x00,0xff,
    0x03,0x80,0xff,0x03,0x80,0xff,0x07,0x80,0xff,0x07,0x00,0xf8,0x07,0x00,0xb8,0x07,
    0x00,0xbc,0x07,0x00,0x9e,0x0f,0x00,0x0e,0x0f,0x00,0x0f,0x0f,0x80,0x07,0x0f,0x80,
    0x07,0x1f,0xc0,0xff,0x1f,0xe0,0xff,0x1f,0xe0,0xff,0x1f,0xf0,0xff,0x1f,0xf0,0x00,
    0x3e,0x78,0x00,0x3e,0xfe,0x81,0xff,0xff,0xc3,0xff,0xff,0xc3,0xff,0xff,0xc1,0x7f,
    0xe0,0xff,0x07,0xfc,0xff,0x03,0xff,0xff,0xc1,0xff,0xff,0xc0,0x03,0x3e,0xf0,0x00,
    0x0f,0x3c,0xc0,0x03,0x07,0x78,0xe0,0x01,0x1f,0xf8,0xff,0x03,0xfe,0x7f,0x80,0xff,
    0x3f,0xe0,0xff,0x1f,0x3c,0xc0,0x0f,0x0f,0xc0,0xc3,0x03,0xf0,0x70,0x00,0x3c,0x1e,
    0x80,0xe7,0xff,0xff,0xfd,0xff,0x3f,0xff,0xff,0xc7,0xff,0x3f,0x00,0x00,0xfc,0x19,
    0xe0,0xff,0x0f,0xfc,0xff,0x83,0xff,0xff,0xf0,0x83,0x1f,0x3e,0x80,0xc7,0x07,0xe0,
    0xf1,0x00,0x38,0x1e,0x00,0x80,0x07,0x00,0xe0,0x01,0x00,0x3c,0x00,0x00,0x0f,0x00,
    0xc0,0x03,0x00,0xf0,0x00,0x00,0x3c,0x00,0x00,0x1f,0x80,0x87,0x1f,0xf8,0xe1,0xff,
    0x3f,0xf0,0xff,0x07,0xf8,0xff,0x00,0xf8,0x07,0x00,0xe0,0xff,0x03,0xf8,0xff,0x07,
    0xfc,0xff,0x07,0xfe,0xff,0x07,0x1c,0xf0,0x03,0x0f,0xe0,0x83,0x07,0xf0,0xc1,0x03,
    0xf0,0xe0,0x01,0x78,0x70,0x00,0x3c,0x3c,0x00,0x1e,0x1e,0x00,0x0f,0x0f,0xc0,0x83,
    0x03,0xe0,0xe1,0x01,0xf0,0xf0,0x00,0x3c,0x78,0x00,0x1f,0x3c,0xe0,0x87,0xff,0xff,
    0xe1,0xff,0x7f,0xf0,0xff,0x0f,0xf8,0xff,0x01,0x00,0xe0,0xff,0xff,0xe0,0xff,0xff,
    0xf0,0xff,0xff,0xe0,0xff,0xff,0x80,0x07,0x70,0x80,0x07,0x78,0x80,0x03,0x78,0xc0,
    0xc3,0x31,0xc0,0xe3,0x01,0xc0,0xff,0x01,0xc0,0xff,0x00,0xe0,0xff,0x00,0xe0,0xff,
    0x00,0xe0,0xf1,0x00,0xe0,0x71,0x38,0xe0,0x00,0x3c,0xf0,0x00,0x3c,0xf0,0x00,0x3c,
    0xfe,0xff,0x1f,0xfe,0xff,0x1f,0xfe,0xff,0x1f,0xfe,0xff,0x1f,0xe0,0xff,0xff,0xe1,
    0xff,0xff,0xc3,0xff,0xff,0x83,0xff,0xff,0x07,0x38,0x00,0x0f,0x78,0x00,0x1e,0xf0,
    0x00,0x1c,0xe0,0xf1,0x38,0xc0,0xe3,0x00,0x80,0xff,0x01,0x80,0xff,0x03,0x00,0xff,
    0x07,0x00,0xfe,0x0f,0x00,0x1c,0x0e,0x00,0x3c,0x1c,0x00,0x78,0x00,0x00,0xf0,0x00,
    0x00,0xe0,0x01,0x00,0xf8,0x7f,0x00,0xf8,0xff,0x00,0xf0,0xff,0x01,0xc0,0xff,0x01,
    0x00,0x00,0xfc,0x31,0xc0,0xff,0x0f,0xfc,0xff,0x83,0xff,0xff,0xf0,0x03,0x3e,0x3e,
    0x00,0xc7,0x07,0xc0,0xf1,0x00,0x00,0x1e,0x00,0x80,0x07,0x00,0xe0,0x01,0x00,0x38,
    0xe0,0x7f,0x0f,0xfc,0xff,0x03,0xff,0xf7,0xc0,0xff,0x3d,0x00,0x1c,0x1f,0x80,0xc7,
    0x1f,0xf0,0xe1,0xff,0x7f,0xf0,0xff,0x0f,0xf8,0xff,0x00,0xf8,0x0f,0x00,0xc0,0x3f,
    0xfe,0xc1,0x7f,0xfe,0x83,0xff,0xfc,0x07,0xfe,0xf8,0x07,0x38,0x80,0x03,0x78,0x80,
    0x07,0xf0,0x00,0x0f,0xe0,0x01,0x1e,0xc0,0x03,0x1c,0x80,0xff,0x3f,0x80,0xff,0x7f,
    0x00,0xff,0xff,0x00,0xfe,0xff,0x01,0x1c,0xc0,0x01,0x3c,0xc0,0x03,0x78,0x80,0x07,
    0xf0,0x00,0x0f,0xe0,0x01,0x0e,0xf8,0x8f,0x7f,0xf0,0x9f,0xff,0xf1,0x3f,0xff,0xc3,
    0x3f,0xfe,0x03,0xe0,0xff,0x1f,0xfe,0xff,0xc3,0xff,0x7f,0xf0,0xff,0x07,0xc0,0x03,
    0x00,0x78,0x00,0x00,0x0f,0x00,0xe0,0x00,0x00,0x1e,0x00,0xc0,0x03,0x00,0x78,0x00,
    0x00,0x07,0x00,0xf0,0x00,0x00,0x1e,0x00,0xc0,0x03,0x00,0x78,0x00,0x00,0x07,0x00,
    0xf0,0x00,0xf8,0xff,0x07,0xff,0xff,0xf0,0xff,0x1f,0xfc,0xff,0x01,0x00,0xf8,0xff,
    0x01,0xf8,0xff,0x03,0xf0,0xff,0x07,0xe0,0xff,0x07,0x00,0xf0,0x00,0x00,0xe0,0x01,
    0x00,0xc0,0x03,0x00,0x80,0x03,0x00,0x80,0x07,0x00,0x00,0x0f,0x00,0x00,0x1e,0x40,
    0x00,0x3c,0xc0,0x01,0x38,0xc0,0x03,0x78,0x80,0x07,0xf0,0x00,0x0f,0xe0,0x01,0x1e,
    0xe0,0x01,0x1c,0xf0,0x03,0xfc,0xff,0x03,0xf8,0xff,0x03,0xe0,0xff,0x03,0x00,0xfe,
    0x00,0x00,0xe0,0x3f,0xfe,0xe0,0xff,0xfe,0xc3,0xff,0xfd,0x87,0xff,0xf9,0x07,0x38,
    0xf0,0x01,0x78,0xf0,0x01,0xf0,0xf8,0x00,0xe0,0xf9,0x00,0xc0,0xf9,0x00,0xc0,0x7f,
    0x00,0x80,0xff,0x01,0x00,0xff,0x07,0x00,0xbe,0x1f,0x00,0x3c,0x3e,0x00,0x3c,0xf8,
    0x00,0x78,0xf0,0x01,0xf0,0xc0,0x03,0xe0,0x81,0x0f,0xf8,0x0f,0xff,0xf8,0x3f,0xfc,
    0xf1,0x7f,0xf8,0xe3,0x7f,0xf0,0x03,0xe0,0xff,0x01,0xfc,0x7f,0x00,0xff,0x1f,0xc0,
    0xff,0x03,0x00,0x0f,0x00,0xc0,0x03,0x00,0x70,0x00,0x00,0x1e,0x00,0x80,0x07,0x00,
    0xe0,0x01,0x00,0x38,0x00,0x00,0x0f,0x00,0xc0,0x03,0x00,0xf0,0x00,0x06,0x3c,0xc0,
    0x03,0x07,0x70,0xe0,0x01,0x1e,0x78,0x80,0xe7,0xff,0xff,0xfd,0xff,0x7f,0xff,0xff,
    0xcf,0xff,0xff,0x03,0xe0,0x07,0xe0,0x07,0x7f,0x00,0xff,0xf0,0x0f,0xf0,0x07,0xfe,
    0x80,0x3f,0xe0,0x0f,0xfc,0x01,0xfe,0xc0,0x1f,0xe0,0x1f,0xfe,0x01,0xee,0xf1,0x0e,
    0xf0,0x9e,0xff,0x00,0xef,0x79,0x0f,0xf0,0xfe,0xf3,0x00,0xcf,0x3f,0x0f,0x70,0xfc,
    0x71,0x80,0xc7,0x8f,0x07,0x78,0xfc,0x78,0x80,0x87,0x87,0x07,0x38,0x38,0x38,0xc0,
    0x03,0xc0,0x03,0xfe,0x81,0xff,0xf0,0x3f,0xfc,0x0f,0xff,0xc1,0xff,0xf0,0x1f,0xfc,
    0x07,0xf0,0x03,0xfe,0xe1,0x1f,0xfc,0x8f,0x7f,0xf0,0x3f,0xfe,0xc3,0x7f,0xe0,0x0f,
    0x78,0x80,0x7f,0xe0,0x01,0xfe,0x81,0x03,0xf8,0x0f,0x0f,0xe0,0x3e,0x3c,0xc0,0xf3,
    0xf1,0x00,0xcf,0xc7,0x03,0x3c,0x1e,0x07,0xf0,0xf8,0x1e,0xc0,0xc1,0x7b,0x80,0x07,
    0xff,0x01,0x1e,0xf8,0x07,0x78,0xe0,0x0f,0xe0,0x80,0x3f,0xe0,0x1f,0xfc,0xc0,0xff,
    0xf0,0x03,0xff,0x83,0x07,0xfc,0x07,0x1e,0x00,0x00,0xfc,0x01,0xc0,0xff,0x00,0xfc,
    0xff,0x80,0xff,0x3f,0xf0,0x83,0x1f,0x3e,0xc0,0xcf,0x07,0xe0,0xf3,0x00,0xf0,0x1e,
    0x00,0xbc,0x07,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xde,0x03,0x80,0xf7,
    0x00,0xf0,0x7c,0x00,0x3e,0x3f,0xc0,0x87,0x1f,0xfc,0xc0,0xff,0x1f,0xf0,0xff,0x03,
    0xf0,0x3f,0x00,0xf0,0x03,0x00,0xe0,0xff,0x03,0xfc,0xff,0x03,0xff,0xff,0xc1,0xff,
    0xff,0xc0,0x03,0x3e,0xf0,0x00,0x0f,0x3c,0xc0,0x03,0x0f,0xf0,0xe0,0x01,0x3c,0x78,
    0x80,0x07,0x1e,0xf8,0x81,0xff,0x3f,0xe0,0xff,0x07,0xfc,0xff,0x00,0xff,0x0f,0xc0,
    0x03,0x00,0xf0,0x00,0x00,0x1c,0x00,0xe0,0xff,0x01,0xfc,0x7f,0x00,0xff,0x1f,0xc0,
    0xff,0x03,0x00,0x00,0xfc,0x01,0xc0,0xff,0x00,0xfc,0xff,0x80,0xff,0x3f,0xf0,0x83,
    0x1f,0x3e,0xc0,0xcf,0x07,0xe0,0xf3,0x00,0xf0,0x1e,0x00,0xbc,0x07,0x00,0xff,0x00,
    0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xde,0x03,0x80,0xf7,0x00,0xf0,0x7c,0x00,0x3e,0x3f,
    0xc0,0x87,0x1f,0xfc,0xe0,0xff,0x1f,0xf0,0xff,0x03,0xf0,0x3f,0x00,0xf8,0x03,0x00,
    0x07,0x10,0xe0,0x3f,0x0e,0xfc,0xff,0x87,0xff,0xff,0xe0,0xff,0x1f,0x78,0xe0,0x03,
    0xe0,0xff,0x03,0xf8,0xff,0x07,0xfc,0xff,0x07,0xfe,0xff,0x07,0x38,0xe0,0x03,0x1e,
    0xe0,0x01,0x0f,0xf0,0x80,0x07,0x78,0xc0,0x03,0x1e,0xe0,0xc0,0x0f,0xf8,0xff,0x03,
    0xfc,0xff,0x00,0xfe,0x1f,0x00,0xff,0x0f,0xc0,0x83,0x0f,0xe0,0x81,0x0f,0xf0,0xc0,
    0x07,0x78,0xc0,0x87,0xff,0xc0,0xff,0xff,0xe0,0xff,0x7f,0xe0,0xff,0x1f,0xf0,0x01,
    0x00,0xfc,0x1c,0xf0,0xff,0x03,0xff,0x7f,0xf0,0xff,0x0f,0x1f,0xf8,0xf0,0x01,0x1e,
    0x1e,0xc0,0xc3,0x03,0x38,0xf8,0x01,0x00,0xff,0x03,0xc0,0xff,0x03,0xf0,0xff,0x01,
    0xe0,0x7f,0x00,0xc0,0x8f,0x03,0xe0,0x79,0x00,0x3c,0x0f,0xc0,0xe7,0x07,0x7e,0xfc,
    0xff,0x87,0xff,0x7f,0xf0,0xff,0x07,0x80,0x3f,0x00,0xfc,0xff,0xdf,0xff,0xff,0xfb,
    0xff,0x7f,0xff,0xff,0xef,0xe1,0xe1,0x1c,0x1c,0xde,0xc3,0xc3,0x7b,0x78,0x78,0x07,
    0x0f,0x07,0xe0,0x00,0x00,0x1e,0x00,0xc0,0x03,0x00,0x78,0x00,0x00,0x0f,0x00,0xe0,
    0x00,0x00,0x1e,0x00,0xc0,0x03,0x00,0x78,0x00,0xf8,0xff,0x00,0xff,0x1f,0xf0,0xff,
    0x03,0xfc,0x3f,0x00,0xfe,0xc3,0x3f,0xff,0xf1,0xbf,0xff,0xf8,0xcf,0x3f,0xfc,0xc7,
    0x03,0xf0,0xe0,0x01,0x78,0xf0,0x00,0x1c,0x38,0x00,0x0f,0x1e,0x80,0x07,0x0f,0xc0,
    0x83,0x07,0xe0,0xc0,0x03,0x78,0xe0,0x00,0x3c,0x78,0x00,0x1e,0x3c,0x00,0x0f,0x1e,
    0xc0,0x03,0x1f,0xf0,0x81,0x1f,0x7c,0x80,0xff,0x1f,0xc0,0xff,0x07,0xc0,0xff,0x01,
    0x80,0x1f,0x00,0x00,0xff,0x81,0xff,0xff,0xc3,0xff,0xff,0xc3,0xff,0xff,0xc1,0x7f,
    0x3c,0x00,0x1e,0x3c,0x00,0x0f,0x7c,0x80,0x07,0x78,0x80,0x07,0x78,0xc0,0x03,0x78,
    0xe0,0x01,0x78,0xe0,0x01,0xf8,0xf0,0x00,0xf0,0x78,0x00,0xf0,0x78,0x00,0xf0,0x3c,
    0x00,0xf0,0x3f,0x00,0xf0,0x1f,0x00,0xe0,0x0f,0x00,0xe0,0x0f,0x00,0xe0,0x07,0x00,
    0xe0,0x03,0x00,0xc0,0x03,0x00,0xfe,0x83,0xff,0xfe,0xc3,0xff,0xff,0xc3,0xff,0xfe,
    0xc3,0x7f,0x3c,0x00,0x3c,0x3c,0x1e,0x1e,0x1c,0x3e,0x1e,0x1e,0x3f,0x1e,0x1e,0x3f,
    0x0f,0x9e,0x3f,0x0f,0x9e,0x3f,0x07,0xde,0xbf,0x07,0xde,0xbd,0x07,0xfe,0xbd,0x03,
    0xfe,0xfc,0x03,0xfe,0xf8,0x03,0x7e,0xf8,0x01,0x7e,0xf8,0x01,0x3f,0xf8,0x01,0x3f,
    0xf8,0x00,0x1f,0xf8,0x00,0x1f,0xf8,0x00,0xe0,0x0f,0xfc,0xc1,0x7f,0xf8,0x0f,0xff,
    0xe1,0x1f,0xf8,0x83,0x3f,0xc0,0x07,0x3e,0x00,0x3e,0x7c,0x00,0xf0,0xf9,0x00,0xc0,
    0xf7,0x01,0x00,0xfe,0x03,0x00,0xf0,0x07,0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,0x00,
    0xfe,0x01,0x00,0xfc,0x07,0x00,0x7c,0x3e,0x00,0xf8,0xf0,0x01,0xf0,0xc1,0x07,0xe0,
    0x03,0x3e,0xe0,0x1f,0xfc,0xc3,0x7f,0xf8,0x0f,0xff,0xe1,0x3f,0xfc,0x83,0x7f,0x00,
    0xfe,0xc0,0xff,0x3f,0xfc,0xff,0x87,0x7f,0x7f,0xf0,0x87,0x07,0x3e,0xf0,0xc1,0x03,
    0x3c,0x3c,0x80,0xcf,0x03,0xf0,0x3d,0x00,0xfc,0x03,0x80,0x3f,0x00,0xe0,0x07,0x00,
    0x7c,0x00,0x80,0x07,0x00,0xf0,0x00,0x00,0x1e,0x00,0xc0,0x03,0x00,0x38,0x00,0xf8,
    0x7f,0x80,0xff,0x1f,0xf0,0xff,0x03,0xfe,0x3f,0x00,0xe0,0xff,0x1f,0xfc,0xff,0x83,
    0xff,0x7f,0xf0,0xff,0x07,0x0e,0xf8,0xe0,0x81,0x0f,0x3c,0xf8,0x80,0x83,0x0f,0x00,
    0xf8,0x00,0x80,0x0f,0x00,0x78,0x00,0x80,0x07,0x00,0x78,0x00,0xc0,0x07,0x06,0x7c,
    0xe0,0xc1,0x07,0x3c,0x7c,0x80,0xc3,0x07,0x78,0xf8,0xff,0x8f,0xff,0xff,0xf1,0xff,
    0x3f,0xfe,0xff,0x03,0x80,0x3f,0xe0,0x3f,0xf0,0x1f,0xf8,0x07,0x1c,0x00,0x0f,0x80,
    0x07,0xc0,0x03,0xe0,0x01,0x70,0x00,0x3c,0x00,0x1e,0x00,0x0f,0x80,0x07,0xc0,0x01,
    0xf0,0x00,0x78,0x00,0x3c,0x00,0x1e,0x00,0x07,0xc0,0x03,0xe0,0x01,0xf0,0x00,0x38,
    0x00,0x1e,0x00,0x0f,0x80,0x7f,0xc0,0x3f,0xe0,0x1f,0xf8,0x07,0x00,0x0e,0x78,0xc0,
    0x07,0x3c,0xe0,0x01,0x0f,0xf8,0x80,0x07,0x3c,0xe0,0x01,0x1e,0xf0,0x80,0x07,0x3c,
    0xc0,0x03,0x1e,0xf0,0x80,0x07,0x78,0xc0,0x03,0x1e,0xf0,0x00,0x0f,0x78,0xc0,0x03,
    0x3e,0xe0,0x01,0x0f,0x78,0x80,0x01,0xc0,0x3f,0xf0,0x0f,0xfe,0x03,0xff,0x00,0x1c,
    0x80,0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x03,
    0x70,0x00,0x1e,0x80,0x07,0xe0,0x01,0x38,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,
    0x07,0xe0,0x01,0x78,0xe0,0x1f,0xfc,0x07,0xff,0xc0,0x3f,0x00,0x00,0x04,0x00,0x1c,
    0x00,0x3c,0x00,0xfc,0x00,0xfc,0x03,0xfc,0x07,0x7c,0x1f,0x3e,0x7e,0x3e,0xf8,0x3e,
    0xe0,0x3f,0xc0,0x3f,0x00,0x07,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0x7f,0xff,
    0xff,0x7f,0xc7,0xe3,0x71,0x3c,0x0c,0x00,0xff,0x00,0xfc,0x3f,0xe0,0xff,0x07,0xfe,
    0x7f,0x00,0x80,0x07,0xf8,0x7f,0xe0,0xff,0x87,0xff,0x3f,0xfc,0xff,0xe3,0x07,0x3c,
    0x1e,0xc0,0xf3,0x00,0x3e,0x0f,0xfc,0xf1,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xf8,
    0xe7,0x07,0xc0,0x0f,0x00,0xe0,0x0f,0x00,0xe0,0x07,0x00,0xe0,0x07,0x00,0x80,0x07,
    0x00,0x80,0x07,0x00,0x80,0x07,0x00,0x80,0xe3,0x0f,0xc0,0xfb,0x3f,0xc0,0xff,0x7f,
    0xc0,0xff,0x7f,0xc0,0x0f,0xfc,0xc0,0x07,0xf8,0xe0,0x03,0xf0,0xe0,0x01,0xf0,0xe0,
    0x01,0xf0,0xe0,0x01,0xf8,0xf0,0x01,0x78,0xf0,0x01,0x7c,0xf0,0x03,0x3f,0xfe,0xff,
    0x1f,0xfe,0xff,0x0f,0xff,0xff,0x07,0x7e,0xfe,0x00,0x00,0xff,0x0c,0xfc,0xff,0xf0,
    0xff,0x8f,0xff,0xff,0xfc,0x80,0xcf,0x03,0x70,0x1e,0x00,0xe7,0x01,0x00,0x0f,0x00,
    0xf0,0x00,0x00,0x0f,0x00,0xf0,0x01,0x00,0x3f,0x80,0xe3,0xff,0x3f,0xfe,0xff,0xc1,
    0xff,0x0f,0xf0,0x1f,0x00,0x00,0x00,0x3f,0x00,0xe0,0x0f,0x00,0xf8,0x03,0x00,0xfe,
    0x00,0x00,0x1c,0x00,0x00,0x07,0x00,0xe0,0x01,0xfc,0x79,0xc0,0xff,0x1e,0xfc,0xff,
    0x83,0xff,0xff,0xf0,0x83,0x3f,0x3e,0x80,0x8f,0x07,0xe0,0xf3,0x01,0x70,0x3c,0x00,
    0x1e,0x0f,0x80,0xc7,0x03,0xf0,0xf1,0x01,0x7c,0xfc,0xc0,0x0f,0xfe,0xff,0x9f,0xff,
    0xff,0xc7,0xff,0xff,0xc1,0x1f,0x3f,0x00,0x7f,0x00,0xfe,0x07,0xfc,0x7f,0xf0,0xff,
    0xc7,0x0f,0x7c,0x1e,0xc0,0x7b,0x00,0xdc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0x1f,0x00,0xf0,0x03,0x3c,0xff,0xff,0xf9,0xff,0x8f,0xff,0x3f,0xf0,0x7f,0x00,
    0x00,0xe0,0x3f,0x00,0xfc,0x3f,0x00,0xff,0x1f,0xc0,0xff,0x07,0xe0,0x01,0x00,0x78,
    0x00,0x00,0x3c,0x00,0xe0,0xff,0x0f,0xf8,0xff,0x0f,0xfc,0xff,0x07,0xfc,0xff,0x01,
    0xf0,0x00,0x00,0x78,0x00,0x00,0x3c,0x00,0x00,0x0e,0x00,0x80,0x07,0x00,0xc0,0x03,
    0x00,0xe0,0x01,0x00,0x70,0x00,0x00,0x3c,0x00,0xe0,0xff,0x0f,0xf8,0xff,0x0f,0xfc,
    0xff,0x03,0xfc,0xff,0x01,0x00,0x3f,0x7f,0xf0,0xff,0x3f,0xfc,0xff,0x1f,0xff,0xff,
    0xc7,0x0f,0x7e,0xf0,0x01,0x3e,0x78,0x00,0x1e,0x1e,0x00,0x0f,0x0f,0x80,0x83,0x07,
    0xe0,0xc1,0x03,0xf8,0xe0,0x03,0x7e,0xf0,0x83,0x3f,0xf0,0xff,0x0f,0xf8,0xff,0x07,
    0xf0,0xdf,0x03,0xf0,0xe3,0x01,0x00,0xf0,0x00,0x00,0x3c,0x00,0x00,0x1e,0x00,0xc0,
    0x07,0xe0,0xff,0x03,0xf8,0xff,0x00,0xfc,0x3f,0x00,0xfc,0x07,0x00,0xe0,0x07,0x00,
    0xfc,0x01,0x00,0x7f,0x00,0xc0,0x1f,0x00,0x80,0x07,0x00,0xe0,0x00,0x00,0x3c,0x00,
    0x00,0xcf,0x0f,0xc0,0xff,0x0f,0xf0,0xff,0x03,0xfe,0xff,0x81,0x1f,0x7c,0xe0,0x03,
    0x1e,0x78,0x80,0x07,0x0e,0xe0,0xc0,0x03,0x3c,0xf0,0x00,0x0f,0x3c,0xc0,0x03,0x0f,
    0xf0,0xc0,0x01,0x1c,0xfe,0xc1,0xff,0xff,0xf8,0xff,0x1f,0xfe,0xfb,0x87,0x7f,0x00,
    0x7c,0x00,0xf0,0x01,0xc0,0x03,0x00,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
    0x0f,0xf0,0x3f,0xc0,0x7f,0x00,0xff,0x01,0x80,0x07,0x00,0x1e,0x00,0x38,0x00,0xf0,
    0x00,0xc0,0x03,0x00,0x0f,0x00,0x3c,0x00,0x70,0x00,0xe0,0x01,0xfe,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x7f,0x00,0xc0,0x07,0x00,0x1e,0x00,0xf0,0x00,0xc0,0x07,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xe0,0xff,0x07,0xff,0x3f,0xf8,0xff,0x01,
    0x00,0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0x0f,0x00,0x78,0x00,0xc0,0x01,0x00,0x0f,
    0x00,0x78,0x00,0xc0,0x03,0x00,0x0e,0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0xf0,
    0x00,0x80,0x03,0x00,0x1e,0x00,0xf8,0xe0,0xff,0x03,0xff,0x0f,0xfc,0x3f,0xc0,0x7f,
    0x00,0xe0,0x07,0x00,0xfe,0x00,0xc0,0x1f,0x00,0xf8,0x01,0x00,0x3c,0x00,0x80,0x07,
    0x00,0xf0,0x00,0x00,0x1e,0xff,0xc0,0xf1,0x1f,0x3c,0xfe,0x83,0xc7,0x3f,0xf0,0x7e,
    0x00,0xfe,0x07,0xc0,0x3f,0x00,0xfc,0x03,0x80,0xff,0x00,0xf0,0x1f,0x00,0xde,0x07,
    0xe0,0xf1,0x01,0x3c,0x7e,0xe0,0x87,0xff,0xfe,0xf0,0xdf,0x0f,0xff,0xfb,0xc1,0x3f,
    0x80,0x7f,0x00,0xff,0x01,0xfc,0x07,0xf0,0x1f,0x00,0x38,0x00,0xf0,0x00,0xc0,0x03,
    0x00,0x0f,0x00,0x3c,0x00,0x70,0x00,0xe0,0x01,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,
    0xe0,0x00,0xc0,0x03,0x00,0x0f,0x00,0x3c,0x00,0x70,0x00,0xe0,0x01,0xfe,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x7f,0xf8,0x3d,0x3c,0xf8,0x7f,0x7f,0xfc,0xff,0xff,0xfc,
    0xff,0xff,0xf0,0xf1,0xf1,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0x70,0x70,0xf0,0x78,0x78,
    0xf0,0x78,0x78,0x70,0x78,0x78,0x78,0x38,0x78,0x78,0x3c,0x38,0x78,0xfe,0xfc,0xf8,
    0xff,0xfc,0xf8,0xff,0xfc,0xfc,0x7f,0x7c,0x7c,0xf0,0xf3,0x03,0xfc,0xfe,0x83,0xff,
    0xff,0xc0,0xff,0x7f,0xe0,0x07,0x1f,0xf8,0x80,0x07,0x1e,0xe0,0x81,0x03,0x38,0xf0,
    0x00,0x0f,0x3c,0xc0,0x03,0x0f,0xf0,0xc0,0x03,0x3c,0x70,0x00,0x87,0x7f,0xf0,0xf7,
    0x3f,0xfe,0xff,0x87,0xff,0xfe,0xe1,0x1f,0x00,0x7f,0x00,0xfc,0x1f,0xf0,0xff,0x83,
    0xff,0x7f,0xfc,0xc0,0xef,0x03,0xf8,0x1e,0x00,0xff,0x00,0xf0,0x0f,0x00,0xff,0x00,
    0xf0,0x0f,0x80,0xf7,0x01,0x7c,0x3f,0xf0,0xe3,0xff,0x1f,0xfc,0xff,0x80,0xff,0x03,
    0xe0,0x0f,0x00,0xe0,0xc7,0x1f,0xe0,0xef,0xff,0xc0,0xff,0xff,0x83,0xff,0xff,0x07,
    0xf8,0x81,0x1f,0xf0,0x00,0x3e,0xf0,0x01,0x78,0xe0,0x01,0xf0,0xc0,0x03,0xe0,0x81,
    0x07,0xe0,0x03,0x0f,0xc0,0x03,0x1f,0xc0,0x07,0xfe,0xe0,0x07,0xfc,0xff,0x07,0xf8,
    0xff,0x07,0x78,0xff,0x07,0xf0,0xf8,0x01,0xe0,0x01,0x00,0xc0,0x03,0x00,0x80,0x03,
    0x00,0x80,0x07,0x00,0xc0,0xff,0x00,0xc0,0xff,0x01,0x80,0xff,0x03,0x00,0xff,0x07,
    0x00,0x00,0x00,0x3f,0x7e,0xe0,0xff,0xfe,0xf0,0xff,0x7f,0xf8,0xff,0x7f,0xfc,0xe0,
    0x0f,0x3e,0x80,0x0f,0x1e,0x80,0x0f,0x0e,0x80,0x07,0x0f,0x80,0x07,0x0f,0x80,0x07,
    0x0f,0xc0,0x07,0x1f,0xe0,0x03,0x3f,0xf0,0x03,0xfe,0xff,0x03,0xfe,0xff,0x03,0xf8,
    0xdf,0x03,0xf0,0xc7,0x01,0x00,0xe0,0x01,0x00,0xe0,0x01,0x00,0xe0,0x01,0x00,0xe0,
    0x01,0x00,0xfe,0x07,0x00,0xff,0x07,0x00,0xff,0x07,0x00,0xff,0x03,0xf0,0x87,0x0f,
    0xfc,0xf9,0x87,0xff,0xff,0xc3,0xff,0xff,0x80,0x7f,0x1c,0xf0,0x07,0x00,0x7c,0x00,
    0x00,0x0f,0x00,0xc0,0x03,0x00,0x70,0x00,0x00,0x1e,0x00,0x80,0x07,0x00,0xe0,0x01,
    0x80,0xff,0x3f,0xf0,0xff,0x0f,0xfc,0xff,0x03,0xff,0x7f,0x00,0x80,0x3f,0x83,0xff,
    0x0f,0xff,0x3f,0xfe,0xff,0x7c,0xe0,0xf1,0x00,0xc7,0x3f,0x00,0xff,0x1f,0xf8,0xff,
    0x00,0xfe,0x07,0x00,0x9f,0x03,0x78,0x1e,0xf0,0xfd,0xff,0xf3,0xff,0xc7,0xff,0x0f,
    0xf0,0x0f,0x00,0xe0,0x00,0xc0,0x01,0xc0,0x03,0x80,0x07,0x00,0x0f,0xc0,0xff,0xdf,
    0xff,0xbf,0xff,0x7f,0xff,0x7f,0xf0,0x00,0xe0,0x00,0xe0,0x01,0xc0,0x03,0x80,0x07,
    0x00,0x0f,0x00,0x0f,0x00,0x1e,0x00,0x3c,0xc0,0xf9,0xff,0xf7,0xff,0xc7,0xff,0x07,
    0xfe,0x00,0x7e,0xf0,0xff,0xc3,0xff,0x0f,0xfe,0x7e,0xf0,0xc7,0x03,0x3c,0x1e,0xe0,
    0xf1,0x00,0xcf,0x03,0x38,0x1e,0xe0,0xf1,0x00,0x8f,0x07,0x78,0x3c,0xe0,0xe3,0xc1,
    0x0f,0xff,0xff,0xf9,0xff,0x8f,0xff,0x7e,0xf0,0xf1,0x01,0xfe,0xc3,0xff,0xff,0xf1,
    0xff,0xff,0xf8,0xdf,0x7f,0xfc,0x87,0x07,0x78,0xc0,0x07,0x3e,0xc0,0x03,0x0f,0xe0,
    0xc1,0x03,0xf0,0xf1,0x01,0xf0,0x78,0x00,0x78,0x1e,0x00,0xbc,0x07,0x00,0xfe,0x03,
    0x00,0xfe,0x00,0x00,0x3f,0x00,0x80,0x1f,0x00,0x80,0x07,0x00,0x7e,0xc0,0xff,0x1f,
    0xf8,0xff,0x07,0xfe,0xff,0x00,0x7f,0x1e,0x8f,0x87,0xc7,0xe3,0xe1,0xf9,0x38,0x78,
    0x7f,0x0f,0xde,0xdf,0x81,0xff,0x7f,0xe0,0xff,0x1f,0xf8,0xfb,0x03,0x7e,0xfe,0x80,
    0x9f,0x1f,0xe0,0xc3,0x07,0xf8,0xf0,0x00,0x1e,0x3c,0x00,0xe0,0x0f,0x7f,0xf8,0xc7,
    0x3f,0xfc,0xe3,0x1f,0xfe,0xf0,0x07,0xfc,0xfc,0x00,0xfc,0x3f,0x00,0xfc,0x07,0x00,
    0xfc,0x01,0x00,0x7e,0x00,0xc0,0x7f,0x00,0xf0,0x7f,0x00,0xfc,0x7e,0x80,0x1f,0x7e,
    0xf0,0x0f,0xff,0xfc,0xc7,0x7f,0xfe,0xe3,0x3f,0xff,0xf1,0x0f,0xe0,0x1f,0xfc,0x83,
    0x7f,0xf8,0x0f,0xfe,0xe1,0x3f,0xf8,0x03,0x7f,0xc0,0x07,0x78,0x00,0x1f,0xf0,0x00,
    0x78,0xe0,0x03,0xe0,0x81,0x07,0x80,0x0f,0x0f,0x00,0x3c,0x1e,0x00,0xf0,0x78,0x00,
    0xc0,0xf7,0x00,0x00,0xfe,0x01,0x00,0xf8,0x07,0x00,0xe0,0x0f,0x00,0x80,0x1f,0x00,
    0x00,0x3c,0x00,0x00,0xf8,0x00,0x00,0xe0,0x01,0x00,0xc0,0x03,0x00,0x80,0x0f,0x00,
    0xf8,0x7f,0x00,0xf0,0xff,0x03,0xc0,0xff,0x07,0x00,0xfe,0x1f,0x00,0x00,0xf0,0xff,
    0x0f,0xff,0xff,0xf0,0xff,0x0f,0xff,0x7f,0x70,0xf0,0x83,0x87,0x1f,0x30,0x7c,0x00,
    0xe0,0x03,0x00,0x1f,0x00,0xfc,0x00,0xe0,0x03,0x00,0x1f,0x38,0xf8,0xc0,0xe3,0xff,
    0x3f,0xfe,0xff,0xe3,0xff,0x1f,0xfe,0xff,0x01,0x00,0x3c,0xc0,0x0f,0xf8,0x03,0x7e,
    0xc0,0x07,0xf0,0x00,0x1c,0x80,0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,0x03,0xf0,0x80,
    0x1f,0xf0,0x03,0xfc,0x00,0x7f,0x00,0x1f,0x80,0x07,0xe0,0x01,0x78,0x00,0x0e,0xc0,
    0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x0f,0xf0,0x03,0xf8,0x00,0x1c,0x00,0x80,0x80,
    0x83,0x07,0x0f,0x1e,0x1c,0x3c,0x78,0xf0,0xe0,0xc1,0xc1,0x83,0x07,0x0f,0x0e,0x1c,
    0x3c,0x78,0xf0,0xe0,0xc0,0xc1,0x83,0x07,0x0f,0x0e,0x1c,0x3c,0x78,0x70,0xc0,0x00,
    0x80,0x03,0xf0,0x01,0xfc,0x00,0x3f,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x0f,
    0xc0,0x01,0x78,0x00,0x1e,0x80,0x07,0xe0,0x0f,0xf0,0x03,0xfc,0x80,0x1f,0xf0,0x01,
    0x3c,0x00,0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,0x03,0xf0,0x00,0x3e,0xe0,0x07,0xfc,
    0x01,0x3f,0xc0,0x03,0x00,0xe0,0x01,0xc0,0x1f,0x38,0xff,0xe1,0xfd,0x9f,0xff,0xf9,
    0x3f,0x83,0xff,0x00,0xf8,0x03,0x80,0x07,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 23
 *  X offset: 0, Y offset: 38
 *  X size: 1, Y size: 1
 *                         
 ********************/
{0, 23, 0, 38, 1, 1},

/********************
 *  Character: '!', X advance: 23
 *  X offset: 9, Y offset: 13
 *  X size: 10, Y size: 24
 *                ####              
 *                #####             
 *               ######             
 *               ######             
 *               #####              
 *               #####              
 *               #####              
 *              ######              
 *              #####               
 *              #####               
 *              #####               
 *              ####                
 *              ####                
 *             #####                
 *             ####                 
 *             ####                 
 *             ###                  
 *                                  
 *                                  
 *             ###                  
 *           ######                 
 *           ######                 
 *           ######                 
 *            ####                  
 ********************/
{1, 23, 9, 13, 10, 24},

/********************
 *  Character: '"', X advance: 23
 *  X offset: 9, Y offset: 15
 *  X size: 13, Y size: 11
 *            #####   ####          
 *            ####    ####          
 *            ####   ####           
 *            ####   ####           
 *            ###    ####           
 *            ###    ###            
 *            ###    ###            
 *           ###     ###            
 *           ###     ##             
 *           ###     ##             
 *           ##      ##             
 ********************/
{31, 23, 9, 15, 13, 11},

/********************
 *  Character: '#', X advance: 23
 *  X offset: 3, Y offset: 13
 *  X size: 20, Y size: 28
 *              ###   ###     
 *             ####   ####    
 *             ####  ####     
 *             ###   ####     
 *            ####   ####     
 *            ####   ###      
 *            ####  ####      
 *           ####   ####      
 *        ################    
 *       ##################   
 *       ##################   
 *        ################    
 *          ####   ###        
 *          ####  ####        
 *         ####   ####        
 *         ####   ####        
 *      ################      
 *     #################      
 *     #################      
 *     ################       
 *        ####  ####          
 *       ####   ####          
 *       ####   ####          
 *       ####  ####           
 *       ###   ####           
 *      ####   ####           
 *      ####   ###            
 *      ###    ###            
 ********************/
{49, 23, 3, 13, 20, 28},

/********************
 *  Character: '$', X advance: 23
 *  X offset: 3, Y offset: 12
 *  X size: 20, Y size: 31
 *                 ###        
 *                 ###        
 *                 ###        
 *                ####        
 *             ############   
 *            #############   
 *           ##############   
 *          #####    #####    
 *         ####       ####    
 *         ####       ###     
 *         ####               
 *         ######             
 *         ##########         
 *          ###########       
 *           ###########      
 *               ########     
 *                  #####     
 *                   ####     
 *       ###         ####     
 *      ####         ####     
 *      ####        ####      
 *      ######    ######      
 *      ###############       
 *     ###############        
 *      ## ########           
 *            ###             
 *           ####             
 *           ####             
 *           ####             
 *           ###              
 *           ###              
 ********************/
{119, 23, 3, 12, 20, 31},

/********************
 *  Character: '%', X advance: 23
 *  X offset: 4, Y offset: 15
 *  X size: 18, Y size: 23
 *            #####            
 *          ########           
 *         ###    ###          
 *         ##      ##          
 *        ##       ##          
 *        ##       ##          
 *        ##      ##           
 *        ###   ###            
 *         #######     ###     
 *          ####    ######     
 *              ########       
 *           ########          
 *        #######              
 *      ######   ####          
 *      ###    #######         
 *            ###   ###        
 *           ##      ##        
 *          ##       ##        
 *          ##       ##        
 *          ##      ##         
 *          ###    ###         
 *           ########          
 *            #####            
 ********************/
{197, 23, 4, 15, 18, 23},

/********************
 *  Character: '&', X advance: 23
 *  X offset: 4, Y offset: 17
 *  X size: 17, Y size: 21
 *               #### #        
 *             #########       
 *            ##########       
 *           ###########       
 *          #####   ##         
 *          ####               
 *          ####               
 *          ####               
 *          #####              
 *          #####              
 *         #######             
 *        ########  #####      
 *       ########## #####      
 *       ####  #########       
 *      ####   ########        
 *      ####    ######         
 *      ####    ######         
 *      ###############        
 *      ################       
 *       ##############        
 *         ###### ####         
 ********************/
{249, 23, 4, 17, 17, 21},

/********************
 *  Character: ''', X advance: 23
 *  X offset: 13, Y offset: 15
 *  X size: 5, Y size: 11
 *                ####                  
 *                ####                  
 *                ###                   
 *               ####                   
 *               ####                   
 *               ###                    
 *               ###                    
 *               ###                    
 *               ###                    
 *               ##                     
 *               ##                     
 ********************/
{294, 23, 13, 15, 5, 11},

/********************
 *  Character: '(', X advance: 23
 *  X offset: 12, Y offset: 13
 *  X size: 11, Y size: 30
 *                      ###            
 *                     ####            
 *                    #####            
 *                    ####             
 *                   ####              
 *                  #####              
 *                  ####               
 *                 ####                
 *                 ####                
 *                ####                 
 *                ####                 
 *               ####                  
 *               ####                  
 *               ####                  
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              ####                   
 *              #####                  
 *               ####                  
 *               ####                  
 *               #####                 
 *               #####                 
 *                ####                 
 *                ###                  
 ********************/
{301, 23, 12, 13, 11, 30},

/********************
 *  Character: ')', X advance: 23
 *  X offset: 4, Y offset: 13
 *  X size: 11, Y size: 30
 *            ###              
 *           ####              
 *           #####             
 *           #####             
 *            ####             
 *            ####             
 *            #####            
 *             ####            
 *             ####            
 *             ####            
 *             ####            
 *             ####            
 *             ####            
 *             ####            
 *             ####            
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *           ####              
 *           ####              
 *          ####               
 *          ####               
 *         ####                
 *        ####                 
 *        ####                 
 *       ####                  
 *      ####                   
 *      ####                   
 *       #                     
 ********************/
{343, 23, 4, 13, 11, 30},

/********************
 *  Character: '*', X advance: 23
 *  X offset: 6, Y offset: 14
 *  X size: 16, Y size: 16
 *                 #             
 *               ####            
 *               ####            
 *               ####            
 *               ###             
 *         ###  ####   ###       
 *        ################       
 *        ################       
 *         ##############        
 *           #########           
 *            #######            
 *           ########            
 *          ##########           
 *         #####  ####           
 *         ####   ####           
 *         ###     ##            
 ********************/
{385, 23, 6, 14, 16, 16},

/********************
 *  Character: '+', X advance: 23
 *  X offset: 3, Y offset: 17
 *  X size: 20, Y size: 21
 *               ###          
 *               ###          
 *              ####          
 *              ####          
 *              ####          
 *              ####          
 *              ###           
 *             ####           
 *      ##################    
 *     ####################   
 *     ###################    
 *     ###################    
 *            ####            
 *            ####            
 *            ####            
 *            ###             
 *           ####             
 *           ####             
 *           ####             
 *           ###              
 *           ###              
 ********************/
{417, 23, 3, 17, 20, 21},

/********************
 *  Character: ',', X advance: 23
 *  X offset: 4, Y offset: 33
 *  X size: 10, Y size: 11
 *           #####             
 *          #####              
 *          ####               
 *         ####                
 *         ####                
 *        ####                 
 *        ###                  
 *       ###                   
 *       ###                   
 *      ###                    
 *      ##                     
 ********************/
{470, 23, 4, 33, 10, 11},

/********************
 *  Character: '-', X advance: 23
 *  X offset: 3, Y offset: 25
 *  X size: 20, Y size: 4
 *      ##################    
 *     ####################   
 *     ###################    
 *     ###################    
 ********************/
{484, 23, 3, 25, 20, 4},

/********************
 *  Character: '.', X advance: 23
 *  X offset: 9, Y offset: 33
 *  X size: 6, Y size: 5
 *             ###                  
 *           ######                 
 *           ######                 
 *           ######                 
 *            ####                  
 ********************/
{494, 23, 9, 33, 6, 5},

/********************
 *  Character: '/', X advance: 23
 *  X offset: 2, Y offset: 11
 *  X size: 22, Y size: 30
 *                       ### 
 *                      #### 
 *                     ####  
 *                     ####  
 *                    ####   
 *                   ####    
 *                  #####    
 *                  ####     
 *                 ####      
 *                #####      
 *                ####       
 *               ####        
 *              #####        
 *              ####         
 *             ####          
 *            #####          
 *            ####           
 *           ####            
 *          ####             
 *          ####             
 *         ####              
 *        ####               
 *        ####               
 *       ####                
 *      ####                 
 *     #####                 
 *     ####                  
 *    ####                   
 *    ####                   
 *    ###                    
 ********************/
{498, 23, 2, 11, 22, 30},

/********************
 *  Character: '0', X advance: 23
 *  X offset: 5, Y offset: 14
 *  X size: 18, Y size: 24
 *                #####         
 *              #########       
 *            ############      
 *           #############      
 *          ######   ######     
 *          ####      #####     
 *         ####        ####     
 *         ####        ####     
 *        ####         ####     
 *        ####         ####     
 *        ####         ###      
 *        ####        ####      
 *        ###         ####      
 *       ####         ####      
 *       ####         ####      
 *       ####         ###       
 *       ####        ####       
 *       ####       #####       
 *       ####       ####        
 *       #####    #####         
 *        #############         
 *        ############          
 *         #########            
 *           #####              
 ********************/
{581, 23, 5, 14, 18, 24},

/********************
 *  Character: '1', X advance: 23
 *  X offset: 3, Y offset: 13
 *  X size: 17, Y size: 24
 *               #####        
 *              ######        
 *            ########        
 *          ##########        
 *         ###### ###         
 *         ####  ####         
 *          #    ####         
 *               ####         
 *               ####         
 *               ###          
 *              ####          
 *              ####          
 *              ####          
 *              ###           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ###            
 *            ####            
 *      ################      
 *      ################      
 *      ################      
 *      ###############       
 ********************/
{635, 23, 3, 13, 17, 24},

/********************
 *  Character: '2', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 21, Y size: 24
 *               ######      
 *             ##########    
 *            ############   
 *           #############   
 *          #####     #####  
 *         #####       ####  
 *         ####        ####  
 *         ###         ####  
 *                    ####   
 *                   #####   
 *                  #####    
 *                 #####     
 *                #####      
 *              ######       
 *             ######        
 *           ######          
 *          ######           
 *        ######             
 *       ######      ###     
 *     ######        ###     
 *     #################     
 *     #################     
 *    ##################     
 *    #################      
 ********************/
{686, 23, 2, 14, 21, 24},

/********************
 *  Character: '3', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 19, Y size: 24
 *               #######       
 *            ###########      
 *           #############     
 *          ###############    
 *          ####      #####    
 *          ###        ####    
 *                     ####    
 *                    #####    
 *                   #####     
 *               ########      
 *              #######        
 *              #######        
 *              #########      
 *                  #####      
 *                   #####     
 *                    ####     
 *                    ####     
 *                    ####     
 *                   ####      
 *       ###       ######      
 *      ################       
 *      ###############        
 *       #############         
 *         ########            
 ********************/
{749, 23, 4, 14, 19, 24},

/********************
 *  Character: '4', X advance: 23
 *  X offset: 3, Y offset: 15
 *  X size: 18, Y size: 23
 *                  #####     
 *                 ######     
 *                ######      
 *               #######      
 *              ########      
 *             #########      
 *            ##### ####      
 *            ####  ###       
 *           ####  ####       
 *          ####   ####       
 *         ####    ####       
 *        #####    ###        
 *       #####    ####        
 *       ####     ####        
 *      ###############       
 *     #################      
 *     #################      
 *     ################       
 *               ####         
 *            ########        
 *           ##########       
 *           ##########       
 *           #########        
 ********************/
{806, 23, 3, 15, 18, 23},

/********************
 *  Character: '5', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 19, Y size: 24
 *           ##############    
 *           ##############    
 *           ##############    
 *           #############     
 *           ###               
 *          ####               
 *          ####               
 *          ####               
 *          ##########         
 *         #############       
 *         ##############      
 *         ##############      
 *         ####      #####     
 *                    ####     
 *                    ####     
 *                    ####     
 *                    ####     
 *                   ####      
 *                   ####      
 *       ###       #####       
 *      ################       
 *      ###############        
 *       ############          
 *         ########            
 ********************/
{858, 23, 4, 14, 19, 24},

/********************
 *  Character: '6', X advance: 23
 *  X offset: 6, Y offset: 14
 *  X size: 19, Y size: 24
 *                    ######     
 *                 ##########    
 *                ###########    
 *              #############    
 *             #######    ##     
 *            ######             
 *           #####               
 *           ####                
 *          #####                
 *          ####  #####          
 *         #### ########         
 *         ##############        
 *        ################       
 *        #######    #####       
 *        #####       ####       
 *        ####        ####       
 *        ####        ####       
 *        ####       #####       
 *        ####       ####        
 *        #####     #####        
 *         #############         
 *         ############          
 *          ##########           
 *           #######             
 ********************/
{915, 23, 6, 14, 19, 24},

/********************
 *  Character: '7', X advance: 23
 *  X offset: 7, Y offset: 14
 *  X size: 17, Y size: 24
 *          ################      
 *          ################      
 *         #################      
 *         #################      
 *         ####        ####       
 *         ###         ####       
 *                    ####        
 *                    ####        
 *                   ####         
 *                   ####         
 *                  ####          
 *                  ####          
 *                 ####           
 *                ####            
 *                ####            
 *               ####             
 *               ####             
 *              ####              
 *              ####              
 *             ####               
 *             ####               
 *            ####                
 *            ####                
 *            ###                 
 ********************/
{972, 23, 7, 14, 17, 24},

/********************
 *  Character: '8', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 19, Y size: 24
 *               ######        
 *             ##########      
 *            ############     
 *           ##############    
 *          #####     #####    
 *         #####       ####    
 *         ####        ####    
 *         ####        ####    
 *         ####       ####     
 *         #####     ####      
 *          ############       
 *           ##########        
 *          ###########        
 *         #############       
 *        #####     #####      
 *       ####        ####      
 *      ####         ####      
 *      ####         ####      
 *      ####        #####      
 *      ######     #####       
 *      ###############        
 *       ##############        
 *        ###########          
 *          #######            
 ********************/
{1023, 23, 4, 14, 19, 24},

/********************
 *  Character: '9', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 20, Y size: 24
 *               ######       
 *            ###########     
 *           #############    
 *          ##############    
 *         ######    ######   
 *         ####       #####   
 *        #####        ####   
 *        ####         ####   
 *        ####         ####   
 *        ####       ######   
 *        #####     #######   
 *        ################    
 *         ###############    
 *          ######### ####    
 *           ######  ####     
 *                  #####     
 *                 #####      
 *                #####       
 *               ######       
 *            #######         
 *      ############          
 *     ############           
 *     ##########             
 *      ######                
 ********************/
{1080, 23, 3, 14, 20, 24},

/********************
 *  Character: ':', X advance: 23
 *  X offset: 8, Y offset: 21
 *  X size: 9, Y size: 17
 *               ###               
 *             ######              
 *             ######              
 *             ######              
 *              ####               
 *                                 
 *                                 
 *                                 
 *                                 
 *                                 
 *                                 
 *                                 
 *            ###                  
 *          ######                 
 *          ######                 
 *          ######                 
 *           ####                  
 ********************/
{1140, 23, 8, 21, 9, 17},

/********************
 *  Character: ';', X advance: 23
 *  X offset: 5, Y offset: 21
 *  X size: 12, Y size: 23
 *               ###            
 *             ######           
 *             ######           
 *             ######           
 *              ###             
 *                              
 *                              
 *                              
 *                              
 *                              
 *                              
 *                              
 *            #####             
 *           #####              
 *           ####               
 *          ####                
 *          ####                
 *         ####                 
 *         ###                  
 *        ###                   
 *        ###                   
 *       ###                    
 *       ##                     
 ********************/
{1160, 23, 5, 21, 12, 23},

/********************
 *  Character: '<', X advance: 23
 *  X offset: 3, Y offset: 18
 *  X size: 20, Y size: 17
 *                      ###   
 *                    #####   
 *                  #######   
 *                #######     
 *             ########       
 *           ########         
 *         ########           
 *       ########             
 *     ########               
 *       ########             
 *         #######            
 *          ########          
 *            ########        
 *              ########      
 *                ######      
 *                 #####      
 *                   ###      
 ********************/
{1195, 23, 3, 18, 20, 17},

/********************
 *  Character: '=', X advance: 23
 *  X offset: 3, Y offset: 22
 *  X size: 21, Y size: 11
 *       ###################  
 *       ###################  
 *       ###################  
 *       ##################   
 *                            
 *                            
 *                            
 *      ##################    
 *     ####################   
 *     ####################   
 *     ###################    
 ********************/
{1238, 23, 3, 22, 21, 11},

/********************
 *  Character: '>', X advance: 23
 *  X offset: 2, Y offset: 19
 *  X size: 20, Y size: 17
 *        ##                 
 *       #####               
 *       #######             
 *        #######            
 *          #######          
 *           ########        
 *             ########      
 *               #######     
 *                ########   
 *              ########     
 *            ########       
 *          ########         
 *        ########           
 *      #######              
 *    #######                
 *    #####                  
 *    ###                    
 ********************/
{1267, 23, 2, 19, 20, 17},

/********************
 *  Character: '?', X advance: 23
 *  X offset: 8, Y offset: 15
 *  X size: 15, Y size: 23
 *               #######           
 *            ###########          
 *           #############         
 *          ###############        
 *          ####      #####        
 *          ####       ####        
 *          ###        ####        
 *                     ####        
 *                    ####         
 *                  ######         
 *               ########          
 *              ########           
 *             #######             
 *             #####               
 *             ####                
 *             ###                 
 *                                 
 *                                 
 *             ###                 
 *           ######                
 *           ######                
 *           ######                
 *            ####                 
 ********************/
{1310, 23, 8, 15, 15, 23},

/********************
 *  Character: '@', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 18, Y size: 30
 *                #####        
 *              ########       
 *            ###########      
 *           #####    ####     
 *           ###       ###     
 *          ###        ###     
 *         ####        ###     
 *         ###         ###     
 *        ###          ###     
 *        ###       ######     
 *        ###     #######      
 *        ##    #########      
 *       ###   #####  ###      
 *       ###   ###    ###      
 *       ###  ###    ###       
 *       ###  ###    ###       
 *      ###   ###    ###       
 *      ###   ####   ###       
 *      ###   ##########       
 *      ###    #########       
 *      ###      #######       
 *      ###                    
 *      ###                    
 *      ###                    
 *      ####                   
 *       ###                   
 *       ####     ###          
 *       ############          
 *        ##########           
 *         #######             
 ********************/
{1354, 23, 4, 14, 18, 30},

/********************
 *  Character: 'A', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 24, Y size: 22
 *          ##########      
 *         ###########      
 *         ############     
 *         ############     
 *             ########     
 *             ### ####     
 *            #### ####     
 *           ####  #####    
 *           ###    ####    
 *          ####    ####    
 *         ####     ####    
 *         ####     #####   
 *        ###############   
 *       ################   
 *       ################   
 *      #################   
 *      ####         #####  
 *     ####          #####  
 *   ########      #########
 *  ##########    ##########
 *  ##########    ##########
 *  #########     ######### 
 ********************/
{1422, 23, -1, 16, 24, 22},

/********************
 *  Character: 'B', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 22, Y size: 22
 *       ##############    
 *      ################   
 *      #################  
 *      ################## 
 *        ####       ##### 
 *        ####        #### 
 *        ####        #### 
 *        ###        ####  
 *       ####       #####  
 *       ###############   
 *       ##############    
 *       ###############   
 *       ################  
 *      ####        ###### 
 *      ####          #### 
 *      ####          #### 
 *      ###           #### 
 *     ####          ####  
 *   ####################  
 *  ####################   
 *  ###################    
 *  ################       
 ********************/
{1488, 23, 0, 16, 22, 22},

/********************
 *  Character: 'C', X advance: 23
 *  X offset: 3, Y offset: 16
 *  X size: 22, Y size: 22
 *               #######  ##  
 *            ############### 
 *           ################ 
 *          ################# 
 *         ######     ######  
 *        #####         ####  
 *       #####          ####  
 *       ####           ###   
 *      ####                  
 *      ####                  
 *      ####                  
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     #####          ####    
 *      ######      ######    
 *      #################     
 *       ###############      
 *        #############       
 *          ########          
 ********************/
{1549, 23, 3, 16, 22, 22},

/********************
 *  Character: 'D', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 23, Y size: 22
 *       #############     
 *      ################   
 *      #################  
 *      ################## 
 *        ###       ###### 
 *       ####         #####
 *       ####         #####
 *       ####          ####
 *       ####          ####
 *       ###           ####
 *      ####           ####
 *      ####           ####
 *      ####          #### 
 *      ###           #### 
 *     ####           #### 
 *     ####          ####  
 *     ####         #####  
 *     ####       ######   
 *   ##################    
 *  ##################     
 *  ################       
 *  ##############         
 ********************/
{1610, 23, 0, 16, 23, 22},

/********************
 *  Character: 'E', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 24, Y size: 22
 *       ###################
 *       ###################
 *      ####################
 *       ###################
 *         ####         ### 
 *         ####        #### 
 *         ###         #### 
 *        ####    ###   ##  
 *        ####   ####       
 *        ###########       
 *        ##########        
 *       ###########        
 *       ###########        
 *       ####   ####        
 *       ####   ###    ###  
 *       ###          ####  
 *      ####          ####  
 *      ####          ####  
 *   ####################   
 *   ####################   
 *   ####################   
 *   ####################   
 ********************/
{1674, 23, 0, 16, 24, 22},

/********************
 *  Character: 'F', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 25, Y size: 22
 *       ####################
 *      #####################
 *      #################### 
 *      #################### 
 *         ###          #### 
 *        ####          #### 
 *        ####          ###  
 *        ####   ####   ###  
 *        ####   ###         
 *        ##########         
 *       ###########         
 *       ###########         
 *       ###########         
 *       ###    ###          
 *      ####    ###          
 *      ####                 
 *      ####                 
 *      ####                 
 *   ############            
 *  #############            
 *  #############            
 *   ###########             
 ********************/
{1740, 23, 0, 16, 25, 22},

/********************
 *  Character: 'G', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 22, Y size: 22
 *              #######   ## 
 *            ############## 
 *          ################ 
 *         ################# 
 *        ######       ##### 
 *       #####          ###  
 *      #####           ###  
 *      ####                 
 *     ####                  
 *     ####                  
 *     ####                  
 *     ###       ##########  
 *    ####      ############ 
 *    ####      ###########  
 *    ####      ###########  
 *    ####            ###    
 *    #####          ####    
 *    #######       #####    
 *     ##################    
 *      ################     
 *       #############       
 *         #########         
 ********************/
{1809, 23, 2, 16, 22, 22},

/********************
 *  Character: 'H', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 25, Y size: 22
 *        ########   ########
 *       #########  #########
 *       #########  #########
 *        #######   ######## 
 *         ###         ###   
 *        ####        ####   
 *        ####        ####   
 *        ####        ####   
 *        ####        ###    
 *        ###############    
 *       ################    
 *       ################    
 *       ################    
 *       ###         ###     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ###      
 *   #########   ########    
 *   #########  ##########   
 *  ##########  ##########   
 *   ########   #########    
 ********************/
{1870, 23, 0, 16, 25, 22},

/********************
 *  Character: 'I', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *         ################  
 *        #################  
 *        #################  
 *         ###############   
 *              ####         
 *              ####         
 *              ####         
 *              ###          
 *             ####          
 *             ####          
 *             ####          
 *             ###           
 *            ####           
 *            ####           
 *            ####           
 *            ####           
 *            ###            
 *           ####            
 *     ################      
 *     ################      
 *    #################      
 *     ###############       
 ********************/
{1939, 23, 2, 16, 21, 22},

/********************
 *  Character: 'J', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 25, Y size: 22
 *             ##############
 *            ###############
 *            ###############
 *            ############## 
 *                  ####     
 *                  ####     
 *                  ####     
 *                  ###      
 *                 ####      
 *                 ####      
 *                 ####      
 *     #           ####      
 *    ###          ###       
 *   ####         ####       
 *   ####         ####       
 *   ####         ####       
 *   ####        ####        
 *   ###       ######        
 *  ################         
 *  ###############          
 *   #############           
 *      #######              
 ********************/
{1997, 23, 0, 16, 25, 22},

/********************
 *  Character: 'K', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 25, Y size: 22
 *       #########   ####### 
 *      ########### #########
 *      ########### #########
 *      ##########  ######## 
 *         ###      #####    
 *        ####     #####     
 *        ####   #####       
 *        ####  #####        
 *        ###  #####         
 *       #########           
 *       ##########          
 *       ###########         
 *       ##### ######        
 *       ####   #####        
 *      ####     #####       
 *      ####     #####       
 *      ####      ####       
 *      ####      #####      
 *   #########    ########   
 *  ###########    #######   
 *  ###########    #######   
 *  ##########     ######    
 ********************/
{2066, 23, 0, 16, 25, 22},

/********************
 *  Character: 'L', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 22, Y size: 22
 *       ############      
 *      #############      
 *      #############      
 *      ############       
 *          ####           
 *          ####           
 *          ###            
 *         ####            
 *         ####            
 *         ####            
 *         ###             
 *        ####             
 *        ####             
 *        ####         ##  
 *        ####        #### 
 *        ###         ###  
 *       ####        ####  
 *       ####        ####  
 *   ####################  
 *  #####################  
 *  ####################   
 *  ####################   
 ********************/
{2135, 23, 0, 16, 22, 22},

/********************
 *  Character: 'M', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 28, Y size: 22
 *       ######          ###### 
 *      #######         ########
 *      ########        ####### 
 *       #######       #######  
 *       #######      #######   
 *       #######      #######   
 *       ########    ########   
 *       ### ####   #### ###    
 *      #### ####  #########    
 *      #### ####  #### ####    
 *      #### #########  ####    
 *      ####  ########  ####    
 *      ###   #######   ###     
 *     ####   ######   ####     
 *     ####   ######   ####     
 *     ####    ####    ####     
 *     ###     ###     ###      
 *    ####            ####      
 *   ########      #########    
 *  ##########    ##########    
 *  #########     ##########    
 *  #########     #########     
 ********************/
{2196, 23, -1, 16, 28, 22},

/********************
 *  Character: 'N', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 26, Y size: 22
 *      ######       ######## 
 *     ########     ##########
 *     ########     ##########
 *     #########    ######### 
 *       #######       ####   
 *       ########      ####   
 *       ########      ###    
 *       #########    ####    
 *       ### #####    ####    
 *      ####  #####   ####    
 *      ####  #####   ####    
 *      ####   ####   ###     
 *      ####   ##### ####     
 *      ###     #### ####     
 *     ####     #########     
 *     ####      ########     
 *     ####      #######      
 *     ###       #######      
 *   ########     ######      
 *  ##########    ######      
 *  ##########     ####       
 *  #########      ####       
 ********************/
{2273, 23, 0, 16, 26, 22},

/********************
 *  Character: 'O', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 22, Y size: 22
 *              #######      
 *            ##########     
 *          ##############   
 *         ###############   
 *        ######     ######  
 *       #####        ###### 
 *      #####          ##### 
 *      ####            #### 
 *     ####             #### 
 *     ####             #### 
 *    ####              #### 
 *    ####              #### 
 *    ####             ####  
 *    ####             ####  
 *    ####            ####   
 *    #####          #####   
 *    ######        #####    
 *     ######     ######     
 *      ###############      
 *      ##############       
 *        ##########         
 *          ######           
 ********************/
{2345, 23, 2, 16, 22, 22},

/********************
 *  Character: 'P', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 22, Y size: 22
 *       #############     
 *      ################   
 *      #################  
 *      ################## 
 *        ####       ##### 
 *        ####        #### 
 *        ####        #### 
 *        ####        #### 
 *       ####         #### 
 *       ####        ####  
 *       ####      ######  
 *       ###############   
 *       ##############    
 *      ##############     
 *      ############       
 *      ####               
 *      ####               
 *      ###                
 *   ############          
 *  #############          
 *  #############          
 *  ############           
 ********************/
{2406, 23, 0, 16, 22, 22},

/********************
 *  Character: 'Q', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 22, Y size: 28
 *              #######      
 *            ##########     
 *          ##############   
 *         ###############   
 *        ######     ######  
 *       #####        ###### 
 *      #####          ##### 
 *      ####            #### 
 *     ####             #### 
 *     ####             #### 
 *    ####              #### 
 *    ####              #### 
 *    ####             ####  
 *    ####             ####  
 *    ####            ####   
 *    #####          #####   
 *    ######        #####    
 *     ######     ######     
 *     ################      
 *      ##############       
 *        ##########         
 *         #######           
 *        ###         #      
 *       #########   ###     
 *      #################    
 *     #################     
 *     ################      
 *     ####      #####       
 ********************/
{2467, 23, 2, 16, 22, 28},

/********************
 *  Character: 'R', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 23, Y size: 22
 *       #############     
 *      ################   
 *      #################  
 *      ################## 
 *         ###       ##### 
 *        ####        #### 
 *        ####        #### 
 *        ####        #### 
 *        ####       ####  
 *        ###      ######  
 *       ###############   
 *       ##############    
 *       ############      
 *       ############      
 *      ####     #####     
 *      ####      #####    
 *      ####      #####    
 *      ####       #####   
 *   #########      #######
 *  ###########     #######
 *  ###########      ######
 *  ##########       ##### 
 ********************/
{2544, 23, 0, 16, 23, 22},

/********************
 *  Character: 'S', X advance: 23
 *  X offset: 3, Y offset: 16
 *  X size: 21, Y size: 22
 *               ######  ###  
 *            ##############  
 *           ###############  
 *          ################  
 *         #####      #####   
 *        #####        ####   
 *        ####         ####   
 *        ####         ###    
 *        ######              
 *        ##########          
 *         ############       
 *          #############     
 *              ##########    
 *                  ######    
 *      ###           ####    
 *     ####           ####    
 *     ####          #####    
 *     ######      ######     
 *     #################      
 *     ################       
 *     ###############        
 *           #######          
 ********************/
{2608, 23, 3, 16, 21, 22},

/********************
 *  Character: 'T', X advance: 23
 *  X offset: 3, Y offset: 16
 *  X size: 21, Y size: 22
 *       ###################  
 *      ####################  
 *      ####################  
 *      ####################  
 *      ####    ####    ###   
 *      ###     ###    ####   
 *     ####    ####    ####   
 *     ####    ####    ####   
 *     ###     ####    ###    
 *             ###            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ###             
 *           ####             
 *           ####             
 *           ####             
 *      #############         
 *      #############         
 *     ##############         
 *      ############          
 ********************/
{2666, 23, 3, 16, 21, 22},

/********************
 *  Character: 'U', X advance: 23
 *  X offset: 3, Y offset: 16
 *  X size: 23, Y size: 22
 *      #########    ######## 
 *      #########   ##########
 *      #########   ######### 
 *      ########    ######### 
 *       ####          ####   
 *       ####          ####   
 *       ####          ###    
 *       ###          ####    
 *      ####          ####    
 *      ####          ####    
 *      ####          ###     
 *      ####         ####     
 *      ###          ####     
 *     ####          ####     
 *     ####          ####     
 *     ####         ####      
 *     #####       #####      
 *     ######     #####       
 *      ##############        
 *      #############         
 *       ###########          
 *         ######             
 ********************/
{2724, 23, 3, 16, 23, 22},

/********************
 *  Character: 'V', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 24, Y size: 22
 *   #########      #########
 *   ##########    ##########
 *   ##########    ##########
 *   #########     ######### 
 *     ####           ####   
 *     ####          ####    
 *     #####        ####     
 *      ####        ####     
 *      ####       ####      
 *      ####      ####       
 *      ####      ####       
 *      #####    ####        
 *       ####   ####         
 *       ####   ####         
 *       ####  ####          
 *       ##########          
 *       #########           
 *        #######            
 *        #######            
 *        ######             
 *        #####              
 *         ####              
 ********************/
{2788, 23, 1, 16, 24, 22},

/********************
 *  Character: 'W', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 24, Y size: 22
 *     #########     #########
 *     #########    ##########
 *    ##########    ##########
 *     #########    ######### 
 *      ####            ####  
 *      ####   ####    ####   
 *      ###    #####   ####   
 *     ####   ######   ####   
 *     ####   ######  ####    
 *     ####  #######  ####    
 *     ####  #######  ###     
 *     #### ######## ####     
 *     #### ### #### ####     
 *     ######## #### ###      
 *     #######  ########      
 *     #######   #######      
 *     ######    ######       
 *     ######    ######       
 *    ######     ######       
 *    ######     #####        
 *    #####      #####        
 *    #####      #####        
 ********************/
{2854, 23, 2, 16, 24, 22},

/********************
 *  Character: 'X', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 26, Y size: 22
 *       #######      ####### 
 *      #########    #########
 *      #########    ######## 
 *       #######     #######  
 *        #####      #####    
 *         #####    #####     
 *          #####  #####      
 *          ##### #####       
 *           #########        
 *            #######         
 *            ######          
 *            ######          
 *           ########         
 *          #########         
 *        #####  #####        
 *       #####    #####       
 *      #####     #####       
 *     #####       #####      
 *   ########     ########    
 *  #########    #########    
 *  #########    #########    
 *  ########     ########     
 ********************/
{2920, 23, -1, 16, 26, 22},

/********************
 *  Character: 'Y', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *     #######      #######  
 *    #########    ########  
 *    #########    ########  
 *     #######     #######   
 *       ####      #####     
 *       #####     ####      
 *        ####    ####       
 *        #####  ####        
 *        ##### ####         
 *         ########          
 *         #######           
 *          ######           
 *          #####            
 *          ####             
 *          ####             
 *          ####             
 *          ####             
 *          ###              
 *     ############          
 *    ##############         
 *    ##############         
 *    #############          
 ********************/
{2992, 23, 2, 16, 21, 22},

/********************
 *  Character: 'Z', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *         ################  
 *         ################  
 *         ################  
 *         ###############   
 *         ###       #####   
 *        ####      #####    
 *        ####     #####     
 *        ###     #####      
 *               #####       
 *              #####        
 *             ####          
 *            ####           
 *           ####            
 *         #####      ##     
 *        #####      ####    
 *       #####       ####    
 *      #####        ###     
 *     #####        ####     
 *     #################     
 *    ##################     
 *    ##################     
 *    #################      
 ********************/
{3050, 23, 2, 16, 21, 22},

/********************
 *  Character: '[', X advance: 23
 *  X offset: 8, Y offset: 14
 *  X size: 15, Y size: 30
 *                 #######         
 *                #########        
 *                #########        
 *                ########         
 *                ###              
 *               ####              
 *               ####              
 *               ####              
 *               ####              
 *               ###               
 *              ####               
 *              ####               
 *              ####               
 *              ####               
 *              ###                
 *             ####                
 *             ####                
 *             ####                
 *             ####                
 *             ###                 
 *            ####                 
 *            ####                 
 *            ####                 
 *            ###                  
 *           ####                  
 *           ####                  
 *           ########              
 *           ########              
 *           ########              
 *          ########               
 ********************/
{3108, 23, 8, 14, 15, 30},

/********************
 *  Character: '\', X advance: 23
 *  X offset: 8, Y offset: 11
 *  X size: 11, Y size: 30
 *           ###                   
 *          ####                   
 *          #####                  
 *           ####                  
 *           ####                  
 *           ####                  
 *           #####                 
 *            ####                 
 *            ####                 
 *            ####                 
 *             ####                
 *             ####                
 *             ####                
 *             ####                
 *              ####               
 *              ####               
 *              ####               
 *              ####               
 *               ####              
 *               ####              
 *               ####              
 *               ####              
 *                ####             
 *                ####             
 *                ####             
 *                #####            
 *                 ####            
 *                 ####            
 *                 ####            
 *                  ##             
 ********************/
{3165, 23, 8, 11, 11, 30},

/********************
 *  Character: ']', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 14, Y size: 30
 *           ########         
 *           ########         
 *          #########         
 *           ########         
 *               ###          
 *              ####          
 *              ####          
 *              ####          
 *              ####          
 *              ###           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ###            
 *            ####            
 *            ####            
 *            ####            
 *            ###             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ###              
 *          ####              
 *          ####              
 *      ########              
 *     #########              
 *     ########               
 *     ########               
 ********************/
{3207, 23, 3, 14, 14, 30},

/********************
 *  Character: '^', X advance: 23
 *  X offset: 6, Y offset: 14
 *  X size: 17, Y size: 12
 *                  #            
 *                 ###           
 *                ####           
 *               ######          
 *              ########         
 *             #########         
 *            ##### #####        
 *          #####   ######       
 *         #####     #####       
 *        #####       #####      
 *        ####        #####      
 *        ###          ###       
 ********************/
{3260, 23, 6, 14, 17, 12},

/********************
 *  Character: '_', X advance: 23
 *  X offset: -2, Y offset: 42
 *  X size: 24, Y size: 4
 *   #######################
 *   #######################
 *   ###################### 
 *  ####################### 
 ********************/
{3286, 23, -2, 42, 24, 4},

/********************
 *  Character: '`', X advance: 23
 *  X offset: 10, Y offset: 13
 *  X size: 6, Y size: 6
 *            ###                    
 *            ####                   
 *             ####                  
 *              ###                  
 *              ####                 
 *                ##                 
 ********************/
{3298, 23, 10, 13, 6, 6},

/********************
 *  Character: 'a', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 20, Y size: 17
 *            ########       
 *          ############     
 *         ##############    
 *         ##############    
 *                   ####    
 *           ############    
 *         ##############    
 *       ###############     
 *      ################     
 *     ######       ####     
 *     ####         ####     
 *    ####         #####     
 *    ####      #######      
 *    ####################   
 *    ####################   
 *     ###################   
 *       ########  ######    
 ********************/
{3303, 23, 2, 21, 20, 17},

/********************
 *  Character: 'b', X advance: 23
 *  X offset: 0, Y offset: 14
 *  X size: 24, Y size: 24
 *        ######            
 *       #######            
 *       ######             
 *       ######             
 *         ####             
 *         ####             
 *         ####             
 *         ###   #######    
 *        #### ###########  
 *        ################# 
 *        ################# 
 *        ######      ######
 *        #####        #####
 *       #####          ####
 *       ####           ####
 *       ####           ####
 *       ####          #####
 *      #####          #### 
 *      #####         ##### 
 *      ######      ######  
 *   ####################   
 *   ###################    
 *  ###################     
 *   ######  #######        
 ********************/
{3346, 23, 0, 14, 24, 24},

/********************
 *  Character: 'c', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 20, Y size: 17
 *             ########  ##   
 *           ##############   
 *         ################   
 *        #################   
 *       ######       #####   
 *       ####          ###    
 *      ####           ###    
 *      ####                  
 *     ####                   
 *     ####                   
 *     ####                   
 *     #####                  
 *     ######         ###     
 *      #################     
 *      ################      
 *       ##############       
 *         #########          
 ********************/
{3418, 23, 3, 21, 20, 17},

/********************
 *  Character: 'd', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 22, Y size: 24
 *                     ###### 
 *                    ####### 
 *                    ####### 
 *                    ####### 
 *                       ###  
 *                       ###  
 *                      ####  
 *             #######  ####  
 *           ########## ####  
 *         ################   
 *        #################   
 *       ######     #######   
 *      #####         #####   
 *      ####          #####   
 *     #####           ###    
 *     ####           ####    
 *     ####           ####    
 *     ####          #####    
 *     #####         #####    
 *     ######      ######     
 *      ####################  
 *      ####################  
 *       ###################  
 *         #######   ######   
 ********************/
{3461, 23, 3, 14, 22, 24},

/********************
 *  Character: 'e', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 19, Y size: 17
 *             #######        
 *           ##########       
 *         #############      
 *        ###############     
 *       ######      #####    
 *       ####         ####    
 *      ####           ###    
 *      ##################    
 *     ###################    
 *     ###################    
 *     ###################    
 *     ####                   
 *     ######        ####     
 *      #################     
 *      #################     
 *       ###############      
 *         ###########        
 ********************/
{3527, 23, 3, 21, 19, 17},

/********************
 *  Character: 'f', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 23, Y size: 24
 *                  ######### 
 *                ############
 *               #############
 *              ############# 
 *              ####          
 *             ####           
 *             ####           
 *         ###############    
 *        #################   
 *        #################   
 *         ###############    
 *            ####            
 *            ####            
 *            ####            
 *            ###             
 *           ####             
 *           ####             
 *           ####             
 *           ###              
 *          ####              
 *      ###############       
 *     #################      
 *     ################       
 *      ###############       
 ********************/
{3568, 23, 3, 14, 23, 24},

/********************
 *  Character: 'g', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 23, Y size: 25
 *            ######  #######
 *         ##################
 *        ###################
 *       ################### 
 *      ######     ######    
 *     #####        #####    
 *     ####          ####    
 *    ####           ####    
 *    ####           ###     
 *    ####          ####     
 *    ####         #####     
 *    #####       ######     
 *    ######     #######     
 *     ################      
 *     ################      
 *       ######### ####      
 *        ######   ####      
 *                 ####      
 *                ####       
 *                ####       
 *              #####        
 *      #############        
 *     #############         
 *     ############          
 *      #########            
 ********************/
{3637, 23, 2, 21, 23, 25},

/********************
 *  Character: 'h', X advance: 23
 *  X offset: 1, Y offset: 14
 *  X size: 22, Y size: 24
 *        ######            
 *       #######            
 *       #######            
 *       #######            
 *          ####            
 *          ###             
 *         ####             
 *         ####  ######     
 *         ##############   
 *         ##############   
 *        ################  
 *        ######     #####  
 *        #####       ####  
 *        ####        ####  
 *        ###         ###   
 *       ####        ####   
 *       ####        ####   
 *       ####        ####   
 *       ####        ####   
 *       ###         ###    
 *    ########     ######## 
 *   ##########   ######### 
 *   #########    ######### 
 *    ########    ########  
 ********************/
{3709, 23, 1, 14, 22, 24},

/********************
 *  Character: 'i', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 18, Y size: 24
 *              #####        
 *              #####        
 *              ####         
 *              ####         
 *                           
 *                           
 *                           
 *         #########         
 *        ##########         
 *        #########          
 *        #########          
 *             ####          
 *             ####          
 *             ###           
 *            ####           
 *            ####           
 *            ####           
 *            ####           
 *            ###            
 *           ####            
 *     #################     
 *    ##################     
 *    ##################     
 *    #################      
 ********************/
{3775, 23, 2, 14, 18, 24},

/********************
 *  Character: 'j', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 19, Y size: 32
 *                  #####    
 *                  ####     
 *                  ####     
 *                 #####     
 *                           
 *                           
 *                           
 *          #############    
 *         ##############    
 *         ##############    
 *         ##############    
 *                   ###     
 *                  ####     
 *                  ####     
 *                  ####     
 *                  ####     
 *                  ###      
 *                 ####      
 *                 ####      
 *                 ####      
 *                 ###       
 *                ####       
 *                ####       
 *                ####       
 *                ####       
 *                ###        
 *               ####        
 *              #####        
 *     #############         
 *     ############          
 *    ############           
 *     #########             
 ********************/
{3829, 23, 2, 14, 19, 32},

/********************
 *  Character: 'k', X advance: 23
 *  X offset: 1, Y offset: 14
 *  X size: 21, Y size: 24
 *        ######            
 *       #######            
 *       #######            
 *       ######             
 *         ####             
 *         ####             
 *         ####             
 *         ####   ########  
 *         ###   #########  
 *        ####   #########  
 *        ####   ########   
 *        #### ######       
 *        ##########        
 *        ########          
 *       ########           
 *       #########          
 *       #########          
 *       #### #####         
 *      ####   #####        
 *      ####   ######       
 *    ######    #########   
 *   #######    #########   
 *   ######    ##########   
 *   ######     ########    
 ********************/
{3905, 23, 1, 14, 21, 24},

/********************
 *  Character: 'l', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 18, Y size: 24
 *           ########        
 *          #########        
 *          #########        
 *          #########        
 *               ###         
 *              ####         
 *              ####         
 *              ####         
 *              ####         
 *              ###          
 *             ####          
 *             ####          
 *             ####          
 *             ####          
 *             ###           
 *            ####           
 *            ####           
 *            ####           
 *            ###            
 *           ####            
 *     #################     
 *    ##################     
 *    ##################     
 *    #################      
 ********************/
{3968, 23, 2, 14, 18, 24},

/********************
 *  Character: 'm', X advance: 23
 *  X offset: -1, Y offset: 21
 *  X size: 24, Y size: 17
 *     ###### ####    ####  
 *     ############ ####### 
 *    ######################
 *    ######################
 *      #####   #####   ####
 *      ####    ####    ####
 *      ####    ####    ####
 *      ###     ###     ####
 *     ####    ####     ####
 *     ####    ####     ### 
 *     ####    ####    #### 
 *     ###     ####    #### 
 *    ####     ###     #### 
 *   #######  ######   #####
 *  ########  ######   #####
 *  ########  ######  ######
 *  #######   #####   ##### 
 ********************/
{4022, 23, -1, 21, 24, 17},

/********************
 *  Character: 'n', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 22, Y size: 17
 *       ######  ######     
 *       ###### #########   
 *      #################   
 *       #################  
 *        ######     #####  
 *        #####       ####  
 *        ####        ####  
 *        ###         ###   
 *       ####        ####   
 *       ####        ####   
 *       ####        ####   
 *       ####        ####   
 *       ###         ###    
 *    ########     #######  
 *   ##########   ######### 
 *   #########    ######### 
 *    ########    ########  
 ********************/
{4073, 23, 1, 21, 22, 17},

/********************
 *  Character: 'o', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 20, Y size: 17
 *             #######        
 *           ###########      
 *         ##############     
 *        ################    
 *       ######      ######   
 *      #####         #####   
 *      ####           ####   
 *     ####            ####   
 *     ####            ####   
 *     ####            ####   
 *     ####           ####    
 *     #####         #####    
 *     ######      ######     
 *      ################      
 *       ##############       
 *        ###########         
 *          #######           
 ********************/
{4120, 23, 3, 21, 20, 17},

/********************
 *  Character: 'p', X advance: 23
 *  X offset: -2, Y offset: 21
 *  X size: 25, Y size: 25
 *       ######   #######    
 *      ####### ###########  
 *      #################### 
 *      #################### 
 *         ######      ######
 *         ####         #####
 *        #####          ####
 *        ####           ####
 *        ####           ####
 *        ####          #####
 *        ####          #### 
 *       #####         ##### 
 *       #######     ######  
 *       #################   
 *       ################    
 *      #### ###########     
 *      ####   ######        
 *      ####                 
 *      ####                 
 *      ###                  
 *     ####                  
 *   ##########              
 *  ###########              
 *  ###########              
 *  ###########              
 ********************/
{4163, 23, -2, 21, 25, 25},

/********************
 *  Character: 'q', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 24, Y size: 25
 *            ######   ###### 
 *         ########### #######
 *        ################### 
 *       #################### 
 *      ######     #######    
 *     #####         #####    
 *     ####          #####    
 *     ###           ####     
 *    ####           ####     
 *    ####           ####     
 *    ####          #####     
 *    #####        #####      
 *    ######      ######      
 *     #################      
 *     #################      
 *       ########## ####      
 *        #######   ###       
 *                 ####       
 *                 ####       
 *                 ####       
 *                 ####       
 *             ##########     
 *            ###########     
 *            ###########     
 *            ##########      
 ********************/
{4242, 23, 2, 21, 24, 25},

/********************
 *  Character: 'r', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 22, Y size: 17
 *       #######    #####   
 *       #######  ########  
 *      ################### 
 *       ################## 
 *          ########   ###  
 *         #######          
 *         #####            
 *         ####             
 *         ####             
 *         ###              
 *        ####              
 *        ####              
 *        ####              
 *    ###############       
 *   ################       
 *   ################       
 *   ###############        
 ********************/
{4317, 23, 1, 21, 22, 17},

/********************
 *  Character: 's', X advance: 23
 *  X offset: 4, Y offset: 21
 *  X size: 18, Y size: 17
 *             #######  ##     
 *           #############     
 *          ##############     
 *         ###############     
 *        #####      ####      
 *        ####        ###      
 *        ########             
 *        #############        
 *         #############       
 *             ##########      
 *                  #####      
 *       ###         ####      
 *       ####       #####      
 *      ################       
 *      ###############        
 *      ##############         
 *          ########           
 ********************/
{4364, 23, 4, 21, 18, 17},

/********************
 *  Character: 't', X advance: 23
 *  X offset: 4, Y offset: 16
 *  X size: 17, Y size: 22
 *           ###               
 *           ###               
 *          ####               
 *          ####               
 *          ####               
 *       ###############       
 *      ################       
 *      ################       
 *      ###############        
 *         ####                
 *         ###                 
 *        ####                 
 *        ####                 
 *        ####                 
 *        ####                 
 *       ####                  
 *       ####                  
 *       ####        ###       
 *       ################      
 *       ###############       
 *        #############        
 *          #######            
 ********************/
{4403, 23, 4, 16, 17, 22},

/********************
 *  Character: 'u', X advance: 23
 *  X offset: 4, Y offset: 21
 *  X size: 19, Y size: 17
 *       ######     #######    
 *      #######    ########    
 *      ######     #######     
 *      ######     #######     
 *        ####        ####     
 *        ####        ####     
 *        ####        ####     
 *       ####         ###      
 *       ####        ####      
 *       ####        ####      
 *       ####        ####      
 *       ####       #####      
 *       ####     ######       
 *       #################     
 *       #################     
 *        ######### ######     
 *          #####   #####      
 ********************/
{4450, 23, 4, 21, 19, 17},

/********************
 *  Character: 'v', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 23, Y size: 17
 *     #########    #########
 *    ##########   ##########
 *    ##########   ##########
 *     #########   ######### 
 *       ####        ####    
 *       #####      #####    
 *        ####      ####     
 *        ####     ####      
 *        #####   #####      
 *         ####   ####       
 *         ####  ####        
 *         #### ####         
 *         #########         
 *          #######          
 *          ######           
 *          ######           
 *           ####            
 ********************/
{4491, 23, 2, 21, 23, 17},

/********************
 *  Character: 'w', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 22, Y size: 17
 *      ######       ######## 
 *     #######      ######### 
 *     #######      ######### 
 *     ######        #######  
 *      ####   ####   ####    
 *      ####   ####   ####    
 *      ####  #####   ###     
 *      #### ####### ####     
 *      #### ####### ###      
 *      ################      
 *      ################      
 *      ####### #######       
 *      ######  #######       
 *      ######  ######        
 *      #####    #####        
 *      #####    ####         
 *      ####     ####         
 ********************/
{4540, 23, 3, 21, 22, 17},

/********************
 *  Character: 'x', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 23, Y size: 17
 *        #######    #######
 *       ########   ########
 *       ########   ########
 *       #######    ####### 
 *         ######  ######   
 *          ############    
 *           #########      
 *            #######       
 *            ######        
 *          #########       
 *         ###########      
 *        ###### ######     
 *      ######    ######    
 *    ########    ########  
 *   #########   #########  
 *   #########   #########  
 *   #########   ########   
 ********************/
{4587, 23, 1, 21, 23, 17},

/********************
 *  Character: 'y', X advance: 23
 *  X offset: -1, Y offset: 21
 *  X size: 26, Y size: 25
 *       ########     ########
 *       ########    #########
 *       ########    #########
 *       #######      ####### 
 *        #####        ####   
 *        #####       ####    
 *         ####      #####    
 *         ####      ####     
 *         #####    ####      
 *          ####   ####       
 *          ####   ####       
 *          ##### ####        
 *           ########         
 *           ########         
 *           #######          
 *           ######           
 *            ####            
 *           #####            
 *           ####             
 *          ####              
 *         #####              
 *   ############             
 *  ##############            
 *  #############             
 *   ############             
 ********************/
{4636, 23, -1, 21, 26, 25},

/********************
 *  Character: 'z', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 20, Y size: 17
 *         ################   
 *         ################   
 *         ################   
 *         ###############    
 *         ###     ######     
 *        ####    ######      
 *         ##    #####        
 *              #####         
 *             #####          
 *           ######           
 *          #####             
 *         #####      ###     
 *        #####      ####     
 *      #################     
 *      #################     
 *      ################      
 *      ################      
 ********************/
{4718, 23, 3, 21, 20, 17},

/********************
 *  Character: '{', X advance: 23
 *  X offset: 7, Y offset: 14
 *  X size: 14, Y size: 30
 *                   ####         
 *                 ######         
 *                #######         
 *                ######          
 *               #####            
 *               ####             
 *               ###              
 *              ####              
 *              ####              
 *              ####              
 *              ####              
 *              ###               
 *             ####               
 *          ######                
 *         ######                 
 *         ######                 
 *         #######                
 *           #####                
 *            ####                
 *            ####                
 *            ####                
 *            ###                 
 *           ####                 
 *           ####                 
 *           ####                 
 *           ####                 
 *           ######               
 *           ######               
 *            #####               
 *             ###                
 ********************/
{4761, 23, 7, 14, 14, 30},

/********************
 *  Character: '|', X advance: 23
 *  X offset: 9, Y offset: 14
 *  X size: 9, Y size: 30
 *                  #               
 *                 ###              
 *                ####              
 *                ####              
 *                ####              
 *                ###               
 *               ####               
 *               ####               
 *               ####               
 *               ####               
 *               ###                
 *              ####                
 *              ####                
 *              ####                
 *              ###                 
 *              ###                 
 *             ####                 
 *             ####                 
 *             ####                 
 *             ###                  
 *             ###                  
 *            ####                  
 *            ####                  
 *            ####                  
 *            ###                   
 *            ###                   
 *           ####                   
 *           ####                   
 *           ###                    
 *            ##                    
 ********************/
{4814, 23, 9, 14, 9, 30},

/********************
 *  Character: '}', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 14, Y size: 30
 *             ###             
 *            #####            
 *            ######           
 *            ######           
 *              ####           
 *              ####           
 *              ####           
 *              ####           
 *              ####           
 *              ###            
 *             ####            
 *             ####            
 *             ####            
 *             #######         
 *              ######         
 *              ######         
 *             ######          
 *            #####            
 *            ####             
 *            ###              
 *           ####              
 *           ####              
 *           ####              
 *           ###               
 *          ####               
 *         #####               
 *       ######                
 *      #######                
 *      ######                 
 *      ####                   
 ********************/
{4848, 23, 4, 14, 14, 30},

/********************
 *  Character: '~', X advance: 23
 *  X offset: 4, Y offset: 23
 *  X size: 19, Y size: 8
 *           ####              
 *         #######      ###    
 *        #########    ####    
 *       ###########  #####    
 *      #####  ###########     
 *       ##     #########      
 *               #######       
 *                ####         
 ********************/
{4901, 23, 4, 23, 19, 8},

};

const monoGFX_font_t monoGFX_FreeMonoBoldOblique_18pt = {bitmapBuffer, 4920, glyphs, 20};
