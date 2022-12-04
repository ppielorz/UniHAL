#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[4333] =
{
    0x00,0xe0,0xe0,0xe0,0x60,0x70,0x70,0x30,0x30,0x38,0x18,0x18,0x18,0x1c,0x0c,0x0c,
    0x00,0x00,0x00,0x00,0x0e,0x0f,0x0f,0x07,0x1f,0xff,0xe1,0x3d,0xbc,0x87,0x77,0x70,
    0x0e,0xce,0xc1,0x39,0x18,0x03,0x63,0x60,0x04,0x04,0x00,0xc6,0x00,0x18,0x03,0x20,
    0x04,0xc0,0x18,0x00,0x63,0x00,0x84,0x00,0x10,0x02,0x60,0x0c,0x80,0x31,0xe0,0xff,
    0xcf,0xff,0x1f,0x30,0x06,0x40,0x08,0x00,0x21,0x00,0xc6,0x00,0x18,0x03,0xff,0x7f,
    0xfc,0xff,0x01,0x63,0x00,0x84,0x00,0x10,0x02,0x60,0x0c,0x80,0x31,0x00,0x42,0x00,
    0x8c,0x01,0x30,0x06,0x40,0x08,0x00,0x00,0x08,0x00,0x18,0x00,0xfc,0x04,0xfe,0x0f,
    0x0e,0x1e,0x06,0x10,0x06,0x20,0x0c,0x00,0x18,0x00,0x70,0x00,0xe0,0x03,0x00,0x7f,
    0x00,0xf0,0x03,0x00,0x0f,0x00,0x18,0x00,0x30,0x03,0x60,0x06,0xe0,0x1c,0xe0,0x78,
    0xe0,0xd0,0xff,0x00,0x7e,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0xc0,0x00,0x00,0x80,
    0x07,0xc0,0x1f,0xc0,0x71,0x80,0xc1,0x80,0x81,0x01,0x03,0x03,0x06,0x03,0x1c,0x07,
    0xf0,0x07,0xc0,0x07,0x00,0x80,0x07,0xe0,0x03,0x78,0x00,0x1f,0xc0,0xc7,0x07,0xc0,
    0x1f,0xc0,0x71,0xc0,0xc1,0x80,0x81,0x01,0x03,0x03,0x06,0x03,0x1c,0x07,0xf0,0x07,
    0xc0,0x03,0x00,0x00,0x0f,0xe0,0x1f,0x38,0x04,0x0e,0x00,0x03,0x80,0x01,0xc0,0x00,
    0xc0,0x00,0x60,0x00,0x3c,0x00,0x37,0xd8,0x10,0x6e,0x18,0x19,0xcc,0x0c,0x3c,0x06,
    0x1e,0x03,0x86,0xc3,0x83,0x3f,0x8f,0x8f,0x03,0xde,0xbf,0xf7,0xce,0x39,0x63,0x0c,
    0x00,0x01,0x03,0x03,0x03,0x02,0x06,0x06,0x0c,0x0c,0x18,0x18,0x30,0x60,0xe0,0xc0,
    0x80,0x01,0x03,0x06,0x0c,0x18,0x30,0x60,0xc0,0x00,0x01,0x06,0x0c,0x18,0x20,0x00,
    0x40,0x80,0x01,0x03,0x06,0x08,0x30,0x60,0xc0,0x80,0x01,0x03,0x06,0x0c,0x18,0x30,
    0x30,0x60,0xc0,0xc0,0x81,0x01,0x03,0x03,0x06,0x06,0x06,0x0c,0x0c,0x0c,0x08,0x00,
    0x00,0x01,0x60,0x00,0x18,0x00,0x06,0xc0,0xc0,0x30,0xf8,0x8d,0xf3,0x3f,0xf0,0x01,
    0x3c,0x80,0x19,0x20,0x06,0x0c,0x83,0xc1,0x00,0x00,0x0c,0x00,0x30,0x00,0x60,0x00,
    0x80,0x01,0x00,0x06,0x00,0x18,0x00,0x70,0x00,0xc0,0x00,0xff,0xff,0xff,0xff,0x0f,
    0x30,0x00,0x60,0x00,0x80,0x01,0x00,0x06,0x00,0x18,0x00,0x60,0x00,0xc0,0x00,0x00,
    0x03,0x00,0xe0,0xc3,0x07,0x0f,0x1e,0x78,0xf0,0xc0,0x81,0x03,0x06,0x1c,0x30,0x00,
    0xff,0xff,0xff,0xff,0x03,0xee,0xff,0xef,0x00,0x00,0x00,0x0c,0x00,0x60,0x00,0x00,
    0x02,0x00,0x30,0x00,0x80,0x01,0x00,0x08,0x00,0xc0,0x00,0x00,0x06,0x00,0x20,0x00,
    0x00,0x03,0x00,0x18,0x00,0xc0,0x00,0x00,0x0c,0x00,0x60,0x00,0x00,0x03,0x00,0x30,
    0x00,0x80,0x01,0x00,0x0c,0x00,0x40,0x00,0x00,0x06,0x00,0x30,0x00,0x00,0x01,0x00,
    0x18,0x00,0xc0,0x00,0x00,0x04,0x00,0x60,0x00,0x00,0x03,0x00,0x10,0x00,0x00,0x00,
    0x00,0x1f,0xc0,0x3f,0xe0,0x70,0x70,0x60,0x38,0xc0,0x18,0xc0,0x0c,0xc0,0x0c,0xc0,
    0x0c,0xc0,0x06,0xc0,0x06,0xc0,0x06,0x40,0x02,0x40,0x03,0x60,0x03,0x60,0x03,0x20,
    0x03,0x30,0x03,0x30,0x03,0x18,0x03,0x18,0x06,0x0c,0x0e,0x07,0xfc,0x03,0xf8,0x00,
    0x00,0x1c,0x00,0x0f,0xc0,0x06,0x38,0x03,0xc6,0x81,0x61,0x00,0x30,0x00,0x18,0x00,
    0x0c,0x00,0x03,0x80,0x01,0xc0,0x00,0x60,0x00,0x30,0x00,0x0c,0x00,0x06,0x00,0x03,
    0x80,0x01,0xc0,0x00,0x30,0x00,0x18,0xf0,0xff,0xff,0xff,0x01,0x00,0xf8,0x00,0xf0,
    0x0f,0xe0,0xe0,0x80,0x01,0x0e,0x0c,0x60,0x30,0x00,0x83,0x00,0x18,0x00,0xc0,0x00,
    0x00,0x03,0x00,0x18,0x00,0x60,0x00,0xc0,0x01,0x00,0x03,0x00,0x0c,0x00,0x30,0x00,
    0xe0,0x00,0x80,0x01,0x00,0x06,0x00,0x1c,0x00,0x30,0x00,0xc0,0x00,0x00,0x03,0x60,
    0xf8,0xff,0xe3,0xff,0x0f,0x00,0x00,0xfc,0x00,0xf8,0x1f,0xe0,0xe0,0x80,0x01,0x0e,
    0x00,0x60,0x00,0x00,0x03,0x00,0x18,0x00,0x60,0x00,0x80,0x03,0x00,0x06,0x80,0x1f,
    0x00,0x7c,0x00,0x00,0x07,0x00,0x60,0x00,0x00,0x06,0x00,0x30,0x00,0x80,0x01,0x00,
    0x0c,0x00,0x30,0x00,0xc0,0x31,0x00,0x07,0x07,0x1e,0xf0,0x3f,0x00,0x7e,0x00,0x00,
    0x00,0xf0,0x00,0x78,0x00,0x6c,0x00,0x64,0x00,0x66,0x00,0x63,0x80,0x71,0x80,0x30,
    0xc0,0x30,0x60,0x30,0x30,0x30,0x10,0x30,0x18,0x18,0x0c,0x18,0x06,0x18,0x02,0x18,
    0xff,0x7f,0xff,0x7f,0x00,0x0c,0x00,0x0c,0x00,0x0c,0x00,0x0c,0xc0,0x3f,0xc0,0x3f,
    0xc0,0xff,0x03,0xff,0x0f,0x0c,0x00,0x10,0x00,0x40,0x00,0x80,0x01,0x00,0x06,0x00,
    0x08,0x00,0x20,0x3e,0x80,0xfe,0x01,0x0f,0x0e,0x00,0x70,0x00,0x80,0x01,0x00,0x06,
    0x00,0x18,0x00,0x60,0x00,0xc0,0x01,0x00,0x03,0x00,0x0e,0x00,0x18,0x03,0x30,0x3c,
    0x70,0xc0,0xff,0x00,0xfc,0x00,0x00,0x00,0xf8,0x00,0xfe,0x03,0x1e,0x00,0x0e,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x0e,0x00,0x0c,0x00,0x0c,0x0f,0x98,0x3f,0xb0,0xe3,
    0xb0,0x81,0x63,0x01,0xc6,0x01,0x8c,0x01,0x18,0x03,0x30,0x06,0x60,0x0c,0x60,0x38,
    0xc0,0x60,0xc0,0xc0,0xe1,0x00,0xff,0x00,0x7c,0x00,0x00,0xfe,0xff,0xff,0xff,0x00,
    0x18,0x00,0x04,0x00,0x03,0x80,0x00,0x60,0x00,0x10,0x00,0x0c,0x00,0x02,0x80,0x01,
    0x40,0x00,0x30,0x00,0x0c,0x00,0x06,0x80,0x01,0xc0,0x00,0x30,0x00,0x18,0x00,0x06,
    0x00,0x03,0xc0,0x00,0x20,0x00,0x10,0x00,0x00,0x00,0x3f,0x80,0xff,0x80,0x83,0x83,
    0x03,0x0e,0x03,0x18,0x03,0x30,0x06,0x60,0x0c,0x60,0x38,0xe0,0xe0,0xe0,0x80,0x7f,
    0x00,0x7f,0x80,0x83,0x83,0x01,0x86,0x01,0x18,0x03,0x30,0x03,0x60,0x06,0xc0,0x0c,
    0xc0,0x18,0x80,0x71,0x80,0xc1,0xc1,0x01,0xff,0x01,0xf8,0x00,0x00,0x00,0x3e,0x00,
    0xfe,0x03,0x1c,0x1c,0x38,0x60,0x70,0x80,0xc3,0x00,0x8c,0x01,0x30,0x06,0xc0,0x18,
    0x00,0x63,0x00,0x8e,0x01,0x34,0x0e,0xf8,0x70,0xb8,0x81,0x7f,0x06,0x7c,0x1c,0x00,
    0x30,0x00,0xe0,0x00,0xc0,0x01,0x80,0x03,0x00,0x07,0x00,0x0e,0x00,0x1f,0xf0,0x1f,
    0x80,0x1f,0x00,0x00,0x38,0x3e,0x9f,0x8f,0x03,0x00,0x00,0x00,0x00,0xc0,0xf1,0xf9,
    0x7c,0x1c,0x00,0x00,0x07,0xf8,0x80,0x0f,0xf8,0x00,0x07,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x03,0x3e,0xf0,0x01,0x0f,0x78,0x80,0x07,0x3c,0xc0,0x01,0x0e,0x60,
    0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x38,0x00,0x70,0x00,0xe0,0x00,0xc0,
    0x01,0x80,0x03,0x00,0x07,0x00,0x0e,0x00,0x1c,0x00,0x38,0x00,0x00,0x07,0x00,0xf0,
    0x00,0x00,0x0e,0x00,0xc0,0x01,0x00,0x1c,0x00,0x80,0x03,0x00,0x78,0x00,0x00,0x03,
    0xfe,0xff,0xef,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,
    0xff,0xf7,0xff,0x3f,0x00,0x00,0x00,0x80,0x03,0x00,0x78,0x00,0x00,0x07,0x00,0xe0,
    0x00,0x00,0x0e,0x00,0xc0,0x01,0x00,0x1c,0x00,0x80,0x03,0x00,0x38,0x00,0x70,0x00,
    0xe0,0x00,0xc0,0x01,0x80,0x03,0x00,0x07,0x00,0x0e,0x00,0x1c,0x00,0x30,0x00,0x00,
    0xf0,0x83,0xff,0x19,0xb8,0x01,0x3e,0x80,0x01,0x30,0x00,0x06,0x60,0x00,0x0e,0x60,
    0x00,0x07,0x38,0x80,0x01,0x30,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x78,0x80,0x0f,
    0xf0,0x01,0x1c,0x00,0x00,0x3e,0x00,0xff,0x01,0x87,0x03,0x07,0x0e,0x07,0x18,0x06,
    0x30,0x06,0x20,0x0c,0x60,0x0c,0xf8,0x18,0xfc,0x31,0x9c,0x61,0x0c,0x63,0x0c,0xc6,
    0x18,0x8c,0x31,0x18,0xe3,0x38,0x86,0x3f,0x06,0xfe,0x0c,0x00,0x18,0x00,0x30,0x00,
    0x60,0x00,0x80,0x01,0x00,0x07,0x03,0xfc,0x03,0xf0,0x01,0x00,0x00,0xff,0x00,0xe0,
    0x7f,0x00,0x00,0x1a,0x00,0x40,0x06,0x00,0x98,0x01,0x00,0x62,0x00,0x40,0x18,0x00,
    0x10,0x06,0x00,0x02,0x03,0xc0,0xc0,0x00,0x10,0x30,0x00,0x06,0x0c,0x80,0x00,0x03,
    0xf0,0xff,0x00,0xfe,0x7f,0x80,0x01,0x18,0x30,0x00,0x06,0x04,0x80,0x81,0x01,0x60,
    0x30,0x00,0x18,0xff,0xe0,0xff,0x1f,0xf8,0x07,0xf0,0xff,0x03,0xfe,0xff,0x01,0x03,
    0x38,0x60,0x00,0x0c,0x0c,0x80,0x81,0x01,0x30,0x30,0x00,0x07,0x03,0x60,0x60,0x00,
    0x07,0xfc,0x3f,0x80,0xff,0x0f,0x30,0x80,0x03,0x07,0xe0,0x60,0x00,0x18,0x0c,0x00,
    0x83,0x01,0x60,0x30,0x00,0x0c,0x06,0xc0,0x60,0x00,0x1c,0x0c,0xc0,0xf1,0xff,0x1f,
    0xfe,0xff,0x00,0x00,0x7e,0x08,0xf8,0xdf,0xc0,0x81,0x0f,0x0f,0xf0,0x30,0x00,0x86,
    0x01,0x40,0x0c,0x00,0xc6,0x00,0x00,0x06,0x00,0x60,0x00,0x00,0x06,0x00,0x60,0x00,
    0x00,0x03,0x00,0x30,0x00,0x00,0x03,0x00,0x30,0x00,0x00,0x03,0x00,0x60,0x00,0x18,
    0x0e,0xc0,0xc0,0x03,0x07,0xf8,0x3f,0x00,0x7e,0x00,0x00,0xf0,0xff,0x01,0xfe,0x7f,
    0x00,0x03,0x1c,0x30,0x00,0x07,0x06,0xc0,0xc0,0x00,0x38,0x18,0x00,0x06,0x03,0xc0,
    0x70,0x00,0x18,0x06,0x00,0xc3,0x00,0x60,0x18,0x00,0x06,0x03,0xc0,0x60,0x00,0x18,
    0x06,0x00,0xc3,0x00,0x30,0x18,0x00,0x03,0x03,0x70,0x60,0x00,0x07,0x06,0x78,0xf0,
    0xff,0x03,0xfe,0x1f,0x00,0xf0,0xff,0x1f,0xfc,0xff,0x07,0x0c,0x80,0x01,0x03,0x60,
    0xc0,0x00,0x18,0x30,0x00,0x02,0x0c,0x00,0x80,0x81,0x01,0x60,0x60,0x00,0xf8,0x0f,
    0x00,0xfe,0x03,0x80,0xc1,0x00,0x70,0x30,0x00,0x0c,0x00,0x00,0x03,0x00,0xc0,0x00,
    0x10,0x30,0x00,0x06,0x0c,0x80,0x81,0x01,0x20,0x60,0x00,0x08,0xff,0xff,0xc3,0xff,
    0xff,0x00,0xf0,0xff,0x3f,0xfc,0xff,0x0f,0x0c,0x00,0x03,0x03,0xc0,0xc0,0x00,0x10,
    0x30,0x00,0x04,0x0c,0x00,0x80,0x81,0x01,0x60,0x60,0x00,0xf8,0x0f,0x00,0xfe,0x03,
    0x80,0xc1,0x00,0x70,0x30,0x00,0x0c,0x00,0x00,0x03,0x00,0xc0,0x00,0x00,0x30,0x00,
    0x00,0x0c,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0xff,0x07,0xc0,0xff,0x01,0x00,0x00,
    0x7e,0x08,0xf8,0xdf,0xc0,0x83,0x0f,0x0f,0xe0,0x30,0x00,0x84,0x01,0x40,0x0c,0x00,
    0xc0,0x00,0x00,0x06,0x00,0x60,0x00,0x00,0x06,0x00,0x70,0x00,0x00,0x03,0xfc,0x37,
    0xc0,0x7f,0x03,0x00,0x33,0x00,0x30,0x03,0x80,0x71,0x00,0x18,0x0e,0x80,0xc1,0x03,
    0x18,0xf8,0xff,0x01,0xfe,0x01,0x00,0xe0,0x0f,0x3f,0xf0,0xc7,0x1f,0x30,0x00,0x03,
    0x18,0x80,0x01,0x0c,0xc0,0x00,0x06,0x60,0x00,0x03,0x38,0xc0,0x01,0x0c,0x60,0x00,
    0x06,0xf0,0xff,0x03,0xf8,0xff,0x01,0x0c,0xc0,0x00,0x06,0x30,0x80,0x01,0x18,0xc0,
    0x00,0x0c,0x60,0x00,0x06,0x30,0x00,0x03,0x18,0xc0,0x00,0x06,0x60,0x00,0x03,0x30,
    0xf0,0x0f,0xff,0xf8,0x87,0x3f,0x00,0xf0,0xff,0x87,0xff,0x3f,0x00,0x03,0x00,0x18,
    0x00,0xc0,0x00,0x00,0x06,0x00,0x38,0x00,0xc0,0x00,0x00,0x06,0x00,0x30,0x00,0x80,
    0x01,0x00,0x0c,0x00,0x30,0x00,0x80,0x01,0x00,0x0c,0x00,0x60,0x00,0x00,0x03,0x00,
    0x0c,0x00,0x60,0x00,0x00,0x03,0xe0,0xff,0x87,0xff,0x3f,0x00,0x00,0xfe,0x7f,0x00,
    0xff,0x3f,0x00,0xc0,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x0c,0x00,0x00,0x06,
    0x00,0x00,0x03,0x00,0x80,0x01,0x00,0xc0,0x00,0x00,0x30,0x00,0x00,0x18,0x00,0x00,
    0x0c,0x30,0x00,0x06,0x18,0x80,0x03,0x0c,0xc0,0x00,0x07,0x60,0x80,0x01,0x38,0xc0,
    0x00,0x0e,0xe0,0xc1,0x03,0xe0,0xff,0x00,0xc0,0x0f,0x00,0x00,0xf0,0x0f,0x7e,0xf8,
    0x07,0x3f,0x30,0x00,0x06,0x18,0xc0,0x01,0x0c,0x30,0x00,0x06,0x0c,0x00,0x83,0x01,
    0xc0,0x60,0x00,0x60,0x18,0x00,0x30,0x07,0x00,0xd8,0x07,0x00,0x3c,0x06,0x00,0x07,
    0x06,0x80,0x01,0x06,0xc0,0x00,0x03,0x60,0x80,0x01,0x30,0x80,0x00,0x18,0xc0,0x00,
    0x06,0x60,0x00,0x03,0x30,0xf0,0x1f,0xf8,0xf8,0x0f,0x78,0x00,0xf8,0x7f,0x80,0xff,
    0x07,0x00,0x03,0x00,0x38,0x00,0x80,0x01,0x00,0x18,0x00,0x80,0x01,0x00,0x18,0x00,
    0x80,0x01,0x00,0x0c,0x00,0xc0,0x00,0x00,0x0c,0x00,0xc0,0x00,0x00,0x0c,0x00,0xe0,
    0x00,0x06,0x06,0x60,0x60,0x00,0x06,0x06,0x60,0x60,0x00,0x06,0x07,0x30,0xff,0xff,
    0xf3,0xff,0x3f,0x00,0xf0,0x03,0xe0,0xc3,0x0f,0xc0,0x07,0x36,0x80,0x07,0xd8,0x00,
    0x1a,0x60,0x03,0x6c,0x80,0x19,0x90,0x01,0x66,0x20,0x06,0x8c,0xc1,0x0c,0x30,0x06,
    0x31,0xc0,0x30,0xc2,0x00,0xc3,0x08,0x03,0x0c,0x13,0x0c,0x38,0x2c,0x18,0x60,0xe0,
    0x60,0x80,0x81,0x81,0x01,0x06,0x00,0x06,0x18,0x00,0x18,0x60,0x00,0x70,0xc0,0x00,
    0xc0,0x00,0x03,0x00,0x03,0xff,0xc0,0x3f,0xfc,0x03,0xff,0x00,0xf8,0x01,0xff,0xf8,
    0x01,0xff,0xc0,0x01,0x10,0x40,0x03,0x18,0x40,0x03,0x18,0x60,0x06,0x08,0x60,0x06,
    0x08,0x60,0x06,0x08,0x20,0x0c,0x0c,0x20,0x0c,0x0c,0x30,0x08,0x04,0x30,0x18,0x04,
    0x10,0x18,0x06,0x10,0x30,0x06,0x18,0x30,0x06,0x18,0x20,0x02,0x18,0x60,0x02,0x08,
    0x60,0x03,0x08,0xc0,0x03,0x0c,0xc0,0x03,0x7f,0xc0,0x01,0x7f,0x80,0x01,0x00,0x7e,
    0x00,0xf8,0x1f,0xc0,0xc1,0x03,0x07,0x70,0x38,0x00,0x86,0x01,0xe0,0x0c,0x00,0xec,
    0x00,0xc0,0x06,0x00,0x6c,0x00,0xc0,0x03,0x00,0x3c,0x00,0xc0,0x03,0x00,0x36,0x00,
    0x60,0x03,0x00,0x33,0x00,0x30,0x07,0x80,0x61,0x00,0x0c,0x0e,0xe0,0xc0,0x83,0x03,
    0xf8,0x1f,0x00,0x7e,0x00,0x00,0xf0,0xff,0x01,0xfe,0xff,0x00,0x03,0x38,0x60,0x00,
    0x0e,0x0c,0x80,0x81,0x01,0x30,0x30,0x00,0x06,0x03,0xe0,0x60,0x00,0x0c,0x0c,0xc0,
    0x80,0x01,0x0e,0xf0,0xff,0x00,0xff,0x07,0x60,0x00,0x00,0x0c,0x00,0x80,0x01,0x00,
    0x30,0x00,0x00,0x06,0x00,0x60,0x00,0x00,0x0c,0x00,0xf0,0x7f,0x00,0xfe,0x0f,0x00,
    0x00,0x7e,0x00,0xf8,0x1f,0xc0,0xc1,0x03,0x07,0x70,0x30,0x00,0x86,0x01,0xe0,0x0c,
    0x00,0xec,0x00,0xc0,0x06,0x00,0x6c,0x00,0xc0,0x03,0x00,0x3c,0x00,0xc0,0x03,0x00,
    0x36,0x00,0x60,0x03,0x00,0x37,0x00,0x30,0x07,0x80,0x61,0x00,0x0c,0x0e,0xe0,0xc0,
    0x83,0x03,0xf8,0x1f,0x00,0x7f,0x00,0x60,0x00,0x80,0x7f,0x08,0xfc,0xff,0xe0,0xc0,
    0x03,0x00,0xf0,0xff,0x01,0xfe,0xff,0x00,0x03,0x38,0x60,0x00,0x0e,0x0c,0x80,0x81,
    0x01,0x30,0x30,0x00,0x06,0x03,0xe0,0x60,0x00,0x0c,0x0c,0xe0,0x80,0x01,0x0f,0xf0,
    0x7f,0x00,0xff,0x03,0x60,0xc0,0x00,0x0c,0x30,0x80,0x01,0x0c,0x30,0x00,0x01,0x06,
    0x60,0x60,0x00,0x08,0x0c,0x00,0xf3,0x1f,0xe0,0xff,0x03,0x38,0x00,0x7e,0x04,0xfc,
    0x2f,0xf0,0x60,0xc1,0x01,0x0e,0x06,0x60,0x18,0x00,0xc3,0x00,0x08,0x06,0x00,0x30,
    0x00,0x00,0x03,0x00,0xf0,0x01,0x00,0x7c,0x00,0x00,0x0e,0x00,0xe0,0x00,0x00,0xc6,
    0x00,0x30,0x06,0x80,0x31,0x00,0xc6,0x03,0x38,0x3e,0xf0,0xb0,0xff,0x81,0xf0,0x03,
    0x00,0xfe,0xff,0xf7,0xff,0xbf,0xc0,0x80,0x07,0x06,0x36,0x30,0xb0,0x81,0x81,0x01,
    0x0c,0x00,0x30,0x00,0x80,0x01,0x00,0x0c,0x00,0x60,0x00,0x00,0x03,0x00,0x0c,0x00,
    0x60,0x00,0x00,0x03,0x00,0x18,0x00,0xc0,0x00,0x00,0x07,0x00,0x18,0x00,0xc0,0x00,
    0xf0,0xff,0x80,0xff,0x07,0x00,0xfe,0xe1,0xdf,0x3f,0xfc,0x63,0x00,0x1c,0x0c,0x80,
    0xc1,0x00,0x30,0x18,0x00,0x06,0x03,0xc0,0x60,0x00,0x1c,0x0c,0x80,0xc1,0x00,0x30,
    0x18,0x00,0x06,0x03,0xc0,0x60,0x00,0x0c,0x0e,0x80,0xc1,0x00,0x30,0x18,0x00,0x06,
    0x03,0x60,0x60,0x00,0x0e,0x18,0xe0,0x00,0x07,0x0f,0xc0,0xff,0x00,0xe0,0x07,0x00,
    0x7f,0xc0,0xff,0x1f,0xf0,0xcf,0x00,0x40,0x30,0x00,0x18,0x0c,0x00,0x03,0x03,0x40,
    0x80,0x00,0x18,0x20,0x00,0x02,0x18,0xc0,0x00,0x06,0x18,0x80,0x01,0x02,0x60,0xc0,
    0x00,0x10,0x10,0x00,0x04,0x06,0x00,0xc3,0x00,0xc0,0x10,0x00,0x30,0x06,0x00,0xcc,
    0x00,0x00,0x12,0x00,0x80,0x06,0x00,0xe0,0x00,0x00,0x38,0x00,0x00,0xff,0xc0,0xff,
    0x3f,0xf0,0x6f,0x00,0xc0,0x18,0x00,0x30,0x06,0x00,0x84,0x81,0x83,0x61,0xe0,0x60,
    0x18,0x34,0x08,0x06,0x0d,0x83,0x21,0xc3,0x70,0xc8,0x10,0x0c,0x31,0x06,0x43,0x8c,
    0xc1,0x08,0x23,0x30,0xc2,0x0c,0x4c,0x30,0x03,0x13,0x4c,0xc0,0x02,0x1b,0xb0,0xc0,
    0x06,0x1c,0xf0,0x00,0x07,0x38,0xc0,0x00,0x0e,0x00,0xf0,0x07,0x7e,0xf8,0x01,0x3f,
    0x30,0x00,0x06,0x30,0x80,0x01,0x18,0x60,0x00,0x18,0x18,0x00,0x0c,0x06,0x00,0x8c,
    0x01,0x00,0x66,0x00,0x00,0x1e,0x00,0x00,0x06,0x00,0x80,0x03,0x00,0x60,0x03,0x00,
    0x98,0x01,0x00,0x86,0x01,0x80,0xc1,0x00,0x60,0xc0,0x00,0x18,0xc0,0x00,0x06,0x60,
    0x80,0x01,0x60,0xf0,0x07,0x7e,0xf8,0x83,0x3f,0x00,0x3f,0xc0,0xff,0x03,0x7e,0x0c,
    0x80,0x81,0x01,0x0c,0x18,0x40,0x00,0x03,0x06,0x30,0x30,0x00,0x87,0x01,0x60,0x0c,
    0x00,0x6e,0x00,0xc0,0x03,0x00,0x1c,0x00,0x80,0x01,0x00,0x0c,0x00,0xc0,0x00,0x00,
    0x0c,0x00,0xc0,0x00,0x00,0x0c,0x00,0x60,0x00,0x00,0x06,0x00,0xff,0x0f,0xf0,0xff,
    0x00,0x00,0xe0,0xff,0x83,0xff,0x0f,0x02,0x30,0x0c,0x60,0x30,0xc0,0xc0,0x80,0x01,
    0x01,0x03,0x00,0x06,0x00,0x0c,0x00,0x38,0x00,0x60,0x00,0xc0,0x00,0x80,0x01,0x00,
    0x03,0x00,0x06,0x00,0x0c,0x20,0x18,0xc0,0x30,0x00,0x63,0x00,0xcc,0x00,0x10,0xff,
    0x7f,0xfc,0xff,0x01,0xc0,0x0f,0xfe,0x60,0x00,0x02,0x20,0x00,0x02,0x30,0x00,0x03,
    0x30,0x00,0x01,0x10,0x80,0x01,0x18,0x80,0x01,0x08,0x80,0x00,0x0c,0xc0,0x00,0x0c,
    0x40,0x00,0x04,0x60,0x00,0x06,0x60,0x00,0x02,0x20,0x00,0x03,0xf0,0x03,0x3f,0x00,
    0x03,0x03,0x07,0x06,0x06,0x06,0x0c,0x0c,0x0c,0x0c,0x18,0x18,0x18,0x18,0x30,0x30,
    0x30,0x30,0x60,0x60,0x60,0x60,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0xc0,0x0f,0xfc,0x00,
    0x04,0x40,0x00,0x04,0x60,0x00,0x06,0x20,0x00,0x02,0x20,0x00,0x03,0x30,0x00,0x01,
    0x10,0x80,0x01,0x18,0x80,0x01,0x08,0x80,0x00,0x0c,0xc0,0x00,0x0c,0x40,0x00,0x04,
    0x60,0x00,0x06,0x60,0xf0,0x03,0x3f,0x00,0x00,0x02,0x80,0x01,0xe0,0x01,0xd8,0x00,
    0xc6,0x80,0xc1,0x60,0x60,0x18,0x60,0x06,0xb0,0x01,0x10,0xff,0xff,0xff,0xff,0xff,
    0x3f,0x63,0x18,0x86,0x31,0x80,0x3f,0xe0,0xff,0x00,0x80,0x03,0x00,0x06,0x00,0x0c,
    0x00,0x18,0xf8,0x3b,0xfc,0x3f,0x3c,0x60,0x1c,0xc0,0x0c,0x80,0x19,0x80,0x31,0x80,
    0xe3,0xc0,0x87,0xff,0x7c,0x7e,0xf8,0x00,0xe0,0x01,0x00,0x78,0x00,0x00,0x18,0x00,
    0x00,0x06,0x00,0x80,0x00,0x00,0x20,0x00,0x00,0x0c,0x00,0x00,0x03,0x00,0xc0,0xf0,
    0x03,0x90,0xff,0x03,0xf4,0xe0,0x81,0x0f,0x60,0xe0,0x01,0x38,0x38,0x00,0x0c,0x06,
    0x00,0x83,0x00,0xc0,0x30,0x00,0x30,0x0c,0x00,0x06,0x03,0x80,0xc1,0x01,0x30,0x70,
    0x00,0x07,0x76,0xf0,0xf0,0xf9,0x1f,0x3c,0xfc,0x00,0x00,0x80,0x1f,0x83,0xff,0x0d,
    0x07,0x3e,0x06,0x60,0x0c,0x80,0x19,0x00,0x66,0x00,0xc0,0x00,0x00,0x03,0x00,0x0c,
    0x00,0x30,0x00,0xc0,0x00,0x00,0x06,0xc0,0x78,0xe0,0xc1,0xff,0x03,0xfc,0x01,0x00,
    0x00,0x80,0x0f,0x00,0xf8,0x00,0x00,0x04,0x00,0x40,0x00,0x00,0x06,0x00,0x60,0x00,
    0x00,0x06,0x00,0x20,0x80,0x1f,0x02,0xfe,0x37,0xf0,0xe0,0x83,0x03,0x3c,0x0c,0x80,
    0x61,0x00,0x10,0x06,0x00,0x31,0x00,0x10,0x03,0x00,0x31,0x00,0x08,0x03,0x80,0x30,
    0x00,0x0c,0x06,0xf0,0xe0,0xc1,0x0d,0xfc,0xcf,0x03,0x3f,0x3c,0x00,0x80,0x3f,0x80,
    0xff,0x83,0x07,0x1e,0x07,0xe0,0x0e,0x00,0x1b,0x00,0xfc,0xff,0xff,0xff,0xff,0x03,
    0x00,0x0c,0x00,0x30,0x00,0xc0,0x01,0x00,0x0e,0x00,0x70,0x80,0x83,0xff,0x07,0xfc,
    0x03,0x00,0x00,0xe0,0x1f,0x00,0xfe,0x07,0xc0,0x01,0x00,0x38,0x00,0x00,0x06,0x00,
    0x80,0x01,0x00,0x30,0x00,0x00,0x0c,0x00,0xf0,0xff,0x03,0xfe,0xff,0x00,0x30,0x00,
    0x00,0x06,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x07,0x00,0xc0,0x00,
    0x00,0x30,0x00,0x00,0x0c,0x00,0x00,0x03,0x00,0x60,0x00,0x00,0x18,0x00,0xf0,0xff,
    0x07,0xfc,0xff,0x01,0x00,0x80,0x1f,0x0f,0xfe,0xf3,0x78,0x70,0xc1,0x01,0x1c,0x0c,
    0x80,0x61,0x00,0x08,0x06,0x80,0x30,0x00,0x08,0x03,0x80,0x30,0x00,0x0c,0x03,0x40,
    0x70,0x00,0x06,0x06,0x70,0xe0,0xc1,0x06,0xfc,0x67,0x00,0x1f,0x02,0x00,0x20,0x00,
    0x00,0x03,0x00,0x10,0x00,0x80,0x01,0x00,0x0e,0xc0,0x7f,0x00,0xfc,0x01,0x00,0xf0,
    0x01,0x00,0x1f,0x00,0x80,0x01,0x00,0x1c,0x00,0xc0,0x00,0x00,0x0c,0x00,0xc0,0x00,
    0x00,0x0c,0x00,0xe0,0xf8,0x01,0xf6,0x3f,0xe0,0x03,0x07,0x0e,0x60,0x60,0x00,0x06,
    0x06,0x60,0x30,0x00,0x06,0x03,0x30,0x30,0x00,0x03,0x03,0x30,0x30,0x00,0x83,0x03,
    0x30,0x18,0x80,0x81,0x01,0x18,0xff,0xe0,0xff,0x0f,0xfe,0x00,0x00,0x18,0x00,0x1c,
    0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x07,0xf0,0x07,
    0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x07,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,
    0x00,0x03,0x80,0x01,0x80,0x01,0x80,0x01,0xff,0xff,0xff,0xff,0x00,0xc0,0x01,0x80,
    0x01,0x00,0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xc1,
    0xff,0x03,0x00,0x06,0x00,0x06,0x00,0x0c,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0x60,
    0x00,0xc0,0x00,0x80,0x01,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x0c,0x00,0x18,0x00,
    0x30,0x00,0x30,0x00,0x60,0x00,0xe0,0x00,0xe0,0xe0,0xff,0xc0,0x7f,0x00,0xf0,0x01,
    0x80,0x0f,0x00,0x20,0x00,0x00,0x01,0x00,0x0c,0x00,0x60,0x00,0x00,0x03,0x00,0x08,
    0x00,0x40,0xf0,0x07,0x83,0x3f,0x18,0x18,0xc0,0x70,0x00,0xc2,0x00,0x90,0x03,0xc0,
    0x07,0x00,0x7e,0x00,0x30,0x03,0x80,0x30,0x00,0x04,0x03,0x30,0x30,0x80,0x01,0x03,
    0x04,0x38,0x3c,0xe0,0xef,0x01,0x3f,0x00,0xe0,0x1f,0xe0,0x1f,0x00,0x1c,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,0x00,0x0c,0x00,0x0c,0x00,0x0e,0x00,0x06,0x00,0x06,0x00,0x06,
    0x00,0x06,0x00,0x07,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x80,0x01,
    0x80,0x01,0x80,0x01,0xff,0xff,0xff,0xff,0x78,0x1e,0x1e,0xee,0xe7,0x0f,0x0e,0x8f,
    0xc3,0xc1,0xc1,0x30,0x30,0x30,0x04,0x04,0x04,0x01,0x01,0x41,0x40,0x60,0x18,0x18,
    0x18,0x06,0x06,0x86,0x80,0x80,0x20,0x20,0x20,0x0c,0x0c,0x0c,0x03,0x03,0xf3,0xc3,
    0xc3,0xff,0xf0,0xf0,0x00,0xf8,0xf8,0xc1,0xf3,0x1f,0xd8,0xc0,0xc1,0x03,0x0c,0x06,
    0x60,0x30,0x00,0xc3,0x01,0x18,0x06,0x60,0x30,0x00,0x83,0x01,0x18,0x0c,0xc0,0x60,
    0x00,0x86,0x01,0x18,0x0c,0xc0,0xfc,0x83,0xff,0x1f,0xfc,0x00,0x80,0x3f,0x80,0xff,
    0x03,0x0f,0x1e,0x0e,0x60,0x0c,0x80,0x1b,0x00,0x6c,0x00,0xf0,0x00,0xc0,0x03,0x00,
    0x0f,0x00,0x36,0x00,0xd8,0x01,0x30,0x06,0x70,0x78,0xf0,0xc0,0xff,0x01,0xfc,0x00,
    0x00,0xe0,0xc3,0x0f,0xf0,0xf3,0x3f,0x80,0x3d,0x78,0x80,0x0f,0x60,0x80,0x03,0xc0,
    0x80,0x01,0xc0,0x80,0x01,0xc0,0xc0,0x00,0xc0,0xc0,0x00,0xc0,0xc0,0x00,0x60,0xc0,
    0x00,0x60,0xc0,0x01,0x30,0x60,0x03,0x1c,0x60,0x06,0x0e,0x60,0xfe,0x07,0x60,0xf8,
    0x01,0x60,0x00,0x00,0x70,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,
    0xfe,0x03,0x00,0xfe,0x03,0x00,0x80,0x1f,0x1f,0xfc,0xef,0xe3,0x81,0x0d,0x0e,0xc0,
    0xc1,0x00,0x38,0x0c,0x00,0xc2,0x01,0x40,0x18,0x00,0x08,0x03,0x00,0x61,0x00,0x30,
    0x0c,0x00,0x83,0x03,0x60,0x60,0x00,0x0f,0x3c,0x98,0x01,0xff,0x31,0x80,0x0f,0x03,
    0x00,0x60,0x00,0x00,0x0c,0x00,0x80,0x01,0x00,0x30,0x00,0x00,0x07,0x00,0xfe,0x03,
    0xe0,0x7f,0x00,0xf0,0x83,0x07,0x7e,0xfc,0x01,0xe6,0x61,0xc0,0x0e,0x00,0x78,0x00,
    0x00,0x03,0x00,0x60,0x00,0x00,0x06,0x00,0xc0,0x00,0x00,0x18,0x00,0x00,0x03,0x00,
    0x60,0x00,0x00,0x0e,0x00,0xc0,0x00,0x80,0xff,0x1f,0xf8,0xff,0x03,0x00,0x80,0x1f,
    0xc1,0x7f,0xc3,0x81,0xc7,0x01,0x84,0x01,0x08,0x03,0x00,0x3c,0x00,0xe0,0x1f,0x00,
    0x70,0x00,0x80,0x09,0x00,0x13,0x00,0x36,0x00,0xe6,0x01,0xc7,0xfe,0x87,0xf8,0x03,
    0x00,0x60,0x00,0x18,0x00,0x03,0xc0,0x00,0x30,0x00,0x0c,0xf0,0xff,0xff,0xff,0x18,
    0x00,0x06,0x80,0x01,0x70,0x00,0x0c,0x00,0x03,0xc0,0x00,0x30,0x00,0x06,0x80,0x01,
    0x60,0x00,0x38,0xe0,0xfc,0x1f,0xfe,0x00,0x1f,0xf8,0x3f,0xf0,0x33,0x00,0x66,0x00,
    0xc6,0x00,0x8c,0x01,0x18,0x03,0x38,0x03,0x30,0x06,0x60,0x0c,0xc0,0x18,0xc0,0x30,
    0x80,0x61,0x80,0xc3,0xe1,0x07,0xff,0x3e,0x7c,0x3c,0x00,0xff,0xe0,0xff,0x1f,0xfc,
    0x63,0x00,0x0c,0x0c,0xc0,0x80,0x01,0x08,0x20,0x80,0x01,0x0c,0x18,0x80,0x01,0x01,
    0x30,0x30,0x00,0x04,0x03,0x80,0x21,0x00,0x30,0x06,0x00,0x66,0x00,0x80,0x04,0x00,
    0xf0,0x00,0x00,0x0e,0x00,0x00,0x1f,0xc0,0xff,0x01,0xfc,0x06,0x00,0x62,0x00,0x30,
    0x06,0x03,0x61,0x30,0x18,0x86,0x86,0x60,0x68,0x0c,0x46,0xc6,0x60,0x66,0x06,0x26,
    0x66,0x60,0x63,0x02,0x16,0x36,0xe0,0xc0,0x01,0x0e,0x1c,0x60,0xc0,0x00,0x00,0xf0,
    0x83,0x1f,0x7e,0xf0,0x03,0x03,0x18,0xe0,0x80,0x01,0x38,0x0c,0x00,0xc6,0x00,0x80,
    0x0d,0x00,0x60,0x00,0x00,0x1e,0x00,0x60,0x06,0x00,0x83,0x01,0x30,0x70,0x00,0x03,
    0x1c,0x18,0x00,0xc3,0x1f,0xfc,0xf9,0x83,0x3f,0x00,0xf0,0x07,0x7e,0xf8,0x01,0x3f,
    0x30,0x00,0x06,0x18,0x00,0x01,0x0c,0x40,0x00,0x04,0x30,0x00,0x06,0x0c,0x00,0x03,
    0x02,0x00,0x81,0x01,0x80,0x60,0x00,0xc0,0x10,0x00,0x60,0x04,0x00,0x20,0x03,0x00,
    0xf0,0x00,0x00,0x38,0x00,0x00,0x0c,0x00,0x00,0x06,0x00,0x80,0x01,0x00,0x40,0x00,
    0x00,0x10,0x00,0x00,0x0c,0x00,0xf8,0x3f,0x00,0xfc,0x0f,0x00,0x00,0xf8,0xff,0xfc,
    0xff,0x0c,0x60,0x0c,0x30,0x00,0x18,0x00,0x0c,0x00,0x06,0x80,0x01,0xc0,0x00,0x60,
    0x00,0x30,0x00,0x18,0x00,0x0c,0x20,0x02,0x30,0xff,0x3f,0xff,0x3f,0x00,0x0c,0xf0,
    0x80,0x03,0x18,0xc0,0x00,0x0c,0xc0,0x00,0x0c,0xc0,0x00,0x06,0x60,0x00,0x06,0x30,
    0x80,0x03,0x0f,0xf0,0x00,0x30,0x00,0x03,0x18,0x80,0x01,0x18,0x80,0x01,0x18,0xc0,
    0x00,0x0c,0xc0,0x00,0x0c,0xc0,0x03,0x38,0x00,0x60,0x30,0x18,0x04,0x82,0xc1,0x20,
    0x10,0x08,0x06,0x83,0x40,0x30,0x18,0x0c,0x02,0xc1,0x60,0x30,0x08,0x04,0x83,0x41,
    0x00,0x80,0x03,0xf0,0x00,0x1c,0x00,0x03,0x60,0x00,0x0e,0xc0,0x00,0x18,0x00,0x03,
    0x60,0x00,0x06,0xc0,0x00,0x18,0x00,0x06,0x80,0x07,0xf0,0x80,0x03,0x18,0x00,0x03,
    0x70,0x00,0x06,0xc0,0x00,0x18,0x00,0x03,0x70,0x00,0x06,0xe0,0x00,0x0f,0x70,0x00,
    0x00,0x38,0x00,0xfc,0xc0,0xc6,0x60,0x83,0x73,0x01,0x3f,0x00,0x0e,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 23, 0, 38, 1, 1},
