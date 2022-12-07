#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[6314] =
{
    0x00,0x00,0x00,0x06,0xf8,0xc0,0x0f,0x7e,0xf0,0x81,0x0f,0x7e,0xf0,0x83,0x1f,0x7c,
    0xe0,0x03,0x1f,0x78,0xc0,0x03,0x1e,0x70,0xc0,0x03,0x1e,0x70,0x80,0x03,0x1c,0xf8,
    0xc1,0x0f,0x3e,0xf0,0xc1,0x0f,0x7e,0x00,0x3e,0x7c,0x1f,0xfe,0x8f,0xef,0xc3,0xf7,
    0xe1,0xfb,0xf0,0x3d,0x78,0x1e,0x3c,0x07,0x8e,0x03,0x07,0x00,0x78,0x78,0x00,0x78,
    0x78,0x00,0x3c,0x3c,0x00,0x3c,0x3c,0x00,0x3c,0x1e,0x00,0x1e,0x1e,0xf0,0xff,0xff,
    0xf0,0xff,0xff,0xf0,0xff,0xff,0xf0,0xff,0x7f,0x80,0x87,0x07,0x80,0x87,0x07,0xc0,
    0xc3,0x03,0xc0,0xc3,0x03,0xe0,0xe1,0x01,0xfe,0xff,0x1f,0xfe,0xff,0x0f,0xfe,0xff,
    0x0f,0xfe,0xff,0x0f,0x78,0x78,0x00,0x78,0x78,0x00,0x3c,0x3c,0x00,0x3c,0x3c,0x00,
    0x1e,0x1e,0x00,0x1e,0x1e,0x00,0x0f,0x0f,0x00,0x00,0xc0,0x01,0x00,0xe0,0x00,0x00,
    0xfe,0x01,0xc0,0xff,0x03,0xf8,0xff,0x03,0xfe,0xff,0x83,0x9f,0xfb,0xc1,0xc7,0xf8,
    0xf0,0x61,0x7c,0xf8,0x38,0x3e,0x7c,0x1c,0x00,0x7e,0x06,0x00,0x7f,0x03,0x80,0xff,
    0x01,0x80,0xff,0x07,0x80,0xff,0x0f,0x00,0xff,0x0f,0x00,0xfe,0x07,0x00,0xff,0x07,
    0x80,0xfb,0x03,0xc0,0xf9,0xf9,0x61,0xfc,0xfc,0x30,0x7e,0x7e,0x1c,0x1f,0x7f,0xce,
    0x8f,0x7f,0xff,0x83,0xff,0xff,0x80,0xff,0x3f,0x80,0xff,0x07,0x00,0x7e,0x00,0x00,
    0x0c,0x00,0x00,0x06,0x00,0x80,0x03,0x00,0xc0,0x01,0x00,0x00,0x00,0x00,0x07,0xf0,
    0x01,0xe0,0x00,0xff,0x00,0x3c,0xe0,0x7f,0x00,0x07,0xfc,0x3f,0xe0,0x80,0x8f,0x0f,
    0x1c,0xe0,0xc1,0x83,0x03,0x3c,0xf0,0xe0,0x00,0x0f,0x3c,0x1c,0xc0,0x83,0x87,0x03,
    0xf0,0xf1,0x71,0x00,0xfc,0x3f,0x1c,0x00,0xfe,0x87,0x03,0x00,0xff,0x70,0x00,0x80,
    0x1f,0x0e,0x00,0x00,0x80,0x81,0x1f,0x00,0x70,0xf8,0x0f,0x00,0x0e,0xff,0x07,0xc0,
    0xe1,0xff,0x03,0x30,0x7c,0xf8,0x00,0x8e,0x0f,0x3c,0xc0,0xe1,0x01,0x0f,0x38,0x78,
    0xe0,0x03,0x07,0x3e,0x7c,0xc0,0x81,0xff,0x0f,0x38,0xc0,0xff,0x01,0x07,0xe0,0x3f,
    0xe0,0x00,0xf0,0x03,0x00,0xf0,0x03,0x00,0xfc,0x0f,0x00,0xff,0x1f,0x80,0xff,0x1f,
    0x80,0x1f,0x1f,0xc0,0x0f,0x1f,0xc0,0x0f,0x1f,0xc0,0x8f,0x0f,0xc0,0xdf,0x07,0x80,
    0xff,0x03,0x00,0xff,0x01,0x00,0x7f,0x00,0xc0,0x7f,0xf0,0xf0,0xff,0xf0,0xf8,0xfb,
    0x79,0xfc,0xf8,0x79,0x7e,0xf0,0x3f,0x3f,0xe0,0x3f,0x3f,0xe0,0x1f,0x3f,0xc0,0x0f,
    0x3f,0xe0,0x0f,0x7f,0xf8,0x1f,0xff,0xff,0x1f,0xfe,0xff,0x3f,0xfe,0x7f,0x3f,0xf8,
    0x1f,0x7e,0xf0,0x07,0x7e,0xbe,0xff,0x7f,0xdf,0xf7,0x3c,0xc7,0x01,0x00,0x1e,0x80,
    0x07,0xf0,0x00,0x1e,0xc0,0x07,0xf0,0x00,0x1e,0xc0,0x07,0xf0,0x00,0x3e,0x80,0x07,
    0xf0,0x01,0x3c,0x00,0x0f,0xe0,0x01,0x78,0x00,0x1e,0x80,0x07,0xf0,0x00,0x3c,0x00,
    0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x0e,0x80,
    0x07,0xe0,0x01,0x78,0x00,0x1c,0x00,0x0f,0xc0,0x03,0x00,0x00,0x07,0xc0,0x03,0xf0,
    0x00,0x3c,0x00,0x1e,0x80,0x07,0xe0,0x01,0x78,0x00,0x1e,0x00,0x07,0xc0,0x03,0xf0,
    0x00,0x3c,0x00,0x0f,0xe0,0x01,0x78,0x00,0x1e,0x80,0x07,0xe0,0x01,0x7c,0x00,0x0f,
    0xc0,0x03,0xf8,0x00,0x1e,0xc0,0x07,0xf0,0x00,0x3e,0x80,0x07,0xf0,0x01,0x3c,0x80,
    0x07,0xf0,0x01,0x3c,0x80,0x07,0xf0,0x00,0x00,0x80,0x01,0x38,0x00,0x07,0xe2,0xec,
    0xfd,0xff,0x3f,0xfe,0x80,0x0f,0xf8,0x81,0x73,0x38,0x0e,0x82,0x00,0x00,0x3c,0x00,
    0xe0,0x03,0x00,0x3e,0x00,0xe0,0x01,0x00,0x1e,0x00,0xf0,0x01,0xfe,0xff,0xef,0xff,
    0xff,0xfe,0xff,0xe7,0xff,0x7f,0xff,0xff,0x07,0xf8,0x00,0x80,0x07,0x00,0x78,0x00,
    0xc0,0x07,0x00,0x7c,0x00,0xc0,0x07,0x00,0x3c,0x00,0xfc,0xfc,0x7c,0x7c,0x7c,0x7e,
    0x70,0x30,0x38,0x1c,0x0f,0x03,0xfe,0xf7,0xbf,0xff,0xfe,0xf7,0x3f,0x7e,0xbf,0xff,
    0xf7,0xfb,0x01,0x00,0xe0,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x38,0x00,0x18,0x00,
    0x1c,0x00,0x0c,0x00,0x0e,0x00,0x06,0x00,0x07,0x00,0x03,0x80,0x03,0x80,0x01,0xc0,
    0x01,0xc0,0x00,0xe0,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x38,0x00,0x18,0x00,0x1c,
    0x00,0x0c,0x00,0x0e,0x00,0x06,0x00,0x07,0x00,0x00,0xfc,0x00,0xe0,0x7f,0x00,0xff,
    0x1f,0xf0,0xff,0x07,0xff,0xff,0xe0,0x87,0x3f,0x7e,0xe0,0xc7,0x0f,0xfc,0xfc,0x80,
    0x9f,0x1f,0xf0,0xf3,0x03,0x7e,0x3f,0xc0,0xef,0x07,0xfc,0xfd,0x80,0x9f,0x1f,0xf0,
    0xfb,0x01,0x7e,0x3f,0xe0,0xef,0x07,0xfc,0xfc,0x80,0x9f,0x1f,0xf8,0xf1,0x03,0x3f,
    0xfe,0xf0,0xc3,0xff,0x7f,0xf0,0xff,0x07,0xfc,0x7f,0x00,0xff,0x03,0xc0,0x1f,0x00,
    0x00,0x1e,0xc0,0x03,0x7e,0xf0,0xf7,0xff,0xfe,0xdf,0xff,0xfb,0x7f,0xc0,0x07,0xf8,
    0x00,0x1f,0xf0,0x03,0x3e,0xc0,0x07,0xf8,0x80,0x1f,0xf0,0x03,0x3e,0xc0,0x07,0xf8,
    0x80,0x1f,0xf0,0x03,0x3e,0xc0,0x07,0xf8,0x80,0x1f,0xf0,0x01,0x00,0xf8,0x03,0x00,
    0xff,0x07,0xe0,0xff,0x07,0xf8,0xff,0x07,0xfc,0xff,0x07,0x3f,0xf8,0x83,0x0f,0xf8,
    0xe1,0x07,0xfc,0xf0,0x01,0x7e,0x00,0x00,0x3f,0x00,0xc0,0x0f,0x00,0xe0,0x07,0x00,
    0xf8,0x01,0x00,0x7e,0x00,0xc0,0x1f,0x00,0xf8,0x03,0x00,0xfe,0x00,0xc0,0x1f,0x00,
    0xf8,0x03,0x00,0xfe,0x00,0x80,0x1f,0x00,0xe0,0x07,0x00,0xf0,0xff,0x1f,0xfc,0xff,
    0x0f,0xfe,0xff,0x87,0xff,0xff,0xc1,0xff,0xff,0x00,0x00,0xfe,0x01,0xf0,0xff,0x00,
    0xff,0x3f,0xf0,0xff,0x07,0xff,0xff,0xe1,0x87,0x3f,0x7c,0xe0,0xc7,0x07,0xfc,0xf8,
    0x80,0x0f,0x00,0xf8,0x01,0xc0,0x1f,0x00,0xff,0x01,0xe0,0x0f,0x00,0xfc,0x07,0x80,
    0xff,0x00,0x80,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,0x9f,0x1f,0xf0,0xf3,0x03,
    0x3f,0xfe,0xf0,0xc7,0xff,0x7f,0xf0,0xff,0x0f,0xfe,0xff,0x80,0xff,0x07,0xc0,0x3f,
    0x00,0x00,0xc0,0x1f,0x00,0xfc,0x01,0xc0,0x3f,0x00,0xf8,0x07,0x80,0xff,0x00,0xb8,
    0x1f,0x80,0xf3,0x01,0x78,0x3e,0x80,0xc7,0x07,0x78,0xfc,0x00,0x87,0x0f,0x70,0xf0,
    0x01,0x07,0x3e,0x70,0xe0,0x07,0x0f,0xfc,0xf0,0xff,0x7f,0xfe,0xff,0xcf,0xff,0xff,
    0xf9,0xff,0xbf,0xff,0xff,0x03,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3f,0x00,0xe0,0x07,
    0x00,0x7c,0x00,0x80,0x0f,0x00,0x00,0xff,0x3f,0xe0,0xff,0x0f,0xf8,0xff,0x03,0xfe,
    0xff,0xc0,0xff,0x1f,0xf0,0x00,0x00,0x3e,0x00,0x80,0x07,0x00,0xe0,0xfd,0x00,0xbc,
    0xff,0x00,0xff,0x7f,0xc0,0xff,0x1f,0xf8,0xff,0x0f,0x7e,0xf8,0xc3,0x0f,0xfc,0x00,
    0x00,0x3f,0x00,0xc0,0x0f,0x00,0xf0,0x03,0x00,0x7c,0xfc,0x80,0x1f,0x3f,0xf0,0xc7,
    0x1f,0xfe,0xf0,0xff,0x1f,0xf8,0xff,0x07,0xfe,0xff,0x00,0xfe,0x0f,0x00,0xfe,0x00,
    0x00,0x00,0xfc,0x01,0xe0,0xff,0x00,0xff,0x3f,0xf0,0xff,0x07,0xfe,0xff,0xe0,0x07,
    0x1f,0x7e,0x00,0xc0,0x07,0x00,0x7c,0x7c,0x80,0xef,0x3f,0xf0,0xff,0x0f,0xff,0xff,
    0xe1,0xff,0x7f,0xfc,0xe1,0x8f,0x1f,0xf8,0xf9,0x01,0x3f,0x1f,0xe0,0xe7,0x03,0xfc,
    0x7c,0x80,0x8f,0x0f,0xf8,0xf1,0x81,0x3f,0x7e,0xf8,0xc3,0xff,0x3f,0xf0,0xff,0x07,
    0xfc,0x7f,0x00,0xff,0x03,0xc0,0x1f,0x00,0xfc,0xff,0xdf,0xff,0xff,0xfb,0xff,0x3f,
    0xff,0xff,0xe7,0xff,0xff,0x00,0x80,0x0f,0x00,0xf8,0x00,0x80,0x0f,0x00,0xf8,0x00,
    0x80,0x0f,0x00,0xf8,0x00,0x80,0x0f,0x00,0xf8,0x01,0x00,0x1f,0x00,0xf0,0x01,0x00,
    0x1f,0x00,0xe0,0x03,0x00,0x3e,0x00,0xc0,0x07,0x00,0x7c,0x00,0x80,0x0f,0x00,0xf8,
    0x00,0x00,0x1f,0x00,0xf0,0x01,0x00,0x3e,0x00,0xe0,0x07,0x00,0xfc,0x00,0x00,0x00,
    0xfc,0x01,0xc0,0xff,0x01,0xf8,0xff,0x01,0xff,0x7f,0xe0,0xff,0x3f,0xfc,0xc0,0x0f,
    0x1f,0xe0,0xc3,0x03,0xf8,0xf0,0x00,0x1f,0x7c,0xf0,0x03,0xfe,0x7f,0x00,0xff,0x07,
    0xe0,0xff,0x03,0xfe,0xff,0xc1,0x1f,0xfe,0xf8,0x01,0x3f,0x7e,0xc0,0xcf,0x0f,0xf0,
    0xf3,0x03,0xfc,0xfc,0x80,0x1f,0x3f,0xe0,0xc7,0x1f,0xfe,0xf0,0xff,0x3f,0xf8,0xff,
    0x07,0xfe,0xff,0x00,0xfe,0x0f,0x00,0xff,0x00,0x00,0x00,0xfc,0x00,0xe0,0x7f,0x00,
    0xff,0x1f,0xf0,0xff,0x07,0xff,0xff,0xe0,0x0f,0x3f,0xfe,0xc0,0xc7,0x0f,0xf8,0xfc,
    0x00,0x9f,0x1f,0xe0,0xf3,0x03,0x7c,0x7e,0xc0,0xcf,0x0f,0xfc,0xf8,0xc3,0x1f,0xff,
    0xff,0xc3,0xff,0x7f,0xf8,0xff,0x0f,0xfe,0xfb,0x00,0x3f,0x1f,0x00,0xf0,0xf1,0x03,
    0x3f,0xfe,0xf0,0xc3,0xff,0x3f,0xf8,0xff,0x07,0xfe,0x7f,0x80,0xff,0x03,0xc0,0x1f,
    0x00,0xf0,0xc3,0x0f,0x1f,0x7e,0xf8,0xe1,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x87,0x1f,0x3e,0xfc,0xf0,0xc3,0x0f,0xe0,0x07,0x3f,0xf8,0xe0,0x07,
    0x3f,0xf8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1f,
    0xfc,0xe0,0x03,0x1f,0xfc,0xe0,0x07,0x38,0xc0,0x00,0x07,0x1c,0x78,0xc0,0x00,0x00,
    0x00,0x00,0x1c,0x00,0xf0,0x03,0x80,0x3f,0x00,0xfe,0x07,0xf8,0xff,0xe0,0xff,0x83,
    0xff,0x0f,0xf0,0x3f,0x00,0xff,0x00,0xe0,0x3f,0x00,0xfc,0x1f,0x00,0xff,0x1f,0x80,
    0xff,0x1f,0x80,0xff,0x07,0xc0,0xff,0x00,0xc0,0x1f,0x00,0xe0,0x01,0x00,0x20,0x00,
    0xf8,0xff,0x3f,0xfe,0xff,0x87,0xff,0xff,0xe1,0xff,0x7f,0xfc,0xff,0x1f,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xe3,0xff,0x7f,0xf8,0xff,
    0x1f,0xfe,0xff,0xc7,0xff,0xff,0x01,0x30,0x00,0x00,0x1e,0x00,0xc0,0x1f,0x00,0xf8,
    0x0f,0x80,0xff,0x0f,0xc0,0xff,0x07,0xe0,0xff,0x03,0xe0,0xff,0x00,0xe0,0x1f,0x00,
    0xfc,0x03,0xf0,0x7f,0xc0,0xff,0x0f,0xff,0x3f,0xfc,0xff,0x80,0xff,0x03,0xf0,0x0f,
    0x00,0x3e,0x00,0xc0,0x00,0x00,0x00,0x00,0x7f,0x00,0xfe,0x1f,0xf0,0xff,0x83,0xff,
    0x7f,0xfc,0xff,0xc7,0x0f,0xff,0x7e,0xe0,0xef,0x03,0xfc,0x3e,0xc0,0xff,0x01,0xfc,
    0x00,0xe0,0x07,0x00,0x7f,0x00,0xf8,0x03,0xc0,0x1f,0x00,0xfe,0x00,0xf0,0x07,0x80,
    0x1f,0x00,0x7c,0x00,0xc0,0x03,0x00,0x1e,0x00,0xe0,0x01,0x00,0x00,0x00,0x00,0x00,
    0x80,0x1f,0x00,0xf8,0x01,0x80,0x1f,0x00,0xf8,0x01,0x80,0x0f,0x00,0xfc,0x00,0x00,
    0x00,0x00,0xfc,0x07,0x00,0x00,0xf8,0xff,0x03,0x00,0xe0,0xff,0xff,0x00,0x80,0x3f,
    0xe0,0x1f,0x00,0x7c,0x00,0xf0,0x03,0xf0,0x01,0x00,0x7e,0x80,0x0f,0x00,0x80,0x07,
    0x7c,0x00,0x00,0x78,0xe0,0x03,0x7e,0x1e,0x0f,0x1f,0xf8,0xef,0xe1,0xf0,0xc0,0xff,
    0x0e,0x8e,0x07,0x3e,0xfe,0xe0,0x3c,0xf0,0xc0,0x07,0xce,0x83,0x07,0x7c,0xe0,0x1e,
    0x3c,0xc0,0x03,0xee,0xc1,0x01,0x3c,0x70,0x1e,0x1e,0xc0,0x01,0xf7,0xe0,0x00,0x1e,
    0x78,0x0f,0x0f,0xe0,0x80,0xf3,0xf0,0x00,0x0f,0x3c,0x0f,0x0f,0x78,0xe0,0xf1,0xf0,
    0xc0,0x07,0x0f,0x0f,0x1f,0x7e,0x7c,0xf0,0xe0,0xff,0xff,0x03,0x1f,0xfe,0xf3,0x1f,
    0xe0,0x81,0x0f,0x3e,0x00,0x3e,0x00,0x00,0x00,0xc0,0x07,0x00,0x00,0x00,0xfc,0x01,
    0x40,0x00,0x80,0x7f,0x80,0x07,0x00,0xe0,0xff,0xff,0x00,0x00,0xfc,0xff,0x07,0x00,
    0x00,0xfe,0x0f,0x00,0x00,0x00,0x80,0x3f,0x00,0x00,0xfe,0x00,0x00,0xfc,0x03,0x00,
    0xf8,0x1f,0x00,0xe0,0x7f,0x00,0xc0,0xff,0x01,0x00,0xff,0x07,0x00,0xfe,0x1f,0x00,
    0xf8,0x7e,0x00,0xf0,0xfb,0x01,0xc0,0xe7,0x07,0x80,0x8f,0x3f,0x00,0x3f,0xfc,0x00,
    0x7c,0xf0,0x03,0xf8,0xc1,0x0f,0xe0,0x03,0x3f,0xc0,0x0f,0xfc,0x00,0x1f,0xf0,0x03,
    0xfe,0xff,0x1f,0xf8,0xff,0x7f,0xf0,0xff,0xff,0xc1,0xff,0xff,0x87,0xff,0xff,0x1f,
    0x7f,0x00,0x7e,0xfc,0x00,0xf8,0xf9,0x01,0xc0,0xef,0x07,0x00,0xff,0x0f,0x00,0xfc,
    0xc0,0xff,0x7f,0x00,0xfe,0xff,0x0f,0xf0,0xff,0xff,0xc0,0xff,0xff,0x07,0xfe,0xff,
    0x7f,0xf0,0x03,0xf8,0x83,0x0f,0x80,0x1f,0x7e,0x00,0xfc,0xf0,0x03,0xe0,0x87,0x1f,
    0x80,0x1f,0xfc,0x00,0x7e,0xe0,0xff,0xff,0x81,0xff,0xff,0x07,0xfc,0xff,0x3f,0xe0,
    0xff,0xff,0x03,0xff,0xff,0x1f,0xf8,0x00,0xfc,0xe1,0x07,0xc0,0x0f,0x3f,0x00,0x7e,
    0xf8,0x01,0xf0,0xc3,0x07,0x80,0x1f,0x3f,0x00,0x7e,0xf8,0x01,0xf8,0xc3,0xff,0xff,
    0x0f,0xfe,0xff,0x3f,0xf0,0xff,0xff,0xc0,0xff,0xff,0x03,0xfe,0xff,0x03,0x00,0x00,
    0xe0,0x1f,0x00,0xe0,0xff,0x03,0xc0,0xff,0x7f,0x00,0xff,0xff,0x03,0xfc,0xff,0x3f,
    0xf0,0x0f,0xfc,0xc3,0x1f,0xc0,0x1f,0x7f,0x00,0xfc,0xfc,0x01,0xe0,0xe7,0x07,0x00,
    0x80,0x3f,0x00,0x00,0xfc,0x00,0x00,0xe0,0x07,0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,
    0x00,0xe0,0x07,0x00,0x00,0x3f,0x00,0x00,0xf8,0x01,0x00,0xc0,0x0f,0x00,0x7e,0x7e,
    0x00,0xf8,0xf1,0x07,0xc0,0x8f,0x3f,0x00,0x3f,0xf8,0x07,0xfe,0xc1,0xff,0xff,0x07,
    0xfc,0xff,0x1f,0xc0,0xff,0x7f,0x00,0xfc,0xff,0x00,0x00,0xff,0x00,0x00,0xc0,0xff,
    0x1f,0x00,0xfe,0xff,0x07,0xf8,0xff,0x7f,0xc0,0xff,0xff,0x07,0xfe,0xff,0x3f,0xf0,
    0x01,0xfe,0xc1,0x0f,0xc0,0x1f,0x7e,0x00,0xfe,0xf0,0x03,0xe0,0x87,0x1f,0x00,0x3f,
    0x7c,0x00,0xf8,0xf1,0x03,0xc0,0x8f,0x1f,0x00,0x7e,0xfc,0x00,0xf0,0xe3,0x03,0xc0,
    0x0f,0x1f,0x00,0x7e,0xfc,0x00,0xf0,0xe3,0x07,0xc0,0x1f,0x3f,0x00,0x7e,0xf8,0x00,
    0xf8,0xc3,0x07,0xc0,0x0f,0x3f,0x80,0x7f,0xf8,0x01,0xfe,0xc1,0xff,0xff,0x07,0xfe,
    0xff,0x1f,0xf8,0xff,0x7f,0xc0,0xff,0xff,0x00,0xfe,0xff,0x00,0x00,0xc0,0xff,0xff,
    0x03,0xff,0xff,0x0f,0xfe,0xff,0x1f,0xf8,0xff,0x7f,0xe0,0xff,0xff,0x81,0x0f,0x00,
    0x00,0x3e,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x1f,0x00,
    0x00,0xfe,0xff,0x0f,0xf8,0xff,0x3f,0xe0,0xff,0xff,0x80,0xff,0xff,0x03,0xfe,0xff,
    0x0f,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x1f,0x00,0x00,0x7c,0x00,
    0x00,0xf8,0x01,0x00,0xe0,0x07,0x00,0x80,0xff,0xff,0x0f,0xfe,0xff,0x1f,0xf8,0xff,
    0x7f,0xf0,0xff,0xff,0xc1,0xff,0xff,0x07,0xc0,0xff,0xff,0xc1,0xff,0xff,0x83,0xff,
    0xff,0x07,0xff,0xff,0x07,0xfe,0xff,0x0f,0x7c,0x00,0x00,0xfc,0x00,0x00,0xf8,0x01,
    0x00,0xf0,0x03,0x00,0xe0,0x03,0x00,0xc0,0x07,0x00,0xc0,0xff,0xff,0x80,0xff,0xff,
    0x01,0xff,0xff,0x03,0xfe,0xff,0x07,0xfe,0xff,0x07,0xfc,0x00,0x00,0xf8,0x01,0x00,
    0xf0,0x03,0x00,0xe0,0x03,0x00,0xe0,0x07,0x00,0xc0,0x0f,0x00,0x80,0x1f,0x00,0x00,
    0x1f,0x00,0x00,0x3e,0x00,0x00,0x7e,0x00,0x00,0xfc,0x00,0x00,0xf8,0x01,0x00,0x00,
    0x00,0xe0,0x1f,0x00,0xe0,0xff,0x03,0xc0,0xff,0x7f,0x00,0xff,0xff,0x03,0xfc,0xff,
    0x3f,0xf0,0x0f,0xfc,0xc3,0x1f,0x80,0x1f,0x7f,0x00,0xfc,0xf8,0x01,0xc0,0xe7,0x07,
    0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,0x00,0xe0,0x07,0x00,0x00,0x1f,0xc0,0xff,0xfd,
    0x00,0xfe,0xef,0x07,0xf0,0x7f,0x3f,0x80,0xff,0xf9,0x01,0xfc,0xcf,0x0f,0x00,0x7c,
    0x7e,0x00,0xe0,0xf3,0x07,0x80,0x9f,0x7f,0x00,0x7e,0xf8,0x0f,0xfc,0xc3,0xff,0xff,
    0x1f,0xfc,0xff,0xff,0xc0,0xff,0x9f,0x07,0xf8,0x7f,0x1c,0x00,0xff,0xe0,0x00,0xe0,
    0x07,0xc0,0x0f,0x7e,0x00,0xfc,0xe0,0x07,0xc0,0x07,0x3e,0x00,0x7e,0xe0,0x03,0xe0,
    0x07,0x3f,0x00,0x7e,0xf0,0x03,0xe0,0x03,0x3f,0x00,0x3e,0xf0,0x01,0xf0,0x83,0x1f,
    0x00,0x3f,0xf8,0xff,0xff,0x83,0xff,0xff,0x1f,0xf8,0xff,0xff,0x81,0xff,0xff,0x1f,
    0xfc,0xff,0xff,0xc1,0x0f,0x80,0x1f,0xfc,0x00,0xf8,0xc0,0x07,0xc0,0x0f,0x7c,0x00,
    0xfc,0xe0,0x07,0xc0,0x0f,0x7e,0x00,0xfc,0xe0,0x07,0xc0,0x07,0x3e,0x00,0x7e,0xe0,
    0x03,0xe0,0x07,0x3f,0x00,0x7e,0xf0,0x03,0xe0,0x03,0x3f,0x00,0x3e,0xf0,0x01,0xf0,
    0x03,0xe0,0x07,0x3f,0xf8,0xc1,0x07,0x3f,0xf8,0xc1,0x0f,0x7e,0xf0,0x81,0x0f,0x7e,
    0xf0,0x83,0x1f,0x7c,0xe0,0x83,0x1f,0xfc,0xe0,0x07,0x1f,0xf8,0xe0,0x07,0x3f,0xf8,
    0xc1,0x0f,0x3e,0xf8,0xc1,0x0f,0x7e,0x00,0x00,0x00,0x3e,0x00,0xc0,0x0f,0x00,0xf0,
    0x03,0x00,0xfc,0x00,0x00,0x1f,0x00,0xe0,0x07,0x00,0xf8,0x01,0x00,0x7e,0x00,0x80,
    0x1f,0x00,0xe0,0x03,0x00,0xfc,0x00,0x00,0x3f,0x00,0xc0,0x0f,0x00,0xf0,0x01,0x00,
    0x7c,0x00,0x80,0x1f,0x00,0xe0,0x87,0x1f,0xf8,0xe1,0x03,0x3e,0xfc,0xc0,0x0f,0x3f,
    0xf0,0xc3,0x0f,0xfc,0xf0,0x87,0x1f,0xfc,0xff,0x07,0xff,0xff,0x80,0xff,0x1f,0xc0,
    0xff,0x03,0xc0,0x1f,0x00,0xc0,0x07,0xc0,0x0f,0xfc,0x00,0xfc,0x80,0x1f,0xe0,0x0f,
    0xf0,0x03,0xfe,0x00,0x3e,0xe0,0x0f,0xc0,0x07,0xfe,0x00,0xfc,0xe0,0x0f,0x80,0x1f,
    0xfe,0x00,0xf0,0xe3,0x0f,0x00,0x3e,0x7e,0x00,0xc0,0xe7,0x07,0x00,0xfc,0x7e,0x00,
    0x80,0xff,0x07,0x00,0xf0,0xff,0x01,0x00,0xfe,0x7f,0x00,0xe0,0xff,0x0f,0x00,0xfc,
    0xfb,0x03,0x80,0x3f,0x7e,0x00,0xf0,0xc3,0x1f,0x00,0x3e,0xf0,0x03,0xe0,0x07,0xfe,
    0x00,0xfc,0x80,0x3f,0x80,0x1f,0xf0,0x07,0xf0,0x01,0xfc,0x01,0x3e,0x00,0x3f,0xe0,
    0x07,0xe0,0x0f,0xfc,0x00,0xf8,0x81,0x1f,0x00,0x7f,0x00,0xc0,0x0f,0x00,0x7c,0x00,
    0xe0,0x07,0x00,0x7e,0x00,0xe0,0x07,0x00,0x3e,0x00,0xe0,0x03,0x00,0x3f,0x00,0xf0,
    0x03,0x00,0x3f,0x00,0xf0,0x01,0x00,0x1f,0x00,0xf8,0x01,0x80,0x1f,0x00,0xf8,0x01,
    0x80,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0x7c,0x00,0xe0,
    0x07,0x00,0x7e,0x00,0xe0,0xff,0xff,0xfe,0xff,0xef,0xff,0xff,0xff,0xff,0xf7,0xff,
    0x7f,0xe0,0x1f,0x00,0xff,0xe0,0x1f,0x80,0xff,0xe0,0x1f,0x80,0xff,0xe0,0x1f,0xc0,
    0xff,0xe0,0x1f,0xc0,0x7f,0xf0,0x1f,0xe0,0x7f,0xf0,0x1f,0xe0,0x7d,0xf0,0x1d,0xf0,
    0x7f,0xf0,0x1d,0xf0,0x7e,0xf8,0x1d,0xf8,0x3e,0xf8,0x1d,0x78,0x3e,0xf8,0x3d,0x78,
    0x3e,0xf8,0x3c,0x7c,0x3f,0xf8,0x3c,0x3c,0x3f,0xfc,0x3c,0x3e,0x1f,0xfc,0x3c,0x1e,
    0x1f,0x7c,0x3c,0x1f,0x1f,0x7c,0x3c,0x8f,0x1f,0x7c,0xbc,0x8f,0x0f,0x7e,0xbc,0x8f,
    0x0f,0x7e,0xfc,0x87,0x0f,0x3e,0xfc,0xc7,0x0f,0x3e,0xfc,0xc3,0x0f,0x3f,0xfc,0xc3,
    0x07,0x3f,0xfc,0xc1,0x07,0x1f,0xfc,0xc1,0x07,0x1f,0xfc,0xe0,0x07,0x1f,0xfc,0xe0,
    0x07,0xe0,0x07,0xc0,0x0f,0xfe,0x00,0xfc,0xe0,0x0f,0xc0,0x07,0xfe,0x01,0x7c,0xe0,
    0x1f,0xc0,0x07,0xff,0x01,0x7e,0xf0,0x3f,0xe0,0x07,0xff,0x03,0x3e,0xf0,0x3f,0xe0,
    0x03,0xdf,0x07,0x3e,0xf8,0x7d,0xf0,0x83,0xcf,0x07,0x3f,0xf8,0xf8,0xf0,0x81,0x8f,
    0x0f,0x1f,0xfc,0xf0,0xf1,0xc1,0x0f,0x9f,0x1f,0x7c,0xf0,0xf9,0xc1,0x07,0xbe,0x0f,
    0x7c,0xe0,0xfb,0xe0,0x07,0xbe,0x0f,0x7e,0xc0,0xff,0xe0,0x03,0xfc,0x07,0x3e,0xc0,
    0x7f,0xe0,0x03,0xf8,0x07,0x3f,0x80,0x7f,0xf0,0x01,0xf0,0x07,0x1f,0x00,0x3f,0xf0,
    0x01,0xf0,0x03,0x00,0xe0,0x1f,0x00,0xc0,0xff,0x07,0x00,0xff,0xff,0x01,0xf8,0xff,
    0x3f,0xc0,0xff,0xff,0x03,0xfe,0x81,0x7f,0xf0,0x07,0xf0,0x87,0x3f,0x00,0xfe,0xf8,
    0x01,0xc0,0xcf,0x0f,0x00,0xfc,0xfc,0x00,0xc0,0xef,0x07,0x00,0xfc,0x7e,0x00,0xc0,
    0xff,0x03,0x00,0xfc,0x3f,0x00,0xe0,0xff,0x03,0x00,0x7e,0x3f,0x00,0xe0,0xf7,0x03,
    0x00,0x7f,0x3f,0x00,0xf0,0xf3,0x03,0x80,0x3f,0x7f,0x00,0xfc,0xe1,0x0f,0xe0,0x0f,
    0xfe,0x81,0x7f,0xc0,0xff,0xff,0x07,0xfc,0xff,0x1f,0x80,0xff,0xff,0x00,0xe0,0xff,
    0x03,0x00,0xf8,0x0f,0x00,0xc0,0xff,0x3f,0x00,0xff,0xff,0x03,0xfe,0xff,0x1f,0xf8,
    0xff,0x7f,0xe0,0xff,0xff,0x83,0x0f,0xe0,0x0f,0x3f,0x00,0x3f,0xfc,0x00,0xfc,0xf0,
    0x03,0xf0,0xc3,0x0f,0xc0,0x0f,0x1f,0x80,0x1f,0x7e,0x00,0x7e,0xf8,0x01,0xfe,0xe0,
    0xff,0xff,0x83,0xff,0xff,0x07,0xfe,0xff,0x0f,0xfc,0xff,0x1f,0xf0,0xff,0x0f,0xc0,
    0x0f,0x00,0x00,0x1f,0x00,0x00,0x7e,0x00,0x00,0xf8,0x01,0x00,0xe0,0x07,0x00,0x80,
    0x1f,0x00,0x00,0x3e,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,
    0x00,0xe0,0x1f,0x00,0xc0,0xff,0x07,0x00,0xff,0xff,0x01,0xf8,0xff,0x3f,0xe0,0xff,
    0xff,0x03,0xfe,0x81,0x7f,0xf0,0x07,0xf0,0x87,0x3f,0x00,0xfe,0xfc,0x01,0xc0,0xcf,
    0x0f,0x00,0xfc,0xfc,0x00,0xc0,0xef,0x07,0x00,0xfc,0x7e,0x00,0xc0,0xff,0x03,0x00,
    0xfc,0x3f,0x00,0xc0,0xf7,0x03,0x00,0x7e,0x3f,0x00,0xe0,0xf7,0x03,0x10,0x3f,0x3f,
    0x80,0xf3,0xf3,0x03,0xfe,0x1f,0x7f,0xc0,0xff,0xe1,0x0f,0xf8,0x0f,0xfe,0x81,0x7f,
    0xc0,0xff,0xff,0x07,0xfc,0xff,0x7f,0x80,0xff,0xff,0x0f,0xe0,0xff,0xfb,0x00,0xf8,
    0x07,0x07,0x00,0x00,0x20,0x00,0xc0,0xff,0x7f,0x00,0xfe,0xff,0x0f,0xf8,0xff,0xff,
    0xc0,0xff,0xff,0x07,0xfe,0xff,0x7f,0xf0,0x03,0xf8,0x83,0x0f,0x80,0x1f,0x7e,0x00,
    0xfc,0xf0,0x03,0xe0,0x87,0x1f,0x00,0x1f,0x7c,0x00,0xfc,0xe0,0x03,0xf0,0x83,0xff,
    0xff,0x0f,0xfc,0xff,0x1f,0xe0,0xff,0x3f,0x00,0xff,0xff,0x07,0xfc,0xff,0x7f,0xe0,
    0x07,0xf8,0x03,0x3f,0x80,0x1f,0xf8,0x01,0xfc,0xc0,0x07,0xe0,0x07,0x3f,0x00,0x3f,
    0xf8,0x01,0xfc,0xc0,0x0f,0xe0,0x07,0x3e,0x00,0x3f,0xf0,0x01,0xf8,0xc1,0x0f,0xc0,
    0x0f,0x7e,0x00,0x7e,0x00,0x00,0xf8,0x07,0x00,0xff,0x1f,0x80,0xff,0x3f,0xc0,0xff,
    0x7f,0xe0,0xff,0xff,0xf0,0x07,0xfe,0xf0,0x03,0xfc,0xf8,0x01,0xfc,0xf8,0x01,0xfc,
    0xf8,0x01,0x00,0xf8,0x03,0x00,0xf8,0x1f,0x00,0xf0,0xff,0x03,0xf0,0xff,0x1f,0xe0,
    0xff,0x3f,0x00,0xff,0x7f,0x00,0xe0,0x7f,0x00,0x00,0x7f,0x00,0x00,0x7e,0x3f,0x00,
    0x7e,0x3f,0x00,0x7e,0x7f,0x00,0x3f,0xff,0xc0,0x3f,0xfe,0xff,0x1f,0xfe,0xff,0x0f,
    0xfc,0xff,0x07,0xf8,0xff,0x01,0xc0,0x7f,0x00,0xfe,0xff,0xff,0xfe,0xff,0x7f,0xfe,
    0xff,0x7f,0xfe,0xff,0x7f,0xfe,0xff,0x7f,0x00,0x3e,0x00,0x00,0x3e,0x00,0x00,0x3f,
    0x00,0x00,0x3f,0x00,0x00,0x3f,0x00,0x00,0x1f,0x00,0x80,0x1f,0x00,0x80,0x1f,0x00,
    0x80,0x1f,0x00,0x80,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x0f,0x00,0xc0,0x0f,0x00,0xc0,
    0x0f,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x07,
    0x00,0xe0,0x03,0x00,0xf0,0x03,0x00,0xf0,0x03,0x00,0xf0,0x03,0x00,0xf0,0x03,0xf0,
    0xc3,0x0f,0xc0,0x07,0x3f,0x80,0x1f,0x7c,0x00,0x7e,0xf8,0x01,0xf8,0xe1,0x07,0xe0,
    0x87,0x1f,0x80,0x0f,0x7e,0x00,0x3f,0xfc,0x00,0xfc,0xf0,0x03,0xf0,0xc3,0x0f,0xc0,
    0x0f,0x3f,0x00,0x1f,0x7c,0x00,0x7e,0xf8,0x01,0xf8,0xe1,0x07,0xe0,0x87,0x1f,0x80,
    0x0f,0x7e,0x00,0x3e,0xfc,0x00,0xfc,0xf0,0x03,0xf0,0xc3,0x0f,0xc0,0x0f,0x3f,0x80,
    0x1f,0xfc,0x00,0x7e,0xf0,0x0f,0xfe,0x80,0xff,0xff,0x03,0xfe,0xff,0x07,0xf0,0xff,
    0x0f,0x80,0xff,0x0f,0x00,0xf8,0x07,0x00,0x3f,0x00,0xfe,0x1f,0x00,0xff,0x0f,0xc0,
    0xef,0x07,0xe0,0xf7,0x03,0xf8,0xf1,0x01,0x7c,0xf8,0x00,0x3f,0x7c,0x80,0x0f,0x3e,
    0xe0,0x07,0x1f,0xf0,0x81,0x0f,0xf8,0xc0,0x07,0x3e,0xe0,0x07,0x1f,0xe0,0xc3,0x07,
    0xf0,0xe1,0x03,0xf8,0xf8,0x00,0x7c,0x3c,0x00,0x3e,0x1f,0x00,0x9f,0x07,0x80,0xef,
    0x03,0xc0,0xf7,0x00,0xc0,0x7f,0x00,0xe0,0x1f,0x00,0xf0,0x0f,0x00,0xf8,0x03,0x00,
    0xfc,0x01,0x00,0x7e,0x00,0x00,0x1f,0x00,0x00,0x3f,0x80,0x1f,0xe0,0xf7,0x03,0xfc,
    0x01,0x7e,0x3f,0xc0,0x1f,0xe0,0xf3,0x03,0xfc,0x01,0x3f,0x3f,0xe0,0x1f,0xf0,0xf1,
    0x03,0xfe,0x81,0x1f,0x3f,0xf0,0x1f,0xf8,0xe0,0x03,0xef,0xc1,0x0f,0x3e,0xf8,0x1e,
    0x7c,0xe0,0x83,0xef,0xc1,0x07,0x3e,0x7c,0x1e,0x7e,0xe0,0xc3,0xe7,0xe1,0x03,0x3e,
    0x3c,0x1e,0x3f,0xe0,0xe3,0xe3,0xf1,0x01,0x3e,0x1e,0x1e,0x1f,0xe0,0xf3,0xe1,0xf9,
    0x00,0x3e,0x0f,0x9e,0x0f,0xe0,0xfb,0xe0,0x7d,0x00,0xbe,0x07,0xde,0x07,0xe0,0x7b,
    0xe0,0x3d,0x00,0xfe,0x07,0xfe,0x03,0xe0,0x3f,0xe0,0x1f,0x00,0xfc,0x03,0xfe,0x01,
    0xc0,0x1f,0xe0,0x0f,0x00,0xfc,0x01,0xfe,0x00,0xc0,0x0f,0xe0,0x07,0x00,0xfc,0x00,
    0x7e,0x00,0xc0,0x07,0xe0,0x03,0x00,0xc0,0x1f,0xc0,0x1f,0xf0,0x03,0xf8,0x01,0xfe,
    0x80,0x1f,0xc0,0x1f,0xf8,0x03,0xf0,0x83,0x3f,0x00,0xfe,0xf0,0x03,0x80,0x1f,0x3f,
    0x00,0xf0,0xf3,0x03,0x00,0xfe,0x3f,0x00,0x80,0xff,0x07,0x00,0xf0,0x7f,0x00,0x00,
    0xfc,0x07,0x00,0x80,0x7f,0x00,0x00,0xf0,0x07,0x00,0x00,0xfe,0x00,0x00,0xe0,0x3f,
    0x00,0x00,0xfe,0x07,0x00,0xc0,0xff,0x01,0x00,0xfc,0x3f,0x00,0xc0,0xef,0x07,0x00,
    0xfc,0xfc,0x01,0xc0,0x0f,0x3f,0x00,0xfc,0xe1,0x0f,0x80,0x1f,0xfc,0x01,0xf8,0x01,
    0x3f,0x80,0x1f,0xe0,0x0f,0xf8,0x03,0xf8,0x81,0x3f,0x00,0x7f,0x00,0x3f,0x00,0x7e,
    0x7f,0x00,0x7f,0x7e,0x00,0x3f,0x7e,0x80,0x1f,0x7e,0xc0,0x0f,0xfc,0xc0,0x0f,0xfc,
    0xe0,0x07,0xfc,0xf0,0x03,0xf8,0xf0,0x03,0xf8,0xf9,0x01,0xf8,0xfd,0x00,0xf8,0xfd,
    0x00,0xf0,0x7f,0x00,0xf0,0x3f,0x00,0xf0,0x1f,0x00,0xe0,0x1f,0x00,0xe0,0x0f,0x00,
    0xe0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x03,0x00,0xf0,
    0x03,0x00,0xf0,0x03,0x00,0xf0,0x03,0x00,0xf0,0x01,0x00,0xf0,0x01,0x00,0xf8,0x01,
    0x00,0xc0,0xff,0xff,0x07,0xfe,0xff,0x3f,0xf0,0xff,0xff,0xc0,0xff,0xff,0x07,0xfe,
    0xff,0x3f,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,
    0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,
    0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,
    0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0xff,
    0xff,0x07,0xfe,0xff,0x3f,0xf0,0xff,0xff,0xc0,0xff,0xff,0x07,0xfe,0xff,0x3f,0x00,
    0x80,0xff,0x00,0xff,0x01,0xfe,0x03,0xfe,0x07,0x7c,0x00,0xf8,0x00,0xf0,0x01,0xe0,
    0x03,0xe0,0x07,0xc0,0x07,0x80,0x0f,0x00,0x1f,0x00,0x3e,0x00,0x7e,0x00,0x7c,0x00,
    0xf8,0x00,0xf0,0x01,0xe0,0x03,0xe0,0x07,0xc0,0x07,0x80,0x0f,0x00,0x1f,0x00,0x3e,
    0x00,0x7e,0x00,0x7c,0x00,0xf8,0x00,0xf0,0x01,0xe0,0x03,0xe0,0x07,0xc0,0x07,0x80,
    0x0f,0x00,0x1f,0x00,0xfe,0x03,0xfe,0x07,0xfc,0x0f,0xf8,0x0f,0x00,0x40,0x10,0x0c,
    0xc3,0x61,0x18,0x8e,0xe3,0x38,0x8e,0xe3,0x38,0x0c,0xc3,0x71,0x1c,0xc7,0x71,0x1c,
    0x87,0x61,0x38,0x8e,0xe3,0x38,0x80,0xff,0x01,0xff,0x01,0xfe,0x03,0xfc,0x07,0x80,
    0x0f,0x80,0x1f,0x00,0x1f,0x00,0x3e,0x00,0x7c,0x00,0xf8,0x00,0xf8,0x01,0xf0,0x01,
    0xe0,0x03,0xc0,0x07,0x80,0x0f,0x80,0x1f,0x00,0x1f,0x00,0x3e,0x00,0x7c,0x00,0xf8,
    0x00,0xf8,0x01,0xf0,0x01,0xe0,0x03,0xc0,0x07,0x80,0x0f,0x80,0x1f,0x00,0x1f,0x00,
    0x3e,0x00,0x7c,0x00,0xf8,0x00,0xf8,0x01,0xf0,0x01,0xfe,0x03,0xfc,0x07,0xfc,0x0f,
    0xf8,0x1f,0x00,0x00,0x3e,0x00,0x7e,0x00,0xfe,0x01,0xfc,0x03,0xbc,0x07,0x78,0x0f,
    0x78,0x1e,0xf8,0x3c,0xf0,0xf8,0xf0,0xe0,0xe1,0xc1,0xe3,0x81,0xe7,0x03,0xcf,0x03,
    0xfe,0x07,0xf8,0x07,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x9f,0xc7,
    0x71,0x38,0x0e,0x00,0xfe,0x01,0xf8,0xff,0x80,0xff,0x3f,0xf8,0xff,0x0f,0xff,0xff,
    0xf1,0x03,0x1f,0x3e,0xe0,0x03,0x00,0x7e,0x00,0xf0,0x0f,0xf8,0xff,0xe1,0xff,0x3f,
    0xfe,0xff,0xe3,0x0f,0x7c,0x7e,0x80,0xcf,0x0f,0xf8,0xf9,0xc1,0x3f,0xff,0xff,0xe3,
    0xff,0x7f,0xf8,0xff,0x0f,0xfe,0xf9,0x81,0x1f,0x7f,0x00,0xc0,0x07,0x00,0xe0,0x03,
    0x00,0xf0,0x01,0x00,0xfc,0x00,0x00,0x7e,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xc0,
    0xc7,0x0f,0xf0,0xfb,0x0f,0xf8,0xfe,0x0f,0xfc,0xff,0x0f,0xfe,0xff,0x87,0xff,0xf8,
    0xc7,0x1f,0xf8,0xe3,0x07,0xf8,0xf1,0x03,0xfc,0xf8,0x00,0x7e,0x7e,0x00,0x3f,0x3f,
    0xc0,0x9f,0x1f,0xe0,0xc7,0x0f,0xf8,0xe3,0x07,0xfe,0xf8,0x87,0x7f,0xfc,0xff,0x1f,
    0xfe,0xff,0x07,0xff,0xff,0x81,0xff,0x3f,0xe0,0xe7,0x07,0x00,0x00,0x7f,0x00,0xfc,
    0x1f,0xe0,0xff,0x03,0xff,0x7f,0xf8,0xff,0xcf,0x1f,0xfe,0xfc,0xc0,0xef,0x07,0xfc,
    0x7e,0x00,0xe0,0x07,0x00,0x3f,0x00,0xf0,0x03,0x00,0x3f,0x00,0xf0,0x03,0x00,0x3f,
    0xe0,0xf3,0x87,0x3f,0xfe,0xff,0xe1,0xff,0x1f,0xfc,0x7f,0x80,0xff,0x03,0xe0,0x0f,
    0x00,0x00,0x00,0x7c,0x00,0x00,0x7c,0x00,0x00,0x7c,0x00,0x00,0x7c,0x00,0x00,0x7e,
    0x00,0x00,0x3e,0x00,0x00,0x3e,0x00,0x3f,0x3e,0xc0,0x7f,0x3f,0xe0,0xff,0x3f,0xf0,
    0xff,0x1f,0xf8,0xff,0x1f,0xfc,0xc3,0x1f,0xfc,0x81,0x1f,0xfe,0x80,0x1f,0x7e,0x80,
    0x0f,0x3f,0x80,0x0f,0x3f,0x80,0x0f,0x3f,0x80,0x0f,0x3f,0xc0,0x0f,0x3f,0xc0,0x07,
    0x7f,0xe0,0x07,0x7f,0xf8,0x07,0xfe,0xff,0x07,0xfe,0xff,0x03,0xfc,0xff,0x03,0xfc,
    0xef,0x03,0xf0,0xf3,0x03,0x00,0xfe,0x00,0xf8,0x7f,0x80,0xff,0x1f,0xf8,0xff,0x87,
    0xff,0xff,0xf8,0x83,0x3f,0x3f,0xe0,0xf7,0x03,0xfc,0xfe,0xff,0xdf,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xf7,0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x03,0x3f,0xfe,
    0xff,0xc3,0xff,0x3f,0xf0,0xff,0x03,0xfc,0x3f,0x00,0xfe,0x00,0x00,0x00,0x7e,0xc0,
    0x1f,0xf0,0x0f,0xf8,0x07,0x7e,0x00,0x3f,0x80,0x0f,0xf8,0x3f,0xfc,0x1f,0xff,0x8f,
    0xff,0x07,0x3e,0x00,0x1f,0xc0,0x0f,0xe0,0x07,0xf0,0x01,0xf8,0x00,0x7c,0x00,0x3f,
    0x80,0x1f,0xc0,0x07,0xe0,0x03,0xf0,0x01,0xfc,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,
    0x07,0x00,0x00,0xfc,0xf8,0x00,0xff,0xf9,0x80,0xff,0x7f,0xc0,0xff,0x7f,0xe0,0xff,
    0x7f,0xf0,0x0f,0x7f,0xf0,0x07,0x7e,0xf8,0x03,0x3e,0xf8,0x01,0x3e,0xf8,0x01,0x3e,
    0xfc,0x00,0x3e,0xfc,0x00,0x1e,0xfc,0x00,0x1e,0xfc,0x00,0x1f,0xfc,0x80,0x1f,0xfc,
    0xe1,0x1f,0xfc,0xff,0x0f,0xf8,0xff,0x0f,0xf0,0xff,0x0f,0xf0,0xbf,0x0f,0xc0,0xcf,
    0x0f,0x00,0xc0,0x07,0x00,0xc0,0x07,0x3f,0xc0,0x07,0x3f,0xe0,0x03,0x3f,0xf0,0x03,
    0x7e,0xf8,0x01,0xfe,0xff,0x00,0xfc,0x7f,0x00,0xf0,0x0f,0x00,0xe0,0x07,0x00,0x7c,
    0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3f,0x00,0xe0,0x07,0x00,0x7c,0x00,0x80,0x8f,
    0x1f,0xf0,0xf9,0x07,0xff,0xff,0xe1,0xff,0x7f,0xfc,0xff,0x8f,0x3f,0xfc,0xf1,0x03,
    0x3f,0x3f,0xe0,0xe3,0x07,0x7c,0x7c,0x80,0x8f,0x0f,0xf8,0xf1,0x01,0x3f,0x3f,0xe0,
    0xe3,0x03,0x7c,0x7c,0x80,0x8f,0x0f,0xf8,0xf9,0x01,0x3f,0x3f,0xe0,0xe3,0x03,0x7c,
    0x7c,0x80,0x8f,0x0f,0xf8,0x01,0xc0,0x07,0x3f,0xf8,0xc0,0x07,0x3e,0x00,0x00,0x00,
    0x3e,0xf0,0x81,0x0f,0x7c,0xf0,0x83,0x0f,0x7c,0xe0,0x03,0x1f,0xfc,0xe0,0x03,0x1f,
    0xf8,0xe0,0x07,0x3f,0xf8,0xc0,0x07,0x3e,0xf8,0xc1,0x0f,0x3e,0x00,0x00,0xfc,0x00,
    0xfc,0x00,0x7c,0x00,0x7c,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x3e,0x00,
    0x3e,0x00,0x3f,0x00,0x1f,0x00,0x1f,0x00,0x1f,0x80,0x1f,0x80,0x1f,0x80,0x0f,0x80,
    0x0f,0x80,0x0f,0xc0,0x0f,0xc0,0x0f,0xc0,0x07,0xc0,0x07,0xc0,0x07,0xe0,0x07,0xe0,
    0x03,0xe0,0x03,0xe0,0x03,0xf0,0x03,0xf0,0x03,0xf0,0x01,0xf0,0x01,0xfe,0x01,0xfe,
    0x01,0xfe,0x00,0x7f,0x00,0x1f,0x00,0xc0,0x07,0x00,0xe0,0x03,0x00,0xf0,0x01,0x00,
    0xfc,0x00,0x00,0x7e,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x07,0x7e,0xf0,0x83,
    0x1f,0xf8,0xe0,0x07,0x7c,0xf8,0x01,0x3e,0x7e,0x80,0x9f,0x1f,0xc0,0xef,0x07,0xe0,
    0xfb,0x00,0xf0,0x7f,0x00,0xf8,0x3f,0x00,0xfe,0x3f,0x00,0xff,0x1f,0x80,0xbf,0x1f,
    0xc0,0xcf,0x0f,0xe0,0xe3,0x07,0xf8,0xe1,0x07,0xfc,0xf0,0x03,0x3e,0xf8,0x01,0x1f,
    0xf8,0x81,0x0f,0xfc,0xe0,0x07,0xfe,0x00,0xc0,0x07,0x3f,0xf8,0xc1,0x07,0x3e,0xf0,
    0xc1,0x0f,0x7e,0xf0,0x81,0x0f,0x7c,0xf0,0x83,0x0f,0x7c,0xe0,0x03,0x1f,0xfc,0xe0,
    0x03,0x1f,0xf8,0xe0,0x07,0x3f,0xf8,0xc0,0x07,0x3e,0xf8,0xc1,0x0f,0x3e,0x00,0xe0,
    0xe3,0x03,0x3e,0xe0,0xf7,0x0f,0xff,0xc1,0xf7,0xbf,0xff,0x83,0xff,0xff,0xff,0x0f,
    0xff,0xff,0xff,0x1f,0xff,0xf8,0x8f,0x3f,0x7e,0xe0,0x07,0x7e,0xfc,0xc0,0x0f,0x7c,
    0xf8,0x80,0x0f,0xf8,0xf0,0x01,0x1f,0xf8,0xf1,0x03,0x3f,0xf0,0xe3,0x07,0x7e,0xe0,
    0xc3,0x07,0x7c,0xc0,0x87,0x0f,0xf8,0x80,0x0f,0x1f,0xf0,0x81,0x1f,0x3f,0xf0,0x03,
    0x3f,0x7e,0xe0,0x03,0x3e,0x7c,0xc0,0x07,0x7c,0xf8,0x80,0x0f,0xf8,0xf0,0x81,0x1f,
    0xf8,0xf1,0x03,0x3f,0xf0,0x01,0xe0,0xe3,0x07,0xfc,0xfe,0x03,0xff,0xff,0xc1,0xff,
    0xff,0xf0,0xff,0x3f,0xfc,0xe1,0x8f,0x3f,0xf0,0xe3,0x07,0x7c,0xf8,0x00,0x1f,0x3e,
    0xc0,0x87,0x0f,0xf8,0xf1,0x03,0x7e,0x7c,0x80,0x0f,0x1f,0xe0,0xc3,0x07,0xf8,0xf0,
    0x01,0x3f,0x7e,0xc0,0x8f,0x0f,0xf0,0xe1,0x03,0x7c,0xf8,0x00,0x1f,0x3f,0xe0,0x07,
    0x00,0xfe,0x01,0xe0,0xff,0x01,0xfe,0xff,0xc0,0xff,0x7f,0xf8,0xff,0x1f,0xff,0xf0,
    0xcf,0x0f,0xf8,0xfb,0x03,0xfc,0x7e,0x00,0xff,0x0f,0xc0,0xff,0x03,0xf0,0xff,0x00,
    0xfe,0x3f,0x80,0xdf,0x0f,0xf0,0xf7,0x07,0xfc,0xfc,0xc3,0x3f,0xfe,0xff,0x87,0xff,
    0xff,0xc0,0xff,0x1f,0xe0,0xff,0x01,0xe0,0x1f,0x00,0xc0,0x8f,0x1f,0x80,0xdf,0x7f,
    0x00,0xdf,0xff,0x01,0xfe,0xff,0x07,0xfc,0xff,0x0f,0xfc,0xc7,0x3f,0xf8,0x03,0x7f,
    0xf0,0x03,0xfc,0xe0,0x07,0xf8,0xc1,0x07,0xf0,0xc3,0x0f,0xe0,0x87,0x1f,0xe0,0x0f,
    0x3f,0xc0,0x0f,0x7e,0xc0,0x1f,0xfc,0x80,0x1f,0xfc,0xc3,0x3f,0xf8,0xff,0x3f,0xf0,
    0xff,0x3f,0xe0,0xff,0x3f,0xc0,0xff,0x3f,0xc0,0xcf,0x1f,0x80,0x0f,0x00,0x00,0x1f,
    0x00,0x00,0x3e,0x00,0x00,0x7c,0x00,0x00,0xfc,0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,
    0x00,0xe0,0x03,0x00,0xc0,0x07,0x00,0x00,0x00,0x3f,0x3e,0xf0,0xdf,0x0f,0xfe,0xff,
    0xc3,0xff,0x7f,0xf8,0xff,0x1f,0xff,0xf0,0xc7,0x1f,0xf8,0xf9,0x03,0x7e,0x7e,0x00,
    0xcf,0x1f,0xe0,0xf3,0x03,0xf8,0xfc,0x00,0x3e,0x3f,0x80,0xcf,0x0f,0xf0,0xf1,0x07,
    0x7e,0xfc,0xc3,0x1f,0xff,0xff,0x87,0xff,0xff,0xc0,0xff,0x3f,0xf0,0xbf,0x0f,0xf0,
    0xe3,0x03,0x00,0xfc,0x00,0x00,0x1f,0x00,0xc0,0x07,0x00,0xf0,0x01,0x00,0x7c,0x00,
    0x80,0x1f,0x00,0xe0,0x03,0x00,0xf8,0x00,0x00,0x3e,0x00,0xe0,0xe3,0xe0,0xe7,0xc1,
    0xef,0x83,0xef,0x07,0xff,0x0f,0xfe,0x00,0xfe,0x00,0xfc,0x00,0xf8,0x00,0xf0,0x01,
    0xe0,0x03,0xe0,0x07,0xc0,0x07,0x80,0x0f,0x00,0x1f,0x00,0x3e,0x00,0x7e,0x00,0x7c,
    0x00,0xf8,0x00,0xf0,0x01,0xf0,0x03,0x00,0x80,0x7f,0x00,0xff,0x0f,0xfe,0xff,0xf0,
    0xff,0xc7,0xff,0x7f,0x7f,0xf8,0xfb,0x81,0xdf,0x0f,0x00,0xfe,0x03,0xf0,0xff,0x00,
    0xff,0x3f,0xf0,0xff,0x03,0xfe,0x3f,0x00,0xff,0x01,0xc0,0xef,0x03,0x7f,0xff,0xff,
    0xf1,0xff,0x8f,0xff,0x3f,0xf8,0x7f,0x00,0xff,0x00,0xe0,0x03,0x3f,0xf0,0x01,0x1f,
    0xf0,0xe1,0xff,0xfe,0xef,0x7f,0xff,0x87,0x0f,0xfc,0xc0,0x0f,0x7c,0xc0,0x07,0x7c,
    0xe0,0x07,0x3e,0xe0,0x03,0x3e,0xf0,0x03,0x3f,0xf0,0x03,0xff,0xf1,0x0f,0xff,0xc0,
    0x0f,0xf8,0x01,0x3f,0x3e,0xc0,0x8f,0x0f,0xf0,0xe1,0x03,0x7c,0xfc,0x00,0x1f,0x3f,
    0xe0,0xc7,0x07,0xf8,0xf1,0x01,0x3e,0x7c,0x80,0x8f,0x1f,0xe0,0xe3,0x03,0xfc,0xf8,
    0x00,0x3f,0x3e,0xc0,0xc7,0x0f,0xf0,0xf1,0x03,0x7e,0xfc,0xe1,0x1f,0xff,0xff,0xc3,
    0xff,0xff,0xe0,0xff,0x3f,0xf0,0x9f,0x0f,0xf8,0xf1,0x03,0x3f,0xc0,0xf7,0x03,0x7e,
    0x3f,0xe0,0xf3,0x03,0x3f,0x3e,0xf0,0xe1,0x83,0x1f,0x3e,0xf8,0xe0,0xc3,0x0f,0x3e,
    0x7c,0xe0,0xe3,0x07,0x3e,0x3e,0xe0,0xe3,0x01,0x3c,0x1f,0xc0,0xf7,0x00,0xfc,0x0f,
    0xc0,0x7f,0x00,0xfc,0x07,0xc0,0x3f,0x00,0xfc,0x03,0x80,0x1f,0x00,0xf8,0x01,0x00,
    0x3f,0xf8,0x81,0xef,0x07,0x3f,0xf0,0xfd,0xe0,0x07,0xbf,0x1f,0xfe,0xe0,0xf3,0xc3,
    0x1f,0x7e,0x7e,0xf8,0xc3,0xc7,0x8f,0x7f,0xfc,0xf0,0x71,0x8f,0x0f,0x3e,0xef,0xf1,
    0xc1,0xe7,0x3d,0x1f,0xf8,0x9c,0xe7,0x03,0xdf,0xf3,0x3e,0xe0,0x3b,0xde,0x07,0x7c,
    0xc7,0x7f,0x80,0xff,0xf8,0x0f,0xf0,0x0f,0xff,0x00,0xfe,0xe1,0x1f,0xc0,0x3f,0xfc,
    0x01,0xf8,0x83,0x3f,0x00,0x7f,0xf0,0x03,0xe0,0x07,0x7e,0x00,0x00,0xf0,0x07,0x7e,
    0xe0,0x07,0x3f,0xe0,0x87,0x1f,0xc0,0x8f,0x1f,0xc0,0xcf,0x0f,0xc0,0xef,0x07,0x80,
    0xff,0x03,0x80,0xff,0x01,0x00,0xff,0x00,0x00,0x7f,0x00,0x00,0x7f,0x00,0x80,0x7f,
    0x00,0x80,0xff,0x00,0xc0,0xff,0x00,0xe0,0xff,0x00,0xf0,0xfb,0x01,0xf8,0xf9,0x01,
    0xf8,0xf1,0x03,0xfc,0xf0,0x03,0x7e,0xf0,0x07,0x3f,0xe0,0x07,0xf0,0x03,0xfc,0xf0,
    0x03,0x7c,0xf0,0x03,0x3e,0xf0,0x03,0x3e,0xf0,0x03,0x1f,0xf0,0x03,0x1f,0xe0,0x83,
    0x0f,0xe0,0x83,0x0f,0xe0,0xc3,0x07,0xe0,0xc3,0x07,0xe0,0xe7,0x03,0xe0,0xe7,0x03,
    0xe0,0xf7,0x01,0xc0,0xf7,0x01,0xc0,0xff,0x00,0xc0,0x7f,0x00,0xc0,0x7f,0x00,0xc0,
    0x3f,0x00,0xc0,0x3f,0x00,0xc0,0x1f,0x00,0x80,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x0f,
    0x00,0xc0,0x07,0x00,0xe0,0x07,0x00,0xfe,0x03,0x00,0xfe,0x01,0x00,0xfe,0x01,0x00,
    0xfe,0x00,0x00,0x3f,0x00,0x00,0xe0,0xff,0x1f,0xfc,0xff,0xc3,0xff,0x3f,0xf8,0xff,
    0x07,0xff,0xff,0x00,0xc0,0x0f,0x00,0xfc,0x00,0xc0,0x0f,0x00,0xfe,0x00,0xe0,0x0f,
    0x00,0xfe,0x00,0xe0,0x07,0x00,0x7e,0x00,0xe0,0x07,0x00,0x7f,0x00,0xf0,0x07,0x00,
    0xfe,0xff,0xe3,0xff,0x3f,0xfc,0xff,0x87,0xff,0xff,0xf0,0xff,0x1f,0x00,0x00,0xfc,
    0x00,0x7e,0x00,0x7f,0x80,0x7f,0x80,0x0f,0xc0,0x0f,0xc0,0x07,0xc0,0x07,0xc0,0x07,
    0xc0,0x07,0xe0,0x03,0xe0,0x03,0xe0,0x03,0xe0,0x03,0xf0,0x03,0xf0,0x01,0xfe,0x01,
    0xfe,0x00,0x3e,0x00,0x7f,0x00,0x78,0x00,0x78,0x00,0x78,0x00,0x78,0x00,0x7c,0x00,
    0x7c,0x00,0x7c,0x00,0x7c,0x00,0x3c,0x00,0x3e,0x00,0x1e,0x00,0x1e,0x00,0xfe,0x00,
    0xfe,0x00,0x7c,0x00,0x78,0x00,0x80,0x03,0x0e,0x1c,0x70,0xc0,0x01,0x07,0x1c,0x38,
    0xe0,0x80,0x03,0x0e,0x3c,0x70,0xc0,0x01,0x07,0x1c,0x38,0xe0,0x80,0x03,0x0e,0x38,
    0x70,0xc0,0x01,0x07,0x1c,0x70,0xe0,0x80,0x03,0x0e,0x38,0xf0,0xc0,0x01,0x07,0x18,
    0x40,0x00,0x00,0x3e,0x00,0x3e,0x00,0x7e,0x00,0x7f,0x00,0x78,0x00,0x78,0x00,0x7c,
    0x00,0x7c,0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x1e,0x00,0x1e,
    0x00,0x1e,0x00,0xfe,0x00,0x7c,0x00,0x7f,0x80,0x7f,0x80,0x1f,0xc0,0x0f,0xc0,0x07,
    0xc0,0x07,0xc0,0x07,0xc0,0x07,0xe0,0x07,0xe0,0x03,0xe0,0x03,0xe0,0x03,0xe0,0x03,
    0xf0,0x01,0xfe,0x01,0xfe,0x00,0x7e,0x00,0x3f,0x00,0xf8,0x00,0xf0,0x07,0xe0,0x3f,
    0xf8,0xf3,0xf1,0x87,0xff,0x01,0xf8,0x03,0xc0,0x07,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 11, 0, 38, 1, 1},
