#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[5079] =
{
    0x00,0xce,0xf7,0xff,0xff,0xff,0x79,0x9e,0xe3,0x38,0x0e,0x43,0x10,0x04,0x00,0x00,
    0xce,0xf7,0xff,0xbf,0x03,0x06,0xd8,0x03,0xff,0xc0,0x3f,0xf0,0x0f,0xfc,0x03,0xef,
    0x80,0x19,0x60,0x06,0x18,0x01,0x46,0x80,0x01,0xc0,0xc1,0x01,0x0e,0x07,0x70,0x38,
    0x80,0xc3,0x01,0x1c,0x0e,0xe0,0x70,0x80,0x83,0xc3,0xff,0xff,0xfe,0xff,0xf7,0xff,
    0x3f,0x38,0x1c,0xc0,0xe1,0x00,0x0e,0x07,0x38,0x38,0xc0,0xc1,0xe1,0xff,0x7f,0xff,
    0xff,0xfb,0xff,0x1f,0x1c,0x0e,0xe0,0x70,0x80,0x83,0x03,0x1c,0x1c,0xe0,0x70,0x00,
    0x87,0x03,0x38,0x1c,0xc0,0xe1,0x00,0x80,0x01,0x00,0x03,0x00,0x06,0x80,0x7f,0xc0,
    0xd8,0xc3,0x30,0x8e,0x61,0x9c,0xc3,0x30,0x87,0x61,0x1e,0x83,0xfc,0x06,0xf8,0x0f,
    0xe0,0x3f,0x80,0xff,0x01,0xfe,0x07,0xf8,0x3f,0xc0,0xff,0x00,0xff,0x01,0xe6,0x07,
    0x8c,0x1f,0x18,0x5e,0x30,0xbc,0x60,0x78,0xc3,0xf0,0x8e,0xf1,0x3c,0xf3,0xf0,0xff,
    0x00,0x3f,0x00,0x18,0x00,0x30,0x00,0xc0,0x03,0x38,0x00,0xff,0xe0,0x01,0xf8,0xfc,
    0x1f,0xc0,0x87,0xcf,0x00,0x3e,0x08,0x06,0xe0,0x83,0x60,0x00,0x1f,0x08,0x03,0xf0,
    0xc1,0x38,0x00,0x0f,0x84,0x01,0xf0,0x40,0x1c,0x00,0x0f,0xc6,0x00,0xf0,0x30,0x06,
    0x3e,0x9e,0x61,0xf8,0xe7,0x1f,0xc3,0x47,0x78,0x30,0x3e,0x08,0x80,0xe1,0x83,0x00,
    0x18,0x1f,0x08,0xc0,0xf0,0x80,0x00,0x8e,0x0f,0x08,0x60,0xf8,0x40,0x00,0x83,0x07,
    0x04,0x30,0x78,0x20,0x80,0x81,0x07,0x03,0x18,0x70,0x18,0xc0,0x00,0xff,0x00,0x0c,
    0xe0,0x03,0x00,0xfc,0x00,0x00,0xf0,0x3f,0x00,0x80,0xc7,0x07,0x00,0x38,0xf8,0x00,
    0xc0,0x03,0x0f,0x00,0x3c,0xf0,0x00,0xc0,0x07,0x0f,0x00,0xfc,0x70,0x00,0xc0,0xdf,
    0x01,0x00,0xf8,0x07,0x00,0x80,0x3f,0xf0,0x0f,0xf8,0x07,0x3c,0xe0,0xff,0x80,0x01,
    0xe7,0x1f,0x18,0x38,0xfc,0xc1,0xc0,0xc1,0x3f,0x0c,0x1e,0xf8,0x67,0xf0,0x01,0x7f,
    0x03,0x1f,0xf0,0x3f,0xf0,0x03,0xfe,0x01,0x3f,0xc0,0x3f,0xf0,0x07,0xf8,0x07,0xff,
    0x80,0xff,0xe8,0x3f,0xfc,0x7f,0xfc,0x7f,0xfe,0x87,0xff,0xc1,0x3f,0xf0,0x07,0xf0,
    0x01,0xf6,0xff,0xff,0x67,0x66,0x06,0x00,0x81,0x81,0x81,0x01,0x03,0x03,0x07,0x0e,
    0x0e,0x1c,0x38,0x78,0xf0,0xe0,0xc1,0x83,0x07,0x0f,0x1e,0x3c,0x78,0xf0,0xc0,0x81,
    0x03,0x07,0x1c,0x38,0x60,0x80,0x01,0x03,0x0c,0x30,0x80,0x01,0x0c,0x30,0xc0,0x80,
    0x01,0x06,0x1c,0x38,0xf0,0xc0,0x81,0x03,0x0f,0x1e,0x3c,0x78,0xf0,0xe0,0xc1,0x83,
    0x07,0x0f,0x1e,0x1c,0x38,0x70,0x70,0xe0,0xc0,0xc0,0x80,0x81,0x81,0x81,0x00,0xc0,
    0x01,0x78,0x00,0x1e,0x9c,0xe7,0xcf,0xfc,0xb7,0xef,0xff,0xc3,0x0f,0xf8,0xc7,0xff,
    0xf7,0xed,0x3f,0xf3,0xe6,0x39,0x78,0x00,0x1e,0x00,0x03,0x00,0x0e,0x00,0xc0,0x01,
    0x00,0x38,0x00,0x00,0x07,0x00,0xe0,0x00,0x00,0x1c,0x00,0x80,0x03,0x00,0x70,0x00,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xe0,0x00,0x00,0x1c,0x00,
    0x80,0x03,0x00,0x70,0x00,0x00,0x0e,0x00,0xc0,0x01,0x00,0x38,0x00,0x00,0x07,0x00,
    0xce,0xf7,0xff,0xbf,0x0f,0x43,0x18,0x42,0x0c,0x01,0xff,0xff,0xff,0xff,0x0f,0xde,
    0xff,0xff,0xbf,0x07,0x00,0x0e,0xf0,0x00,0x07,0x70,0x80,0x07,0x38,0x80,0x03,0x3c,
    0xc0,0x01,0x1c,0xe0,0x01,0x0e,0xe0,0x00,0x0f,0x70,0x00,0x07,0x78,0x80,0x03,0x38,
    0xc0,0x03,0x1c,0xc0,0x01,0x1e,0xe0,0x00,0x0e,0xf0,0x00,0x07,0x00,0xc0,0x07,0xe0,
    0x38,0xe0,0xf1,0xc0,0xc1,0xc1,0x83,0xc7,0x07,0x9f,0x0f,0x3e,0x1f,0x7c,0x3f,0xf8,
    0x7f,0xf0,0xff,0xe0,0xff,0xc1,0xff,0x83,0xff,0x07,0xff,0x0f,0xfe,0x1f,0xfc,0x3f,
    0xf8,0x7f,0xf0,0xfb,0xe0,0xf3,0xc1,0xe7,0x83,0x8f,0x07,0x0f,0x0f,0x0e,0x3c,0x1e,
    0x70,0x1c,0x80,0x0f,0x00,0x00,0x06,0xe0,0x01,0x7e,0xf0,0x1f,0xf2,0x07,0xf8,0x01,
    0x7e,0x80,0x1f,0xe0,0x07,0xf8,0x01,0x7e,0x80,0x1f,0xe0,0x07,0xf8,0x01,0x7e,0x80,
    0x1f,0xe0,0x07,0xf8,0x01,0x7e,0x80,0x1f,0xe0,0x07,0xf8,0x01,0x7e,0x80,0x1f,0xf0,
    0xcf,0xff,0x0f,0xc0,0x0f,0x80,0xff,0x80,0xff,0x07,0xfe,0x1f,0x0c,0xff,0x18,0xf0,
    0x23,0xc0,0x0f,0x00,0x3e,0x00,0xf8,0x00,0xe0,0x03,0x80,0x07,0x00,0x1f,0x00,0x3c,
    0x00,0x70,0x00,0xe0,0x00,0xc0,0x01,0x00,0x03,0x00,0x06,0x00,0x0c,0x10,0x18,0x40,
    0x30,0x80,0xc1,0xff,0x87,0xff,0x1f,0xff,0x3f,0xfe,0xff,0xfc,0xff,0x03,0xc0,0x1f,
    0xe0,0x7f,0xe0,0xff,0x61,0xf8,0x67,0xe0,0x4f,0x80,0x1f,0x00,0x3f,0x00,0x3e,0x00,
    0x7c,0x00,0x3c,0x00,0xfc,0x00,0xfe,0x03,0xf8,0x0f,0xc0,0x1f,0x00,0x7f,0x00,0xf8,
    0x00,0xf0,0x01,0xc0,0x03,0x80,0x07,0x00,0x07,0x00,0xce,0x03,0xcc,0x0f,0x9c,0x7f,
    0x0c,0xfe,0x0f,0xf8,0x07,0x00,0x00,0x38,0x00,0x3c,0x00,0x3e,0x00,0x3e,0x00,0x3f,
    0x80,0x3f,0xc0,0x3e,0x40,0x3e,0x60,0x3e,0x30,0x3e,0x10,0x3e,0x08,0x3e,0x0c,0x3e,
    0x04,0x3e,0x02,0x3e,0x01,0x3e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x3e,
    0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x3e,0xf0,0xff,0xe1,0xff,0xc1,0xff,
    0x83,0xff,0x87,0xff,0x07,0x03,0x00,0x06,0x00,0x0c,0x00,0x3c,0x00,0xf8,0x0f,0xf0,
    0x7f,0xf0,0xff,0xe1,0xff,0x87,0xff,0x0f,0xc0,0x3f,0x00,0x7e,0x00,0xf0,0x00,0xe0,
    0x01,0x80,0x03,0x00,0x07,0x00,0xe6,0x01,0xce,0x1f,0x8e,0xff,0x0f,0xff,0x07,0xf8,
    0x03,0x00,0x00,0xc0,0x01,0xf8,0x00,0x7c,0x00,0x3c,0x00,0x3e,0x00,0x3e,0x00,0x3e,
    0x00,0x7e,0x00,0x7c,0x00,0xfc,0x00,0xf8,0x7f,0xf0,0xff,0xf1,0xe7,0xe7,0x87,0xdf,
    0x0f,0xfe,0x1f,0xfc,0x3f,0xf8,0x7f,0xf0,0xff,0xe0,0xff,0xc1,0xef,0x83,0xdf,0x07,
    0x1f,0x0f,0x3e,0x3c,0x3c,0x70,0x3c,0x80,0x1f,0x00,0xfe,0xff,0xfd,0xff,0xfb,0xff,
    0xf3,0xff,0xf7,0xff,0x6f,0x00,0x4e,0x00,0x9c,0x00,0x3c,0x00,0x38,0x00,0x70,0x00,
    0xf0,0x00,0xe0,0x00,0xe0,0x01,0xc0,0x03,0x80,0x03,0x80,0x07,0x00,0x07,0x00,0x0e,
    0x00,0x1e,0x00,0x1c,0x00,0x38,0x00,0x78,0x00,0x70,0x00,0xf0,0x00,0xe0,0x01,0xc0,
    0x01,0x00,0xe0,0x0f,0x70,0x78,0x38,0xe0,0x71,0x80,0xf7,0x00,0xef,0x01,0xde,0x07,
    0xbc,0x1f,0x38,0xff,0x38,0xfc,0x3f,0xf8,0x3f,0xe0,0xff,0x00,0xff,0x03,0xff,0x0f,
    0xe7,0x3f,0x0f,0xff,0x0f,0xfc,0x1f,0xf0,0x3f,0xc0,0x7f,0x80,0xff,0x00,0xff,0x01,
    0x9e,0x07,0x3e,0x1f,0x3e,0xfc,0x1f,0xe0,0x0f,0x00,0xe0,0x07,0xf0,0x3c,0xf0,0xf0,
    0xf0,0xc1,0xe3,0x83,0xef,0x07,0xdf,0x0f,0xfe,0x1f,0xfc,0x3f,0xf8,0x7f,0xf0,0xff,
    0xe0,0xff,0xc1,0xef,0x87,0x9f,0x1f,0x3f,0xfe,0x3f,0xf8,0x7f,0x00,0xfc,0x00,0xf8,
    0x00,0xf8,0x01,0xf0,0x01,0xf0,0x01,0xf0,0x01,0xf0,0x00,0xf8,0x00,0x7c,0x00,0x0e,
    0x00,0x00,0xde,0xff,0xff,0xbf,0x07,0x00,0x00,0x00,0x00,0xde,0xff,0xff,0xbf,0x07,
    0x9c,0xdf,0xef,0xf7,0xe3,0x00,0x00,0x00,0x00,0x00,0xe0,0xf9,0xfd,0xff,0x7f,0x3f,
    0x18,0x04,0xc3,0x30,0x0c,0x00,0x00,0x00,0x18,0x00,0xc0,0x03,0x00,0x7e,0x00,0xf0,
    0x0f,0x80,0x7f,0x00,0xfc,0x03,0xf0,0x1f,0x80,0x7f,0x00,0xfc,0x03,0xe0,0x1f,0x00,
    0xfc,0x01,0x00,0xff,0x00,0x80,0x7f,0x00,0xc0,0x7f,0x00,0xc0,0x3f,0x00,0xe0,0x1f,
    0x00,0xf0,0x0f,0x00,0xf8,0x03,0x00,0x7c,0x00,0x00,0x0e,0x00,0x00,0x01,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x3f,0x01,0x00,0xe0,0x00,0x00,0xfc,0x00,0x80,0x7f,0x00,0xc0,0x3f,0x00,
    0xe0,0x1f,0x00,0xf0,0x0f,0x00,0xf8,0x07,0x00,0xfc,0x03,0x00,0xfe,0x01,0x00,0x7e,
    0x00,0xe0,0x0f,0x80,0xff,0x00,0xfc,0x03,0xe0,0x1f,0x00,0xff,0x00,0xf8,0x07,0xc0,
    0x3f,0x00,0xfc,0x01,0x80,0x0f,0x00,0x30,0x00,0x00,0x00,0xf0,0x03,0xfe,0x87,0xe3,
    0xef,0xe0,0xf7,0xe0,0x7f,0xf0,0x3f,0xf8,0x0d,0xfc,0x00,0x7e,0x80,0x1f,0xc0,0x07,
    0xf0,0x00,0x38,0x00,0x06,0x00,0x01,0x80,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x0e,0x80,0x1f,0xc0,0x0f,0xe0,0x07,0xf0,0x03,0x70,0x00,0x00,0xfc,0x03,0x00,
    0xfc,0x3f,0x00,0x7c,0xc0,0x03,0x78,0x00,0x1c,0x70,0x00,0xc0,0xe0,0x01,0x0f,0xc2,
    0x03,0xbe,0x9b,0x07,0xbc,0x4e,0x1e,0x38,0x3c,0x7a,0xf0,0x70,0xf8,0xc0,0xc1,0xe1,
    0x83,0x03,0x87,0x0f,0x0e,0x0e,0x3e,0x3c,0x38,0xf8,0x70,0xf0,0xe0,0xc3,0xc1,0x41,
    0x0f,0x87,0x07,0x39,0x1c,0x1d,0xe2,0xf1,0x73,0x8c,0x87,0xc7,0x1f,0x3c,0x00,0x3e,
    0xe0,0x01,0x00,0x00,0x0f,0x00,0x00,0x78,0x00,0x00,0xc0,0x07,0x78,0x00,0xfc,0x7f,
    0x00,0xc0,0x3f,0x00,0x00,0x10,0x00,0x00,0xe0,0x00,0x00,0x80,0x03,0x00,0x00,0x0f,
    0x00,0x00,0x7c,0x00,0x00,0xf0,0x01,0x00,0xe0,0x0f,0x00,0x80,0x3f,0x00,0x00,0xff,
    0x01,0x00,0xec,0x07,0x00,0x90,0x1f,0x00,0x60,0xfc,0x00,0x80,0xf0,0x03,0x00,0x83,
    0x1f,0x00,0x0c,0x7e,0x00,0x10,0xf8,0x03,0x60,0xc0,0x0f,0x80,0xff,0x3f,0x00,0xff,
    0xff,0x01,0x0c,0xe0,0x07,0x10,0x80,0x3f,0x60,0x00,0xfc,0x80,0x01,0xf0,0x07,0x03,
    0xc0,0x1f,0x1e,0x00,0xff,0xfc,0x81,0xff,0x0f,0xff,0xff,0xc0,0xff,0xff,0xc0,0x1f,
    0xfe,0xe0,0x07,0x3f,0xf8,0x81,0x1f,0x7e,0xe0,0x87,0x1f,0xf8,0xe1,0x07,0x7e,0xf8,
    0x81,0x0f,0x7e,0xf0,0x83,0x1f,0x3e,0xe0,0xff,0x01,0xf8,0xff,0x03,0x7e,0xf8,0x83,
    0x1f,0xf8,0xe1,0x07,0x7e,0xf8,0x01,0x3f,0x7e,0xc0,0x8f,0x1f,0xf0,0xe3,0x07,0xfc,
    0xf8,0x01,0x3f,0x7e,0xc0,0x87,0x1f,0xf8,0xe1,0x0f,0x3f,0xfc,0xff,0xc3,0xff,0x3f,
    0x00,0x00,0xfe,0x80,0x00,0xff,0x8f,0x81,0x1f,0xfc,0x83,0x0f,0xe0,0x87,0x0f,0x80,
    0x8f,0x1f,0x00,0x1e,0x1f,0x00,0x38,0x3f,0x00,0x60,0x3e,0x00,0xc0,0x7c,0x00,0x00,
    0xfc,0x00,0x00,0xf8,0x01,0x00,0xf0,0x03,0x00,0xe0,0x07,0x00,0xc0,0x0f,0x00,0x80,
    0x1f,0x00,0x00,0x3f,0x00,0x00,0x7e,0x00,0x00,0xf8,0x00,0x00,0xf0,0x03,0x00,0xc0,
    0x07,0x00,0x80,0x1f,0x00,0x38,0x3e,0x00,0x38,0xf8,0x00,0x38,0xe0,0x07,0x1e,0x00,
    0xff,0x1f,0x00,0xf8,0x07,0x00,0xff,0xff,0x00,0xf8,0xff,0x07,0xe0,0x07,0x3f,0xc0,
    0x0f,0xf8,0x80,0x1f,0xe0,0x03,0x3f,0xc0,0x0f,0x7e,0x00,0x3f,0xfc,0x00,0x7e,0xf8,
    0x01,0xfc,0xf0,0x03,0xf0,0xe3,0x07,0xe0,0xc7,0x0f,0xc0,0x8f,0x1f,0x80,0x1f,0x3f,
    0x00,0x3f,0x7e,0x00,0x7e,0xfc,0x00,0xfc,0xf8,0x01,0xf8,0xf1,0x03,0xf0,0xe1,0x07,
    0xf0,0xc3,0x0f,0xe0,0x83,0x1f,0xc0,0x07,0x3f,0xc0,0x07,0x7e,0xc0,0x07,0xfc,0xe0,
    0x07,0xfc,0xff,0x03,0xfe,0xff,0x01,0x00,0xff,0xff,0x3f,0xfe,0xff,0x1f,0x7e,0x80,
    0x0f,0x3f,0x00,0x87,0x1f,0x00,0xc3,0x0f,0x80,0xe1,0x07,0x80,0xf0,0x03,0x01,0xf8,
    0x81,0x00,0xfc,0x60,0x00,0x7e,0x38,0x00,0xff,0x1f,0x80,0xff,0x0f,0xc0,0x8f,0x07,
    0xe0,0x07,0x03,0xf0,0x83,0x01,0xf8,0x81,0x00,0xfc,0x40,0x20,0x7e,0x00,0x10,0x3f,
    0x00,0x8c,0x1f,0x00,0xc7,0x0f,0xc0,0xe1,0x07,0xf0,0xf8,0x07,0x7e,0xff,0xff,0xbf,
    0xff,0xff,0x1f,0xff,0xff,0x9f,0xff,0xff,0xe3,0x07,0x7c,0xfc,0x00,0x8e,0x1f,0x80,
    0xf1,0x03,0x20,0x7e,0x00,0xc4,0x0f,0x04,0xf8,0xc1,0x00,0x3f,0x18,0xe0,0xc7,0x03,
    0xfc,0x7f,0x80,0xff,0x0f,0xf0,0xe3,0x01,0x7e,0x30,0xc0,0x0f,0x06,0xf8,0x81,0x00,
    0x3f,0x10,0xe0,0x07,0x00,0xfc,0x00,0x80,0x1f,0x00,0xf0,0x03,0x00,0x7e,0x00,0xc0,
    0x0f,0x00,0xfc,0x03,0xe0,0xff,0x03,0x00,0x00,0xfe,0x80,0x00,0xfc,0x1f,0x06,0xf8,
    0xc1,0x3f,0xe0,0x03,0xf8,0x81,0x0f,0x00,0x0f,0x7e,0x00,0x70,0xf0,0x01,0x80,0xc3,
    0x0f,0x00,0x18,0x3e,0x00,0x80,0xf8,0x01,0x00,0xc0,0x0f,0x00,0x00,0x7e,0x00,0x00,
    0xf0,0x03,0x00,0x80,0x1f,0x00,0x00,0xfc,0x00,0x00,0xe0,0x07,0xf0,0xff,0x3f,0x00,
    0xfe,0xf9,0x01,0xe0,0x87,0x1f,0x00,0x3f,0xfc,0x00,0xf8,0xc1,0x07,0xc0,0x0f,0x7e,
    0x00,0x7e,0xe0,0x03,0xf0,0x03,0x3e,0x80,0x1f,0xe0,0x07,0x7e,0x00,0xfc,0xff,0x00,
    0x80,0xff,0x00,0x00,0xff,0x8f,0xff,0xe7,0x1f,0xf0,0x0f,0x7e,0x00,0x3f,0xf0,0x03,
    0xf8,0x81,0x1f,0xc0,0x0f,0xfc,0x00,0x7e,0xe0,0x07,0xf0,0x03,0x3f,0x80,0x1f,0xf8,
    0x01,0xfc,0xc0,0x0f,0xe0,0x07,0x7e,0x00,0x3f,0xf0,0xff,0xff,0x81,0xff,0xff,0x0f,
    0xfc,0x00,0x7e,0xe0,0x07,0xf0,0x03,0x3f,0x80,0x1f,0xf8,0x01,0xfc,0xc0,0x0f,0xe0,
    0x07,0x7e,0x00,0x3f,0xf0,0x03,0xf8,0x81,0x1f,0xc0,0x0f,0xfc,0x00,0x7e,0xe0,0x07,
    0xf0,0x03,0x3f,0x80,0x1f,0xfc,0x03,0xfe,0xf9,0x7f,0xfc,0x3f,0xff,0xcf,0x3f,0xf8,
    0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,
    0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,0xf8,0x81,0x1f,
    0xfc,0xf3,0xff,0xe0,0xff,0x03,0xfc,0x03,0xe0,0x07,0x80,0x1f,0x00,0x7e,0x00,0xf8,
    0x01,0xe0,0x07,0x80,0x1f,0x00,0x7e,0x00,0xf8,0x01,0xe0,0x07,0x80,0x1f,0x00,0x7e,
    0x00,0xf8,0x01,0xe0,0x07,0x80,0x1f,0x00,0x7e,0x00,0xf8,0x01,0xe0,0x07,0x80,0x1f,
    0x00,0x7e,0x00,0xf8,0x01,0xe0,0x87,0x83,0x1f,0x1f,0x7e,0x7c,0xf8,0xf0,0xe0,0x83,
    0xc3,0x07,0xfe,0x0f,0xe0,0x0f,0x00,0xff,0x8f,0xff,0xc3,0x3f,0xc0,0x0f,0xf8,0x01,
    0x38,0x80,0x1f,0xc0,0x01,0xf8,0x01,0x06,0x80,0x1f,0x30,0x00,0xf8,0x81,0x01,0x80,
    0x1f,0x0c,0x00,0xf8,0x61,0x00,0x80,0x1f,0x03,0x00,0xf8,0x79,0x00,0x80,0xdf,0x0f,
    0x00,0xf8,0xff,0x00,0x80,0xff,0x1f,0x00,0xf8,0xf9,0x03,0x80,0x9f,0x7f,0x00,0xf8,
    0xf1,0x0f,0x80,0x1f,0xfe,0x00,0xf8,0xc1,0x1f,0x80,0x1f,0xf8,0x03,0xf8,0x81,0x7f,
    0x80,0x1f,0xf0,0x0f,0xf8,0x01,0xfe,0x80,0x1f,0xc0,0x1f,0xfc,0x03,0xfc,0xf3,0xff,
    0xf8,0xff,0xff,0x1f,0x00,0xfe,0x01,0x00,0x7e,0x00,0x00,0x3f,0x00,0x80,0x1f,0x00,
    0xc0,0x0f,0x00,0xe0,0x07,0x00,0xf0,0x03,0x00,0xf8,0x01,0x00,0xfc,0x00,0x00,0x7e,
    0x00,0x00,0x3f,0x00,0x80,0x1f,0x00,0xc0,0x0f,0x00,0xe0,0x07,0x00,0xf0,0x03,0x00,
    0xf8,0x01,0x00,0xfc,0x00,0x20,0x7e,0x00,0x18,0x3f,0x00,0x8c,0x1f,0x00,0xc3,0x0f,
    0xc0,0xe1,0x07,0xf0,0xf8,0x07,0x7e,0xff,0xff,0xbf,0xff,0xff,0x1f,0xfe,0x03,0x00,
    0xfe,0xc7,0x1f,0x00,0xf0,0x0f,0xfc,0x01,0x80,0x3f,0xe0,0x0f,0x00,0xfe,0x01,0xfd,
    0x00,0xd0,0x0f,0xe8,0x07,0xc0,0x7e,0x40,0x7f,0x00,0xf2,0x03,0xf2,0x03,0x98,0x1f,
    0x90,0x3f,0xc0,0xfc,0x80,0xf8,0x01,0xe3,0x07,0xc4,0x0f,0x18,0x3f,0x20,0xfc,0x40,
    0xf8,0x01,0xe1,0x07,0xc3,0x0f,0x08,0x7e,0x08,0x7e,0x40,0xf0,0x63,0xf0,0x03,0x82,
    0x3f,0x83,0x1f,0x10,0xf8,0x0d,0xfc,0x80,0xc0,0x6f,0xe0,0x07,0x04,0xfc,0x01,0x3f,
    0x20,0xe0,0x0f,0xf8,0x01,0x01,0x3e,0xc0,0x0f,0x08,0xf0,0x01,0x7e,0x40,0x80,0x0f,
    0xf0,0x03,0x02,0x38,0x80,0x1f,0x38,0xc0,0x01,0xfe,0xf9,0x0f,0x04,0xfc,0x3f,0xff,
    0x01,0xfc,0xfb,0x0f,0xc0,0x83,0x3f,0x00,0x04,0xfc,0x01,0x10,0xf0,0x0f,0x40,0xc0,
    0x7f,0x00,0x01,0xfd,0x03,0x04,0xf4,0x1f,0x10,0x90,0x7f,0x40,0x40,0xfc,0x03,0x01,
    0xe1,0x1f,0x04,0x04,0xff,0x10,0x10,0xf8,0x47,0x40,0xc0,0x3f,0x01,0x01,0xff,0x04,
    0x04,0xf8,0x17,0x10,0xc0,0x7f,0x40,0x00,0xfe,0x01,0x01,0xf0,0x07,0x04,0x80,0x1f,
    0x10,0x00,0x7c,0x40,0x00,0xe0,0x01,0x01,0x80,0x07,0x04,0x00,0x1c,0x78,0x00,0x60,
    0xfc,0x07,0x00,0x01,0x00,0xfe,0x01,0x00,0xfe,0x1f,0x00,0x7e,0xf8,0x01,0x7c,0x80,
    0x0f,0xf8,0x00,0x7c,0xf0,0x03,0xf0,0xc3,0x07,0x80,0x8f,0x1f,0x00,0x7e,0x7e,0x00,
    0xf8,0xfd,0x00,0xc0,0xf7,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,
    0xc0,0xff,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,0xc0,0xef,0x03,
    0x00,0x9f,0x1f,0x00,0x7e,0x7c,0x00,0xf8,0xf0,0x01,0xe0,0x83,0x0f,0xc0,0x07,0x7c,
    0x80,0x0f,0xe0,0x03,0x1f,0x00,0xff,0x3f,0x00,0xe0,0x1f,0x00,0xff,0xff,0x80,0xff,
    0x7f,0xe0,0x87,0x1f,0xfc,0xe0,0x87,0x1f,0xf8,0xf0,0x03,0x3f,0x7e,0xe0,0xc7,0x0f,
    0xfc,0xf8,0x81,0x1f,0x3f,0xf0,0xe3,0x07,0x3e,0xfc,0xe0,0x87,0x1f,0x7e,0xf0,0xff,
    0x07,0xfe,0x1f,0xc0,0x0f,0x00,0xf8,0x01,0x00,0x3f,0x00,0xe0,0x07,0x00,0xfc,0x00,
    0x80,0x1f,0x00,0xf0,0x03,0x00,0x7e,0x00,0xc0,0x0f,0x00,0xfc,0x03,0xe0,0xff,0x01,
    0x00,0x00,0xfe,0x01,0x00,0xfe,0x1f,0x00,0x7e,0xf8,0x01,0x7c,0x80,0x0f,0xf8,0x00,
    0x7c,0xf0,0x03,0xf0,0xc3,0x07,0x80,0x8f,0x1f,0x00,0x7e,0x7e,0x00,0xf8,0xf9,0x00,
    0xc0,0xf7,0x03,0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,0xc0,0xff,0x03,
    0x00,0xff,0x0f,0x00,0xfc,0x3f,0x00,0xf0,0xff,0x00,0xc0,0xef,0x03,0x00,0x9f,0x1f,
    0x00,0x7e,0x7e,0x00,0xf8,0xf0,0x01,0xe0,0x83,0x0f,0xc0,0x07,0x3c,0x00,0x0f,0xe0,
    0x01,0x1e,0x00,0x1f,0x1e,0x00,0xf0,0x1f,0x00,0x80,0xff,0x00,0x00,0xfc,0x03,0x00,
    0xf0,0x1f,0x00,0x00,0xff,0x01,0x00,0xf8,0xff,0x00,0x00,0x7f,0x00,0xff,0xff,0x00,
    0xf0,0xff,0x1f,0x80,0x1f,0xfc,0x00,0x7e,0xe0,0x07,0xf8,0x01,0x1f,0xe0,0x07,0xfc,
    0x80,0x1f,0xf0,0x03,0x7e,0xc0,0x0f,0xf8,0x01,0x3f,0xe0,0x07,0xfc,0x80,0x1f,0xf8,
    0x01,0x7e,0xe0,0x07,0xf8,0xe1,0x0f,0xe0,0xff,0x0f,0x80,0xff,0x1f,0x00,0x7e,0xff,
    0x00,0xf8,0xf9,0x03,0xe0,0xc7,0x1f,0x80,0x1f,0xff,0x00,0x7e,0xf8,0x07,0xf8,0xc1,
    0x1f,0xe0,0x07,0xfe,0x80,0x1f,0xf8,0x07,0x7e,0xc0,0x1f,0xfc,0x03,0xfe,0xfc,0x3f,
    0xf8,0x0f,0xe0,0x87,0xf0,0x3f,0xf1,0xf0,0xf3,0x80,0xe7,0x00,0xee,0x01,0xd8,0x03,
    0xb0,0x0f,0x40,0x3f,0x00,0xfe,0x01,0xfc,0x0f,0xf0,0x7f,0xc0,0xff,0x03,0xff,0x0f,
    0xfc,0x3f,0xe0,0x7f,0x00,0xff,0x01,0xf8,0x07,0xc0,0x0f,0x00,0x3f,0x00,0x7e,0x00,
    0xfc,0x01,0xb8,0x07,0x78,0x3f,0x78,0xf2,0x7f,0x84,0x1f,0x00,0xff,0xff,0xff,0xff,
    0xff,0xff,0xc7,0x0f,0xff,0xe0,0x07,0x3e,0xf0,0x03,0x0e,0xf8,0x01,0x06,0xfc,0x00,
    0x01,0x7e,0x00,0x00,0x3f,0x00,0x80,0x1f,0x00,0xc0,0x0f,0x00,0xe0,0x07,0x00,0xf0,
    0x03,0x00,0xf8,0x01,0x00,0xfc,0x00,0x00,0x7e,0x00,0x00,0x3f,0x00,0x80,0x1f,0x00,
    0xc0,0x0f,0x00,0xe0,0x07,0x00,0xf0,0x03,0x00,0xf8,0x01,0x00,0xfc,0x00,0x00,0x7e,
    0x00,0x80,0x7f,0x00,0xf0,0xff,0x00,0xff,0x0f,0xfe,0xf9,0x07,0xf0,0xe0,0x07,0x80,
    0xc0,0x0f,0x00,0x81,0x1f,0x00,0x02,0x3f,0x00,0x04,0x7e,0x00,0x08,0xfc,0x00,0x10,
    0xf8,0x01,0x20,0xf0,0x03,0x40,0xe0,0x07,0x80,0xc0,0x0f,0x00,0x81,0x1f,0x00,0x02,
    0x3f,0x00,0x04,0x7e,0x00,0x08,0xfc,0x00,0x10,0xf8,0x01,0x20,0xf0,0x03,0x40,0xe0,
    0x07,0x80,0xc0,0x0f,0x00,0x81,0x1f,0x00,0x02,0x3f,0x00,0x02,0xfc,0x00,0x04,0xf0,
    0x03,0x04,0xc0,0x0f,0x0e,0x00,0xff,0x0f,0x00,0xf8,0x03,0x00,0xff,0x1f,0xfc,0xf3,
    0x0f,0x80,0x87,0x3f,0x00,0x0c,0xfe,0x00,0x18,0xf0,0x03,0x60,0xc0,0x1f,0x80,0x00,
    0x7e,0x00,0x03,0xf8,0x03,0x0c,0xc0,0x0f,0x10,0x00,0x7f,0x60,0x00,0xf8,0x81,0x01,
    0xe0,0x07,0x03,0x80,0x3f,0x0c,0x00,0xfc,0x10,0x00,0xf0,0x67,0x00,0x80,0x9f,0x01,
    0x00,0x7e,0x02,0x00,0xf8,0x0f,0x00,0xc0,0x1f,0x00,0x00,0x7f,0x00,0x00,0xf8,0x01,
    0x00,0xe0,0x03,0x00,0x00,0x0f,0x00,0x00,0x1c,0x00,0x00,0x70,0x00,0x00,0x80,0x01,
    0x00,0xff,0xe7,0xff,0xe1,0xef,0x1f,0xf8,0x07,0x78,0xfc,0x00,0x7f,0x00,0xc3,0x0f,
    0xe0,0x07,0x30,0xfc,0x01,0x7e,0x80,0x81,0x1f,0xe0,0x07,0x18,0xf8,0x01,0xfe,0x80,
    0x01,0x3f,0xe0,0x0f,0x0c,0xf0,0x03,0xfe,0xc0,0x00,0x3f,0xb0,0x1f,0x0c,0xe0,0x07,
    0xf9,0x61,0x00,0x7e,0x98,0x1f,0x06,0xe0,0x87,0xf1,0x63,0x00,0xfc,0x08,0x3f,0x03,
    0xc0,0xcf,0xe0,0x33,0x00,0xfc,0x0c,0x3e,0x03,0x80,0x5f,0xe0,0x1f,0x00,0xf8,0x07,
    0xfc,0x01,0x80,0x3f,0xc0,0x1f,0x00,0xf0,0x03,0xfc,0x00,0x00,0x3f,0x80,0x0f,0x00,
    0xf0,0x01,0xf8,0x00,0x00,0x1e,0x80,0x07,0x00,0xe0,0x00,0x70,0x00,0x00,0x0e,0x00,
    0x07,0x00,0xc0,0x00,0x30,0x00,0x00,0x04,0x00,0x02,0x00,0xff,0x1f,0xff,0xf9,0x0f,
    0xf0,0xc1,0x3f,0x80,0x03,0xfe,0x00,0x07,0xf0,0x07,0x0c,0xc0,0x3f,0x18,0x00,0xfe,
    0x30,0x00,0xf0,0xc7,0x00,0xc0,0xbf,0x01,0x00,0xfe,0x03,0x00,0xf0,0x07,0x00,0xc0,
    0x3f,0x00,0x00,0xfe,0x00,0x00,0xf0,0x07,0x00,0xc0,0x1f,0x00,0x80,0xff,0x00,0x00,
    0xf6,0x07,0x00,0xcc,0x1f,0x00,0x18,0xfe,0x00,0x30,0xf0,0x07,0xc0,0xc0,0x1f,0x80,
    0x01,0xfe,0x00,0x03,0xf8,0x07,0x0e,0xc0,0x1f,0x7c,0x80,0xff,0xfc,0x87,0xff,0x0f,
    0xff,0x1f,0xfe,0xfb,0x0f,0xc0,0x83,0x3f,0x00,0x06,0xfe,0x00,0x18,0xf0,0x07,0x30,
    0xc0,0x1f,0x40,0x00,0xfe,0x80,0x01,0xf8,0x03,0x03,0xc0,0x1f,0x0c,0x00,0x7e,0x18,
    0x00,0xf8,0x23,0x00,0xc0,0xcf,0x00,0x00,0xff,0x01,0x00,0xf8,0x07,0x00,0xe0,0x0f,
    0x00,0x00,0x3f,0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x3f,
    0x00,0x00,0xfc,0x00,0x00,0xf0,0x03,0x00,0xc0,0x0f,0x00,0x00,0x3f,0x00,0x00,0xfe,
    0x01,0x00,0xfe,0x1f,0x00,0xfc,0xff,0x3f,0xfe,0xff,0x0f,0x1f,0xf0,0x87,0x03,0xf8,
    0xe1,0x00,0xfe,0x30,0x80,0x3f,0x18,0xc0,0x0f,0x04,0xf0,0x07,0x00,0xfc,0x01,0x00,
    0xfe,0x00,0x80,0x3f,0x00,0xe0,0x0f,0x00,0xf0,0x07,0x00,0xfc,0x01,0x00,0x7e,0x00,
    0x80,0x3f,0x00,0xe0,0x0f,0x40,0xf0,0x07,0x20,0xfc,0x01,0x18,0x7f,0x00,0x8c,0x3f,
    0x00,0xe7,0x0f,0x80,0xf1,0x03,0xf0,0xfc,0x01,0x7e,0xff,0xff,0xbf,0xff,0xff,0x1f,
    0xff,0xff,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
    0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0xff,0xff,
    0x0f,0xf0,0x00,0x0e,0xe0,0x01,0x1e,0xc0,0x01,0x1c,0xc0,0x03,0x38,0x80,0x03,0x78,
    0x00,0x07,0x70,0x00,0x0f,0xe0,0x00,0x0e,0xe0,0x01,0x1c,0xc0,0x01,0x3c,0x80,0x03,
    0x38,0x80,0x07,0x70,0x00,0x07,0xf0,0x00,0x0f,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xf0,
    0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
    0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xff,0xff,0xc0,0x03,0xc0,0x03,0xe0,0x07,0xe0,
    0x07,0xf0,0x0e,0x70,0x0e,0x78,0x1e,0x38,0x1c,0x3c,0x3c,0x1c,0x38,0x1e,0x78,0x0e,
    0x70,0x0f,0xf0,0x07,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x07,0x1e,0x7c,
    0xf0,0x81,0x07,0x1e,0x70,0xe0,0x07,0xf0,0x3f,0x70,0xf8,0xf0,0xe0,0xe3,0xc3,0xc7,
    0x87,0x0f,0x07,0x1f,0x00,0x3e,0xc0,0x7f,0xe0,0xf9,0xf0,0xf1,0xf1,0xe1,0xf3,0xc3,
    0xe7,0x87,0xcf,0x9f,0x9f,0xff,0xff,0xfe,0xfc,0xf8,0xf0,0x00,0x7f,0x00,0xf0,0x03,
    0x00,0x1f,0x00,0xf8,0x00,0xc0,0x07,0x00,0x3e,0x00,0xf0,0x01,0x80,0x0f,0x00,0x7c,
    0x3e,0xe0,0xfb,0x07,0x3f,0x7e,0xf8,0xe0,0xc7,0x07,0x3f,0x3e,0xf0,0xf3,0x81,0x9f,
    0x0f,0xfc,0x7c,0xe0,0xe7,0x03,0x3f,0x1f,0xf8,0xf9,0xc0,0xcf,0x07,0x3e,0x3e,0xf8,
    0xf1,0xc1,0x87,0x1b,0x1f,0x8c,0x7f,0x20,0xf8,0x00,0xc0,0x07,0xf8,0x0f,0x1e,0x8f,
    0x87,0xe7,0xc1,0xf3,0xe0,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xe0,0x07,
    0xf0,0x03,0xf0,0x03,0xf8,0xc3,0xf8,0x3f,0xf8,0x0f,0xf0,0x03,0x00,0xfe,0x01,0xc0,
    0x0f,0x00,0x7c,0x00,0xe0,0x03,0x00,0x1f,0x00,0xf8,0x00,0xc0,0x07,0x00,0x3e,0xe0,
    0xf3,0xc1,0xbf,0x0f,0x3f,0x7e,0xf8,0xe0,0xe3,0x07,0x1f,0x1f,0xf8,0xfc,0xc0,0xe7,
    0x07,0x3e,0x3f,0xf0,0xf9,0x81,0xcf,0x0f,0x7c,0x7e,0xe0,0xf3,0x03,0x1f,0x1f,0xf8,
    0xf8,0xe1,0x87,0x9f,0x7f,0xf8,0xf7,0x07,0x9f,0x03,0xe0,0x03,0xfc,0x07,0x8f,0xc7,
    0x83,0xe3,0xc1,0xfb,0xe0,0xfd,0xff,0xfe,0xff,0x1f,0x80,0x0f,0xc0,0x07,0xe0,0x07,
    0xf0,0x03,0xf0,0x01,0xf9,0xc3,0xf8,0x3f,0xf8,0x0f,0xf0,0x01,0xe0,0x07,0xfc,0x87,
    0xcf,0xe3,0xf1,0x7c,0x3c,0x1f,0xc6,0x07,0xf0,0x01,0xff,0xc3,0xff,0xc0,0x07,0xf0,
    0x01,0x7c,0x00,0x1f,0xc0,0x07,0xf0,0x01,0x7c,0x00,0x1f,0xc0,0x07,0xf0,0x01,0x7c,
    0x00,0x1f,0xc0,0x07,0xf0,0x01,0xfe,0xc0,0xff,0x00,0xe0,0x07,0xe0,0xff,0xef,0xc3,
    0xbf,0x07,0x1e,0x1f,0xf8,0x7c,0xe0,0xf3,0x81,0xcf,0x07,0x3e,0x1f,0xf8,0x78,0xf0,
    0xc1,0xc3,0x03,0xfc,0x07,0x18,0x00,0x30,0x00,0xe0,0x00,0xc0,0x07,0x00,0xff,0x7f,
    0xfc,0xff,0xf3,0xff,0x9f,0xff,0xff,0xf8,0xff,0x1f,0x00,0x7f,0x00,0xf8,0x03,0x78,
    0xfe,0xff,0xe0,0x7f,0x00,0x7f,0x00,0xf0,0x03,0x00,0x1f,0x00,0xf8,0x00,0xc0,0x07,
    0x00,0x3e,0x00,0xf0,0x01,0x80,0x0f,0x00,0x7c,0x3c,0xe0,0xf3,0x07,0xdf,0x3f,0xf8,
    0xf3,0xc3,0x07,0x1f,0x3e,0xf8,0xf0,0xc1,0x87,0x0f,0x3e,0x7c,0xf0,0xe1,0x83,0x0f,
    0x1f,0x7c,0xf8,0xe0,0xc3,0x07,0x1f,0x3e,0xf8,0xf0,0xc1,0x87,0x0f,0x3e,0xfe,0xf8,
    0xfb,0xef,0x3f,0x38,0xfc,0xf8,0xf1,0xe3,0x07,0x07,0x00,0x00,0x7f,0xfc,0xf0,0xe1,
    0xc3,0x87,0x0f,0x1f,0x3e,0x7c,0xf8,0xf0,0xe1,0xc3,0x87,0x0f,0x1f,0x3e,0xfe,0xfe,
    0x03,0x00,0x07,0xfc,0xc0,0x0f,0xfc,0xc0,0x0f,0x78,0x00,0x00,0x00,0xe0,0x0f,0xfc,
    0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x80,
    0x0f,0xf8,0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x80,0x0f,0xf8,0x86,0xff,0xf8,0x8f,0x77,
    0x7c,0xfe,0xc3,0x0f,0x7f,0x00,0xe0,0x07,0x00,0x7c,0x00,0xc0,0x07,0x00,0x7c,0x00,
    0xc0,0x07,0x00,0x7c,0x00,0xc0,0x07,0x00,0x7c,0xfc,0xc7,0x07,0x1f,0x7c,0x60,0xc0,
    0x07,0x03,0x7c,0x18,0xc0,0xc7,0x00,0x7c,0x0e,0xc0,0xf7,0x00,0xfc,0x1f,0xc0,0xff,
    0x03,0x7c,0x7e,0xc0,0xe7,0x07,0x7c,0xfc,0xc0,0x87,0x1f,0x7c,0xf8,0xc1,0x07,0x3f,
    0x7e,0xf0,0xf7,0x9f,0xff,0x7f,0xfc,0xf0,0xe1,0xc3,0x87,0x0f,0x1f,0x3e,0x7c,0xf8,
    0xf0,0xe1,0xc3,0x87,0x0f,0x1f,0x3e,0x7c,0xf8,0xf0,0xe1,0xc3,0x87,0x0f,0x1f,0x3e,
    0xfe,0xfe,0x03,0x7f,0x3c,0xe0,0x81,0x9f,0x3f,0xfe,0xc1,0xf7,0xcf,0x7f,0xf0,0xe7,
    0x1f,0x3f,0x7c,0xf0,0x81,0x0f,0x1f,0x7c,0xe0,0xc3,0x07,0x1f,0xf8,0xf0,0xc1,0x07,
    0x3e,0x7c,0xf0,0x81,0x0f,0x1f,0x7c,0xe0,0xc3,0x07,0x1f,0xf8,0xf0,0xc1,0x07,0x3e,
    0x7c,0xf0,0x81,0x0f,0x1f,0x7c,0xe0,0xc3,0x07,0x1f,0xf8,0xf0,0xc1,0x07,0x3e,0xfe,
    0xf0,0x83,0xcf,0x7f,0xff,0xf9,0x0f,0x7f,0x3c,0xf0,0xf3,0x07,0xdf,0x3f,0xf8,0xf3,
    0xc3,0x07,0x1f,0x3e,0xf8,0xf0,0xc1,0x87,0x0f,0x3e,0x7c,0xf0,0xe1,0x83,0x0f,0x1f,
    0x7c,0xf8,0xe0,0xc3,0x07,0x1f,0x3e,0xf8,0xf0,0xc1,0x87,0x0f,0x3e,0xfe,0xf8,0xf9,
    0xef,0x3f,0xc0,0x07,0xe0,0x3f,0xe0,0xf1,0xe1,0xe3,0xe3,0x83,0xcf,0x07,0xdf,0x0f,
    0xfe,0x1f,0xfc,0x3f,0xf8,0x7f,0xf0,0xff,0xe0,0xff,0xc1,0xef,0x83,0xcf,0x07,0x1f,
    0x1f,0x1f,0x3e,0x3e,0xf0,0x1f,0x80,0x0f,0x00,0x7f,0x3e,0xf0,0xfb,0x07,0x7f,0x7e,
    0xf8,0xe1,0xc7,0x07,0x3e,0x3e,0xf0,0xf3,0x81,0x9f,0x0f,0xfc,0x7c,0xe0,0xe7,0x03,
    0x3f,0x1f,0xf8,0xf9,0xc0,0xcf,0x07,0x3e,0x3e,0xf8,0xf1,0xc1,0x87,0x1f,0x3f,0x7c,
    0xff,0xe0,0xf3,0x01,0x1f,0x00,0xf8,0x00,0xc0,0x07,0x00,0x3e,0x00,0xf0,0x01,0x80,
    0x0f,0x00,0xfe,0x00,0xf8,0x1f,0x00,0xc0,0x07,0x81,0x7f,0x0c,0x3e,0x76,0xf8,0xe0,
    0xe3,0x07,0x1f,0x1f,0xf8,0xfc,0xc0,0xe7,0x07,0x3e,0x3f,0xf0,0xf9,0x81,0xcf,0x0f,
    0x7c,0x7e,0xe0,0xf3,0x03,0x1f,0x3f,0xf8,0xf8,0xc1,0x87,0x1f,0x3f,0xf8,0xf7,0x01,
    0x9f,0x0f,0x00,0x7c,0x00,0xe0,0x03,0x00,0x1f,0x00,0xf8,0x00,0xc0,0x07,0x00,0x3e,
    0x00,0xf8,0x03,0xf0,0x3f,0x7f,0x3c,0xbf,0x3f,0xff,0x9f,0x9f,0xcf,0x87,0xe3,0x03,
    0xf0,0x01,0xf8,0x00,0x7c,0x00,0x3e,0x00,0x1f,0x80,0x0f,0xc0,0x07,0xe0,0x03,0xf0,
    0x01,0xf8,0x00,0xfe,0x80,0xff,0x01,0xf8,0xc4,0x7f,0x1e,0xf7,0x60,0x0f,0xf6,0x41,
    0x7f,0xf0,0x1f,0xfe,0xc3,0x7f,0xe0,0x0f,0xf8,0x01,0x3f,0xe0,0x07,0xfe,0x70,0xff,
    0x13,0x1f,0x40,0x00,0x06,0x70,0x80,0x07,0x7c,0xe0,0x07,0xff,0xf3,0x3f,0x7c,0xc0,
    0x07,0x7c,0xc0,0x07,0x7c,0xc0,0x07,0x7c,0xc0,0x07,0x7c,0xc0,0x07,0x7c,0xc0,0xc7,
    0x7c,0xc4,0x3f,0xf8,0x03,0x0f,0x7f,0xfc,0xf1,0x83,0x0f,0x1f,0x7c,0xf8,0xe0,0xc3,
    0x07,0x1f,0x3e,0xf8,0xf0,0xc1,0x87,0x0f,0x3e,0x7c,0xf0,0xe1,0x83,0x0f,0x1f,0x7c,
    0xf8,0xe0,0xc3,0x07,0x1f,0x3e,0xf8,0xf0,0xe3,0x0f,0xff,0xff,0xf8,0xf3,0x00,0x8f,
    0x00,0xff,0xf3,0xfb,0x03,0xc7,0x0f,0x0c,0x3f,0x30,0xf8,0x41,0xe0,0x87,0x01,0x1f,
    0x02,0xfc,0x08,0xe0,0x33,0x80,0x5f,0x00,0xfc,0x01,0xf0,0x03,0xc0,0x0f,0x00,0x3e,
    0x00,0x78,0x00,0xc0,0x01,0x00,0x03,0x00,0x0c,0x00,0xff,0xf9,0xef,0xfb,0xc3,0x0f,
    0xc6,0x07,0x3f,0x18,0x3f,0xf8,0x20,0xf8,0xe0,0xc3,0xe0,0x83,0x1f,0x01,0x1f,0x7f,
    0x04,0x7c,0xf4,0x19,0xf0,0x9b,0x27,0x80,0x6f,0xfe,0x00,0xbe,0xf8,0x01,0xf0,0xc3,
    0x07,0xc0,0x07,0x1f,0x00,0x1f,0x3c,0x00,0x38,0xe0,0x00,0xe0,0x80,0x03,0x00,0x03,
    0x06,0x00,0x04,0x18,0x00,0xff,0xf9,0xf9,0x81,0xc3,0x0f,0x06,0x3f,0x0c,0xf8,0x19,
    0xc0,0x2f,0x00,0xff,0x00,0xf8,0x01,0xe0,0x0f,0x00,0x3f,0x00,0xfc,0x01,0xf8,0x07,
    0x20,0x3f,0xc0,0xf8,0x81,0xe1,0x07,0x03,0x3f,0x0e,0xfc,0xfd,0xfc,0x0f,0xff,0xf9,
    0xfd,0xc0,0xf9,0x81,0xe1,0x03,0xc3,0x0f,0x06,0x1f,0x04,0x3e,0x0c,0xfc,0x08,0xf0,
    0x11,0xe0,0x37,0xc0,0x2f,0x00,0x5f,0x00,0xfe,0x00,0xf8,0x00,0xf0,0x01,0xe0,0x03,
    0x80,0x03,0x00,0x07,0x00,0x04,0x00,0x0c,0x00,0x18,0xc0,0x11,0xc0,0x33,0x80,0x27,
    0x00,0x7f,0x00,0x3c,0x00,0x00,0xfe,0x7f,0xfe,0x7f,0x0e,0x7e,0x06,0x3f,0x02,0x3f,
    0x80,0x1f,0xc0,0x0f,0xc0,0x0f,0xe0,0x07,0xe0,0x07,0xf0,0x03,0xf8,0x01,0xf8,0x41,
    0xfc,0x40,0xfc,0x60,0x7e,0x78,0xff,0x7f,0xff,0x7f,0x00,0x0f,0x3e,0xe0,0x01,0x0f,
    0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,
    0x80,0x07,0x1c,0xe0,0x01,0x78,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,
    0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x1e,0xe0,0x03,0xf8,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x0f,0xc0,0x07,0x78,0x00,0x0f,0xf0,0x00,
    0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x1e,
    0x80,0x07,0x38,0xe0,0x01,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,
    0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x80,0x07,0x7c,0xf0,0x01,0xf8,0x00,0xf8,0x1f,0xf6,
    0xff,0x9f,0xe1,0x3f,0x00,0x7c,0x00,
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
 *  X offset: 2, Y offset: 12
 *  X size: 6, Y size: 26
 *     ###         
 *    #####        
 *    ######       
 *    ######       
 *    ######       
 *    ######       
 *    #####        
 *     ####        
 *     ####        
 *     ###         
 *     ###         
 *     ###         
 *     ###         
 *      ##         
 *      #          
 *      #          
 *      #          
 *                 
 *                 
 *                 
 *     ###         
 *    #####        
 *    ######       
 *    ######       
 *    ######       
 *     ###         
 ********************/
{1, 13, 2, 12, 6, 26},

/********************
 *  Character: '"', X advance: 21
 *  X offset: 3, Y offset: 12
 *  X size: 14, Y size: 11
 *      ##        ##        
 *     ####      ####       
 *     ####      ####       
 *     ####      ####       
 *     ####      ####       
 *     ####      ####       
 *      ###       ##        
 *      ##        ##        
 *      ##        ##        
 *       #        ##        
 *       #        ##        
 ********************/
{21, 21, 3, 12, 14, 11},

/********************
 *  Character: '#', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 19, Y size: 26
 *        ###     ###  
 *        ###    ###   
 *        ###    ###   
 *        ###    ###   
 *        ###    ###   
 *        ###    ###   
 *       ###     ###   
 *   ##################
 *   ##################
 *   ##################
 *       ###    ###    
 *       ###    ###    
 *       ###    ###    
 *      ###     ###    
 *      ###     ###    
 *  ################## 
 *  ################## 
 *  ################## 
 *      ###    ###     
 *      ###    ###     
 *     ###     ###     
 *     ###     ###     
 *     ###    ###      
 *     ###    ###      
 *     ###    ###      
 *     ###    ###      
 ********************/
{41, 19, 0, 12, 19, 26},

/********************
 *  Character: '$', X advance: 19
 *  X offset: 1, Y offset: 10
 *  X size: 17, Y size: 30
 *          ##          
 *          ##          
 *          ##          
 *       ########       
 *     ##   ## ####     
 *    ##    ##   ###    
 *    ##    ##   ###    
 *   ###    ##    ##    
 *   ###    ##    ##    
 *   ####   ##     #    
 *   ###### ##          
 *   #########          
 *    #########         
 *     ##########       
 *      ##########      
 *       ###########    
 *         ##########   
 *          #########   
 *          ##  ######  
 *          ##   #####  
 *   #      ##    ####  
 *    #     ##    ####  
 *    #     ##    ####  
 *    ##    ##    ####  
 *    ###   ##   ####   
 *    ####  ##  ####    
 *     ############     
 *        ######        
 *          ##          
 *          ##          
 ********************/
{103, 19, 1, 10, 17, 30},

/********************
 *  Character: '%', X advance: 38
 *  X offset: 5, Y offset: 11
 *  X size: 28, Y size: 26
 *             ####         ###                
 *           ########     ####                 
 *          #####  ###########                 
 *         #####    #####  ##                  
 *        #####     #     ##                   
 *        #####     #     ##                   
 *       #####      #    ##                    
 *       #####     ##   ###                    
 *       ####      #    ##                     
 *       ####      #   ###                     
 *       ####     ##   ##                      
 *       ####    ##   ##      #####            
 *        ####  ##    ##    ########           
 *        ########   ##    #####   #           
 *          ####     ##   #####     #          
 *                  ##    #####     #          
 *                  ##   #####      #          
 *                 ##    ####       #          
 *                ###   #####       #          
 *                ##    #####      #           
 *               ##     ####       #           
 *               ##     ####      #            
 *              ##      ####     ##            
 *              ##       ###    ##             
 *             ##        ########              
 *             ##         #####                
 ********************/
{167, 38, 5, 11, 28, 26},

/********************
 *  Character: '&', X advance: 32
 *  X offset: 2, Y offset: 12
 *  X size: 28, Y size: 27
 *              ######                
 *            ##########              
 *           ####   #####             
 *           ###     #####            
 *          ####      ####            
 *          ####      ####            
 *          #####     ####            
 *          ######    ###             
 *          ####### ###               
 *           ########                 
 *           #######      ########    
 *           ########       ####      
 *         ###########       ##       
 *        ###  ########      ##       
 *       ###    #######     ##        
 *      ###     ########    ##        
 *     ####      ########  ##         
 *    #####       ####### ##          
 *    #####       ##########          
 *    ######       ########           
 *    ######        ########          
 *    #######        ########         
 *    ########       #########   #    
 *     #########    #############     
 *      #############  ##########     
 *       ##########     ########      
 *        #######         #####       
 ********************/
{258, 32, 2, 12, 28, 27},

/********************
 *  Character: ''', X advance: 11
 *  X offset: 3, Y offset: 12
 *  X size: 4, Y size: 11
 *      ##        
 *     ####       
 *     ####       
 *     ####       
 *     ####       
 *     ####       
 *     ###        
 *      ##        
 *      ##        
 *      ##        
 *      ##        
 ********************/
{353, 11, 3, 12, 4, 11},

/********************
 *  Character: '(', X advance: 13
 *  X offset: 2, Y offset: 11
 *  X size: 9, Y size: 32
 *            #    
 *          ##     
 *         ##      
 *        ##       
 *        ##       
 *       ##        
 *      ###        
 *      ###        
 *     ###         
 *     ###         
 *     ###         
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
 *     ###         
 *     ###         
 *     ###         
 *      ###        
 *      ###        
 *       ##        
 *        ##       
 *        ##       
 *         ##      
 *          ##     
 *            #    
 ********************/
{359, 13, 2, 11, 9, 32},

/********************
 *  Character: ')', X advance: 13
 *  X offset: 2, Y offset: 11
 *  X size: 9, Y size: 32
 *    #            
 *     ##          
 *      ##         
 *       ##        
 *       ##        
 *        ##       
 *        ###      
 *        ###      
 *        ####     
 *         ###     
 *         ###     
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ####    
 *         ###     
 *         ###     
 *         ###     
 *        ###      
 *        ###      
 *        ##       
 *       ##        
 *       ##        
 *      ##         
 *     ##          
 *    #            
 ********************/
{395, 13, 2, 11, 9, 32},

/********************
 *  Character: '*', X advance: 19
 *  X offset: 2, Y offset: 12
 *  X size: 14, Y size: 16
 *          ###          
 *         ####          
 *         ####          
 *    ###  ####  ###     
 *    ####  ##  ####     
 *    ##### ## #####     
 *     #############     
 *        ######         
 *       ########        
 *    #############      
 *    ##### ## #####     
 *    ####  ##  ####     
 *     ##  ####  ###     
 *         ####          
 *         ####          
 *          ##           
 ********************/
{431, 19, 2, 12, 14, 16},

/********************
 *  Character: '+', X advance: 26
 *  X offset: 2, Y offset: 18
 *  X size: 21, Y size: 20
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *    #####################     
 *    #####################     
 *    #####################     
 *    #####################     
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 *             ###              
 ********************/
{459, 26, 2, 18, 21, 20},

/********************
 *  Character: ',', X advance: 10
 *  X offset: 1, Y offset: 32
 *  X size: 6, Y size: 13
 *    ###      
 *   #####     
 *   ######    
 *   ######    
 *   ######    
 *    #####    
 *       ##    
 *       #     
 *      ##     
 *      #      
 *     #       
 *   ##        
 *   #         
 ********************/
{512, 10, 1, 32, 6, 13},

/********************
 *  Character: '-', X advance: 13
 *  X offset: 2, Y offset: 27
 *  X size: 9, Y size: 4
 *    #########    
 *    #########    
 *    #########    
 *    #########    
 ********************/
{522, 13, 2, 27, 9, 4},

/********************
 *  Character: '.', X advance: 9
 *  X offset: 2, Y offset: 32
 *  X size: 6, Y size: 6
 *     ####    
 *    ######   
 *    ######   
 *    ######   
 *    ######   
 *     ####    
 ********************/
{527, 9, 2, 32, 6, 6},

/********************
 *  Character: '/', X advance: 11
 *  X offset: -1, Y offset: 12
 *  X size: 12, Y size: 27
 *           ###
 *          ####
 *          ### 
 *          ### 
 *         #### 
 *         ###  
 *         ###  
 *        ####  
 *        ###   
 *        ###   
 *       ####   
 *       ###    
 *       ###    
 *      ####    
 *      ###     
 *      ###     
 *     ####     
 *     ###      
 *     ###      
 *    ####      
 *    ###       
 *    ###       
 *   ####       
 *   ###        
 *   ###        
 *  ####        
 *  ###         
 ********************/
{532, 11, -1, 12, 12, 27},

/********************
 *  Character: '0', X advance: 19
 *  X offset: 1, Y offset: 12
 *  X size: 17, Y size: 26
 *         #####        
 *       ###   ###      
 *      ####   ####     
 *      ###     ###     
 *     ####     ####    
 *    #####     #####   
 *    #####     #####   
 *    #####     #####   
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *    #####     #####   
 *    #####     #####   
 *    #####     #####   
 *     ####     ####    
 *     ####     ###     
 *      ####   ####     
 *       ###   ###      
 *         #####        
 ********************/
{573, 19, 1, 12, 17, 26},

/********************
 *  Character: '1', X advance: 19
 *  X offset: 2, Y offset: 12
 *  X size: 14, Y size: 26
 *             ##        
 *           ####        
 *         ######        
 *      #########        
 *     #  #######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *         ######        
 *        ########       
 *    ##############     
 ********************/
{629, 19, 2, 12, 14, 26},

/********************
 *  Character: '2', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 18, Y size: 26
 *        ######       
 *       #########     
 *     ############    
 *     ############    
 *    ##    ########   
 *   ##       ######   
 *   #        ######   
 *             #####   
 *             #####   
 *             #####   
 *             ####    
 *            #####    
 *            ####     
 *            ###      
 *           ###       
 *          ###        
 *          ##         
 *         ##          
 *        ##        #  
 *       ##         #  
 *      ##         ##  
 *      #############  
 *     ##############  
 *    ##############   
 *   ###############   
 *  ################   
 ********************/
{675, 19, 0, 12, 18, 26},

/********************
 *  Character: '3', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 17, Y size: 26
 *        #######      
 *      ##########     
 *     ############    
 *    ##    ########   
 *   ##      #######   
 *   #        ######   
 *            ######   
 *            #####    
 *            #####    
 *           ####      
 *          ######     
 *        #########    
 *         #########   
 *           #######   
 *            #######  
 *              #####  
 *              #####  
 *               ####  
 *               ####  
 *               ###   
 *               ###   
 *   ####        ##    
 *  ######      ###    
 *  ########   ##      
 *   ###########       
 *    ########         
 ********************/
{734, 19, 0, 12, 17, 26},

/********************
 *  Character: '4', X advance: 19
 *  X offset: 1, Y offset: 12
 *  X size: 16, Y size: 26
 *              ###     
 *             ####     
 *            #####     
 *            #####     
 *           ######     
 *          #######     
 *         ## #####     
 *         #  #####     
 *        ##  #####     
 *       ##   #####     
 *       #    #####     
 *      #     #####     
 *     ##     #####     
 *     #      #####     
 *    #       #####     
 *   #        #####     
 *   ################   
 *   ################   
 *   ################   
 *   ################   
 *            #####     
 *            #####     
 *            #####     
 *            #####     
 *            #####     
 *            #####     
 ********************/
{790, 19, 1, 12, 16, 26},

/********************
 *  Character: '5', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 17, Y size: 26
 *      #############  
 *      ############   
 *      ############   
 *      ############   
 *     ############    
 *     ##              
 *     ##              
 *     ##              
 *    ####             
 *    #########        
 *    ###########      
 *   #############     
 *   ##############    
 *    #############    
 *          ########   
 *            ######   
 *              ####   
 *              ####   
 *               ###   
 *               ###   
 *               ##    
 *  ####        ###    
 *  #######    ###     
 *  #############      
 *  ###########        
 *    #######          
 ********************/
{842, 19, 0, 12, 17, 26},

/********************
 *  Character: '6', X advance: 19
 *  X offset: 1, Y offset: 12
 *  X size: 17, Y size: 26
 *                 ###  
 *             #####    
 *           #####      
 *          ####        
 *        #####         
 *       #####          
 *      #####           
 *     ######           
 *     #####            
 *    ######            
 *    ############      
 *    #############     
 *   #######  ######    
 *   ######    ######   
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *    #####     ######  
 *    #####     #####   
 *     ####     #####   
 *      ####    ####    
 *       ###   ####     
 *         ######       
 ********************/
{898, 19, 1, 12, 17, 26},

/********************
 *  Character: '7', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 17, Y size: 26
 *   ################  
 *   ################  
 *   ###############   
 *   ###############   
 *  ################   
 *  ##          ###    
 *  #           ###    
 *  #          ####    
 *             ###     
 *             ###     
 *            ####     
 *            ###      
 *           ####      
 *           ####      
 *           ###       
 *          ####       
 *          ###        
 *          ###        
 *         ####        
 *         ###         
 *         ###         
 *        ####         
 *        ###          
 *       ####          
 *       ####          
 *       ###           
 ********************/
{954, 19, 0, 12, 17, 26},

/********************
 *  Character: '8', X advance: 19
 *  X offset: 1, Y offset: 12
 *  X size: 17, Y size: 26
 *        #######       
 *      ###    ####     
 *    ###       ####    
 *    ###        ####   
 *   ####        ####   
 *   ####        ####   
 *   #####       ####   
 *   ######      ###    
 *   ########   ###     
 *    ############      
 *    ###########       
 *     ###########      
 *       ##########     
 *      ############    
 *     ###  #########   
 *    ####    ########  
 *   ####      #######  
 *   ####       ######  
 *   ####        #####  
 *   ####        #####  
 *   ####        #####  
 *   ####        ####   
 *    ####      #####   
 *    #####    #####    
 *     ###########      
 *       #######        
 ********************/
{1010, 19, 1, 12, 17, 26},

/********************
 *  Character: '9', X advance: 19
 *  X offset: 1, Y offset: 12
 *  X size: 17, Y size: 26
 *        ######        
 *      ####  ####      
 *     ####    ####     
 *    #####     ####    
 *    #####     #####   
 *   ######     #####   
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *    ######    ######  
 *     ######   ######  
 *      #############   
 *       ############   
 *             ######   
 *             #####    
 *            ######    
 *            #####     
 *           #####      
 *          #####       
 *         ####         
 *       #####          
 *     #####            
 *   ###                
 ********************/
{1066, 19, 1, 12, 17, 26},

/********************
 *  Character: ':', X advance: 13
 *  X offset: 3, Y offset: 20
 *  X size: 6, Y size: 18
 *      ####        
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *      ####        
 *                  
 *                  
 *                  
 *                  
 *                  
 *                  
 *      ####        
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *      ####        
 ********************/
{1122, 13, 3, 20, 6, 18},

/********************
 *  Character: ';', X advance: 13
 *  X offset: 3, Y offset: 20
 *  X size: 7, Y size: 25
 *       ###        
 *     ######       
 *     ######       
 *     ######       
 *     ######       
 *       ###        
 *                  
 *                  
 *                  
 *                  
 *                  
 *                  
 *      ####        
 *     ######       
 *     #######      
 *     #######      
 *     #######      
 *      ######      
 *          ##      
 *          #       
 *         ##       
 *        ##        
 *       ##         
 *      ##          
 *                  
 ********************/
{1136, 13, 3, 20, 7, 25},

/********************
 *  Character: '<', X advance: 26
 *  X offset: 2, Y offset: 17
 *  X size: 21, Y size: 21
 *                       ##     
 *                     ####     
 *                   ######     
 *                 ########     
 *               ########       
 *             ########         
 *          #########           
 *        ########              
 *      ########                
 *    ########                  
 *    #######                   
 *     ########                 
 *       ########               
 *         #########            
 *            ########          
 *              ########        
 *                ########      
 *                  #######     
 *                    #####     
 *                      ###     
 *                        #     
 ********************/
{1158, 26, 2, 17, 21, 21},

/********************
 *  Character: '=', X advance: 26
 *  X offset: 2, Y offset: 21
 *  X size: 21, Y size: 14
 *    #####################     
 *    #####################     
 *    #####################     
 *    #####################     
 *                              
 *                              
 *                              
 *                              
 *                              
 *                              
 *    #####################     
 *    #####################     
 *    #####################     
 *    #####################     
 ********************/
{1214, 26, 2, 21, 21, 14},

/********************
 *  Character: '>', X advance: 26
 *  X offset: 2, Y offset: 17
 *  X size: 21, Y size: 21
 *    #                         
 *    ###                       
 *    ######                    
 *    ########                  
 *      ########                
 *        ########              
 *          ########            
 *            ########          
 *              ########        
 *                ########      
 *                   ######     
 *                  #######     
 *               #########      
 *             ########         
 *           ########           
 *         ########             
 *       ########               
 *     ########                 
 *    #######                   
 *    #####                     
 *    ##                        
 ********************/
{1251, 26, 2, 17, 21, 21},

/********************
 *  Character: '?', X advance: 19
 *  X offset: 2, Y offset: 12
 *  X size: 15, Y size: 26
 *        ######         
 *      ##########       
 *     ###   #######     
 *    ###     ######     
 *    ####     ######    
 *    ####     ######    
 *    ####     ######    
 *     ##      ######    
 *             ######    
 *            ######     
 *            #####      
 *           ####        
 *           ###         
 *          ##           
 *          #            
 *          #            
 *          #            
 *                       
 *                       
 *                       
 *         ###           
 *        ######         
 *        ######         
 *        ######         
 *        ######         
 *         ###           
 ********************/
{1307, 19, 2, 12, 15, 26},

/********************
 *  Character: '@', X advance: 35
 *  X offset: 4, Y offset: 12
 *  X size: 26, Y size: 27
 *                ########                 
 *              ############               
 *            #####       ####             
 *           ####           ###            
 *          ###               ##           
 *         ####       ####     #           
 *        ####       ##### ### ##          
 *       ####       #### # ###  #          
 *       ####      ###    ####   #         
 *       ####     ####    ###    #         
 *      ####      ###     ###    #         
 *      ####     ###      ###    #         
 *      ####     ###     ###     #         
 *      ####    ####     ###     #         
 *      ####    ###     ####     #         
 *      ####    ###     ###     #          
 *      ####    ###    ####     #          
 *       ###    ###   # ###    #           
 *       ####   ######  ###   ##           
 *       ####    ####   #######            
 *        ####           #####             
 *         ####                            
 *          ####                           
 *           ####                          
 *            #####        ####            
 *              #############              
 *                ########                 
 ********************/
{1356, 35, 4, 12, 26, 27},

/********************
 *  Character: 'A', X advance: 27
 *  X offset: 0, Y offset: 12
 *  X size: 26, Y size: 26
 *              #              
 *             ###             
 *             ###             
 *            ####             
 *            #####            
 *            #####            
 *           #######           
 *           #######           
 *          #########          
 *          ## ######          
 *          #  ######          
 *         ##   ######         
 *         #    ######         
 *        ##     ######        
 *        ##     ######        
 *        #      #######       
 *       ##       ######       
 *       ###############       
 *      #################      
 *      ##         ######      
 *      #          #######     
 *     ##           ######     
 *     ##           #######    
 *    ##            #######    
 *   ####           ########   
 *  #######      ############# 
 ********************/
{1444, 27, 0, 12, 26, 26},

/********************
 *  Character: 'B', X advance: 25
 *  X offset: 0, Y offset: 12
 *  X size: 22, Y size: 26
 *  ################         
 *  ##################       
 *    #######    #######     
 *     ######     ######     
 *     ######      ######    
 *     ######      ######    
 *     ######      ######    
 *     ######      ######    
 *     ######      #####     
 *     ######     ######     
 *     ######    #####       
 *     ############          
 *     ###############       
 *     ######    #######     
 *     ######      ######    
 *     ######      ######    
 *     ######       ######   
 *     ######       ######   
 *     ######       ######   
 *     ######       ######   
 *     ######       ######   
 *     ######       #####    
 *     ######      ######    
 *     #######    ######     
 *    ################       
 *  ################         
 ********************/
{1529, 25, 0, 12, 22, 26},

/********************
 *  Character: 'C', X advance: 27
 *  X offset: 1, Y offset: 12
 *  X size: 25, Y size: 27
 *            #######       #   
 *          ############   ##   
 *        ######     ########   
 *       #####         ######   
 *      #####           #####   
 *     ######            ####   
 *     #####              ###   
 *    ######               ##   
 *    #####                ##   
 *    #####                     
 *   ######                     
 *   ######                     
 *   ######                     
 *   ######                     
 *   ######                     
 *   ######                     
 *   ######                     
 *   ######                     
 *    #####                     
 *    ######                    
 *     #####                    
 *     ######              ###  
 *      #####             ###   
 *       #####           ###    
 *        ######      ####      
 *          #############       
 *            ########          
 ********************/
{1601, 27, 1, 12, 25, 27},

/********************
 *  Character: 'D', X advance: 28
 *  X offset: 0, Y offset: 12
 *  X size: 25, Y size: 26
 *  ################            
 *    ################          
 *     ######     ######        
 *     ######       #####       
 *     ######        #####      
 *     ######        ######     
 *     ######         ######    
 *     ######         ######    
 *     ######         ######    
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          ######   
 *     ######          #####    
 *     ######         ######    
 *     ######         #####     
 *     ######         #####     
 *     ######        #####      
 *     ######       #####       
 *     ######     ######        
 *    ################          
 *  ################            
 ********************/
{1686, 28, 0, 12, 25, 26},

/********************
 *  Character: 'E', X advance: 25
 *  X offset: 1, Y offset: 12
 *  X size: 23, Y size: 26
 *   ######################   
 *     ####################   
 *      ######        #####   
 *      ######          ###   
 *      ######           ##   
 *      ######           ##   
 *      ######            #   
 *      ######      #         
 *      ######      #         
 *      ######     ##         
 *      ######    ###         
 *      #############         
 *      #############         
 *      ######   ####         
 *      ######     ##         
 *      ######     ##         
 *      ######      #         
 *      ######      #      #  
 *      ######             #  
 *      ######            ##  
 *      ######           ###  
 *      ######          ###   
 *      ######         ####   
 *     ########      ######   
 *   ######################   
 *   ######################   
 ********************/
{1768, 25, 1, 12, 23, 26},

/********************
 *  Character: 'F', X advance: 23
 *  X offset: 1, Y offset: 12
 *  X size: 21, Y size: 26
 *   #####################  
 *     ###################  
 *      ######       #####  
 *      ######         ###  
 *      ######          ##  
 *      ######           #  
 *      ######           #  
 *      ######      #       
 *      ######     ##       
 *      ######     ##       
 *      ######   ####       
 *      #############       
 *      #############       
 *      ######   ####       
 *      ######     ##       
 *      ######     ##       
 *      ######      #       
 *      ######      #       
 *      ######              
 *      ######              
 *      ######              
 *      ######              
 *      ######              
 *      ######              
 *     ########             
 *   #############          
 ********************/
{1843, 23, 1, 12, 21, 26},

/********************
 *  Character: 'G', X advance: 29
 *  X offset: 1, Y offset: 12
 *  X size: 27, Y size: 27
 *            #######       #     
 *          ###########    ##     
 *        ######     ########     
 *       #####         ######     
 *      #####            ####     
 *     ######             ###     
 *     #####              ###     
 *    ######               ##     
 *    #####                 #     
 *   ######                       
 *   ######                       
 *   ######                       
 *   ######                       
 *   ######                       
 *   ######                       
 *   ######         ############  
 *   ######           ########    
 *   ######            ######     
 *    ######           ######     
 *    ######           ######     
 *     #####           ######     
 *     ######          ######     
 *      #####          ######     
 *       #####         ######     
 *        ######      ######      
 *          ##############        
 *            #########           
 ********************/
{1912, 29, 1, 12, 27, 27},

/********************
 *  Character: 'H', X advance: 30
 *  X offset: 1, Y offset: 12
 *  X size: 27, Y size: 26
 *   ############   ############   
 *     ########       ########     
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      #####################      
 *      #####################      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *      ######         ######      
 *     ########       ########     
 *   ############   ############   
 ********************/
{2004, 30, 1, 12, 27, 26},

/********************
 *  Character: 'I', X advance: 15
 *  X offset: 1, Y offset: 12
 *  X size: 12, Y size: 26
 *   ############   
 *     ########     
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
 *     ########     
 *   ############   
 ********************/
{2092, 15, 1, 12, 12, 26},

/********************
 *  Character: 'J', X advance: 19
 *  X offset: 0, Y offset: 12
 *  X size: 18, Y size: 30
 *       ############# 
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
 *   ###     ######    
 *  #####    ######    
 *  #####    #####     
 *  ####     #####     
 *   ###    #####      
 *   ###########       
 *     #######         
 ********************/
{2131, 19, 0, 12, 18, 30},

/********************
 *  Character: 'K', X advance: 29
 *  X offset: 1, Y offset: 12
 *  X size: 28, Y size: 26
 *   ############   ###########   
 *     ########        ######     
 *      ######          ###       
 *      ######         ###        
 *      ######        ##          
 *      ######       ##           
 *      ######      ##            
 *      ######     ##             
 *      ######    ##              
 *      ######   ##               
 *      ######  ####              
 *      ###### ######             
 *      #############             
 *      ##############            
 *      ######  #######           
 *      ######  ########          
 *      ######   ########         
 *      ######    #######         
 *      ######     #######        
 *      ######      #######       
 *      ######      ########      
 *      ######       ########     
 *      ######        #######     
 *      ######         #######    
 *     ########        ########   
 *   ############   ############# 
 ********************/
{2199, 29, 1, 12, 28, 26},

/********************
 *  Character: 'L', X advance: 25
 *  X offset: 1, Y offset: 12
 *  X size: 23, Y size: 26
 *   #############            
 *     ########               
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
 *      ######             #  
 *      ######            ##  
 *      ######            ##  
 *      ######           ##   
 *      ######          ###   
 *      ######         ####   
 *     ########      ######   
 *   ######################   
 *   ######################   
 ********************/
{2290, 25, 1, 12, 23, 26},

/********************
 *  Character: 'M', X advance: 36
 *  X offset: 0, Y offset: 12
 *  X size: 35, Y size: 26
 *   #########               ########## 
 *     #######               ########   
 *      #######              #######    
 *      #######             ########    
 *      # ######            # ######    
 *      # ######           ## ######    
 *      # #######          #  ######    
 *      #  ######         ##  ######    
 *      #  #######        ##  ######    
 *      #   ######       ##   ######    
 *      #   ######       ##   ######    
 *      #    ######      #    ######    
 *      #    ######     ##    ######    
 *      #     ######    #     ######    
 *      #     ######   ##     ######    
 *      #     #######  ##     ######    
 *      #      ###### ##      ######    
 *      #      ###### ##      ######    
 *      #       #######       ######    
 *      #       #######       ######    
 *      #        #####        ######    
 *      #        #####        ######    
 *      #        #####        ######    
 *      #         ###         ######    
 *     ###        ###        ########   
 *  #########      #       ############ 
 ********************/
{2365, 36, 0, 12, 35, 26},

/********************
 *  Character: 'N', X advance: 28
 *  X offset: 0, Y offset: 12
 *  X size: 26, Y size: 26
 *  #########         ########  
 *   #########          ####    
 *     #######            #     
 *      #######           #     
 *      ########          #     
 *      #########         #     
 *      # ########        #     
 *      # #########       #     
 *      #  ########       #     
 *      #   ########      #     
 *      #    ########     #     
 *      #     ########    #     
 *      #      ########   #     
 *      #       ########  #     
 *      #       ########  #     
 *      #        ######## #     
 *      #         #########     
 *      #          ########     
 *      #           #######     
 *      #            ######     
 *      #             #####     
 *      #              ####     
 *      #              ####     
 *      #               ###     
 *     ####              ##     
 *  #########             #     
 ********************/
{2479, 28, 0, 12, 26, 26},

/********************
 *  Character: 'O', X advance: 30
 *  X offset: 1, Y offset: 12
 *  X size: 26, Y size: 27
 *            ########             
 *          ############           
 *        ######    ######         
 *       #####        #####        
 *      #####          #####       
 *     ######          ######      
 *     #####            #####      
 *    ######            ######     
 *    ######            ######     
 *   ######              #####     
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *    #####              #####     
 *    ######            ######     
 *     #####            #####      
 *     #####            #####      
 *      #####          #####       
 *       #####        #####        
 *        #####      #####         
 *         ##############          
 *            ########             
 ********************/
{2564, 30, 1, 12, 26, 27},

/********************
 *  Character: 'P', X advance: 24
 *  X offset: 1, Y offset: 12
 *  X size: 21, Y size: 26
 *   ################        
 *     ################      
 *      ######    ######     
 *      ######     ######    
 *      ######      #####    
 *      ######      ######   
 *      ######      ######   
 *      ######      ######   
 *      ######      ######   
 *      ######      ######   
 *      ######      #####    
 *      ######     ######    
 *      ######    ######     
 *      ###############      
 *      ############         
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *      ######               
 *     ########              
 *   ############            
 ********************/
{2652, 24, 1, 12, 21, 26},

/********************
 *  Character: 'Q', X advance: 30
 *  X offset: 1, Y offset: 12
 *  X size: 26, Y size: 33
 *            ########             
 *          ############           
 *        ######    ######         
 *       #####        #####        
 *      #####          #####       
 *     ######          ######      
 *     #####            #####      
 *    ######            ######     
 *    ######            ######     
 *    #####              #####     
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *   ######              ######    
 *    #####              #####     
 *    ######            ######     
 *    ######            #####      
 *     #####            #####      
 *      #####          #####       
 *       ####          ####        
 *        ####        ####         
 *         #####    ####           
 *           #########             
 *            #########            
 *             ########            
 *             #########           
 *               #########         
 *                #############    
 *                   #######       
 ********************/
{2721, 30, 1, 12, 26, 33},

/********************
 *  Character: 'R', X advance: 27
 *  X offset: 1, Y offset: 12
 *  X size: 26, Y size: 26
 *   ################           
 *     #################        
 *      ######     ######       
 *      ######      ######      
 *      ######       #####      
 *      ######       ######     
 *      ######       ######     
 *      ######       ######     
 *      ######       ######     
 *      ######       ######     
 *      ######      ######      
 *      ######      ######      
 *      ######    #######       
 *      ###############         
 *      ##############          
 *      ###### ########         
 *      ######  #######         
 *      ######   #######        
 *      ######   ########       
 *      ######    ########      
 *      ######     #######      
 *      ######      #######     
 *      ######      ########    
 *      ######       #######    
 *     ########       #######   
 *   ############     ######### 
 ********************/
{2829, 27, 1, 12, 26, 26},

/********************
 *  Character: 'S', X advance: 22
 *  X offset: 2, Y offset: 11
 *  X size: 17, Y size: 27
 *         ######    #      
 *       ##########  #      
 *      ####    ######      
 *     ####       ####      
 *     ###         ###      
 *    ####          ##      
 *    ####          ##      
 *    #####          #      
 *    ######                
 *    ########              
 *    ##########            
 *     ###########          
 *      ############        
 *       ############       
 *        ############      
 *          ##########      
 *            #########     
 *              #######     
 *    #           #####     
 *    #            ####     
 *    ##           ####     
 *    ##           ####     
 *    ###          ###      
 *    ####        ####      
 *    ######     ####       
 *    #  ###########        
 *    #    ######           
 ********************/
{2914, 22, 2, 11, 17, 27},

/********************
 *  Character: 'T', X advance: 25
 *  X offset: 1, Y offset: 12
 *  X size: 23, Y size: 26
 *   #######################  
 *   #######################  
 *   #####   ######    #####  
 *   ###     ######      ###  
 *   ##      ######       ##  
 *   #       ######        #  
 *   #       ######        #  
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
 *          ########          
 *        ############        
 ********************/
{2972, 25, 1, 12, 23, 26},

/********************
 *  Character: 'U', X advance: 28
 *  X offset: 1, Y offset: 12
 *  X size: 25, Y size: 27
 *   ############     ########   
 *     ########         ####     
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######            #      
 *      ######           #       
 *       ######          #       
 *        ######        #        
 *         ######     ###        
 *          ############         
 *            #######            
 ********************/
{3047, 28, 1, 12, 25, 27},

/********************
 *  Character: 'V', X advance: 27
 *  X offset: 0, Y offset: 12
 *  X size: 26, Y size: 26
 *  #############     ######## 
 *    ########           ####  
 *     #######            ##   
 *     #######           ##    
 *      ######           ##    
 *      #######          #     
 *       ######         ##     
 *       #######        ##     
 *        ######        #      
 *        #######      ##      
 *         ######      ##      
 *         ######     ##       
 *         #######    ##       
 *          ######    #        
 *          #######  ##        
 *           ######  ##        
 *           ######  #         
 *           #########         
 *            #######          
 *            #######          
 *             ######          
 *             #####           
 *              ####           
 *              ###            
 *              ###            
 *               ##            
 ********************/
{3132, 27, 0, 12, 26, 26},

/********************
 *  Character: 'W', X advance: 37
 *  X offset: 0, Y offset: 12
 *  X size: 36, Y size: 27
 *  ###########  ############    ####### 
 *   ########      ########        ####  
 *    ######        #######         ##   
 *    ######         ######         ##   
 *    #######        ######        ##    
 *     ######        ######        ##    
 *     ######        #######       ##    
 *      ######       #######      ##     
 *      ######       #######      ##     
 *      ######      ## ######     ##     
 *       ######     #  ######    ##      
 *       ######    ##  ######    ##      
 *       ######    ##   ######   ##      
 *        ######   #    ######  ##       
 *        ######  ##     #####  ##       
 *        ######  ##     #####  ##       
 *         ###### #      ########        
 *         ########       #######        
 *         #######        #######        
 *          ######        ######         
 *          ######         #####         
 *          #####          #####         
 *           ####          ####          
 *           ###            ###          
 *           ###            ###          
 *            ##            ##           
 *            #              #           
 ********************/
{3217, 37, 0, 12, 36, 27},

/********************
 *  Character: 'X', X advance: 27
 *  X offset: 0, Y offset: 12
 *  X size: 26, Y size: 26
 *  #############   #########  
 *   #########        #####    
 *    ########         ###     
 *     #######        ###      
 *      #######       ##       
 *      ########     ##        
 *       #######    ##         
 *        #######   ##         
 *        ######## ##          
 *         #########           
 *          #######            
 *          ########           
 *           #######           
 *            #######          
 *            #######          
 *           #########         
 *           ## #######        
 *          ##  #######        
 *         ##    #######       
 *        ##      #######      
 *        ##      #######      
 *       ##        #######     
 *      ##         ########    
 *     ###          #######    
 *    #####        #########   
 *  #########    ############# 
 ********************/
{3339, 27, 0, 12, 26, 26},

/********************
 *  Character: 'Y', X advance: 27
 *  X offset: 0, Y offset: 12
 *  X size: 26, Y size: 26
 *  #############    ######### 
 *   #########          ####   
 *     #######           ##    
 *     #######           ##    
 *      #######         ##     
 *      #######         #      
 *       #######       ##      
 *       #######      ##       
 *        #######     ##       
 *         ######    ##        
 *         #######   #         
 *          ######  ##         
 *          #########          
 *           ########          
 *           #######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *            ######           
 *           ########          
 *         ############        
 ********************/
{3424, 27, 0, 12, 26, 26},

/********************
 *  Character: 'Z', X advance: 25
 *  X offset: 0, Y offset: 12
 *  X size: 23, Y size: 26
 *    ####################   
 *    ###################    
 *    #####       #######    
 *    ###         ######     
 *   ###         #######     
 *   ##         #######      
 *   ##         ######       
 *   #         #######       
 *            #######        
 *            #######        
 *           #######         
 *          #######          
 *          #######          
 *         #######           
 *         ######            
 *        #######            
 *       #######          #  
 *       #######          #  
 *      #######          ##  
 *     #######           ##  
 *     #######          ###  
 *    #######           ##   
 *    ######          ####   
 *   #######        ######   
 *  ######################   
 *  ######################   
 ********************/
{3509, 25, 0, 12, 23, 26},

/********************
 *  Character: '[', X advance: 13
 *  X offset: 3, Y offset: 12
 *  X size: 8, Y size: 32
 *     ########     
 *     ########     
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
 *     ####         
 *     ####         
 *     ####         
 *     ########     
 *     ########     
 ********************/
{3584, 13, 3, 12, 8, 32},

/********************
 *  Character: '\', X advance: 11
 *  X offset: -1, Y offset: 12
 *  X size: 12, Y size: 27
 *  ####        
 *  ####        
 *   ###        
 *   ####       
 *   ####       
 *    ###       
 *    ###       
 *    ####      
 *     ###      
 *     ###      
 *     ####     
 *      ###     
 *      ###     
 *      ####    
 *       ###    
 *       ###    
 *       ####   
 *        ###   
 *        ###   
 *        ####  
 *         ###  
 *         ###  
 *         #### 
 *          ### 
 *          ### 
 *          ####
 *          ####
 ********************/
{3616, 11, -1, 12, 12, 27},

/********************
 *  Character: ']', X advance: 13
 *  X offset: 2, Y offset: 12
 *  X size: 8, Y size: 32
 *    ########     
 *    ########     
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
 *        ####     
 *        ####     
 *        ####     
 *        ####     
 *        ####     
 *        ####     
 *    ########     
 *    ########     
 ********************/
{3657, 13, 2, 12, 8, 32},

/********************
 *  Character: '^', X advance: 22
 *  X offset: 2, Y offset: 12
 *  X size: 16, Y size: 14
 *          ####            
 *          ####            
 *         ######           
 *         ######           
 *        #### ###          
 *        ###  ###          
 *       ####  ####         
 *       ###    ###         
 *      ####    ####        
 *      ###      ###        
 *     ####      ####       
 *     ###        ###       
 *    ####        ####      
 *    ###          ###      
 ********************/
{3689, 22, 2, 12, 16, 14},

/********************
 *  Character: '_', X advance: 19
 *  X offset: 0, Y offset: 41
 *  X size: 19, Y size: 3
 *  ###################
 *  ###################
 *  ###################
 ********************/
{3717, 19, 0, 41, 19, 3},

/********************
 *  Character: '`', X advance: 13
 *  X offset: 0, Y offset: 11
 *  X size: 9, Y size: 7
 *  ###          
 *  ####         
 *  #####        
 *   #####       
 *     ####      
 *      ####     
 *        ###    
 ********************/
{3725, 13, 0, 11, 9, 7},

/********************
 *  Character: 'a', X advance: 19
 *  X offset: 1, Y offset: 20
 *  X size: 17, Y size: 18
 *        ######        
 *      ##########      
 *     ###    #####     
 *    ####     #####    
 *    #####    #####    
 *    #####    #####    
 *     ###     #####    
 *             #####    
 *         #########    
 *       ####  #####    
 *     #####   #####    
 *    #####    #####    
 *   ######    #####    
 *   ######    #####    
 *   #######  ######    
 *   #################  
 *    #######  ######   
 *     #####    ####    
 ********************/
{3733, 19, 1, 20, 17, 18},

/********************
 *  Character: 'b', X advance: 21
 *  X offset: 1, Y offset: 12
 *  X size: 19, Y size: 26
 *   #######              
 *    ######              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####  #####       
 *     ##### ########     
 *     ######   ######    
 *     #####     ######   
 *     #####     ######   
 *     #####      ######  
 *     #####      ######  
 *     #####      ######  
 *     #####      ######  
 *     #####      ######  
 *     #####      ######  
 *     #####      ######  
 *     #####      #####   
 *     #####     ######   
 *     #####     #####    
 *     ### ##   #####     
 *     ##   ########      
 *     #     #####        
 ********************/
{3772, 21, 1, 12, 19, 26},

/********************
 *  Character: 'c', X advance: 17
 *  X offset: 1, Y offset: 20
 *  X size: 15, Y size: 18
 *         #####      
 *       #########    
 *      ####   ####   
 *     ####    ####   
 *    ####     ####   
 *    ####     ###    
 *   #####            
 *   #####            
 *   #####            
 *   #####            
 *   #####            
 *   ######           
 *   ######           
 *    ######          
 *    #######    ##   
 *     ###########    
 *      #########     
 *        ######      
 ********************/
{3834, 17, 1, 20, 15, 18},

/********************
 *  Character: 'd', X advance: 21
 *  X offset: 1, Y offset: 12
 *  X size: 19, Y size: 26
 *            ########    
 *              ######    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *        #####  #####    
 *      ######## #####    
 *     ######   ######    
 *     #####     #####    
 *    ######     #####    
 *    #####      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *    #####      #####    
 *    ######    ######    
 *     ######  ########   
 *      ######## #######  
 *        #####  ###      
 ********************/
{3868, 21, 1, 12, 19, 26},

/********************
 *  Character: 'e', X advance: 17
 *  X offset: 1, Y offset: 20
 *  X size: 15, Y size: 18
 *        #####       
 *      #########     
 *     ####   ####    
 *    ####     ###    
 *    ####     ####   
 *   #####     ####   
 *   ##############   
 *   ###############  
 *   #####            
 *   #####            
 *   #####            
 *   ######           
 *   ######           
 *    #####       #   
 *    #######    ##   
 *     ###########    
 *      #########     
 *        #####       
 ********************/
{3930, 17, 1, 20, 15, 18},

/********************
 *  Character: 'f', X advance: 15
 *  X offset: 1, Y offset: 12
 *  X size: 14, Y size: 26
 *        ######    
 *       #########  
 *      #####  #### 
 *      ####   #### 
 *     #####   #### 
 *     #####    ##  
 *     #####        
 *     #####        
 *   ##########     
 *   ##########     
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *     #####        
 *    #######       
 *   ##########     
 ********************/
{3964, 15, 1, 12, 14, 26},

/********************
 *  Character: 'g', X advance: 19
 *  X offset: 1, Y offset: 20
 *  X size: 18, Y size: 26
 *        ######        
 *      ############### 
 *    #####    ######## 
 *    ####      ####    
 *   #####      #####   
 *   #####      #####   
 *   #####      #####   
 *   #####      #####   
 *   #####      #####   
 *    ####     #####    
 *     ####    ####     
 *       #########      
 *      ##              
 *     ##               
 *    ###               
 *   #####              
 *   ###############    
 *   ################   
 *   #################  
 *    ################# 
 *      ############### 
 *   ###           #### 
 *   ###            ### 
 *   ####         ####  
 *    ###############   
 *      ##########      
 ********************/
{4010, 19, 1, 20, 18, 26},

/********************
 *  Character: 'h', X advance: 21
 *  X offset: 1, Y offset: 12
 *  X size: 19, Y size: 26
 *   #######              
 *    ######              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####   ####       
 *     #####  #######     
 *     ##### ########     
 *     #######  ######    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *    #######   #######   
 *   ######### #########  
 ********************/
{4069, 21, 1, 12, 19, 26},

/********************
 *  Character: 'i', X advance: 11
 *  X offset: 1, Y offset: 12
 *  X size: 9, Y size: 26
 *      ###     
 *    ######    
 *    ######    
 *    ######    
 *    ######    
 *      ###     
 *              
 *              
 *   #######    
 *    ######    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *    #######   
 *   #########  
 ********************/
{4131, 11, 1, 12, 9, 26},

/********************
 *  Character: 'j', X advance: 15
 *  X offset: 0, Y offset: 12
 *  X size: 12, Y size: 34
 *          ###    
 *        ######   
 *        ######   
 *        ######   
 *        ######   
 *         ####    
 *                 
 *                 
 *       #######   
 *        ######   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *         #####   
 *   ##    #####   
 *  ####   #####   
 *  ####   ####    
 *  ###   #####    
 *   #########     
 *    ######       
 ********************/
{4161, 15, 0, 12, 12, 34},

/********************
 *  Character: 'k', X advance: 21
 *  X offset: 1, Y offset: 12
 *  X size: 20, Y size: 26
 *   #######              
 *    ######              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####              
 *     #####   #########  
 *     #####     #####    
 *     #####      ##      
 *     #####     ##       
 *     #####    ##        
 *     #####   ##         
 *     #####  ###         
 *     ##### ####         
 *     ###########        
 *     ############       
 *     #####  ######      
 *     #####  ######      
 *     #####   ######     
 *     #####    ######    
 *     #####    ######    
 *     #####     ######   
 *    ######     #######  
 *   #########  ######### 
 ********************/
{4212, 21, 1, 12, 20, 26},

/********************
 *  Character: 'l', X advance: 11
 *  X offset: 1, Y offset: 12
 *  X size: 9, Y size: 26
 *   #######    
 *    ######    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *     #####    
 *    #######   
 *   #########  
 ********************/
{4277, 11, 1, 12, 9, 26},

/********************
 *  Character: 'm', X advance: 32
 *  X offset: 1, Y offset: 20
 *  X size: 30, Y size: 18
 *   #######   ####       ####       
 *    ######  #######   ########     
 *     ##### ########  #########     
 *     #######  ########   ######    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *     #####     #####      #####    
 *    #######    ######     #####    
 *   ######### #########  #########  
 ********************/
{4307, 32, 1, 20, 30, 18},

/********************
 *  Character: 'n', X advance: 21
 *  X offset: 1, Y offset: 20
 *  X size: 19, Y size: 18
 *   #######   ####       
 *    ######  #######     
 *     ##### ########     
 *     #######  ######    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *    #######   ######    
 *   ######### #########  
 ********************/
{4375, 21, 1, 20, 19, 18},

/********************
 *  Character: 'o', X advance: 19
 *  X offset: 1, Y offset: 20
 *  X size: 17, Y size: 18
 *         #####        
 *       #########      
 *      ####   #####    
 *     #####   #####    
 *    #####     #####   
 *    #####     #####   
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *   ######     ######  
 *    #####     #####   
 *    #####     #####   
 *     #####   #####    
 *     #####   #####    
 *       #########      
 *         #####        
 ********************/
{4418, 19, 1, 20, 17, 18},

/********************
 *  Character: 'p', X advance: 21
 *  X offset: 0, Y offset: 20
 *  X size: 19, Y size: 26
 *  #######  #####       
 *   ###### ########     
 *    #######  ######    
 *    ######    ######   
 *    #####      #####   
 *    #####      ######  
 *    #####      ######  
 *    #####      ######  
 *    #####      ######  
 *    #####      ######  
 *    #####      ######  
 *    #####      ######  
 *    #####      #####   
 *    #####     ######   
 *    #####     #####    
 *    ######   ######    
 *    ##### ########     
 *    #####  #####       
 *    #####              
 *    #####              
 *    #####              
 *    #####              
 *    #####              
 *    #####              
 *   #######             
 *  ##########           
 ********************/
{4457, 21, 0, 20, 19, 26},

/********************
 *  Character: 'q', X advance: 21
 *  X offset: 1, Y offset: 20
 *  X size: 19, Y size: 26
 *         #####     #    
 *       ########   ##    
 *      #####   ## ###    
 *     #####     #####    
 *    ######     #####    
 *    #####      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *   ######      #####    
 *    ######     #####    
 *    ######     #####    
 *     ######   ######    
 *      ######## #####    
 *        #####  #####    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *               #####    
 *              #######   
 *            ##########  
 ********************/
{4519, 21, 1, 20, 19, 26},

/********************
 *  Character: 'r', X advance: 16
 *  X offset: 1, Y offset: 20
 *  X size: 15, Y size: 18
 *   #######   ####  
 *    ###### ####### 
 *     ############# 
 *     ######  ##### 
 *     #####    ###  
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *     #####         
 *    #######        
 *   ##########      
 ********************/
{4581, 16, 1, 20, 15, 18},

/********************
 *  Character: 's', X advance: 15
 *  X offset: 0, Y offset: 20
 *  X size: 12, Y size: 18
 *     #####  #    
 *    #########    
 *   ####   ###    
 *  ####     ##    
 *  ####     ##    
 *  #####     #    
 *  #######        
 *  #########      
 *   #########     
 *    #########    
 *       #######   
 *         #####   
 *  #       ####   
 *  ##       ###   
 *  ###      ###   
 *  ####    ###    
 *  ##########     
 *  #   #####      
 ********************/
{4615, 15, 0, 20, 12, 18},

/********************
 *  Character: 't', X advance: 13
 *  X offset: 1, Y offset: 14
 *  X size: 12, Y size: 24
 *         #      
 *        ##      
 *       ###      
 *      ####      
 *     #####      
 *    ######      
 *   ##########   
 *   ##########   
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####      
 *     #####   ## 
 *     #####   #  
 *     ########   
 *      #######   
 *       ####     
 ********************/
{4642, 13, 1, 14, 12, 24},

/********************
 *  Character: 'u', X advance: 21
 *  X offset: 1, Y offset: 20
 *  X size: 19, Y size: 18
 *   #######   #######    
 *    ######     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     #####     #####    
 *     ######   #######   
 *      ################  
 *      #######  ####     
 *        ####   #        
 ********************/
{4678, 21, 1, 20, 19, 18},

/********************
 *  Character: 'v', X advance: 18
 *  X offset: 0, Y offset: 20
 *  X size: 18, Y size: 18
 *  ##########  ######
 *   #######      ### 
 *    ######      ##  
 *    ######      ##  
 *     ######     #   
 *     ######    ##   
 *      #####    #    
 *      ######   #    
 *       #####  ##    
 *       ###### #     
 *        #######     
 *        ######      
 *        ######      
 *         #####      
 *         ####       
 *          ###       
 *          ##        
 *          ##        
 ********************/
{4721, 18, 0, 20, 18, 18},

/********************
 *  Character: 'w', X advance: 27
 *  X offset: 0, Y offset: 20
 *  X size: 26, Y size: 18
 *  #########  ######### ##### 
 *   #######    ######     ##  
 *    #####     ######     ##  
 *    ######     #####     #   
 *     #####     #####    ##   
 *     #####     ######   #    
 *      #####   #######   #    
 *      #####   # #####  ##    
 *      ###### ##  ####  #     
 *       ##### ##  #######     
 *       ##### #   ######      
 *        ######    #####      
 *        #####     #####      
 *        #####     ####       
 *         ###       ###       
 *         ###       ###       
 *          ##       ##        
 *          #        ##        
 ********************/
{4762, 27, 0, 20, 26, 18},

/********************
 *  Character: 'x', X advance: 19
 *  X offset: 0, Y offset: 20
 *  X size: 18, Y size: 18
 *  #########  ######  
 *   ######      ###   
 *    ######     ##    
 *    ######    ##     
 *     ######  ##      
 *      ###### #       
 *      ########       
 *       ######        
 *       #######       
 *        ######       
 *        #######      
 *       ########      
 *       #  ######     
 *      ##   ######    
 *     ##    ######    
 *    ##      ######   
 *   ###      #######  
 *  ######  ########## 
 ********************/
{4821, 19, 0, 20, 18, 18},

/********************
 *  Character: 'y', X advance: 18
 *  X offset: 0, Y offset: 20
 *  X size: 17, Y size: 26
 *  #########  ###### 
 *   ######      ###  
 *   ######      ##   
 *    #####      ##   
 *    ######     ##   
 *     #####     #    
 *     #####    ##    
 *     ######   #     
 *      #####   #     
 *      ###### ##     
 *      ###### #      
 *       ##### #      
 *       #######      
 *        #####       
 *        #####       
 *        #####       
 *         ###        
 *         ###        
 *          #         
 *         ##         
 *         ##         
 *   ###   #          
 *  ####  ##          
 *  ####  #           
 *  #######           
 *   ####             
 ********************/
{4862, 18, 0, 20, 17, 26},

/********************
 *  Character: 'z', X advance: 17
 *  X offset: 0, Y offset: 20
 *  X size: 16, Y size: 18
 *   ##############  
 *   ##############  
 *   ###     ######  
 *   ##     ######   
 *   #      ######   
 *         ######    
 *        ######     
 *        ######     
 *       ######      
 *       ######      
 *      ######       
 *     ######        
 *     ######     #  
 *    ######      #  
 *    ######     ##  
 *   ######    ####  
 *  ###############  
 *  ###############  
 ********************/
{4918, 17, 0, 20, 16, 18},

/********************
 *  Character: '{', X advance: 15
 *  X offset: 0, Y offset: 11
 *  X size: 12, Y size: 34
 *          ####   
 *       #####     
 *       ####      
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
 *     ####        
 *    ###          
 *   ####          
 *     ####        
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
 *       ####      
 *       #####     
 *         #####   
 ********************/
{4954, 15, 0, 11, 12, 34},

/********************
 *  Character: '|', X advance: 8
 *  X offset: 3, Y offset: 12
 *  X size: 3, Y size: 27
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 *     ###     
 ********************/
{5005, 8, 3, 12, 3, 27},

/********************
 *  Character: '}', X advance: 15
 *  X offset: 2, Y offset: 11
 *  X size: 12, Y size: 34
 *    ####           
 *      #####        
 *       ####        
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
 *        ####       
 *         ####      
 *           ####    
 *           ###     
 *         ####      
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
 *        ####       
 *       ####        
 *      #####        
 *    #####          
 ********************/
{5016, 15, 2, 11, 12, 34},

/********************
 *  Character: '~', X advance: 20
 *  X offset: 1, Y offset: 26
 *  X size: 18, Y size: 5
 *      #####            
 *    ##########    ##   
 *   #################   
 *    ##    #########    
 *             #####     
 ********************/
{5067, 20, 1, 26, 18, 5},

};

const monoGFX_font_t monoGFX_FreeSerifBold_18pt = {bitmapBuffer, 5079, glyphs, 20};