/* ! */ {1, 23, 9, 14, 8, 23},
/* " */ {24, 23, 7, 15, 13, 11},
/* # */ {42, 23, 5, 13, 18, 27},
/* $ */ {103, 23, 6, 14, 17, 26},
/* % */ {159, 23, 5, 14, 17, 24},
/* & */ {211, 23, 5, 18, 15, 20},
/* ' */ {249, 23, 13, 15, 5, 11},
/* ( */ {256, 23, 13, 15, 9, 28},
/* ) */ {288, 23, 5, 15, 9, 28},
/* * */ {320, 23, 7, 14, 14, 14},
/* + */ {345, 23, 5, 18, 18, 18},
/* , */ {386, 23, 4, 33, 10, 11},
/* - */ {400, 23, 4, 26, 17, 2},
/* . */ {405, 23, 9, 33, 5, 5},
/* / */ {409, 23, 3, 12, 20, 28},
/* 0 */ {480, 23, 6, 14, 16, 24},
/* 1 */ {528, 23, 4, 14, 15, 23},
/* 2 */ {572, 23, 3, 14, 19, 24},
/* 3 */ {630, 23, 4, 14, 19, 24},
/* 4 */ {688, 23, 5, 14, 16, 24},
/* 5 */ {736, 23, 4, 14, 18, 24},
/* 6 */ {791, 23, 7, 14, 17, 24},
/* 7 */ {843, 23, 8, 14, 15, 24},
/* 8 */ {889, 23, 5, 14, 17, 24},
/* 9 */ {941, 23, 5, 14, 18, 24},
/* : */ {996, 23, 9, 22, 7, 16},
/* ; */ {1011, 23, 3, 22, 12, 22},
/* < */ {1045, 23, 4, 18, 19, 18},
/* = */ {1088, 23, 3, 23, 20, 8},
/* > */ {1109, 23, 3, 18, 19, 18},
/* ? */ {1152, 23, 9, 16, 13, 22},
/* @ */ {1188, 23, 5, 14, 17, 26},
/* A */ {1244, 23, 0, 16, 22, 22},
/* B */ {1305, 23, 1, 16, 21, 22},
/* C */ {1363, 23, 4, 16, 20, 22},
/* D */ {1419, 23, 1, 16, 21, 22},
/* E */ {1477, 23, 1, 16, 22, 22},
/* F */ {1538, 23, 1, 16, 22, 22},
/* G */ {1599, 23, 4, 16, 20, 22},
/* H */ {1655, 23, 2, 16, 23, 22},
/* I */ {1719, 23, 4, 16, 19, 22},
/* J */ {1772, 23, 3, 16, 23, 22},
/* K */ {1836, 23, 1, 16, 23, 22},
/* L */ {1900, 23, 2, 16, 20, 22},
/* M */ {1956, 23, 0, 16, 26, 22},
/* N */ {2028, 23, 1, 16, 24, 22},
/* O */ {2094, 23, 4, 16, 20, 22},
/* P */ {2150, 23, 1, 16, 21, 22},
/* Q */ {2208, 23, 4, 16, 20, 26},
/* R */ {2274, 23, 1, 16, 21, 22},
/* S */ {2332, 23, 4, 16, 19, 22},
/* T */ {2385, 23, 5, 16, 19, 22},
/* U */ {2438, 23, 5, 16, 21, 22},
/* V */ {2496, 23, 4, 16, 22, 22},
/* W */ {2557, 23, 4, 16, 22, 22},
/* X */ {2618, 23, 1, 16, 23, 22},
/* Y */ {2682, 23, 5, 16, 20, 22},
/* Z */ {2738, 23, 3, 16, 18, 22},
/* [ */ {2788, 23, 10, 14, 12, 29},
/* \ */ {2832, 23, 9, 12, 8, 28},
/* ] */ {2860, 23, 5, 14, 12, 29},
/* ^ */ {2904, 23, 7, 15, 15, 10},
/* _ */ {2923, 23, -2, 41, 23, 2},
/* ` */ {2929, 23, 10, 13, 5, 6},
/* a */ {2933, 23, 4, 22, 17, 16},
/* b */ {2968, 23, 0, 14, 22, 24},
/* c */ {3035, 23, 5, 22, 18, 16},
/* d */ {3072, 23, 4, 14, 20, 24},
/* e */ {3133, 23, 4, 22, 18, 16},
/* f */ {3170, 23, 4, 14, 22, 24},
/* g */ {3237, 23, 4, 22, 20, 23},
/* h */ {3295, 23, 2, 14, 20, 24},
/* i */ {3356, 23, 3, 14, 16, 24},
/* j */ {3404, 23, 3, 14, 17, 31},
/* k */ {3470, 23, 2, 14, 19, 24},
/* l */ {3528, 23, 3, 14, 16, 24},
/* m */ {3576, 23, 0, 22, 22, 16},
/* n */ {3621, 23, 2, 22, 19, 16},
/* o */ {3660, 23, 4, 22, 18, 16},
/* p */ {3697, 23, -1, 22, 24, 23},
/* q */ {3766, 23, 4, 22, 21, 23},
/* r */ {3827, 23, 3, 22, 21, 16},
/* s */ {3870, 23, 4, 22, 17, 16},
/* t */ {3905, 23, 5, 16, 14, 22},
/* u */ {3944, 23, 5, 22, 17, 16},
/* v */ {3979, 23, 4, 22, 21, 16},
/* w */ {4022, 23, 5, 22, 20, 16},
/* x */ {4063, 23, 2, 22, 21, 16},
/* y */ {4106, 23, 0, 22, 23, 23},
/* z */ {4173, 23, 4, 22, 16, 16},
/* { */ {4205, 23, 8, 14, 12, 29},
/* | */ {4249, 23, 10, 15, 7, 27},
/* } */ {4273, 23, 6, 14, 13, 29},
/* ~ */ {4321, 23, 5, 24, 16, 6},
};

const monoGFX_font_t monoGFX_FreeMonoOblique_18pt = {bitmapBuffer, 4333, glyphs, 20};
