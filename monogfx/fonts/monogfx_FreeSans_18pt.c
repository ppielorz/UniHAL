#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[4955] =
{
    0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x6f,0x66,0x66,0x00,0xff,0xff,0xcf,
    0x3f,0xff,0xfc,0xf3,0xcf,0x3b,0xee,0xb8,0x61,0x04,0x01,0x00,0x87,0x03,0xe0,0x70,
    0x00,0x0e,0x0e,0xc0,0xc1,0x01,0x38,0x38,0x00,0x87,0x03,0xe0,0x70,0xe0,0xff,0xff,
    0xfc,0xff,0x9f,0xff,0xff,0x03,0x07,0x03,0xe0,0x70,0x00,0x0c,0x0e,0xc0,0xc1,0x01,
    0x38,0x38,0x00,0x07,0x03,0xff,0xff,0xe7,0xff,0xff,0xfc,0xff,0x1f,0x38,0x38,0x00,
    0x07,0x07,0xe0,0x70,0x00,0x0c,0x0e,0xc0,0xc1,0x01,0x38,0x38,0x00,0x07,0x07,0x00,
    0x00,0x03,0x00,0xfc,0x01,0xf0,0x7f,0x80,0xff,0x0f,0x7c,0xf3,0xc1,0x33,0x1c,0x1e,
    0xc3,0xe3,0x31,0x38,0x1e,0x83,0xe3,0x31,0x00,0x1e,0x03,0xe0,0x31,0x00,0x3e,0x03,
    0xc0,0x37,0x00,0xf8,0x07,0x00,0xff,0x07,0x80,0xff,0x01,0xb0,0x7f,0x00,0xc3,0x07,
    0x30,0xf8,0x00,0x03,0x7f,0x30,0xf0,0x0f,0x03,0xff,0x31,0xf8,0x1e,0x83,0xe7,0x37,
    0x7e,0xfc,0xff,0x83,0xff,0x0f,0xe0,0x1f,0x00,0x30,0x00,0x00,0x03,0x00,0x30,0x00,
    0x00,0x00,0xc0,0x00,0x78,0x00,0x70,0x00,0xff,0x00,0x1c,0xc0,0xff,0x00,0x0e,0xe0,
    0x70,0x80,0x03,0x38,0x70,0xc0,0x00,0x0c,0x30,0x70,0x00,0x06,0x18,0x18,0x00,0x03,
    0x0c,0x0e,0x80,0x03,0x87,0x03,0x80,0xc3,0xc1,0x01,0xc0,0xff,0x70,0x00,0xc0,0x3f,
    0x18,0x00,0x80,0x0f,0x0e,0x00,0x00,0x00,0x03,0x1e,0x00,0xc0,0xc1,0x3f,0x00,0x60,
    0xf0,0x3f,0x00,0x38,0x38,0x1c,0x00,0x0e,0x0e,0x1c,0x00,0x03,0x03,0x0c,0xc0,0x81,
    0x01,0x06,0x60,0xc0,0x00,0x03,0x38,0xe0,0xc0,0x01,0x0c,0xe0,0x70,0x00,0x07,0xf0,
    0x3f,0xc0,0x01,0xf0,0x0f,0x60,0x00,0xe0,0x01,0x00,0x1f,0x00,0xc0,0x1f,0x00,0xf8,
    0x1f,0x00,0x3c,0x1e,0x00,0x0f,0x0e,0x80,0x07,0x07,0xc0,0x83,0x03,0xe0,0xc1,0x01,
    0xe0,0xf1,0x00,0xf0,0x3c,0x00,0xf0,0x0f,0x00,0xf0,0x03,0x00,0x78,0x00,0x00,0x7f,
    0x00,0xe0,0x73,0x78,0xf8,0x78,0x3c,0x1e,0x38,0x9e,0x0f,0xb8,0xc7,0x03,0xfc,0xe3,
    0x01,0xfc,0xf0,0x00,0x3c,0xf8,0x00,0x3e,0x7c,0x80,0x3f,0xfc,0xf0,0x1f,0xfc,0x7f,
    0x1e,0xfc,0x0f,0x1e,0xf8,0x01,0x1f,0xff,0xff,0xef,0x6e,0x04,0x80,0x81,0x81,0x03,
    0x03,0x07,0x06,0x0e,0x1c,0x1c,0x38,0x78,0xf0,0xe0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,
    0x3c,0x78,0xf0,0xe0,0x81,0x03,0x07,0x1e,0x3c,0x70,0xe0,0x80,0x03,0x07,0x0c,0x38,
    0x60,0xc0,0x01,0x03,0x0c,0x03,0x0c,0x38,0x60,0xc0,0x01,0x03,0x0e,0x1c,0x70,0xe0,
    0xc0,0x83,0x07,0x0e,0x1c,0x78,0xf0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,0x3c,0x38,0x78,
    0xf0,0xe0,0xc1,0x81,0x83,0x03,0x07,0x07,0x0e,0x0c,0x1c,0x18,0x18,0x00,0x60,0x00,
    0x06,0x60,0x60,0x66,0xff,0xcf,0x3f,0xf0,0x80,0x1f,0x98,0xc1,0x39,0x08,0x01,0x00,
    0x03,0x00,0x0c,0x00,0x30,0x00,0xc0,0x00,0x00,0x03,0x00,0x0c,0x00,0x30,0xc0,0xff,
    0xff,0xff,0xff,0xff,0xff,0x0f,0x30,0x00,0xc0,0x00,0x00,0x03,0x00,0x0c,0x00,0x30,
    0x00,0xc0,0x00,0x00,0x03,0x00,0xff,0xff,0xcc,0xcc,0x36,0xff,0xff,0xff,0x07,0xff,
    0xff,0x00,0x06,0x38,0xc0,0x00,0x06,0x38,0xc0,0x00,0x06,0x30,0xc0,0x00,0x06,0x30,
    0xc0,0x00,0x06,0x30,0xc0,0x00,0x06,0x30,0xc0,0x00,0x06,0x30,0xc0,0x00,0x06,0x30,
    0xc0,0x01,0x06,0x30,0xc0,0x01,0x06,0x00,0xc0,0x0f,0xc0,0xff,0x80,0xff,0x07,0x1f,
    0x3e,0x3c,0xf0,0x78,0x80,0xe7,0x01,0x9e,0x07,0x78,0x0f,0xc0,0x3f,0x00,0xff,0x00,
    0xfc,0x03,0xf0,0x0f,0xc0,0x3f,0x00,0xff,0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x3f,0x00,
    0xff,0x00,0xbc,0x07,0x78,0x1e,0xe0,0x79,0x80,0xc7,0x03,0x0f,0x1f,0x3e,0xf8,0x7f,
    0xc0,0xff,0x00,0xfc,0x00,0x80,0x01,0x03,0x07,0x0e,0x1e,0xff,0xff,0xff,0xe0,0xc1,
    0x83,0x07,0x0f,0x1e,0x3c,0x78,0xf0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,0x3c,0x78,0xf0,
    0xe0,0xc1,0x83,0x07,0xe0,0x1f,0xe0,0xff,0xc1,0xff,0x8f,0x1f,0x7e,0x1e,0xe0,0x79,
    0x80,0xff,0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x03,0x00,0x0f,0x00,0x3e,0x00,0x78,0x00,
    0xf0,0x01,0xe0,0x03,0xe0,0x07,0xe0,0x07,0xc0,0x0f,0x80,0x0f,0x00,0x0f,0x00,0x1e,
    0x00,0x1c,0x00,0x70,0x00,0xc0,0x00,0x80,0x03,0x00,0xfe,0xff,0xfb,0xff,0xef,0xff,
    0x3f,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,0xe0,0xc3,0x03,0x3e,0x0f,0xe0,0x79,
    0x00,0xcf,0x03,0x78,0x00,0xc0,0x03,0x00,0x0f,0x00,0x7c,0x00,0xfe,0x01,0xf0,0x03,
    0x80,0x7f,0x00,0x80,0x0f,0x00,0x78,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,0x1f,0x00,
    0xff,0x00,0xf8,0x0f,0xe0,0x7b,0x00,0xcf,0x0f,0x7e,0xfc,0xff,0xc1,0xff,0x03,0xf0,
    0x07,0x00,0x00,0x38,0x00,0x78,0x00,0xf8,0x00,0xf0,0x01,0xf0,0x03,0xe0,0x07,0xe0,
    0x0f,0xe0,0x1e,0xc0,0x3c,0xc0,0x78,0xc0,0xf1,0x80,0xe1,0x81,0xc1,0x83,0x83,0x07,
    0x03,0x0f,0x03,0x1e,0x06,0x3c,0x06,0x78,0xfc,0xff,0xff,0xff,0xff,0xff,0x1f,0x80,
    0x07,0x00,0x0f,0x00,0x1e,0x00,0x3c,0x00,0x78,0x00,0xf0,0x00,0xf8,0xff,0xc1,0xff,
    0x0f,0xfe,0x7f,0x70,0x00,0x80,0x03,0x00,0x0e,0x00,0x70,0x00,0x80,0x03,0x00,0x1c,
    0x00,0xe0,0xfc,0x00,0xff,0x1f,0xf8,0xff,0xe3,0x07,0x1f,0x0f,0xf0,0x01,0x00,0x0f,
    0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0xff,0x00,0xf8,0x0f,0xe0,
    0x79,0x80,0xcf,0x0f,0x3e,0xfc,0xff,0xc0,0xff,0x03,0xf0,0x07,0x00,0x80,0x1f,0x80,
    0xff,0x80,0xff,0x07,0x1e,0x3e,0x3c,0xf0,0x79,0x80,0xe7,0x01,0x9e,0x03,0x00,0x0e,
    0x00,0x3c,0x00,0xf0,0xf8,0xc1,0xfb,0x1f,0xff,0xff,0xfc,0xe1,0xf7,0x01,0xde,0x07,
    0xf8,0x0f,0xc0,0x3f,0x00,0xff,0x00,0xfc,0x03,0xf0,0x0e,0xc0,0x7b,0x80,0xe7,0x03,
    0x1e,0x1f,0x3e,0xf8,0x7f,0xc0,0xff,0x00,0xfc,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
    0x3f,0x00,0x70,0x00,0xc0,0x01,0x80,0x03,0x00,0x0f,0x00,0x1c,0x00,0x38,0x00,0xe0,
    0x00,0xc0,0x01,0x80,0x07,0x00,0x0e,0x00,0x3c,0x00,0x70,0x00,0xc0,0x01,0x80,0x07,
    0x00,0x0e,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x01,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,
    0xe0,0x00,0xc0,0x03,0x00,0x0f,0x00,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,0xe0,
    0xe3,0x03,0x3e,0x0f,0xe0,0x79,0x00,0xcf,0x03,0x78,0x1e,0xc0,0xe3,0x01,0x0f,0x1f,
    0x7c,0xe0,0xff,0x00,0xfe,0x03,0xfc,0x7f,0xf0,0xc1,0xc7,0x03,0x78,0x1f,0xc0,0x7f,
    0x00,0xfc,0x03,0xe0,0x1f,0x00,0xff,0x00,0xf8,0x0f,0xe0,0x7b,0x00,0x8f,0x0f,0x3e,
    0xf8,0xff,0x81,0xff,0x03,0xf0,0x07,0x00,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,
    0xe0,0xe3,0x03,0x1e,0x0f,0xe0,0x3d,0x00,0xee,0x01,0x70,0x0f,0x80,0x7f,0x00,0xfc,
    0x03,0xe0,0x3f,0x80,0xef,0x01,0x7e,0x3f,0xf8,0xf3,0xff,0x1f,0xfe,0xf7,0xc0,0x8f,
    0x07,0x00,0x3c,0x00,0xe0,0x00,0x80,0xe7,0x01,0x3c,0x0f,0xe0,0xf8,0x80,0x87,0x0f,
    0x1f,0xf8,0x7f,0x80,0xff,0x01,0xf0,0x03,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
    0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xcc,0x6e,0x36,
    0x00,0x00,0x03,0x00,0x0f,0x00,0x3f,0x80,0x3f,0x80,0x3f,0xc0,0x1f,0xc0,0x1f,0xc0,
    0x0f,0x00,0x0f,0x00,0x7c,0x00,0xe0,0x0f,0x00,0xfe,0x00,0xe0,0x0f,0x00,0xfc,0x01,
    0xc0,0x1f,0x00,0xfc,0x00,0x80,0x03,0x00,0x08,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,
    0x03,0x00,0x3c,0x00,0xf0,0x07,0x00,0x7f,0x00,0xf0,0x07,0x00,0xfe,0x00,0xe0,0x0f,
    0x00,0xfc,0x00,0xc0,0x03,0x80,0x0f,0x80,0x3f,0xc0,0x1f,0xc0,0x1f,0xc0,0x1f,0xe0,
    0x0f,0xc0,0x0f,0x00,0x07,0x00,0x04,0x00,0x00,0xe0,0x0f,0xf0,0x7f,0xf0,0xff,0xf1,
    0xc1,0xe7,0x01,0xef,0x01,0xfc,0x03,0xf8,0x07,0xf0,0x00,0xe0,0x01,0xe0,0x03,0xc0,
    0x03,0xc0,0x07,0xc0,0x07,0xc0,0x07,0xc0,0x03,0xc0,0x03,0xc0,0x07,0x80,0x07,0x00,
    0x0f,0x00,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x03,0x80,0x07,
    0x00,0x0f,0x00,0x1e,0x00,0x00,0x80,0xff,0x00,0x00,0x00,0xff,0x7f,0x00,0x00,0xfc,
    0xff,0x1f,0x00,0xf0,0x07,0xf8,0x03,0x80,0x1f,0x00,0x7e,0x00,0x7c,0x00,0x80,0x0f,
    0xe0,0x03,0x00,0xf0,0x01,0x1f,0x00,0x00,0x3e,0xf8,0x00,0x00,0xc0,0x87,0x07,0xf0,
    0x03,0x78,0x3c,0xc0,0x7f,0x87,0xc7,0x03,0x1e,0x7e,0xf8,0x1e,0xf0,0xc0,0x07,0xef,
    0x81,0x07,0x3c,0xf0,0x0f,0x3c,0xc0,0x03,0xff,0xc0,0x03,0x3c,0xf0,0x0f,0x1e,0xc0,
    0x03,0xff,0xe0,0x01,0x1c,0xf0,0x0f,0x1e,0xc0,0x81,0xf7,0xe0,0x01,0x1e,0x78,0x0f,
    0x1e,0xe0,0xc0,0xf3,0xe0,0x01,0x0f,0x3c,0x1e,0x3c,0xf0,0xe0,0xe1,0xc1,0xc7,0x1f,
    0x0f,0x3e,0xf8,0xef,0x7f,0xc0,0x07,0x3e,0xfc,0x01,0xf8,0x00,0x00,0x00,0x00,0x1f,
    0x00,0x00,0x00,0xe0,0x07,0x00,0x00,0x00,0xfc,0x03,0x38,0x00,0x00,0xff,0xff,0x03,
    0x00,0xc0,0xff,0x3f,0x00,0x00,0xe0,0x7f,0x00,0x00,0x00,0x3e,0x00,0x00,0x7e,0x00,
    0x00,0x7e,0x00,0x00,0x7f,0x00,0x00,0xf7,0x00,0x80,0xf7,0x00,0x80,0xe7,0x00,0x80,
    0xe3,0x01,0xc0,0xe3,0x01,0xc0,0xe3,0x01,0xc0,0xc1,0x03,0xe0,0xc1,0x03,0xe0,0xc1,
    0x03,0xe0,0x80,0x07,0xf0,0x80,0x07,0xf0,0x80,0x07,0x70,0x00,0x0f,0xf8,0xff,0x0f,
    0xf8,0xff,0x0f,0xf8,0xff,0x1f,0x3c,0x00,0x1e,0x3c,0x00,0x1e,0x1e,0x00,0x3c,0x1e,
    0x00,0x3c,0x1e,0x00,0x78,0x0f,0x00,0x78,0x0f,0x00,0x78,0x0f,0x00,0xf0,0xff,0x7f,
    0xe0,0xff,0x3f,0xfc,0xff,0x8f,0x07,0xe0,0xf3,0x00,0xf8,0x1e,0x00,0xde,0x03,0xc0,
    0x7b,0x00,0x78,0x0f,0x00,0xef,0x01,0xe0,0x3d,0x00,0x9e,0x07,0xe0,0xf1,0xff,0x1f,
    0xfe,0xff,0xc3,0xff,0xff,0x78,0x00,0x7c,0x0f,0x00,0xef,0x01,0xe0,0x3f,0x00,0xf8,
    0x07,0x00,0xff,0x00,0xe0,0x1f,0x00,0xfc,0x03,0x80,0x7f,0x00,0x78,0x0f,0x80,0xef,
    0xff,0xff,0xfc,0xff,0x8f,0xff,0x7f,0x00,0x00,0xfe,0x00,0xc0,0xff,0x07,0xe0,0xff,
    0x0f,0xf0,0x81,0x1f,0xf8,0x00,0x1e,0x7c,0x00,0x3c,0x3c,0x00,0x3c,0x1e,0x00,0x78,
    0x1e,0x00,0x78,0x1e,0x00,0x00,0x0f,0x00,0x00,0x0f,0x00,0x00,0x0f,0x00,0x00,0x0f,
    0x00,0x00,0x0f,0x00,0x00,0x0f,0x00,0x00,0x0f,0x00,0x00,0x0f,0x00,0x00,0x1f,0x00,
    0xf0,0x1e,0x00,0xf0,0x1e,0x00,0x78,0x3c,0x00,0x78,0x7c,0x00,0x7c,0xf8,0x00,0x3e,
    0xf0,0x01,0x1f,0xe0,0xff,0x0f,0xc0,0xff,0x07,0x00,0xff,0x00,0xff,0x3f,0xc0,0xff,
    0x7f,0xf0,0xff,0x3f,0x3c,0x80,0x1f,0x0f,0x80,0xcf,0x03,0xc0,0xf3,0x00,0xf0,0x3d,
    0x00,0x78,0x0f,0x00,0xde,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,
    0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,
    0x3f,0x00,0x78,0x0f,0x00,0xde,0x03,0xc0,0xf7,0x00,0xf0,0x3c,0x00,0x3e,0x0f,0xe0,
    0xc7,0xff,0xff,0xf0,0xff,0x1f,0xfc,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0x1f,0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0x0f,0x00,0x78,0x00,
    0xc0,0x03,0x00,0x1e,0x00,0xf0,0xff,0xbf,0xff,0xff,0xfd,0xff,0xef,0x01,0x00,0x0f,
    0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,
    0x01,0x00,0x0f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x03,0x00,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,0x00,
    0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0xff,0xff,0xfc,0xff,0xf3,0xff,0xcf,0x03,0x00,
    0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,
    0x03,0x00,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x00,0xfc,0x03,0x00,0xfe,
    0x7f,0x00,0xfe,0xff,0x07,0xfc,0x81,0x3f,0xf8,0x00,0xf8,0xf1,0x01,0x80,0xc7,0x03,
    0x00,0xbe,0x0f,0x00,0xf0,0x1e,0x00,0x00,0x78,0x00,0x00,0xf0,0x00,0x00,0xc0,0x03,
    0x00,0x00,0x0f,0x00,0x00,0x3c,0x00,0xfe,0xff,0x00,0xf8,0xff,0x03,0xe0,0xff,0x0f,
    0x00,0xc0,0x3f,0x00,0x00,0xef,0x01,0x00,0xbc,0x07,0x00,0xf0,0x3e,0x00,0xe0,0xf3,
    0x00,0x80,0xcf,0x07,0x00,0x3f,0x7e,0x00,0xfe,0xf0,0x07,0xde,0x83,0xff,0x3f,0x0e,
    0xf8,0x7f,0x38,0x80,0x7f,0xc0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,
    0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,
    0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
    0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,
    0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,
    0x3f,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,
    0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x00,
    0xf0,0x00,0xf0,0x00,0xf0,0x00,0xf0,0x0f,0xf0,0x0f,0xf0,0x0f,0xf0,0x0f,0xf0,0x1f,
    0x78,0x3e,0x7c,0xfe,0x3f,0xfc,0x1f,0xf0,0x07,0x0f,0x00,0xfe,0x03,0xc0,0xf7,0x00,
    0xf8,0x3c,0x00,0x1f,0x0f,0xe0,0xc3,0x03,0x7c,0xf0,0x80,0x0f,0x3c,0xf0,0x01,0x0f,
    0x3c,0xc0,0x83,0x07,0xf0,0xf0,0x00,0x3c,0x1e,0x00,0xcf,0x0f,0xc0,0xfb,0x07,0xf0,
    0xef,0x01,0xfc,0xf1,0x00,0x3f,0x7c,0xc0,0x07,0x1e,0xf0,0x00,0x0f,0x3c,0xc0,0x07,
    0x0f,0xe0,0xc1,0x03,0xf0,0xf0,0x00,0x78,0x3c,0x00,0x1e,0x0f,0x00,0xcf,0x03,0x80,
    0xf7,0x00,0xe0,0x3d,0x00,0xf0,0x0f,0x00,0x1e,0x00,0x3c,0x00,0x78,0x00,0xf0,0x00,
    0xe0,0x01,0xc0,0x03,0x80,0x07,0x00,0x0f,0x00,0x1e,0x00,0x3c,0x00,0x78,0x00,0xf0,
    0x00,0xe0,0x01,0xc0,0x03,0x80,0x07,0x00,0x0f,0x00,0x1e,0x00,0x3c,0x00,0x78,0x00,
    0xf0,0x00,0xe0,0x01,0xc0,0x03,0x80,0x07,0x00,0x0f,0x00,0xfe,0xff,0xff,0xff,0xff,
    0xff,0x0f,0x3f,0x00,0xe0,0xff,0x01,0x00,0xff,0x0f,0x00,0xf8,0xff,0x00,0xe0,0xff,
    0x07,0x00,0xff,0x3f,0x00,0xf8,0xbf,0x03,0xe0,0xfe,0x1d,0x00,0xf7,0xef,0x00,0xb8,
    0x7f,0x0e,0xe0,0xfc,0x73,0x00,0xe7,0x9f,0x03,0x38,0xff,0x38,0xe0,0xf8,0xc7,0x01,
    0xc7,0x3f,0x0e,0x38,0xfe,0xe1,0xe0,0xf0,0x0f,0x07,0x87,0x7f,0x38,0x38,0xfc,0x83,
    0xe3,0xe0,0x1f,0x1c,0x07,0xff,0xe0,0x38,0xf8,0x07,0xee,0xc0,0x3f,0x70,0x07,0xfe,
    0x81,0x3b,0xf0,0x0f,0xf8,0x81,0x7f,0xc0,0x07,0xfc,0x03,0x3e,0xe0,0x1f,0xe0,0x01,
    0x0f,0x1f,0x00,0xfc,0x07,0x00,0xff,0x03,0xc0,0xff,0x01,0xf0,0x7f,0x00,0xfc,0x3f,
    0x00,0xff,0x0e,0xc0,0xbf,0x07,0xf0,0xcf,0x03,0xfc,0xf3,0x00,0xff,0x78,0xc0,0x3f,
    0x1c,0xf0,0x0f,0x0f,0xfc,0x83,0x03,0xff,0xe0,0xc1,0x3f,0xf0,0xf0,0x0f,0x38,0xfc,
    0x03,0x1e,0xff,0x00,0xc7,0x3f,0xc0,0xf3,0x0f,0xe0,0xfd,0x03,0x70,0xff,0x00,0xfc,
    0x3f,0x00,0xfe,0x0f,0x80,0xff,0x03,0xc0,0xff,0x00,0xe0,0x3f,0x00,0xf8,0x00,0xfe,
    0x03,0x00,0xfc,0x7f,0x00,0xf8,0xff,0x0f,0xe0,0x07,0xfc,0x80,0x0f,0x80,0x0f,0x3e,
    0x00,0xf8,0xf0,0x00,0x80,0xc7,0x07,0x00,0x7c,0x1e,0x00,0xc0,0xf3,0x00,0x00,0xde,
    0x03,0x00,0xe0,0x1f,0x00,0x00,0xff,0x00,0x00,0xf8,0x07,0x00,0xc0,0x3f,0x00,0x00,
    0xfe,0x01,0x00,0xf0,0x0f,0x00,0x80,0x7f,0x00,0x00,0xbc,0x07,0x00,0xf0,0x3c,0x00,
    0x80,0xe7,0x03,0x00,0x3e,0x1e,0x00,0xf0,0xf0,0x01,0xc0,0x07,0x1f,0x00,0x1f,0xf0,
    0x03,0x7e,0x00,0xff,0xff,0x01,0xe0,0xff,0x03,0x00,0xfc,0x03,0x00,0xff,0x7f,0xf0,
    0xff,0x1f,0xff,0xff,0xf3,0x00,0x7e,0x0f,0x80,0xf7,0x00,0xf8,0x0f,0x00,0xff,0x00,
    0xf0,0x0f,0x00,0xff,0x00,0xf0,0x0f,0x80,0xff,0x00,0x78,0x0f,0xe0,0xf7,0xff,0x3f,
    0xff,0xff,0xf1,0xff,0x07,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,
    0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,
    0xf0,0x00,0x00,0x00,0xfe,0x03,0x00,0xfc,0x7f,0x00,0xf8,0xff,0x0f,0xe0,0x07,0xfc,
    0x80,0x0f,0x80,0x0f,0x3e,0x00,0xf8,0xf0,0x00,0x80,0xc7,0x07,0x00,0x7c,0x1e,0x00,
    0xc0,0xf3,0x00,0x00,0xde,0x03,0x00,0xe0,0x1f,0x00,0x00,0xff,0x00,0x00,0xf8,0x07,
    0x00,0xc0,0x3f,0x00,0x00,0xfe,0x01,0x00,0xf0,0x0f,0x00,0x80,0x7f,0x00,0x00,0xbc,
    0x07,0x00,0xf0,0x3c,0x00,0x80,0xe7,0x03,0x30,0x3e,0x1e,0xc0,0xf3,0xf0,0x01,0xfc,
    0x03,0x1f,0xc0,0x0f,0xf0,0x03,0x7f,0x00,0xff,0xff,0x07,0xe0,0xff,0x7b,0x00,0xfc,
    0x83,0x07,0x00,0x00,0x38,0x00,0x00,0x80,0x00,0xff,0xff,0xc0,0xff,0xff,0xf0,0xff,
    0x7f,0x3c,0x00,0x3e,0x0f,0x00,0xdf,0x03,0x80,0xf7,0x00,0xe0,0x3d,0x00,0x78,0x0f,
    0x00,0xde,0x03,0x80,0xf7,0x00,0xe0,0x3c,0x00,0x3c,0x0f,0x80,0xc7,0xff,0xff,0xf0,
    0xff,0x1f,0xfc,0xff,0x1f,0x0f,0x80,0xcf,0x03,0xc0,0xf3,0x00,0xe0,0x3d,0x00,0x78,
    0x0f,0x00,0xde,0x03,0x80,0xf7,0x00,0xe0,0x3d,0x00,0x78,0x0f,0x00,0xde,0x03,0x80,
    0xf7,0x00,0xe0,0x3f,0x00,0xf8,0x80,0x7f,0x00,0xf8,0x7f,0x80,0xff,0x7f,0xf0,0x03,
    0x3f,0x3c,0x00,0x8f,0x0f,0xc0,0xe7,0x01,0xe0,0x79,0x00,0x78,0x1e,0x00,0x80,0x07,
    0x00,0xe0,0x03,0x00,0xf0,0x03,0x00,0xf8,0x0f,0x00,0xfc,0x3f,0x00,0xfc,0x3f,0x00,
    0xf0,0x3f,0x00,0xc0,0x1f,0x00,0xc0,0x07,0x00,0xe0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,
    0x03,0x00,0xef,0x01,0xe0,0xfb,0x00,0x78,0xfc,0x80,0x0f,0xfe,0xff,0x01,0xff,0x3f,
    0x00,0xfe,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xf0,0x00,0x00,0x0f,0x00,
    0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,
    0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,
    0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,
    0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,
    0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,
    0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,
    0x00,0xc0,0x3f,0x00,0xf0,0x0f,0x00,0xfc,0x03,0x00,0xff,0x00,0xc0,0x3f,0x00,0xf0,
    0x0f,0x00,0xfc,0x03,0x00,0xef,0x01,0xe0,0xf9,0x00,0x7c,0xfc,0xc0,0x0f,0xfe,0xff,
    0x01,0xff,0x3f,0x00,0xfe,0x01,0x0f,0x00,0xf8,0x07,0x00,0xdc,0x03,0x00,0xcf,0x03,
    0x80,0xe7,0x01,0xc0,0xe1,0x00,0xf0,0xf0,0x00,0x78,0x78,0x00,0x1c,0x38,0x00,0x0f,
    0x3c,0x80,0x07,0x1e,0xc0,0x01,0x0e,0xf0,0x00,0x0f,0x78,0x80,0x07,0x1c,0x80,0x03,
    0x0f,0xc0,0x83,0x07,0xe0,0xc1,0x01,0xe0,0xf0,0x00,0xf0,0x78,0x00,0x70,0x1c,0x00,
    0x38,0x0e,0x00,0xbc,0x07,0x00,0xdc,0x01,0x00,0xee,0x00,0x00,0x7f,0x00,0x00,0x1f,
    0x00,0x80,0x0f,0x00,0xc0,0x07,0x00,0x1e,0x00,0x0f,0x80,0xf7,0x00,0x7c,0x00,0xbc,
    0x07,0xe0,0x03,0xe0,0x3c,0x00,0x3f,0x80,0xc7,0x01,0xf8,0x01,0x3c,0x1e,0xe0,0x0f,
    0xe0,0xf1,0x00,0x77,0x00,0x87,0x07,0xb8,0x07,0x3c,0x38,0xc0,0x39,0xe0,0xc1,0x03,
    0xc7,0x01,0x0f,0x1e,0x38,0x1e,0x38,0xf0,0xc0,0xf1,0xe0,0x01,0x07,0x0f,0x07,0x0f,
    0x78,0x38,0x38,0x78,0xc0,0xc3,0xc1,0xc3,0x01,0x1e,0x0e,0x1c,0x0e,0xe0,0x78,0xe0,
    0x78,0x00,0xc7,0x01,0xcf,0x03,0x78,0x0e,0x78,0x0e,0xc0,0x73,0x80,0x73,0x00,0xdc,
    0x01,0xdc,0x03,0xe0,0x0e,0xe0,0x1f,0x00,0x7f,0x00,0x7e,0x00,0xf8,0x03,0xf0,0x03,
    0x80,0x0f,0x80,0x1f,0x00,0x7c,0x00,0xfc,0x00,0xe0,0x03,0xc0,0x03,0x00,0x1f,0x00,
    0x1e,0x00,0x1f,0x00,0x7c,0x0f,0x00,0x1e,0x0f,0x80,0x07,0x0f,0xe0,0x83,0x07,0xf0,
    0x80,0x07,0x3c,0x80,0x07,0x0f,0xc0,0x83,0x07,0xc0,0xe3,0x01,0xc0,0x73,0x00,0xe0,
    0x3d,0x00,0xe0,0x0f,0x00,0xe0,0x03,0x00,0xf0,0x01,0x00,0xf8,0x00,0x00,0xfe,0x00,
    0x80,0xf7,0x00,0xc0,0x7b,0x00,0xf0,0x78,0x00,0x3c,0x78,0x00,0x1e,0x3c,0x80,0x07,
    0x3c,0xe0,0x01,0x3e,0xf0,0x00,0x1e,0x3c,0x00,0x1e,0x1f,0x00,0x9f,0x07,0x00,0xef,
    0x01,0x00,0x0f,0x1e,0x00,0xe0,0x7d,0x00,0xe0,0xf1,0x00,0xc0,0xc3,0x03,0xc0,0x83,
    0x07,0xc0,0x07,0x1e,0x80,0x07,0x7c,0x80,0x07,0xf0,0x00,0x0f,0xc0,0x03,0x0f,0x80,
    0x0f,0x1e,0x00,0x1e,0x1e,0x00,0x78,0x1e,0x00,0xf0,0x3c,0x00,0xc0,0x3f,0x00,0x80,
    0x7f,0x00,0x00,0x7e,0x00,0x00,0x78,0x00,0x00,0xf0,0x00,0x00,0xe0,0x01,0x00,0xc0,
    0x03,0x00,0x80,0x07,0x00,0x00,0x0f,0x00,0x00,0x1e,0x00,0x00,0x3c,0x00,0x00,0x78,
    0x00,0x00,0xf0,0x00,0x00,0xe0,0x01,0x00,0xc0,0x03,0x00,0xfe,0xff,0xdf,0xff,0xff,
    0xfb,0xff,0x7f,0x00,0x80,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x01,0x00,0x1f,
    0x00,0xe0,0x01,0x00,0x1e,0x00,0xe0,0x03,0x00,0x3e,0x00,0xc0,0x03,0x00,0x3c,0x00,
    0xc0,0x07,0x00,0x7c,0x00,0x80,0x07,0x00,0x78,0x00,0x80,0x0f,0x00,0xf8,0x00,0x00,
    0x0f,0x00,0xf0,0x00,0x00,0x1f,0x00,0xf0,0x01,0x00,0x1e,0x00,0xe0,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,
    0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,
    0x1e,0x8f,0xff,0xff,0x0f,0x03,0x38,0x80,0x01,0x0c,0xe0,0x00,0x06,0x30,0x80,0x01,
    0x18,0xc0,0x00,0x06,0x60,0x00,0x03,0x18,0x80,0x01,0x0c,0x60,0x00,0x06,0x30,0x80,
    0x01,0x18,0xc0,0x00,0x06,0x70,0x00,0x03,0x18,0xc0,0x01,0x0c,0xff,0xff,0x1f,0x8f,
    0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,
    0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0xf8,0xff,0xff,0x0f,0xe0,0x00,0x78,0x00,
    0x1f,0xc0,0x0f,0xb0,0x03,0xce,0x81,0x73,0x70,0x18,0x1c,0x0e,0x03,0xe3,0xc0,0x19,
    0x70,0x07,0xd8,0x01,0x0e,0xff,0xff,0xff,0xff,0xff,0x3f,0x1f,0x1e,0x3c,0x38,0x70,
    0xe0,0xe0,0x1f,0xc0,0xff,0x03,0xff,0x3f,0xf8,0xe0,0xe3,0x03,0x1e,0x0f,0xf0,0x00,
    0x80,0x07,0x00,0x3c,0x00,0xfc,0x81,0xff,0x0f,0xff,0x7b,0xfc,0xc1,0xf3,0x01,0x9e,
    0x07,0xf0,0x3c,0x80,0xe7,0x01,0x3e,0x3f,0xfc,0xf1,0x7f,0x3f,0xff,0xf1,0xe1,0x07,
    0x0f,0x0f,0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,
    0x00,0xe0,0x01,0x00,0x8f,0x1f,0x78,0xfe,0xc3,0xfb,0x3f,0xfe,0xe0,0xf3,0x03,0xbe,
    0x0f,0xe0,0x7d,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,
    0xff,0x00,0xf8,0x0f,0xe0,0x7f,0x00,0xef,0x07,0x7c,0x7f,0xf0,0xb9,0xff,0xc7,0xf9,
    0x1f,0x0e,0x3f,0x00,0xc0,0x1f,0xc0,0xff,0x81,0xff,0x0f,0x1f,0x7e,0x3e,0xe0,0x79,
    0x80,0xf7,0x01,0xfc,0x03,0x00,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,
    0x00,0x3c,0x00,0xef,0x01,0xbc,0x0f,0x78,0x7c,0xf0,0xe1,0xff,0x03,0xff,0x07,0xf0,
    0x07,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0x0f,0x00,0x78,0x00,0xc0,0x03,
    0x00,0x1e,0x00,0xf0,0xc0,0x8f,0x87,0xff,0x3d,0xfe,0xff,0xf9,0xe0,0xef,0x03,0x7e,
    0x0f,0xe0,0x7f,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,
    0xff,0x00,0xf8,0x0f,0xe0,0x7b,0x00,0xdf,0x07,0xfc,0x7c,0xf0,0xc7,0xff,0x3b,0xfc,
    0xcf,0x81,0x1f,0x0e,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,0xe0,0xe3,0x03,0x3c,
    0x0f,0xe0,0x3d,0x00,0xee,0x01,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,
    0xf0,0x00,0x80,0x07,0x00,0x78,0x00,0xce,0x07,0x78,0x7c,0xf0,0xc1,0xff,0x0f,0xfc,
    0x1f,0x80,0x3f,0x00,0x78,0xbe,0xdf,0xe3,0xf1,0x78,0x3c,0xff,0xff,0xdf,0xe3,0xf1,
    0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0x03,0xc0,0xc7,0xc3,
    0x7f,0x8f,0xff,0x3f,0x1f,0xfe,0x3e,0xf0,0x7b,0x80,0xff,0x01,0xfe,0x03,0xf0,0x0f,
    0xc0,0x3f,0x00,0xff,0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x7f,0x00,0xef,0x01,0xbe,0x0f,
    0xfc,0x7c,0xf8,0xe3,0x7f,0x0f,0xff,0x3c,0xf0,0xf1,0x00,0xc0,0x03,0x00,0xef,0x01,
    0x9e,0x0f,0x78,0x7c,0xf0,0xf1,0xff,0x03,0xff,0x07,0xf8,0x07,0x0f,0x00,0x1e,0x00,
    0x3c,0x00,0x78,0x00,0xf0,0x00,0xe0,0x01,0xc0,0x03,0x80,0x07,0x00,0x8f,0x1f,0x9e,
    0xff,0xbc,0xff,0xfb,0xc3,0xff,0x03,0xff,0x03,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,
    0x1f,0xc0,0x3f,0x80,0x7f,0x00,0xff,0x00,0xfe,0x01,0xfc,0x03,0xf8,0x07,0xf0,0x0f,
    0xe0,0x1f,0xc0,0x3f,0x80,0x7f,0x00,0x0f,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x78,0x3c,0x1e,0x0f,0x00,0x00,0x00,0x78,0x3c,0x1e,
    0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,
    0xe3,0xf1,0xfc,0xff,0xef,0x01,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,
    0x00,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,0xf0,0x3c,0xe0,0xf1,0xc0,0xc3,0x83,
    0x07,0x0f,0x0f,0x3c,0x1e,0xf0,0x3c,0xc0,0xfb,0x00,0xff,0x07,0xfc,0x1f,0xf0,0xf3,
    0xc0,0x87,0x03,0x0f,0x1e,0x3c,0xf0,0xf0,0xc0,0xc3,0x03,0x1e,0x0f,0xf0,0x3c,0xc0,
    0xf3,0x00,0xde,0x03,0x78,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x87,0x0f,0xfc,0x38,0xff,0xf1,0xdf,0xfd,0xdf,0xff,0xfe,0xf8,0x87,
    0xff,0x81,0x1f,0xfc,0x0f,0xf8,0xc0,0x3f,0xc0,0x03,0xfe,0x01,0x1e,0xf0,0x0f,0xf0,
    0x80,0x7f,0x80,0x07,0xfc,0x03,0x3c,0xe0,0x1f,0xe0,0x01,0xff,0x00,0x0f,0xf8,0x07,
    0x78,0xc0,0x3f,0xc0,0x03,0xfe,0x01,0x1e,0xf0,0x0f,0xf0,0x80,0x7f,0x80,0x07,0xfc,
    0x03,0x3c,0xe0,0x1f,0xe0,0x01,0x0f,0x87,0x1f,0xce,0xff,0xdc,0xff,0xfb,0xc3,0xff,
    0x03,0xff,0x03,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,0x3f,0x80,0x7f,0x00,
    0xff,0x00,0xfe,0x01,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,0x3f,0x80,0x7f,
    0x00,0x0f,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,0xe0,0xe3,0x03,0x3e,0x0f,0xe0,
    0x7d,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,0xff,0x00,
    0xf8,0x0f,0xe0,0x7b,0x00,0xcf,0x07,0x7c,0x7c,0xf0,0xc1,0xff,0x07,0xfc,0x1f,0x80,
    0x3f,0x00,0x87,0x1f,0x38,0xff,0xc3,0xfd,0x3f,0xfe,0xe0,0xf3,0x03,0xbe,0x0f,0xe0,
    0x7d,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,0xff,0x00,
    0xf8,0x0f,0xe0,0x7f,0x00,0xef,0x07,0x7c,0x7f,0xf0,0xf9,0xff,0xc7,0xfb,0x1f,0x1e,
    0x3f,0xf0,0x00,0x80,0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0x0f,0x00,0x78,0x00,0xc0,
    0x03,0x00,0x00,0xc0,0x0f,0x87,0xff,0x39,0xfe,0xdf,0xf9,0xe0,0xef,0x03,0x7e,0x0f,
    0xe0,0x7f,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,0xff,
    0x00,0xf8,0x0f,0xe0,0x7b,0x00,0xdf,0x07,0xfc,0x7c,0xf0,0xc7,0xff,0x3f,0xfc,0xe7,
    0x81,0x1f,0x0f,0x00,0x78,0x00,0xc0,0x03,0x00,0x1e,0x00,0xf0,0x00,0x80,0x07,0x00,
    0x3c,0x00,0xe0,0x01,0x87,0x1f,0x7f,0xff,0x1f,0x3f,0x7c,0xf0,0xc0,0x03,0x0f,0x3c,
    0xf0,0xc0,0x03,0x0f,0x3c,0xf0,0xc0,0x03,0x0f,0x3c,0xf0,0xc0,0x03,0xe0,0x07,0xf8,
    0x1f,0xfe,0x3f,0x1e,0x3c,0x0f,0x78,0x0f,0x78,0x0f,0x00,0x1f,0x00,0x7e,0x00,0xfc,
    0x07,0xf8,0x3f,0x80,0x7f,0x00,0xf8,0x00,0xf0,0x0f,0xf0,0x0f,0xf0,0x1f,0x7c,0xfe,
    0x7f,0xfc,0x1f,0xf0,0x07,0x1e,0x8f,0xc7,0xe3,0xf9,0xff,0xff,0x1e,0x8f,0xc7,0xe3,
    0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0xf8,0xfd,0x7c,0x0f,0xe0,0x1f,0xc0,0x3f,
    0x80,0x7f,0x00,0xff,0x00,0xfe,0x01,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,
    0x3f,0x80,0x7f,0x00,0xff,0x00,0xfe,0x01,0xfc,0x03,0xfc,0x0f,0xfc,0x3f,0xfc,0xfd,
    0xbf,0xf3,0x3f,0x87,0x1f,0x0e,0x0e,0x80,0x3b,0x00,0xef,0x01,0x3c,0x07,0x70,0x1c,
    0xe0,0xf1,0x80,0x83,0x03,0x0e,0x0e,0x3c,0x78,0x70,0xc0,0xc1,0x01,0x87,0x03,0x3c,
    0x0e,0xe0,0x38,0x80,0x73,0x00,0xde,0x01,0x70,0x07,0xc0,0x0f,0x00,0x3f,0x00,0x78,
    0x00,0xe0,0x01,0x0f,0xf0,0x80,0x77,0xc0,0x07,0xbc,0x03,0x3e,0xe0,0x3c,0xf0,0x03,
    0xc7,0x81,0x1f,0x3c,0x0e,0xee,0xe0,0xf1,0x70,0x07,0x07,0x87,0x7b,0x38,0x38,0x9c,
    0xe3,0xc1,0x71,0x1c,0x07,0x9e,0xe3,0x38,0xe0,0x1c,0xcf,0x01,0xe7,0x70,0x07,0xb8,
    0x83,0x3b,0x80,0x1f,0xdc,0x01,0xfc,0xe0,0x0f,0xe0,0x07,0x3e,0x00,0x1f,0xf0,0x01,
    0xf0,0x80,0x0f,0x80,0x07,0x3c,0x00,0x1e,0xc0,0x71,0x80,0xc3,0x03,0x0f,0x1e,0x1c,
    0x70,0x38,0xc0,0xf3,0x00,0xde,0x01,0xf0,0x03,0x80,0x0f,0x00,0x1e,0x00,0x78,0x00,
    0xf0,0x03,0xc0,0x1f,0x80,0x73,0x00,0xcf,0x03,0x1e,0x1e,0x38,0x70,0xf0,0xc0,0xe3,
    0x01,0x9e,0x03,0x70,0x0e,0xc0,0x3b,0x00,0xe7,0x01,0x1e,0x07,0x78,0x1c,0xe0,0xf0,
    0xc0,0x83,0x03,0x07,0x0e,0x1c,0x78,0x78,0xc0,0xe1,0x00,0x87,0x03,0x3c,0x0f,0xe0,
    0x1c,0x80,0x73,0x00,0xfe,0x00,0xf0,0x03,0xc0,0x0f,0x00,0x1f,0x00,0x78,0x00,0xe0,
    0x01,0x80,0x03,0x00,0x0e,0x00,0x1c,0x00,0x70,0x00,0xe0,0x01,0xf0,0x03,0xc0,0x07,
    0x00,0x0f,0x00,0xfe,0xff,0xfe,0xff,0xfe,0xff,0x00,0x70,0x00,0x78,0x00,0x3c,0x00,
    0x1e,0x00,0x0f,0x80,0x07,0xc0,0x03,0xc0,0x03,0xe0,0x01,0xf0,0x00,0x78,0x00,0x3c,
    0x00,0x1e,0x00,0x0f,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0xf0,0xf8,0x38,0x38,
    0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x3c,0x1e,0x0f,0x0f,0x1e,0x1c,
    0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0xf8,0xf0,0xe0,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x0f,0x1f,0x1c,0x1c,0x1c,0x1c,0x1c,
    0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x38,0x78,0xf0,0xf0,0x78,0x38,0x1c,0x1c,0x1c,
    0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1f,0x0f,0x07,0x3c,0x00,0xfc,0x01,
    0xfc,0x07,0x3e,0x3e,0x3c,0xf0,0x1f,0xc0,0x1f,0x00,0x1e,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 10
 *  X offset: 0, Y offset: 38
 *  X size: 1, Y size: 1
 *            
 ********************/
{0, 10, 0, 38, 1, 1},

/********************
 *  Character: '!', X advance: 13
 *  X offset: 4, Y offset: 10
 *  X size: 4, Y size: 28
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 *       ##          
 *       ##          
 *       ##          
 *       ##          
 *       ##          
 *                   
 *                   
 *      ####         
 *      ####         
 *      ####         
 *      ####         
 ********************/
{1, 13, 4, 10, 4, 28},

/********************
 *  Character: '"', X advance: 13
 *  X offset: 2, Y offset: 11
 *  X size: 10, Y size: 9
 *    ####  ####   
 *    ####  ####   
 *    ####  ####   
 *    ####  ####   
 *    ####  ####   
 *     ###   ###   
 *     ###   ###   
 *     ##    ##    
 *      #     #    
 ********************/
{15, 13, 2, 11, 10, 9},

/********************
 *  Character: '#', X advance: 21
 *  X offset: 0, Y offset: 12
 *  X size: 21, Y size: 26
 *          ###    ###   
 *          ###    ###   
 *         ###     ###   
 *         ###     ###   
 *         ###     ###   
 *         ###    ###    
 *         ###    ###    
 *    ###################
 *    ###################
 *    ###################
 *        ###     ##     
 *        ###    ###     
 *        ##     ###     
 *       ###     ###     
 *       ###     ###     
 *       ###     ##      
 *  ###################  
 *  ###################  
 *  ###################  
 *      ###     ###      
 *      ###     ###      
 *      ###    ###       
 *      ##     ###       
 *     ###     ###       
 *     ###     ###       
 *     ###     ###       
 ********************/
{27, 21, 0, 12, 21, 26},

/********************
 *  Character: '$', X advance: 21
 *  X offset: 1, Y offset: 9
 *  X size: 20, Y size: 32
 *           ##           
 *         #######        
 *       ###########      
 *      #############     
 *     ##### ##  #####    
 *     ####  ##    ###    
 *    ####   ##    ####   
 *    ####   ##     ###   
 *    ####   ##     ###   
 *    ####   ##           
 *    ####   ##           
 *    ####   ##           
 *    #####  ##           
 *     ##### ##           
 *      ########          
 *       ###########      
 *          ##########    
 *           ## ########  
 *           ##    #####  
 *           ##     ##### 
 *           ##      #### 
 *   ###     ##      #### 
 *   ####    ##      #### 
 *   #####   ##     ##### 
 *    ####   ##     ####  
 *    ###### ##   ######  
 *     ################   
 *      #############     
 *        ########        
 *           ##           
 *           ##           
 *           ##           
 ********************/
{96, 21, 1, 9, 20, 32},

/********************
 *  Character: '%', X advance: 34
 *  X offset: 1, Y offset: 11
 *  X size: 31, Y size: 27
 *                         ##          
 *       ####             ###          
 *     ########          ###           
 *    ##########         ###           
 *    ###    ###        ###            
 *   ###      ###       ##             
 *   ##        ##      ###             
 *   ##        ##      ##              
 *   ##        ##     ###              
 *   ###      ###    ###               
 *    ###    ###     ###               
 *    ##########    ###                
 *     ########     ##                 
 *       #####     ###                 
 *                 ##       ####       
 *                ###     ########     
 *                ##     ##########    
 *               ###     ###    ###    
 *              ###     ###      ###   
 *              ##      ##        ##   
 *             ###      ##        ##   
 *             ##       ##        ##   
 *            ###       ###      ###   
 *            ##         ###    ###    
 *           ###         ##########    
 *          ###           ########     
 *          ##              ####       
 ********************/
{176, 34, 1, 11, 31, 27},

/********************
 *  Character: '&', X advance: 25
 *  X offset: 2, Y offset: 11
 *  X size: 23, Y size: 27
 *            #####            
 *           #######           
 *         ##########          
 *         ####   ####         
 *        ####     ###         
 *        ####     ###         
 *        ####     ###         
 *        ####     ###         
 *         ####   ####         
 *         ####  ####          
 *          ########           
 *           ######            
 *           ####              
 *         #######             
 *       #####  ###    ####    
 *      #####   ####   ####    
 *     ####      ###   ####    
 *    #####       ### ####     
 *    ####        ########     
 *    ####         ######      
 *    ####          ####       
 *    #####         #####      
 *    #####        #######     
 *     ######    #########     
 *      #############  ####    
 *       ##########     ####   
 *         ######       #####  
 ********************/
{281, 25, 2, 11, 23, 27},

/********************
 *  Character: ''', X advance: 8
 *  X offset: 2, Y offset: 11
 *  X size: 4, Y size: 9
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *     ###    
 *     ###    
 *     ##     
 *      #     
 ********************/
{359, 8, 2, 11, 4, 9},

/********************
 *  Character: '(', X advance: 13
 *  X offset: 3, Y offset: 10
 *  X size: 9, Y size: 36
 *            ##    
 *           ##     
 *          ###     
 *          ##      
 *         ###      
 *         ##       
 *        ###       
 *        ###       
 *       ###        
 *       ###        
 *      ####        
 *      ####        
 *      ###         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *     ####         
 *      ###         
 *      ###         
 *      ####        
 *      ####        
 *       ###        
 *       ###        
 *        ###       
 *        ###       
 *         ##       
 *         ###      
 *          ##      
 *          ###     
 *           ##     
 *            ##    
 ********************/
{364, 13, 3, 10, 9, 36},

/********************
 *  Character: ')', X advance: 13
 *  X offset: 1, Y offset: 10
 *  X size: 9, Y size: 36
 *   ##           
 *    ##          
 *    ###         
 *     ##         
 *     ###        
 *      ##        
 *      ###       
 *      ###       
 *       ###      
 *       ###      
 *       ####     
 *       ####     
 *        ###     
 *        ###     
 *        ####    
 *        ####    
 *        ####    
 *        ####    
 *        ####    
 *        ####    
 *        ####    
 *        ####    
 *        ###     
 *       ####     
 *       ####     
 *       ####     
 *       ###      
 *       ###      
 *      ###       
 *      ###       
 *     ###        
 *     ###        
 *     ##         
 *    ###         
 *    ##          
 *   ##           
 ********************/
{405, 13, 1, 10, 9, 36},

/********************
 *  Character: '*', X advance: 15
 *  X offset: 1, Y offset: 10
 *  X size: 12, Y size: 11
 *        ##        
 *        ##        
 *        ##        
 *    ##  ##  ##    
 *   ############   
 *     ########     
 *       ####       
 *      ######      
 *      ##  ##      
 *     ###  ###     
 *      #    #      
 ********************/
{446, 15, 1, 10, 12, 11},

/********************
 *  Character: '+', X advance: 22
 *  X offset: 2, Y offset: 21
 *  X size: 18, Y size: 17
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *    ##################    
 *    ##################    
 *    ##################    
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 *            ##            
 ********************/
{463, 22, 2, 21, 18, 17},

/********************
 *  Character: ',', X advance: 11
 *  X offset: 3, Y offset: 34
 *  X size: 4, Y size: 10
 *     ####       
 *     ####       
 *     ####       
 *     ####       
 *       ##       
 *       ##       
 *       ##       
 *       ##       
 *      ##        
 *     ##         
 ********************/
{502, 11, 3, 34, 4, 10},

/********************
 *  Character: '-', X advance: 13
 *  X offset: 2, Y offset: 26
 *  X size: 9, Y size: 3
 *    #########    
 *    #########    
 *    #########    
 ********************/
{507, 13, 2, 26, 9, 3},

/********************
 *  Character: '.', X advance: 10
 *  X offset: 3, Y offset: 34
 *  X size: 4, Y size: 4
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 ********************/
{511, 10, 3, 34, 4, 4},

/********************
 *  Character: '/', X advance: 11
 *  X offset: 0, Y offset: 10
 *  X size: 11, Y size: 28
 *           ##
 *          ###
 *          ## 
 *          ## 
 *         ### 
 *         ##  
 *         ##  
 *         ##  
 *        ##   
 *        ##   
 *        ##   
 *       ##    
 *       ##    
 *       ##    
 *      ##     
 *      ##     
 *      ##     
 *     ##      
 *     ##      
 *     ##      
 *    ##       
 *    ##       
 *    ##       
 *   ###       
 *   ##        
 *   ##        
 *  ###        
 *  ##         
 ********************/
{513, 11, 0, 10, 11, 28},

/********************
 *  Character: '0', X advance: 21
 *  X offset: 2, Y offset: 11
 *  X size: 18, Y size: 27
 *          ######         
 *        ##########       
 *       ############      
 *      #####    #####     
 *      ####      ####     
 *     ####        ####    
 *     ####        ####    
 *     ####        ####    
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *     ####        ####    
 *     ####        ####    
 *     ####        ####    
 *      ####      ####     
 *      #####    #####     
 *       ############      
 *        ##########       
 *          ######         
 ********************/
{552, 21, 2, 11, 18, 27},

/********************
 *  Character: '1', X advance: 21
 *  X offset: 5, Y offset: 11
 *  X size: 9, Y size: 27
 *              ##            
 *              ##            
 *             ###            
 *             ###            
 *            ####            
 *          ######            
 *       #########            
 *       #########            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 ********************/
{613, 21, 5, 11, 9, 27},

/********************
 *  Character: '2', X advance: 21
 *  X offset: 2, Y offset: 11
 *  X size: 18, Y size: 27
 *         ########        
 *       ############      
 *      ##############     
 *     ######    ######    
 *     ####        ####    
 *     ####        #####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *                  ####   
 *                 #####   
 *                 ####    
 *                #####    
 *               #####     
 *             ######      
 *           ######        
 *          ######         
 *         #####           
 *        ####             
 *       ####              
 *      ###                
 *      ###                
 *      ##                 
 *     ###                 
 *     #################   
 *     #################   
 *     #################   
 ********************/
{644, 21, 2, 11, 18, 27},

/********************
 *  Character: '3', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *      #############     
 *     #####     #####    
 *     ####       #####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *                 ####   
 *                ####    
 *               #####    
 *           ########     
 *           ######       
 *           ########     
 *                #####   
 *                 ####   
 *                  ####  
 *                  ####  
 *                  ####  
 *   ####           ####  
 *   ####           ####  
 *   #####         #####  
 *    ####         ####   
 *    ######     ######   
 *     ###############    
 *      ############      
 *         #######        
 ********************/
{705, 21, 1, 11, 19, 27},

/********************
 *  Character: '4', X advance: 21
 *  X offset: 2, Y offset: 11
 *  X size: 17, Y size: 27
 *               ###       
 *              ####       
 *             #####       
 *             #####       
 *            ######       
 *            ######       
 *           #######       
 *          ### ####       
 *          ##  ####       
 *         ##   ####       
 *        ###   ####       
 *        ##    ####       
 *       ##     ####       
 *      ###     ####       
 *      ##      ####       
 *     ##       ####       
 *     ##       ####       
 *    ##        ####       
 *    #################    
 *    #################    
 *    #################    
 *              ####       
 *              ####       
 *              ####       
 *              ####       
 *              ####       
 *              ####       
 ********************/
{770, 21, 2, 11, 17, 27},

/********************
 *  Character: '5', X advance: 21
 *  X offset: 0, Y offset: 11
 *  X size: 19, Y size: 27
 *     ##############    
 *     ##############    
 *     ##############    
 *     ###               
 *     ###               
 *    ###                
 *    ###                
 *    ###                
 *    ###                
 *    ###  ######        
 *    #############      
 *    ###############    
 *   ######     #####    
 *   ####        #####   
 *                ####   
 *                 ####  
 *                 ####  
 *                 ####  
 *                 ####  
 *                 ####  
 *  ####           ####  
 *  #####         ####   
 *   ####        #####   
 *   ######     #####    
 *    ##############     
 *     ############      
 *        #######        
 ********************/
{828, 21, 0, 11, 19, 27},

/********************
 *  Character: '6', X advance: 21
 *  X offset: 2, Y offset: 11
 *  X size: 18, Y size: 27
 *           ######        
 *         #########       
 *       ############      
 *       ####    #####     
 *      ####      #####    
 *     ####        ####    
 *     ####        ####    
 *     ###                 
 *     ###                 
 *    ####                 
 *    ####   ######        
 *    #### ##########      
 *    ################     
 *    #######    ######    
 *    #####        ####    
 *    #####        #####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *    ####          ####   
 *     ###          ####   
 *     ####        ####    
 *     #####       ####    
 *      #####    #####     
 *       ############      
 *        ##########       
 *          ######         
 ********************/
{893, 21, 2, 11, 18, 27},

/********************
 *  Character: '7', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 18, Y size: 27
 *   ##################   
 *   ##################   
 *   ##################   
 *                 ###    
 *                 ###    
 *                ###     
 *               ####     
 *               ###      
 *              ###       
 *              ###       
 *             ###        
 *            ####        
 *            ###         
 *           ####         
 *           ###          
 *           ###          
 *          ####          
 *          ###           
 *         ####           
 *         ####           
 *         ###            
 *        ####            
 *        ####            
 *        ####            
 *        ###             
 *       ####             
 *       ####             
 ********************/
{954, 21, 1, 11, 18, 27},

/********************
 *  Character: '8', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *      #############     
 *     #####     #####    
 *    #####       #####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *     ####       ####    
 *     #####     #####    
 *       ###########      
 *        #########       
 *      #############     
 *     #####     #####    
 *    ####         ####   
 *   #####         #####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   #####         #####  
 *    ####         ####   
 *     #####     #####    
 *      ##############    
 *       ###########      
 *         #######        
 ********************/
{1015, 21, 1, 11, 19, 27},

/********************
 *  Character: '9', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *      #############     
 *     #####     #####    
 *    #####       ####    
 *    ####         ####   
 *   ####           ###   
 *   ####           ###   
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   #####         #####  
 *    ####        ######  
 *    ######     #######  
 *     #################  
 *       ########## ####  
 *         ######   ####  
 *                  ####  
 *                  ###   
 *                 ####   
 *    ####         ####   
 *    ####         ###    
 *    #####       ####    
 *     #####    #####     
 *      ############      
 *       ##########       
 *         ######         
 ********************/
{1080, 21, 1, 11, 19, 27},

/********************
 *  Character: ':', X advance: 10
 *  X offset: 3, Y offset: 18
 *  X size: 4, Y size: 20
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *               
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 ********************/
{1145, 10, 3, 18, 4, 20},

/********************
 *  Character: ';', X advance: 10
 *  X offset: 2, Y offset: 18
 *  X size: 4, Y size: 26
 *    ####      
 *    ####      
 *    ####      
 *    ####      
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *              
 *    ####      
 *    ####      
 *    ####      
 *    ####      
 *      ##      
 *      ##      
 *     ###      
 *     ##       
 *     ##       
 *    ##        
 ********************/
{1155, 10, 2, 18, 4, 26},

/********************
 *  Character: '<', X advance: 22
 *  X offset: 1, Y offset: 19
 *  X size: 18, Y size: 18
 *                   ##    
 *                 ####    
 *               ######    
 *            #######      
 *          #######        
 *       #######           
 *     #######             
 *   ######                
 *   ####                  
 *   #####                 
 *    #######              
 *      #######            
 *        #######          
 *           #######       
 *             #######     
 *               ######    
 *                  ###    
 *                    #    
 ********************/
{1168, 22, 1, 19, 18, 18},

/********************
 *  Character: '=', X advance: 22
 *  X offset: 1, Y offset: 24
 *  X size: 18, Y size: 10
 *   ##################    
 *   ##################    
 *   ##################    
 *                         
 *                         
 *                         
 *                         
 *   ##################    
 *   ##################    
 *   ##################    
 ********************/
{1209, 22, 1, 24, 18, 10},

/********************
 *  Character: '>', X advance: 22
 *  X offset: 1, Y offset: 19
 *  X size: 18, Y size: 18
 *   ##                    
 *   ####                  
 *   #######               
 *     #######             
 *       #######           
 *          #######        
 *            #######      
 *               ######    
 *                 ####    
 *                #####    
 *              #######    
 *           #######       
 *         #######         
 *       #######           
 *    #######              
 *   ######                
 *   ###                   
 *   #                     
 ********************/
{1232, 22, 1, 19, 18, 18},

/********************
 *  Character: '?', X advance: 21
 *  X offset: 3, Y offset: 10
 *  X size: 17, Y size: 28
 *          #######         
 *        ###########       
 *       #############      
 *      #####     #####     
 *      ####       ####     
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *                  ####    
 *                 #####    
 *                 ####     
 *                #####     
 *               #####      
 *              #####       
 *             ####         
 *            ####          
 *           #####          
 *           ####           
 *           ####           
 *           ####           
 *                          
 *                          
 *                          
 *                          
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 ********************/
{1273, 21, 3, 10, 17, 28},

/********************
 *  Character: '@', X advance: 39
 *  X offset: 1, Y offset: 10
 *  X size: 36, Y size: 33
 *                  #########               
 *               ###############            
 *             ###################          
 *           #######        #######         
 *          ######            ######        
 *         #####                #####       
 *        #####                  #####      
 *       #####                    #####     
 *      #####                      #####    
 *      ####         ######         ####    
 *     ####        ######### ###    ####    
 *     ####       ####    ######    #####   
 *    ####       ####      #####     ####   
 *    ####      ####       ####      ####   
 *   ####      ####        ####      ####   
 *   ####      ####        ####      ####   
 *   ####     ####         ####      ####   
 *   ####     ####         ###       ####   
 *   ####     ####         ###      ####    
 *   ####     ####        ####      ####    
 *   ####     ####        ###      ####     
 *   ####     ####       ####      ####     
 *    ####     ####      ####     ####      
 *    ####     #####   #######   ####       
 *    #####     ######### ##########        
 *     #####      #####    #######          
 *      #####                               
 *       #####                              
 *        ######                            
 *         ########         ###             
 *           ##################             
 *             ################             
 *                ##########                
 ********************/
{1333, 39, 1, 10, 36, 33},

/********************
 *  Character: 'A', X advance: 25
 *  X offset: 0, Y offset: 10
 *  X size: 24, Y size: 28
 *           #####           
 *           ######          
 *           ######          
 *          #######          
 *          ### ####         
 *         #### ####         
 *         ####  ###         
 *         ###   ####        
 *        ####   ####        
 *        ####   ####        
 *        ###     ####       
 *       ####     ####       
 *       ####     ####       
 *       ###       ####      
 *      ####       ####      
 *      ####       ####      
 *      ###         ####     
 *     #################     
 *     #################     
 *     ##################    
 *    ####           ####    
 *    ####           ####    
 *   ####             ####   
 *   ####             ####   
 *   ####              ####  
 *  ####               ####  
 *  ####               ####  
 *  ####                #### 
 ********************/
{1482, 25, 0, 10, 24, 28},

/********************
 *  Character: 'B', X advance: 25
 *  X offset: 3, Y offset: 10
 *  X size: 21, Y size: 28
 *     ###############          
 *     #################        
 *     ##################       
 *     ####          #####      
 *     ####           #####     
 *     ####            ####     
 *     ####            ####     
 *     ####            ####     
 *     ####            ####     
 *     ####            ####     
 *     ####           ####      
 *     ####          ####       
 *     #################        
 *     #################        
 *     ##################       
 *     ####           #####     
 *     ####            ####     
 *     ####            #####    
 *     ####             ####    
 *     ####             ####    
 *     ####             ####    
 *     ####             ####    
 *     ####             ####    
 *     ####            ####     
 *     ####           #####     
 *     ###################      
 *     ##################       
 *     ################         
 ********************/
{1566, 25, 3, 10, 21, 28},

/********************
 *  Character: 'C', X advance: 27
 *  X offset: 2, Y offset: 10
 *  X size: 24, Y size: 28
 *             #######           
 *          #############        
 *         ###############       
 *        #####      ######      
 *       #####         ####      
 *      #####           ####     
 *      ####            ####     
 *     ####              ####    
 *     ####              ####    
 *     ####                      
 *    ####                       
 *    ####                       
 *    ####                       
 *    ####                       
 *    ####                       
 *    ####                       
 *    ####                       
 *    ####                       
 *    #####               ####   
 *     ####               ####   
 *     ####              ####    
 *      ####             ####    
 *      #####           #####    
 *       #####         #####     
 *        #####       #####      
 *         ###############       
 *          #############        
 *            ########           
 ********************/
{1640, 27, 2, 10, 24, 28},

/********************
 *  Character: 'D', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ##############             
 *     #################          
 *     ##################         
 *     ####         ######        
 *     ####           #####       
 *     ####            ####       
 *     ####            #####      
 *     ####             ####      
 *     ####             ####      
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####             ####      
 *     ####             ####      
 *     ####            #####      
 *     ####            ####       
 *     ####           #####       
 *     ####         ######        
 *     ##################         
 *     #################          
 *     ##############             
 ********************/
{1724, 27, 3, 10, 22, 28},

/********************
 *  Character: 'E', X advance: 24
 *  X offset: 3, Y offset: 10
 *  X size: 19, Y size: 28
 *     ###################     
 *     ###################     
 *     ###################     
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ##################      
 *     ##################      
 *     ##################      
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ####                    
 *     ###################     
 *     ###################     
 *     ###################     
 ********************/
{1801, 24, 3, 10, 19, 28},

/********************
 *  Character: 'F', X advance: 23
 *  X offset: 3, Y offset: 10
 *  X size: 18, Y size: 28
 *     ##################     
 *     ##################     
 *     ##################     
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ################       
 *     ################       
 *     ################       
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 *     ####                   
 ********************/
{1868, 23, 3, 10, 18, 28},

/********************
 *  Character: 'G', X advance: 30
 *  X offset: 2, Y offset: 10
 *  X size: 26, Y size: 28
 *              ########            
 *           ##############         
 *         ##################       
 *        #######      #######      
 *       #####           ######     
 *      #####              ####     
 *      ####               #####    
 *     #####                ####    
 *     ####                         
 *     ####                         
 *    ####                          
 *    ####                          
 *    ####                          
 *    ####           ###########    
 *    ####           ###########    
 *    ####           ###########    
 *    ####                  ####    
 *    ####                  ####    
 *     ####                 ####    
 *     ####                 ####    
 *     #####               #####    
 *      ####               #####    
 *      #####             ######    
 *       ######          #######    
 *        #######      #### ####    
 *         ###############   ###    
 *           ############    ###    
 *             ########       ##    
 ********************/
{1931, 30, 2, 10, 26, 28},

/********************
 *  Character: 'H', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ######################     
 *     ######################     
 *     ######################     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 ********************/
{2022, 27, 3, 10, 22, 28},

/********************
 *  Character: 'I', X advance: 11
 *  X offset: 4, Y offset: 10
 *  X size: 4, Y size: 28
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 *      ####       
 ********************/
{2099, 11, 4, 10, 4, 28},

/********************
 *  Character: 'J', X advance: 20
 *  X offset: 1, Y offset: 10
 *  X size: 16, Y size: 28
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *               ####    
 *   ####        ####    
 *   ####        ####    
 *   ####        ####    
 *   ####        ####    
 *   #####      ####     
 *    #####    #####     
 *    #############      
 *     ###########       
 *       #######         
 ********************/
{2113, 20, 1, 10, 16, 28},

/********************
 *  Character: 'K', X advance: 26
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ####             #####    
 *     ####            #####     
 *     ####           #####      
 *     ####          #####       
 *     ####         #####        
 *     ####        #####         
 *     ####       #####          
 *     ####      #####           
 *     ####      ####            
 *     ####     ####             
 *     ####    ####              
 *     ####   ####               
 *     ####  ######              
 *     #### ########             
 *     ######## ####             
 *     #######   ####            
 *     ######    #####           
 *     #####      ####           
 *     ####        ####          
 *     ####        #####         
 *     ####         ####         
 *     ####          ####        
 *     ####           ####       
 *     ####           ####       
 *     ####            ####      
 *     ####             ####     
 *     ####             ####     
 *     ####              ####    
 ********************/
{2169, 26, 3, 10, 22, 28},

/********************
 *  Character: 'L', X advance: 21
 *  X offset: 3, Y offset: 10
 *  X size: 17, Y size: 28
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     ####                 
 *     #################    
 *     #################    
 *     #################    
 ********************/
{2246, 21, 3, 10, 17, 28},

/********************
 *  Character: 'M', X advance: 32
 *  X offset: 3, Y offset: 10
 *  X size: 27, Y size: 28
 *     ######               ######     
 *     ######               ######     
 *     ######               ######     
 *     #######             #######     
 *     #######             #######     
 *     #######             #######     
 *     #### ###           ### ####     
 *     #### ###           ### ####     
 *     #### ###           ### ####     
 *     ####  ###         ###  ####     
 *     ####  ###         ###  ####     
 *     ####  ###         ###  ####     
 *     ####   ###       ###   ####     
 *     ####   ###       ###   ####     
 *     ####   ###       ###   ####     
 *     ####    ###     ###    ####     
 *     ####    ###     ###    ####     
 *     ####    ###     ###    ####     
 *     ####     ###   ###     ####     
 *     ####     ###   ###     ####     
 *     ####     ###   ###     ####     
 *     ####      ### ###      ####     
 *     ####      ### ###      ####     
 *     ####      ### ###      ####     
 *     ####       ######      ####     
 *     ####       #####       ####     
 *     ####       #####       ####     
 *     ####        ####       ####     
 ********************/
{2306, 32, 3, 10, 27, 28},

/********************
 *  Character: 'N', X advance: 28
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     #####             ####      
 *     #####             ####      
 *     ######            ####      
 *     #######           ####      
 *     #######           ####      
 *     ########          ####      
 *     #### ###          ####      
 *     #### ####         ####      
 *     ####  ####        ####      
 *     ####  ####        ####      
 *     ####   ####       ####      
 *     ####    ###       ####      
 *     ####    ####      ####      
 *     ####     ###      ####      
 *     ####     ####     ####      
 *     ####      ####    ####      
 *     ####       ###    ####      
 *     ####       ####   ####      
 *     ####        ###   ####      
 *     ####        ####  ####      
 *     ####         #### ####      
 *     ####          ### ####      
 *     ####          ########      
 *     ####           #######      
 *     ####           #######      
 *     ####            ######      
 *     ####             #####      
 *     ####             #####      
 ********************/
{2401, 28, 3, 10, 22, 28},

/********************
 *  Character: 'O', X advance: 30
 *  X offset: 2, Y offset: 10
 *  X size: 27, Y size: 28
 *             #########            
 *           #############          
 *         #################        
 *        ######       ######       
 *       #####           #####      
 *      #####             #####     
 *      ####               ####     
 *     #####               #####    
 *     ####                 ####    
 *     ####                 ####    
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *     ####                 ####    
 *     ####                 ####    
 *     #####               #####    
 *      ####               ####     
 *      #####             #####     
 *       #####           #####      
 *        ######       ######       
 *         #################        
 *           #############          
 *             ########             
 ********************/
{2478, 30, 2, 10, 27, 28},

/********************
 *  Character: 'P', X advance: 25
 *  X offset: 3, Y offset: 10
 *  X size: 20, Y size: 28
 *     ###############          
 *     #################        
 *     ##################       
 *     ####         ######      
 *     ####           ####      
 *     ####           #####     
 *     ####            ####     
 *     ####            ####     
 *     ####            ####     
 *     ####            ####     
 *     ####           #####     
 *     ####           ####      
 *     ####         ######      
 *     ##################       
 *     #################        
 *     ###############          
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 *     ####                     
 ********************/
{2573, 25, 3, 10, 20, 28},

/********************
 *  Character: 'Q', X advance: 30
 *  X offset: 2, Y offset: 10
 *  X size: 27, Y size: 30
 *             #########            
 *           #############          
 *         #################        
 *        ######       ######       
 *       #####           #####      
 *      #####             #####     
 *      ####               ####     
 *     #####               #####    
 *     ####                 ####    
 *     ####                 ####    
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *    ####                   ####   
 *     ####                 ####    
 *     ####                 ####    
 *     #####          ##   #####    
 *      ####         ####  ####     
 *      #####         ########      
 *       #####         ######       
 *        ######      #######       
 *         ###################      
 *           ############# ####     
 *             ########     ####    
 *                           ###    
 *                            #     
 ********************/
{2643, 30, 2, 10, 27, 30},

/********************
 *  Character: 'R', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ################           
 *     ##################         
 *     ###################        
 *     ####           #####       
 *     ####            #####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ###       
 *     ####            ####       
 *     ####           ####        
 *     ##################         
 *     #################          
 *     ###################        
 *     ####           #####       
 *     ####            ####       
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             ####      
 *     ####             #####     
 *     ####             #####     
 ********************/
{2745, 27, 3, 10, 22, 28},

/********************
 *  Character: 'S', X advance: 25
 *  X offset: 2, Y offset: 10
 *  X size: 22, Y size: 28
 *           ########          
 *         ############        
 *       ################      
 *      ######      ######     
 *      ####          ####     
 *     #####          #####    
 *     ####            ####    
 *     ####            ####    
 *     ####                    
 *     ####                    
 *     #####                   
 *      ######                 
 *       #########             
 *        ############         
 *          ############       
 *              ##########     
 *                  #######    
 *                    #####    
 *                     #####   
 *    ####              ####   
 *    ####              ####   
 *    ####              ####   
 *     ####            #####   
 *     #####           ####    
 *      ######       #####     
 *       ################      
 *        ##############       
 *           ########          
 ********************/
{2822, 25, 2, 10, 22, 28},

/********************
 *  Character: 'T', X advance: 24
 *  X offset: 2, Y offset: 10
 *  X size: 20, Y size: 28
 *    ####################    
 *    ####################    
 *    ####################    
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 ********************/
{2899, 24, 2, 10, 20, 28},

/********************
 *  Character: 'U', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *     ####              ####     
 *      ####            ####      
 *      #####          #####      
 *       ######      ######       
 *        ################        
 *         ##############         
 *            ########            
 ********************/
{2969, 27, 3, 10, 22, 28},

/********************
 *  Character: 'V', X advance: 25
 *  X offset: 0, Y offset: 10
 *  X size: 23, Y size: 28
 *  ####               ####  
 *  ####               ###   
 *  ####              ####   
 *   ####             ####   
 *   ####             ###    
 *    ###            ####    
 *    ####           ####    
 *    ####           ###     
 *     ###          ####     
 *     ####         ####     
 *     ####         ###      
 *      ###        ####      
 *      ####       ####      
 *      ####       ###       
 *       ###      ####       
 *       ####     ####       
 *       ####     ###        
 *        ###    ####        
 *        ####   ####        
 *         ###   ###         
 *         ###   ###         
 *         #### ####         
 *          ### ###          
 *          ### ###          
 *          #######          
 *           #####           
 *           #####           
 *           #####           
 ********************/
{3046, 25, 0, 10, 23, 28},

/********************
 *  Character: 'W', X advance: 36
 *  X offset: 0, Y offset: 10
 *  X size: 35, Y size: 28
 *   ####           ####           #### 
 *   ####          #####           #### 
 *   ####          #####           ###  
 *   ####          ######         ####  
 *    ###          ######         ####  
 *    ####        #######         ####  
 *    ####        ### ###         ###   
 *    ####        ### ####       ####   
 *     ###        ###  ###       ####   
 *     ####      ###   ###       ####   
 *     ####      ###   ####      ###    
 *     ####      ###   ####     ####    
 *      ###     ####    ###     ####    
 *      ####    ###     ###     ####    
 *      ####    ###     ####    ###     
 *      ####    ###      ###    ###     
 *       ###   ####      ###   ####     
 *       ###   ###       ####  ####     
 *       ####  ###       ####  ###      
 *       ####  ###        ###  ###      
 *        ### ###         ### ####      
 *        ### ###         ########      
 *        #######          ######       
 *        #######          ######       
 *         #####           ######       
 *         #####           ######       
 *         #####            ####        
 *         #####            ####        
 ********************/
{3127, 36, 0, 10, 35, 28},

/********************
 *  Character: 'X', X advance: 25
 *  X offset: 0, Y offset: 10
 *  X size: 23, Y size: 28
 *  #####             #####  
 *   ####             ####   
 *    ####           ####    
 *     ####         #####    
 *     ####         ####     
 *      ####       ####      
 *       ####     ####       
 *       ####     ####       
 *        ####   ####        
 *         ####  ###         
 *         #### ####         
 *          #######          
 *           #####           
 *           #####           
 *           #####           
 *          #######          
 *         #### ####         
 *         #### ####         
 *        ####   ####        
 *       ####     ####       
 *       ####     ####       
 *      ####       ####      
 *     ####        #####     
 *     ####         ####     
 *    ####           ####    
 *   #####           #####   
 *   ####             ####   
 *  ####               ####  
 ********************/
{3250, 25, 0, 10, 23, 28},

/********************
 *  Character: 'Y', X advance: 26
 *  X offset: 0, Y offset: 10
 *  X size: 25, Y size: 28
 *   ####                #### 
 *   #####              ####  
 *    ####              ####  
 *     ####            ####   
 *     ####           #####   
 *      ####          ####    
 *      #####        ####     
 *       ####        ####     
 *        ####      ####      
 *        #####     ####      
 *         ####    ####       
 *          ####  ####        
 *          ####  ####        
 *           ########         
 *           ########         
 *            ######          
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 *             ####           
 ********************/
{3331, 26, 0, 10, 25, 28},

/********************
 *  Character: 'Z', X advance: 23
 *  X offset: 1, Y offset: 10
 *  X size: 21, Y size: 28
 *    ####################  
 *    ####################  
 *    ####################  
 *                   #####  
 *                   ####   
 *                  ####    
 *                 #####    
 *                #####     
 *                ####      
 *               ####       
 *              #####       
 *             #####        
 *             ####         
 *            ####          
 *           #####          
 *          #####           
 *          ####            
 *         ####             
 *        #####             
 *       #####              
 *       ####               
 *      ####                
 *     #####                
 *    #####                 
 *    ####                  
 *   #####################  
 *   #####################  
 *   #####################  
 ********************/
{3419, 23, 1, 10, 21, 28},

/********************
 *  Character: '[', X advance: 11
 *  X offset: 2, Y offset: 10
 *  X size: 7, Y size: 36
 *    #######    
 *    #######    
 *    #######    
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    ####       
 *    #######    
 *    #######    
 *    #######    
 ********************/
{3493, 11, 2, 10, 7, 36},

/********************
 *  Character: '\', X advance: 11
 *  X offset: 0, Y offset: 10
 *  X size: 11, Y size: 28
 *  ##         
 *  ###        
 *   ##        
 *   ##        
 *   ###       
 *    ##       
 *    ##       
 *    ##       
 *     ##      
 *     ##      
 *     ##      
 *      ##     
 *      ##     
 *      ##     
 *       ##    
 *       ##    
 *       ##    
 *        ##   
 *        ##   
 *        ##   
 *         ##  
 *         ##  
 *         ##  
 *         ### 
 *          ## 
 *          ## 
 *          ###
 *           ##
 ********************/
{3525, 11, 0, 10, 11, 28},

/********************
 *  Character: ']', X advance: 11
 *  X offset: 1, Y offset: 10
 *  X size: 7, Y size: 36
 *   #######    
 *   #######    
 *   #######    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *      ####    
 *   #######    
 *   #######    
 *   #######    
 ********************/
{3564, 11, 1, 10, 7, 36},

/********************
 *  Character: '^', X advance: 18
 *  X offset: 1, Y offset: 11
 *  X size: 14, Y size: 14
 *        ###          
 *        ####         
 *       #####         
 *       ######        
 *       ## ###        
 *      ###  ###       
 *      ###  ###       
 *     ###    ##       
 *     ###    ###      
 *     ##      ##      
 *    ###      ###     
 *    ##       ###     
 *   ###        ##     
 *   ###        ###    
 ********************/
{3596, 18, 1, 11, 14, 14},

/********************
 *  Character: '_', X advance: 21
 *  X offset: -1, Y offset: 43
 *  X size: 23, Y size: 2
 *  #######################
 *  #######################
 ********************/
{3621, 21, -1, 43, 23, 2},

/********************
 *  Character: '`', X advance: 9
 *  X offset: 1, Y offset: 10
 *  X size: 8, Y size: 6
 *   #####    
 *    ####    
 *     ####   
 *      ###   
 *       ###  
 *        ### 
 ********************/
{3627, 9, 1, 10, 8, 6},

/********************
 *  Character: 'a', X advance: 21
 *  X offset: 1, Y offset: 18
 *  X size: 19, Y size: 20
 *        ########        
 *      ############      
 *     ##############     
 *     #####     #####    
 *    #####       ####    
 *    ####        ####    
 *                ####    
 *                ####    
 *             #######    
 *       #############    
 *     ########## ####    
 *    #######     ####    
 *   #####        ####    
 *   ####         ####    
 *   ####         ####    
 *   ####        #####    
 *   ######    #######    
 *    ########### ######  
 *     #########   #####  
 *       ######     ####  
 ********************/
{3633, 21, 1, 18, 19, 20},

/********************
 *  Character: 'b', X advance: 21
 *  X offset: 2, Y offset: 10
 *  X size: 19, Y size: 28
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####   ######        
 *    ####  #########      
 *    #### ###########     
 *    #######     #####    
 *    ######       #####   
 *    #####         ####   
 *    #####         #####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    #####         #####  
 *    #####         ####   
 *    ######       #####   
 *    #######     #####    
 *    ### ############     
 *    ###  ##########      
 *    ###    ######        
 ********************/
{3681, 21, 2, 10, 19, 28},

/********************
 *  Character: 'c', X advance: 19
 *  X offset: 1, Y offset: 18
 *  X size: 18, Y size: 20
 *         #######      
 *       ###########    
 *      #############   
 *     #####    ######  
 *    #####       ####  
 *    ####        ####  
 *   #####         #### 
 *   ####               
 *   ####               
 *   ####               
 *   ####               
 *   ####               
 *   ####               
 *   ####          #### 
 *    ####         #### 
 *    #####       ####  
 *     #####     #####  
 *      #############   
 *       ###########    
 *         #######      
 ********************/
{3748, 19, 1, 18, 18, 20},

/********************
 *  Character: 'd', X advance: 21
 *  X offset: 1, Y offset: 10
 *  X size: 19, Y size: 28
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *         ######   ####  
 *       ########## ####  
 *      ################  
 *     #####     #######  
 *    #####       ######  
 *    ####         #####  
 *   #####         #####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   #####         #####  
 *    ####         #####  
 *    #####       ######  
 *     #####     #######  
 *      ############ ###  
 *       ##########  ###  
 *         ######    ###  
 ********************/
{3793, 21, 1, 10, 19, 28},

/********************
 *  Character: 'e', X advance: 20
 *  X offset: 1, Y offset: 18
 *  X size: 19, Y size: 20
 *         #######       
 *       ###########     
 *      #############    
 *     #####     #####   
 *    #####        ####  
 *    ####         ####  
 *   ####           ###  
 *   ####           #### 
 *   ################### 
 *   ################### 
 *   ################### 
 *   ####                
 *   ####                
 *   ####                
 *    ####          ###  
 *    #####        ####  
 *     #####     #####   
 *      ##############   
 *       ###########     
 *         #######       
 ********************/
{3860, 20, 1, 18, 19, 20},

/********************
 *  Character: 'f', X advance: 11
 *  X offset: 2, Y offset: 10
 *  X size: 7, Y size: 28
 *       ####    
 *      #####    
 *     ######    
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *    #######    
 *    #######    
 *    #######    
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 ********************/
{3908, 11, 2, 10, 7, 28},

/********************
 *  Character: 'g', X advance: 21
 *  X offset: 1, Y offset: 18
 *  X size: 18, Y size: 28
 *         #####   ####   
 *       ######### ####   
 *      ###############   
 *     #####    #######   
 *    #####      ######   
 *    ####        #####   
 *   #####        #####   
 *   ####          ####   
 *   ####          ####   
 *   ####          ####   
 *   ####          ####   
 *   ####          ####   
 *   ####          ####   
 *   #####         ####   
 *    ####        #####   
 *    #####      ######   
 *     #####    #######   
 *      ########## ####   
 *       ########  ####   
 *         #####   ####   
 *                 ####   
 *                 ####   
 *    ####        ####    
 *    #####       ####    
 *     #####     #####    
 *     ##############     
 *       ###########      
 *        ########        
 ********************/
{3933, 21, 1, 18, 18, 28},

/********************
 *  Character: 'h', X advance: 20
 *  X offset: 2, Y offset: 10
 *  X size: 17, Y size: 28
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####   ######       
 *    ####  #########     
 *    #### ###########    
 *    #######    ######   
 *    ######      #####   
 *    #####        ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 ********************/
{3996, 20, 2, 10, 17, 28},

/********************
 *  Character: 'i', X advance: 8
 *  X offset: 2, Y offset: 10
 *  X size: 4, Y size: 28
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *            
 *            
 *            
 *            
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 ********************/
{4056, 8, 2, 10, 4, 28},

/********************
 *  Character: 'j', X advance: 9
 *  X offset: -1, Y offset: 10
 *  X size: 7, Y size: 36
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *           
 *           
 *           
 *           
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *     ####  
 *    #####  
 *  #######  
 *  ######   
 *  ####     
 ********************/
{4070, 9, -1, 10, 7, 36},

/********************
 *  Character: 'k', X advance: 20
 *  X offset: 2, Y offset: 10
 *  X size: 18, Y size: 28
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####                
 *    ####        ####    
 *    ####       ####     
 *    ####      ####      
 *    ####     ####       
 *    ####    ####        
 *    ####   ####         
 *    ####  ####          
 *    #### #####          
 *    ###########         
 *    ###########         
 *    ######  ####        
 *    #####    ###        
 *    ####     ####       
 *    ####      ####      
 *    ####      ####      
 *    ####       ####     
 *    ####        ####    
 *    ####        ####    
 *    ####         ####   
 *    ####         ####   
 ********************/
{4102, 20, 2, 10, 18, 28},

/********************
 *  Character: 'l', X advance: 8
 *  X offset: 2, Y offset: 10
 *  X size: 4, Y size: 28
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 *    ####    
 ********************/
{4165, 8, 2, 10, 4, 28},

/********************
 *  Character: 'm', X advance: 31
 *  X offset: 2, Y offset: 18
 *  X size: 27, Y size: 20
 *    ###    #####      ######       
 *    ###  #########   #########     
 *    ### ########### ##########     
 *    #######   ########    #####    
 *    #####      ######     #####    
 *    #####       #####      ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 *    ####        ####       ####    
 ********************/
{4179, 31, 2, 18, 27, 20},

/********************
 *  Character: 'n', X advance: 20
 *  X offset: 2, Y offset: 18
 *  X size: 17, Y size: 20
 *    ###    ######       
 *    ###  ##########     
 *    ### ############    
 *    #######    ######   
 *    ######      #####   
 *    #####        ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 ********************/
{4247, 20, 2, 18, 17, 20},

/********************
 *  Character: 'o', X advance: 20
 *  X offset: 1, Y offset: 18
 *  X size: 19, Y size: 20
 *         #######       
 *       ###########     
 *      #############    
 *     #####     #####   
 *    #####       #####  
 *    ####         ####  
 *   #####         ##### 
 *   ####           #### 
 *   ####           #### 
 *   ####           #### 
 *   ####           #### 
 *   ####           #### 
 *   ####           #### 
 *   #####         ##### 
 *    ####         ####  
 *    #####       #####  
 *     #####     #####   
 *      #############    
 *       ###########     
 *         #######       
 ********************/
{4290, 20, 1, 18, 19, 20},

/********************
 *  Character: 'p', X advance: 21
 *  X offset: 2, Y offset: 18
 *  X size: 19, Y size: 27
 *    ###    ######        
 *    ###  ##########      
 *    ### ############     
 *    #######     #####    
 *    ######       #####   
 *    #####         ####   
 *    #####         #####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    ####           ####  
 *    #####         #####  
 *    #####         ####   
 *    ######       #####   
 *    #######     #####    
 *    ################     
 *    #### ##########      
 *    ####   ######        
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 *    ####                 
 ********************/
{4338, 21, 2, 18, 19, 27},

/********************
 *  Character: 'q', X advance: 21
 *  X offset: 1, Y offset: 18
 *  X size: 19, Y size: 27
 *         ######    ###  
 *       ##########  ###  
 *      ############ ###  
 *     #####     #######  
 *    #####       ######  
 *    ####         #####  
 *   #####         #####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   ####           ####  
 *   #####         #####  
 *    ####         #####  
 *    #####       ######  
 *     #####     #######  
 *      ################  
 *       #########  ####  
 *         ######   ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 *                  ####  
 ********************/
{4403, 21, 1, 18, 19, 27},

/********************
 *  Character: 'r', X advance: 13
 *  X offset: 2, Y offset: 18
 *  X size: 10, Y size: 20
 *    ###    ###   
 *    ###   ####   
 *    ### ######   
 *    #######      
 *    ######       
 *    #####        
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 *    ####         
 ********************/
{4468, 13, 2, 18, 10, 20},

/********************
 *  Character: 's', X advance: 19
 *  X offset: 2, Y offset: 18
 *  X size: 16, Y size: 20
 *         ######        
 *       ##########      
 *     #############     
 *     ####     ####     
 *    ####       ####    
 *    ####       ####    
 *    ####               
 *    #####              
 *     ######            
 *      #########        
 *       ###########     
 *           ########    
 *               #####   
 *                ####   
 *    ####        ####   
 *    ####        ####   
 *    #####     #####    
 *     ##############    
 *      ###########      
 *        #######        
 ********************/
{4493, 19, 2, 18, 16, 20},

/********************
 *  Character: 't', X advance: 11
 *  X offset: 2, Y offset: 13
 *  X size: 7, Y size: 25
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *    #######    
 *    #######    
 *    #######    
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ####      
 *     ######    
 *     ######    
 *      #####    
 ********************/
{4533, 11, 2, 13, 7, 25},

/********************
 *  Character: 'u', X advance: 20
 *  X offset: 2, Y offset: 18
 *  X size: 17, Y size: 20
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####         ####   
 *    ####        #####   
 *    #####      ######   
 *    ######    #######   
 *     ############ ###   
 *      ##########  ###   
 *        ######    ###   
 ********************/
{4555, 20, 2, 18, 17, 20},

/********************
 *  Character: 'v', X advance: 19
 *  X offset: 0, Y offset: 18
 *  X size: 18, Y size: 20
 *   ###           ### 
 *   ###          #### 
 *   ####         #### 
 *    ###         ###  
 *    ###        ####  
 *    ####       ###   
 *     ###       ###   
 *     ###      ####   
 *     ####     ###    
 *      ###     ###    
 *      ###    ###     
 *      ####   ###     
 *       ###   ###     
 *       ###  ###      
 *       #### ###      
 *        ### ###      
 *        ######       
 *        ######       
 *         ####        
 *         ####        
 ********************/
{4598, 19, 0, 18, 18, 20},

/********************
 *  Character: 'w', X advance: 27
 *  X offset: 0, Y offset: 18
 *  X size: 27, Y size: 20
 *  ####        ####       ####
 *   ###       #####       ####
 *   ###       #####       ### 
 *   ####      ######      ### 
 *    ###      ######     #### 
 *    ###     ### ###     #### 
 *    ####    ### ###     ###  
 *     ###    ### ####    ###  
 *     ###    ###  ###   ####  
 *     ###   ###   ###   ###   
 *     ####  ###   ###   ###   
 *      ###  ###   ####  ###   
 *      ###  ###    ### ###    
 *      ### ###     ### ###    
 *       ######     ### ###    
 *       ######     #######    
 *       ######      #####     
 *       #####       #####     
 *        ####       #####     
 *        ####       ####      
 ********************/
{4643, 27, 0, 18, 27, 20},

/********************
 *  Character: 'x', X advance: 18
 *  X offset: 0, Y offset: 18
 *  X size: 18, Y size: 20
 *   ####         ### 
 *    ###        ###  
 *    ####      ####  
 *     ####     ###   
 *      ###    ###    
 *      ####  ####    
 *       #### ###     
 *        ######      
 *         #####      
 *         ####       
 *         ####       
 *        ######      
 *        #######     
 *       ###  ###     
 *      ####  ####    
 *     ####    ####   
 *     ###      ###   
 *    ####      ####  
 *   ####        #### 
 *   ###          ### 
 ********************/
{4711, 18, 0, 18, 18, 20},

/********************
 *  Character: 'y', X advance: 18
 *  X offset: 0, Y offset: 18
 *  X size: 18, Y size: 28
 *   ###          ####
 *   ###          ### 
 *   ####        #### 
 *    ###        #### 
 *    ###        ###  
 *    ####      ####  
 *     ###      ###   
 *     ###      ###   
 *     ####    ####   
 *      ###    ###    
 *      ###    ###    
 *      ####  ####    
 *       ###  ###     
 *       ###  ###     
 *       #######      
 *        ######      
 *        ######      
 *        #####       
 *         ####       
 *         ####       
 *         ###        
 *         ###        
 *        ###         
 *        ###         
 *       ####         
 *    ######          
 *    #####           
 *    ####            
 ********************/
{4756, 18, 0, 18, 18, 28},

/********************
 *  Character: 'z', X advance: 18
 *  X offset: 1, Y offset: 18
 *  X size: 16, Y size: 20
 *    ###############  
 *    ###############  
 *    ###############  
 *               ###   
 *              ####   
 *             ####    
 *            ####     
 *           ####      
 *          ####       
 *         ####        
 *         ####        
 *        ####         
 *       ####          
 *      ####           
 *     ####            
 *    ####             
 *   ####              
 *   ################  
 *   ################  
 *   ################  
 ********************/
{4819, 18, 1, 18, 16, 20},

/********************
 *  Character: '{', X advance: 13
 *  X offset: 2, Y offset: 10
 *  X size: 8, Y size: 36
 *         ###     
 *        ####     
 *       #####     
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *      ####       
 *     ####        
 *    ####         
 *    ####         
 *     ####        
 *      ###        
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       ###       
 *       #####     
 *        ####     
 *         ###     
 ********************/
{4859, 13, 2, 10, 8, 36},

/********************
 *  Character: '|', X advance: 9
 *  X offset: 4, Y offset: 10
 *  X size: 2, Y size: 36
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 ********************/
{4895, 9, 4, 10, 2, 36},

/********************
 *  Character: '}', X advance: 13
 *  X offset: 3, Y offset: 10
 *  X size: 8, Y size: 36
 *     ###          
 *     ####         
 *     #####        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *        ###       
 *        ####      
 *         ####     
 *         ####     
 *        ####      
 *        ###       
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *       ###        
 *     #####        
 *     ####         
 *     ###          
 ********************/
{4904, 13, 3, 10, 8, 36},

/********************
 *  Character: '~', X advance: 19
 *  X offset: 1, Y offset: 21
 *  X size: 17, Y size: 7
 *     ####             
 *    #######           
 *   #########      ##  
 *   ###   #####    ##  
 *   ##      #########  
 *            #######   
 *              ####    
 ********************/
{4940, 19, 1, 21, 17, 7},

};

const monoGFX_font_t monoGFX_FreeSans_18pt = {bitmapBuffer, 4955, glyphs, 20};
