#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[4330] =
{
    0x00,0xde,0xff,0xff,0xff,0xff,0xff,0xbe,0xe7,0x79,0x9e,0xe7,0x79,0x0c,0x00,0x78,
    0xff,0xff,0x7b,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x06,0x66,0x60,0x06,
    0x66,0x60,0x06,0x06,0xe0,0x30,0xe0,0xf1,0xc0,0xe3,0x81,0xc7,0x03,0x8f,0x07,0x1e,
    0x0f,0x3c,0x0f,0x78,0x1e,0xfe,0xff,0xfe,0xff,0xff,0xff,0xf7,0xff,0x87,0xc7,0x03,
    0x8f,0x07,0x1e,0x0f,0x3c,0x1e,0xfe,0xff,0xfc,0xff,0xfb,0xff,0xf7,0xff,0x87,0xc7,
    0x03,0x8f,0x07,0x1e,0x0f,0x3c,0x0f,0x78,0x1e,0x78,0x3c,0xf0,0x78,0xc0,0x71,0x00,
    0x80,0x01,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xf8,0x3f,0xfc,0x7f,0xfe,0x7f,0x3f,0x78,
    0x0f,0x78,0x0f,0x30,0x1f,0x00,0x7f,0x00,0xfe,0x07,0xfc,0x1f,0xf8,0x3f,0xc0,0x7f,
    0x00,0xfc,0x00,0xf0,0x03,0xf0,0x07,0xf0,0x07,0xf0,0x1f,0x7c,0xff,0x7f,0xff,0x3f,
    0xfb,0x0f,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0x80,0x01,0xf8,0x00,
    0xf8,0x07,0x38,0x0c,0x38,0x30,0x30,0x60,0x60,0xc0,0xc0,0x81,0x01,0x87,0x01,0xfc,
    0xc3,0xf0,0xf1,0x03,0xfc,0x01,0x7f,0xc0,0x1f,0xe0,0xc7,0xc3,0xe1,0x1f,0xc0,0x30,
    0xc0,0xc0,0x80,0x81,0x01,0x03,0x03,0x06,0x06,0x18,0x06,0xf0,0x0f,0x80,0x07,0xc0,
    0x0b,0xf0,0x1f,0xf8,0x3f,0xf8,0x1f,0x7c,0x0e,0x3c,0x00,0x3c,0x00,0x7c,0x00,0x78,
    0x00,0xf0,0x00,0xfc,0x01,0xfe,0xf3,0xfe,0xfb,0xdf,0xff,0x8f,0x7f,0x0f,0x3f,0x1f,
    0x3e,0xff,0xff,0xfe,0xff,0xfc,0xff,0xf0,0xfb,0xff,0xff,0xff,0x66,0x66,0x06,0xe0,
    0xf0,0xf0,0xf8,0x78,0x7c,0x3c,0x1e,0x1e,0x1e,0x0e,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
    0x0f,0x0f,0x1e,0x1e,0x1e,0x3e,0x3c,0x7c,0x78,0xf8,0xf0,0xf0,0x60,0x07,0x0f,0x0f,
    0x1f,0x1e,0x3e,0x3c,0x7c,0x78,0x78,0x78,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
    0x78,0x78,0x78,0x7c,0x3c,0x3e,0x1e,0x1f,0x0f,0x0f,0x06,0x80,0x01,0xc0,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xcf,0xf3,0xff,0xff,0xff,0xff,0xfe,0x7f,0xf0,0x0f,0xf0,
    0x0f,0xf0,0x0f,0xf8,0x1f,0x7c,0x3e,0x3c,0x3c,0x18,0x18,0x00,0x03,0x00,0x1e,0x00,
    0x78,0x00,0xe0,0x01,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,0xe0,0x01,0xff,0xff,0xfd,
    0xff,0xff,0xff,0xbf,0xff,0x7f,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,0xe0,0x01,0x80,
    0x07,0x00,0x1e,0x00,0x78,0x00,0xe0,0x01,0x00,0x03,0x00,0xf8,0x7c,0x7c,0x3c,0x3e,
    0x1e,0x0e,0x0e,0x07,0x07,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,
    0xee,0xff,0xef,0x00,0x00,0xe0,0x00,0xc0,0x03,0xc0,0x03,0x80,0x07,0x80,0x07,0x00,
    0x0f,0x00,0x0f,0x00,0x1e,0x00,0x3e,0x00,0x3c,0x00,0x7c,0x00,0x78,0x00,0xf8,0x00,
    0xf0,0x00,0xe0,0x01,0xe0,0x01,0xc0,0x03,0xc0,0x03,0x80,0x07,0x80,0x07,0x00,0x0f,
    0x00,0x0f,0x00,0x1e,0x00,0x1e,0x00,0x3c,0x00,0x7c,0x00,0x78,0x00,0xf8,0x00,0xf0,
    0x00,0xe0,0x01,0x00,0xc0,0x0f,0xe0,0x3f,0xe0,0xff,0xe0,0xff,0xe3,0xc3,0xcf,0x03,
    0xde,0x07,0xfc,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,0x3f,0x80,0x7f,0x00,0xff,0x00,0xfe,
    0x01,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,0x3f,0xe0,0x7b,0xc0,0xf3,0xe3,0xc7,0xff,
    0x07,0xff,0x07,0xfc,0x07,0xf0,0x07,0xe0,0x03,0xf0,0x03,0xfc,0x03,0xfe,0x03,0xdf,
    0x03,0xcf,0x03,0xc6,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xfe,
    0x7f,0xff,0xff,0xff,0xff,0xfe,0x7f,0xc0,0x0f,0xe0,0x7f,0xe0,0xff,0xe1,0xff,0xe7,
    0x83,0xcf,0x03,0xbe,0x07,0x78,0x06,0xf0,0x00,0xe0,0x01,0xe0,0x03,0xe0,0x03,0xe0,
    0x03,0xe0,0x03,0xe0,0x03,0xe0,0x03,0xf0,0x03,0xf0,0x03,0xf0,0x03,0xf0,0x03,0xff,
    0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x07,0xf8,0x3f,0xf8,0xff,
    0xf8,0xff,0xf3,0xc1,0xcf,0x00,0x1e,0x00,0x3c,0x00,0x78,0x00,0x78,0x00,0xff,0x00,
    0x7f,0x00,0xfe,0x00,0xfc,0x07,0x80,0x1f,0x00,0x7c,0x00,0xf0,0x00,0xe0,0x01,0xc0,
    0x03,0xc0,0x7f,0xc0,0xf7,0xff,0xef,0xff,0x8f,0xff,0x0f,0xfc,0x07,0x00,0x3f,0x00,
    0x3f,0x80,0x3f,0x80,0x3f,0xc0,0x3f,0xe0,0x3f,0xe0,0x3d,0xf0,0x3c,0xf0,0x3c,0x78,
    0x3c,0x3c,0x3c,0x3c,0x3c,0x1e,0x3c,0x1e,0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0x7f,0x00,0x3c,0x80,0xff,0xc0,0xff,0xc0,0xff,0x80,0x7f,0xfc,0x3f,0xf8,0xff,0xf0,
    0xff,0xe1,0xff,0xc1,0x03,0x80,0x07,0x00,0x0f,0x00,0x1e,0x00,0xbc,0x0f,0xf8,0x7f,
    0xf0,0xff,0xe1,0xff,0x87,0x83,0x0f,0x00,0x3e,0x00,0x78,0x00,0xf0,0x00,0xe0,0x01,
    0xc0,0x1b,0xc0,0x7f,0xc0,0xf7,0xff,0xcf,0xff,0x0f,0xff,0x0f,0xf8,0x07,0x00,0x7f,
    0xc0,0xff,0xe0,0xff,0xf0,0xff,0xf8,0x01,0x7c,0x00,0x3e,0x00,0x1e,0x00,0x1f,0x00,
    0xcf,0x07,0xef,0x1f,0xff,0x3f,0xff,0x7f,0x3f,0x7c,0x1f,0xf8,0x0f,0xf0,0x0f,0xf0,
    0x0f,0xf0,0x1f,0xf8,0x3e,0x7c,0xfe,0x7f,0xfc,0x3f,0xf8,0x1f,0xe0,0x07,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xf0,0x07,0xf0,0x00,0x78,0x00,0x78,0x00,0x78,
    0x00,0x3c,0x00,0x3c,0x00,0x3c,0x00,0x1e,0x00,0x1e,0x00,0x1e,0x00,0x0f,0x00,0x0f,
    0x00,0x0f,0x80,0x07,0x80,0x07,0x80,0x07,0xc0,0x03,0xc0,0x03,0x80,0x03,0xe0,0x03,
    0xfc,0x07,0xff,0xc7,0xff,0xf7,0xc1,0x7f,0xc0,0x3f,0xe0,0x1f,0xf0,0x0f,0x78,0x0f,
    0x1e,0xff,0x07,0xff,0x81,0xff,0xe0,0xff,0xf8,0xf8,0x1e,0xf0,0x0f,0xf8,0x07,0xfc,
    0x03,0xfe,0x83,0xef,0xff,0xf3,0xff,0xf1,0x3f,0xe0,0x0f,0xe0,0x07,0xf8,0x1f,0xfc,
    0x3f,0xfe,0x7f,0x3f,0x7c,0x1f,0xf8,0x0f,0xf0,0x0f,0xf0,0x0f,0xf0,0x1f,0xf8,0x3e,
    0xfc,0xfe,0xff,0xfc,0xff,0xf8,0xf7,0xe0,0xf3,0x00,0xf8,0x00,0x78,0x00,0x7c,0x00,
    0x3e,0x80,0x1f,0xff,0x0f,0xff,0x07,0xff,0x03,0xfe,0x00,0xee,0xff,0xef,0x00,0x00,
    0x00,0x00,0xe0,0xfe,0xff,0x0e,0x38,0x3e,0x9f,0x8f,0x03,0x00,0x00,0x00,0x00,0x00,
    0xc0,0xe7,0xf1,0x38,0x1e,0x87,0xe3,0x70,0x38,0x0c,0x00,0x00,0x00,0x03,0x00,0x3f,
    0x00,0xfe,0x00,0xfc,0x03,0xf8,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,0x3f,0x00,0xff,0x00,
    0xe0,0x1f,0x00,0xfc,0x03,0x80,0x3f,0x00,0xf0,0x07,0x00,0xfe,0x00,0xc0,0x0f,0x00,
    0xf8,0x00,0x00,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,
    0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x06,
    0x00,0xf8,0x00,0xc0,0x1f,0x00,0xf8,0x03,0x00,0x7f,0x00,0xf0,0x0f,0x00,0xfe,0x01,
    0xc0,0x3f,0x00,0xf8,0x07,0xf0,0x0f,0xe0,0x1f,0xc0,0x3f,0x00,0x7f,0x00,0xfe,0x00,
    0xfc,0x01,0xe0,0x03,0x00,0x06,0x00,0x00,0xf0,0x07,0xfe,0x1f,0xff,0x3f,0xff,0x7f,
    0x1f,0xfc,0x0f,0xf8,0x0e,0xf0,0x00,0xf0,0x00,0xf8,0x00,0x7c,0x00,0x7f,0xc0,0x3f,
    0xc0,0x0f,0xc0,0x03,0xc0,0x01,0x80,0x01,0x00,0x00,0x00,0x00,0xc0,0x01,0xe0,0x03,
    0xe0,0x03,0xe0,0x03,0xc0,0x01,0xc0,0x07,0xf0,0x0f,0xf8,0x1f,0x3c,0x3c,0x1c,0x78,
    0x0e,0x70,0x0e,0x70,0x0f,0x70,0x07,0x70,0x07,0x7e,0x07,0x7f,0xc7,0x7f,0xc7,0x73,
    0xe7,0x71,0xe7,0x70,0xe7,0x70,0xe7,0x70,0xe7,0x71,0xc7,0xff,0x87,0xff,0x07,0xff,
    0x07,0x00,0x0f,0x00,0x0e,0x00,0x0e,0x00,0x1c,0x30,0x3c,0x78,0xf8,0x7f,0xf0,0x3f,
    0xe0,0x0f,0xf0,0x3f,0x00,0xf8,0x7f,0x00,0xf0,0x7f,0x00,0xf0,0xff,0x00,0x00,0xff,
    0x00,0x00,0xff,0x00,0x80,0xe7,0x01,0x80,0xe7,0x01,0xc0,0xe7,0x03,0xc0,0xc3,0x03,
    0xc0,0xc3,0x03,0xe0,0x81,0x07,0xe0,0xff,0x07,0xf0,0xff,0x0f,0xf0,0xff,0x0f,0xf0,
    0xff,0x0f,0x78,0x00,0x1e,0x78,0x00,0x1e,0xfe,0x81,0x7f,0xff,0xc3,0xff,0xff,0xc3,
    0xff,0xfe,0x81,0x7f,0xfe,0x3f,0xf0,0xff,0x0f,0xff,0xff,0xf1,0xff,0x1f,0x3c,0xe0,
    0xc3,0x03,0x3c,0x3c,0xc0,0xc3,0x03,0x3c,0x3c,0xf0,0xc1,0xff,0x1f,0xfc,0xff,0xc0,
    0xff,0x3f,0xfc,0xff,0xc7,0x03,0x7c,0x3c,0x80,0xcf,0x03,0xf0,0x3c,0x00,0xcf,0x03,
    0xf8,0xff,0xff,0xf7,0xff,0x7f,0xff,0xff,0xe3,0xff,0x0f,0x80,0x3f,0x06,0xfe,0xff,
    0xf8,0xff,0xcf,0xff,0xff,0xfc,0xc0,0xef,0x03,0xf8,0x1e,0x00,0xff,0x01,0x70,0x0f,
    0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,
    0xf0,0x01,0x00,0x3e,0x00,0xee,0x0f,0xf8,0xfc,0xff,0x8f,0xff,0xff,0xe0,0xff,0x03,
    0xf8,0x07,0xfe,0x1f,0xf0,0xff,0x07,0xff,0xff,0xf1,0xff,0x3f,0x3c,0xf0,0xc3,0x03,
    0x7c,0x3c,0x80,0xc7,0x03,0xf8,0x3c,0x00,0xcf,0x03,0xf0,0x3c,0x00,0xcf,0x03,0xf0,
    0x3c,0x00,0xcf,0x03,0xf0,0x3c,0x00,0xcf,0x03,0xf8,0x3c,0xc0,0xc7,0x03,0x7e,0xfe,
    0xff,0xf3,0xff,0x1f,0xff,0xff,0xe0,0xff,0x03,0xfe,0xff,0xfb,0xff,0xdf,0xff,0xff,
    0xfe,0xff,0xc7,0x03,0x3c,0x1e,0xe0,0xf1,0x00,0x8f,0xc7,0x31,0x3c,0x1e,0xe0,0xff,
    0x00,0xff,0x07,0xf8,0x3f,0xc0,0xff,0x01,0x1e,0x0f,0xf0,0x78,0x8c,0x87,0xf1,0x3c,
    0x80,0xe7,0x01,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0x03,0xfe,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0x03,0x78,0x1e,0xc0,0xf3,0x30,0x9e,0xc7,
    0x63,0x3c,0x1e,0xe0,0xff,0x00,0xff,0x07,0xf8,0x3f,0xc0,0xff,0x01,0x1e,0x0f,0xf0,
    0x38,0x80,0x07,0x00,0x3c,0x00,0xe0,0x01,0xc0,0xff,0x01,0xfe,0x1f,0xf0,0xff,0x00,
    0xff,0x03,0x00,0x80,0x7f,0x06,0xfc,0xff,0xc1,0xff,0x3f,0xfc,0xff,0xc7,0x0f,0xfc,
    0x7c,0x00,0x9e,0x07,0xc0,0xfb,0x00,0x30,0x0f,0x00,0xe0,0x01,0x00,0x3c,0x00,0x80,
    0x07,0xfc,0xf7,0xc0,0xff,0x1f,0xf8,0xff,0x03,0xfe,0xff,0x00,0x78,0x3e,0x00,0xcf,
    0x1f,0xf0,0xf1,0xff,0x3f,0xfc,0xff,0x07,0xff,0x3f,0x00,0xff,0x00,0xfe,0xe0,0xef,
    0x3f,0xfe,0xff,0xc7,0x7f,0x7f,0xf8,0xc7,0x03,0x3c,0x78,0x80,0x07,0x0f,0xf0,0xe0,
    0x01,0x1e,0x3c,0xc0,0x83,0xff,0x7f,0xf0,0xff,0x0f,0xfe,0xff,0xc1,0xff,0x3f,0x78,
    0x80,0x07,0x0f,0xf0,0xe0,0x01,0x1e,0x3c,0xc0,0x83,0x07,0x78,0xfc,0xc3,0xbf,0xff,
    0xf8,0xff,0x1f,0xff,0xfd,0xc1,0x1f,0xfe,0x7f,0xff,0xff,0xff,0xff,0xfe,0x7f,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xfe,0x7f,0xff,0xff,0xff,
    0xff,0xfe,0x7f,0x80,0xff,0x0f,0xf0,0xff,0x03,0xfe,0x7f,0x80,0xff,0x07,0x00,0x1e,
    0x00,0xc0,0x03,0x00,0x78,0x00,0x00,0x0f,0x00,0xe0,0x01,0x00,0x3c,0x00,0x80,0x07,
    0x03,0xf0,0xf0,0x00,0x1e,0x1e,0xc0,0xc3,0x03,0x78,0x78,0x00,0x0f,0x0f,0xf0,0xe1,
    0x07,0x1f,0xfc,0xff,0x83,0xff,0x3f,0xc0,0xff,0x03,0xc0,0x1f,0x00,0xff,0xf0,0xe7,
    0x3f,0xff,0xfd,0xe7,0xbf,0xff,0xf8,0xc3,0x83,0x1f,0x78,0xf8,0x01,0x8f,0x1f,0xe0,
    0xf9,0x00,0xbc,0x0f,0x80,0xff,0x00,0xf0,0x3f,0x00,0xfe,0x0f,0xc0,0xef,0x03,0xf8,
    0xf8,0x00,0x0f,0x3e,0xe0,0xc1,0x07,0x3c,0xf0,0x81,0x07,0x3c,0xfc,0x87,0xbf,0xff,
    0xf0,0xff,0x1f,0xfc,0xfd,0x81,0x1f,0xff,0x07,0xf0,0xff,0x00,0xff,0x0f,0xe0,0x7f,
    0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,
    0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0x06,0x0f,0xf0,0xf0,0x00,0x0f,0x0f,0xf0,0xf0,
    0x00,0x0f,0x0f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x7c,0x00,
    0x3e,0xfe,0x00,0x7f,0xfe,0x00,0x7f,0xfe,0x81,0x7f,0xfc,0x81,0x3f,0xfc,0x81,0x3f,
    0xfc,0xc3,0x3f,0xfc,0xc3,0x3f,0xbc,0xe7,0x3d,0xbc,0xe7,0x3d,0x3c,0xff,0x3d,0x3c,
    0xff,0x3c,0x3c,0xfe,0x3c,0x3c,0x7e,0x3c,0x3c,0x7c,0x3c,0x3c,0x3c,0x3c,0x3c,0x38,
    0x3c,0x3c,0x00,0x3c,0xff,0x81,0xff,0xff,0xc3,0xff,0xff,0xc3,0xff,0xfe,0x81,0x7f,
    0x3f,0xf0,0xef,0x0f,0xff,0xff,0xe3,0xff,0x7f,0xf8,0xcf,0x1f,0x78,0xf8,0x03,0x0f,
    0xff,0xe0,0xe1,0x3f,0x3c,0xbc,0x87,0x87,0xf7,0xf1,0xf0,0x3c,0x1e,0x1e,0xcf,0xc3,
    0xe3,0x7b,0x78,0x78,0x0f,0x0f,0xff,0xe1,0xc1,0x3f,0x3c,0xf0,0x87,0x07,0xfe,0xfc,
    0x87,0x9f,0xff,0xe1,0xf3,0x3f,0x7c,0xfc,0x03,0x0f,0x80,0x1f,0x00,0xfc,0x1f,0xc0,
    0xff,0x07,0xfc,0xff,0xc1,0x0f,0x7e,0xfc,0x80,0x9f,0x0f,0xe0,0xfb,0x00,0x78,0x0f,
    0x00,0xfe,0x01,0xc0,0x3f,0x00,0xf8,0x07,0x00,0xff,0x00,0xe0,0x1f,0x00,0xfc,0x07,
    0xc0,0xf3,0x01,0x7c,0x7e,0xc0,0x8f,0x1f,0xfc,0xe0,0xff,0x0f,0xf8,0xff,0x00,0xfe,
    0x0f,0x00,0x7f,0x00,0xfe,0x1f,0xfc,0xff,0xf1,0xff,0xcf,0xff,0x7f,0x3c,0xf0,0xf1,
    0x80,0xcf,0x03,0x3c,0x0f,0xf0,0x3c,0xc0,0xf3,0x80,0xcf,0x03,0x1f,0xff,0x7f,0xfc,
    0xff,0xf0,0xff,0xc1,0xff,0x01,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xf0,0x7f,0xc0,0xff,
    0x03,0xff,0x0f,0xf8,0x1f,0x00,0x80,0x3f,0x00,0xfc,0x1f,0xc0,0xff,0x07,0xfc,0xff,
    0xc1,0x0f,0x7e,0xfc,0x80,0x9f,0x0f,0xe0,0xfb,0x00,0x78,0x0f,0x00,0xfe,0x01,0xc0,
    0x3f,0x00,0xf8,0x07,0x00,0xff,0x00,0xe0,0x1f,0x00,0xbc,0x07,0xc0,0xf3,0x01,0x7c,
    0x7e,0x80,0x8f,0x1f,0xfc,0xe0,0xff,0x0f,0xf8,0xff,0x00,0xfe,0x0f,0x00,0x7f,0x00,
    0x70,0x00,0x03,0xff,0xf1,0xf0,0xff,0x1f,0xfe,0xff,0xc3,0xff,0x3f,0x70,0xf0,0x01,
    0xff,0x3f,0xc0,0xff,0x3f,0xf0,0xff,0x1f,0xf8,0xff,0x0f,0x78,0xe0,0x07,0x1e,0xe0,
    0x81,0x07,0x78,0xe0,0x01,0x1e,0x78,0xc0,0x07,0x1e,0xf8,0x80,0xff,0x3f,0xe0,0xff,
    0x07,0xf8,0x7f,0x00,0xfe,0x3f,0x80,0x87,0x1f,0xe0,0xc1,0x0f,0x78,0xe0,0x03,0x1e,
    0xf0,0xe1,0x3f,0xf8,0xfd,0x0f,0xfc,0xff,0x03,0xbf,0x7f,0x80,0x07,0xc0,0xcf,0xc1,
    0xff,0xc7,0xff,0x1f,0xff,0x7f,0x3e,0xf8,0x79,0x80,0xe7,0x01,0x9e,0x0f,0x30,0xfe,
    0x01,0xf0,0x7f,0x80,0xff,0x0f,0xf8,0x7f,0x00,0xff,0x1b,0xc0,0xff,0x00,0xfc,0x03,
    0xf0,0x1f,0xe0,0xff,0xc0,0xff,0xff,0xdf,0xff,0x3f,0xf6,0x7f,0x00,0x7f,0x00,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x78,0xf8,0xc7,0xc3,0x3f,0x1e,0xfe,
    0xf1,0xf0,0x8f,0x87,0x37,0x3c,0x18,0xe0,0x01,0x00,0x0f,0x00,0x78,0x00,0xc0,0x03,
    0x00,0x1e,0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,0x00,0xfe,0x1f,0xf0,0xff,0x80,0xff,
    0x07,0xf8,0x1f,0x00,0xfe,0xf1,0xef,0x7f,0xff,0xff,0xef,0x7f,0xff,0xf8,0xcf,0x03,
    0x78,0x78,0x00,0x0f,0x0f,0xe0,0xe1,0x01,0x3c,0x3c,0x80,0x87,0x07,0xf0,0xf0,0x00,
    0x1e,0x1e,0xc0,0xc3,0x03,0x78,0x78,0x00,0x0f,0x0f,0xe0,0xe1,0x01,0x3c,0x7c,0xc0,
    0x07,0x3f,0x7e,0xe0,0xff,0x0f,0xf8,0xff,0x00,0xfc,0x07,0x00,0x3e,0x00,0xfe,0x01,
    0xff,0xfe,0x07,0xff,0xff,0x0f,0xfe,0xf7,0x0f,0xf8,0x87,0x07,0xc0,0x03,0x0f,0x80,
    0x07,0x3c,0x80,0x07,0x78,0x00,0x0f,0xf0,0x01,0x0f,0xc0,0x03,0x1e,0x80,0x0f,0x3e,
    0x00,0x1e,0x3c,0x00,0x7c,0x7c,0x00,0xf0,0x78,0x00,0xe0,0xf3,0x00,0xc0,0xf7,0x00,
    0x00,0xff,0x01,0x00,0xfe,0x03,0x00,0xf8,0x03,0x00,0xf0,0x07,0x00,0xc0,0x07,0x00,
    0x80,0x0f,0x00,0xfe,0xc1,0xbf,0xff,0xf1,0xff,0xff,0xf8,0xff,0x3f,0xf8,0xe7,0x01,
    0xc0,0xe1,0xe0,0xf0,0xf0,0xf8,0x78,0x78,0x7c,0x3c,0x3c,0x7e,0x1e,0x9e,0x3f,0x0f,
    0xcf,0x9f,0x87,0xe7,0xde,0x81,0x7b,0xef,0xc0,0xbf,0x7f,0xe0,0xdf,0x3f,0xf0,0xc7,
    0x1f,0xf8,0xe3,0x0f,0xfc,0xf1,0x07,0x7e,0xf0,0x03,0x3f,0xf8,0x00,0x1f,0x7c,0x80,
    0x07,0x3c,0x00,0x7e,0xe0,0xe7,0x1f,0xfe,0xfd,0xc3,0x3f,0x3f,0xf0,0xc3,0x07,0x3e,
    0xf0,0xe1,0x03,0x7c,0x3c,0x00,0xdf,0x03,0xc0,0x3f,0x00,0xf0,0x03,0x00,0x7e,0x00,
    0xc0,0x0f,0x00,0xfc,0x03,0xc0,0xff,0x00,0xf8,0x1e,0x80,0x8f,0x07,0xf8,0xe0,0x81,
    0x0f,0x7c,0xf8,0xc3,0xbf,0xff,0xf8,0xff,0x1f,0xff,0xfd,0xc1,0x1f,0x7e,0xe0,0xf7,
    0x0f,0xff,0xff,0xf0,0xef,0x07,0x7e,0x78,0xe0,0x81,0x0f,0x1f,0xf0,0xf0,0x00,0x9e,
    0x07,0xe0,0x7f,0x00,0xfc,0x03,0x80,0x1f,0x00,0xf8,0x01,0x00,0x0f,0x00,0xf0,0x00,
    0x00,0x0f,0x00,0xf0,0x00,0x00,0x0f,0x00,0xf0,0x00,0xf0,0x7f,0x00,0xff,0x0f,0xf0,
    0xff,0x00,0xfe,0x07,0xfe,0xff,0xfc,0xff,0xf9,0xff,0xf3,0xff,0xe7,0x81,0xcf,0x83,
    0x8f,0x87,0x0f,0x8f,0x0f,0x0c,0x0f,0x00,0x1f,0x00,0x1f,0x00,0x1f,0x00,0x1f,0x00,
    0x3e,0x18,0x3e,0x78,0x3e,0xf0,0x3e,0xe0,0x7f,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x3f,0x7f,0xff,0xff,0x7f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
    0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x7f,0xff,0xff,
    0x7f,0x0f,0x00,0x1e,0x00,0x7c,0x00,0xf0,0x00,0xe0,0x03,0x80,0x07,0x00,0x0f,0x00,
    0x3c,0x00,0x78,0x00,0xe0,0x01,0xc0,0x03,0x00,0x0f,0x00,0x1e,0x00,0x78,0x00,0xf0,
    0x00,0xc0,0x03,0x80,0x07,0x00,0x1e,0x00,0x3c,0x00,0xf8,0x00,0xe0,0x01,0xc0,0x07,
    0x00,0x0f,0x00,0x3e,0x00,0x78,0x00,0xf0,0x00,0xc0,0x03,0x80,0x07,0x00,0x1e,0x00,
    0x1c,0xfe,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
    0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xfe,0xff,0xff,0xff,0x00,
    0x01,0x00,0x07,0x00,0x1f,0x00,0x3f,0x00,0xff,0x00,0xfe,0x03,0xbe,0x0f,0x3e,0x3e,
    0x3e,0xf8,0x3e,0xe0,0x3d,0x80,0x37,0x00,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x0f,0x87,0x87,0x87,0x87,0x87,0x03,0xe0,0x1f,0xe0,0xff,0x03,
    0xff,0x3f,0xf8,0xff,0x03,0x00,0x1e,0xe0,0xff,0xe0,0xff,0x87,0xff,0x3f,0xfe,0xff,
    0xf1,0x01,0xcf,0x07,0x78,0x1e,0xc0,0xf3,0xc0,0x9f,0xff,0xff,0xfb,0xff,0x9f,0xff,
    0xff,0xf0,0xe7,0x03,0x7e,0x00,0xc0,0x1f,0x00,0xf0,0x07,0x00,0xf8,0x01,0x00,0x78,
    0x00,0x00,0x1e,0x00,0x80,0x07,0x00,0xe0,0xf1,0x03,0x78,0xff,0x03,0xfe,0xff,0x81,
    0xff,0xff,0xe0,0x0f,0x7e,0xf8,0x00,0x1e,0x3e,0x80,0x8f,0x07,0xc0,0xe3,0x01,0xf0,
    0x78,0x00,0x3c,0x1e,0x00,0x8f,0x0f,0xe0,0xe3,0x0f,0x7e,0xff,0xff,0xdf,0xff,0xff,
    0xf3,0xff,0x3f,0xf8,0xf9,0x03,0xc0,0x3f,0x83,0xff,0x3f,0xfe,0xff,0xf9,0xff,0xef,
    0x07,0x7e,0x1f,0xc0,0x7f,0x00,0xfe,0x01,0x60,0x0f,0x00,0x78,0x00,0xc0,0x03,0x00,
    0x3e,0x00,0xe6,0x07,0x7c,0xff,0xff,0xf3,0xff,0x0f,0xff,0x3f,0xc0,0x3f,0x00,0x00,
    0xe0,0x07,0x00,0xfe,0x00,0xc0,0x1f,0x00,0xf0,0x03,0x00,0x78,0x00,0x00,0x0f,0x00,
    0xe0,0x01,0x7e,0x3c,0xf0,0xbf,0x07,0xff,0xff,0xf0,0xff,0x1f,0x3f,0xf8,0xe3,0x01,
    0x7c,0x3e,0x80,0xcf,0x03,0xe0,0x79,0x00,0x3c,0x0f,0x80,0xe7,0x01,0xf0,0x7c,0x00,
    0x1f,0x3f,0xf8,0xc3,0xff,0xff,0xf9,0xff,0x3f,0xfc,0xff,0x07,0xfe,0x7c,0x80,0x1f,
    0x00,0xfe,0x0f,0xf8,0xff,0xc1,0xff,0x3f,0x7e,0xe0,0xe7,0x01,0x78,0x1e,0x80,0xf7,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0x01,0x00,0x7e,0x00,0xc7,0xff,
    0xff,0xf8,0xff,0x0f,0xff,0x3f,0xc0,0x7f,0x00,0x00,0xff,0x00,0xff,0x0f,0xfe,0x3f,
    0xfc,0xff,0xf0,0x01,0xc0,0x03,0x00,0x0f,0xc0,0xff,0x1f,0xff,0xff,0xfc,0xff,0xe3,
    0xff,0x07,0x3c,0x00,0xf0,0x00,0xc0,0x03,0x00,0x0f,0x00,0x3c,0x00,0xf0,0x00,0xc0,
    0x03,0x00,0x0f,0x00,0x3c,0x00,0xff,0x3f,0xfc,0xff,0xf1,0xff,0x87,0xff,0x0f,0xc0,
    0x9f,0x0f,0xfe,0xff,0xe3,0xff,0x7f,0xfe,0xff,0xef,0x07,0x7f,0x3e,0x80,0xcf,0x03,
    0xe0,0x79,0x00,0x3c,0x0f,0x80,0xe7,0x01,0xf0,0x7c,0x00,0x1f,0x1f,0xf0,0xe3,0x07,
    0x7f,0xf8,0xff,0x0f,0xfe,0xff,0x81,0xff,0x3d,0xc0,0x8f,0x07,0x00,0xf0,0x00,0x00,
    0x1e,0x00,0xe0,0x03,0x00,0x7c,0x80,0xff,0x07,0xf8,0x7f,0x00,0xff,0x07,0xc0,0x7f,
    0x00,0x7e,0x00,0xc0,0x1f,0x00,0xf0,0x07,0x00,0xf8,0x01,0x00,0x78,0x00,0x00,0x1e,
    0x00,0x80,0x07,0x00,0xe0,0xf1,0x01,0x78,0xff,0x01,0xfe,0xff,0x80,0xff,0x7f,0xe0,
    0x0f,0x1f,0xf8,0x80,0x07,0x1e,0xe0,0x81,0x07,0x78,0xe0,0x01,0x1e,0x78,0x80,0x07,
    0x1e,0xe0,0x81,0x07,0x78,0xe0,0x01,0x1e,0xfe,0xe1,0xdf,0x7f,0xf8,0xff,0x1f,0xfe,
    0xfb,0x03,0x7f,0xe0,0x01,0xe0,0x01,0xe0,0x01,0xe0,0x01,0x00,0x00,0x00,0x00,0x00,
    0x00,0xfc,0x03,0xfe,0x03,0xfe,0x03,0xfc,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xff,0x7f,0xff,0xff,0xff,
    0xff,0xfe,0x7f,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x00,0x00,0x00,0x00,0xf8,
    0xff,0xff,0xff,0xff,0xef,0xff,0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x03,0xf0,0x00,
    0x3c,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,
    0x0f,0xc0,0x03,0xf8,0xfe,0xdf,0xff,0xf3,0x7f,0xf8,0x0f,0x7e,0x00,0xf0,0x07,0x00,
    0x7f,0x00,0xe0,0x07,0x00,0x78,0x00,0x80,0x07,0x00,0x78,0x00,0x80,0xc7,0x1f,0x78,
    0xfe,0x83,0xe7,0x3f,0x78,0xfc,0x81,0xe7,0x03,0xf8,0x1f,0x80,0xff,0x00,0xf8,0x07,
    0x80,0x7f,0x00,0xf8,0x1f,0x80,0xf7,0x03,0x78,0x7e,0x80,0xc7,0x0f,0x7e,0xf0,0xf7,
    0x87,0xff,0x7f,0xf8,0xef,0x07,0x7f,0xfc,0x03,0xfe,0x03,0xfe,0x03,0xfc,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,
    0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xff,
    0x7f,0xff,0xff,0xff,0xff,0xfe,0x7f,0xbe,0x87,0x07,0xff,0xff,0x1f,0xff,0xff,0x1f,
    0xff,0xff,0x3f,0x7c,0x7c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,
    0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0xff,0x7c,
    0xfc,0xff,0xfc,0xfc,0xff,0xfc,0xfc,0x7e,0x7c,0x7c,0x7c,0x7e,0xc0,0xef,0x3f,0xf8,
    0xff,0x0f,0xff,0xff,0x81,0x1f,0x7c,0xf0,0x01,0x0f,0x1e,0xe0,0xc1,0x03,0x3c,0x78,
    0x80,0x07,0x0f,0xf0,0xe0,0x01,0x1e,0x3c,0xc0,0x83,0x07,0x78,0xfc,0xc3,0xff,0x7f,
    0xf8,0xff,0x0f,0xff,0xfe,0xc0,0x0f,0xc0,0x1f,0x80,0xff,0x03,0xfe,0x3f,0xf8,0xff,
    0xe3,0x07,0x3f,0x0f,0xe0,0x7d,0x00,0xff,0x01,0xf0,0x0f,0x80,0x7f,0x00,0xfc,0x07,
    0xf0,0x3d,0x80,0xe7,0x07,0x3f,0xfe,0xff,0xe0,0xff,0x03,0xfe,0x0f,0xc0,0x1f,0x00,
    0x7c,0xfe,0x80,0xdf,0xff,0xe0,0xff,0x7f,0xf8,0xff,0x3f,0xf8,0x83,0x1f,0x3e,0x80,
    0x87,0x07,0xc0,0xe3,0x01,0xf0,0x78,0x00,0x3c,0x1e,0x00,0x8f,0x0f,0xe0,0xe3,0x03,
    0x7c,0xf8,0x83,0x1f,0xfe,0xff,0x83,0xff,0x7f,0xe0,0xfd,0x0f,0x78,0xfc,0x00,0x1e,
    0x00,0x80,0x07,0x00,0xe0,0x01,0x00,0x78,0x00,0x80,0xff,0x01,0xf0,0x7f,0x00,0xfc,
    0x1f,0x00,0xfe,0x03,0x00,0xc0,0x9f,0x0f,0xfc,0xef,0x87,0xff,0xff,0xf1,0xff,0x7f,
    0x7e,0xf0,0x87,0x07,0xf0,0xf1,0x00,0x78,0x3c,0x00,0x1e,0x0f,0x80,0xc7,0x03,0xe0,
    0xf1,0x01,0x7c,0x78,0x00,0x1f,0x7e,0xf0,0x07,0xff,0xff,0x81,0xff,0x7f,0xc0,0xff,
    0x1e,0xc0,0x8f,0x07,0x00,0xe0,0x01,0x00,0x78,0x00,0x00,0x1e,0x00,0x80,0x07,0x00,
    0xfc,0x07,0x80,0xff,0x03,0xe0,0xff,0x00,0xf0,0x1f,0xfc,0xf0,0xf1,0xe7,0x9f,0xbf,
    0xff,0xfd,0xff,0x0f,0xff,0x71,0xf8,0x03,0xc0,0x07,0x00,0x1e,0x00,0xf0,0x00,0x80,
    0x07,0x00,0x3c,0x00,0xe0,0x01,0x00,0x0f,0x80,0xff,0x1f,0xfc,0xff,0xe1,0xff,0x0f,
    0xfe,0x3f,0x00,0xe0,0xcf,0xf0,0xff,0xf1,0xff,0xf3,0xff,0xe7,0x01,0xcf,0x03,0x9c,
    0xff,0x01,0xfe,0x1f,0xf8,0xff,0x00,0xfe,0x19,0xc0,0x7f,0x00,0xff,0x01,0xff,0xff,
    0xff,0xff,0x3f,0xff,0x3f,0xe0,0x1f,0x00,0x30,0x00,0xe0,0x01,0x80,0x07,0x00,0x1e,
    0x00,0x78,0x00,0xfc,0xff,0xf1,0xff,0xcf,0xff,0x3f,0xff,0x7f,0xe0,0x01,0x80,0x07,
    0x00,0x1e,0x00,0x78,0x00,0xe0,0x01,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,0xe1,0x83,
    0x8f,0xff,0x3f,0xfc,0x7f,0xe0,0xff,0x00,0x7f,0x00,0x7e,0xe0,0xe7,0x0f,0xfe,0xfc,
    0xc1,0x1f,0x3f,0xf8,0x83,0x07,0x78,0xf0,0x00,0x0f,0x1e,0xe0,0xc1,0x03,0x3c,0x78,
    0x80,0x07,0x0f,0xf0,0xe0,0x01,0x1e,0x3c,0xe0,0x83,0x0f,0x7e,0xe0,0xff,0x3f,0xfc,
    0xff,0x07,0xff,0xfd,0x80,0x9f,0x0f,0xfe,0xc1,0xbf,0xff,0xf1,0xff,0xff,0xf8,0xdf,
    0x3f,0xf8,0x87,0x0f,0xf0,0x80,0x07,0x3c,0xc0,0x07,0x1e,0xc0,0x83,0x07,0xe0,0xc3,
    0x03,0xe0,0xf1,0x00,0xf0,0x79,0x00,0xf0,0x1e,0x00,0xf8,0x0f,0x00,0xf8,0x03,0x00,
    0xfc,0x01,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7e,0x80,0xdf,0x3f,0xf0,0xff,0x0f,0xfc,
    0xfb,0x03,0xfe,0x3c,0x1e,0x1e,0x8f,0x8f,0x87,0xe7,0xf3,0xe1,0xfd,0x3c,0x78,0x7f,
    0x0f,0xde,0xff,0x03,0xff,0x7f,0xc0,0xdf,0x1f,0xf0,0xf3,0x07,0xfc,0xfc,0x01,0x1e,
    0x3e,0x80,0x87,0x0f,0xe0,0xc1,0x03,0xfc,0xe0,0xc7,0x3f,0xfe,0xf9,0xc7,0x3f,0x7e,
    0xf0,0x03,0x1f,0x1f,0xc0,0xf7,0x01,0xf0,0x1f,0x00,0xfc,0x01,0x80,0x3f,0x00,0xf8,
    0x0f,0x80,0xff,0x03,0xf8,0xfd,0x80,0x0f,0x3e,0xfc,0xc1,0xdf,0x7f,0xfc,0xff,0x8f,
    0xff,0xfe,0xe0,0x0f,0x7e,0xe0,0xf7,0x0f,0xff,0xff,0xf0,0xef,0x07,0x7e,0x3c,0xc0,
    0xc3,0x07,0x1c,0x78,0xe0,0x81,0x0f,0x0e,0xf0,0xf0,0x00,0x0f,0x0f,0xe0,0x79,0x00,
    0x9e,0x07,0xc0,0x3f,0x00,0xfc,0x03,0x80,0x1f,0x00,0xf8,0x01,0x00,0x0f,0x00,0xf0,
    0x00,0x80,0x07,0x00,0x78,0x00,0xc0,0x03,0xe0,0xff,0x00,0xff,0x1f,0xf0,0xff,0x01,
    0xfe,0x0f,0x00,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0x0f,0x3e,0x0f,0x1f,0x86,
    0x0f,0xc0,0x07,0xe0,0x03,0xf0,0x01,0xf8,0x00,0x7c,0x70,0x3e,0xf0,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x80,0x03,0x3e,0xf8,0xe1,0x07,0x1f,0x78,0xc0,0x03,0x1e,
    0xf0,0x80,0x07,0x3c,0xe0,0x81,0x0f,0x3f,0xfc,0xe0,0x07,0x7e,0xc0,0x07,0x3c,0xe0,
    0x01,0x0f,0x78,0xc0,0x03,0x1e,0xf0,0x80,0x0f,0xfc,0xc0,0x0f,0x7e,0xc0,0x01,0xf6,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x6f,0x0e,0xf8,
    0xc0,0x0f,0xfc,0xc0,0x07,0x3c,0xe0,0x01,0x0f,0x78,0xc0,0x03,0x1e,0xf0,0x80,0x0f,
    0xf8,0x81,0x1f,0xfc,0xf0,0xc3,0x07,0x1e,0xf0,0x80,0x07,0x3c,0xe0,0x01,0x0f,0x78,
    0xe0,0x83,0x1f,0x7e,0xf0,0x01,0x07,0x00,0xf0,0x00,0xf0,0x0f,0xee,0x7f,0xbc,0xff,
    0xf3,0x9f,0xff,0x3b,0xfc,0x07,0xe0,0x0f,0x00,0x1e,
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
 *  X offset: 8, Y offset: 13
 *  X size: 6, Y size: 24
 *           ####                  
 *          ######                 
 *          ######                 
 *          ######                 
 *          ######                 
 *          ######                 
 *          ######                 
 *          ######                 
 *           #####                 
 *           ####                  
 *           ####                  
 *           ####                  
 *           ####                  
 *           ####                  
 *           ####                  
 *           ####                  
 *            ##                   
 *                                 
 *                                 
 *           ####                  
 *          ######                 
 *          ######                 
 *          ######                 
 *           ####                  
 ********************/
{1, 23, 8, 13, 6, 24},

/********************
 *  Character: '"', X advance: 23
 *  X offset: 4, Y offset: 15
 *  X size: 12, Y size: 11
 *      ####    ####           
 *      ####    ####           
 *      ####    ####           
 *      ####    ####           
 *      ####    ####           
 *      ####    ####           
 *       ##      ##            
 *       ##      ##            
 *       ##      ##            
 *       ##      ##            
 *       ##      ##            
 ********************/
{19, 23, 4, 15, 12, 11},

/********************
 *  Character: '#', X advance: 23
 *  X offset: 3, Y offset: 13
 *  X size: 17, Y size: 28
 *          ###    ##         
 *         ####   ####        
 *         ####   ####        
 *         ####   ####        
 *         ####   ####        
 *         ####   ####        
 *         ####  ####         
 *         ####  ####         
 *      ###############       
 *     #################      
 *     #################      
 *      ###############       
 *        ####   ####         
 *        ####   ####         
 *        ####   ####         
 *        ####   ####         
 *      ###############       
 *      ################      
 *      ################      
 *      ###############       
 *        ####   ####         
 *        ####   ####         
 *        ####   ####         
 *        ####  ####          
 *        ####  ####          
 *       ####   ####          
 *       ####   ####          
 *        ###   ###           
 ********************/
{36, 23, 3, 13, 17, 28},

/********************
 *  Character: '$', X advance: 23
 *  X offset: 4, Y offset: 12
 *  X size: 16, Y size: 31
 *             ##              
 *            ####             
 *            ####             
 *            ####             
 *         ###########         
 *        #############        
 *       ##############        
 *      ######     ####        
 *      ####       ####        
 *      ####        ##         
 *      #####                  
 *      #######                
 *       ##########            
 *        ###########          
 *         ###########         
 *            #########        
 *                ######       
 *                  ####       
 *      ##          ####       
 *      ###         ####       
 *      ###         ####       
 *      #####     #####        
 *      ###############        
 *      ##############         
 *      ## #########           
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *             ##              
 ********************/
{96, 23, 4, 12, 16, 31},

/********************
 *  Character: '%', X advance: 23
 *  X offset: 2, Y offset: 15
 *  X size: 17, Y size: 23
 *       #####               
 *      ########             
 *     ###    ##             
 *    ###      ##            
 *    ##       ##            
 *    ##       ##            
 *    ###      ##            
 *     ###    ##             
 *      ########    ##       
 *       #####   ######      
 *            #######        
 *         #######           
 *      #######              
 *    ######   ####          
 *    ###    ########        
 *           ##    ##        
 *          ##      ##       
 *          ##      ##       
 *          ##      ##       
 *          ##      ##       
 *           ##    ##        
 *           ########        
 *             ####          
 ********************/
{158, 23, 2, 15, 17, 23},

/********************
 *  Character: '&', X advance: 23
 *  X offset: 3, Y offset: 17
 *  X size: 16, Y size: 21
 *           #### #           
 *         #########          
 *        ###########         
 *        ##########          
 *       #####  ###           
 *       ####                 
 *       ####                 
 *       #####                
 *        ####                
 *         ####               
 *       #######              
 *      #########  ####       
 *      ######### #####       
 *     ##### ##########       
 *     ####   ########        
 *     ####    ######         
 *     #####    #####         
 *     ################       
 *      ###############       
 *       ##############       
 *         ###### #####       
 ********************/
{207, 23, 3, 17, 16, 21},

/********************
 *  Character: ''', X advance: 23
 *  X offset: 8, Y offset: 15
 *  X size: 4, Y size: 11
 *          ####                   
 *          ####                   
 *          ####                   
 *          ####                   
 *          ####                   
 *          ####                   
 *           ##                    
 *           ##                    
 *           ##                    
 *           ##                    
 *           ##                    
 ********************/
{249, 23, 8, 15, 4, 11},

/********************
 *  Character: '(', X advance: 23
 *  X offset: 10, Y offset: 13
 *  X size: 8, Y size: 30
 *                 ###               
 *                ####               
 *                ####               
 *               #####               
 *               ####                
 *              #####                
 *              ####                 
 *             ####                  
 *             ####                  
 *             ####                  
 *             ###                   
 *            ####                   
 *            ####                   
 *            ####                   
 *            ####                   
 *            ####                   
 *            ####                   
 *            ####                   
 *            ####                   
 *             ####                  
 *             ####                  
 *             ####                  
 *             #####                 
 *              ####                 
 *              #####                
 *               ####                
 *               #####               
 *                ####               
 *                ####               
 *                 ##                
 ********************/
{255, 23, 10, 13, 8, 30},

/********************
 *  Character: ')', X advance: 23
 *  X offset: 4, Y offset: 13
 *  X size: 8, Y size: 30
 *      ###                    
 *      ####                   
 *      ####                   
 *      #####                  
 *       ####                  
 *       #####                 
 *        ####                 
 *        #####                
 *         ####                
 *         ####                
 *         ####                
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *         ####                
 *         ####                
 *         ####                
 *        #####                
 *        ####                 
 *       #####                 
 *       ####                  
 *      #####                  
 *      ####                   
 *      ####                   
 *       ##                    
 ********************/
{285, 23, 4, 13, 8, 30},

/********************
 *  Character: '*', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 16, Y size: 16
 *            ##              
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *     ####  ####  ####       
 *     ################       
 *     ################       
 *      ##############        
 *         ########           
 *         ########           
 *         ########           
 *        ##########          
 *       #####  #####         
 *       ####    ####         
 *        ##      ##          
 ********************/
{315, 23, 3, 14, 16, 16},

/********************
 *  Character: '+', X advance: 23
 *  X offset: 3, Y offset: 17
 *  X size: 18, Y size: 21
 *             ##             
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *     #################      
 *     ##################     
 *     ##################     
 *      ################      
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *            ####            
 *             ##             
 ********************/
{347, 23, 3, 17, 18, 21},

/********************
 *  Character: ',', X advance: 23
 *  X offset: 6, Y offset: 33
 *  X size: 8, Y size: 11
 *           #####               
 *          #####                
 *          #####                
 *          ####                 
 *         #####                 
 *         ####                  
 *         ###                   
 *         ###                   
 *        ###                    
 *        ###                    
 *        ##                     
 ********************/
{395, 23, 6, 33, 8, 11},

/********************
 *  Character: '-', X advance: 23
 *  X offset: 1, Y offset: 25
 *  X size: 19, Y size: 4
 *   ###################    
 *   ###################    
 *   ###################    
 *   ###################    
 ********************/
{406, 23, 1, 25, 19, 4},

/********************
 *  Character: '.', X advance: 23
 *  X offset: 9, Y offset: 33
 *  X size: 5, Y size: 5
 *            ###                   
 *           #####                  
 *           #####                  
 *           #####                  
 *            ###                   
 ********************/
{416, 23, 9, 33, 5, 5},

/********************
 *  Character: '/', X advance: 23
 *  X offset: 3, Y offset: 11
 *  X size: 17, Y size: 30
 *                  ###       
 *                  ####      
 *                 ####       
 *                 ####       
 *                ####        
 *                ####        
 *               ####         
 *               ####         
 *              #####         
 *              ####          
 *             #####          
 *             ####           
 *            #####           
 *            ####            
 *            ####            
 *           ####             
 *           ####             
 *          ####              
 *          ####              
 *         ####               
 *         ####               
 *        ####                
 *        ####                
 *       ####                 
 *       ####                 
 *      #####                 
 *      ####                  
 *     #####                  
 *     ####                   
 *     ####                   
 ********************/
{420, 23, 3, 11, 17, 30},

/********************
 *  Character: '0', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 17, Y size: 24
 *           ######           
 *         #########          
 *        ###########         
 *       #############        
 *      #####    ######       
 *      ####       ####       
 *     #####       #####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     ####         ####      
 *     #####       #####      
 *      ####       ####       
 *      ######   ######       
 *       #############        
 *        ###########         
 *         #########          
 *          #######           
 ********************/
{484, 23, 3, 14, 17, 24},

/********************
 *  Character: '1', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 16, Y size: 24
 *          #####             
 *         ######             
 *       ########             
 *      #########             
 *     ##### ####             
 *     ####  ####             
 *      ##   ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *           ####             
 *      ##############        
 *     ################       
 *     ################       
 *      ##############        
 ********************/
{535, 23, 3, 14, 16, 24},

/********************
 *  Character: '2', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 17, Y size: 24
 *          ######           
 *        ##########         
 *       ############        
 *      ##############       
 *     #####     #####       
 *     ####       #####      
 *     ####        ####      
 *      ##         ####      
 *                 ####      
 *                #####      
 *               #####       
 *              #####        
 *             #####         
 *            #####          
 *           #####           
 *         ######            
 *        ######             
 *       ######              
 *      ######      ###      
 *    ######       ####      
 *    #################      
 *    #################      
 *    #################      
 *    #################      
 ********************/
{583, 23, 2, 14, 17, 24},

/********************
 *  Character: '3', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 17, Y size: 24
 *         #######            
 *       ###########          
 *      #############         
 *     ###############        
 *     #####     ######       
 *      ##         ####       
 *                 ####       
 *                 ####       
 *                ####        
 *            ########        
 *           #######          
 *           #######          
 *           #########        
 *               ######       
 *                 #####      
 *                  ####      
 *                  ####      
 *                  ####      
 *                 #####      
 *     ####       #####       
 *     ################       
 *     ###############        
 *      #############         
 *        #########           
 ********************/
{634, 23, 3, 14, 17, 24},

/********************
 *  Character: '4', X advance: 23
 *  X offset: 3, Y offset: 15
 *  X size: 16, Y size: 23
 *             ######         
 *             ######         
 *            #######         
 *            #######         
 *           ########         
 *          #########         
 *          #### ####         
 *         ####  ####         
 *         ####  ####         
 *        ####   ####         
 *       ####    ####         
 *       ####    ####         
 *      ####     ####         
 *      ####     ####         
 *     ################       
 *     ################       
 *     ################       
 *     ###############        
 *               ####         
 *            #########       
 *           ##########       
 *           ##########       
 *            ########        
 ********************/
{685, 23, 3, 15, 16, 23},

/********************
 *  Character: '5', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 17, Y size: 24
 *       ############         
 *       #############        
 *       #############        
 *       ############         
 *       ####                 
 *       ####                 
 *       ####                 
 *       ####                 
 *       #### #####           
 *       ############         
 *       #############        
 *       ##############       
 *        ###     #####       
 *                 #####      
 *                  ####      
 *                  ####      
 *                  ####      
 *                  ####      
 *      ##         #####      
 *     ####       #####       
 *     ################       
 *      ##############        
 *       ############         
 *         ########           
 ********************/
{731, 23, 3, 14, 17, 24},

/********************
 *  Character: '6', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 16, Y size: 24
 *              #######        
 *            ##########       
 *           ###########       
 *          ############       
 *         ######              
 *        #####                
 *       #####                 
 *       ####                  
 *      #####                  
 *      ####  #####            
 *      #### ########          
 *      ##############         
 *      ###############        
 *      ######    #####        
 *      #####      #####       
 *      ####        ####       
 *      ####        ####       
 *      ####        ####       
 *      #####      #####       
 *       #####    #####        
 *       ##############        
 *        ############         
 *         ##########          
 *           ######            
 ********************/
{782, 23, 4, 14, 16, 24},

/********************
 *  Character: '7', X advance: 23
 *  X offset: 2, Y offset: 14
 *  X size: 16, Y size: 24
 *    ################       
 *    ################       
 *    ################       
 *    ################       
 *    ####        ####       
 *    ###         ####       
 *               ####        
 *               ####        
 *               ####        
 *              ####         
 *              ####         
 *              ####         
 *             ####          
 *             ####          
 *             ####          
 *            ####           
 *            ####           
 *            ####           
 *           ####            
 *           ####            
 *           ####            
 *          ####             
 *          ####             
 *           ###             
 ********************/
{830, 23, 2, 14, 16, 24},

/********************
 *  Character: '8', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 15, Y size: 24
 *           #####             
 *         #########           
 *        ###########          
 *       #############         
 *      #####     #####        
 *      ####       ####        
 *      ####       ####        
 *      ####       ####        
 *      ####       ####        
 *       ####     ####         
 *        ###########          
 *         #########           
 *         #########           
 *        ###########          
 *       #####   #####         
 *      ####       ####        
 *      ####       ####        
 *      ####       ####        
 *      ####       ####        
 *      #####     #####        
 *       #############         
 *       #############         
 *        ##########           
 *          #######            
 ********************/
{878, 23, 4, 14, 15, 24},

/********************
 *  Character: '9', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 16, Y size: 24
 *          ######            
 *        ##########          
 *       ############         
 *      ##############        
 *     ######    #####        
 *     #####      #####       
 *     ####        ####       
 *     ####        ####       
 *     ####        ####       
 *     #####      #####       
 *      #####    ######       
 *      ###############       
 *       ##############       
 *        ######## ####       
 *          #####  ####       
 *                #####       
 *                ####        
 *               #####        
 *              #####         
 *            ######          
 *     ############           
 *     ###########            
 *     ##########             
 *      #######               
 ********************/
{923, 23, 3, 14, 16, 24},

/********************
 *  Character: ':', X advance: 23
 *  X offset: 9, Y offset: 21
 *  X size: 5, Y size: 17
 *            ###                   
 *           #####                  
 *           #####                  
 *           #####                  
 *            ###                   
 *                                  
 *                                  
 *                                  
 *                                  
 *                                  
 *                                  
 *                                  
 *            ###                   
 *           #####                  
 *           #####                  
 *           #####                  
 *            ###                   
 ********************/
{971, 23, 9, 21, 5, 17},

/********************
 *  Character: ';', X advance: 23
 *  X offset: 5, Y offset: 21
 *  X size: 7, Y size: 23
 *          ###                 
 *         #####                
 *         #####                
 *         #####                
 *          ###                 
 *                              
 *                              
 *                              
 *                              
 *                              
 *                              
 *                              
 *         #####                
 *         ####                 
 *         ####                 
 *         ###                  
 *        ####                  
 *        ###                   
 *        ###                   
 *       ###                    
 *       ###                    
 *       ###                    
 *       ##                     
 ********************/
{982, 23, 5, 21, 7, 23},

/********************
 *  Character: '<', X advance: 23
 *  X offset: 1, Y offset: 18
 *  X size: 19, Y size: 17
 *                   ##     
 *                ######    
 *              #######     
 *            ########      
 *          ########        
 *        ########          
 *      ########            
 *    ########              
 *   ########               
 *     ########             
 *       ########           
 *         #######          
 *           #######        
 *             #######      
 *               ######     
 *                 #####    
 *                   ##     
 ********************/
{1003, 23, 1, 18, 19, 17},

/********************
 *  Character: '=', X advance: 23
 *  X offset: 1, Y offset: 22
 *  X size: 19, Y size: 11
 *   ###################    
 *   ###################    
 *   ###################    
 *   ###################    
 *                          
 *                          
 *                          
 *   ###################    
 *   ###################    
 *   ###################    
 *   ###################    
 ********************/
{1044, 23, 1, 22, 19, 11},

/********************
 *  Character: '>', X advance: 23
 *  X offset: 2, Y offset: 19
 *  X size: 19, Y size: 17
 *     ##                    
 *    #####                  
 *    #######                
 *      #######              
 *        #######            
 *         ########          
 *           ########        
 *             ########      
 *               ########    
 *             ########      
 *           ########        
 *         ########          
 *        #######            
 *      #######              
 *    #######                
 *    #####                  
 *     ##                    
 ********************/
{1071, 23, 2, 19, 19, 17},

/********************
 *  Character: '?', X advance: 23
 *  X offset: 4, Y offset: 15
 *  X size: 16, Y size: 23
 *          #######            
 *       ############          
 *      ##############         
 *      ###############        
 *      #####     ######       
 *      ####       #####       
 *       ###        ####       
 *                  ####       
 *                 #####       
 *                #####        
 *              #######        
 *            ########         
 *            ######           
 *            ####             
 *            ###              
 *             ##              
 *                             
 *                             
 *            ###              
 *           #####             
 *           #####             
 *           #####             
 *            ###              
 ********************/
{1112, 23, 4, 15, 16, 23},

/********************
 *  Character: '@', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 16, Y size: 30
 *           #####            
 *         ########           
 *        ##########          
 *       ####    ####         
 *       ###      ####        
 *      ###        ###        
 *      ###        ###        
 *     ####        ###        
 *     ###         ###        
 *     ###      ######        
 *     ###     #######        
 *     ###   #########        
 *     ###   ####  ###        
 *     ###  ####   ###        
 *     ###  ###    ###        
 *     ###  ###    ###        
 *     ###  ###    ###        
 *     ###  ####   ###        
 *     ###   ##########       
 *     ###    #########       
 *     ###     ########       
 *     ###                    
 *     ####                   
 *      ###                   
 *      ###                   
 *       ###       ##         
 *       ####     ####        
 *        ############        
 *         ##########         
 *          #######           
 ********************/
{1158, 23, 3, 14, 16, 30},

/********************
 *  Character: 'A', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 24, Y size: 22
 *      ##########          
 *     ############         
 *      ###########         
 *      ############        
 *          ########        
 *          ########        
 *         ####  ####       
 *         ####  ####       
 *        #####  #####      
 *        ####    ####      
 *        ####    ####      
 *       ####      ####     
 *       ##############     
 *      ################    
 *      ################    
 *      ################    
 *     ####          ####   
 *     ####          ####   
 *   ########      ######## 
 *  ##########    ##########
 *  ##########    ##########
 *   ########      ######## 
 ********************/
{1218, 23, -1, 16, 24, 22},

/********************
 *  Character: 'B', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 20, Y size: 22
 *     #############         
 *    ################       
 *    #################      
 *    #################      
 *      ####       #####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####      #####      
 *      ###############      
 *      ##############       
 *      ################     
 *      #################    
 *      ####        #####    
 *      ####         #####   
 *      ####          ####   
 *      ####          ####   
 *      ####         #####   
 *    ###################    
 *    ###################    
 *    ##################     
 *     ###############       
 ********************/
{1284, 23, 2, 16, 20, 22},

/********************
 *  Character: 'C', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 20, Y size: 22
 *          #######   ##    
 *        ###############   
 *      #################   
 *     ##################   
 *     ######      ######   
 *    #####         #####   
 *    ####           ####   
 *   #####           ###    
 *   ####                   
 *   ####                   
 *   ####                   
 *   ####                   
 *   ####                   
 *   ####                   
 *   ####                   
 *   #####                  
 *    #####           ###   
 *    #######       #####   
 *     ##################   
 *      #################   
 *        #############     
 *          ########        
 ********************/
{1339, 23, 1, 16, 20, 22},

/********************
 *  Character: 'D', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 20, Y size: 22
 *    ############          
 *   ###############        
 *   #################      
 *   ##################     
 *     ####      ######     
 *     ####        #####    
 *     ####         ####    
 *     ####         #####   
 *     ####          ####   
 *     ####          ####   
 *     ####          ####   
 *     ####          ####   
 *     ####          ####   
 *     ####          ####   
 *     ####          ####   
 *     ####         #####   
 *     ####        #####    
 *     ####       ######    
 *    #################     
 *   #################      
 *   ################       
 *    #############         
 ********************/
{1394, 23, 1, 16, 20, 22},

/********************
 *  Character: 'E', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 19, Y size: 22
 *     #################     
 *    ##################     
 *    ##################     
 *    ##################     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####   ###   ##      
 *      ####   ####          
 *      ###########          
 *      ###########          
 *      ###########          
 *      ###########          
 *      ####   ####          
 *      ####   ####   ##     
 *      ####    ##   ####    
 *      ####         ####    
 *      ####         ####    
 *    ###################    
 *    ###################    
 *    ###################    
 *     ##################    
 ********************/
{1449, 23, 2, 16, 19, 22},

/********************
 *  Character: 'F', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 19, Y size: 22
 *     ##################    
 *    ###################    
 *    ###################    
 *    ###################    
 *      ####         ####    
 *      ####         ####    
 *      ####    ##   ####    
 *      ####   ####   ##     
 *      ####   ####          
 *      ###########          
 *      ###########          
 *      ###########          
 *      ###########          
 *      ####   ####          
 *      ####   ###           
 *      ####                 
 *      ####                 
 *      ####                 
 *    ###########            
 *    ############           
 *    ############           
 *     ##########            
 ********************/
{1502, 23, 2, 16, 19, 22},

/********************
 *  Character: 'G', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 22
 *          ########  ##    
 *        ###############   
 *       ################   
 *      #################   
 *     ######      ######   
 *    #####          ####   
 *    ####           ####   
 *   #####            ##    
 *   ####                   
 *   ####                   
 *   ####                   
 *   ####       #########   
 *   ####      ###########  
 *   ####      ###########  
 *   ####       ##########  
 *   #####           ####   
 *    #####          ####   
 *    #######       #####   
 *     ##################   
 *      #################   
 *       ##############     
 *          ########        
 ********************/
{1555, 23, 1, 16, 21, 22},

/********************
 *  Character: 'H', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *     #######     #######   
 *    #########   #########  
 *    #########   #########  
 *     #######    ########   
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ################     
 *      ################     
 *      ################     
 *      ################     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *    ########    ########   
 *    #########   #########  
 *    #########   #########  
 *     #######     #######   
 ********************/
{1613, 23, 2, 16, 21, 22},

/********************
 *  Character: 'I', X advance: 23
 *  X offset: 4, Y offset: 16
 *  X size: 16, Y size: 22
 *       ##############        
 *      ################       
 *      ################       
 *       ##############        
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
 *       ##############        
 *      ################       
 *      ################       
 *       ##############        
 ********************/
{1671, 23, 4, 16, 16, 22},

/********************
 *  Character: 'J', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *           #############   
 *           ##############  
 *           ##############  
 *            ############   
 *                 ####      
 *                 ####      
 *                 ####      
 *                 ####      
 *                 ####      
 *                 ####      
 *                 ####      
 *     ##          ####      
 *    ####         ####      
 *    ####         ####      
 *    ####         ####      
 *    ####         ####      
 *    ####        #####      
 *    ######     #####       
 *    ################       
 *    ###############        
 *      ############         
 *         #######           
 ********************/
{1715, 23, 2, 16, 21, 22},

/********************
 *  Character: 'K', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 21, Y size: 22
 *    ########    #######    
 *    #########  #########   
 *    #########  #########   
 *    #########   #######    
 *      ####     ######      
 *      ####    ######       
 *      ####   ######        
 *      ####  #####          
 *      #### #####           
 *      #########            
 *      ##########           
 *      ###########          
 *      ###### #####         
 *      #####   #####        
 *      ####     #####       
 *      ####     #####       
 *      ####      #####      
 *      ####       ####      
 *    #########    #######   
 *    #########    ########  
 *    #########     #######  
 *     #######      ######   
 ********************/
{1773, 23, 2, 16, 21, 22},

/********************
 *  Character: 'L', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 20, Y size: 22
 *    ###########            
 *    ############           
 *    ############           
 *     ##########            
 *        ####               
 *        ####               
 *        ####               
 *        ####               
 *        ####               
 *        ####               
 *        ####               
 *        ####               
 *        ####         ##    
 *        ####        ####   
 *        ####        ####   
 *        ####        ####   
 *        ####        ####   
 *        ####        ####   
 *    ####################   
 *    ####################   
 *    ####################   
 *     ###################   
 ********************/
{1831, 23, 2, 16, 20, 22},

/********************
 *  Character: 'M', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 24, Y size: 22
 *    #####          #####  
 *   #######        ####### 
 *   #######        ####### 
 *   ########      ######## 
 *    #######      #######  
 *    #######      #######  
 *    ########    ########  
 *    ########    ########  
 *    #### ####  #### ####  
 *    #### ####  #### ####  
 *    ####  ######### ####  
 *    ####  ########  ####  
 *    ####   #######  ####  
 *    ####   ######   ####  
 *    ####    #####   ####  
 *    ####    ####    ####  
 *    ####     ###    ####  
 *    ####            ####  
 *  #########      #########
 *  ##########    ##########
 *  ##########    ##########
 *   ########      ######## 
 ********************/
{1886, 23, 0, 16, 24, 22},

/********************
 *  Character: 'N', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 22
 *   ######      ########   
 *   #######    ##########  
 *   ########   ##########  
 *   ########    #########  
 *     #######      ####    
 *     #######      ####    
 *     ########     ####    
 *     #########    ####    
 *     #### ####    ####    
 *     #### #####   ####    
 *     ####  ####   ####    
 *     ####   ####  ####    
 *     ####   ##### ####    
 *     ####    #### ####    
 *     ####    #########    
 *     ####     ########    
 *     ####      #######    
 *     ####      #######    
 *   #########    ######    
 *   ##########    #####    
 *   ##########    #####    
 *    ########      ####    
 ********************/
{1952, 23, 1, 16, 21, 22},

/********************
 *  Character: 'O', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 22
 *          ######          
 *        ###########       
 *       #############      
 *      ###############     
 *     ######     ######    
 *    ######       ######   
 *    #####         #####   
 *   #####           ####   
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   #####           ####   
 *    #####         #####   
 *    ######       ######   
 *     ######     ######    
 *      ###############     
 *       #############      
 *        ###########       
 *          #######         
 ********************/
{2010, 23, 1, 16, 21, 22},

/********************
 *  Character: 'P', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 18, Y size: 22
 *     ############          
 *    ###############        
 *    ################       
 *    #################      
 *      ####      #####      
 *      ####       #####     
 *      ####        ####     
 *      ####        ####     
 *      ####        ####     
 *      ####       #####     
 *      ####      #####      
 *      ###############      
 *      ##############       
 *      #############        
 *      ###########          
 *      ####                 
 *      ####                 
 *      ####                 
 *    ###########            
 *    ############           
 *    ############           
 *     ##########            
 ********************/
{2068, 23, 2, 16, 18, 22},

/********************
 *  Character: 'Q', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 28
 *          #######         
 *        ###########       
 *       #############      
 *      ###############     
 *     ######     ######    
 *    ######       ######   
 *    #####         #####   
 *   #####           ####   
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *   ####             ####  
 *    ####           ####   
 *    #####         #####   
 *    ######        #####   
 *     ######     ######    
 *      ###############     
 *       #############      
 *        ###########       
 *          #######         
 *         ###         ##   
 *        #########   ####  
 *       #################  
 *       #################  
 *       ################   
 *        ###     #####     
 ********************/
{2118, 23, 1, 16, 21, 28},

/********************
 *  Character: 'R', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 22, Y size: 22
 *  ##############         
 *  ################       
 *  #################      
 *   #################     
 *     ####      ######    
 *     ####        ####    
 *     ####        ####    
 *     ####        ####    
 *     ####       #####    
 *     ####      #####     
 *     ###############     
 *     ##############      
 *     ############        
 *     #############       
 *     ####    ######      
 *     ####     ######     
 *     ####      #####     
 *     ####       #####    
 *   #########     ######  
 *  ##########      ###### 
 *  ##########      ###### 
 *   ########        ####  
 ********************/
{2192, 23, -1, 16, 22, 22},

/********************
 *  Character: 'S', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 18, Y size: 22
 *          ######  ###      
 *        #############      
 *      ###############      
 *      ###############      
 *     #####     ######      
 *     ####        ####      
 *     ####        ####      
 *     #####        ##       
 *     ########              
 *      ###########          
 *       #############       
 *         ############      
 *            ##########     
 *     ##         ######     
 *    ####          ####     
 *    ####          ####     
 *    #####        #####     
 *    ######      ######     
 *    #################      
 *    ################       
 *     ## ###########        
 *          #######          
 ********************/
{2253, 23, 2, 16, 18, 22},

/********************
 *  Character: 'T', X advance: 23
 *  X offset: 2, Y offset: 16
 *  X size: 19, Y size: 22
 *    ###################    
 *    ###################    
 *    ###################    
 *    ###################    
 *    ####   ####    ####    
 *    ####   ####    ####    
 *    ####   ####    ####    
 *    ####   ####    ####    
 *    ####   ####    ####    
 *     ##    ####     ##     
 *           ####            
 *           ####            
 *           ####            
 *           ####            
 *           ####            
 *           ####            
 *           ####            
 *           ####            
 *       ############        
 *       ############        
 *       ############        
 *        ##########         
 ********************/
{2303, 23, 2, 16, 19, 22},

/********************
 *  Character: 'U', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 22
 *    ########   ########   
 *   ########## ##########  
 *   ########## ##########  
 *    ########   #########  
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     ####         ####    
 *     #####       #####    
 *      ######   ######     
 *      ###############     
 *       #############      
 *         #########        
 *           #####          
 ********************/
{2356, 23, 1, 16, 21, 22},

/********************
 *  Character: 'V', X advance: 23
 *  X offset: -1, Y offset: 16
 *  X size: 25, Y size: 22
 *   ########       ######## 
 *  ##########     ##########
 *  ##########     ##########
 *   ########       ######## 
 *     ####           ####   
 *     ####           ####   
 *      ####         ####    
 *      ####         ####    
 *      #####       ####     
 *       ####       ####     
 *       #####     #####     
 *        ####     ####      
 *        #####   #####      
 *         ####   ####       
 *         #####  ####       
 *         ##### ####        
 *          #########        
 *          #########        
 *           #######         
 *           #######         
 *            #####          
 *            #####          
 ********************/
{2414, 23, -1, 16, 25, 22},

/********************
 *  Character: 'W', X advance: 23
 *  X offset: 0, Y offset: 16
 *  X size: 23, Y size: 22
 *   ########     ######## 
 *  ##########   ##########
 *  ##########   ##########
 *  #########     ######## 
 *   ####             ###  
 *    ###     ###    ####  
 *    ####   #####   ####  
 *    ####   #####   ####  
 *    ####   ######  ####  
 *    ####  #######  ####  
 *    ####  #######  ####  
 *    ####  ### #### ###   
 *     ### #### #### ###   
 *     ######## ########   
 *     ######## ########   
 *     #######   #######   
 *     #######   #######   
 *     #######   #######   
 *     ######     ######   
 *     ######     #####    
 *      #####     #####    
 *      ####       ####    
 ********************/
{2483, 23, 0, 16, 23, 22},

/********************
 *  Character: 'X', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 21, Y size: 22
 *    ######      ######    
 *   ########    ########   
 *   ########    ########   
 *    ######      ######    
 *     #####      #####     
 *      #####    #####      
 *       #####   ####       
 *        ##### ####        
 *         ########         
 *          ######          
 *          ######          
 *          ######          
 *         ########         
 *        ##########        
 *        ##### ####        
 *       #####   ####       
 *      #####     ####      
 *     #####      #####     
 *    #######    ########   
 *   #########   #########  
 *   #########   #########  
 *    #######     #######   
 ********************/
{2547, 23, 1, 16, 21, 22},

/********************
 *  Character: 'Y', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 20, Y size: 22
 *    ######      ######    
 *   ########    ########   
 *   ########    ########   
 *    ######      ######    
 *      ####      ####      
 *      #####    #####      
 *       ####    ####       
 *        ####  ####        
 *        ##########        
 *         ########         
 *          ######          
 *          ######          
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *       ###########        
 *       ############       
 *       ############       
 *        ##########        
 ********************/
{2605, 23, 1, 16, 20, 22},

/********************
 *  Character: 'Z', X advance: 23
 *  X offset: 3, Y offset: 16
 *  X size: 17, Y size: 22
 *      ###############       
 *      ###############       
 *      ###############       
 *      ###############       
 *      ####      #####       
 *      ####     #####        
 *      ####    #####         
 *      ####   #####          
 *       ##    ####           
 *            #####           
 *           #####            
 *          #####             
 *         #####              
 *         #####     ##       
 *        #####     ####      
 *       #####      ####      
 *      #####       ####      
 *     ######       ####      
 *     #################      
 *     #################      
 *     #################      
 *     #################      
 ********************/
{2660, 23, 3, 16, 17, 22},

/********************
 *  Character: '[', X advance: 23
 *  X offset: 10, Y offset: 14
 *  X size: 8, Y size: 30
 *            #######                
 *            ########               
 *            ########               
 *            #######                
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
 *            #######                
 *            ########               
 *            ########               
 *            #######                
 ********************/
{2707, 23, 10, 14, 8, 30},

/********************
 *  Character: '\', X advance: 23
 *  X offset: 3, Y offset: 11
 *  X size: 17, Y size: 30
 *     ####                   
 *     ####                   
 *     #####                  
 *      ####                  
 *      #####                 
 *       ####                 
 *       ####                 
 *        ####                
 *        ####                
 *         ####               
 *         ####               
 *          ####              
 *          ####              
 *           ####             
 *           ####             
 *            ####            
 *            ####            
 *             ####           
 *             ####           
 *             #####          
 *              ####          
 *              #####         
 *               ####         
 *               #####        
 *                ####        
 *                ####        
 *                 ####       
 *                 ####       
 *                  ####      
 *                  ###       
 ********************/
{2737, 23, 3, 11, 17, 30},

/********************
 *  Character: ']', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 8, Y size: 30
 *       #######               
 *      ########               
 *      ########               
 *      ########               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *       #######               
 *      ########               
 *      ########               
 *      ########               
 ********************/
{2801, 23, 4, 14, 8, 30},

/********************
 *  Character: '^', X advance: 23
 *  X offset: 3, Y offset: 14
 *  X size: 17, Y size: 12
 *             #              
 *            ###             
 *           #####            
 *          ######            
 *         ########           
 *         #########          
 *        ##### #####         
 *       #####   #####        
 *      #####     #####       
 *     #####       ####       
 *     ####         ####      
 *      ##          ###       
 ********************/
{2831, 23, 3, 14, 17, 12},

/********************
 *  Character: '_', X advance: 23
 *  X offset: 0, Y offset: 42
 *  X size: 23, Y size: 4
 *  #######################
 *  #######################
 *  #######################
 *  #######################
 ********************/
{2857, 23, 0, 42, 23, 4},

/********************
 *  Character: '`', X advance: 23
 *  X offset: 6, Y offset: 13
 *  X size: 7, Y size: 6
 *        ###                    
 *        ####                   
 *         ####                  
 *          ####                 
 *           ####                
 *            ###                
 ********************/
{2869, 23, 6, 13, 7, 6},

/********************
 *  Character: 'a', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 19, Y size: 17
 *         ########          
 *      #############        
 *      ##############       
 *      ###############      
 *                 ####      
 *          ###########      
 *       ##############      
 *      ###############      
 *     ################      
 *     #####       ####      
 *    #####        ####      
 *    ####         ####      
 *    ####      #######      
 *    ###################    
 *     ##################    
 *      #################    
 *        #######  #####     
 ********************/
{2875, 23, 2, 21, 19, 17},

/********************
 *  Character: 'b', X advance: 23
 *  X offset: 0, Y offset: 14
 *  X size: 22, Y size: 24
 *   ######                
 *  #######                
 *  #######                
 *   ######                
 *     ####                
 *     ####                
 *     ####                
 *     ####   ######       
 *     #### ##########     
 *     ################    
 *     #################   
 *     #######     ######  
 *     #####         ####  
 *     #####         ##### 
 *     ####           #### 
 *     ####           #### 
 *     ####           #### 
 *     ####           #### 
 *     #####         ##### 
 *     #######     ######  
 *  #####################  
 *  ####################   
 *  ##################     
 *   ######  #######       
 ********************/
{2916, 23, 0, 14, 22, 24},

/********************
 *  Character: 'c', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 19, Y size: 17
 *          ########  ##     
 *        ###############    
 *       ################    
 *      #################    
 *     ######      ######    
 *     #####         ####    
 *    #####          ####    
 *    ####            ##     
 *    ####                   
 *    ####                   
 *    ####                   
 *    #####           ##     
 *     ######       #####    
 *     ##################    
 *      ################     
 *       ##############      
 *          ########         
 ********************/
{2982, 23, 2, 21, 19, 17},

/********************
 *  Character: 'd', X advance: 23
 *  X offset: 1, Y offset: 14
 *  X size: 21, Y size: 24
 *                ######    
 *               #######    
 *               #######    
 *                ######    
 *                  ####    
 *                  ####    
 *                  ####    
 *         ######   ####    
 *       ########## ####    
 *      ################    
 *     #################    
 *    ######     #######    
 *    ####         #####    
 *   #####         #####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   #####         #####    
 *    ######     #######    
 *     ###################  
 *     ###################  
 *       #################  
 *         #######  #####   
 ********************/
{3023, 23, 1, 14, 21, 24},

/********************
 *  Character: 'e', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 20, Y size: 17
 *          ######          
 *        ###########       
 *      ##############      
 *     ################     
 *    ######      ######    
 *    ####          ####    
 *    ####          ####    
 *   ####################   
 *   ####################   
 *   ####################   
 *   ####################   
 *    ####                  
 *    ######         ###    
 *     ##################   
 *      #################   
 *       ##############     
 *         #########        
 ********************/
{3086, 23, 1, 21, 20, 17},

/********************
 *  Character: 'f', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 18, Y size: 24
 *              ########       
 *            ############     
 *           #############     
 *          ##############     
 *          #####              
 *          ####               
 *          ####               
 *      ###############        
 *      ################       
 *      ################       
 *       ##############        
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *          ####               
 *      ##############         
 *      ###############        
 *      ###############        
 *       #############         
 ********************/
{3129, 23, 4, 14, 18, 24},

/********************
 *  Character: 'g', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 21, Y size: 25
 *         #######  #####   
 *       #################  
 *      ##################  
 *     ###################  
 *    ######     #######    
 *   #####         #####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   #####         #####    
 *    #####       ######    
 *    ######     #######    
 *     #################    
 *      ################    
 *       ########## ####    
 *         ######   ####    
 *                  ####    
 *                  ####    
 *                 #####    
 *                 #####    
 *         ############     
 *        ############      
 *        ###########       
 *         #########        
 ********************/
{3183, 23, 1, 21, 21, 25},

/********************
 *  Character: 'h', X advance: 23
 *  X offset: 1, Y offset: 14
 *  X size: 22, Y size: 24
 *    ######                
 *   #######                
 *   #######                
 *    ######                
 *      ####                
 *      ####                
 *      ####                
 *      ####   #####        
 *      #### #########      
 *      ###############     
 *      ################    
 *      #######    #####    
 *      #####       ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *    ########    ########  
 *   #########    ######### 
 *   #########    ######### 
 *    #######      #######  
 ********************/
{3249, 23, 1, 14, 22, 24},

/********************
 *  Character: 'i', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 16, Y size: 24
 *           ####              
 *           ####              
 *           ####              
 *           ####              
 *                             
 *                             
 *                             
 *        ########             
 *       #########             
 *       #########             
 *        ########             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *            ####             
 *      ###############        
 *      ################       
 *      ################       
 *       ##############        
 ********************/
{3315, 23, 4, 14, 16, 24},

/********************
 *  Character: 'j', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 14, Y size: 32
 *              ####           
 *              ####           
 *              ####           
 *              ####           
 *                             
 *                             
 *                             
 *       #############         
 *      ##############         
 *      ##############         
 *       #############         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *                ####         
 *               #####         
 *       ############          
 *      ############           
 *      ###########            
 *       #########             
 ********************/
{3363, 23, 4, 14, 14, 32},

/********************
 *  Character: 'k', X advance: 23
 *  X offset: 1, Y offset: 14
 *  X size: 20, Y size: 24
 *    ######                
 *   #######                
 *   #######                
 *    ######                
 *      ####                
 *      ####                
 *      ####                
 *      ####   #######      
 *      ####  #########     
 *      ####  #########     
 *      ####   #######      
 *      ####  #####         
 *      ##########          
 *      #########           
 *      ########            
 *      ########            
 *      ##########          
 *      #### ######         
 *      ####  ######        
 *      ####   ######       
 *    ######     #######    
 *   #######    #########   
 *   #######    #########   
 *    ######     #######    
 ********************/
{3419, 23, 1, 14, 20, 24},

/********************
 *  Character: 'l', X advance: 23
 *  X offset: 4, Y offset: 14
 *  X size: 16, Y size: 24
 *        ########             
 *       #########             
 *       #########             
 *        ########             
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
 *      ###############        
 *      ################       
 *      ################       
 *       ##############        
 ********************/
{3479, 23, 4, 14, 16, 24},

/********************
 *  Character: 'm', X advance: 23
 *  X offset: 0, Y offset: 21
 *  X size: 24, Y size: 17
 *   ##### ####    ####     
 *  #####################   
 *  #####################   
 *  ######################  
 *    #####   #####   ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *    ####    ####    ####  
 *  ########  #####   ######
 *  ########  ######  ######
 *  ########  ######  ######
 *   ######   #####   ##### 
 ********************/
{3527, 23, 0, 21, 24, 17},

/********************
 *  Character: 'n', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 21, Y size: 17
 *     #####  ######        
 *    ###### #########      
 *    #################     
 *    #################     
 *      ######     #####    
 *      #####       ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *    ########    ########  
 *   #########    ########  
 *   #########    ########  
 *    #######      ######   
 ********************/
{3578, 23, 1, 21, 21, 17},

/********************
 *  Character: 'o', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 19, Y size: 17
 *          #######          
 *        ###########        
 *       #############       
 *      ###############      
 *     ######     ######     
 *     ####         ####     
 *    #####         #####    
 *    ####           ####    
 *    ####           ####    
 *    ####           ####    
 *    #####         #####    
 *     ####         ####     
 *     ######     ######     
 *      ###############      
 *       #############       
 *        ###########        
 *          #######          
 ********************/
{3623, 23, 2, 21, 19, 17},

/********************
 *  Character: 'p', X advance: 23
 *  X offset: 0, Y offset: 21
 *  X size: 22, Y size: 25
 *    #####  #######       
 *   ###### ##########     
 *   ##################    
 *   ###################   
 *     #######     ######  
 *     #####         ####  
 *     ####           #### 
 *     ####           #### 
 *     ####           #### 
 *     ####           #### 
 *     #####         ##### 
 *     #####        #####  
 *     #######     ######  
 *     #################   
 *     ################    
 *     #### ##########     
 *     ####   ######       
 *     ####                
 *     ####                
 *     ####                
 *     ####                
 *   ##########            
 *  ###########            
 *  ###########            
 *   #########             
 ********************/
{3664, 23, 0, 21, 22, 25},

/********************
 *  Character: 'q', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 22, Y size: 25
 *         #######  #####   
 *       ########## ######  
 *      ##################  
 *     ###################  
 *    ######     #######    
 *    ####         #####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   ####           ####    
 *   #####         #####    
 *    ####         #####    
 *    ######     #######    
 *     #################    
 *      ################    
 *       ########## ####    
 *         ######   ####    
 *                  ####    
 *                  ####    
 *                  ####    
 *                  ####    
 *               #########  
 *              ########### 
 *              ########### 
 *               #########  
 ********************/
{3733, 23, 1, 21, 22, 25},

/********************
 *  Character: 'r', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 19, Y size: 17
 *       ######    #####      
 *      #######  ########     
 *      ####### ##########    
 *      ##################    
 *         #########   ###    
 *         #######            
 *         #####              
 *         ####               
 *         ####               
 *         ####               
 *         ####               
 *         ####               
 *         ####               
 *     ##############         
 *     ###############        
 *     ###############        
 *      #############         
 ********************/
{3802, 23, 3, 21, 19, 17},

/********************
 *  Character: 's', X advance: 23
 *  X offset: 2, Y offset: 21
 *  X size: 17, Y size: 17
 *         #######  ##       
 *       #############       
 *      ##############       
 *     ###############       
 *     ####       ####       
 *     ####        ###       
 *     ##########            
 *      ############         
 *       #############       
 *            ########       
 *     ##         #####      
 *    ####         ####      
 *    #####       #####      
 *    #################      
 *    ################       
 *     ##############        
 *         ########          
 ********************/
{3843, 23, 2, 21, 17, 17},

/********************
 *  Character: 't', X advance: 23
 *  X offset: 1, Y offset: 16
 *  X size: 18, Y size: 22
 *       ##                 
 *      ####                
 *      ####                
 *      ####                
 *      ####                
 *   ###############        
 *   ################       
 *   ################       
 *   ###############        
 *      ####                
 *      ####                
 *      ####                
 *      ####                
 *      ####                
 *      ####                
 *      ####                
 *      ####         #      
 *      #####     #####     
 *      ###############     
 *       #############      
 *        ###########       
 *         #######          
 ********************/
{3880, 23, 1, 16, 18, 22},

/********************
 *  Character: 'u', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 21, Y size: 17
 *    ######      ######    
 *   #######     #######    
 *   #######     #######    
 *    ######     #######    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####        ####    
 *      ####       #####    
 *      #####     ######    
 *       #################  
 *       #################  
 *        ######### ######  
 *          ######  #####   
 ********************/
{3930, 23, 1, 21, 21, 17},

/********************
 *  Character: 'v', X advance: 23
 *  X offset: 0, Y offset: 21
 *  X size: 23, Y size: 17
 *   ########     ######## 
 *  ##########   ##########
 *  ##########   ##########
 *   ########     ######## 
 *     #####        ####   
 *      ####       ####    
 *      #####      ####    
 *       ####     ####     
 *       #####    ####     
 *        ####   ####      
 *        #####  ####      
 *         #### ####       
 *         #########       
 *          #######        
 *          #######        
 *           #####         
 *           #####         
 ********************/
{3975, 23, 0, 21, 23, 17},

/********************
 *  Character: 'w', X advance: 23
 *  X offset: 0, Y offset: 21
 *  X size: 22, Y size: 17
 *   ######        ######  
 *  ########      ######## 
 *  ########      ######## 
 *   #######       ####### 
 *    ####   ####    ####  
 *    ####   #####   ####  
 *     ####  #####  #####  
 *     #### ######  ####   
 *     #### ####### ####   
 *     #### ############   
 *      ###############    
 *      ####### #######    
 *      ######  #######    
 *      ######  #######    
 *       ####    #####     
 *       ####    #####     
 *       ####     ####     
 ********************/
{4024, 23, 0, 21, 22, 17},

/********************
 *  Character: 'x', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 21, Y size: 17
 *     ######     ######    
 *    ########   ########   
 *    ########   ########   
 *     ######     ######    
 *       #####   #####      
 *        ##### #####       
 *         #########        
 *          #######         
 *          #######         
 *         #########        
 *        ###########       
 *       ###### ######      
 *      #####     #####     
 *    #######     #######   
 *   #########   #########  
 *   #########   #########  
 *    #######     #######   
 ********************/
{4071, 23, 1, 21, 21, 17},

/********************
 *  Character: 'y', X advance: 23
 *  X offset: 1, Y offset: 21
 *  X size: 20, Y size: 25
 *    ######      ######    
 *   ########    ########   
 *   ########    ########   
 *    ######      ######    
 *     ####        ####     
 *     #####       ###      
 *      ####      ####      
 *      #####     ###       
 *       ####    ####       
 *       ####    ####       
 *        ####  ####        
 *        ####  ####        
 *         ########         
 *         ########         
 *          ######          
 *          ######          
 *           ####           
 *           ####           
 *          ####            
 *          ####            
 *         ####             
 *    ###########           
 *   #############          
 *   #############          
 *    ###########           
 ********************/
{4116, 23, 1, 21, 20, 25},

/********************
 *  Character: 'z', X advance: 23
 *  X offset: 3, Y offset: 21
 *  X size: 16, Y size: 17
 *     ###############        
 *     ###############        
 *     ###############        
 *     ###############        
 *     ####     #####         
 *     ####    #####          
 *      ##    #####           
 *           #####            
 *          #####             
 *         #####              
 *        #####               
 *       #####     ###        
 *      #####      ####       
 *     ################       
 *     ################       
 *     ################       
 *     ################       
 ********************/
{4179, 23, 3, 21, 16, 17},

/********************
 *  Character: '{', X advance: 23
 *  X offset: 5, Y offset: 14
 *  X size: 11, Y size: 30
 *              ###             
 *             #####            
 *            ######            
 *           ######             
 *           #####              
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *          #####               
 *        ######                
 *       ######                 
 *       ######                 
 *        ######                
 *          #####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           ####               
 *           #####              
 *           ######             
 *            ######            
 *            ######            
 *              ###             
 ********************/
{4213, 23, 5, 14, 11, 30},

/********************
 *  Character: '|', X advance: 23
 *  X offset: 10, Y offset: 14
 *  X size: 4, Y size: 30
 *             ##                    
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
 *            ####                   
 *            ####                   
 *            ####                   
 *             ##                    
 ********************/
{4255, 23, 10, 14, 4, 30},

/********************
 *  Character: '}', X advance: 23
 *  X offset: 7, Y offset: 14
 *  X size: 11, Y size: 30
 *          ###                   
 *         #####                  
 *         ######                 
 *          ######                
 *           #####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            #####               
 *             ######             
 *              ######            
 *              ######            
 *             ######             
 *            #####               
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *            ####                
 *           #####                
 *          ######                
 *         ######                 
 *         #####                  
 *          ###                   
 ********************/
{4270, 23, 7, 14, 11, 30},

/********************
 *  Character: '~', X advance: 23
 *  X offset: 2, Y offset: 23
 *  X size: 18, Y size: 8
 *        ####               
 *      ########     ###     
 *     ##########   ####     
 *     ###########  ####     
 *    #####  ###########     
 *     ###    #########      
 *             #######       
 *               ####        
 ********************/
{4312, 23, 2, 23, 18, 8},

};

const monoGFX_font_t monoGFX_FreeMonoBold_18pt = {bitmapBuffer, 4330, glyphs, 20};
