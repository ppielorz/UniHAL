#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[5361] =
{
    0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7b,0x9e,0xe7,0x79,0x9e,0xc7,0x00,
    0xc0,0xff,0xff,0xff,0xff,0x03,0x3f,0xfe,0x1f,0xff,0x8f,0xff,0xc7,0xff,0xe3,0xff,
    0xf1,0x7b,0xf0,0x3c,0x78,0x1e,0x3c,0x06,0x0c,0x80,0x87,0x07,0xf0,0xf0,0x00,0x0f,
    0x0f,0xe0,0xe1,0x01,0x3c,0x3c,0x80,0x87,0x87,0xff,0xff,0xf7,0xff,0xff,0xfe,0xff,
    0xdf,0xff,0xff,0x83,0x87,0x07,0xf0,0xf8,0x00,0x0f,0x0f,0xe0,0xe1,0x01,0x3c,0x3c,
    0xf8,0xff,0x7f,0xff,0xff,0xef,0xff,0xff,0xfd,0xff,0x3f,0x3c,0x3c,0x80,0x87,0x07,
    0xf8,0x78,0x00,0x0f,0x0f,0xe0,0xe1,0x01,0x3c,0x3c,0x80,0x87,0x07,0x00,0x00,0x0c,
    0x00,0xe0,0x1f,0x00,0xfe,0x3f,0xc0,0xff,0x1f,0xf8,0xff,0x0f,0x3e,0xf3,0xc7,0xc7,
    0xf8,0xf3,0x30,0xfc,0x3c,0x0c,0x3f,0x0f,0x03,0xc0,0xc7,0x00,0xe0,0x3f,0x00,0xf8,
    0x1f,0x00,0xfc,0x3f,0x00,0xfe,0x3f,0x00,0xfe,0x3f,0x00,0xfc,0x1f,0x00,0xf3,0x07,
    0xc0,0xf8,0x03,0x30,0xfc,0x3f,0x0c,0xff,0x0f,0xc3,0xff,0xc7,0xf8,0xfb,0x33,0x7f,
    0xfc,0xff,0x1f,0xfe,0xff,0x01,0xff,0x3f,0x00,0xfe,0x01,0x00,0x0c,0x00,0x00,0x03,
    0x00,0xc0,0x00,0x00,0x30,0x00,0xf0,0x03,0xc0,0x01,0xf8,0x07,0xc0,0x00,0xfc,0x0f,
    0xe0,0x00,0xfe,0x1f,0x70,0x00,0x1f,0x3e,0x70,0x00,0x0f,0x3c,0x38,0x00,0x0f,0x3c,
    0x18,0x00,0x0f,0x3c,0x1c,0x00,0x0f,0x3c,0x0c,0x00,0x1f,0x3e,0x0e,0x00,0xfe,0x1f,
    0x07,0x00,0xfc,0x0f,0x07,0x00,0xf8,0x87,0x03,0x00,0xf0,0x83,0xc3,0x0f,0x00,0xc0,
    0xe1,0x1f,0x00,0xc0,0xf0,0x3f,0x00,0xe0,0xf8,0x7f,0x00,0x60,0x7c,0xf8,0x00,0x70,
    0x3c,0xf0,0x00,0x38,0x3c,0xf0,0x00,0x38,0x3c,0xf0,0x00,0x1c,0x3c,0xf0,0x00,0x0c,
    0x7c,0xf8,0x00,0x0e,0xf8,0x7f,0x00,0x06,0xf0,0x3f,0x00,0x07,0xe0,0x1f,0x80,0x03,
    0xc0,0x0f,0x00,0x1f,0x00,0xc0,0x3f,0x00,0xe0,0x7f,0x00,0xf0,0xff,0x00,0xf8,0xf1,
    0x00,0xf8,0xf1,0x00,0xf8,0xf1,0x00,0xf8,0xf3,0x00,0xf0,0x7b,0x00,0xe0,0x7f,0x00,
    0xc0,0x3f,0x00,0x80,0x0f,0x00,0xf0,0x1f,0x3c,0xf8,0x3f,0x3c,0xfc,0x3d,0x3c,0x7e,
    0x7c,0x3e,0x3f,0xf8,0x1f,0x3f,0xf0,0x1f,0x3f,0xf0,0x1f,0x3f,0xe0,0x0f,0x7f,0xe0,
    0x0f,0xff,0xf8,0x1f,0xfe,0xff,0x1f,0xfc,0xff,0x3f,0xfc,0x7f,0x7f,0xf0,0x3f,0x7e,
    0xc0,0x0f,0xfc,0xff,0xff,0xff,0xff,0xef,0x79,0x1e,0x03,0xe0,0xc1,0xc3,0x83,0x87,
    0x07,0x0f,0x0f,0x1e,0x3e,0x3c,0x78,0xf0,0xf0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,0x3c,
    0x78,0xf0,0xe0,0xc1,0x03,0x0f,0x1e,0x3c,0x78,0xe0,0xc1,0x83,0x0f,0x1e,0x3c,0xf0,
    0xe0,0x81,0x07,0x0f,0x1e,0x78,0xf0,0xc0,0x83,0x07,0x1e,0x3c,0xf8,0xe0,0xc1,0x83,
    0x07,0x1e,0x3c,0x78,0xf0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,0x3c,0x78,0x78,0xf0,0xe0,
    0xc1,0xc3,0x83,0x87,0x0f,0x0f,0x1e,0x1e,0x3c,0x3c,0x00,0x60,0x00,0x06,0x60,0x20,
    0x46,0xff,0xff,0xff,0xf8,0x01,0x0f,0xf8,0xc1,0x39,0x9c,0x83,0x10,0x80,0x07,0x00,
    0x1e,0x00,0x78,0x00,0xe0,0x01,0x80,0x07,0x00,0x1e,0xf0,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x3f,0xe0,0x01,0x80,0x07,0x00,0x1e,0x00,0x78,0x00,0xe0,
    0x01,0x80,0x07,0x00,0x1e,0x00,0xff,0xff,0xff,0xff,0x8f,0xe3,0x38,0xf7,0x3d,0x01,
    0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0x0f,0x80,0x03,0x0e,0x18,
    0x70,0xc0,0x01,0x03,0x0c,0x38,0xe0,0x80,0x01,0x06,0x1c,0x70,0xc0,0x80,0x03,0x0e,
    0x18,0x60,0xc0,0x01,0x07,0x0c,0x30,0xe0,0x80,0x03,0x06,0x1c,0x70,0x00,0xc0,0x1f,
    0x80,0xff,0x03,0xfe,0x3f,0xf8,0xff,0xc3,0xff,0x1f,0x7f,0xfc,0xf9,0xc1,0xcf,0x0f,
    0x7e,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x03,0xfe,0x1f,0xf0,0xff,
    0x80,0xff,0x07,0xfc,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0xfd,0xe0,0xe7,0x07,0x3f,
    0x7f,0xfc,0xf1,0xff,0x87,0xff,0x3f,0xf8,0xff,0x80,0xff,0x03,0xf0,0x07,0x00,0x00,
    0x07,0x3c,0xf0,0xe1,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x07,0x3f,0xf8,0xc1,0x0f,
    0x7e,0xf0,0x83,0x1f,0xfc,0xe0,0x07,0x3f,0xf8,0xc1,0x0f,0x7e,0xf0,0x83,0x1f,0xfc,
    0xe0,0x07,0x3f,0xf8,0x01,0xc0,0x1f,0x80,0xff,0x03,0xff,0x7f,0xf8,0xff,0xe3,0xff,
    0x3f,0x3f,0xfc,0xff,0xc0,0xff,0x07,0xfc,0x3f,0xe0,0x07,0x00,0x3f,0x00,0xf8,0x01,
    0xe0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x07,0xe0,0x0f,0x80,0x3f,0x00,0x7e,0x00,
    0xf8,0x01,0xe0,0x03,0x80,0x0f,0x00,0x7e,0x00,0xf0,0xff,0xdf,0xff,0xff,0xfe,0xff,
    0xf7,0xff,0xbf,0xff,0xff,0x01,0xc0,0x1f,0xc0,0xff,0x03,0xff,0x3f,0xfc,0xff,0xe3,
    0xff,0x9f,0x3f,0xfc,0xfd,0xc0,0xef,0x07,0x7e,0x3f,0xf0,0x03,0x80,0x1f,0x00,0x7e,
    0x00,0xfe,0x01,0xf0,0x03,0x80,0x7f,0x00,0xfc,0x07,0x00,0x7f,0x00,0xf0,0x07,0x00,
    0x3f,0x00,0xf8,0x7f,0xc0,0xff,0x03,0xff,0x3f,0xfc,0xfb,0xff,0xcf,0xff,0x7f,0xfc,
    0xff,0xc1,0xff,0x03,0xf0,0x07,0x00,0x00,0xfe,0x00,0xf8,0x03,0xf0,0x0f,0xc0,0x3f,
    0x80,0xff,0x00,0xfe,0x03,0xdc,0x0f,0x78,0x3f,0xe0,0xfc,0xc0,0xf1,0x03,0xc7,0x0f,
    0x0e,0x3f,0x38,0xfc,0x70,0xf0,0xe3,0xc0,0x8f,0x03,0x3f,0x07,0xfc,0xfc,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,
    0xf0,0x03,0xc0,0x0f,0xf8,0xff,0xc3,0xff,0x1f,0xfe,0xff,0xf0,0xff,0xc7,0xff,0x3f,
    0x1e,0x00,0xf0,0x00,0x80,0x07,0x00,0x3c,0x1f,0xe0,0xff,0x83,0xff,0x3f,0xfc,0xff,
    0xe3,0xff,0x3f,0x1f,0xfc,0x01,0xc0,0x1f,0x00,0xfc,0x00,0xe0,0x07,0x00,0x3f,0x00,
    0xf8,0x01,0xc0,0xff,0x01,0xff,0x1f,0xfc,0xfd,0xff,0xcf,0xff,0x3f,0xfc,0xff,0xc0,
    0xff,0x01,0xf8,0x03,0x00,0x80,0x3f,0x00,0xfe,0x1f,0xf8,0xff,0x83,0xff,0x3f,0xfc,
    0xff,0xe7,0x0f,0x7e,0x7e,0x00,0xe0,0x07,0x00,0x3f,0x00,0xf0,0xe3,0x07,0xbf,0xff,
    0xf1,0xff,0x3f,0xff,0xff,0xf7,0x0f,0x7f,0x7f,0xe0,0xff,0x03,0xfc,0x3f,0xc0,0xff,
    0x03,0xfc,0x3f,0xc0,0xef,0x03,0xfc,0x7e,0xe0,0xef,0x0f,0x7f,0xfc,0xff,0xc7,0xff,
    0x3f,0xf8,0xff,0x01,0xff,0x0f,0x80,0x3f,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x7f,0x00,0xf0,0x01,0xc0,0x07,0x00,0x3e,0x00,0xf8,0x00,0xe0,
    0x03,0x80,0x1f,0x00,0x7c,0x00,0xf0,0x03,0x80,0x0f,0x00,0x7e,0x00,0xf0,0x01,0xc0,
    0x0f,0x00,0x7e,0x00,0xf0,0x01,0xc0,0x0f,0x00,0x7e,0x00,0xf0,0x03,0x80,0x0f,0x00,
    0x7c,0x00,0xf0,0x03,0x80,0x1f,0x00,0xfc,0x00,0x00,0x80,0x1f,0x00,0xfe,0x07,0xf0,
    0xff,0x80,0xff,0x1f,0xfc,0xff,0xc1,0x07,0x3f,0x3c,0xc0,0xc3,0x03,0x3c,0x3c,0xc0,
    0x83,0x07,0x1f,0xf8,0xff,0x01,0xfe,0x07,0xf0,0xff,0xc0,0xff,0x3f,0xfe,0xf0,0xe7,
    0x07,0x7e,0x3f,0xc0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x03,0xfc,0x7f,0xe0,0xef,0x0f,
    0x7f,0xfe,0xff,0xc7,0xff,0x3f,0xf8,0xff,0x01,0xff,0x0f,0xc0,0x1f,0x00,0xc0,0x1f,
    0x80,0xff,0x03,0xfe,0x3f,0xf8,0xff,0xe3,0xff,0x1f,0x7f,0xfc,0xfd,0xc1,0xef,0x07,
    0x7c,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x07,0x7f,0x7f,0xfc,0xfb,
    0xff,0x9f,0xff,0xff,0xfc,0xff,0x87,0x7f,0x3f,0xf0,0xf9,0x00,0xc0,0xf7,0x03,0x3f,
    0x3f,0xfc,0xf9,0xff,0x87,0xff,0x1f,0xfc,0xff,0x80,0xff,0x01,0xf0,0x07,0x00,0xff,
    0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0x30,0x8c,0x63,
    0xdf,0x13,0x00,0x00,0x00,0x03,0x80,0x0f,0xc0,0x3f,0xc0,0xff,0xe0,0xff,0xf0,0x7f,
    0xf0,0x3f,0xc0,0x1f,0x00,0x1f,0x00,0xfc,0x00,0xf0,0x1f,0x80,0xff,0x01,0xf8,0x3f,
    0x00,0xff,0x07,0xe0,0x3f,0x00,0xfe,0x00,0xc0,0x03,0x00,0x08,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x03,0x00,0x7c,0x00,
    0xf0,0x07,0xc0,0xff,0x00,0xfe,0x1f,0xc0,0xff,0x01,0xf8,0x3f,0x00,0xff,0x00,0xe0,
    0x03,0xc0,0x0f,0xe0,0x3f,0xf0,0x7f,0xf8,0x3f,0xf8,0x3f,0xf0,0x1f,0xc0,0x0f,0x00,
    0x0f,0x00,0x04,0x00,0x00,0xc0,0x1f,0x00,0xff,0x07,0xfc,0xff,0xc1,0xff,0x3f,0xfe,
    0xff,0xe7,0x8f,0x7f,0x7f,0xe0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x03,0xfc,0x00,0xc0,
    0x0f,0x00,0xfe,0x00,0xf0,0x07,0xc0,0x3f,0x00,0xfe,0x01,0xf0,0x07,0x00,0x3f,0x00,
    0xf8,0x00,0x80,0x07,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1f,0x00,0xf8,
    0x01,0x80,0x1f,0x00,0xf8,0x01,0x80,0x1f,0x00,0xf8,0x01,0x00,0xc0,0x7f,0x00,0x00,
    0xe0,0xff,0x0f,0x00,0xe0,0xff,0xff,0x00,0xc0,0x1f,0xf0,0x07,0xc0,0x0f,0x00,0x3f,
    0x80,0x1f,0x00,0xf0,0x01,0x1f,0x00,0x80,0x0f,0x3e,0x00,0x00,0x3c,0x78,0x80,0x8f,
    0xe3,0xf1,0x01,0x7f,0x0f,0xc7,0x03,0xff,0x3f,0xbc,0x07,0x3c,0x7c,0xe0,0x1e,0x78,
    0xe0,0x81,0x7f,0xf0,0x80,0x07,0xfe,0xc0,0x03,0x1e,0xf8,0x03,0x07,0x38,0xe0,0x0f,
    0x1e,0xe0,0x80,0x3f,0x78,0xc0,0x03,0xff,0xe0,0x01,0x07,0xdc,0x83,0x07,0x1e,0x78,
    0x0f,0x1e,0x78,0xf0,0x7c,0xf0,0xf0,0xe1,0xe1,0xc1,0xff,0xff,0x83,0x0f,0xfe,0xf9,
    0x07,0x3c,0xe0,0xc3,0x07,0xf0,0x01,0x00,0x00,0x80,0x0f,0x00,0x00,0x00,0x7c,0x00,
    0x00,0x00,0xe0,0x07,0x00,0x01,0x00,0xff,0x80,0x07,0x00,0xf8,0xff,0x3f,0x00,0x80,
    0xff,0xff,0x00,0x00,0xf0,0x3f,0x00,0x00,0x00,0xfc,0x01,0x00,0xf0,0x07,0x00,0xe0,
    0x1f,0x00,0x80,0xff,0x00,0x00,0xfe,0x03,0x00,0xfc,0x0f,0x00,0xf0,0x7f,0x00,0xc0,
    0xf7,0x01,0x80,0xdf,0x07,0x00,0x3e,0x3f,0x00,0xf8,0xfc,0x00,0xf0,0xe3,0x03,0xc0,
    0x87,0x1f,0x80,0x1f,0x7e,0x00,0x7e,0xf0,0x01,0xf8,0xc0,0x0f,0xf0,0x03,0x3f,0xc0,
    0x0f,0xf8,0x01,0xff,0xff,0x07,0xfe,0xff,0x1f,0xf8,0xff,0xff,0xe0,0xff,0xff,0xc3,
    0xff,0xff,0x0f,0x3f,0x00,0x7e,0xfc,0x00,0xf8,0xf9,0x01,0xe0,0xe7,0x07,0x00,0xbf,
    0x0f,0x00,0xfc,0xff,0xff,0x80,0xff,0xff,0xc3,0xff,0xff,0xe3,0xff,0xff,0xf3,0xff,
    0xff,0xf9,0x01,0xfc,0xfd,0x00,0xfc,0x7e,0x00,0x7e,0x3f,0x00,0xbf,0x1f,0x80,0xdf,
    0x0f,0xe0,0xe7,0xff,0xff,0xf1,0xff,0x7f,0xf8,0xff,0x3f,0xfc,0xff,0x3f,0xfe,0xff,
    0x3f,0x3f,0x80,0xbf,0x1f,0x80,0xff,0x0f,0x80,0xff,0x07,0xc0,0xff,0x03,0xe0,0xff,
    0x01,0xf8,0xff,0x00,0xfe,0xff,0xff,0x7f,0xff,0xff,0xbf,0xff,0xff,0xcf,0xff,0xff,
    0xe1,0xff,0x3f,0x00,0x00,0xfe,0x00,0xc0,0xff,0x07,0xe0,0xff,0x0f,0xf0,0xff,0x3f,
    0xf8,0xff,0x3f,0xfc,0x83,0x7f,0xfc,0x01,0x7e,0xfe,0x00,0xfe,0x7e,0x00,0xfc,0x7f,
    0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,
    0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x7f,0x00,0xfc,0x7e,0x00,0xfc,
    0xfe,0x00,0xfe,0xfe,0x00,0x7f,0xfc,0x83,0x7f,0xf8,0xff,0x3f,0xf0,0xff,0x1f,0xe0,
    0xff,0x0f,0xc0,0xff,0x07,0x00,0xff,0x00,0xff,0x7f,0x80,0xff,0xff,0xc1,0xff,0xff,
    0xe1,0xff,0xff,0xf1,0xff,0xff,0xf9,0x01,0xff,0xfc,0x00,0xfe,0x7e,0x00,0x7e,0x3f,
    0x00,0xbf,0x1f,0x80,0xff,0x0f,0x80,0xff,0x07,0xc0,0xff,0x03,0xe0,0xff,0x01,0xf0,
    0xff,0x00,0xf8,0x7f,0x00,0xfc,0x3f,0x00,0xfe,0x1f,0x00,0xff,0x0f,0xc0,0xff,0x07,
    0xe0,0xf7,0x03,0xf0,0xfb,0x01,0xfc,0xfd,0x80,0x7f,0xfe,0xff,0x3f,0xff,0xff,0x8f,
    0xff,0xff,0xc3,0xff,0x7f,0xe0,0xff,0x0f,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x3f,0x00,0xf0,0x03,0x00,0x3f,0x00,0xf0,
    0x03,0x00,0x3f,0x00,0xf0,0xff,0x3f,0xff,0xff,0xf3,0xff,0x3f,0xff,0xff,0xf3,0xff,
    0x3f,0x3f,0x00,0xf0,0x03,0x00,0x3f,0x00,0xf0,0x03,0x00,0x3f,0x00,0xf0,0x03,0x00,
    0x3f,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0xfc,0x00,0xe0,
    0x07,0x00,0x3f,0x00,0xf8,0x01,0xc0,0x0f,0x00,0xfe,0xff,0xf3,0xff,0x9f,0xff,0xff,
    0xfc,0xff,0xe7,0xff,0x3f,0x3f,0x00,0xf8,0x01,0xc0,0x0f,0x00,0x7e,0x00,0xf0,0x03,
    0x80,0x1f,0x00,0xfc,0x00,0xe0,0x07,0x00,0x3f,0x00,0xf8,0x01,0xc0,0x0f,0x00,0x7e,
    0x00,0x00,0x00,0xfc,0x03,0x00,0xff,0x1f,0x80,0xff,0xff,0x80,0xff,0xff,0x83,0xff,
    0xff,0x87,0xff,0xc0,0x1f,0x7f,0x00,0x3f,0x7f,0x00,0xfc,0x7e,0x00,0xf0,0xfd,0x00,
    0x00,0xfc,0x00,0x00,0xf8,0x01,0x00,0xf0,0x03,0x00,0xe0,0x07,0xf8,0xff,0x0f,0xf0,
    0xff,0x1f,0xe0,0xff,0x3f,0xc0,0xff,0x7f,0x80,0xff,0xff,0x01,0x80,0xf7,0x03,0x80,
    0xef,0x0f,0x00,0x9f,0x3f,0x00,0x3f,0xff,0xc1,0x7f,0xfc,0xff,0xff,0xf0,0xff,0xff,
    0xc1,0xff,0x9f,0x03,0xfe,0x1f,0x07,0xf0,0x07,0x0e,0x3f,0x00,0xfe,0x1f,0x00,0xff,
    0x0f,0x80,0xff,0x07,0xc0,0xff,0x03,0xe0,0xff,0x01,0xf0,0xff,0x00,0xf8,0x7f,0x00,
    0xfc,0x3f,0x00,0xfe,0x1f,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xfc,0x3f,0x00,0xfe,0x1f,0x00,0xff,0x0f,0x80,
    0xff,0x07,0xc0,0xff,0x03,0xe0,0xff,0x01,0xf0,0xff,0x00,0xf8,0x7f,0x00,0xfc,0x3f,
    0x00,0xfe,0x1f,0x00,0xff,0x0f,0x80,0xff,0x07,0xc0,0x0f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0x00,0xf0,0x03,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,0x00,0x3f,
    0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,
    0x00,0x3f,0x00,0xfc,0x00,0xf0,0xff,0xc0,0xff,0x03,0xff,0x0f,0xfc,0x3f,0xf0,0xff,
    0xc0,0xff,0x87,0xbf,0xff,0x7f,0xfe,0xff,0xf1,0xff,0x83,0xff,0x07,0xf8,0x07,0x3f,
    0x00,0x7f,0x7e,0x00,0x7f,0xfc,0x00,0x7e,0xf8,0x01,0x7e,0xf0,0x03,0x7e,0xe0,0x07,
    0xfe,0xc0,0x0f,0xfe,0x80,0x1f,0xfe,0x00,0x3f,0xfe,0x00,0x7e,0xfe,0x00,0xfc,0xfc,
    0x00,0xf8,0xfd,0x00,0xf0,0xff,0x01,0xe0,0xff,0x07,0xc0,0xff,0x0f,0x80,0xff,0x3f,
    0x00,0xff,0xfc,0x00,0xfe,0xf8,0x03,0xfc,0xe0,0x07,0xf8,0x81,0x1f,0xf0,0x03,0x7f,
    0xe0,0x07,0xfc,0xc1,0x0f,0xf0,0x87,0x1f,0xc0,0x0f,0x3f,0x80,0x3f,0x7e,0x00,0xfe,
    0xfc,0x00,0xf8,0xfb,0x01,0xe0,0x07,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,0x00,
    0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,
    0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,
    0x03,0xc0,0x0f,0x00,0x3f,0x00,0xfc,0x00,0xf0,0x03,0xc0,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0xfc,0xff,0x0f,0xe0,0xff,0x7f,0x00,0xff,
    0xff,0x03,0xf8,0xff,0x3f,0xe0,0xff,0xff,0x01,0xff,0xff,0x0f,0xf8,0xff,0x7f,0xc0,
    0xff,0xff,0x03,0xff,0xff,0x3f,0x78,0xff,0xef,0xc1,0xfb,0x7f,0x0f,0xde,0xff,0x7b,
    0xf0,0xfe,0xdf,0xc7,0xf3,0xff,0x3c,0x9e,0xff,0xe7,0xf1,0xfc,0x3f,0x8f,0xe7,0xff,
    0xf9,0x1e,0xff,0x8f,0xf7,0xf8,0x7f,0xbc,0xc7,0xff,0xe3,0x3d,0xfe,0x1f,0xef,0xf1,
    0xff,0xf8,0x87,0xff,0x87,0x3f,0xfc,0x3f,0xfc,0xe1,0xff,0xe1,0x0f,0xff,0x0f,0x3f,
    0xf8,0x7f,0xf0,0xc1,0x0f,0x3f,0x00,0xfe,0x3f,0x00,0xff,0x3f,0x80,0xff,0x1f,0xc0,
    0xff,0x1f,0xe0,0xff,0x0f,0xf0,0xff,0x0f,0xf8,0xff,0x07,0xfc,0xff,0x07,0xfe,0xff,
    0x07,0xff,0xef,0x83,0xff,0xe7,0xc3,0xff,0xf3,0xe1,0xff,0xf1,0xf1,0xff,0xf8,0xf8,
    0x7f,0xf8,0xfc,0x3f,0xfc,0xfe,0x1f,0x7c,0xff,0x0f,0xfc,0xff,0x07,0xfe,0xff,0x03,
    0xfe,0xff,0x01,0xff,0xff,0x00,0xff,0x7f,0x80,0xff,0x3f,0x80,0xff,0x1f,0x80,0xff,
    0x0f,0xc0,0xff,0x07,0xc0,0x0f,0x00,0xfe,0x01,0x00,0xfe,0x1f,0x00,0xfe,0xff,0x01,
    0xfc,0xff,0x0f,0xf8,0xff,0x7f,0xf0,0x0f,0xfc,0xc3,0x1f,0xe0,0x8f,0x3f,0x00,0x7f,
    0x7e,0x00,0xf8,0xf9,0x01,0xe0,0xf7,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,
    0xff,0x00,0xc0,0xff,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,0xc0,
    0xef,0x07,0x80,0x9f,0x1f,0x00,0x7e,0xfe,0x00,0xfc,0xf1,0x07,0xf8,0xc3,0x3f,0xf8,
    0x0f,0xfe,0xff,0x1f,0xf0,0xff,0x3f,0x80,0xff,0x7f,0x00,0xf8,0x7f,0x00,0x80,0x7f,
    0x00,0xff,0xff,0xe0,0xff,0x7f,0xfc,0xff,0x9f,0xff,0xff,0xf7,0xff,0xff,0x7e,0xc0,
    0xff,0x0f,0xf0,0xff,0x01,0xfc,0x3f,0x80,0xff,0x07,0xf0,0xff,0x00,0xfe,0x1f,0xe0,
    0xff,0x03,0xfe,0xfe,0xff,0xdf,0xff,0xff,0xf9,0xff,0x3f,0xff,0xff,0xe3,0xff,0x1f,
    0xfc,0x00,0x80,0x1f,0x00,0xf0,0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,
    0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,0x1f,0x00,0x00,0x00,0xfe,0x01,0x00,0xfe,
    0x1f,0x00,0xfe,0xff,0x01,0xfc,0xff,0x0f,0xf8,0xff,0x7f,0xf0,0x0f,0xfc,0xc3,0x1f,
    0xe0,0x8f,0x3f,0x00,0x7f,0x7e,0x00,0xf8,0xf9,0x01,0xe0,0xf7,0x03,0x00,0xff,0x0f,
    0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,0xc0,0xff,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,
    0x00,0xf0,0xff,0x00,0xc6,0xef,0x07,0xbc,0x9f,0x1f,0xf0,0x7f,0xfe,0xc0,0xff,0xf1,
    0x07,0xfe,0xc3,0x3f,0xf0,0x07,0xfe,0xff,0x1f,0xf0,0xff,0xff,0x80,0xff,0xff,0x07,
    0xf8,0x7f,0x3f,0x80,0x3f,0x78,0x00,0x00,0xc0,0x00,0xff,0xff,0x07,0xff,0xff,0x0f,
    0xff,0xff,0x1f,0xff,0xff,0x3f,0xff,0xff,0x3f,0x3f,0x00,0x7f,0x3f,0x00,0x7e,0x3f,
    0x00,0x7e,0x3f,0x00,0x7e,0x3f,0x00,0x7e,0x3f,0x00,0x3e,0x3f,0x00,0x3f,0xff,0xff,
    0x1f,0xff,0xff,0x0f,0xff,0xff,0x03,0xff,0xff,0x0f,0xff,0xff,0x1f,0x3f,0x80,0x1f,
    0x3f,0x00,0x3f,0x3f,0x00,0x3f,0x3f,0x00,0x3f,0x3f,0x00,0x3f,0x3f,0x00,0x3f,0x3f,
    0x00,0x3f,0x3f,0x00,0x3f,0x3f,0x00,0x3f,0x3f,0x00,0x7f,0x3f,0x00,0xfe,0xc0,0x7f,
    0x00,0xf8,0xff,0x01,0xfe,0xff,0x83,0xff,0xff,0xe3,0xff,0xff,0xf9,0x07,0xfe,0xfd,
    0x01,0xfe,0x7e,0x00,0x7e,0x3f,0x00,0x80,0x1f,0x00,0xc0,0x3f,0x00,0xe0,0xff,0x00,
    0xe0,0xff,0x0f,0xe0,0xff,0x3f,0xe0,0xff,0x7f,0x80,0xff,0x7f,0x00,0xf8,0x7f,0x00,
    0xc0,0x3f,0x00,0x80,0xff,0x07,0xc0,0xff,0x03,0xe0,0xff,0x03,0xf8,0xfb,0x03,0xfe,
    0xfc,0xff,0x7f,0xfc,0xff,0x1f,0xfc,0xff,0x07,0xfc,0xff,0x00,0xf0,0x1f,0x00,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x7e,0x00,0xc0,
    0x0f,0x00,0xf8,0x01,0x00,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,0x1f,0x00,0xf0,
    0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x3f,0x00,0xe0,0x07,0x00,0xfc,
    0x00,0x80,0x1f,0x00,0xf0,0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x3f,
    0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,0x1f,0x00,0x3f,0x00,0xff,0x0f,0xc0,0xff,0x03,
    0xf0,0xff,0x00,0xfc,0x3f,0x00,0xff,0x0f,0xc0,0xff,0x03,0xf0,0xff,0x00,0xfc,0x3f,
    0x00,0xff,0x0f,0xc0,0xff,0x03,0xf0,0xff,0x00,0xfc,0x3f,0x00,0xff,0x0f,0xc0,0xff,
    0x03,0xf0,0xff,0x00,0xfc,0x3f,0x00,0xff,0x0f,0xc0,0xff,0x03,0xf0,0xff,0x00,0xfc,
    0x3f,0x00,0xff,0x1f,0xe0,0xef,0x0f,0xfc,0xf9,0xff,0x7f,0xfc,0xff,0x0f,0xfe,0xff,
    0x01,0xff,0x3f,0x00,0xfe,0x01,0x3f,0x00,0xfc,0x1f,0x00,0xbf,0x0f,0x80,0xdf,0x0f,
    0xc0,0xe7,0x07,0xf0,0xe3,0x03,0xf8,0xf1,0x01,0x7c,0xf8,0x01,0x3e,0xf8,0x80,0x1f,
    0x7c,0xc0,0x07,0x7e,0xe0,0x03,0x3e,0xf8,0x01,0x1f,0x7c,0x80,0x0f,0x3e,0x80,0x0f,
    0x1f,0xc0,0xc7,0x07,0xe0,0xe3,0x03,0xe0,0xf3,0x01,0xf0,0x7d,0x00,0xf8,0x3e,0x00,
    0x78,0x0f,0x00,0xfc,0x07,0x00,0xfe,0x03,0x00,0xfe,0x00,0x00,0x7f,0x00,0x80,0x3f,
    0x00,0x80,0x0f,0x00,0xc0,0x07,0x00,0x3f,0xc0,0x0f,0xf0,0xfb,0x01,0x7e,0x80,0xdf,
    0x0f,0xf0,0x03,0xfc,0x7c,0x80,0x3f,0xe0,0xe7,0x07,0xfe,0x01,0x1f,0x3f,0xf0,0x0f,
    0xfc,0xf0,0x81,0x7f,0xe0,0x87,0x0f,0xfc,0x07,0x3f,0x7c,0xe0,0x3d,0xf8,0xe0,0x87,
    0xe7,0xc1,0x07,0x3e,0x3c,0x0f,0x3f,0xf0,0xe1,0x79,0xf8,0x80,0x0f,0x8f,0xc7,0x07,
    0x7c,0x78,0x3c,0x3e,0xc0,0xe7,0xe1,0xf1,0x01,0x3e,0x0f,0x8f,0x07,0xf0,0x79,0x78,
    0x3e,0x00,0xcf,0x83,0xf7,0x01,0xf8,0x1e,0xbc,0x0f,0xc0,0x7f,0xe0,0x3d,0x00,0xfe,
    0x03,0xef,0x01,0xe0,0x1f,0xf8,0x0f,0x00,0xff,0x80,0x3f,0x00,0xf8,0x07,0xfc,0x01,
    0x80,0x1f,0xe0,0x0f,0x00,0xfc,0x00,0x7f,0x00,0xe0,0x07,0xf0,0x01,0x00,0x3f,0x80,
    0x0f,0x00,0x7f,0x00,0x7e,0xfe,0x00,0x7f,0xfc,0x80,0x3f,0xfc,0x81,0x1f,0xf8,0xc1,
    0x1f,0xf8,0xc3,0x0f,0xf0,0xe3,0x07,0xe0,0xe7,0x07,0xe0,0xf7,0x03,0xc0,0xff,0x03,
    0xc0,0xff,0x01,0x80,0xff,0x00,0x00,0xff,0x00,0x00,0x7f,0x00,0x00,0x7f,0x00,0x00,
    0xff,0x00,0x80,0xff,0x01,0xc0,0xff,0x01,0xc0,0xff,0x03,0xe0,0xf7,0x07,0xf0,0xe7,
    0x07,0xf0,0xc3,0x0f,0xf8,0xc1,0x0f,0xf8,0x81,0x1f,0xfc,0x80,0x3f,0xfe,0x00,0x3f,
    0x7e,0x00,0x7f,0x7f,0x00,0x7e,0x3f,0x00,0xfe,0x7e,0x00,0x7e,0x7e,0x00,0x7f,0xfc,
    0x00,0x3f,0xfc,0x80,0x3f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf0,0xc3,0x0f,0xf0,0xc3,
    0x0f,0xe0,0xe7,0x07,0xe0,0xe7,0x07,0xc0,0xff,0x03,0xc0,0xff,0x03,0x80,0xff,0x01,
    0x80,0xff,0x01,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,
    0x7e,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,0x7e,
    0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x80,0x3f,0x00,0xf8,0x03,0x80,0x3f,0x00,
    0xf0,0x03,0x00,0x3f,0x00,0xf0,0x07,0x00,0x7f,0x00,0xf0,0x07,0x00,0x7e,0x00,0xe0,
    0x0f,0x00,0xfe,0x00,0xe0,0x0f,0x00,0xfe,0x00,0xc0,0x0f,0x00,0xfc,0x01,0xc0,0x1f,
    0x00,0xfc,0x01,0x80,0x1f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0xff,0xe3,0xc7,0x8f,0x1f,0x3f,0x7e,0xfc,
    0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x3f,
    0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0xff,0xff,0xff,0xff,0x0f,0x07,0x38,0x80,
    0x01,0x1c,0xe0,0x00,0x06,0x70,0x80,0x03,0x18,0xc0,0x01,0x0e,0x60,0x00,0x03,0x38,
    0x80,0x01,0x0c,0xe0,0x00,0x07,0x30,0x80,0x03,0x1c,0xc0,0x00,0x0e,0x70,0x00,0x03,
    0x38,0xc0,0x01,0xff,0xff,0xff,0xff,0x8f,0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,
    0x8f,0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,
    0xe3,0xc7,0x8f,0x1f,0x3f,0x7e,0xfc,0xff,0xff,0xff,0xff,0x0f,0xc0,0x0f,0x00,0x3f,
    0x00,0xfe,0x01,0xf8,0x07,0xe0,0x1f,0xc0,0xff,0x00,0xcf,0x03,0x3c,0x1f,0x78,0x78,
    0xe0,0xe1,0xc1,0x87,0x0f,0x0f,0x3c,0x3c,0xf0,0x79,0x80,0xe7,0x01,0xde,0x07,0xf8,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x1f,0x0f,0x0f,0x87,0x83,0x03,0xe0,
    0x1f,0xc0,0xff,0x07,0xff,0x7f,0xfc,0xff,0xe3,0xff,0x3f,0x3f,0xfc,0xf9,0xc0,0x0f,
    0x00,0x7e,0x00,0xfc,0x83,0xff,0x1f,0xff,0xff,0xfc,0xe3,0xf7,0x07,0xbf,0x1f,0xf8,
    0xfd,0xe0,0xef,0x8f,0x7f,0xff,0xff,0xf3,0xff,0x9f,0xff,0xff,0xf8,0xef,0x0f,0x1f,
    0x7f,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,0x1f,0x00,0xf0,0x03,0x00,0x7e,0x00,
    0xc0,0x0f,0x00,0xf8,0xf1,0x03,0xbf,0xff,0xe1,0xf7,0x7f,0xfc,0xff,0x9f,0xff,0xff,
    0xf3,0x1f,0xff,0xfe,0x80,0xdf,0x1f,0xf0,0xff,0x01,0xfc,0x3f,0x80,0xff,0x07,0xf0,
    0xff,0x00,0xfe,0x1f,0xc0,0xff,0x07,0xfc,0xff,0x80,0xdf,0x3f,0xfc,0xfb,0xff,0x3f,
    0xff,0xff,0xe7,0xff,0x7f,0xfc,0xfe,0x87,0x1f,0x3f,0x00,0x80,0x3f,0x00,0xff,0x07,
    0xfe,0x7f,0xf8,0xff,0xe7,0xff,0x3f,0x7f,0xf8,0xfb,0x81,0xff,0x07,0xf8,0x3f,0x00,
    0xf8,0x01,0xc0,0x0f,0x00,0x7e,0x00,0xf0,0x03,0x80,0x3f,0x00,0xf8,0x01,0xdf,0x1f,
    0xfc,0xfe,0xff,0xe7,0xff,0x1f,0xfe,0x7f,0xe0,0xff,0x01,0xf8,0x03,0x00,0xc0,0x0f,
    0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x7c,
    0xfc,0xf0,0xdf,0x8f,0xff,0xfd,0xfc,0xff,0xcf,0xff,0xff,0xfe,0xf0,0xef,0x07,0xfe,
    0x7f,0xe0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x03,0xfc,0x7f,
    0xe0,0xef,0x07,0xfe,0xfe,0xf0,0xef,0xff,0xff,0xfc,0xff,0x8f,0xff,0xff,0xf0,0xdf,
    0x0f,0x7c,0xfc,0xc0,0x1f,0x00,0xff,0x07,0xf8,0xff,0xc0,0xff,0x1f,0xfe,0xf0,0xe3,
    0x07,0x3e,0x3e,0xc0,0xf3,0x03,0x7c,0xff,0xff,0xf7,0xff,0x7f,0xff,0xff,0xf7,0xff,
    0x7f,0x3f,0x00,0xf0,0x03,0x00,0x3e,0x00,0xe0,0x07,0x7c,0xfe,0xe0,0xc7,0xff,0x3f,
    0xf8,0xff,0x01,0xff,0x0f,0x80,0x3f,0x00,0xe0,0xc7,0x3f,0xff,0xf9,0xcf,0x0f,0x7e,
    0xf0,0xe3,0x7f,0xff,0xfb,0xdf,0xff,0xf8,0xc1,0x0f,0x7e,0xf0,0x83,0x1f,0xfc,0xe0,
    0x07,0x3f,0xf8,0xc1,0x0f,0x7e,0xf0,0x83,0x1f,0xfc,0xe0,0x07,0x3f,0xf8,0x01,0xc0,
    0xc7,0x0f,0xff,0xfc,0xf8,0xdf,0xcf,0xff,0xff,0xfc,0xff,0xef,0x0f,0xff,0x7e,0xe0,
    0xff,0x07,0xfe,0x3f,0xc0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x03,0xfc,0x3f,0xc0,0xff,
    0x07,0xfe,0x7f,0xe0,0xef,0x0f,0xff,0xfe,0xff,0xcf,0xff,0xff,0xf8,0xdf,0x0f,0xff,
    0xfc,0xc0,0xc7,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x7f,0xe0,0xe7,0x0f,0x7f,
    0xfe,0xff,0x83,0xff,0x1f,0xe0,0x3f,0x00,0x3f,0x00,0xf8,0x01,0xc0,0x0f,0x00,0x7e,
    0x00,0xf0,0x03,0x80,0x1f,0x00,0xfc,0x00,0xe0,0xc7,0x0f,0x3f,0xff,0xf9,0xfd,0xdf,
    0xff,0xff,0xfe,0xff,0xff,0x0f,0xff,0x3f,0xf0,0xff,0x80,0xff,0x07,0xfc,0x3f,0xe0,
    0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x03,0xfe,0x1f,0xf0,0xff,0x80,0xff,0x07,
    0xfc,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0x0f,0xff,0xff,0xff,0x3f,0x00,
    0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x00,0x00,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x3f,
    0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,
    0x1f,0x3f,0xfe,0xff,0xff,0xff,0xff,0xfb,0x03,0x3f,0x00,0xf8,0x01,0xc0,0x0f,0x00,
    0x7e,0x00,0xf0,0x03,0x80,0x1f,0x00,0xfc,0x00,0xe0,0x07,0x7e,0x3f,0xf8,0xf9,0xc1,
    0xcf,0x0f,0x3f,0x7e,0xfc,0xf0,0xf3,0x83,0xdf,0x0f,0xfc,0x3e,0xe0,0xff,0x01,0xff,
    0x1f,0xf8,0xff,0xc0,0xff,0x0f,0xfe,0x7c,0xf0,0xe7,0x87,0x1f,0x7e,0xfc,0xf0,0xe3,
    0x07,0x3f,0x3f,0xf8,0xf9,0x81,0xdf,0x0f,0xfc,0x7e,0xc0,0x0f,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0x3f,0x3e,0xf0,0xc3,0xef,0x3f,0xfe,0xf3,0xff,0xdf,0xff,0xfd,0xff,0xff,0x7f,
    0xff,0xff,0xff,0xff,0x3f,0xfe,0xe3,0xff,0x07,0x7f,0xf0,0xff,0xc0,0x0f,0xfc,0x3f,
    0xf0,0x03,0xff,0x0f,0xfc,0xc0,0xff,0x03,0x3f,0xf0,0xff,0xc0,0x0f,0xfc,0x3f,0xf0,
    0x03,0xff,0x0f,0xfc,0xc0,0xff,0x03,0x3f,0xf0,0xff,0xc0,0x0f,0xfc,0x3f,0xf0,0x03,
    0xff,0x0f,0xfc,0xc0,0xff,0x03,0x3f,0xf0,0xff,0xc0,0x0f,0xfc,0x3f,0xf0,0x03,0x3f,
    0x3f,0x7e,0xf8,0xf9,0xcf,0xef,0xff,0xfe,0xff,0xf7,0xff,0xff,0x7f,0xf8,0xff,0x81,
    0xff,0x07,0xfc,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x03,0xfe,0x1f,
    0xf0,0xff,0x80,0xff,0x07,0xfc,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,
    0x03,0x7e,0x80,0x3f,0x00,0xfc,0x3f,0xe0,0xff,0x0f,0xfe,0xff,0xc3,0xff,0xff,0xfc,
    0xc1,0x9f,0x1f,0xf0,0xfb,0x03,0xfe,0x3f,0x80,0xff,0x07,0xf0,0xff,0x00,0xfe,0x1f,
    0xc0,0xff,0x03,0xf8,0xff,0x80,0xbf,0x1f,0xf0,0xf3,0x87,0x7f,0xfc,0xff,0x8f,0xff,
    0xff,0xe0,0xff,0x0f,0xf0,0x7f,0x00,0xf8,0x03,0x00,0x3f,0x7e,0xe0,0xe7,0x3f,0xfc,
    0xfe,0x8f,0xff,0xff,0xf3,0xff,0x7f,0xfe,0xe1,0xdf,0x1f,0xf0,0xfb,0x03,0xfe,0x3f,
    0x80,0xff,0x07,0xf0,0xff,0x00,0xfe,0x1f,0xc0,0xff,0x03,0xf8,0xff,0x80,0xff,0x1f,
    0xf0,0xfb,0x87,0x7f,0xff,0xff,0xe7,0xff,0xff,0xfc,0xfe,0x8f,0x9f,0x7f,0xf0,0xe3,
    0x07,0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,
    0x80,0x1f,0x00,0xf0,0x03,0x00,0x00,0xc0,0xc7,0x0f,0xff,0xfd,0xf8,0xdf,0xcf,0xff,
    0xff,0xfc,0xff,0xef,0x0f,0xff,0x7e,0xe0,0xff,0x07,0xfe,0x3f,0xc0,0xff,0x03,0xfc,
    0x3f,0xc0,0xff,0x03,0xfc,0x3f,0xc0,0xff,0x07,0xfe,0x7e,0xe0,0xef,0x0f,0xff,0xfc,
    0xff,0xcf,0xff,0xff,0xf8,0xdf,0x0f,0xff,0xfd,0xc0,0xc7,0x0f,0x00,0xfc,0x00,0xc0,
    0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,
    0x3f,0xfe,0xf3,0xbf,0xff,0xff,0xff,0xff,0x0f,0x7f,0xf0,0x03,0x3f,0xf0,0x03,0x3f,
    0xf0,0x03,0x3f,0xf0,0x03,0x3f,0xf0,0x03,0x3f,0xf0,0x03,0x3f,0xf0,0x03,0x3f,0x00,
    0xe0,0x1f,0xe0,0xff,0xe1,0xff,0x8f,0xff,0x7f,0x7f,0xf8,0xfd,0xc0,0xf7,0x03,0xc0,
    0x1f,0x00,0xff,0x03,0xf8,0xff,0xe0,0xff,0x0f,0xfe,0x7f,0xc0,0xff,0x03,0xf8,0x0f,
    0x00,0xff,0x07,0xfc,0x3f,0xf8,0xff,0xff,0xe7,0xff,0x0f,0xff,0x1f,0xe0,0x1f,0x00,
    0x7e,0xfc,0xf8,0xf1,0xe3,0xe7,0xff,0xff,0xff,0xff,0xfd,0xf8,0xf1,0xe3,0xc7,0x8f,
    0x1f,0x3f,0x7e,0xfc,0xf8,0xf1,0xe3,0xc7,0x8f,0x7f,0xff,0xfc,0xe1,0x03,0x3f,0xe0,
    0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x03,0xfe,0x1f,0xf0,0xff,0x80,0xff,0x07,
    0xfc,0x3f,0xe0,0xff,0x01,0xff,0x0f,0xf8,0x7f,0xc0,0xff,0x03,0xfe,0x1f,0xf0,0xff,
    0xc0,0xff,0x0f,0xff,0xff,0xff,0xf7,0xff,0xbf,0xff,0xfb,0xf9,0xcf,0x0f,0x3f,0x7e,
    0x3e,0xc0,0xef,0x03,0xfc,0x7e,0xc0,0xc7,0x07,0x7c,0x7c,0xe0,0xc7,0x0f,0x3e,0xf8,
    0xe0,0x83,0x0f,0x3e,0xf8,0xf0,0x01,0x1f,0x1f,0xf0,0xf1,0x01,0x9f,0x0f,0xe0,0xfb,
    0x00,0xbe,0x0f,0xe0,0x7b,0x00,0xfc,0x07,0xc0,0x7f,0x00,0xfc,0x03,0x80,0x3f,0x00,
    0xf8,0x03,0x80,0x1f,0x00,0x3f,0xf0,0x03,0xdf,0x07,0x7e,0xf0,0xfb,0xc0,0x0f,0x7e,
    0x3f,0xfc,0xc1,0xe7,0x87,0x3f,0xf8,0xf8,0xf0,0x0f,0x1f,0x1f,0xfe,0xf1,0xe1,0xc3,
    0x3f,0x3e,0xf8,0xbc,0xc7,0x07,0x9f,0xe7,0xf8,0xe0,0xf3,0x3c,0x0f,0x7c,0x9e,0xf7,
    0x01,0xdf,0xf1,0x3e,0xe0,0x3f,0xde,0x07,0xfc,0x87,0x7f,0x00,0xff,0xf0,0x0f,0xe0,
    0x1f,0xfe,0x01,0xfc,0xc1,0x1f,0x80,0x3f,0xf8,0x03,0xe0,0x07,0x7e,0x00,0xfc,0xc0,
    0x0f,0x00,0x3f,0xf0,0xf7,0x83,0x9f,0x1f,0xfe,0xf8,0xf1,0x83,0xcf,0x0f,0xfc,0x7e,
    0xc0,0xff,0x01,0xfc,0x07,0xe0,0x3f,0x00,0xfe,0x00,0xf0,0x07,0x80,0x3f,0x00,0xfe,
    0x03,0xf8,0x1f,0xc0,0xff,0x01,0xbf,0x1f,0xfc,0xf8,0xe0,0xc7,0x8f,0x1f,0xfc,0xfc,
    0xe0,0xf7,0x03,0x7e,0x3e,0x80,0xef,0x07,0xf8,0x7e,0xc0,0xcf,0x07,0x7c,0xfc,0xc0,
    0xc7,0x0f,0x7e,0xf8,0xe0,0x83,0x1f,0x3e,0xf8,0xe1,0x03,0x1f,0x1f,0xf0,0xf1,0x01,
    0x3f,0x1f,0xe0,0xfb,0x00,0xbe,0x0f,0xc0,0x7f,0x00,0xfc,0x07,0xc0,0x7f,0x00,0xf8,
    0x03,0x80,0x3f,0x00,0xf8,0x03,0x00,0x1f,0x00,0xf0,0x01,0x00,0x1f,0x00,0xf8,0x00,
    0xc0,0x0f,0x80,0xff,0x00,0xf8,0x07,0x80,0x3f,0x00,0xf8,0x01,0x00,0xfe,0xff,0xfd,
    0xff,0xfb,0xff,0xf7,0xff,0xef,0xff,0x1f,0x80,0x1f,0x80,0x1f,0x80,0x3f,0x80,0x3f,
    0x80,0x3f,0x80,0x3f,0x80,0x3f,0x80,0x3f,0x80,0x3f,0x00,0x3f,0x00,0x3f,0x00,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xe0,0xc3,0x0f,0x3f,0xfe,0x78,
    0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x1f,0x3f,0x7c,
    0xf0,0xc1,0x0f,0x7c,0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,
    0x07,0x1e,0xf8,0xc3,0x0f,0x3f,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x01,0x1f,0xfc,0xf0,0xc3,0x1f,0x78,0xe0,0x81,0x07,0x1e,0x78,
    0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x3e,0xf0,0x83,0x0f,0x3e,0xfc,0xf8,0xe0,
    0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x1e,0x78,0xe0,0x81,0x07,0x1e,0x7f,0xfc,0xf0,
    0xc3,0x07,0x7c,0x00,0xfc,0x03,0xfc,0x0f,0x3f,0x3e,0x7e,0xf8,0x0f,0xe0,0x1f,0x00,
    0x1f,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 11
 *  X offset: 0, Y offset: 38
 *  X size: 1, Y size: 1
 *             
 ********************/
{0, 11, 0, 38, 1, 1},

/********************
 *  Character: '!', X advance: 13
 *  X offset: 4, Y offset: 11
 *  X size: 6, Y size: 27
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *       ####        
 *       ####        
 *       ####        
 *       ####        
 *       ####        
 *       ####        
 *       ####        
 *        ##         
 *                   
 *                   
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 *      ######       
 ********************/
{1, 13, 4, 11, 6, 27},

/********************
 *  Character: '"', X advance: 18
 *  X offset: 2, Y offset: 10
 *  X size: 15, Y size: 10
 *    ######   ######   
 *    ######   ######   
 *    ######   ######   
 *    ######   ######   
 *    ######   ######   
 *    ######   ######   
 *     ####     ####    
 *     ####     ####    
 *     ####     ####    
 *      ##       ##     
 ********************/
{22, 18, 2, 10, 15, 10},

/********************
 *  Character: '#', X advance: 21
 *  X offset: 0, Y offset: 12
 *  X size: 21, Y size: 26
 *         ####    ####  
 *         ####    ####  
 *        ####    ####   
 *        ####    ####   
 *        ####    ####   
 *        ####    ####   
 *   ####################
 *   ####################
 *   ####################
 *   ####################
 *       ####    ####    
 *       ####   #####    
 *      ####    ####     
 *      ####    ####     
 *      ####    ####     
 *  #################### 
 *  #################### 
 *  #################### 
 *  #################### 
 *     ####    ####      
 *     ####    ####      
 *    #####   ####       
 *    ####    ####       
 *    ####    ####       
 *    ####    ####       
 *    ####    ####       
 ********************/
{41, 21, 0, 12, 21, 26},

/********************
 *  Character: '$', X advance: 21
 *  X offset: -1, Y offset: 10
 *  X size: 22, Y size: 32
 *            ##          
 *         ########       
 *       #############    
 *      ###############   
 *     #################  
 *     #####  ##  ####### 
 *    #####   ##   #######
 *    ####    ##    ######
 *    ####    ##    ######
 *    ####    ##          
 *    #####   ##          
 *     #########          
 *     ##########         
 *      ############      
 *       #############    
 *         #############  
 *            ########### 
 *            ##  ####### 
 *            ##   #######
 *            ##    ######
 *  ######    ##    ######
 *  ######    ##    ######
 *  #######   ##   #######
 *   #######  ##  ####### 
 *    ################### 
 *     ################   
 *      ##############    
 *         ########       
 *            ##          
 *            ##          
 *            ##          
 *            ##          
 ********************/
{110, 21, -1, 10, 22, 32},

/********************
 *  Character: '%', X advance: 34
 *  X offset: 1, Y offset: 11
 *  X size: 32, Y size: 27
 *       ######            ###         
 *      ########           ##          
 *     ##########         ###          
 *    ############       ###           
 *   #####    #####      ###           
 *   ####      ####     ###            
 *   ####      ####     ##             
 *   ####      ####    ###             
 *   ####      ####    ##              
 *   #####    #####   ###              
 *    ############   ###               
 *     ##########    ###               
 *      ########    ###                
 *       ######     ###    ######      
 *                 ###    ########     
 *                 ##    ##########    
 *                ###   ############   
 *                ##   #####    #####  
 *               ###   ####      ####  
 *              ###    ####      ####  
 *              ###    ####      ####  
 *             ###     ####      ####  
 *             ##      #####    #####  
 *            ###       ############   
 *            ##         ##########    
 *           ###          ########     
 *          ###            ######      
 ********************/
{198, 34, 1, 11, 32, 27},

/********************
 *  Character: '&', X advance: 27
 *  X offset: 2, Y offset: 11
 *  X size: 24, Y size: 27
 *            #####              
 *          ########             
 *         ##########            
 *        ############           
 *       ######   ####           
 *       ######   ####           
 *       ######   ####           
 *       #######  ####           
 *        ###### ####            
 *         ##########            
 *          ########             
 *           #####               
 *        #########     ####     
 *       ###########    ####     
 *      ####### ####    ####     
 *     ######   #####  #####     
 *    ######     ##########      
 *    ######      #########      
 *    ######      #########      
 *    ######       #######       
 *    #######      #######       
 *    ########   ##########      
 *     ####################      
 *      ####################     
 *      ############# #######    
 *        ##########   ######    
 *          ######      ######   
 ********************/
{306, 27, 2, 11, 24, 27},

/********************
 *  Character: ''', X advance: 10
 *  X offset: 2, Y offset: 10
 *  X size: 6, Y size: 10
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *     ####     
 *     ####     
 *     ####     
 *      ##      
 ********************/
{387, 10, 2, 10, 6, 10},

/********************
 *  Character: '(', X advance: 13
 *  X offset: 2, Y offset: 10
 *  X size: 9, Y size: 35
 *         ####    
 *         ####    
 *        ####     
 *        ####     
 *       ####      
 *       ####      
 *      ####       
 *      ####       
 *     #####       
 *     ####        
 *     ####        
 *     ####        
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
 *     ####        
 *     ####        
 *     ####        
 *     ####        
 *      ####       
 *      ####       
 *      #####      
 *       ####      
 *       ####      
 *        ####     
 *        ####     
 *         ####    
 ********************/
{395, 13, 2, 10, 9, 35},

/********************
 *  Character: ')', X advance: 13
 *  X offset: 0, Y offset: 10
 *  X size: 9, Y size: 35
 *  ####         
 *  ####         
 *   ####        
 *   ####        
 *    ####       
 *    ####       
 *     ####      
 *     ####      
 *     #####     
 *      ####     
 *      ####     
 *      ####     
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *       ####    
 *      ####     
 *      ####     
 *      ####     
 *      ####     
 *     ####      
 *     ####      
 *    #####      
 *    ####       
 *    ####       
 *   ####        
 *   ####        
 *  ####         
 ********************/
{435, 13, 0, 10, 9, 35},

/********************
 *  Character: '*', X advance: 15
 *  X offset: 1, Y offset: 10
 *  X size: 12, Y size: 12
 *        ##        
 *        ##        
 *        ##        
 *    #   ##   #    
 *   ############   
 *   ############   
 *      ######      
 *       ####       
 *      ######      
 *     ###  ###     
 *     ###  ###     
 *      #    #      
 ********************/
{475, 15, 1, 10, 12, 12},

/********************
 *  Character: '+', X advance: 22
 *  X offset: 2, Y offset: 20
 *  X size: 18, Y size: 18
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *    ##################    
 *    ##################    
 *    ##################    
 *    ##################    
 *    ##################    
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 *           ####           
 ********************/
{493, 22, 2, 20, 18, 18},

/********************
 *  Character: ',', X advance: 9
 *  X offset: 2, Y offset: 32
 *  X size: 6, Y size: 13
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *       ###   
 *       ###   
 *       ###   
 *      ###    
 *    #####    
 *    ####     
 *    #        
 ********************/
{534, 9, 2, 32, 6, 13},

/********************
 *  Character: '-', X advance: 13
 *  X offset: 1, Y offset: 25
 *  X size: 10, Y size: 5
 *   ##########   
 *   ##########   
 *   ##########   
 *   ##########   
 *   ##########   
 ********************/
{544, 13, 1, 25, 10, 5},

/********************
 *  Character: '.', X advance: 9
 *  X offset: 2, Y offset: 32
 *  X size: 6, Y size: 6
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 ********************/
{551, 9, 2, 32, 6, 6},

/********************
 *  Character: '/', X advance: 11
 *  X offset: 0, Y offset: 11
 *  X size: 10, Y size: 27
 *         ### 
 *         ### 
 *         ##  
 *        ###  
 *        ###  
 *        ##   
 *        ##   
 *       ###   
 *       ###   
 *       ##    
 *       ##    
 *      ###    
 *      ###    
 *      ##     
 *     ###     
 *     ###     
 *     ##      
 *     ##      
 *    ###      
 *    ###      
 *    ##       
 *    ##       
 *   ###       
 *   ###       
 *   ##        
 *  ###        
 *  ###        
 ********************/
{556, 11, 0, 11, 10, 27},

/********************
 *  Character: '0', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *      #############     
 *     ###############    
 *     ###############    
 *    #######   #######   
 *    ######     ######   
 *    ######     ######   
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *    ######     ######   
 *    ######     ######   
 *    #######   #######   
 *     ###############    
 *     ###############    
 *      #############     
 *       ###########      
 *         #######        
 ********************/
{590, 21, 1, 11, 19, 27},

/********************
 *  Character: '1', X advance: 21
 *  X offset: 4, Y offset: 11
 *  X size: 11, Y size: 27
 *              ###          
 *             ####          
 *            #####          
 *          #######          
 *      ###########          
 *      ###########          
 *      ###########          
 *      ###########          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 ********************/
{655, 21, 4, 11, 11, 27},

/********************
 *  Character: '2', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *     ###############    
 *     ###############    
 *    #################   
 *    ######    ########  
 *   ######      #######  
 *   ######       ######  
 *   ######       ######  
 *                ######  
 *                ######  
 *               #######  
 *               ######   
 *              ######    
 *             #######    
 *           #######      
 *          #######       
 *         ######         
 *        ######          
 *       #####            
 *      #####             
 *     ######             
 *     #################  
 *    ##################  
 *    ##################  
 *    ##################  
 *    ##################  
 ********************/
{693, 21, 1, 11, 19, 27},

/********************
 *  Character: '3', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *      ############      
 *     ##############     
 *    ################    
 *    ################    
 *   #######    #######   
 *   ######      ######   
 *   ######      ######   
 *   ######      ######   
 *               ######   
 *              ######    
 *           ########     
 *           ######       
 *           ########     
 *           #########    
 *              #######   
 *               #######  
 *                ######  
 *                ######  
 *   ######       ######  
 *   ######      #######  
 *   #######    ########  
 *    #################   
 *    #################   
 *     ###############    
 *      ############      
 *         #######        
 ********************/
{758, 21, 1, 11, 19, 27},

/********************
 *  Character: '4', X advance: 21
 *  X offset: 2, Y offset: 11
 *  X size: 18, Y size: 27
 *             #######     
 *             #######     
 *            ########     
 *            ########     
 *           #########     
 *           #########     
 *          ### ######     
 *         #### ######     
 *         ###  ######     
 *        ###   ######     
 *        ###   ######     
 *       ###    ######     
 *       ###    ######     
 *      ###     ######     
 *     ###      ######     
 *     ###      ######     
 *    ###       ######     
 *    ##################   
 *    ##################   
 *    ##################   
 *    ##################   
 *    ##################   
 *              ######     
 *              ######     
 *              ######     
 *              ######     
 *              ######     
 ********************/
{823, 21, 2, 11, 18, 27},

/********************
 *  Character: '5', X advance: 21
 *  X offset: 0, Y offset: 11
 *  X size: 19, Y size: 27
 *     ###############   
 *     ###############   
 *     ###############   
 *     ###############   
 *    ################   
 *    ####               
 *    ####               
 *    ####               
 *    ####  #####        
 *    #############      
 *   ###############     
 *   ################    
 *   #################   
 *   #####     #######   
 *              #######  
 *               ######  
 *               ######  
 *               ######  
 *               ######  
 *               ######  
 *  #####       #######  
 *  ######     #######   
 *  ##################   
 *   ################    
 *    ##############     
 *     ###########       
 *       #######         
 ********************/
{884, 21, 0, 11, 19, 27},

/********************
 *  Character: '6', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 20, Y size: 27
 *          #######       
 *        ############    
 *      ###############   
 *      ###############   
 *     #################  
 *    #######     ######  
 *    ######              
 *    ######              
 *   ######               
 *   ######   ######      
 *   ###### ##########    
 *   ##################   
 *   ###################  
 *   ########    #######  
 *   #######      ####### 
 *   ######        ###### 
 *   ######        ###### 
 *   ######        ###### 
 *   ######        ###### 
 *    #####        ###### 
 *    ######      ####### 
 *    #######    #######  
 *     #################  
 *     ################   
 *      ##############    
 *       ############     
 *          #######       
 ********************/
{949, 21, 1, 11, 20, 27},

/********************
 *  Character: '7', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *   ###################  
 *   ###################  
 *   ###################  
 *   ###################  
 *   ###################  
 *                #####   
 *               #####    
 *               #####    
 *              #####     
 *             #####      
 *            ######      
 *            #####       
 *           ######       
 *           #####        
 *          ######        
 *          #####         
 *         ######         
 *         ######         
 *         #####          
 *        ######          
 *        ######          
 *        ######          
 *        #####           
 *        #####           
 *       ######           
 *       ######           
 *       ######           
 ********************/
{1017, 21, 1, 11, 19, 27},

/********************
 *  Character: '8', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 20, Y size: 27
 *          ######        
 *        ##########      
 *       ############     
 *      ##############    
 *     ###############    
 *     #####     ######   
 *     ####        ####   
 *     ####        ####   
 *     ####        ####   
 *      ####     #####    
 *      ##############    
 *        ##########      
 *       ############     
 *     ################   
 *    #######    #######  
 *    ######      ######  
 *   ######        ###### 
 *   ######        ###### 
 *   ######        ###### 
 *   ######        ###### 
 *   #######      ####### 
 *    #######    #######  
 *    ##################  
 *     ################   
 *      ##############    
 *       ############     
 *         #######        
 ********************/
{1082, 21, 1, 11, 20, 27},

/********************
 *  Character: '9', X advance: 21
 *  X offset: 1, Y offset: 11
 *  X size: 19, Y size: 27
 *         #######        
 *       ###########      
 *      #############     
 *     ###############    
 *    ################    
 *    #######   #######   
 *   #######     ######   
 *   ######       #####   
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   ######       ######  
 *   #######     #######  
 *    #######   ########  
 *    ##################  
 *     #################  
 *     #################  
 *       ######## ######  
 *         #####  #####   
 *                #####   
 *   ######      ######   
 *    ######    #######   
 *    ################    
 *     ##############     
 *     ##############     
 *       ##########       
 *         #######        
 ********************/
{1150, 21, 1, 11, 19, 27},

/********************
 *  Character: ':', X advance: 9
 *  X offset: 2, Y offset: 18
 *  X size: 6, Y size: 20
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *             
 *             
 *             
 *             
 *             
 *             
 *             
 *             
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 ********************/
{1215, 9, 2, 18, 6, 20},

/********************
 *  Character: ';', X advance: 9
 *  X offset: 2, Y offset: 18
 *  X size: 6, Y size: 27
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *             
 *             
 *             
 *             
 *             
 *             
 *             
 *             
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *        ##   
 *        ##   
 *       ###   
 *       ##    
 *    #####    
 *    ####     
 *    #        
 ********************/
{1230, 9, 2, 18, 6, 27},

/********************
 *  Character: '<', X advance: 22
 *  X offset: 1, Y offset: 19
 *  X size: 18, Y size: 18
 *                   ##    
 *                #####    
 *             ########    
 *           ##########    
 *        ###########      
 *     ###########         
 *   ##########            
 *   #######               
 *   #####                 
 *   ######                
 *   #########             
 *    ##########           
 *      ###########        
 *         ###########     
 *            #########    
 *              #######    
 *                 ####    
 *                    #    
 ********************/
{1251, 22, 1, 19, 18, 18},

/********************
 *  Character: '=', X advance: 22
 *  X offset: 1, Y offset: 22
 *  X size: 18, Y size: 14
 *   ##################    
 *   ##################    
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
 *   ##################    
 *   ##################    
 ********************/
{1292, 22, 1, 22, 18, 14},

/********************
 *  Character: '>', X advance: 22
 *  X offset: 1, Y offset: 19
 *  X size: 18, Y size: 18
 *   ##                    
 *   #####                 
 *   #######               
 *   ##########            
 *    ############         
 *       ###########       
 *          ###########    
 *             ########    
 *                #####    
 *               ######    
 *            #########    
 *         ###########     
 *      ###########        
 *    ###########          
 *   #########             
 *   ######                
 *   ####                  
 *   #                     
 ********************/
{1324, 22, 1, 19, 18, 18},

/********************
 *  Character: '?', X advance: 23
 *  X offset: 2, Y offset: 10
 *  X size: 20, Y size: 28
 *          #######          
 *        ###########        
 *      ###############      
 *      ################     
 *     ##################    
 *     #######   ########    
 *    #######      #######   
 *    ######        ######   
 *    ######        ######   
 *    ######        ######   
 *                  ######   
 *                 #######   
 *                #######    
 *              ########     
 *             ########      
 *            #######        
 *            ######         
 *           #####           
 *           ####            
 *           ####            
 *                           
 *                           
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 *           ######          
 ********************/
{1365, 23, 2, 10, 20, 28},

/********************
 *  Character: '@', X advance: 37
 *  X offset: 1, Y offset: 10
 *  X size: 34, Y size: 33
 *                 #########              
 *              ###############           
 *            ###################         
 *           #######       #######        
 *         ######            ######       
 *        ######               #####      
 *       #####                  #####     
 *      #####                    ####     
 *      ####        #####   ###   ####    
 *     #####       ####### ####    ###    
 *     ####      ##############    ####   
 *    ####       ####    #####      ###   
 *    ####      ####      ####      ###   
 *   #####     ####       ####      ###   
 *   ####      ####       ####      ###   
 *   ####      ###        ###       ###   
 *   ####     ####        ###       ###   
 *   ####     ####       ####      ####   
 *   ####     ####       ###       ###    
 *   ####     ####      ####      ####    
 *   ####     ####      ####     ####     
 *   #####     ####    #####    ####      
 *    ####     ####################       
 *    #####     ########  ########        
 *     ####       #####    #####          
 *     #####                              
 *      #####                             
 *       #####                            
 *        ######             #            
 *         ########       ####            
 *          ###################           
 *            #################           
 *               ##########               
 ********************/
{1435, 37, 1, 10, 34, 33},

/********************
 *  Character: 'A', X advance: 26
 *  X offset: 0, Y offset: 10
 *  X size: 26, Y size: 28
 *            #######         
 *            #######         
 *           ########         
 *           #########        
 *           #########        
 *          ##########        
 *          ###########       
 *          ##### #####       
 *         ###### #####       
 *         #####  ######      
 *         #####  ######      
 *        ######   #####      
 *        #####    ######     
 *       ######    ######     
 *       ######     #####     
 *       #####      ######    
 *      ######      ######    
 *      ######       ######   
 *      ###################   
 *     ####################   
 *     #####################  
 *     #####################  
 *    ######################  
 *    ######           ###### 
 *    ######           ###### 
 *   ######            ###### 
 *   ######             ######
 *   #####              ######
 ********************/
{1576, 26, 0, 10, 26, 28},

/********************
 *  Character: 'B', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 23, Y size: 28
 *     ################           
 *     ###################        
 *     ####################       
 *     #####################      
 *     #####################      
 *     ######         #######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######         ######      
 *     ####################       
 *     ###################        
 *     ###################        
 *     ####################       
 *     #####################      
 *     ######         #######     
 *     ######          #######    
 *     ######           ######    
 *     ######           ######    
 *     ######           ######    
 *     ######          #######    
 *     ######         ########    
 *     ######################     
 *     ######################     
 *     #####################      
 *     ###################        
 *     #################          
 ********************/
{1667, 27, 3, 10, 23, 28},

/********************
 *  Character: 'C', X advance: 27
 *  X offset: 2, Y offset: 10
 *  X size: 24, Y size: 28
 *             #######           
 *          #############        
 *         ###############       
 *        ##################     
 *       ###################     
 *      ########     ########    
 *      #######        ######    
 *     #######         #######   
 *     ######           ######   
 *    #######                    
 *    ######                     
 *    ######                     
 *    ######                     
 *    ######                     
 *    ######                     
 *    ######                     
 *    ######                     
 *    ######                     
 *    #######           ######   
 *     ######           ######   
 *     #######         #######   
 *     #######        #######    
 *      ########     ########    
 *       ###################     
 *        #################      
 *         ###############       
 *          #############        
 *            ########           
 ********************/
{1748, 27, 2, 10, 24, 28},

/********************
 *  Character: 'D', X advance: 28
 *  X offset: 3, Y offset: 10
 *  X size: 23, Y size: 28
 *     ###############             
 *     ##################          
 *     ###################         
 *     ####################        
 *     #####################       
 *     ######       ########       
 *     ######         #######      
 *     ######          ######      
 *     ######          ######      
 *     ######          #######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######          #######     
 *     ######          ######      
 *     ######          ######      
 *     ######         #######      
 *     ######       ########       
 *     #####################       
 *     ####################        
 *     ###################         
 *     #################           
 *     ###############             
 ********************/
{1832, 28, 3, 10, 23, 28},

/********************
 *  Character: 'E', X advance: 25
 *  X offset: 3, Y offset: 10
 *  X size: 20, Y size: 28
 *     ####################     
 *     ####################     
 *     ####################     
 *     ####################     
 *     ####################     
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ##################       
 *     ##################       
 *     ##################       
 *     ##################       
 *     ##################       
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ######                   
 *     ####################     
 *     ####################     
 *     ####################     
 *     ####################     
 *     ####################     
 ********************/
{1913, 25, 3, 10, 20, 28},

/********************
 *  Character: 'F', X advance: 24
 *  X offset: 3, Y offset: 10
 *  X size: 19, Y size: 28
 *     ###################     
 *     ###################     
 *     ###################     
 *     ###################     
 *     ###################     
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     #################       
 *     #################       
 *     #################       
 *     #################       
 *     #################       
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 ********************/
{1983, 24, 3, 10, 19, 28},

/********************
 *  Character: 'G', X advance: 29
 *  X offset: 2, Y offset: 10
 *  X size: 25, Y size: 28
 *              ########           
 *           #############         
 *         #################       
 *        ###################      
 *       ####################      
 *      #########      #######     
 *      #######         ######     
 *     #######           ######    
 *     ######             #####    
 *     ######                      
 *    ######                       
 *    ######                       
 *    ######                       
 *    ######        ###########    
 *    ######        ###########    
 *    ######        ###########    
 *    ######        ###########    
 *    ######        ###########    
 *    #######              ####    
 *     ######             #####    
 *     #######            #####    
 *      #######          ######    
 *      #########     #########    
 *       ######################    
 *        #####################    
 *         ###############  ###    
 *           ############   ###    
 *             #######      ###    
 ********************/
{2050, 29, 2, 10, 25, 28},

/********************
 *  Character: 'H', X advance: 28
 *  X offset: 3, Y offset: 10
 *  X size: 23, Y size: 28
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     #######################     
 *     #######################     
 *     #######################     
 *     #######################     
 *     #######################     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 *     ######           ######     
 ********************/
{2138, 28, 3, 10, 23, 28},

/********************
 *  Character: 'I', X advance: 12
 *  X offset: 3, Y offset: 10
 *  X size: 6, Y size: 28
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 ********************/
{2219, 12, 3, 10, 6, 28},

/********************
 *  Character: 'J', X advance: 22
 *  X offset: 1, Y offset: 10
 *  X size: 18, Y size: 28
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *               ######    
 *   ######      ######    
 *   ######      ######    
 *   ######      ######    
 *   ######      ######    
 *   ######      ######    
 *   #######    #######    
 *    ################     
 *    ################     
 *     ##############      
 *      ############       
 *        ########         
 ********************/
{2240, 22, 1, 10, 18, 28},

/********************
 *  Character: 'K', X advance: 28
 *  X offset: 3, Y offset: 10
 *  X size: 25, Y size: 28
 *     ######          #######     
 *     ######         #######      
 *     ######         ######       
 *     ######        ######        
 *     ######       ######         
 *     ######      #######         
 *     ######     #######          
 *     ######    #######           
 *     ######   #######            
 *     ######  #######             
 *     ######  ######              
 *     ###### ######               
 *     #############               
 *     ##############              
 *     ##############              
 *     ###############             
 *     ########  ######            
 *     #######   #######           
 *     ######     ######           
 *     ######      ######          
 *     ######      #######         
 *     ######       #######        
 *     ######        #######       
 *     ######         ######       
 *     ######         #######      
 *     ######          #######     
 *     ######           #######    
 *     ######            ######    
 ********************/
{2303, 28, 3, 10, 25, 28},

/********************
 *  Character: 'L', X advance: 24
 *  X offset: 3, Y offset: 10
 *  X size: 18, Y size: 28
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ######                  
 *     ##################      
 *     ##################      
 *     ##################      
 *     ##################      
 *     ##################      
 ********************/
{2391, 24, 3, 10, 18, 28},

/********************
 *  Character: 'M', X advance: 33
 *  X offset: 3, Y offset: 10
 *  X size: 27, Y size: 28
 *     #########         #########      
 *     #########         #########      
 *     #########         #########      
 *     #########         #########      
 *     ##########       ##########      
 *     ##########       ##########      
 *     ##########       ##########      
 *     ##########       ##########      
 *     ##########      ###########      
 *     ###########     #### ######      
 *     ###### ####     #### ######      
 *     ###### ####     #### ######      
 *     ###### ####     #### ######      
 *     ###### #####   ####  ######      
 *     ######  ####   ####  ######      
 *     ######  ####   ####  ######      
 *     ######  ####   ####  ######      
 *     ######  ##### ####   ######      
 *     ######   #### ####   ######      
 *     ######   #### ####   ######      
 *     ######   #### ####   ######      
 *     ######   #### ####   ######      
 *     ######   ########    ######      
 *     ######    #######    ######      
 *     ######    #######    ######      
 *     ######    #######    ######      
 *     ######    ######     ######      
 *     ######     #####     ######      
 ********************/
{2454, 33, 3, 10, 27, 28},

/********************
 *  Character: 'N', X advance: 29
 *  X offset: 3, Y offset: 10
 *  X size: 23, Y size: 28
 *     ######           ######      
 *     #######          ######      
 *     ########         ######      
 *     ########         ######      
 *     #########        ######      
 *     #########        ######      
 *     ##########       ######      
 *     ##########       ######      
 *     ###########      ######      
 *     ############     ######      
 *     ###### #####     ######      
 *     ######  #####    ######      
 *     ######  #####    ######      
 *     ######   #####   ######      
 *     ######   #####   ######      
 *     ######    #####  ######      
 *     ######    ###### ######      
 *     ######     ##### ######      
 *     ######      ###########      
 *     ######      ###########      
 *     ######       ##########      
 *     ######       ##########      
 *     ######        #########      
 *     ######        #########      
 *     ######         ########      
 *     ######          #######      
 *     ######          #######      
 *     ######           ######      
 ********************/
{2549, 29, 3, 10, 23, 28},

/********************
 *  Character: 'O', X advance: 30
 *  X offset: 2, Y offset: 10
 *  X size: 26, Y size: 28
 *             ########             
 *           ############           
 *         ################         
 *        ##################        
 *       ####################       
 *      ########      ########      
 *      #######        #######      
 *     #######          #######     
 *     ######            ######     
 *     ######            ######     
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *     ######            ######     
 *     ######            ######     
 *     #######          #######     
 *      #######        #######      
 *      ########     #########      
 *       ####################       
 *        ##################        
 *         ################         
 *           ############           
 *             ########             
 ********************/
{2630, 30, 2, 10, 26, 28},

/********************
 *  Character: 'P', X advance: 26
 *  X offset: 3, Y offset: 10
 *  X size: 21, Y size: 28
 *     ################          
 *     ##################        
 *     ###################       
 *     ####################      
 *     ####################      
 *     ######       ########     
 *     ######        #######     
 *     ######         ######     
 *     ######         ######     
 *     ######         ######     
 *     ######         ######     
 *     ######        #######     
 *     ######       #######      
 *     ####################      
 *     ###################       
 *     ###################       
 *     ##################        
 *     ################          
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 *     ######                    
 ********************/
{2721, 26, 3, 10, 21, 28},

/********************
 *  Character: 'Q', X advance: 30
 *  X offset: 2, Y offset: 10
 *  X size: 26, Y size: 29
 *             ########             
 *           ############           
 *         ################         
 *        ##################        
 *       ####################       
 *      ########      ########      
 *      #######        #######      
 *     #######          #######     
 *     ######            ######     
 *     ######            ######     
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######              ######    
 *    ######         ##   ######    
 *     ######       #### ######     
 *     ######       ###########     
 *     #######      ###########     
 *      #######      #########      
 *      ########      #######       
 *       ####################       
 *        ####################      
 *         ####################     
 *           ############ ######    
 *             #######     ####     
 *                          ##      
 ********************/
{2795, 30, 2, 10, 26, 29},

/********************
 *  Character: 'R', X advance: 27
 *  X offset: 3, Y offset: 10
 *  X size: 24, Y size: 28
 *     ###################        
 *     ####################       
 *     #####################      
 *     ######################     
 *     ######################     
 *     ######          #######    
 *     ######           ######    
 *     ######           ######    
 *     ######           ######    
 *     ######           ######    
 *     ######           #####     
 *     ######          ######     
 *     #####################      
 *     ####################       
 *     ##################         
 *     ####################       
 *     #####################      
 *     ######         ######      
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          ######     
 *     ######          #######    
 *     ######           #######   
 ********************/
{2890, 27, 3, 10, 24, 28},

/********************
 *  Character: 'S', X advance: 26
 *  X offset: 2, Y offset: 10
 *  X size: 23, Y size: 28
 *          #########           
 *        ##############        
 *       #################      
 *      ###################     
 *     ####################     
 *    ########      ########    
 *    #######        #######    
 *    ######          ######    
 *    ######                    
 *    ######                    
 *    ########                  
 *    ###########               
 *     ###############          
 *      #################       
 *       ##################     
 *          ################    
 *               ############   
 *                   ########   
 *                     ######   
 *    ######           ######   
 *    ######           ######   
 *    #######         #######   
 *     #######       #######    
 *     #####################    
 *      ###################     
 *       #################      
 *        ##############        
 *           #########          
 ********************/
{2974, 26, 2, 10, 23, 28},

/********************
 *  Character: 'T', X advance: 24
 *  X offset: 2, Y offset: 10
 *  X size: 21, Y size: 28
 *    #####################   
 *    #####################   
 *    #####################   
 *    #####################   
 *    #####################   
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 *            ######          
 ********************/
{3055, 24, 2, 10, 21, 28},

/********************
 *  Character: 'U', X advance: 28
 *  X offset: 3, Y offset: 10
 *  X size: 22, Y size: 28
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     ######          ######      
 *     #######        #######      
 *      #######      #######       
 *      ####################       
 *       ##################        
 *        ################         
 *         ##############          
 *            ########             
 ********************/
{3129, 28, 3, 10, 22, 28},

/********************
 *  Character: 'V', X advance: 25
 *  X offset: 0, Y offset: 10
 *  X size: 23, Y size: 28
 *  ######            #####  
 *  ######           ######  
 *   #####           ######  
 *   ######          #####   
 *   ######         ######   
 *    #####         ######   
 *    #####         #####    
 *    ######        #####    
 *     #####       ######    
 *     #####       #####     
 *     ######      #####     
 *      #####     ######     
 *      #####     #####      
 *      #####     #####      
 *       #####    #####      
 *       #####   #####       
 *       #####   #####       
 *        #####  #####       
 *        ##### #####        
 *        ##### #####        
 *         #### ####         
 *         #########         
 *         #########         
 *          #######          
 *          #######          
 *          #######          
 *           #####           
 *           #####           
 ********************/
{3206, 25, 0, 10, 23, 28},

/********************
 *  Character: 'W', X advance: 36
 *  X offset: 0, Y offset: 10
 *  X size: 35, Y size: 28
 *  ######        ######        ######  
 *  ######        ######        ######  
 *  ######        ######        ######  
 *   #####        #######       ######  
 *   ######      ########       #####   
 *   ######      ########      ######   
 *    #####      ########      ######   
 *    #####      #########     ######   
 *    #####      #### ####     #####    
 *    ######    ####  ####     #####    
 *     #####    ####  ####    ######    
 *     #####    ####  ####    #####     
 *     #####    ####   ####   #####     
 *     #####    ####   ####   #####     
 *      #####  ####    ####   #####     
 *      #####  ####    ####   ####      
 *      #####  ####    ####  #####      
 *       ####  ####     #### #####      
 *       ##### ####     #### #####      
 *       #########      #### ####       
 *       #########      #### ####       
 *        ########      #########       
 *        ########       #######        
 *        ########       #######        
 *         ######        #######        
 *         ######        #######        
 *         ######         #####         
 *         ######         #####         
 ********************/
{3287, 36, 0, 10, 35, 28},

/********************
 *  Character: 'X', X advance: 26
 *  X offset: 0, Y offset: 10
 *  X size: 24, Y size: 28
 *  #######          ######   
 *   #######        #######   
 *    ######       #######    
 *    #######      ######     
 *     ######     #######     
 *     #######    ######      
 *      ######   ######       
 *       ######  ######       
 *       ###### ######        
 *        ############        
 *        ###########         
 *         #########          
 *          ########          
 *          #######           
 *          #######           
 *          ########          
 *         ##########         
 *        ###########         
 *        ############        
 *       ###### #######       
 *      #######  ######       
 *      ######    ######      
 *     ######     ######      
 *     ######      ######     
 *    ######       #######    
 *   #######        ######    
 *   ######         #######   
 *  #######          ######   
 ********************/
{3410, 26, 0, 10, 24, 28},

/********************
 *  Character: 'Y', X advance: 24
 *  X offset: 0, Y offset: 10
 *  X size: 24, Y size: 28
 *  ######           #######
 *   ######          ###### 
 *   ######         ####### 
 *    ######        ######  
 *    ######       #######  
 *     ######      ######   
 *     ######      ######   
 *      ######    ######    
 *      ######    ######    
 *       ######  ######     
 *       ######  ######     
 *        ############      
 *        ############      
 *         ##########       
 *         ##########       
 *          ########        
 *          ########        
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 *           ######         
 ********************/
{3494, 24, 0, 10, 24, 28},

/********************
 *  Character: 'Z', X advance: 23
 *  X offset: 1, Y offset: 10
 *  X size: 21, Y size: 28
 *   #####################  
 *   #####################  
 *   #####################  
 *   #####################  
 *   #####################  
 *                 #######  
 *                #######   
 *               #######    
 *               ######     
 *              ######      
 *             #######      
 *            #######       
 *           #######        
 *           ######         
 *          #######         
 *         #######          
 *        #######           
 *       #######            
 *       ######             
 *      #######             
 *     #######              
 *    #######               
 *    ######                
 *   #####################  
 *   #####################  
 *   #####################  
 *   #####################  
 *   #####################  
 ********************/
{3578, 23, 1, 10, 21, 28},

/********************
 *  Character: '[', X advance: 13
 *  X offset: 3, Y offset: 10
 *  X size: 9, Y size: 36
 *     #########    
 *     #########    
 *     #########    
 *     #########    
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *     #########    
 *     #########    
 *     #########    
 *     #########    
 ********************/
{3652, 13, 3, 10, 9, 36},

/********************
 *  Character: '\', X advance: 11
 *  X offset: 0, Y offset: 11
 *  X size: 11, Y size: 27
 *  ###        
 *  ###        
 *   ##        
 *   ###       
 *   ###       
 *    ##       
 *    ###      
 *    ###      
 *     ##      
 *     ###     
 *     ###     
 *      ##     
 *      ##     
 *      ###    
 *       ##    
 *       ##    
 *       ###   
 *       ###   
 *        ##   
 *        ###  
 *        ###  
 *         ##  
 *         ### 
 *         ### 
 *          ## 
 *          ###
 *          ###
 ********************/
{3693, 11, 0, 11, 11, 27},

/********************
 *  Character: ']', X advance: 13
 *  X offset: 1, Y offset: 10
 *  X size: 9, Y size: 36
 *   #########    
 *   #########    
 *   #########    
 *   #########    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *      ######    
 *   #########    
 *   #########    
 *   #########    
 *   #########    
 ********************/
{3731, 13, 1, 10, 9, 36},

/********************
 *  Character: '^', X advance: 22
 *  X offset: 2, Y offset: 11
 *  X size: 18, Y size: 16
 *          ######          
 *          ######          
 *         ########         
 *         ########         
 *         ########         
 *        ##########        
 *        ####  ####        
 *        ####  #####       
 *       ####    ####       
 *       ####    ####       
 *      #####    #####      
 *      ####      ####      
 *      ####      #####     
 *     ####        ####     
 *     ####        ####     
 *    #####        #####    
 ********************/
{3772, 22, 2, 11, 18, 16},

/********************
 *  Character: '_', X advance: 21
 *  X offset: -1, Y offset: 43
 *  X size: 23, Y size: 3
 *  #######################
 *  #######################
 *  #######################
 ********************/
{3808, 21, -1, 43, 23, 3},

/********************
 *  Character: '`', X advance: 9
 *  X offset: 1, Y offset: 9
 *  X size: 7, Y size: 6
 *   #####    
 *    ####    
 *     ####   
 *      ###   
 *      ###   
 *       ###  
 ********************/
{3817, 9, 1, 9, 7, 6},

/********************
 *  Character: 'a', X advance: 22
 *  X offset: 2, Y offset: 17
 *  X size: 19, Y size: 21
 *         ########         
 *       #############      
 *      ###############     
 *     ################     
 *     #################    
 *     ######    #######    
 *     #####      ######    
 *                ######    
 *              ########    
 *        ##############    
 *      ################    
 *     ########   ######    
 *    #######     ######    
 *    ######      ######    
 *    ######     #######    
 *    #######   ########    
 *    ##################    
 *     #################    
 *     #################    
 *      ######### #######   
 *        #####   #######   
 ********************/
{3823, 22, 2, 17, 19, 21},

/********************
 *  Character: 'b', X advance: 24
 *  X offset: 2, Y offset: 10
 *  X size: 21, Y size: 28
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######   ######         
 *    ###### ##########       
 *    ###### ###########      
 *    ###################     
 *    ###################     
 *    #########   ########    
 *    #######       ######    
 *    #######       #######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    #######       #######   
 *    #######       ######    
 *    ########    ########    
 *    ###################     
 *    ###################     
 *    ##################      
 *    ###### ##########       
 *    ######   ######         
 ********************/
{3873, 24, 2, 10, 21, 28},

/********************
 *  Character: 'c', X advance: 21
 *  X offset: 2, Y offset: 17
 *  X size: 19, Y size: 21
 *           #######       
 *         ###########     
 *       ##############    
 *      ################   
 *     #################   
 *     #######    #######  
 *     ######      ######  
 *    ######        #####  
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    #######              
 *     ######       #####  
 *     #######     ######  
 *     ##################  
 *      ################   
 *       ##############    
 *        ############     
 *           #######       
 ********************/
{3947, 21, 2, 17, 19, 21},

/********************
 *  Character: 'd', X advance: 24
 *  X offset: 2, Y offset: 10
 *  X size: 20, Y size: 28
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *          #####   ######    
 *        ######### ######    
 *       ########## ######    
 *      ##################    
 *      ##################    
 *     #######    ########    
 *     ######      #######    
 *    #######      #######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    #######      #######    
 *     ######      #######    
 *     #######    ########    
 *     ###################    
 *      ##################    
 *       #################    
 *        ######### ######    
 *          #####   ######    
 ********************/
{3997, 24, 2, 10, 20, 28},

/********************
 *  Character: 'e', X advance: 22
 *  X offset: 2, Y offset: 17
 *  X size: 20, Y size: 21
 *          #######         
 *        ###########       
 *       #############      
 *      ###############     
 *     #######    ######    
 *     ######      #####    
 *     #####        ####    
 *    ######        #####   
 *    ###################   
 *    ###################   
 *    ###################   
 *    ###################   
 *    ######                
 *    ######                
 *     #####                
 *     ######       #####   
 *     #######     ######   
 *      ################    
 *       ##############     
 *        ############      
 *           #######        
 ********************/
{4067, 22, 2, 17, 20, 21},

/********************
 *  Character: 'f', X advance: 13
 *  X offset: 1, Y offset: 10
 *  X size: 11, Y size: 28
 *        ######  
 *      ########  
 *     #########  
 *     #########  
 *     ######     
 *     ######     
 *     ######     
 *   ##########   
 *   ##########   
 *   ##########   
 *   ##########   
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 ********************/
{4120, 13, 1, 10, 11, 28},

/********************
 *  Character: 'g', X advance: 23
 *  X offset: 2, Y offset: 17
 *  X size: 20, Y size: 29
 *          #####   ######   
 *        ########  ######   
 *       ########## ######   
 *      ##################   
 *      ##################   
 *     #######    ########   
 *     ######      #######   
 *    #######      #######   
 *    ######        ######   
 *    ######        ######   
 *    ######        ######   
 *    ######        ######   
 *    ######        ######   
 *    #######      #######   
 *    #######      #######   
 *     #######    ########   
 *     ###################   
 *      ##################   
 *       ########## ######   
 *        ########  ######   
 *          #####   ######   
 *                  ######   
 *                  ######   
 *                  ######   
 *    #######      ######    
 *     #######    #######    
 *     #################     
 *       ##############      
 *         #########         
 ********************/
{4159, 23, 2, 17, 20, 29},

/********************
 *  Character: 'h', X advance: 23
 *  X offset: 2, Y offset: 10
 *  X size: 19, Y size: 28
 *    ######                 
 *    ######                 
 *    ######                 
 *    ######                 
 *    ######                 
 *    ######                 
 *    ######                 
 *    ######   ######        
 *    ######  #########      
 *    ###### ###########     
 *    ##################     
 *    ###################    
 *    ########    #######    
 *    #######      ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 ********************/
{4232, 23, 2, 10, 19, 28},

/********************
 *  Character: 'i', X advance: 11
 *  X offset: 3, Y offset: 10
 *  X size: 6, Y size: 28
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *                
 *                
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 *     ######     
 ********************/
{4299, 11, 3, 10, 6, 28},

/********************
 *  Character: 'j', X advance: 11
 *  X offset: 0, Y offset: 10
 *  X size: 9, Y size: 36
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *             
 *             
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *     ######  
 *  #########  
 *  #########  
 *  #########  
 *  ########   
 *  #######    
 ********************/
{4320, 11, 0, 10, 9, 36},

/********************
 *  Character: 'k', X advance: 21
 *  X offset: 2, Y offset: 10
 *  X size: 19, Y size: 28
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    ######               
 *    ######      ######   
 *    ######     ######    
 *    ######     ######    
 *    ######    ######     
 *    ######   ######      
 *    ######  ######       
 *    ###### ######        
 *    ###### #####         
 *    ############         
 *    #############        
 *    #############        
 *    ##############       
 *    #######  #####       
 *    #######  ######      
 *    ######    ######     
 *    ######    ######     
 *    ######     ######    
 *    ######     ######    
 *    ######      ######   
 *    ######      ######   
 *    ######       ######  
 ********************/
{4361, 21, 2, 10, 19, 28},

/********************
 *  Character: 'l', X advance: 10
 *  X offset: 2, Y offset: 10
 *  X size: 6, Y size: 28
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 ********************/
{4428, 10, 2, 10, 6, 28},

/********************
 *  Character: 'm', X advance: 34
 *  X offset: 2, Y offset: 17
 *  X size: 30, Y size: 21
 *    ######   #####      ######        
 *    ###### #########   #########      
 *    ################# ###########     
 *    #############################     
 *    ##############################    
 *    ########   #########   #######    
 *    #######     #######     ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 *    ######      ######      ######    
 ********************/
{4449, 34, 2, 17, 30, 21},

/********************
 *  Character: 'n', X advance: 23
 *  X offset: 2, Y offset: 17
 *  X size: 19, Y size: 21
 *    ######   ######        
 *    ######  #########      
 *    ###### ###########     
 *    ##################     
 *    ###################    
 *    ########    #######    
 *    #######      ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 ********************/
{4528, 23, 2, 17, 19, 21},

/********************
 *  Character: 'o', X advance: 23
 *  X offset: 2, Y offset: 17
 *  X size: 21, Y size: 21
 *           #######         
 *         ############      
 *       ###############     
 *      #################    
 *      ##################   
 *     #######     #######   
 *     ######       ######   
 *    #######       #######  
 *    ######         ######  
 *    ######         ######  
 *    ######         ######  
 *    ######         ######  
 *    ######         ######  
 *    #######       #######  
 *     ######       ######   
 *     #######    ########   
 *      ##################   
 *      #################    
 *       ###############     
 *         ###########       
 *           #######         
 ********************/
{4578, 23, 2, 17, 21, 21},

/********************
 *  Character: 'p', X advance: 24
 *  X offset: 2, Y offset: 17
 *  X size: 21, Y size: 29
 *    ######   ######         
 *    ######  #########       
 *    ###### ###########      
 *    ###################     
 *    ###################     
 *    ########    ########    
 *    #######       ######    
 *    #######       #######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    ######         ######   
 *    #######       #######   
 *    #######       ######    
 *    ########    ########    
 *    ###################     
 *    ###################     
 *    ###### ###########      
 *    ######  ########        
 *    ######   ######         
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 *    ######                  
 ********************/
{4634, 24, 2, 17, 21, 29},

/********************
 *  Character: 'q', X advance: 24
 *  X offset: 2, Y offset: 17
 *  X size: 20, Y size: 29
 *          #####   ######    
 *        ######### ######    
 *       ########## ######    
 *      ##################    
 *      ##################    
 *     #######    ########    
 *     ######      #######    
 *    #######      #######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    ######        ######    
 *    #######      #######    
 *     ######      #######    
 *     #######    ########    
 *      ##################    
 *      ##################    
 *       ########## ######    
 *        ######### ######    
 *          #####   ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 *                  ######    
 ********************/
{4711, 24, 2, 17, 20, 29},

/********************
 *  Character: 'r', X advance: 15
 *  X offset: 2, Y offset: 17
 *  X size: 12, Y size: 21
 *    ######   ###   
 *    ######  ####   
 *    ###### #####   
 *    ############   
 *    ############   
 *    ########       
 *    #######        
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 *    ######         
 ********************/
{4784, 15, 2, 17, 12, 21},

/********************
 *  Character: 's', X advance: 21
 *  X offset: 1, Y offset: 17
 *  X size: 18, Y size: 21
 *        ########        
 *      ############      
 *    ###############     
 *    ################    
 *   #######    ######    
 *   ######      #####    
 *   ######               
 *   #######              
 *   ##########           
 *    #############       
 *    ###############     
 *      ##############    
 *         ############   
 *            #########   
 *               ######   
 *   #####       ######   
 *   ######     #######   
 *   #################    
 *    ###############     
 *     #############      
 *        ########        
 ********************/
{4816, 21, 1, 17, 18, 21},

/********************
 *  Character: 't', X advance: 13
 *  X offset: 2, Y offset: 12
 *  X size: 9, Y size: 26
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *    #########    
 *    #########    
 *    #########    
 *    #########    
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ######      
 *     ########    
 *     ########    
 *      #######    
 *        #####    
 ********************/
{4864, 13, 2, 12, 9, 26},

/********************
 *  Character: 'u', X advance: 23
 *  X offset: 2, Y offset: 17
 *  X size: 19, Y size: 21
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######       ######    
 *    ######      #######    
 *    #######    ########    
 *    ###################    
 *     ##################    
 *     ########### ######    
 *      #########  ######    
 *        ######   ######    
 ********************/
{4894, 23, 2, 17, 19, 21},

/********************
 *  Character: 'v', X advance: 21
 *  X offset: 0, Y offset: 17
 *  X size: 20, Y size: 21
 *   #####        ###### 
 *   #####        ###### 
 *   ######       #####  
 *    #####       #####  
 *    #####      ######  
 *    ######     #####   
 *     #####     #####   
 *     #####     #####   
 *     #####    #####    
 *      #####   #####    
 *      #####   #####    
 *      #####  #####     
 *       ##### #####     
 *       ##### #####     
 *       ##### ####      
 *        #########      
 *        #########      
 *        ########       
 *         #######       
 *         #######       
 *         ######        
 ********************/
{4944, 21, 0, 17, 20, 21},

/********************
 *  Character: 'w', X advance: 30
 *  X offset: 0, Y offset: 17
 *  X size: 29, Y size: 21
 *  ######      ######      ##### 
 *   #####      ######     ###### 
 *   #####      ######     ###### 
 *   ######    #######     #####  
 *   ######    #######     #####  
 *    #####    ########    #####  
 *    #####    ########   #####   
 *    #####    ########   #####   
 *     #####  #### ####   #####   
 *     #####  ####  ###   #####   
 *     #####  ####  ####  ####    
 *     #####  ####  #### #####    
 *      ##### ###   #### #####    
 *      #########   #### #####    
 *      #########    ########     
 *       ########    ########     
 *       ########    ########     
 *       #######     #######      
 *       #######     #######      
 *        ######      ######      
 *        ######      ######      
 ********************/
{4997, 30, 0, 17, 29, 21},

/********************
 *  Character: 'x', X advance: 21
 *  X offset: 0, Y offset: 17
 *  X size: 19, Y size: 21
 *  ######      #######  
 *   ######     ######   
 *   ######    #######   
 *    ######   ######    
 *     #####  ######     
 *     ###### ######     
 *      ###########      
 *       #########       
 *       #########       
 *        #######        
 *        #######        
 *        #######        
 *       #########       
 *      ##########       
 *      ###########      
 *     ###### ######     
 *    ######   #####     
 *    ######   ######    
 *   ######     ######   
 *   ######     ######   
 *  ######       ######  
 ********************/
{5074, 21, 0, 17, 19, 21},

/********************
 *  Character: 'y', X advance: 21
 *  X offset: 0, Y offset: 17
 *  X size: 20, Y size: 29
 *   #####         ##### 
 *   ######        ##### 
 *   ######       ###### 
 *    #####       #####  
 *    ######      #####  
 *    ######     ######  
 *     #####     #####   
 *     ######    #####   
 *     ######    #####   
 *      #####   #####    
 *      #####   #####    
 *      ######  #####    
 *       ##### #####     
 *       ##### #####     
 *        #########      
 *        #########      
 *        #########      
 *         #######       
 *         #######       
 *         #######       
 *          #####        
 *          #####        
 *          #####        
 *         #####         
 *        ######         
 *     #########         
 *     ########          
 *     #######           
 *     ######            
 ********************/
{5124, 21, 0, 17, 20, 29},

/********************
 *  Character: 'z', X advance: 19
 *  X offset: 1, Y offset: 17
 *  X size: 17, Y size: 21
 *    ################  
 *    ################  
 *    ################  
 *    ################  
 *    ################  
 *             ######   
 *            ######    
 *           #######    
 *          #######     
 *         #######      
 *        #######       
 *       #######        
 *      #######         
 *     #######          
 *     ######           
 *    ######            
 *   #################  
 *   #################  
 *   #################  
 *   #################  
 *   #################  
 ********************/
{5197, 19, 1, 17, 17, 21},

/********************
 *  Character: '{', X advance: 15
 *  X offset: 0, Y offset: 10
 *  X size: 10, Y size: 36
 *       #####     
 *      ######     
 *      ######     
 *     #######     
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
 *  ######         
 *  #####          
 *  #####          
 *  ######         
 *    #####        
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
 *     #######     
 *      ######     
 *      ######     
 *       #####     
 ********************/
{5242, 15, 0, 10, 10, 36},

/********************
 *  Character: '|', X advance: 11
 *  X offset: 4, Y offset: 10
 *  X size: 3, Y size: 35
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 ********************/
{5287, 11, 4, 10, 3, 35},

/********************
 *  Character: '}', X advance: 15
 *  X offset: 3, Y offset: 10
 *  X size: 10, Y size: 36
 *     #####          
 *     ######         
 *     ######         
 *     #######        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        #####       
 *         ######     
 *          #####     
 *          #####     
 *         ######     
 *        #####       
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *        ####        
 *     #######        
 *     ######         
 *     ######         
 *     #####          
 ********************/
{5301, 15, 3, 10, 10, 36},

/********************
 *  Character: '~', X advance: 19
 *  X offset: 1, Y offset: 26
 *  X size: 17, Y size: 7
 *     #####            
 *    ########          
 *   ##########    ###  
 *   ###   #####   ###  
 *   ###    #########   
 *           ########   
 *             #####    
 ********************/
{5346, 19, 1, 26, 17, 7},

};

const monoGFX_font_t monoGFX_FreeSansBold_18pt = {bitmapBuffer, 5361, glyphs, 20};