/* ! */ {1, 13, 4, 10, 11, 28},
/* " */ {40, 18, 7, 10, 15, 10},
/* # */ {59, 21, 1, 12, 24, 26},
/* $ */ {137, 21, 1, 9, 23, 34},
/* % */ {235, 34, 5, 10, 30, 28},
/* & */ {340, 27, 3, 11, 24, 27},
/* ' */ {421, 9, 7, 10, 6, 10},
/* ( */ {429, 13, 3, 10, 14, 35},
/* ) */ {491, 13, -1, 10, 14, 35},
/* * */ {553, 15, 5, 10, 13, 12},
/* + */ {573, 22, 3, 20, 20, 18},
/* , */ {618, 11, 1, 32, 8, 12},
/* - */ {630, 13, 3, 25, 11, 5},
/* . */ {637, 11, 2, 32, 7, 6},
/* / */ {643, 11, -1, 11, 16, 27},
/* 0 */ {697, 21, 3, 11, 21, 27},
/* 1 */ {768, 21, 6, 11, 13, 27},
/* 2 */ {812, 21, 0, 11, 23, 27},
/* 3 */ {890, 21, 3, 11, 21, 27},
/* 4 */ {961, 21, 2, 12, 21, 26},
/* 5 */ {1030, 21, 2, 11, 22, 27},
/* 6 */ {1105, 21, 3, 11, 21, 27},
/* 7 */ {1176, 21, 4, 11, 21, 27},
/* 8 */ {1247, 21, 2, 11, 22, 27},
/* 9 */ {1322, 21, 3, 11, 21, 27},
/* : */ {1393, 13, 3, 18, 10, 20},
/* ; */ {1418, 13, 2, 18, 11, 27},
/* < */ {1456, 22, 2, 19, 21, 18},
/* = */ {1504, 22, 2, 22, 22, 14},
/* > */ {1543, 22, 1, 20, 21, 18},
/* ? */ {1591, 23, 6, 9, 20, 29},
/* @ */ {1664, 37, 3, 10, 36, 33},
/* A */ {1813, 27, 0, 10, 26, 28},
/* B */ {1904, 27, 3, 10, 27, 28},
/* C */ {1999, 27, 4, 10, 27, 28},
/* D */ {2094, 27, 2, 10, 27, 28},
/* E */ {2189, 25, 3, 10, 26, 28},
/* F */ {2280, 23, 2, 10, 25, 28},
/* G */ {2368, 30, 4, 10, 27, 28},
/* H */ {2463, 27, 2, 10, 28, 28},
/* I */ {2561, 11, 2, 10, 11, 28},
/* J */ {2600, 21, 2, 10, 22, 28},
/* K */ {2677, 27, 2, 10, 29, 28},
/* L */ {2779, 23, 3, 10, 20, 28},
/* M */ {2849, 32, 2, 10, 32, 28},
/* N */ {2961, 27, 2, 10, 28, 28},
/* O */ {3059, 30, 4, 10, 28, 28},
/* P */ {3157, 25, 2, 10, 26, 28},
/* Q */ {3248, 30, 4, 10, 28, 29},
/* R */ {3350, 27, 3, 10, 27, 28},
/* S */ {3445, 25, 3, 10, 24, 28},
/* T */ {3529, 23, 5, 10, 24, 28},
/* U */ {3613, 27, 5, 10, 26, 28},
/* V */ {3704, 25, 6, 10, 23, 28},
/* W */ {3785, 36, 6, 10, 36, 28},
/* X */ {3911, 25, 0, 10, 29, 28},
/* Y */ {4013, 25, 6, 10, 24, 28},
/* Z */ {4097, 23, 1, 10, 27, 28},
/* [ */ {4192, 13, 0, 10, 17, 36},
/* \ */ {4269, 11, 5, 5, 6, 33},
/* ] */ {4294, 13, -1, 10, 17, 36},
/* ^ */ {4371, 22, 4, 11, 17, 16},
/* _ */ {4405, 21, -3, 43, 23, 3},
/* ` */ {4414, 13, 7, 9, 6, 6},
/* a */ {4419, 21, 2, 17, 21, 21},
/* b */ {4475, 23, 2, 10, 23, 28},
/* c */ {4556, 21, 3, 17, 20, 21},
/* d */ {4609, 23, 3, 10, 24, 28},
/* e */ {4693, 21, 2, 17, 21, 21},
/* f */ {4749, 13, 3, 10, 15, 28},
/* g */ {4802, 23, 1, 17, 24, 30},
/* h */ {4892, 23, 2, 10, 21, 28},
/* i */ {4966, 11, 3, 10, 11, 28},
/* j */ {5005, 11, -2, 10, 16, 37},
/* k */ {5079, 21, 2, 10, 23, 28},
/* l */ {5160, 11, 3, 10, 11, 28},
/* m */ {5199, 34, 2, 17, 33, 21},
/* n */ {5286, 23, 2, 17, 22, 21},
/* o */ {5344, 23, 3, 17, 22, 21},
/* p */ {5402, 23, 0, 17, 25, 30},
/* q */ {5496, 23, 3, 17, 22, 30},
/* r */ {5579, 15, 2, 17, 17, 21},
/* s */ {5624, 21, 4, 17, 19, 21},
/* t */ {5674, 13, 3, 12, 12, 26},
/* u */ {5713, 23, 3, 17, 22, 21},
/* v */ {5771, 21, 4, 17, 20, 21},
/* w */ {5824, 30, 5, 17, 29, 21},
/* x */ {5901, 21, 0, 17, 24, 21},
/* y */ {5964, 21, 1, 17, 24, 30},
/* z */ {6054, 19, 0, 17, 21, 21},
/* { */ {6110, 15, 3, 10, 16, 36},
/* | */ {6182, 11, 2, 10, 10, 35},
/* } */ {6226, 15, 0, 10, 16, 36},
/* ~ */ {6298, 22, 3, 26, 18, 7},
};

const monoGFX_font_t monoGFX_FreeSansBoldOblique_18pt = {bitmapBuffer, 6314, glyphs, 20};
