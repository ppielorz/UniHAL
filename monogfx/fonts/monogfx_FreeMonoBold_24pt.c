#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[7705] =
{
    0x00,0x3c,0x7e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7e,0x7e,0x7e,0x7e,0x7e,
    0x7e,0x7e,0x7e,0x7e,0x7e,0x3c,0x3c,0x3c,0x00,0x00,0x00,0x3c,0x7e,0xff,0xff,0xff,
    0x7e,0x3c,0x3f,0x7e,0x3f,0x7e,0x3e,0x7c,0x3e,0x7c,0x3e,0x7c,0x3e,0x7c,0x3e,0x7c,
    0x3e,0x7c,0x3e,0x7c,0x1c,0x38,0x1c,0x38,0x1c,0x38,0x1c,0x38,0x1c,0x38,0x1c,0x38,
    0x80,0x07,0x07,0xe0,0xc3,0x07,0xf0,0xe1,0x03,0xf8,0xf0,0x01,0x7c,0xf8,0x00,0x3e,
    0x7c,0x00,0x1f,0x3e,0x80,0x0f,0x1f,0xc0,0x87,0x0f,0xe0,0xe3,0x03,0xf0,0xf1,0x81,
    0xff,0xff,0xe7,0xff,0xff,0xf7,0xff,0xff,0xfb,0xff,0xff,0xf9,0xff,0x7f,0xe0,0xc3,
    0x07,0xf0,0xe1,0x03,0xf8,0xf0,0x01,0x7c,0xf8,0x00,0x3e,0x7c,0xf0,0xff,0xff,0xfc,
    0xff,0xff,0xfe,0xff,0x7f,0xff,0xff,0x3f,0xff,0xff,0x0f,0xf8,0xf8,0x00,0x7c,0x7c,
    0x00,0x3e,0x3e,0x80,0x1f,0x1f,0xc0,0x87,0x0f,0xe0,0xc3,0x07,0xf0,0xe1,0x03,0xf8,
    0xf0,0x01,0x7c,0xf8,0x00,0x3e,0x7c,0x00,0x0e,0x1e,0x00,0x00,0x0e,0x00,0xe0,0x03,
    0x00,0x7c,0x00,0x80,0x0f,0x00,0xf0,0x01,0xc0,0xff,0x0f,0xfe,0xff,0xe3,0xff,0x7f,
    0xfe,0xff,0xef,0x1f,0xf8,0xfd,0x00,0xbe,0x0f,0xc0,0xf7,0x01,0x70,0x7e,0x00,0xc0,
    0x1f,0x00,0xf0,0x3f,0x00,0xfe,0x7f,0x80,0xff,0x3f,0xc0,0xff,0x1f,0xe0,0xff,0x07,
    0xc0,0xff,0x00,0x80,0xff,0x01,0xc0,0x3f,0x00,0xf8,0x0f,0x00,0xff,0x01,0xf0,0x7f,
    0x00,0xfe,0x3f,0xf0,0xf7,0xff,0xff,0xfe,0xff,0xcf,0xff,0x7f,0xb8,0xff,0x07,0x00,
    0x1f,0x00,0xe0,0x03,0x00,0x7c,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3e,0x00,0xc0,
    0x07,0x00,0x70,0x00,0xe0,0x07,0x00,0xf8,0x07,0x00,0xfe,0x07,0x80,0x87,0x07,0xe0,
    0x81,0x07,0x70,0x80,0x03,0x38,0xc0,0x01,0x1c,0xe0,0x00,0x0e,0x70,0x00,0x0f,0x3c,
    0x00,0x0f,0x0f,0x00,0xff,0x03,0x04,0xff,0xc0,0x07,0x3f,0xfe,0x03,0xe0,0x7f,0x00,
    0xfe,0x07,0xe0,0x7f,0x00,0xfe,0x07,0x80,0x7f,0xfc,0xc0,0x07,0xff,0x00,0xc0,0xff,
    0x00,0xf0,0xf0,0x00,0x3c,0xf0,0x00,0x0e,0x70,0x00,0x07,0x38,0x80,0x03,0x1c,0xc0,
    0x01,0x0e,0xe0,0x81,0x07,0xe0,0xe1,0x01,0xe0,0x7f,0x00,0xe0,0x1f,0x00,0xe0,0x07,
    0x00,0x9f,0x00,0xf0,0x7f,0x00,0xfe,0x3f,0xc0,0xff,0x0f,0xf0,0xff,0x01,0x7e,0x3c,
    0x80,0x0f,0x00,0xe0,0x03,0x00,0xf8,0x00,0x00,0x7e,0x00,0x00,0x1f,0x00,0xc0,0x0f,
    0x00,0xe0,0x07,0x00,0xfe,0x01,0xc0,0xff,0xf8,0xf0,0x7f,0x7e,0xfe,0x9f,0x9f,0xdf,
    0xef,0xf7,0xe3,0xff,0x7d,0xf8,0x1f,0x1f,0xfc,0xc7,0x07,0xfe,0xf1,0x81,0x3f,0xfc,
    0xe1,0x3f,0xfe,0xff,0x9f,0xff,0xff,0xcf,0xff,0xff,0xe1,0xff,0x3e,0xe0,0x1f,0x00,
    0xbf,0x9f,0xcf,0xe7,0xf3,0xf9,0x7c,0x3e,0x0e,0x87,0xc3,0xe1,0x70,0x00,0x00,0x01,
    0x1e,0xf8,0xc1,0x0f,0x3f,0xf8,0xe1,0x07,0x1f,0xfc,0xe0,0x03,0x1f,0x7c,0xe0,0x03,
    0x1f,0xf8,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x3e,0xf0,0x81,0x0f,0x7c,0xe0,0x03,0x1f,
    0xf0,0x81,0x0f,0x7c,0xe0,0x07,0x3e,0xf0,0x81,0x1f,0xf8,0xc0,0x0f,0x7c,0xe0,0x07,
    0x7e,0xf0,0x03,0x0f,0x30,0x04,0xf0,0xc0,0x0f,0x7e,0xe0,0x07,0x3f,0xf0,0x03,0x1f,
    0xf8,0x81,0x0f,0x7c,0xe0,0x07,0x3e,0xf0,0x81,0x0f,0xfc,0xc0,0x07,0x3e,0xf0,0x81,
    0x0f,0x7c,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,0x3e,0xf8,0xc0,0x07,
    0x3f,0xf8,0xe0,0x87,0x1f,0xfc,0xf0,0x83,0x1f,0x78,0x80,0x01,0x00,0x0e,0x00,0xe0,
    0x03,0x00,0x7c,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3e,0x80,0xc3,0x87,0xfb,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0x3f,0xf8,0xff,0x00,0xfc,0x07,0x80,0xff,
    0x00,0xf8,0x3f,0x80,0xdf,0x0f,0xf8,0xfb,0x03,0x3f,0x7e,0xe0,0x83,0x0f,0x3c,0xe0,
    0x01,0x02,0x08,0x00,0x00,0x38,0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,0x00,0xe0,0x03,
    0x00,0xc0,0x07,0x00,0x80,0x0f,0x00,0x00,0x1f,0x00,0x00,0x3e,0x00,0x00,0x7c,0x00,
    0x00,0xf8,0x00,0x00,0xf0,0x01,0xf0,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x7f,0xff,0xff,0x7f,0x00,0x7c,0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,0x00,
    0xe0,0x03,0x00,0xc0,0x07,0x00,0x80,0x0f,0x00,0x00,0x1f,0x00,0x00,0x3e,0x00,0x00,
    0x7c,0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,0x00,0xc0,0x01,0x00,0xf8,0xe3,0x87,0x1f,
    0x3e,0xfc,0xf0,0xc1,0x87,0x0f,0x3e,0x78,0xe0,0xc1,0x03,0x0f,0x1c,0x70,0x00,0xfe,
    0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0x01,
    0x3c,0xdf,0xff,0xff,0xf7,0xf9,0x00,0x00,0x00,0x08,0x00,0x80,0x0f,0x00,0xe0,0x03,
    0x00,0xfc,0x00,0x00,0x1f,0x00,0xe0,0x07,0x00,0xf8,0x00,0x00,0x3f,0x00,0xc0,0x07,
    0x00,0xf8,0x01,0x00,0x3e,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x7c,0x00,0x80,0x1f,
    0x00,0xe0,0x03,0x00,0xfc,0x00,0x00,0x1f,0x00,0xe0,0x07,0x00,0xf8,0x00,0x00,0x3f,
    0x00,0xc0,0x07,0x00,0xf8,0x01,0x00,0x3e,0x00,0xc0,0x0f,0x00,0xf0,0x01,0x00,0x7e,
    0x00,0x80,0x0f,0x00,0xf0,0x03,0x00,0x7c,0x00,0x00,0x1f,0x00,0xe0,0x07,0x00,0xf8,
    0x00,0x00,0x3f,0x00,0xc0,0x07,0x00,0xf8,0x01,0x00,0x3e,0x00,0xc0,0x0f,0x00,0xf0,
    0x01,0x00,0x78,0x00,0x00,0x04,0x00,0x00,0x00,0x3f,0x00,0xf0,0x7f,0x00,0xff,0x3f,
    0xe0,0xff,0x1f,0xf8,0xff,0x07,0x7f,0xf8,0xe3,0x07,0xf8,0xf9,0x01,0x7e,0x3e,0x00,
    0xdf,0x0f,0xc0,0xff,0x01,0xe0,0x7f,0x00,0xf8,0x1f,0x00,0xfe,0x07,0x80,0xff,0x01,
    0xe0,0x7f,0x00,0xf8,0x1f,0x00,0xfe,0x07,0x80,0xff,0x01,0xe0,0x7f,0x00,0xf8,0x1f,
    0x00,0xfe,0x07,0x80,0xff,0x01,0xe0,0xff,0x00,0xfc,0x3e,0x00,0x9f,0x1f,0xe0,0xe7,
    0x07,0xf8,0xf1,0x87,0x3f,0xf8,0xff,0x07,0xfe,0xff,0x01,0xff,0x3f,0x80,0xff,0x03,
    0x80,0x3f,0x00,0x80,0x1f,0x00,0xf8,0x03,0xc0,0x7f,0x00,0xfc,0x0f,0xe0,0xff,0x01,
    0xfe,0x3f,0xc0,0xcf,0x07,0xf8,0xf8,0x00,0x06,0x1f,0x00,0xe0,0x03,0x00,0x7c,0x00,
    0x80,0x0f,0x00,0xf0,0x01,0x00,0x3e,0x00,0xc0,0x07,0x00,0xf8,0x00,0x00,0x1f,0x00,
    0xe0,0x03,0x00,0x7c,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3e,0x00,0xc0,0x07,0x00,
    0xf8,0x00,0x00,0x1f,0x00,0xe0,0x03,0xf8,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xbf,0xff,0xff,0x03,0x00,0x7f,0x00,0xf0,0x7f,0x00,0xff,0x7f,0xe0,0xff,0x3f,
    0xfc,0xff,0x0f,0x3f,0xf0,0xe7,0x07,0xf0,0xf9,0x00,0xfc,0x3e,0x00,0x3e,0x07,0x80,
    0x0f,0x00,0xe0,0x03,0x00,0xfc,0x00,0x00,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x80,
    0x3f,0x00,0xf0,0x07,0x00,0xfe,0x00,0xe0,0x1f,0x00,0xfc,0x03,0x80,0x7f,0x00,0xf0,
    0x0f,0x00,0xfe,0x00,0xc0,0x1f,0x00,0xfc,0x03,0x9c,0x7f,0x00,0xff,0x0f,0xe0,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x7f,0x00,
    0xf0,0xff,0x01,0xfe,0xff,0x81,0xff,0xff,0xc1,0xff,0xff,0xf1,0x07,0xfe,0xf0,0x00,
    0xfc,0x38,0x00,0x7c,0x00,0x00,0x3e,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xe0,0x03,
    0x00,0xf8,0x01,0xf0,0x7f,0x00,0xfc,0x1f,0x00,0xfe,0x07,0x00,0xff,0x07,0x00,0xff,
    0x07,0x00,0xf0,0x07,0x00,0xe0,0x07,0x00,0xe0,0x03,0x00,0xe0,0x03,0x00,0xf0,0x01,
    0x00,0xf8,0x00,0x00,0x7c,0x00,0x00,0xbf,0x01,0xc0,0xef,0x07,0xf8,0xf7,0xff,0xff,
    0xf9,0xff,0xff,0xf8,0xff,0x3f,0xf8,0xff,0x07,0xe0,0x7f,0x00,0x00,0xf8,0x03,0x00,
    0x7f,0x00,0xf0,0x0f,0x00,0xff,0x01,0xe0,0x3f,0x00,0xfe,0x07,0xc0,0xff,0x00,0xfc,
    0x1f,0x80,0xef,0x03,0xf8,0x7c,0x80,0x9f,0x0f,0xf0,0xf1,0x01,0x3f,0x3e,0xe0,0xc3,
    0x07,0x3e,0xf8,0xc0,0x07,0x1f,0x7c,0xe0,0xc3,0x07,0x7c,0xf8,0x80,0x8f,0xff,0xff,
    0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xe0,0x03,0x00,0x7c,
    0x00,0xf8,0x3f,0x80,0xff,0x0f,0xf0,0xff,0x01,0xfe,0x3f,0x80,0xff,0x03,0xf8,0xff,
    0x0f,0xfc,0xff,0x0f,0xfe,0xff,0x07,0xff,0xff,0x83,0xff,0xff,0xc0,0x07,0x00,0xe0,
    0x03,0x00,0xf0,0x01,0x00,0xf8,0x00,0x00,0x7c,0x00,0x00,0xbe,0x3f,0x00,0xff,0x7f,
    0x80,0xff,0x7f,0xc0,0xff,0x7f,0xe0,0xff,0x7f,0xf0,0x07,0x7f,0x70,0x00,0x3f,0x00,
    0x00,0x3f,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x07,0x00,0xe0,0x03,0x00,0xf0,
    0x01,0x00,0xf8,0x00,0x00,0x7e,0x0f,0x80,0xdf,0x1f,0xf0,0xef,0xff,0xff,0xe3,0xff,
    0xff,0xe0,0xff,0x3f,0xe0,0xff,0x0f,0x80,0xff,0x00,0x00,0xe0,0x0f,0x00,0xff,0x0f,
    0xf0,0xff,0x03,0xfe,0xff,0xc0,0xff,0x1f,0xf8,0x0f,0x00,0x7f,0x00,0xe0,0x0f,0x00,
    0xf8,0x01,0x00,0x3f,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x7e,0x7c,0x80,0xcf,0x7f,
    0xe0,0xfb,0x7f,0xf8,0xff,0x3f,0xff,0xff,0xcf,0xff,0xf0,0xe7,0x1f,0xf8,0xf9,0x01,
    0xfc,0x7e,0x00,0xbe,0x0f,0x80,0xef,0x03,0xe0,0xfb,0x01,0xf8,0x7e,0x00,0x3e,0x1f,
    0xc0,0xcf,0x0f,0xf0,0xe1,0x0f,0x7f,0xf8,0xff,0x1f,0xfc,0xff,0x03,0xfe,0x7f,0x00,
    0xff,0x0f,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x3f,0x00,0xfe,0x03,0xc0,0x77,0x00,0xfc,0x00,0x80,0x0f,0x00,0xf0,0x01,
    0x00,0x3f,0x00,0xe0,0x03,0x00,0x7c,0x00,0xc0,0x0f,0x00,0xf8,0x00,0x00,0x1f,0x00,
    0xf0,0x03,0x00,0x3e,0x00,0xc0,0x07,0x00,0xfc,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,
    0x3f,0x00,0xe0,0x03,0x00,0x7e,0x00,0xc0,0x07,0x00,0xf8,0x00,0x80,0x1f,0x00,0xf0,
    0x01,0x00,0x3e,0x00,0x80,0x03,0x00,0x80,0x1f,0x00,0xff,0x0f,0xf8,0xff,0xc1,0xff,
    0x3f,0xfe,0xff,0xe7,0x0f,0x7f,0x3f,0xc0,0xff,0x01,0xf8,0x1f,0x80,0xff,0x01,0xf8,
    0x1f,0x80,0xff,0x01,0xf8,0x3e,0xc0,0xc7,0x0f,0x3f,0xfc,0xff,0x01,0xff,0x0f,0xf0,
    0xff,0x80,0xff,0x1f,0xfc,0xff,0xe3,0x0f,0x7f,0x3e,0xc0,0xf7,0x03,0xfc,0x1f,0x80,
    0xff,0x01,0xf8,0x1f,0x80,0xff,0x01,0xf8,0x3f,0xc0,0xef,0x0f,0x7e,0xfe,0xff,0xc7,
    0xff,0x3f,0xf8,0xff,0x01,0xff,0x0f,0xc0,0x1f,0x00,0x80,0x3f,0x00,0xfc,0x3f,0x80,
    0xff,0x1f,0xf0,0xff,0x0f,0xfe,0xff,0x87,0x3f,0xfc,0xe1,0x03,0xfc,0xfc,0x00,0x3e,
    0x1f,0x80,0xdf,0x07,0xe0,0xf7,0x01,0xf0,0x7d,0x00,0x7c,0x1f,0x80,0xdf,0x0f,0xf0,
    0xe7,0x03,0xfe,0xf9,0xc3,0x7f,0xfc,0xff,0x1f,0xff,0xff,0x87,0xff,0xf7,0x81,0xff,
    0x7c,0x80,0x8f,0x1f,0x00,0xe0,0x07,0x00,0xfc,0x00,0x00,0x3f,0x00,0xe0,0x07,0x00,
    0xfc,0x01,0x80,0x3f,0x00,0xfc,0x07,0xfe,0xff,0xc0,0xff,0x1f,0xf0,0xff,0x03,0xfc,
    0x3f,0x00,0xfc,0x03,0x00,0x3c,0xdf,0xff,0xff,0xf7,0xfb,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x3c,0xdf,0xff,0xff,0xf7,0xf9,0x00,0xe0,0xc0,0x87,0x3f,0xfe,0xf8,
    0xc3,0x07,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xf8,0xe1,
    0x87,0x0f,0x3e,0x7c,0xf0,0xc1,0x03,0x0f,0x1e,0x78,0xe0,0xc0,0x03,0x0f,0x18,0x00,
    0x00,0x00,0xe0,0x00,0x00,0xf0,0x03,0x00,0xf8,0x07,0x00,0xfc,0x0f,0x00,0xfe,0x07,
    0x00,0xff,0x03,0x80,0xff,0x01,0xc0,0xff,0x01,0xe0,0xff,0x00,0xf0,0x7f,0x00,0xf8,
    0x3f,0x00,0xf0,0x3f,0x00,0x80,0xff,0x01,0x00,0xfc,0x0f,0x00,0xe0,0x7f,0x00,0x00,
    0xff,0x03,0x00,0xf8,0x1f,0x00,0xc0,0xff,0x00,0x00,0xfe,0x07,0x00,0xf0,0x0f,0x00,
    0x80,0x1f,0x00,0x00,0x3c,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xfe,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xf8,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,
    0xff,0xff,0x07,0x0e,0x00,0x00,0x7e,0x00,0x00,0xfc,0x01,0x00,0xf8,0x0f,0x00,0xc0,
    0x7f,0x00,0x00,0xff,0x03,0x00,0xf8,0x1f,0x00,0xc0,0xff,0x00,0x00,0xfe,0x07,0x00,
    0xf0,0x3f,0x00,0x80,0xff,0x01,0x00,0xfe,0x0f,0x00,0xff,0x03,0x80,0xff,0x01,0xc0,
    0xff,0x00,0xe0,0x7f,0x00,0xf0,0x3f,0x00,0xf8,0x1f,0x00,0xf8,0x0f,0x00,0xf8,0x07,
    0x00,0xf0,0x03,0x00,0xe0,0x01,0x00,0x00,0xc0,0x3f,0x00,0xff,0x1f,0xf8,0xff,0x8f,
    0xff,0xff,0xf3,0xff,0xff,0xfe,0xc0,0xdf,0x07,0xe0,0xff,0x00,0xf8,0x1f,0x00,0xdf,
    0x01,0xe0,0x03,0x00,0x7c,0x00,0xc0,0x0f,0x00,0xfe,0x00,0xf0,0x1f,0x80,0xff,0x01,
    0xfc,0x1f,0x00,0xff,0x00,0xe0,0x07,0x00,0x3c,0x00,0x80,0x07,0x00,0x60,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0xf0,0x01,0x00,0x7f,0x00,0xe0,
    0x0f,0x00,0xfc,0x01,0x00,0x1f,0x00,0xe0,0x03,0x00,0x00,0x3f,0x00,0xf8,0x1f,0x80,
    0xff,0x07,0xf8,0xff,0x81,0x1f,0x7e,0xf8,0x00,0x0f,0x1f,0xe0,0xf3,0x01,0x78,0x1e,
    0x00,0xcf,0x03,0xe0,0x7d,0x00,0xbc,0x07,0xf0,0xf7,0x80,0xff,0x1e,0xf8,0xdf,0x83,
    0xff,0x7b,0xf8,0x79,0x0f,0x0f,0xef,0xf1,0xe0,0x3d,0x1e,0xbc,0xc7,0x83,0xf7,0x78,
    0xf0,0x1e,0x1f,0xde,0xc3,0xc7,0x7b,0xf8,0x7f,0x0f,0xfe,0xff,0x81,0xff,0x3f,0xc0,
    0xbf,0x07,0x00,0xf0,0x01,0x00,0x3c,0x00,0x80,0x07,0x00,0xf0,0x01,0x00,0x3c,0x00,
    0x82,0x0f,0xe0,0xe0,0x07,0x3f,0xf8,0xff,0x03,0xff,0x7f,0x80,0xff,0x07,0xc0,0x1f,
    0x00,0xe0,0xff,0x07,0x00,0xe0,0xff,0x0f,0x00,0xe0,0xff,0x0f,0x00,0xe0,0xff,0x1f,
    0x00,0xc0,0xff,0x1f,0x00,0x00,0xf8,0x1f,0x00,0x00,0xfc,0x3f,0x00,0x00,0xfc,0x3f,
    0x00,0x00,0x7e,0x7e,0x00,0x00,0x7e,0x7e,0x00,0x00,0x3e,0x7c,0x00,0x00,0x3f,0xfc,
    0x00,0x00,0x1f,0xf8,0x00,0x80,0x1f,0xf8,0x01,0x80,0x0f,0xf0,0x01,0x80,0x0f,0xf0,
    0x01,0xc0,0xff,0xff,0x03,0xc0,0xff,0xff,0x03,0xe0,0xff,0xff,0x07,0xe0,0xff,0xff,
    0x07,0xe0,0xff,0xff,0x07,0xf0,0x03,0xc0,0x0f,0xf0,0x01,0x80,0x0f,0xf8,0x01,0x80,
    0x1f,0xfe,0x0f,0xf0,0x7f,0xff,0x1f,0xf8,0xff,0xff,0x1f,0xf8,0xff,0xff,0x1f,0xf8,
    0xff,0xfe,0x0f,0xf0,0x7f,0xfe,0xff,0x07,0xf8,0xff,0xff,0xc0,0xff,0xff,0x0f,0xfe,
    0xff,0xff,0xe0,0xff,0xff,0x0f,0xf8,0x00,0xfe,0xc0,0x07,0xe0,0x07,0x3e,0x00,0x3e,
    0xf0,0x01,0xf0,0x81,0x0f,0x80,0x0f,0x7c,0x00,0x7e,0xe0,0x03,0xfc,0x01,0xff,0xff,
    0x07,0xf8,0xff,0x1f,0xc0,0xff,0xff,0x01,0xfe,0xff,0x1f,0xf0,0xff,0xff,0x81,0x0f,
    0xc0,0x1f,0x7c,0x00,0xf8,0xe1,0x03,0xc0,0x0f,0x1f,0x00,0x7c,0xf8,0x00,0xe0,0xc3,
    0x07,0x00,0x1f,0x3e,0x00,0xfe,0xfe,0xff,0xff,0xfb,0xff,0xff,0xdf,0xff,0xff,0x7f,
    0xfe,0xff,0xff,0xe0,0xff,0xff,0x01,0x00,0xfc,0x01,0x00,0xfc,0x7f,0x0e,0xf0,0xff,
    0xff,0xe0,0xff,0xff,0x07,0xff,0xff,0x3f,0xfc,0x03,0xff,0xf1,0x07,0xe0,0xcf,0x1f,
    0x00,0x7e,0x7e,0x00,0xe0,0xf3,0x01,0x00,0xdf,0x0f,0x00,0xf8,0x3e,0x00,0x80,0xf3,
    0x01,0x00,0x80,0x0f,0x00,0x00,0x7c,0x00,0x00,0xe0,0x03,0x00,0x00,0x1f,0x00,0x00,
    0xf8,0x00,0x00,0xc0,0x07,0x00,0x00,0x3e,0x00,0x00,0xf0,0x01,0x00,0x00,0x1f,0x00,
    0x00,0xf8,0x01,0x00,0xc0,0x0f,0x00,0x70,0xfc,0x01,0xe0,0xc7,0x3f,0xc0,0x3f,0xfe,
    0xff,0xff,0xe0,0xff,0xff,0x07,0xfc,0xff,0x0f,0x80,0xff,0x1f,0x00,0xf0,0x1f,0x00,
    0xfe,0xff,0x01,0xfc,0xff,0x1f,0xf0,0xff,0xff,0xc1,0xff,0xff,0x0f,0xfe,0xff,0x7f,
    0xe0,0x03,0xfc,0x83,0x0f,0xc0,0x0f,0x3e,0x00,0x7e,0xf8,0x00,0xf0,0xe1,0x03,0xc0,
    0x87,0x0f,0x00,0x3f,0x3e,0x00,0xf8,0xf8,0x00,0xe0,0xe3,0x03,0x80,0x8f,0x0f,0x00,
    0x3e,0x3e,0x00,0xf8,0xf8,0x00,0xe0,0xe3,0x03,0x80,0x8f,0x0f,0x00,0x3e,0x3e,0x00,
    0xfc,0xf8,0x00,0xf0,0xe1,0x03,0xe0,0x87,0x0f,0xc0,0x1f,0x3e,0x80,0x3f,0xfe,0xff,
    0x7f,0xfc,0xff,0xff,0xf0,0xff,0xff,0xc1,0xff,0xff,0x03,0xfe,0xff,0x01,0x00,0xfe,
    0xff,0xff,0xfd,0xff,0xff,0xf7,0xff,0xff,0xdf,0xff,0xff,0x7f,0xfe,0xff,0xff,0xc1,
    0x07,0xc0,0x07,0x1f,0x00,0x1f,0x7c,0x00,0x7c,0xf0,0x01,0xf0,0xc1,0x07,0xc7,0x07,
    0x1f,0x3e,0x0e,0x7c,0xf8,0x00,0xf0,0xff,0x03,0xc0,0xff,0x0f,0x00,0xff,0x3f,0x00,
    0xfc,0xff,0x00,0xf0,0xff,0x03,0xc0,0x87,0x0f,0x00,0x1f,0x3e,0x1c,0x7c,0xf8,0xf8,
    0xf0,0xc1,0xe1,0xc3,0x07,0x80,0x0f,0x1f,0x00,0x3e,0x7c,0x00,0xf8,0xfe,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0x03,0xfe,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xc3,0x07,
    0x80,0x0f,0x1f,0x00,0x3e,0x7c,0x00,0xf8,0xf0,0xc1,0xe1,0xc3,0x87,0x8f,0x0f,0x1f,
    0x3e,0x1c,0x7c,0xf8,0x00,0xf0,0xff,0x03,0xc0,0xff,0x0f,0x00,0xff,0x3f,0x00,0xfc,
    0xff,0x00,0xf0,0xff,0x03,0xc0,0x87,0x0f,0x00,0x1f,0x3e,0x00,0x7c,0x70,0x00,0xf0,
    0x01,0x00,0xc0,0x07,0x00,0x00,0x1f,0x00,0x00,0x7c,0x00,0x00,0xfe,0xff,0x00,0xfc,
    0xff,0x07,0xf0,0xff,0x1f,0xc0,0xff,0x7f,0x00,0xfe,0xff,0x00,0x00,0x00,0xfc,0xe3,
    0x00,0xfc,0x7f,0x0f,0xf0,0xff,0x7f,0xe0,0xff,0xff,0x83,0xff,0xff,0x1f,0xfc,0x03,
    0xff,0xf0,0x07,0xe0,0xc7,0x0f,0x00,0x3e,0x7e,0x00,0xf0,0xf1,0x01,0x80,0xcf,0x0f,
    0x00,0x38,0x3e,0x00,0x00,0xf0,0x01,0x00,0x80,0x0f,0x00,0x00,0x7c,0x00,0x00,0xe0,
    0x03,0x00,0x00,0x1f,0xe0,0xff,0xfb,0x80,0xff,0xff,0x07,0xfc,0xff,0x3f,0xe0,0xff,
    0xff,0x01,0xfe,0xbf,0x1f,0x00,0xf8,0xf8,0x00,0xc0,0xc7,0x0f,0x00,0x3e,0xfc,0x00,
    0xf0,0xe1,0x1f,0xe0,0x0f,0xfe,0xff,0x7f,0xe0,0xff,0xff,0x03,0xfe,0xff,0x0f,0xc0,
    0xff,0x1f,0x00,0xf0,0x1f,0x00,0xfc,0x07,0xfe,0xe3,0xff,0xf0,0x7f,0xfe,0x0f,0xff,
    0xe7,0xff,0xf0,0x7f,0xfc,0x07,0xfe,0x03,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,
    0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,
    0xf0,0xff,0xff,0x00,0xff,0xff,0x0f,0xf0,0xff,0xff,0x00,0xff,0xff,0x0f,0xf0,0xff,
    0xff,0x00,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,
    0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xfe,0x07,0xfe,0xf7,0xff,0xf0,
    0xff,0xff,0x0f,0xff,0xff,0xff,0xf0,0xff,0xfe,0x07,0xfe,0x07,0xfe,0xff,0xef,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x00,0x3e,0x00,0xc0,0x07,0x00,0xf8,
    0x00,0x00,0x1f,0x00,0xe0,0x03,0x00,0x7c,0x00,0x80,0x0f,0x00,0xf0,0x01,0x00,0x3e,
    0x00,0xc0,0x07,0x00,0xf8,0x00,0x00,0x1f,0x00,0xe0,0x03,0x00,0x7c,0x00,0x80,0x0f,
    0x00,0xf0,0x01,0x00,0x3e,0x00,0xc0,0x07,0x00,0xf8,0x00,0xfe,0xff,0xef,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x00,0x00,0xff,0xff,0x03,0xfc,0xff,0x3f,
    0xe0,0xff,0xff,0x01,0xff,0xff,0x0f,0xf0,0xff,0x3f,0x00,0x80,0x0f,0x00,0x00,0x7c,
    0x00,0x00,0xe0,0x03,0x00,0x00,0x1f,0x00,0x00,0xf8,0x00,0x00,0xc0,0x07,0x00,0x00,
    0x3e,0x00,0x00,0xf0,0x01,0x00,0x80,0x0f,0x00,0x00,0x7c,0x00,0x00,0xe0,0x03,0x0e,
    0x00,0x1f,0xf8,0x00,0xf8,0xc0,0x07,0xc0,0x07,0x3e,0x00,0x3e,0xf0,0x01,0xf0,0x81,
    0x0f,0x80,0x0f,0x7c,0x00,0x7e,0xe0,0x03,0xf0,0x01,0xff,0xe0,0x0f,0xf8,0xff,0x3f,
    0xc0,0xff,0xff,0x01,0xfc,0xff,0x07,0x00,0xff,0x0f,0x00,0xc0,0x1f,0x00,0x00,0xfe,
    0x1f,0xfe,0xe3,0xff,0xe7,0xff,0xfc,0xff,0xfc,0x9f,0xff,0x9f,0xff,0xe3,0xff,0xe1,
    0x3f,0xe0,0x03,0xfc,0x01,0x7c,0xc0,0x0f,0x80,0x0f,0xfe,0x00,0xf0,0xe1,0x0f,0x00,
    0x3e,0xfe,0x00,0xc0,0xe7,0x0f,0x00,0xf8,0xfe,0x00,0x00,0xff,0x0f,0x00,0xe0,0xff,
    0x03,0x00,0xfc,0xff,0x00,0x80,0xff,0x3f,0x00,0xf0,0xe7,0x0f,0x00,0x7e,0xf8,0x03,
    0xc0,0x07,0x7e,0x00,0xf8,0x80,0x1f,0x00,0x1f,0xf0,0x03,0xe0,0x03,0xfc,0x00,0x7c,
    0x80,0x1f,0x80,0x0f,0xe0,0x07,0xfe,0x1f,0xfc,0xef,0xff,0x07,0xff,0xff,0xff,0xe0,
    0xff,0xff,0x1f,0xf8,0xef,0xff,0x01,0xff,0x00,0xfe,0xff,0x00,0xf8,0xff,0x0f,0xc0,
    0xff,0x7f,0x00,0xfe,0xff,0x03,0xe0,0xff,0x0f,0x00,0xe0,0x03,0x00,0x00,0x1f,0x00,
    0x00,0xf8,0x00,0x00,0xc0,0x07,0x00,0x00,0x3e,0x00,0x00,0xf0,0x01,0x00,0x80,0x0f,
    0x00,0x00,0x7c,0x00,0x00,0xe0,0x03,0x00,0x00,0x1f,0x00,0x00,0xf8,0x00,0x00,0xc0,
    0x07,0x80,0x03,0x3e,0x00,0x3e,0xf0,0x01,0xf0,0x81,0x0f,0x80,0x0f,0x7c,0x00,0x7c,
    0xe0,0x03,0xe0,0x03,0x1f,0x00,0x1f,0xf8,0x00,0xf8,0xfe,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x7f,0xfc,0x01,0x80,0x3f,0xfe,
    0x03,0xc0,0x7f,0xfe,0x03,0xc0,0x7f,0xfe,0x07,0xe0,0x7f,0xfc,0x07,0xe0,0x3f,0xf8,
    0x0f,0xf0,0x1f,0xf8,0x0f,0xf0,0x1f,0xf8,0x1f,0xf8,0x1f,0xf8,0x1f,0xf8,0x1f,0xf8,
    0x3f,0xfc,0x1f,0xf8,0x3f,0xfc,0x1f,0xf8,0x7e,0x7c,0x1f,0xf8,0x7e,0x7e,0x1f,0xf8,
    0x7c,0x3e,0x1f,0xf8,0xfc,0x3f,0x1f,0xf8,0xf8,0x1f,0x1f,0xf8,0xf8,0x1f,0x1f,0xf8,
    0xf0,0x1f,0x1f,0xf8,0xf0,0x0f,0x1f,0xf8,0xe0,0x0f,0x1f,0xf8,0xe0,0x07,0x1f,0xf8,
    0xc0,0x07,0x1f,0xf8,0x00,0x00,0x1f,0xf8,0x00,0x00,0x1f,0xfe,0x0f,0xf0,0x7f,0xff,
    0x1f,0xf8,0xff,0xff,0x1f,0xf8,0xff,0xff,0x1f,0xf8,0xff,0xfe,0x0f,0xf0,0x7f,0xfe,
    0x01,0xfc,0xdf,0xff,0x80,0xff,0xff,0x7f,0xe0,0xff,0xff,0x1f,0xf8,0xff,0xfe,0x0f,
    0xfc,0x1f,0xfc,0x07,0xf0,0x01,0xff,0x01,0x7c,0xc0,0xff,0x00,0x1f,0xf0,0x7f,0xc0,
    0x07,0xfc,0x1f,0xf0,0x01,0xdf,0x0f,0x7c,0xc0,0xf7,0x07,0x1f,0xf0,0xf9,0xc1,0x07,
    0x7c,0xfc,0xf0,0x01,0x1f,0x7f,0x7c,0xc0,0x87,0x1f,0x1f,0xf0,0xc1,0xcf,0x07,0x7c,
    0xf0,0xf7,0x01,0x1f,0xf8,0x7d,0xc0,0x07,0xfc,0x1f,0xf0,0x01,0xff,0x07,0x7c,0x80,
    0xff,0x01,0x1f,0xc0,0x7f,0xc0,0x07,0xf0,0x1f,0xfc,0x1f,0xf8,0x87,0xff,0x0f,0xfc,
    0xe1,0xff,0x03,0x7f,0xf8,0xff,0x80,0x1f,0xfc,0x1f,0xc0,0x07,0x00,0xfc,0x01,0x00,
    0xf0,0xff,0x00,0xc0,0xff,0x3f,0x00,0xfe,0xff,0x07,0xf0,0xff,0xff,0x80,0x7f,0xe0,
    0x1f,0xf8,0x01,0xf8,0xc3,0x0f,0x00,0x3f,0x7e,0x00,0xe0,0xe7,0x07,0x00,0x7e,0x3e,
    0x00,0xc0,0xf7,0x03,0x00,0xfc,0x1f,0x00,0x80,0xff,0x01,0x00,0xf8,0x1f,0x00,0x80,
    0xff,0x01,0x00,0xf8,0x1f,0x00,0x80,0xff,0x01,0x00,0xf8,0x1f,0x00,0x80,0xff,0x03,
    0x00,0xfc,0x3e,0x00,0xc0,0xe7,0x07,0x00,0x7e,0x7e,0x00,0xe0,0xc7,0x0f,0x00,0x3f,
    0xf8,0x01,0xf8,0x81,0x7f,0xe0,0x1f,0xf0,0xff,0xff,0x00,0xfe,0xff,0x07,0xc0,0xff,
    0x3f,0x00,0xf0,0xff,0x00,0x00,0xfc,0x01,0x00,0xfe,0xff,0x03,0xfe,0xff,0x3f,0xfc,
    0xff,0xff,0xf8,0xff,0xff,0xe3,0xff,0xff,0x0f,0x3e,0xc0,0x1f,0x7c,0x00,0x7e,0xf8,
    0x00,0xf8,0xf0,0x01,0xf0,0xe1,0x03,0xe0,0xc3,0x07,0xc0,0x87,0x0f,0x80,0x0f,0x1f,
    0x80,0x1f,0x3e,0xc0,0x1f,0xfc,0xff,0x3f,0xf8,0xff,0x3f,0xf0,0xff,0x3f,0xe0,0xff,
    0x1f,0xc0,0xff,0x0f,0x80,0x0f,0x00,0x00,0x1f,0x00,0x00,0x3e,0x00,0x00,0x7c,0x00,
    0x00,0xf8,0x00,0x00,0xfe,0xff,0x00,0xfe,0xff,0x03,0xfc,0xff,0x07,0xf8,0xff,0x0f,
    0xe0,0xff,0x0f,0x00,0x00,0xfc,0x03,0x00,0xf0,0xff,0x00,0xc0,0xff,0x3f,0x00,0xfe,
    0xff,0x07,0xf0,0xff,0xff,0x80,0x7f,0xe0,0x1f,0xfc,0x01,0xf8,0xc3,0x0f,0x00,0x3f,
    0x7e,0x00,0xe0,0xe7,0x03,0x00,0x7e,0x3e,0x00,0xc0,0xf7,0x03,0x00,0xfc,0x1f,0x00,
    0x80,0xff,0x01,0x00,0xf8,0x1f,0x00,0x80,0xff,0x01,0x00,0xf8,0x1f,0x00,0x80,0xff,
    0x01,0x00,0xf8,0x3f,0x00,0xc0,0xef,0x03,0x00,0x7c,0x3e,0x00,0xc0,0xe7,0x07,0x00,
    0x7e,0xfc,0x00,0xf0,0xc3,0x1f,0x80,0x1f,0xf8,0x07,0xfe,0x01,0xff,0xff,0x0f,0xe0,
    0xff,0x7f,0x00,0xfc,0xff,0x03,0x00,0xff,0x0f,0x00,0xe0,0x3f,0x00,0x00,0x0f,0x00,
    0x00,0xf8,0x7f,0x78,0xc0,0xff,0xff,0x0f,0xfe,0xff,0xff,0xe0,0xff,0xff,0x07,0xfe,
    0xff,0x3f,0xc0,0x03,0xfc,0x00,0xfe,0xff,0x03,0xc0,0xff,0xff,0x07,0xf0,0xff,0xff,
    0x03,0xfc,0xff,0xff,0x01,0xfe,0xff,0xff,0x00,0x7c,0x80,0x3f,0x00,0x1f,0x80,0x1f,
    0xc0,0x07,0xc0,0x07,0xf0,0x01,0xf0,0x01,0x7c,0x00,0x7c,0x00,0x1f,0x80,0x1f,0xc0,
    0x07,0xf0,0x07,0xf0,0x01,0xff,0x00,0xfc,0xff,0x1f,0x00,0xff,0xff,0x03,0xc0,0xff,
    0x7f,0x00,0xf0,0xff,0x0f,0x00,0xfc,0xff,0x07,0x00,0x1f,0xf8,0x03,0xc0,0x07,0xfc,
    0x01,0xf0,0x01,0xfe,0x00,0x7c,0x00,0x3f,0x00,0x1f,0x80,0x1f,0xc0,0x07,0xe0,0x0f,
    0xfe,0x1f,0xf0,0xdf,0xff,0x0f,0xf8,0xff,0xff,0x03,0xfe,0xff,0xff,0x00,0xff,0xfe,
    0x1f,0xc0,0x1f,0x00,0xff,0x38,0xc0,0xff,0x7b,0xf0,0xff,0x7f,0xf8,0xff,0x7f,0xfc,
    0xff,0x7f,0xfc,0x81,0x7f,0x7e,0x00,0x7e,0x3e,0x00,0x7c,0x3e,0x00,0x7c,0x3e,0x00,
    0x7c,0x7e,0x00,0x38,0xfe,0x00,0x00,0xfc,0x07,0x00,0xfc,0xff,0x00,0xf8,0xff,0x07,
    0xf0,0xff,0x1f,0xc0,0xff,0x3f,0x00,0xfc,0x7f,0x00,0x80,0x7f,0x00,0x00,0xfe,0x0e,
    0x00,0xf8,0x1f,0x00,0xf8,0x1f,0x00,0xf8,0x1f,0x00,0xfc,0x7f,0x00,0xfc,0xff,0x81,
    0x7f,0xff,0xff,0x7f,0xff,0xff,0x3f,0xff,0xff,0x1f,0xce,0xff,0x07,0x00,0xff,0x01,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0x7f,0xf0,0x81,0xff,0xc1,0x07,0xfe,0x07,0x1f,0xf8,0x1f,0x7c,0xe0,0x7f,0xf0,0x81,
    0xff,0xc1,0x07,0xfe,0x07,0x1f,0xf8,0x0e,0x7c,0xc0,0x01,0xf0,0x01,0x00,0xc0,0x07,
    0x00,0x00,0x1f,0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xc0,0x07,0x00,0x00,0x1f,
    0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xc0,0x07,0x00,0x00,0x1f,0x00,0xe0,0xff,
    0x0f,0xc0,0xff,0x7f,0x00,0xff,0xff,0x01,0xfc,0xff,0x07,0xe0,0xff,0x0f,0x00,0xfe,
    0x0f,0xff,0xf7,0xff,0xf9,0xff,0xff,0x9f,0xff,0xff,0xff,0xf9,0xff,0xfe,0x0f,0xff,
    0x87,0x0f,0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,
    0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,
    0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,0xf8,0x00,
    0xf0,0x81,0x0f,0x00,0x1f,0xf8,0x00,0xf0,0x81,0x0f,0x00,0x1f,0xf0,0x01,0xf8,0x00,
    0x3f,0xc0,0x0f,0xf0,0x0f,0xff,0x00,0xfe,0xff,0x07,0xc0,0xff,0x3f,0x00,0xf8,0xff,
    0x01,0x00,0xfe,0x0f,0x00,0x80,0x1f,0x00,0xfe,0x0f,0xf0,0x7f,0xff,0x1f,0xf8,0xff,
    0xff,0x1f,0xf8,0xff,0xff,0x1f,0xf8,0xff,0xfe,0x0f,0xf0,0x7f,0xf0,0x01,0x80,0x0f,
    0xf0,0x01,0x80,0x0f,0xf0,0x03,0xc0,0x0f,0xe0,0x03,0xc0,0x07,0xe0,0x07,0xe0,0x07,
    0xc0,0x07,0xe0,0x03,0xc0,0x0f,0xe0,0x03,0xc0,0x0f,0xf0,0x01,0x80,0x1f,0xf0,0x01,
    0x80,0x1f,0xf8,0x01,0x00,0x1f,0xf8,0x00,0x00,0x3f,0xfc,0x00,0x00,0x3f,0x7c,0x00,
    0x00,0x7e,0x7c,0x00,0x00,0x7e,0x7e,0x00,0x00,0xfc,0x3e,0x00,0x00,0xfc,0x3f,0x00,
    0x00,0xf8,0x1f,0x00,0x00,0xf8,0x1f,0x00,0x00,0xf8,0x0f,0x00,0x00,0xf0,0x0f,0x00,
    0x00,0xf0,0x0f,0x00,0x00,0xe0,0x07,0x00,0x00,0xe0,0x07,0x00,0xfe,0x0f,0xf8,0xbf,
    0xff,0x0f,0xfe,0xff,0xff,0x07,0xff,0xff,0xff,0x83,0xff,0xef,0xff,0x80,0xff,0xc3,
    0x07,0x00,0xf8,0xe0,0x03,0x00,0x7c,0xf0,0xc1,0x0f,0x3e,0xf8,0xf0,0x07,0x1f,0xfc,
    0xf8,0x83,0x0f,0x7c,0xfc,0xc3,0x07,0x3e,0xfe,0xf1,0x01,0x9f,0xff,0xf8,0x80,0xcf,
    0xff,0x7c,0xc0,0xe7,0x7f,0x3e,0xe0,0xf3,0x3e,0x1f,0xf0,0x7d,0xbf,0x0f,0xf8,0xbf,
    0xdf,0x07,0xf8,0x8f,0xff,0x03,0xfc,0xc7,0xff,0x00,0xfe,0xe3,0x7f,0x00,0xff,0xe0,
    0x3f,0x80,0x7f,0xf0,0x1f,0xc0,0x3f,0xf8,0x0f,0xe0,0x0f,0xf8,0x07,0xe0,0x07,0xfc,
    0x03,0xf0,0x03,0xfe,0x00,0xf8,0x00,0x7e,0x00,0x7c,0x00,0x3f,0x00,0xfe,0x03,0xfe,
    0xf3,0x7f,0xf0,0x7f,0xff,0x07,0xff,0xf7,0x7f,0xf0,0x7f,0xfe,0x03,0xfe,0x83,0x3f,
    0xe0,0x0f,0xf0,0x07,0x7e,0x00,0x7e,0xf0,0x03,0xc0,0x8f,0x1f,0x00,0xf8,0xf9,0x00,
    0x00,0xff,0x0f,0x00,0xf0,0x7f,0x00,0x00,0xfe,0x03,0x00,0xc0,0x1f,0x00,0x00,0xfc,
    0x01,0x00,0xe0,0x3f,0x00,0x00,0xfe,0x03,0x00,0xf0,0x7f,0x00,0x80,0xff,0x0f,0x00,
    0xfc,0xf9,0x01,0xe0,0x0f,0x3f,0x00,0x7e,0xe0,0x07,0xf0,0x03,0x7e,0x80,0x1f,0xc0,
    0x0f,0xfe,0x07,0xfe,0xf7,0xff,0xf0,0xff,0xff,0x0f,0xff,0xff,0xff,0xf0,0xff,0xfe,
    0x07,0xfe,0x07,0xfe,0x03,0xfc,0xf7,0x7f,0xe0,0xff,0xff,0x07,0xfe,0xff,0x7f,0xe0,
    0xff,0xfe,0x03,0xfc,0x87,0x1f,0x80,0x0f,0xf0,0x03,0xfc,0x00,0x7e,0xe0,0x07,0xe0,
    0x07,0x3f,0x00,0xfc,0xf8,0x01,0x80,0xdf,0x1f,0x00,0xf8,0xfd,0x00,0x00,0xff,0x07,
    0x00,0xe0,0x3f,0x00,0x00,0xfe,0x03,0x00,0xc0,0x1f,0x00,0x00,0xf8,0x00,0x00,0x80,
    0x0f,0x00,0x00,0xf8,0x00,0x00,0x80,0x0f,0x00,0x00,0xf8,0x00,0x00,0x80,0x0f,0x00,
    0x00,0xf8,0x00,0x00,0x80,0x0f,0x00,0xc0,0xff,0x1f,0x00,0xfe,0xff,0x03,0xe0,0xff,
    0x3f,0x00,0xfe,0xff,0x03,0xc0,0xff,0x1f,0x00,0xfe,0xff,0x9f,0xff,0xff,0xe7,0xff,
    0xff,0xf9,0xff,0x7f,0xfe,0xff,0x9f,0x0f,0xf0,0xe7,0x03,0xfe,0xf8,0x80,0x1f,0x3e,
    0xf0,0x83,0x0f,0x7e,0xe0,0xc3,0x1f,0x70,0xf0,0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,
    0xf8,0x03,0x00,0x7f,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x07,0x3f,0xe0,0xe3,0x0f,0xf8,
    0xf8,0x01,0x3e,0x3f,0x80,0xef,0x07,0xe0,0xff,0x01,0xf8,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xfb,0xff,0xff,0xff,0xff,0xbf,
    0x0f,0x7c,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x3e,0xf0,0x81,0x0f,0x7c,0xe0,0x03,0x1f,
    0xf8,0xc0,0x07,0x3e,0xf0,0x81,0x0f,0x7c,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x3e,0xf0,
    0x81,0x0f,0x7c,0xe0,0x03,0x1f,0xf8,0xdf,0xff,0xff,0xff,0xff,0xff,0x01,0x04,0x00,
    0xc0,0x07,0x00,0xf0,0x01,0x00,0xfc,0x00,0x00,0x3e,0x00,0x80,0x1f,0x00,0xc0,0x07,
    0x00,0xf0,0x03,0x00,0xf8,0x00,0x00,0x7e,0x00,0x00,0x1f,0x00,0xc0,0x07,0x00,0xe0,
    0x03,0x00,0xf8,0x00,0x00,0x7e,0x00,0x00,0x1f,0x00,0xc0,0x0f,0x00,0xe0,0x03,0x00,
    0xf8,0x01,0x00,0x7c,0x00,0x00,0x3f,0x00,0x80,0x0f,0x00,0xe0,0x07,0x00,0xf0,0x01,
    0x00,0xfc,0x00,0x00,0x3e,0x00,0x80,0x1f,0x00,0xc0,0x07,0x00,0xf0,0x03,0x00,0xf8,
    0x00,0x00,0x3e,0x00,0x80,0x1f,0x00,0xc0,0x07,0x00,0xf0,0x03,0x00,0xf8,0x00,0x00,
    0x7e,0x00,0x00,0x1f,0x00,0xc0,0x0f,0x00,0xe0,0x03,0x00,0x78,0x00,0x00,0x08,0xfe,
    0xff,0xff,0xff,0xff,0xef,0x7f,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x3e,0xf0,0x81,0x0f,
    0x7c,0xe0,0x03,0x1f,0xf8,0xc0,0x07,0x3e,0xf0,0x81,0x0f,0x7c,0xe0,0x03,0x1f,0xf8,
    0xc0,0x07,0x3e,0xf0,0x81,0x0f,0x7c,0xe0,0x03,0x1f,0xf8,0xc0,0xf7,0xff,0xff,0xff,
    0xff,0x7f,0xff,0x03,0x00,0x04,0x00,0x00,0x03,0x00,0xe0,0x01,0x00,0xfc,0x00,0x80,
    0x7f,0x00,0xf0,0x3f,0x00,0xfe,0x1f,0x80,0xff,0x07,0xf0,0xf3,0x03,0x7e,0xfc,0xc1,
    0x1f,0xfe,0xf8,0x03,0x7f,0x7f,0x80,0xff,0x0f,0xc0,0xff,0x01,0xe0,0x3b,0x00,0x70,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x3f,0x06,0x1e,0x7c,0xf0,0xc1,0x07,0x1f,0x7c,0xf0,0xc0,0x00,0x00,0xff,
    0x01,0xc0,0xff,0x1f,0x80,0xff,0xff,0x00,0xfe,0xff,0x07,0xf8,0xff,0x1f,0xc0,0x03,
    0xfc,0x00,0x00,0xe0,0x03,0x00,0x80,0x0f,0x00,0xff,0x3f,0x80,0xff,0xff,0x00,0xff,
    0xff,0x03,0xff,0xff,0x0f,0xfc,0xff,0x3f,0xf8,0x03,0xfc,0xf0,0x03,0xe0,0xc3,0x07,
    0x80,0x0f,0x1f,0x00,0x3e,0x7c,0x00,0xfe,0xf0,0x03,0xff,0x9f,0xff,0xff,0xff,0xfe,
    0xff,0xff,0xf3,0xff,0xff,0x8f,0xff,0xef,0x1f,0xf8,0x07,0x00,0xfe,0x01,0x00,0xe0,
    0x3f,0x00,0x00,0xfc,0x07,0x00,0x80,0xff,0x00,0x00,0xe0,0x1f,0x00,0x00,0xe0,0x03,
    0x00,0x00,0x7c,0x00,0x00,0x80,0x0f,0x00,0x00,0xf0,0xe1,0x1f,0x00,0xbe,0xff,0x0f,
    0xc0,0xff,0xff,0x07,0xf8,0xff,0xff,0x01,0xff,0xff,0x7f,0xe0,0x3f,0xe0,0x0f,0xfc,
    0x03,0xf8,0x83,0x3f,0x00,0x7e,0xf0,0x03,0x80,0x1f,0x3e,0x00,0xe0,0xc3,0x07,0x00,
    0x7c,0xf8,0x00,0x80,0x0f,0x1f,0x00,0xf0,0xe1,0x03,0x00,0x3e,0x7c,0x00,0xc0,0x87,
    0x1f,0x00,0xfc,0xf0,0x07,0xc0,0x0f,0xfe,0x01,0xfc,0xf9,0xff,0xc0,0x9f,0xff,0xff,
    0xff,0xf1,0xff,0xff,0x3f,0xfe,0xff,0xff,0x81,0x7f,0xfe,0x1f,0x00,0x00,0x7f,0x00,
    0x00,0xfe,0x71,0x80,0xff,0xff,0x81,0xff,0xff,0xc3,0xff,0xff,0xc7,0xff,0xff,0x8f,
    0x7f,0xe0,0x9f,0x3f,0x00,0x3f,0x3f,0x00,0x7c,0x3f,0x00,0xf8,0x3e,0x00,0xe0,0x7c,
    0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,0x00,0xe0,0x03,0x00,0xc0,0x07,0x00,0x80,0x1f,
    0x00,0x00,0x3e,0x00,0xe0,0xfc,0x01,0xe0,0xf3,0x0f,0xf0,0xe7,0xff,0xff,0x8f,0xff,
    0xff,0x0f,0xfe,0xff,0x0f,0xf0,0xff,0x0f,0x00,0xff,0x01,0x00,0x00,0xfe,0x01,0x00,
    0xe0,0x3f,0x00,0x00,0xfc,0x07,0x00,0x80,0xff,0x00,0x00,0xe0,0x1f,0x00,0x00,0xe0,
    0x03,0x00,0x00,0x7c,0x00,0x00,0x80,0x0f,0x00,0xff,0xf0,0x01,0xf8,0xff,0x3e,0xc0,
    0xff,0xff,0x07,0xfc,0xff,0xff,0xc0,0xff,0xff,0x1f,0xf8,0x03,0xfe,0x83,0x3f,0x80,
    0x7f,0xf0,0x03,0xe0,0x0f,0x3f,0x00,0xf8,0xe1,0x03,0x00,0x3e,0x7c,0x00,0xc0,0x87,
    0x0f,0x00,0xf8,0xf0,0x01,0x00,0x1f,0x3e,0x00,0xe0,0xc3,0x07,0x00,0x7c,0xf8,0x01,
    0xc0,0x0f,0x7e,0x00,0xfc,0xc1,0x1f,0xc0,0x3f,0xf0,0x0f,0xfc,0x3f,0xfc,0xff,0xff,
    0x8f,0xff,0xff,0xff,0xe1,0xff,0xff,0x3f,0xf0,0xff,0xfc,0x03,0xf8,0x07,0x00,0x00,
    0xfe,0x00,0x00,0xff,0x1f,0x00,0xfe,0xff,0x00,0xfe,0xff,0x0f,0xf8,0xff,0x7f,0xf0,
    0x0f,0xfc,0xe1,0x0f,0xc0,0x8f,0x1f,0x00,0x3e,0x3f,0x00,0xf8,0x7d,0x00,0xc0,0xf7,
    0xff,0xff,0xdf,0xff,0xff,0x7f,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,
    0x07,0x00,0x00,0x3f,0x00,0x00,0xf8,0x01,0x00,0xe0,0x1f,0xc0,0x1f,0xff,0xff,0x7f,
    0xf8,0xff,0xff,0xc1,0xff,0xff,0x07,0xfc,0xff,0x07,0x80,0xff,0x01,0x00,0xf8,0x1f,
    0x00,0xfe,0x7f,0x00,0xff,0xff,0x80,0xff,0xff,0xc0,0xff,0x7f,0xc0,0x0f,0x00,0xc0,
    0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xfc,0xff,0x0f,0xfe,0xff,0x1f,0xfe,0xff,
    0x1f,0xfe,0xff,0x1f,0xfc,0xff,0x0f,0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,
    0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,
    0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xc0,0x07,0x00,0xfe,0xff,0x0f,0xff,0xff,
    0x1f,0xff,0xff,0x1f,0xff,0xff,0x1f,0xfe,0xff,0x0f,0x00,0x7f,0x00,0x00,0xfe,0xef,
    0x1f,0xfc,0xff,0xff,0xf1,0xff,0xff,0xcf,0xff,0xff,0x7f,0xfe,0xe0,0xff,0xf9,0x03,
    0xfe,0xc1,0x0f,0xe0,0x0f,0x3f,0x00,0x7e,0xf8,0x00,0xe0,0xc3,0x07,0x00,0x1f,0x3e,
    0x00,0xf8,0xf0,0x01,0xc0,0x87,0x0f,0x00,0x3e,0x7c,0x00,0xf0,0xe1,0x07,0xc0,0x0f,
    0x3e,0x00,0x7e,0xf0,0x03,0xf8,0x03,0x7f,0xf0,0x1f,0xf8,0xff,0xff,0x80,0xff,0xff,
    0x07,0xf8,0xff,0x3f,0x00,0xff,0xf7,0x01,0xe0,0x8f,0x0f,0x00,0x00,0x7c,0x00,0x00,
    0xe0,0x03,0x00,0x80,0x1f,0x00,0x00,0x7e,0x00,0xfc,0xff,0x03,0xf0,0xff,0x0f,0x80,
    0xff,0x3f,0x00,0xfc,0xff,0x00,0xc0,0xff,0x01,0x00,0xfe,0x01,0x00,0xf0,0x1f,0x00,
    0x00,0xff,0x01,0x00,0xf0,0x1f,0x00,0x00,0xfe,0x01,0x00,0x00,0x1f,0x00,0x00,0xf0,
    0x01,0x00,0x00,0x1f,0x00,0x00,0xf0,0xe1,0x07,0x00,0x9f,0xff,0x01,0xf0,0xfd,0x3f,
    0x00,0xff,0xff,0x07,0xf0,0xff,0x7f,0x00,0xff,0xc1,0x0f,0xf0,0x07,0xfc,0x00,0x3f,
    0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,
    0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xf0,0x01,0xf8,0x00,0x1f,0x80,0x0f,0xf0,0x01,
    0xf8,0x00,0x1f,0x80,0x0f,0xfe,0x07,0xfe,0xf7,0xff,0xf0,0xff,0xff,0x0f,0xff,0xff,
    0xff,0xf0,0xff,0xfe,0x07,0xfe,0x07,0x80,0x1f,0x00,0xc0,0x0f,0x00,0xe0,0x07,0x00,
    0xf0,0x03,0x00,0xf8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xfc,0x1f,0x00,0xff,0x0f,0x80,0xff,0x07,0xc0,0xff,0x03,0xc0,0xff,0x01,0x00,
    0xf8,0x00,0x00,0x7c,0x00,0x00,0x3e,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x07,
    0x00,0xe0,0x03,0x00,0xf0,0x01,0x00,0xf8,0x00,0x00,0x7c,0x00,0x00,0x3e,0x00,0x00,
    0x1f,0x80,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,
    0x00,0x00,0x7e,0x00,0xf8,0x01,0xe0,0x07,0x80,0x1f,0x00,0x7e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,
    0x0f,0x00,0x3e,0x00,0xf8,0x00,0xe0,0x03,0x80,0x0f,0x00,0x3e,0x00,0xf8,0x00,0xe0,
    0x03,0x80,0x0f,0x00,0x3e,0x00,0xf8,0x00,0xe0,0x03,0x80,0x0f,0x00,0x3e,0x00,0xf8,
    0x00,0xe0,0x03,0x80,0x0f,0x00,0x3e,0x00,0xf8,0x00,0xe0,0x03,0x80,0x0f,0x00,0x3f,
    0x00,0x7e,0xfe,0xff,0xfd,0xff,0xf3,0xff,0xc7,0xff,0x0f,0xfe,0x0f,0x00,0xfe,0x01,
    0x00,0xfc,0x07,0x00,0xf0,0x1f,0x00,0xc0,0x7f,0x00,0x00,0xfe,0x01,0x00,0xc0,0x07,
    0x00,0x00,0x1f,0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xc0,0x87,0xff,0x01,0x1f,
    0xff,0x0f,0x7c,0xfc,0x3f,0xf0,0xf1,0xff,0xc0,0x87,0xff,0x01,0x9f,0x7f,0x00,0x7c,
    0xff,0x00,0xf0,0xff,0x00,0xc0,0xff,0x01,0x00,0xff,0x03,0x00,0xfc,0x0f,0x00,0xf0,
    0x7f,0x00,0xc0,0xff,0x03,0x00,0xdf,0x3f,0x00,0x7c,0xfe,0x01,0xf0,0xf1,0x0f,0xc0,
    0x07,0x7f,0xe0,0x1f,0xf8,0xdf,0x7f,0xf0,0xff,0xff,0xc1,0xff,0xff,0x07,0xff,0xef,
    0x1f,0xf8,0x1f,0xf8,0x3f,0x00,0xfe,0x1f,0x00,0xff,0x0f,0x80,0xff,0x07,0x80,0xff,
    0x03,0x00,0xf0,0x01,0x00,0xf8,0x00,0x00,0x7c,0x00,0x00,0x3e,0x00,0x00,0x1f,0x00,
    0x80,0x0f,0x00,0xc0,0x07,0x00,0xe0,0x03,0x00,0xf0,0x01,0x00,0xf8,0x00,0x00,0x7c,
    0x00,0x00,0x3e,0x00,0x00,0x1f,0x00,0x80,0x0f,0x00,0xc0,0x07,0x00,0xe0,0x03,0x00,
    0xf0,0x01,0x00,0xf8,0x00,0x00,0x7c,0x00,0x00,0x3e,0x00,0x00,0x1f,0x80,0xff,0xff,
    0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,0x00,0x00,0x7c,0xf0,
    0x01,0xfe,0xfe,0xf9,0x07,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,
    0x1f,0xfe,0xc3,0x1f,0x1f,0xf8,0xc1,0x0f,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,
    0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,
    0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,0x1f,0xf8,0xc0,0x07,
    0x1f,0xf8,0xc0,0x07,0x1f,0xfe,0xc3,0x1f,0x7f,0xff,0xc7,0x3f,0xff,0xff,0xc7,0x3f,
    0xff,0xff,0xc7,0x3f,0xff,0xfe,0xc3,0x1f,0x7f,0x00,0xf0,0x03,0xe0,0xcf,0xff,0x80,
    0x7f,0xff,0x0f,0xfc,0xff,0xff,0xe0,0xff,0xff,0x07,0xfe,0x07,0x7f,0xc0,0x1f,0xf0,
    0x03,0x7e,0x00,0x1f,0xf0,0x01,0xf8,0x80,0x0f,0xc0,0x07,0x7c,0x00,0x3e,0xe0,0x03,
    0xf0,0x01,0x1f,0x80,0x0f,0xf8,0x00,0x7c,0xc0,0x07,0xe0,0x03,0x3e,0x00,0x1f,0xf0,
    0x01,0xf8,0x80,0x0f,0xc0,0x87,0xff,0x81,0xff,0xfe,0x1f,0xfe,0xff,0xff,0xf0,0xff,
    0xff,0x87,0xff,0xfb,0x1f,0xf8,0x0f,0x00,0xfe,0x01,0x00,0xfe,0x1f,0x00,0xfe,0xff,
    0x01,0xfc,0xff,0x0f,0xf8,0xff,0x7f,0xf0,0x0f,0xfc,0xe3,0x0f,0xc0,0x9f,0x1f,0x00,
    0x7e,0x3f,0x00,0xf0,0x7d,0x00,0x80,0xff,0x01,0x00,0xfe,0x07,0x00,0xf8,0x1f,0x00,
    0xe0,0x7f,0x00,0x80,0xff,0x01,0x00,0xff,0x0f,0x00,0xfc,0x7e,0x00,0xf8,0xf9,0x03,
    0xf0,0xc7,0x3f,0xf0,0x0f,0xfe,0xff,0x1f,0xf0,0xff,0x3f,0x80,0xff,0x7f,0x00,0xfc,
    0xff,0x00,0x80,0x7f,0x00,0x00,0xe0,0x0f,0xc0,0x3f,0xff,0x0f,0xfc,0xf7,0xff,0x87,
    0xff,0xff,0xff,0xf1,0xff,0xff,0x7f,0xfc,0x3f,0xf0,0x0f,0xfc,0x01,0xf8,0x83,0x1f,
    0x00,0x7e,0xf0,0x03,0x80,0x1f,0x3e,0x00,0xe0,0xc3,0x07,0x00,0x7c,0xf8,0x00,0x80,
    0x0f,0x1f,0x00,0xf0,0xe1,0x07,0x00,0x3f,0xfc,0x00,0xe0,0x87,0x3f,0x00,0x7e,0xf0,
    0x1f,0xf0,0x0f,0xfe,0xff,0xff,0xc0,0xff,0xff,0x0f,0xf8,0xff,0xff,0x00,0x9f,0xff,
    0x07,0xe0,0xc3,0x3f,0x00,0x7c,0x00,0x00,0x80,0x0f,0x00,0x00,0xf0,0x01,0x00,0x00,
    0x3e,0x00,0x00,0xc0,0x07,0x00,0x00,0xf8,0x00,0x00,0xe0,0xff,0x03,0x00,0xfe,0xff,
    0x00,0xc0,0xff,0x1f,0x00,0xf8,0xff,0x03,0x00,0xfe,0x3f,0x00,0x00,0x00,0xfe,0x00,
    0x00,0xf8,0x7f,0xfe,0xc1,0xff,0xdf,0x7f,0xfc,0xff,0xff,0xcf,0xff,0xff,0xff,0xf9,
    0x03,0xfe,0x9f,0x3f,0x00,0x7f,0xf0,0x01,0xc0,0x0f,0x3f,0x00,0xf8,0xe1,0x03,0x00,
    0x3e,0x7c,0x00,0xc0,0x87,0x0f,0x00,0xf8,0xf0,0x01,0x00,0x1f,0x7e,0x00,0xf0,0xc3,
    0x0f,0x00,0x7e,0xf0,0x03,0xe0,0x0f,0xfe,0x01,0xff,0x81,0xff,0xff,0x3f,0xe0,0xff,
    0xff,0x07,0xf8,0xff,0xff,0x00,0xfc,0x3f,0x1f,0x00,0xfe,0xe1,0x03,0x00,0x00,0x7c,
    0x00,0x00,0x80,0x0f,0x00,0x00,0xf0,0x01,0x00,0x00,0x3e,0x00,0x00,0xc0,0x07,0x00,
    0x00,0xf8,0x00,0x00,0xf8,0xff,0x00,0x80,0xff,0x3f,0x00,0xf0,0xff,0x07,0x00,0xfe,
    0xff,0x00,0x80,0xff,0x0f,0x00,0x00,0x3e,0xf0,0x1f,0xff,0xe3,0x7f,0xfe,0x9f,0xff,
    0xfd,0xff,0xfe,0xff,0xff,0xf3,0xff,0x8f,0x07,0xfc,0x0f,0x00,0xf0,0x1f,0x00,0xc0,
    0x1f,0x00,0x00,0x3f,0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xc0,0x07,0x00,0x00,
    0x1f,0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xc0,0x07,0x00,0x00,0x1f,0x00,0xe0,
    0xff,0xff,0xc0,0xff,0xff,0x07,0xff,0xff,0x1f,0xfc,0xff,0x7f,0xe0,0xff,0xff,0x00,
    0x80,0x7f,0x0c,0xfc,0xff,0x87,0xff,0xff,0xf1,0xff,0x7f,0xfe,0xff,0x9f,0x3f,0xe0,
    0xe7,0x03,0xf0,0xf9,0x01,0x38,0xfe,0x07,0x80,0xff,0x7f,0xc0,0xff,0x7f,0xe0,0xff,
    0x3f,0xf0,0xff,0x1f,0xe0,0xff,0x07,0x00,0xff,0x3b,0x00,0xfc,0x1f,0x00,0xfe,0x07,
    0x80,0xff,0x07,0xf8,0xff,0xff,0x7f,0xff,0xff,0xdf,0xff,0xff,0xe3,0xff,0x3f,0x00,
    0xfe,0x03,0xc0,0x01,0x00,0xc0,0x07,0x00,0x80,0x0f,0x00,0x00,0x1f,0x00,0x00,0x3e,
    0x00,0x00,0x7c,0x00,0x00,0xf8,0x00,0x00,0xff,0xff,0x0f,0xff,0xff,0x3f,0xfe,0xff,
    0x7f,0xfc,0xff,0xff,0xf0,0xff,0xff,0x00,0x3e,0x00,0x00,0x7c,0x00,0x00,0xf8,0x00,
    0x00,0xf0,0x01,0x00,0xe0,0x03,0x00,0xc0,0x07,0x00,0x80,0x0f,0x00,0x00,0x1f,0x00,
    0x00,0x3e,0x00,0x00,0x7c,0x00,0x00,0xf8,0x00,0x00,0xf0,0x01,0x78,0xe0,0x07,0xfc,
    0xc1,0xff,0xff,0x03,0xff,0xff,0x07,0xfc,0xff,0x07,0xf0,0xff,0x03,0x80,0x7f,0x00,
    0xfe,0x81,0xff,0xf8,0x0f,0xfe,0xc7,0x7f,0xf0,0x3f,0xfe,0x83,0xff,0xe1,0x1f,0xf8,
    0x0f,0xf8,0x00,0x7c,0xc0,0x07,0xe0,0x03,0x3e,0x00,0x1f,0xf0,0x01,0xf8,0x80,0x0f,
    0xc0,0x07,0x7c,0x00,0x3e,0xe0,0x03,0xf0,0x01,0x1f,0x80,0x0f,0xf8,0x00,0x7c,0xc0,
    0x07,0xe0,0x03,0x3e,0x80,0x1f,0xf0,0x03,0xfe,0x80,0x3f,0xfc,0x1f,0xf8,0xff,0xff,
    0xc1,0xff,0xff,0x0f,0xfc,0xbf,0x7f,0xc0,0xff,0xfc,0x01,0xf8,0x01,0x00,0xfe,0x0f,
    0xfc,0xdf,0xff,0x87,0xff,0xff,0xff,0xe1,0xff,0xff,0x7f,0xf8,0xff,0xfe,0x0f,0xfc,
    0x1f,0xfc,0x00,0xfc,0x00,0x3e,0x00,0x1f,0x80,0x1f,0xe0,0x07,0xc0,0x07,0xf8,0x00,
    0xf0,0x03,0x3f,0x00,0xf8,0xc0,0x07,0x00,0x7e,0xf8,0x01,0x00,0x1f,0x3e,0x00,0xc0,
    0xcf,0x0f,0x00,0xe0,0xf7,0x01,0x00,0xf8,0x7f,0x00,0x00,0xfc,0x1f,0x00,0x00,0xff,
    0x03,0x00,0xc0,0xff,0x00,0x00,0xe0,0x1f,0x00,0x00,0xf8,0x07,0x00,0x00,0xfc,0x00,
    0x00,0xfe,0x03,0xf0,0xdf,0xff,0x01,0xfe,0xff,0x7f,0x80,0xff,0xff,0x1f,0xe0,0xff,
    0xfe,0x03,0xf0,0x1f,0x3e,0xf8,0xf0,0x81,0x0f,0x3f,0x7c,0xe0,0xc7,0x1f,0x1f,0xf0,
    0xf9,0xc7,0x07,0x7c,0xfe,0xf9,0x00,0x9f,0xff,0x3e,0xc0,0xff,0xbf,0x0f,0xe0,0xff,
    0xef,0x03,0xf8,0xff,0x7f,0x00,0xfe,0xf3,0x1f,0x80,0xff,0xfc,0x07,0xc0,0x3f,0xfe,
    0x01,0xf0,0x87,0x3f,0x00,0xfc,0xe1,0x0f,0x00,0x3f,0xf0,0x03,0x80,0x0f,0xfc,0x00,
    0xe0,0x03,0x1e,0x00,0xfc,0x07,0xfe,0xe3,0xff,0xf0,0x7f,0xfe,0x0f,0xff,0xe7,0xff,
    0xf0,0x7f,0xfc,0x07,0xfe,0x03,0xff,0xf0,0x0f,0xe0,0x9f,0x7f,0x00,0xfc,0xff,0x03,
    0x00,0xff,0x0f,0x00,0xe0,0x7f,0x00,0x00,0xfc,0x03,0x00,0xe0,0x7f,0x00,0x00,0xff,
    0x0f,0x00,0xf8,0xff,0x01,0xe0,0x9f,0x7f,0x00,0xff,0xf0,0x0f,0xf8,0x07,0xfe,0xe1,
    0x7f,0xe0,0x7f,0xff,0x0f,0xff,0xff,0xff,0xf0,0xff,0xff,0x0f,0xff,0xef,0x7f,0xe0,
    0x7f,0xfe,0x03,0xfc,0xf7,0x7f,0xe0,0xff,0xff,0x07,0xfe,0xff,0x7f,0xe0,0xff,0xfe,
    0x03,0xfc,0x87,0x0f,0x00,0x1f,0xf8,0x01,0xf8,0x01,0x1f,0x80,0x0f,0xf0,0x03,0xfc,
    0x00,0x3e,0xc0,0x07,0xe0,0x07,0x7e,0x00,0xfc,0xe0,0x03,0xc0,0x0f,0x3f,0x00,0xf8,
    0xf9,0x01,0x80,0x9f,0x0f,0x00,0xf0,0xff,0x00,0x00,0xff,0x07,0x00,0xe0,0x7f,0x00,
    0x00,0xfe,0x03,0x00,0xc0,0x3f,0x00,0x00,0xfc,0x01,0x00,0x80,0x1f,0x00,0x00,0xf8,
    0x00,0x00,0xc0,0x0f,0x00,0x00,0x7c,0x00,0x00,0xe0,0x07,0x00,0x00,0x3f,0x00,0xe0,
    0xff,0x0f,0x00,0xff,0xff,0x01,0xf0,0xff,0x1f,0x00,0xff,0xff,0x01,0xe0,0xff,0x0f,
    0x00,0xfe,0xff,0x9f,0xff,0xff,0xe7,0xff,0xff,0xf9,0xff,0x7f,0xfe,0xff,0x9f,0x0f,
    0xf8,0xe3,0x03,0x7f,0xf8,0xe0,0x0f,0x1c,0xfc,0x01,0x80,0x3f,0x00,0xf0,0x03,0x00,
    0x7e,0x00,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x3f,0xc0,0xe1,0x07,0xf8,0xfc,0x00,0xbe,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x3e,
    0x80,0x3f,0xe0,0x1f,0xf8,0x0f,0xfc,0x03,0x3f,0x80,0x0f,0xc0,0x07,0xe0,0x03,0xf0,
    0x01,0xf8,0x00,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xf0,0x01,0xff,0xc0,
    0x3f,0xe0,0x0f,0xf0,0x0f,0xf0,0x0f,0xc0,0x07,0xc0,0x07,0xe0,0x03,0xf0,0x01,0xf8,
    0x00,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xe0,0x03,0xf0,0x03,0xf0,0x0f,
    0xf8,0x0f,0xf8,0x07,0xf8,0x03,0xf8,0x00,0xee,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0x01,0x3e,0x80,0x3f,0xc0,0x3f,0xe0,0x3f,0xe0,0x1f,0x80,0x1f,0x80,0x0f,0xc0,0x07,
    0xe0,0x03,0xf0,0x01,0xf8,0x00,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xc0,
    0x07,0xe0,0x1f,0xe0,0x1f,0xe0,0x0f,0xf8,0x07,0xfe,0x01,0x1f,0xc0,0x07,0xe0,0x03,
    0xf0,0x01,0xf8,0x00,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xe0,0x03,0xf8,
    0x81,0x7f,0xe0,0x3f,0xf0,0x0f,0xf8,0x03,0xf8,0x00,0x00,0xe0,0x03,0x00,0xf0,0x0f,
    0x70,0xfc,0x1f,0xf8,0xfc,0x3f,0xfc,0xfe,0x7f,0xfe,0x7f,0xfe,0x7f,0x3f,0xfc,0x3f,
    0x1f,0xf8,0x1f,0x0e,0xe0,0x0f,0x00,0xc0,0x07,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 30
 *  X offset: 0, Y offset: 50
 *  X size: 1, Y size: 1
 *                                
 ********************/
{0, 30, 0, 50, 1, 1},

/********************
 *  Character: '!', X advance: 30
 *  X offset: 11, Y offset: 18
 *  X size: 8, Y size: 33
 *               ####                        
 *              ######                       
 *             ########                      
 *             ########                      
 *             ########                      
 *             ########                      
 *             ########                      
 *             ########                      
 *             ########                      
 *             ########                      
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *              ######                       
 *               ####                        
 *               ####                        
 *               ####                        
 *                                           
 *                                           
 *                                           
 *               ####                        
 *              ######                       
 *             ########                      
 *             ########                      
 *             ########                      
 *              ######                       
 *               ####                        
 ********************/
{1, 30, 11, 18, 8, 33},

/********************
 *  Character: '"', X advance: 30
 *  X offset: 7, Y offset: 19
 *  X size: 16, Y size: 15
 *         ######   ######               
 *         ######   ######               
 *          #####    #####               
 *          #####    #####               
 *          #####    #####               
 *          #####    #####               
 *          #####    #####               
 *          #####    #####               
 *          #####    #####               
 *           ###      ###                
 *           ###      ###                
 *           ###      ###                
 *           ###      ###                
 *           ###      ###                
 *           ###      ###                
 ********************/
{34, 30, 7, 19, 16, 15},

/********************
 *  Character: '#', X advance: 30
 *  X offset: 3, Y offset: 17
 *  X size: 23, Y size: 37
 *            ####     ###           
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####    #####          
 *           #####   #####           
 *           #####   #####           
 *       ####################        
 *      ######################       
 *      ######################       
 *      ######################       
 *       ####################        
 *          #####    #####           
 *          #####    #####           
 *          #####    #####           
 *          #####    #####           
 *          #####    #####           
 *      ####################         
 *     ######################        
 *     ######################        
 *     ######################        
 *      ####################         
 *          #####   #####            
 *          #####   #####            
 *          #####   #####            
 *         ######   #####            
 *         #####    #####            
 *         #####    #####            
 *         #####    #####            
 *         #####    #####            
 *         #####    #####            
 *         #####    #####            
 *          ###     ####             
 ********************/
{64, 30, 3, 17, 23, 37},

/********************
 *  Character: '$', X advance: 30
 *  X offset: 5, Y offset: 16
 *  X size: 21, Y size: 40
 *                ###                  
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *            ##############           
 *          #################          
 *         ##################          
 *        ###################          
 *       ########      ######          
 *       ######         #####          
 *       #####          #####          
 *       #####           ###           
 *       ######                        
 *       #######                       
 *        ##########                   
 *        ##############               
 *         ###############             
 *           ###############           
 *             ##############          
 *                 ##########          
 *                     #######         
 *       ###             #####         
 *       ###             #####         
 *       ####            #####         
 *       ####           ######         
 *       #####          ######         
 *       #######      #######          
 *       ####################          
 *       ###################           
 *       #################             
 *       ### ############              
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *                ###                  
 ********************/
{171, 30, 5, 16, 21, 40},

/********************
 *  Character: '%', X advance: 30
 *  X offset: 3, Y offset: 19
 *  X size: 23, Y size: 32
 *          ######                   
 *         ########                  
 *        ##########                 
 *       ####    ####                
 *      ####      ####               
 *      ###        ###               
 *      ###        ###               
 *      ###        ###               
 *      ###        ###               
 *      ####      ####               
 *       ####    ####                
 *        ##########        #        
 *         ########      #####       
 *          ######   #########       
 *                ##########         
 *             ##########            
 *          ##########               
 *       ##########                  
 *      ########   ######            
 *      #####     ########           
 *               ##########          
 *              ####    ####         
 *             ####      ####        
 *             ###        ###        
 *             ###        ###        
 *             ###        ###        
 *             ###        ###        
 *             ####      ####        
 *              ####    ####         
 *               ##########          
 *                ########           
 *                 ######            
 ********************/
{276, 30, 3, 19, 23, 32},

/********************
 *  Character: '&', X advance: 30
 *  X offset: 4, Y offset: 22
 *  X size: 22, Y size: 29
 *              #####  #              
 *            ###########             
 *           #############            
 *          ##############            
 *          #############             
 *         ######   ####              
 *         #####                      
 *         #####                      
 *         #####                      
 *         ######                     
 *          #####                     
 *          ######                    
 *           ######                   
 *         ########                   
 *        ##########   #####          
 *        ###########  ######         
 *       ############  ######         
 *       ###### ###### ######         
 *      ######   ############         
 *      #####    ##########           
 *      #####     #########           
 *      #####      ########           
 *      #####      #######            
 *      #######    #########          
 *       ####################         
 *       #####################        
 *        ###################         
 *         ########### #####          
 *           ########                 
 ********************/
{368, 30, 4, 22, 22, 29},

/********************
 *  Character: ''', X advance: 30
 *  X offset: 12, Y offset: 19
 *  X size: 7, Y size: 15
 *              ######                        
 *              ######                        
 *               #####                        
 *               #####                        
 *               #####                        
 *               #####                        
 *               #####                        
 *               #####                        
 *               #####                        
 *                ###                         
 *                ###                         
 *                ###                         
 *                ###                         
 *                ###                         
 *                ###                         
 ********************/
{448, 30, 12, 19, 7, 15},

/********************
 *  Character: '(', X advance: 30
 *  X offset: 13, Y offset: 18
 *  X size: 11, Y size: 40
 *                       #                     
 *                     ####                    
 *                    ######                   
 *                    ######                   
 *                   ######                    
 *                   ######                    
 *                  ######                     
 *                  #####                      
 *                 ######                      
 *                 #####                       
 *                 #####                       
 *                #####                        
 *                #####                        
 *                #####                        
 *                #####                        
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *                #####                        
 *                #####                        
 *                #####                        
 *                ######                       
 *                 #####                       
 *                 #####                       
 *                 ######                      
 *                  #####                      
 *                  ######                     
 *                   #####                     
 *                   ######                    
 *                    ######                   
 *                    ######                   
 *                     ####                    
 *                      ##                     
 ********************/
{462, 30, 13, 18, 11, 40},

/********************
 *  Character: ')', X advance: 30
 *  X offset: 6, Y offset: 18
 *  X size: 11, Y size: 40
 *          #                           
 *         ####                         
 *        ######                        
 *        ######                        
 *         ######                       
 *         ######                       
 *          ######                      
 *           #####                      
 *           ######                     
 *            #####                     
 *            #####                     
 *            ######                    
 *             #####                    
 *             #####                    
 *             #####                    
 *             ######                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *              #####                   
 *             #####                    
 *             #####                    
 *             #####                    
 *             #####                    
 *            #####                     
 *            #####                     
 *           ######                     
 *           #####                      
 *          ######                      
 *         ######                       
 *         ######                       
 *        ######                        
 *        ######                        
 *         ####                         
 *          ##                          
 ********************/
{517, 30, 6, 18, 11, 40},

/********************
 *  Character: '*', X advance: 30
 *  X offset: 4, Y offset: 18
 *  X size: 21, Y size: 21
 *               ###                  
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *       ###    #####    ###          
 *      #####################         
 *      #####################         
 *      #####################         
 *       ###################          
 *          #############             
 *            #########               
 *            #########               
 *           ###########              
 *          ###### ######             
 *         ####### #######            
 *         ######   ######            
 *         #####     #####            
 *         ####       ####            
 *           #         #              
 ********************/
{572, 30, 4, 18, 21, 21},

/********************
 *  Character: '+', X advance: 30
 *  X offset: 3, Y offset: 22
 *  X size: 25, Y size: 28
 *                ###                
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *      #######################      
 *     #########################     
 *     #########################     
 *     #########################     
 *      #######################      
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *               #####               
 *                ###                
 ********************/
{628, 30, 3, 22, 25, 28},

/********************
 *  Character: ',', X advance: 30
 *  X offset: 7, Y offset: 43
 *  X size: 10, Y size: 15
 *            #######                    
 *            ######                     
 *            ######                     
 *            #####                      
 *           ######                      
 *           #####                       
 *           #####                       
 *          #####                        
 *          #####                        
 *          ####                         
 *          ####                         
 *         ####                          
 *         ####                          
 *         ###                           
 *         ###                           
 ********************/
{716, 30, 7, 43, 10, 15},

/********************
 *  Character: '-', X advance: 30
 *  X offset: 2, Y offset: 34
 *  X size: 26, Y size: 5
 *     ########################     
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *     ########################     
 ********************/
{735, 30, 2, 34, 26, 5},

/********************
 *  Character: '.', X advance: 30
 *  X offset: 11, Y offset: 44
 *  X size: 7, Y size: 7
 *               ####                        
 *              #####                        
 *             #######                       
 *             #######                       
 *             #######                       
 *              #####                        
 *              #####                        
 ********************/
{752, 30, 11, 44, 7, 7},

/********************
 *  Character: '/', X advance: 30
 *  X offset: 4, Y offset: 15
 *  X size: 22, Y size: 41
 *                         #          
 *                       #####        
 *                       #####        
 *                      ######        
 *                      #####         
 *                     ######         
 *                     #####          
 *                    ######          
 *                    #####           
 *                   ######           
 *                   #####            
 *                   #####            
 *                  #####             
 *                  #####             
 *                 ######             
 *                 #####              
 *                ######              
 *                #####               
 *               ######               
 *               #####                
 *              ######                
 *              #####                 
 *             ######                 
 *             #####                  
 *            ######                  
 *            #####                   
 *           ######                   
 *           #####                    
 *          ######                    
 *          #####                     
 *          #####                     
 *         ######                     
 *         #####                      
 *        ######                      
 *        #####                       
 *       ######                       
 *       #####                        
 *      ######                        
 *      #####                         
 *       ####                         
 *        #                           
 ********************/
{759, 30, 4, 15, 22, 41},

/********************
 *  Character: '0', X advance: 30
 *  X offset: 4, Y offset: 18
 *  X size: 22, Y size: 33
 *              ######                
 *            ###########             
 *          ##############            
 *         ################           
 *         ################           
 *        #######    #######          
 *       ######        ######         
 *       ######        ######         
 *       #####          #####         
 *      ######          ######        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      #####            #####        
 *      ######          ######        
 *       #####          #####         
 *       ######        ######         
 *       ######        ######         
 *        #######    #######          
 *         ################           
 *         ################           
 *          ##############            
 *           ###########              
 *             #######                
 ********************/
{872, 30, 4, 18, 22, 33},

/********************
 *  Character: '1', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 21, Y size: 31
 *             ######                 
 *            #######                 
 *          #########                 
 *         ##########                 
 *       ############                 
 *      #############                 
 *      ######  #####                 
 *      #####   #####                 
 *       ##     #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *              #####                 
 *       ###################          
 *      #####################         
 *      #####################         
 *      #####################         
 *       ###################          
 ********************/
{963, 30, 4, 19, 21, 31},

/********************
 *  Character: '2', X advance: 30
 *  X offset: 3, Y offset: 18
 *  X size: 22, Y size: 32
 *             #######               
 *           ###########             
 *         ###############           
 *        #################          
 *       ##################          
 *       ######      #######         
 *      ######         #####         
 *      #####          ######        
 *      #####           #####        
 *       ###            #####        
 *                      #####        
 *                     ######        
 *                     ######        
 *                    ######         
 *                   ######          
 *                  #######          
 *                 #######           
 *                #######            
 *              ########             
 *             ########              
 *            ########               
 *           ########                
 *          #######                  
 *         #######                   
 *       ########        ###         
 *      ########         ####        
 *     ########         #####        
 *     ######################        
 *     ######################        
 *     ######################        
 *     ######################        
 *     ######################        
 ********************/
{1045, 30, 3, 18, 22, 32},

/********************
 *  Character: '3', X advance: 30
 *  X offset: 3, Y offset: 18
 *  X size: 23, Y size: 33
 *             #######               
 *          #############            
 *        ################           
 *       ##################          
 *       ###################         
 *      #######      #######         
 *       ####          ######        
 *       ###            #####        
 *                      #####        
 *                      #####        
 *                      #####        
 *                     #####         
 *                    ######         
 *              ###########          
 *             ###########           
 *             ##########            
 *             ###########           
 *              ###########          
 *                   #######         
 *                     ######        
 *                      #####        
 *                       #####       
 *                       #####       
 *                       #####       
 *                       #####       
 *                      ######       
 *      ##             ######        
 *     ######        ########        
 *     #####################         
 *     #####################         
 *      ###################          
 *       ################            
 *          ##########               
 ********************/
{1133, 30, 3, 18, 23, 33},

/********************
 *  Character: '4', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 21, Y size: 31
 *                 #######            
 *                 #######            
 *                ########            
 *               #########            
 *               #########            
 *              ##########            
 *              ##########            
 *             ###########            
 *             ##### #####            
 *            #####  #####            
 *           ######  #####            
 *           #####   #####            
 *          ######   #####            
 *          #####    #####            
 *         #####     #####            
 *         #####     #####            
 *        #####      #####            
 *       #####       #####            
 *       #####       #####            
 *      ####################          
 *      #####################         
 *      #####################         
 *      #####################         
 *      ####################          
 *                   #####            
 *                   #####            
 *               ###########          
 *              #############         
 *              #############         
 *              #############         
 *               ###########          
 ********************/
{1228, 30, 4, 19, 21, 31},

/********************
 *  Character: '5', X advance: 30
 *  X offset: 3, Y offset: 19
 *  X size: 23, Y size: 32
 *        #################          
 *        ##################         
 *        ##################         
 *        ##################         
 *        #################          
 *        #####                      
 *        #####                      
 *        #####                      
 *        #####                      
 *        #####                      
 *        ##### #######              
 *        ###############            
 *        ################           
 *        #################          
 *        ##################         
 *        #######     #######        
 *         ###         ######        
 *                      ######       
 *                       #####       
 *                       #####       
 *                       #####       
 *                       #####       
 *                       #####       
 *                       #####       
 *                      ######       
 *      ####           ######        
 *     #######       ########        
 *     #####################         
 *      ###################          
 *       #################           
 *        ###############            
 *           #########               
 ********************/
{1310, 30, 3, 19, 23, 32},

/********************
 *  Character: '6', X advance: 30
 *  X offset: 5, Y offset: 18
 *  X size: 22, Y size: 33
 *                    #######          
 *                 ############        
 *               ##############        
 *              ###############        
 *             ###############         
 *            #########                
 *           #######                   
 *          #######                    
 *          ######                     
 *         ######                      
 *         ######                      
 *        ######                       
 *        ######   #####               
 *        #####  #########             
 *        ##### ############           
 *        ###################          
 *       ####################          
 *       ##########    #######         
 *        ########      ######         
 *        ######         ######        
 *        ######          #####        
 *        #####           #####        
 *        #####           #####        
 *        ######          #####        
 *        ######          #####        
 *         #####         ######        
 *         ######        #####         
 *          #######    #######         
 *          ##################         
 *           ################          
 *            ##############           
 *             ############            
 *               ########              
 ********************/
{1402, 30, 5, 18, 22, 33},

/********************
 *  Character: '7', X advance: 30
 *  X offset: 3, Y offset: 19
 *  X size: 21, Y size: 31
 *     #####################         
 *     #####################         
 *     #####################         
 *     #####################         
 *     #####################         
 *     #####           #####         
 *     ####            #####         
 *      ###           ######         
 *                    #####          
 *                    #####          
 *                   ######          
 *                   #####           
 *                   #####           
 *                  ######           
 *                  #####            
 *                  #####            
 *                 ######            
 *                 #####             
 *                 #####             
 *                ######             
 *                #####              
 *                #####              
 *               ######              
 *               #####               
 *              ######               
 *              #####                
 *              #####                
 *             ######                
 *             #####                 
 *             #####                 
 *              ###                  
 ********************/
{1493, 30, 3, 19, 21, 31},

/********************
 *  Character: '8', X advance: 30
 *  X offset: 5, Y offset: 18
 *  X size: 20, Y size: 33
 *              ######                 
 *           ############              
 *          ##############             
 *         ################            
 *        ##################           
 *        #######    #######           
 *       ######        ######          
 *       #####          #####          
 *       #####          #####          
 *       #####          #####          
 *       #####          #####          
 *       #####          #####          
 *        #####        #####           
 *         ######    ######            
 *         ###############             
 *           ############              
 *           ############              
 *          ##############             
 *         ################            
 *        #######    #######           
 *        #####        #####           
 *       ######        ######          
 *       #####          #####          
 *       #####          #####          
 *       #####          #####          
 *       #####          #####          
 *       ######        ######          
 *        #######     ######           
 *        ##################           
 *         ################            
 *          ##############             
 *           ############              
 *             #######                 
 ********************/
{1575, 30, 5, 18, 20, 33},

/********************
 *  Character: '9', X advance: 30
 *  X offset: 5, Y offset: 18
 *  X size: 22, Y size: 33
 *              #######                
 *           ############              
 *          ##############             
 *         ################            
 *        ##################           
 *        #######    #######           
 *        #####        ######          
 *       ######         #####          
 *       #####          ######         
 *       #####          ######         
 *       #####           #####         
 *       #####           #####         
 *       #####          ######         
 *       ######        #######         
 *        #####       ########         
 *        #######    #########         
 *         ###################         
 *         ###################         
 *          ############ #####         
 *            #########  #####         
 *              #####   ######         
 *                      ######         
 *                     ######          
 *                     ######          
 *                    ######           
 *                   #######           
 *                  #######            
 *               #########             
 *        ###############              
 *       ###############               
 *       ##############                
 *       ############                  
 *         ########                    
 ********************/
{1658, 30, 5, 18, 22, 33},

/********************
 *  Character: ':', X advance: 30
 *  X offset: 11, Y offset: 28
 *  X size: 7, Y size: 23
 *               ####                        
 *              #####                        
 *             #######                       
 *             #######                       
 *             #######                       
 *              ######                       
 *              #####                        
 *                                           
 *                                           
 *                                           
 *                                           
 *                                           
 *                                           
 *                                           
 *                                           
 *                                           
 *               ####                        
 *              #####                        
 *             #######                       
 *             #######                       
 *             #######                       
 *              #####                        
 *              #####                        
 ********************/
{1749, 30, 11, 28, 7, 23},

/********************
 *  Character: ';', X advance: 30
 *  X offset: 7, Y offset: 28
 *  X size: 10, Y size: 30
 *              ###                      
 *             #####                     
 *            #######                    
 *            #######                    
 *            #######                    
 *             #####                     
 *              ####                     
 *                                       
 *                                       
 *                                       
 *                                       
 *                                       
 *                                       
 *                                       
 *                                       
 *             ######                    
 *            ######                     
 *            ######                     
 *            #####                      
 *            #####                      
 *           #####                       
 *           #####                       
 *           ####                        
 *           ####                        
 *          ####                         
 *          ####                         
 *          ###                          
 *         ####                          
 *         ####                          
 *          ##                           
 ********************/
{1770, 30, 7, 28, 10, 30},

/********************
 *  Character: '<', X advance: 30
 *  X offset: 2, Y offset: 24
 *  X size: 25, Y size: 22
 *                         ###      
 *                       ######     
 *                     ########     
 *                   ##########     
 *                 ##########       
 *               ##########         
 *             ##########           
 *           ###########            
 *         ###########              
 *       ###########                
 *     ###########                  
 *     ##########                   
 *       ##########                 
 *         ##########               
 *           ##########             
 *             ##########           
 *               ##########         
 *                 ##########       
 *                   ##########     
 *                     ########     
 *                       ######     
 *                         ####     
 ********************/
{1808, 30, 2, 24, 25, 22},

/********************
 *  Character: '=', X advance: 30
 *  X offset: 2, Y offset: 29
 *  X size: 26, Y size: 14
 *     ########################     
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *     ########################     
 *                                  
 *                                  
 *                                  
 *                                  
 *     ########################     
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *     ########################     
 ********************/
{1877, 30, 2, 29, 26, 14},

/********************
 *  Character: '>', X advance: 30
 *  X offset: 2, Y offset: 25
 *  X size: 25, Y size: 22
 *     ###                          
 *    ######                        
 *    #######                       
 *    #########                     
 *      #########                   
 *       ##########                 
 *         ##########               
 *           ##########             
 *             ##########           
 *               ##########         
 *                 ##########       
 *                  ###########     
 *                ##########        
 *              ##########          
 *            ##########            
 *          ##########              
 *        ##########                
 *      ##########                  
 *     #########                    
 *    ########                      
 *    ######                        
 *    ####                          
 ********************/
{1923, 30, 2, 25, 25, 22},

/********************
 *  Character: '?', X advance: 30
 *  X offset: 5, Y offset: 20
 *  X size: 21, Y size: 31
 *             ########                
 *          #############              
 *        #################            
 *       ###################           
 *       ####################          
 *       #######      #######          
 *       #####          ######         
 *       #####           #####         
 *       #####           #####         
 *        ###            #####         
 *                       #####         
 *                      ######         
 *                    #######          
 *                  #########          
 *                ##########           
 *              ###########            
 *               ########              
 *               ######                
 *               ####                  
 *               ####                  
 *                ##                   
 *                                     
 *                                     
 *                                     
 *               ####                  
 *              #####                  
 *             #######                 
 *             #######                 
 *             #######                 
 *              #####                  
 *              #####                  
 ********************/
{1992, 30, 5, 20, 21, 31},

/********************
 *  Character: '@', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 21, Y size: 39
 *              ######                
 *            ##########              
 *           ############             
 *          ##############            
 *         ######    ######           
 *        #####        ####           
 *        #####        #####          
 *       #####          ####          
 *       ####           ####          
 *       ####           ####          
 *      #####           ####          
 *      ####         #######          
 *      ####       #########          
 *      ####      ##########          
 *      ####     ###########          
 *      ####    ######  ####          
 *      ####    ####    ####          
 *      ####   ####     ####          
 *      ####   ####     ####          
 *      ####   ####     ####          
 *      ####   ####     ####          
 *      ####   #####    ####          
 *      ####    #####   ####          
 *      ####    ############          
 *      ####     ############         
 *      ####      ###########         
 *      ####        ########          
 *      ####                          
 *      #####                         
 *       ####                         
 *       ####                         
 *       #####                        
 *        ####           #            
 *        #####         ###           
 *         ######     ######          
 *          ###############           
 *          ###############           
 *            ############            
 *              #######               
 ********************/
{2074, 30, 4, 19, 21, 39},

/********************
 *  Character: 'A', X advance: 30
 *  X offset: -1, Y offset: 21
 *  X size: 32, Y size: 29
 *       ##############             
 *       ###############            
 *       ###############            
 *       ################           
 *        ###############           
 *             ##########           
 *            ############          
 *            ############          
 *           ######  ######         
 *           ######  ######         
 *           #####    #####         
 *          ######    ######        
 *          #####      #####        
 *         ######      ######       
 *         #####        #####       
 *         #####        #####       
 *        ####################      
 *        ####################      
 *       ######################     
 *       ######################     
 *       ######################     
 *      ######            ######    
 *      #####              #####    
 *     ######              ######   
 *   ###########        ########### 
 *  #############      #############
 *  #############      #############
 *  #############      #############
 *   ###########        ########### 
 ********************/
{2177, 30, -1, 21, 32, 29},

/********************
 *  Character: 'B', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 27, Y size: 29
 *    ##################           
 *   #####################         
 *   ######################        
 *   #######################       
 *    #######################      
 *       #####         #######     
 *       #####          ######     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####          ######     
 *       #####        #######      
 *       ###################       
 *       ##################        
 *       ###################       
 *       ####################      
 *       #####################     
 *       #####          #######    
 *       #####            ######   
 *       #####            ######   
 *       #####             #####   
 *       #####             #####   
 *       #####             #####   
 *       #####           #######   
 *    #########################    
 *   ##########################    
 *   #########################     
 *   #######################       
 *    ####################         
 ********************/
{2293, 30, 1, 21, 27, 29},

/********************
 *  Character: 'C', X advance: 30
 *  X offset: 2, Y offset: 20
 *  X size: 27, Y size: 31
 *              #######             
 *           #############  ###     
 *          ####################    
 *        ######################    
 *        ######################    
 *       ########      #########    
 *      #######          #######    
 *     #######            ######    
 *     ######              #####    
 *     #####               #####    
 *    ######               #####    
 *    #####                 ###     
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *     #####                        
 *     ######                       
 *     ######                ###    
 *      #######            ######   
 *       ########        ########   
 *       #######################    
 *        ######################    
 *          ##################      
 *            ##############        
 *              #########           
 ********************/
{2391, 30, 2, 20, 27, 31},

/********************
 *  Character: 'D', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 26, Y size: 29
 *    ################             
 *   ###################           
 *   #####################         
 *   ######################        
 *    ######################       
 *      #####        ########      
 *      #####          ######      
 *      #####           ######     
 *      #####            #####     
 *      #####            #####     
 *      #####            ######    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####             #####    
 *      #####            ######    
 *      #####            #####     
 *      #####           ######     
 *      #####          #######     
 *      #####         #######      
 *    ######################       
 *   ######################        
 *   #####################         
 *   ####################          
 *    ################             
 ********************/
{2496, 30, 1, 21, 26, 29},

/********************
 *  Character: 'E', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 26, Y size: 29
 *    ########################     
 *   #########################     
 *   #########################     
 *   #########################     
 *    ########################     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####     ###   #####     
 *       #####    #####   ###      
 *       #####    #####            
 *       ##############            
 *       ##############            
 *       ##############            
 *       ##############            
 *       ##############            
 *       #####    #####            
 *       #####    #####    ###     
 *       #####    #####   #####    
 *       #####     ###    #####    
 *       #####            #####    
 *       #####            #####    
 *       #####            #####    
 *    #########################    
 *   ##########################    
 *   ##########################    
 *   ##########################    
 *    #########################    
 ********************/
{2591, 30, 1, 21, 26, 29},

/********************
 *  Character: 'F', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 26, Y size: 29
 *    #########################    
 *   ##########################    
 *   ##########################    
 *   ##########################    
 *    #########################    
 *       #####            #####    
 *       #####            #####    
 *       #####            #####    
 *       #####     ###    #####    
 *       #####    #####   #####    
 *       #####    #####    ###     
 *       #####    #####            
 *       ##############            
 *       ##############            
 *       ##############            
 *       ##############            
 *       ##############            
 *       #####    #####            
 *       #####    #####            
 *       #####     ###             
 *       #####                     
 *       #####                     
 *       #####                     
 *       #####                     
 *    ###############              
 *   #################             
 *   #################             
 *   #################             
 *    ###############              
 ********************/
{2686, 30, 1, 21, 26, 29},

/********************
 *  Character: 'G', X advance: 30
 *  X offset: 2, Y offset: 20
 *  X size: 27, Y size: 31
 *              ########   ###      
 *           ############# ####     
 *          ###################     
 *        #####################     
 *       ######################     
 *       ########      ########     
 *      #######          ######     
 *     ######             #####     
 *     ######             #####     
 *     #####              #####     
 *    ######               ###      
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####                         
 *    #####        #############    
 *    #####       ###############   
 *    #####       ###############   
 *    #####       ###############   
 *    #####        #############    
 *    ######              #####     
 *     #####              #####     
 *     ######             #####     
 *      ######            #####     
 *      ########        #######     
 *       ######################     
 *        #####################     
 *         ###################      
 *           ###############        
 *              #########           
 ********************/
{2781, 30, 2, 20, 27, 31},

/********************
 *  Character: 'H', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 28, Y size: 29
 *     #########      #########    
 *    ###########    ###########   
 *    ###########    ###########   
 *    ###########    ###########   
 *     #########      #########    
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       ####################      
 *       ####################      
 *       ####################      
 *       ####################      
 *       ####################      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *    ##########      ##########   
 *   ############    ############  
 *   ############    ############  
 *   ############    ############  
 *    ##########      ##########   
 ********************/
{2886, 30, 1, 21, 28, 29},

/********************
 *  Character: 'I', X advance: 30
 *  X offset: 5, Y offset: 21
 *  X size: 21, Y size: 29
 *        ###################          
 *       #####################         
 *       #####################         
 *       #####################         
 *        ###################          
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *               #####                 
 *        ###################          
 *       #####################         
 *       #####################         
 *       #####################         
 *        ###################          
 ********************/
{2988, 30, 5, 21, 21, 29},

/********************
 *  Character: 'J', X advance: 30
 *  X offset: 3, Y offset: 21
 *  X size: 27, Y size: 30
 *             ##################    
 *            ####################   
 *            ####################   
 *            ####################   
 *             ##################    
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *                     #####         
 *      ###            #####         
 *     #####           #####         
 *     #####           #####         
 *     #####           #####         
 *     #####           #####         
 *     #####           #####         
 *     #####          ######         
 *     #####          #####          
 *     ########     #######          
 *     ###################           
 *     ###################           
 *      #################            
 *         ############              
 *            #######                
 ********************/
{3065, 30, 3, 21, 27, 30},

/********************
 *  Character: 'K', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 29, Y size: 29
 *    ############    #########    
 *   ##############  ###########   
 *   ##############  ###########   
 *   ##############  ###########   
 *    ############    #########    
 *       #####        #######      
 *       #####       ######        
 *       #####     #######         
 *       #####    #######          
 *       #####   #######           
 *       #####  #######            
 *       ##### #######             
 *       ############              
 *       #############             
 *       ##############            
 *       ###############           
 *       #######  #######          
 *       ######    #######         
 *       #####      ######         
 *       #####       ######        
 *       #####       ######        
 *       #####        ######       
 *       #####        ######       
 *       #####         ######      
 *    ############     ##########  
 *   ##############     ########## 
 *   ##############     ########## 
 *   ##############      ######### 
 *    ############       ########  
 ********************/
{3167, 30, 1, 21, 29, 29},

/********************
 *  Character: 'L', X advance: 30
 *  X offset: 2, Y offset: 21
 *  X size: 27, Y size: 29
 *     ###############              
 *    #################             
 *    #################             
 *    #################             
 *     ###############              
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####                   
 *          #####            ###    
 *          #####           #####   
 *          #####           #####   
 *          #####           #####   
 *          #####           #####   
 *          #####           #####   
 *          #####           #####   
 *          #####           #####   
 *     ##########################   
 *    ###########################   
 *    ###########################   
 *    ###########################   
 *     ##########################   
 ********************/
{3273, 30, 2, 21, 27, 29},

/********************
 *  Character: 'M', X advance: 30
 *  X offset: -1, Y offset: 21
 *  X size: 32, Y size: 29
 *    #######              #######  
 *   #########            ######### 
 *   #########            ######### 
 *   ##########          ########## 
 *    #########          #########  
 *     #########        #########   
 *     #########        #########   
 *     ##########      ##########   
 *     ##########      ##########   
 *     ###########    ###########   
 *     ###########    ###########   
 *     ##### ######   ##### #####   
 *     ##### ######  ###### #####   
 *     #####  #####  #####  #####   
 *     #####  ############  #####   
 *     #####   ##########   #####   
 *     #####   ##########   #####   
 *     #####    #########   #####   
 *     #####    ########    #####   
 *     #####     #######    #####   
 *     #####     ######     #####   
 *     #####      #####     #####   
 *     #####                #####   
 *     #####                #####   
 *   ###########        ########### 
 *  #############      #############
 *  #############      #############
 *  #############      #############
 *   ###########        ########### 
 ********************/
{3371, 30, -1, 21, 32, 29},

/********************
 *  Character: 'N', X advance: 30
 *  X offset: 0, Y offset: 21
 *  X size: 30, Y size: 29
 *   ########         ########### 
 *  ##########       #############
 *  ###########      #############
 *  ###########      #############
 *   ###########      ########### 
 *      #########         #####   
 *      #########         #####   
 *      ##########        #####   
 *      ###########       #####   
 *      ###########       #####   
 *      ##### ######      #####   
 *      ##### #######     #####   
 *      #####  ######     #####   
 *      #####   ######    #####   
 *      #####   #######   #####   
 *      #####    ######   #####   
 *      #####     ######  #####   
 *      #####     ####### #####   
 *      #####      ###### #####   
 *      #####       ###########   
 *      #####       ###########   
 *      #####        ##########   
 *      #####         #########   
 *      #####         #########   
 *    ###########      ########   
 *   #############      #######   
 *   #############      #######   
 *   #############       ######   
 *    ###########         #####   
 ********************/
{3487, 30, 0, 21, 30, 29},

/********************
 *  Character: 'O', X advance: 30
 *  X offset: 1, Y offset: 20
 *  X size: 28, Y size: 31
 *             #######             
 *           ############          
 *         ################        
 *        ##################       
 *       ####################      
 *      ########      ########     
 *      ######          #######    
 *     ######            ######    
 *    ######              ######   
 *    ######              ######   
 *    #####                #####   
 *   ######                ######  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   ######                ######  
 *    #####                #####   
 *    ######              ######   
 *    ######              ######   
 *     ######            ######    
 *      ######          ######     
 *      ########      ########     
 *       ####################      
 *        ##################       
 *         ################        
 *           ############          
 *             #######             
 ********************/
{3596, 30, 1, 20, 28, 31},

/********************
 *  Character: 'P', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 25, Y size: 29
 *    #################            
 *   #####################         
 *   ######################        
 *   #######################       
 *    #######################      
 *       #####        #######      
 *       #####          ######     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####           #####     
 *       #####          ######     
 *       #####        #######      
 *       ####################      
 *       ###################       
 *       ##################        
 *       ################          
 *       ##############            
 *       #####                     
 *       #####                     
 *       #####                     
 *       #####                     
 *       #####                     
 *    ###############              
 *   #################             
 *   #################             
 *   #################             
 *    ###############              
 ********************/
{3705, 30, 1, 21, 25, 29},

/********************
 *  Character: 'Q', X advance: 30
 *  X offset: 1, Y offset: 20
 *  X size: 28, Y size: 37
 *             ########            
 *           ############          
 *         ################        
 *        ##################       
 *       ####################      
 *      ########      ########     
 *     #######          #######    
 *     ######            ######    
 *    ######              ######   
 *    #####               ######   
 *    #####                #####   
 *   ######                ######  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   #####                  #####  
 *   ######                ######  
 *    #####                #####   
 *    #####                #####   
 *    ######              ######   
 *     ######            ######    
 *     #######          ######     
 *      ########      ########     
 *       ####################      
 *        ##################       
 *         ################        
 *           ############          
 *            #########            
 *           ####                  
 *          ############    ####   
 *         ######################  
 *        #######################  
 *        ######################   
 *        #####################    
 *         ####        ######      
 ********************/
{3796, 30, 1, 20, 28, 37},

/********************
 *  Character: 'R', X advance: 30
 *  X offset: -1, Y offset: 21
 *  X size: 30, Y size: 29
 *   #################            
 *  #####################         
 *  ######################        
 *  #######################       
 *   #######################      
 *      #####        #######      
 *      #####          ######     
 *      #####           #####     
 *      #####           #####     
 *      #####           #####     
 *      #####          ######     
 *      #####         #######     
 *      #####       ########      
 *      ###################       
 *      ##################        
 *      #################         
 *      ################          
 *      #################         
 *      #####      #######        
 *      #####       #######       
 *      #####        #######      
 *      #####         ######      
 *      #####          ######     
 *      #####          #######    
 *   ############       ######### 
 *  ##############       #########
 *  ##############       #########
 *  ##############        ########
 *   ############         ####### 
 ********************/
{3926, 30, -1, 21, 30, 29},

/********************
 *  Character: 'S', X advance: 30
 *  X offset: 3, Y offset: 20
 *  X size: 24, Y size: 31
 *             ########   ###        
 *           ############ ####       
 *         ###################       
 *        ####################       
 *       #####################       
 *       #######      ########       
 *      ######          ######       
 *      #####            #####       
 *      #####            #####       
 *      #####            #####       
 *      ######            ###        
 *      #######                      
 *       #########                   
 *       ##############              
 *        ################           
 *         #################         
 *           ################        
 *               #############       
 *                    ########       
 *                      #######      
 *      ###               #####      
 *     #####              #####      
 *     #####              #####      
 *     #####             ######      
 *     #######           ######      
 *     #########      ########       
 *     #######################       
 *     ######################        
 *     #####################         
 *      ###  #############           
 *             #########             
 ********************/
{4035, 30, 3, 20, 24, 31},

/********************
 *  Character: 'T', X advance: 30
 *  X offset: 2, Y offset: 21
 *  X size: 26, Y size: 29
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *    ##########################    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *    #####     #####      #####    
 *     ###      #####       ###     
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *              #####               
 *         ###############          
 *        #################         
 *        #################         
 *        #################         
 *         ###############          
 ********************/
{4128, 30, 2, 21, 26, 29},

/********************
 *  Character: 'U', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 28, Y size: 30
 *    ###########    ###########   
 *   #############  #############  
 *   #############  #############  
 *   #############  #############  
 *    ###########    ###########   
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *      #####            #####     
 *       #####          #####      
 *       ######        ######      
 *       ########    ########      
 *        ##################       
 *         ################        
 *          ##############         
 *            ###########          
 *              ######             
 ********************/
{4223, 30, 1, 21, 28, 30},

/********************
 *  Character: 'V', X advance: 30
 *  X offset: -1, Y offset: 21
 *  X size: 32, Y size: 29
 *   ###########        ########### 
 *  #############      #############
 *  #############      #############
 *  #############      #############
 *   ###########        ########### 
 *      #####              #####    
 *      #####              #####    
 *      ######            ######    
 *       #####            #####     
 *       ######          ######     
 *        #####          #####      
 *        ######         #####      
 *        ######        #####       
 *         ######       #####       
 *         ######      ######       
 *          #####      #####        
 *          ######    ######        
 *          ######    #####         
 *           ######   #####         
 *           ######  ######         
 *            ###### #####          
 *            ############          
 *             ##########           
 *             ##########           
 *             #########            
 *              ########            
 *              ########            
 *               ######             
 *               ######             
 ********************/
{4328, 30, -1, 21, 32, 29},

/********************
 *  Character: 'W', X advance: 30
 *  X offset: -1, Y offset: 21
 *  X size: 31, Y size: 29
 *   ###########       ########### 
 *  #############     #############
 *  #############     #############
 *  #############     #############
 *   ###########       ########### 
 *     #####                #####  
 *     #####                #####  
 *     #####     ######     #####  
 *     #####    #######     #####  
 *     ######   #######     #####  
 *      #####   ########    #####  
 *      #####   ########   #####   
 *      #####  #########   #####   
 *      #####  ##########  #####   
 *      #####  ##########  #####   
 *      #####  #### #####  #####   
 *      ##### ##### ###### #####   
 *      ########### ###### #####   
 *       #########   ###########   
 *       #########   ##########    
 *       #########   ##########    
 *       ########     #########    
 *       ########     #########    
 *       ########     #########    
 *       #######       ########    
 *        ######       ########    
 *        ######       #######     
 *        #####         ######     
 *        #####         ######     
 ********************/
{4444, 30, -1, 21, 31, 29},

/********************
 *  Character: 'X', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 28, Y size: 29
 *    #########       #########    
 *   ###########     ###########   
 *   ###########     ###########   
 *   ###########     ###########   
 *    #########       #########    
 *      #######       #######      
 *       #######      ######       
 *        ######     ######        
 *         ######   ######         
 *          ######  #####          
 *           ############          
 *           ###########           
 *            #########            
 *             #######             
 *             #######             
 *            #########            
 *            #########            
 *           ###########           
 *          #############          
 *         #######  ######         
 *        #######    ######        
 *        ######      ######       
 *       ######       ######       
 *      ######         ######      
 *    ##########      ##########   
 *   ############    ############  
 *   ############    ############  
 *   ############    ############  
 *    ##########      ##########   
 ********************/
{4557, 30, 1, 21, 28, 29},

/********************
 *  Character: 'Y', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 28, Y size: 29
 *    #########        #########   
 *   ###########      ###########  
 *   ###########      ###########  
 *   ###########      ###########  
 *    #########        #########   
 *      ######          #####      
 *       ######        ######      
 *        ######      ######       
 *        ######     ######        
 *         ######   ######         
 *          ###### #######         
 *          ###### ######          
 *           ###########           
 *            #########            
 *            #########            
 *             #######             
 *              #####              
 *              #####              
 *              #####              
 *              #####              
 *              #####              
 *              #####              
 *              #####              
 *              #####              
 *         ###############         
 *        #################        
 *        #################        
 *        #################        
 *         ###############         
 ********************/
{4659, 30, 1, 21, 28, 29},

/********************
 *  Character: 'Z', X advance: 30
 *  X offset: 4, Y offset: 21
 *  X size: 22, Y size: 29
 *       ####################         
 *       ####################         
 *       ####################         
 *       ####################         
 *       ####################         
 *       #####        #######         
 *       #####       #######          
 *       #####       ######           
 *       #####      ######            
 *       #####     ######             
 *       #####    #######             
 *        ###     ######              
 *               ######               
 *              ######                
 *             #######                
 *            #######                 
 *            ######                  
 *           ######       ###         
 *          ######       #####        
 *         #######       #####        
 *         ######        #####        
 *        ######         #####        
 *       ######          #####        
 *      #######          #####        
 *      ######################        
 *      ######################        
 *      ######################        
 *      ######################        
 *      ######################        
 ********************/
{4761, 30, 4, 21, 22, 29},

/********************
 *  Character: '[', X advance: 30
 *  X offset: 13, Y offset: 19
 *  X size: 11, Y size: 38
 *               ##########                    
 *               ###########                   
 *               ###########                   
 *               ###########                   
 *               ##########                    
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               ##########                    
 *               ###########                   
 *               ###########                   
 *               ###########                   
 *               ##########                    
 ********************/
{4841, 30, 13, 19, 11, 38},

/********************
 *  Character: '\', X advance: 30
 *  X offset: 4, Y offset: 15
 *  X size: 22, Y size: 41
 *        #                           
 *      #####                         
 *      #####                         
 *      ######                        
 *       #####                        
 *       ######                       
 *        #####                       
 *        ######                      
 *         #####                      
 *         ######                     
 *          #####                     
 *          #####                     
 *           #####                    
 *           #####                    
 *           ######                   
 *            #####                   
 *            ######                  
 *             #####                  
 *             ######                 
 *              #####                 
 *              ######                
 *               #####                
 *               ######               
 *                #####               
 *                ######              
 *                 #####              
 *                 ######             
 *                  #####             
 *                  ######            
 *                   #####            
 *                   #####            
 *                   ######           
 *                    #####           
 *                    ######          
 *                     #####          
 *                     ######         
 *                      #####         
 *                      ######        
 *                       #####        
 *                       ####         
 *                         #          
 ********************/
{4894, 30, 4, 15, 22, 41},

/********************
 *  Character: ']', X advance: 30
 *  X offset: 5, Y offset: 19
 *  X size: 11, Y size: 38
 *        ##########                   
 *       ###########                   
 *       ###########                   
 *       ###########                   
 *        ##########                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *             #####                   
 *        ##########                   
 *       ###########                   
 *       ###########                   
 *       ###########                   
 *        ##########                   
 ********************/
{5007, 30, 5, 19, 11, 38},

/********************
 *  Character: '^', X advance: 30
 *  X offset: 4, Y offset: 18
 *  X size: 22, Y size: 16
 *                #                   
 *                ##                  
 *               ####                 
 *              ######                
 *             ########               
 *            ##########              
 *           ############             
 *           ############             
 *          ######  ######            
 *         ######   #######           
 *        #######    #######          
 *       #######      #######         
 *      #######        #######        
 *      ######          ######        
 *      #####            #####        
 *       ###              ###         
 ********************/
{5060, 30, 4, 18, 22, 16},

/********************
 *  Character: '_', X advance: 30
 *  X offset: 0, Y offset: 55
 *  X size: 30, Y size: 5
 *  ##############################
 *  ##############################
 *  ##############################
 *  ##############################
 *  ##############################
 ********************/
{5104, 30, 0, 55, 30, 5},

/********************
 *  Character: '`', X advance: 30
 *  X offset: 8, Y offset: 16
 *  X size: 9, Y size: 9
 *           ##                           
 *          ####                          
 *          #####                         
 *           #####                        
 *            #####                       
 *             #####                      
 *              #####                     
 *               ####                     
 *                ##                      
 ********************/
{5123, 30, 8, 16, 9, 9},

/********************
 *  Character: 'a', X advance: 30
 *  X offset: 2, Y offset: 27
 *  X size: 26, Y size: 24
 *            #########             
 *        ###############           
 *       #################          
 *       ##################         
 *       ##################         
 *        ####        ######        
 *                     #####        
 *                     #####        
 *            ##############        
 *         #################        
 *        ##################        
 *      ####################        
 *      ####################        
 *     #######        ######        
 *    ######           #####        
 *    #####            #####        
 *    #####            #####        
 *    #####          #######        
 *    ######      #############     
 *     #########################    
 *     #########################    
 *      ########################    
 *       ############# ########     
 *         ########                 
 ********************/
{5134, 30, 2, 27, 26, 24},

/********************
 *  Character: 'b', X advance: 30
 *  X offset: 0, Y offset: 19
 *  X size: 29, Y size: 32
 *   ########                     
 *  #########                     
 *  #########                     
 *  #########                     
 *   ########                     
 *      #####                     
 *      #####                     
 *      #####                     
 *      #####    ########         
 *      ##### #############       
 *      #####################     
 *      ######################    
 *      #######################   
 *      #########       #######   
 *      ########         #######  
 *      #######           ######  
 *      ######             ###### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      ######             ###### 
 *      #######           ######  
 *      ########         #######  
 *   #############      #######   
 *  ##########################    
 *  ##########################    
 *  ########################      
 *   ########  ############       
 *               #######          
 ********************/
{5212, 30, 0, 19, 29, 32},

/********************
 *  Character: 'c', X advance: 30
 *  X offset: 3, Y offset: 27
 *  X size: 25, Y size: 24
 *              ########   ###       
 *           ##################      
 *          ###################      
 *        #####################      
 *       ######################      
 *       ########      ########      
 *      #######          ######      
 *      ######            #####      
 *     ######             #####      
 *     #####               ###       
 *     #####                         
 *     #####                         
 *     #####                         
 *     #####                         
 *     #####                         
 *     ######                        
 *      #####               ###      
 *      #######            #####     
 *       ########        #######     
 *       #######################     
 *        #####################      
 *         ###################       
 *           ################        
 *              #########            
 ********************/
{5328, 30, 3, 27, 25, 24},

/********************
 *  Character: 'd', X advance: 30
 *  X offset: 2, Y offset: 19
 *  X size: 29, Y size: 32
 *                     ########     
 *                    #########     
 *                    #########     
 *                    #########     
 *                     ########     
 *                        #####     
 *                        #####     
 *                        #####     
 *            ########    #####     
 *          ############# #####     
 *        #####################     
 *       ######################     
 *      #######################     
 *      #######       #########     
 *     #######         ########     
 *     ######           #######     
 *    ######             ######     
 *    #####               #####     
 *    #####               #####     
 *    #####               #####     
 *    #####               #####     
 *    #####               #####     
 *    #####               #####     
 *    ######             ######     
 *     ######           #######     
 *     #######         ########     
 *      ########      ############  
 *       ########################## 
 *       ########################## 
 *        ######################### 
 *          ############  ########  
 *            ########              
 ********************/
{5403, 30, 2, 19, 29, 32},

/********************
 *  Character: 'e', X advance: 30
 *  X offset: 1, Y offset: 27
 *  X size: 26, Y size: 24
 *            #######              
 *         #############           
 *        ###############          
 *      ###################        
 *      ####################       
 *     ########      #######       
 *    #######          ######      
 *    ######            #####      
 *   ######             ######     
 *   #####               #####     
 *   #########################     
 *   #########################     
 *   #########################     
 *   ##########################    
 *   ##########################    
 *   #####                         
 *   ######                        
 *    ######                       
 *    ########         #######     
 *     #######################     
 *      ######################     
 *       #####################     
 *         #################       
 *            ##########           
 ********************/
{5519, 30, 1, 27, 26, 24},

/********************
 *  Character: 'f', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 24, Y size: 31
 *                 ##########         
 *               ##############       
 *              ################      
 *             #################      
 *            #################       
 *            ######                  
 *            #####                   
 *            #####                   
 *            #####                   
 *        ##################          
 *       ####################         
 *       ####################         
 *       ####################         
 *        ##################          
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *            #####                   
 *       ###################          
 *      #####################         
 *      #####################         
 *      #####################         
 *       ###################          
 ********************/
{5597, 30, 4, 19, 24, 31},

/********************
 *  Character: 'g', X advance: 30
 *  X offset: 2, Y offset: 27
 *  X size: 27, Y size: 33
 *            #######               
 *          ########### ########    
 *        #######################   
 *       ########################   
 *      #########################   
 *      #######     ############    
 *     #######       ########       
 *     ######         #######       
 *    ######           ######       
 *    #####             #####       
 *    #####             #####       
 *    #####             #####       
 *    #####             #####       
 *    #####             #####       
 *    #####             #####       
 *    ######           ######       
 *     #####           ######       
 *     ######         #######       
 *      #######     #########       
 *      #####################       
 *       ####################       
 *        ###################       
 *          ########### #####       
 *            #######   #####       
 *                      #####       
 *                      #####       
 *                     ######       
 *                    ######        
 *          ################        
 *         ################         
 *         ###############          
 *         ##############           
 *          ###########             
 ********************/
{5690, 30, 2, 27, 27, 33},

/********************
 *  Character: 'h', X advance: 30
 *  X offset: 1, Y offset: 19
 *  X size: 28, Y size: 31
 *    ########                     
 *   #########                     
 *   #########                     
 *   #########                     
 *    ########                     
 *       #####                     
 *       #####                     
 *       #####                     
 *       #####    ######           
 *       #####  ##########         
 *       ##### ############        
 *       ###################       
 *       ###################       
 *       #########     ######      
 *       #######       ######      
 *       ######         #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *    ##########      ##########   
 *   ############    ############  
 *   ############    ############  
 *   ############    ############  
 *    ##########      ##########   
 ********************/
{5802, 30, 1, 19, 28, 31},

/********************
 *  Character: 'i', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 23, Y size: 31
 *             ######                 
 *             ######                 
 *             ######                 
 *             ######                 
 *             ######                 
 *                                    
 *                                    
 *                                    
 *                                    
 *         ###########                
 *        ############                
 *        ############                
 *        ############                
 *         ###########                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *       #####################        
 *      #######################       
 *      #######################       
 *      #######################       
 *       #####################        
 ********************/
{5911, 30, 4, 19, 23, 31},

/********************
 *  Character: 'j', X advance: 30
 *  X offset: 5, Y offset: 19
 *  X size: 18, Y size: 41
 *                ######               
 *                ######               
 *                ######               
 *                ######               
 *                ######               
 *                                     
 *                                     
 *                                     
 *                                     
 *        #################            
 *       ##################            
 *       ##################            
 *       ##################            
 *        #################            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                    #####            
 *                   ######            
 *                  ######             
 *        ################             
 *       ################              
 *       ###############               
 *       ##############                
 *        ###########                  
 ********************/
{6001, 30, 5, 19, 18, 41},

/********************
 *  Character: 'k', X advance: 30
 *  X offset: 2, Y offset: 19
 *  X size: 26, Y size: 31
 *     ########                     
 *    #########                     
 *    #########                     
 *    #########                     
 *     ########                     
 *        #####                     
 *        #####                     
 *        #####                     
 *        #####                     
 *        #####    ##########       
 *        #####   ############      
 *        #####   ############      
 *        #####   ############      
 *        #####    ##########       
 *        #####  ########           
 *        ##### ########            
 *        ############              
 *        ###########               
 *        ##########                
 *        ##########                
 *        ###########               
 *        ############              
 *        ##### ########            
 *        #####  ########           
 *        #####   ########          
 *        #####     #######         
 *     ########      ##########     
 *    #########     ############    
 *    #########     ############    
 *    #########     ############    
 *     ########      ##########     
 ********************/
{6094, 30, 2, 19, 26, 31},

/********************
 *  Character: 'l', X advance: 30
 *  X offset: 4, Y offset: 19
 *  X size: 23, Y size: 31
 *         ###########                
 *        ############                
 *        ############                
 *        ############                
 *         ###########                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *               #####                
 *       #####################        
 *      #######################       
 *      #######################       
 *      #######################       
 *       #####################        
 ********************/
{6195, 30, 4, 19, 23, 31},

/********************
 *  Character: 'm', X advance: 30
 *  X offset: -1, Y offset: 27
 *  X size: 32, Y size: 23
 *            #####     #####       
 *   ####### ########  ########     
 *  ############################    
 *  ############################    
 *  #############################   
 *   #########    #######   #####   
 *     ######     ######    #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *     #####      #####     #####   
 *   #########    #######   ####### 
 *  ###########   ########  ########
 *  ###########   ########  ########
 *  ###########   ########  ########
 *   #########    #######   ####### 
 ********************/
{6285, 30, -1, 27, 32, 23},

/********************
 *  Character: 'n', X advance: 30
 *  X offset: 1, Y offset: 27
 *  X size: 27, Y size: 23
 *               ######            
 *     #######  ##########         
 *    ######## ############        
 *    ######################       
 *    ######################       
 *     ##########     #######      
 *       #######       ######      
 *       ######         #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *    ##########      #########    
 *   ############    ###########   
 *   ############    ###########   
 *   ############    ###########   
 *    ##########      #########    
 ********************/
{6377, 30, 1, 27, 27, 23},

/********************
 *  Character: 'o', X advance: 30
 *  X offset: 2, Y offset: 27
 *  X size: 26, Y size: 24
 *             ########             
 *           ############           
 *         ################         
 *        ##################        
 *       ####################       
 *      ########      ########      
 *     #######          #######     
 *     ######            ######     
 *    ######              #####     
 *    #####                #####    
 *    #####                #####    
 *    #####                #####    
 *    #####                #####    
 *    #####                #####    
 *    #####               ######    
 *    ######              ######    
 *     ######            ######     
 *     #######          #######     
 *      ########      ########      
 *       ####################       
 *        ##################        
 *         ################         
 *          ##############          
 *             ########             
 ********************/
{6455, 30, 2, 27, 26, 24},

/********************
 *  Character: 'p', X advance: 30
 *  X offset: 0, Y offset: 27
 *  X size: 29, Y size: 33
 *               #######          
 *   ########  ############       
 *  ######### ###############     
 *  ##########################    
 *  ###########################   
 *   ############      ########   
 *      #######          #######  
 *      ######            ######  
 *      ######             ###### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      #####               ##### 
 *      ######             ###### 
 *      ######             ###### 
 *      #######           ######  
 *      #########       ########  
 *      #######################   
 *      ######################    
 *      #####################     
 *      #####  ############       
 *      #####    ########         
 *      #####                     
 *      #####                     
 *      #####                     
 *      #####                     
 *      #####                     
 *      #####                     
 *   #############                
 *  ###############               
 *  ###############               
 *  ###############               
 *   #############                
 ********************/
{6533, 30, 0, 27, 29, 33},

/********************
 *  Character: 'q', X advance: 30
 *  X offset: 1, Y offset: 27
 *  X size: 29, Y size: 33
 *            #######              
 *         ############  ########  
 *       ############### ######### 
 *      ########################## 
 *     ########################### 
 *     #######       ############  
 *    #######          #######     
 *    #####             ######     
 *   ######             ######     
 *   #####               #####     
 *   #####               #####     
 *   #####               #####     
 *   #####               #####     
 *   ######             ######     
 *   ######             ######     
 *    ######           #######     
 *    ########       #########     
 *     #######################     
 *      ######################     
 *       #####################     
 *         ############  #####     
 *           ########    #####     
 *                       #####     
 *                       #####     
 *                       #####     
 *                       #####     
 *                       #####     
 *                       #####     
 *                  #############  
 *                 ############### 
 *                 ############### 
 *                 ############### 
 *                  #############  
 ********************/
{6653, 30, 1, 27, 29, 33},

/********************
 *  Character: 'r', X advance: 30
 *  X offset: 3, Y offset: 27
 *  X size: 26, Y size: 23
 *                      #####        
 *       #########   ##########      
 *      ##########  ############     
 *      ########## ##############    
 *      #########################    
 *       ################   ####     
 *           ##########              
 *           #########               
 *           #######                 
 *           ######                  
 *           #####                   
 *           #####                   
 *           #####                   
 *           #####                   
 *           #####                   
 *           #####                   
 *           #####                   
 *           #####                   
 *      ###################          
 *     #####################         
 *     #####################         
 *     #####################         
 *      ###################          
 ********************/
{6773, 30, 3, 27, 26, 23},

/********************
 *  Character: 's', X advance: 30
 *  X offset: 3, Y offset: 27
 *  X size: 22, Y size: 24
 *            ########   ##          
 *         #################         
 *        ##################         
 *       ###################         
 *      ####################         
 *      #######       ######         
 *      #####          #####         
 *      ######          ###          
 *      ##########                   
 *      ################             
 *       #################           
 *        #################          
 *         #################         
 *            ##############         
 *                 ##########        
 *      ###            ######        
 *     #####            #####        
 *     #####            #####        
 *     #######        #######        
 *     #####################         
 *     #####################         
 *     ####################          
 *      #################            
 *            #########              
 ********************/
{6848, 30, 3, 27, 22, 24},

/********************
 *  Character: 't', X advance: 30
 *  X offset: 1, Y offset: 21
 *  X size: 25, Y size: 30
 *         ###                     
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *    ####################         
 *   ######################        
 *   ######################        
 *   ######################        
 *    ####################         
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####                    
 *        #####          ####      
 *        ######       #######     
 *        ####################     
 *         ###################     
 *          #################      
 *           ##############        
 *             ########            
 ********************/
{6914, 30, 1, 21, 25, 30},

/********************
 *  Character: 'u', X advance: 30
 *  X offset: 1, Y offset: 28
 *  X size: 27, Y size: 23
 *    ########      #########      
 *   #########     ##########      
 *   #########     ##########      
 *   #########     ##########      
 *    ########      #########      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####          #####      
 *       #####         ######      
 *       ######       #######      
 *       #######    ###########    
 *        ######################   
 *        ######################   
 *         ############ ########   
 *          ##########  #######    
 *            ######               
 ********************/
{7008, 30, 1, 28, 27, 23},

/********************
 *  Character: 'v', X advance: 30
 *  X offset: 0, Y offset: 28
 *  X size: 30, Y size: 22
 *   ###########      ########### 
 *  #############    #############
 *  #############    #############
 *  #############    #############
 *   ###########      ########### 
 *      ######          ######    
 *       #####          #####     
 *       ######        ######     
 *        #####        #####      
 *        ######      ######      
 *         #####      #####       
 *         ######    ######       
 *          #####    #####        
 *          ######  ######        
 *           ###### #####         
 *           ############         
 *            ###########         
 *            ##########          
 *            ##########          
 *             ########           
 *             ########           
 *              ######            
 ********************/
{7086, 30, 0, 28, 30, 22},

/********************
 *  Character: 'w', X advance: 30
 *  X offset: 0, Y offset: 28
 *  X size: 30, Y size: 22
 *   #########          ######### 
 *  ###########        ###########
 *  ###########        ###########
 *  ###########        ###########
 *   #########          ######### 
 *     #####     #####    #####   
 *     #####    ######    #####   
 *     ######   #######   #####   
 *      #####  ########   #####   
 *      #####  ########  #####    
 *      #####  ######### #####    
 *      ################ #####    
 *       ############### #####    
 *       ####################     
 *       #########  #########     
 *       #########  #########     
 *        ########   ########     
 *        #######    #######      
 *        #######    #######      
 *        ######      ######      
 *         #####      ######      
 *         #####       ####       
 ********************/
{7169, 30, 0, 28, 30, 22},

/********************
 *  Character: 'x', X advance: 30
 *  X offset: 1, Y offset: 28
 *  X size: 28, Y size: 22
 *     #########      #########    
 *    ###########    ###########   
 *    ###########    ###########   
 *    ###########    ###########   
 *     #########      #########    
 *       ########    ########      
 *        ########  ########       
 *         ################        
 *           ############          
 *            ##########           
 *             ########            
 *            ##########           
 *           ############          
 *          ##############         
 *        ########  ########       
 *       ########    ########      
 *      ########      ########     
 *    ##########      ##########   
 *   ############    ############  
 *   ############    ############  
 *   ############    ############  
 *    ##########      ##########   
 ********************/
{7252, 30, 1, 28, 28, 22},

/********************
 *  Character: 'y', X advance: 30
 *  X offset: 1, Y offset: 28
 *  X size: 28, Y size: 32
 *    #########        #########   
 *   ###########      ###########  
 *   ###########      ###########  
 *   ###########      ###########  
 *    #########        #########   
 *      #####            #####     
 *      ######          ######     
 *       #####          #####      
 *       ######        ######      
 *        #####        #####       
 *        ######      ######       
 *         ######     #####        
 *         ######    ######        
 *          ######  ######         
 *          ######  #####          
 *           ############          
 *           ###########           
 *            ##########           
 *            #########            
 *             ########            
 *             #######             
 *              ######             
 *              #####              
 *             ######              
 *             #####               
 *            ######               
 *           ######                
 *    ###############              
 *   #################             
 *   #################             
 *   #################             
 *    ###############              
 ********************/
{7329, 30, 1, 28, 28, 32},

/********************
 *  Character: 'z', X advance: 30
 *  X offset: 4, Y offset: 28
 *  X size: 22, Y size: 22
 *       ####################         
 *       ####################         
 *       ####################         
 *       ####################         
 *       ####################         
 *       #####       #######          
 *       #####      #######           
 *       #####     #######            
 *        ###     #######             
 *               #######              
 *              ######                
 *             ######                 
 *            ######                  
 *           ######                   
 *          ######        ###         
 *         ######        #####        
 *        ######         #####        
 *       #####################        
 *      ######################        
 *      ######################        
 *      ######################        
 *      ######################        
 ********************/
{7441, 30, 4, 28, 22, 22},

/********************
 *  Character: '{', X advance: 30
 *  X offset: 7, Y offset: 19
 *  X size: 15, Y size: 39
 *                  #####                
 *                 #######               
 *                ########               
 *               #########               
 *               ########                
 *              ######                   
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *             #####                     
 *          ########                     
 *         ########                      
 *         #######                       
 *         ########                      
 *          ########                     
 *             #####                     
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              #####                    
 *              ######                   
 *               ########                
 *               #########               
 *                ########               
 *                 #######               
 *                  #####                
 ********************/
{7502, 30, 7, 19, 15, 39},

/********************
 *  Character: '|', X advance: 30
 *  X offset: 13, Y offset: 18
 *  X size: 5, Y size: 39
 *                ###                          
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *               #####                         
 *                ##                           
 ********************/
{7576, 30, 13, 18, 5, 39},

/********************
 *  Character: '}', X advance: 30
 *  X offset: 8, Y offset: 19
 *  X size: 15, Y size: 39
 *           #####                        
 *          #######                       
 *          ########                      
 *          #########                     
 *           ########                     
 *              ######                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *                #####                   
 *                ########                
 *                 ########               
 *                  #######               
 *                 ########               
 *                ########                
 *                #####                   
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *               #####                    
 *              ######                    
 *           ########                     
 *          #########                     
 *          ########                      
 *          #######                       
 *           #####                        
 ********************/
{7601, 30, 8, 19, 15, 39},

/********************
 *  Character: '~', X advance: 30
 *  X offset: 3, Y offset: 31
 *  X size: 24, Y size: 10
 *          #####                    
 *         ########        ###       
 *       ###########      #####      
 *       ############    ######      
 *      ##############  #######      
 *     #######  ##############       
 *     ######    ############        
 *     #####      ##########         
 *      ###         #######          
 *                   #####           
 ********************/
{7675, 30, 3, 31, 24, 10},

};

const monoGFX_font_t monoGFX_FreeMonoBold_24pt = {bitmapBuffer, 7705, glyphs, 20};
