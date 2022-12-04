#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[2314] =
{
    0x00,0xff,0xff,0xff,0xff,0x6f,0x66,0x06,0xf0,0xff,0x00,0xcf,0x3f,0xff,0xfc,0xf3,
    0x86,0x19,0x06,0x70,0x0c,0x9c,0x03,0xe7,0xf8,0xff,0xfe,0xbf,0xff,0x8f,0x73,0xe0,
    0x1c,0x18,0x07,0xc6,0xf0,0xff,0xfd,0x7f,0xff,0x1f,0xe3,0xc0,0x18,0x38,0x06,0xce,
    0x01,0x40,0x00,0xfc,0xc0,0xff,0xf0,0x7f,0x5e,0xbe,0x13,0xef,0xc4,0x7b,0x01,0x7c,
    0x00,0xff,0x00,0xff,0x00,0x7f,0x40,0xfe,0x13,0xff,0xc4,0x7f,0xf9,0xfe,0x1f,0xff,
    0x03,0x3f,0x00,0x01,0x40,0x00,0x3c,0x60,0xe0,0x07,0x06,0xfe,0x30,0x70,0x0e,0x03,
    0xc3,0x18,0x70,0x8e,0x01,0xfe,0x0c,0xe0,0xe7,0x00,0x3c,0x06,0x00,0x30,0x3e,0x00,
    0xf3,0x07,0x98,0xff,0x80,0x39,0x0e,0x8c,0xc1,0xc0,0x38,0x0e,0x86,0xff,0x60,0xf0,
    0x07,0x03,0x1e,0x00,0xe0,0x01,0xf8,0x03,0xfc,0x07,0x3c,0x07,0x3c,0x07,0x3c,0x07,
    0xf8,0x03,0xf0,0x01,0xf8,0x00,0xfc,0x71,0x9e,0x73,0x8f,0x3f,0x0f,0x3f,0x0f,0x1e,
    0x1f,0x3f,0xfe,0x7f,0xfc,0x7b,0xf0,0xf1,0xff,0xff,0x66,0x00,0x30,0x1c,0x87,0xe3,
    0x70,0x38,0x0e,0x87,0xc3,0xe1,0x70,0x38,0x1c,0x0e,0x0e,0x87,0x83,0xc3,0xc1,0xc1,
    0x00,0x06,0x07,0x87,0x83,0xc1,0xe1,0xe0,0x70,0x38,0x1c,0x0e,0x87,0xc3,0xe1,0x38,
    0x1c,0x8e,0xc3,0x71,0x18,0x00,0x18,0x18,0xdb,0xff,0x3c,0x3c,0x66,0x24,0x70,0x80,
    0x03,0x1c,0xe0,0xf0,0xff,0xff,0xff,0x1f,0x0e,0x70,0x80,0x03,0x1c,0x00,0xff,0xcf,
    0x6c,0x07,0xff,0xff,0x1f,0xff,0x0f,0x60,0x30,0x08,0x06,0x83,0x60,0x30,0x08,0x04,
    0x83,0x41,0x30,0x18,0x04,0x83,0x01,0xf8,0xc1,0x3f,0xfe,0xe7,0x79,0x0f,0xff,0xf0,
    0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xef,0x70,0x9e,0xe7,0x7f,0xfc,
    0x03,0x0f,0x00,0x60,0x38,0x1c,0xff,0xff,0xe3,0xf1,0x78,0x3c,0x1e,0x8f,0xc7,0xe3,
    0xf1,0x78,0x3c,0xf8,0xc1,0x3f,0xfe,0xf7,0xf9,0x0f,0xff,0xf0,0x00,0x0f,0xf0,0x80,
    0x07,0x7c,0xe0,0x03,0x0f,0x78,0xc0,0x03,0x1e,0xf0,0xff,0xff,0xff,0xff,0x00,0xf8,
    0xc1,0xff,0xf8,0x9f,0xc7,0xf7,0xf0,0x00,0x1e,0xc0,0x03,0x3c,0xc0,0x03,0xf8,0x00,
    0x3c,0x00,0x0f,0xe0,0x1f,0xfc,0xc7,0xf7,0x7f,0xfc,0x07,0x3f,0x00,0xc0,0x03,0x1f,
    0xf8,0xe0,0x07,0x3d,0xec,0x31,0x8f,0x79,0xc6,0x13,0xde,0xf0,0xfe,0xff,0xff,0xff,
    0x03,0x0f,0x78,0xc0,0x03,0x1e,0xf8,0x8f,0xff,0xf1,0x3f,0x0e,0xc0,0x01,0x98,0x07,
    0xfb,0xf1,0x7f,0x1e,0x0f,0xc0,0x03,0x78,0x00,0x0f,0xe0,0x1f,0xfc,0xc3,0xf3,0x7f,
    0xfc,0x07,0x3f,0x00,0xf0,0x83,0xff,0xf0,0x3f,0x8f,0xef,0x01,0x1e,0xc0,0xfb,0xf8,
    0x3f,0xff,0xef,0xe3,0x3f,0xf8,0x07,0xff,0xe0,0x1f,0xbc,0xc7,0xf3,0x7f,0xfc,0x07,
    0x3e,0x00,0xff,0xff,0xff,0xff,0x0f,0x70,0x00,0x07,0x38,0xc0,0x03,0x1c,0xe0,0x01,
    0x1e,0xe0,0x00,0x0f,0xf0,0x00,0x0f,0x70,0x80,0x07,0x78,0x80,0x07,0x00,0xf0,0x81,
    0xff,0xf0,0x1f,0x8f,0xe7,0xe0,0x1c,0x1c,0xc7,0xc1,0x1f,0xfc,0xc7,0xe3,0x3d,0xf8,
    0x07,0xff,0xe0,0x1f,0xfc,0xc7,0xf7,0x7f,0xfc,0x07,0x3f,0x00,0xf8,0xc0,0x3f,0xfe,
    0xf7,0x79,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x9f,0xef,0xff,0xfc,0x8f,0xf7,0x00,0x0f,
    0x70,0x8f,0xe7,0x3f,0xfe,0x83,0x0f,0x00,0xff,0x0f,0x00,0x00,0xf0,0xff,0x00,0xff,
    0x0f,0x00,0x00,0xf0,0xff,0x88,0x74,0x00,0x00,0x08,0xf0,0xe0,0xcf,0x3f,0x7f,0xf0,
    0x00,0x0f,0xf0,0x07,0xf8,0x03,0xfc,0x00,0x0f,0x80,0x00,0xff,0xff,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x0f,0x03,0xf0,0x00,0x7f,0xc0,0x3f,0xe0,
    0x0f,0xf0,0x00,0x0f,0xfe,0xfc,0xf1,0x07,0x0f,0x10,0x00,0x00,0xf8,0xe0,0x3f,0xfe,
    0xf7,0xf9,0x0f,0xff,0xf0,0x00,0x0f,0xf0,0x80,0x07,0x3c,0xe0,0x01,0x0f,0x70,0x00,
    0x07,0x00,0x00,0x0f,0xf0,0x00,0x0f,0x00,0x00,0x7f,0x00,0xf0,0xff,0x00,0x1f,0x78,
    0xe0,0x01,0x38,0x1c,0x00,0x1c,0x83,0x67,0x66,0xf0,0x9b,0x1b,0x8e,0xc3,0xc3,0xc0,
    0xf0,0x30,0x30,0x3c,0x06,0x0c,0x8f,0x81,0xe1,0x63,0x60,0xd8,0x38,0x1e,0x67,0xfc,
    0xff,0x18,0x1e,0x0f,0x0c,0x00,0x00,0x0f,0x00,0x80,0x0f,0x08,0x80,0xff,0x07,0x80,
    0x7f,0x00,0x80,0x07,0x80,0x0f,0x00,0x3f,0x00,0x7f,0x00,0xfe,0x00,0xdc,0x03,0x3c,
    0x07,0x78,0x0e,0x70,0x3c,0xf0,0x70,0xe0,0xe1,0xc1,0xff,0xc3,0xff,0x87,0xff,0x1f,
    0x07,0x3c,0x0f,0x70,0x1e,0xe0,0x1f,0xc0,0x03,0xff,0x87,0xff,0xcf,0xff,0xe7,0xc1,
    0xf7,0xc0,0x7b,0xe0,0x3d,0xf8,0xfe,0x3f,0xff,0x8f,0xff,0xcf,0x03,0xef,0x01,0xff,
    0x80,0x7f,0xc0,0x3f,0xf0,0xff,0x7f,0xff,0x9f,0xff,0x07,0xe0,0x0f,0xf8,0x1f,0xfc,
    0x7f,0x3e,0x7c,0x1e,0xf8,0x1f,0xf0,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,
    0x00,0x0f,0x00,0x1f,0xf0,0x1e,0xf8,0x3e,0x7c,0xfc,0x7f,0xf8,0x3f,0xe0,0x0f,0xff,
    0x87,0xff,0xc7,0xff,0xe7,0xc1,0xf7,0xc0,0x7b,0xe0,0x3f,0xe0,0x1f,0xf0,0x0f,0xf8,
    0x07,0xfc,0x03,0xfe,0x01,0xff,0xc0,0x7f,0xe0,0x3d,0xf8,0xfe,0x3f,0xff,0x8f,0xff,
    0x01,0xff,0xff,0xff,0xff,0xff,0x07,0xf0,0x00,0x1e,0xc0,0x03,0xf8,0x7f,0xff,0xef,
    0xff,0x3d,0x80,0x07,0xf0,0x00,0x1e,0xc0,0x03,0xf8,0xff,0xff,0xff,0xff,0x03,0xff,
    0xff,0xff,0xff,0xff,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x7f,0xff,0xf7,0x7f,0x0f,0xf0,
    0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x00,0xc0,0x0f,0xf0,0x3f,0xfc,
    0x7f,0x7c,0x78,0x1e,0xf0,0x1f,0xe0,0x0f,0x00,0x0f,0x00,0x0f,0xfe,0x0f,0xfe,0x0f,
    0xfe,0x0f,0xe0,0x1e,0xe0,0x3e,0xf0,0x7c,0xf8,0xfc,0xdf,0xf0,0xdf,0xc0,0xc7,0x0f,
    0xf8,0x07,0xfc,0x03,0xfe,0x01,0xff,0x80,0x7f,0xc0,0x3f,0xe0,0xff,0xff,0xff,0xff,
    0xff,0xff,0x03,0xfe,0x01,0xff,0x80,0x7f,0xc0,0x3f,0xe0,0x1f,0xf0,0x0f,0xf8,0x07,
    0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x0f,0xf0,0x00,0x0f,
    0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0xff,0xf0,0x0f,0xff,0xf0,
    0x9f,0xef,0x7f,0xfe,0x87,0x1f,0x00,0x0f,0x78,0x0f,0x3c,0x0f,0x1e,0x0f,0x0f,0x8f,
    0x07,0xcf,0x03,0xef,0x01,0xff,0x01,0xff,0x01,0xff,0x03,0xdf,0x03,0x8f,0x07,0x0f,
    0x0f,0x0f,0x1f,0x0f,0x3e,0x0f,0x3c,0x0f,0x78,0x0f,0xf8,0x0f,0xf0,0x00,0x0f,0xf0,
    0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,0x0f,0xf0,0x00,
    0x0f,0xf0,0xff,0xff,0xff,0xff,0x00,0x3f,0xf0,0xff,0xe0,0xff,0x83,0xff,0x0f,0xfe,
    0x7f,0xf8,0xff,0xe1,0xff,0xc7,0xfd,0x1b,0xf7,0xef,0xdc,0xbf,0x73,0xff,0xee,0xfc,
    0xb3,0xf3,0xcf,0xcf,0x3f,0x3f,0xff,0xfc,0xfc,0xf3,0xf1,0x8f,0xc7,0x3f,0x1e,0x0f,
    0x0f,0xf8,0x0f,0xfc,0x0f,0xfe,0x07,0xff,0x87,0xff,0xc3,0xbf,0xe3,0xdf,0xf1,0xcf,
    0xf9,0xe7,0xfc,0xe3,0xfe,0xf1,0xff,0xf0,0x7f,0xf8,0x3f,0xf8,0x1f,0xf8,0x0f,0xfc,
    0x07,0x3c,0xc0,0x0f,0xc0,0xff,0xc0,0xff,0x07,0x1f,0x3e,0x1e,0xf0,0x79,0x80,0xf7,
    0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x3f,0x00,0xff,0x00,0xfc,0x03,0xf0,0x1e,0xe0,0x79,
    0xc0,0xc7,0x87,0x0f,0xff,0x3f,0xf0,0x3f,0x00,0x3f,0x00,0xff,0xc7,0xff,0xf7,0xff,
    0x3d,0xf8,0x0f,0xfc,0x03,0xff,0xc0,0x3f,0xf8,0xff,0xdf,0xff,0xf3,0x7f,0x3c,0x00,
    0x0f,0xc0,0x03,0xf0,0x00,0x3c,0x00,0x0f,0xc0,0x03,0x00,0xc0,0x0f,0xc0,0xff,0xc0,
    0xff,0x07,0x1f,0x3e,0x1e,0xf0,0x79,0x80,0xf7,0x00,0xfc,0x03,0xf0,0x0f,0xc0,0x3f,
    0x00,0xff,0x00,0xfc,0x03,0xf2,0x1e,0xfc,0x79,0xf0,0xc7,0x87,0x0f,0xff,0x3f,0xf0,
    0xff,0x03,0x3f,0x07,0x00,0x00,0xff,0x1f,0xff,0x3f,0xff,0x3f,0x0f,0x7c,0x0f,0x78,
    0x0f,0x78,0x0f,0x78,0x0f,0x3c,0xff,0x1f,0xff,0x0f,0xff,0x1f,0x0f,0x3c,0x0f,0x3c,
    0x0f,0x3c,0x0f,0x3c,0x0f,0x3c,0x0f,0x3c,0x0f,0xf8,0xf0,0x03,0xfe,0x87,0xff,0xe7,
    0xc3,0xf7,0xc0,0x7b,0x00,0x7c,0x00,0xfe,0x07,0xfe,0x1f,0xfc,0x1f,0xc0,0x1f,0x00,
    0xff,0x80,0x7f,0xc0,0x7b,0xf0,0xfd,0x7f,0xfc,0x1f,0xf8,0x03,0xff,0xff,0xff,0xff,
    0xff,0x83,0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,
    0x07,0xe0,0x01,0x78,0x00,0x1e,0x80,0x07,0xe0,0x01,0x78,0x00,0x0f,0xf8,0x07,0xfc,
    0x03,0xfe,0x01,0xff,0x80,0x7f,0xc0,0x3f,0xe0,0x1f,0xf0,0x0f,0xf8,0x07,0xfc,0x03,
    0xfe,0x01,0xff,0x80,0x7f,0xc0,0x7b,0xf0,0xfc,0x7f,0xfc,0x1f,0xf8,0x03,0x0e,0xf0,
    0x1e,0xf0,0x1e,0x70,0x1c,0x78,0x3c,0x78,0x3c,0x38,0x38,0x3c,0x78,0x1c,0x78,0x1c,
    0x70,0x1e,0x70,0x0e,0xf0,0x0e,0xe0,0x0e,0xe0,0x07,0xe0,0x07,0xc0,0x07,0xc0,0x03,
    0xc0,0x03,0x0f,0x1e,0xfc,0x83,0x07,0xff,0xe0,0xc1,0x3b,0xfc,0x70,0x0e,0x3f,0x9c,
    0xc7,0x8f,0xe7,0x71,0xe3,0x71,0xdc,0x38,0x9c,0x73,0x0e,0xef,0x9c,0x83,0x3b,0x77,
    0xe0,0x8e,0x1d,0xb8,0xe3,0x07,0x7e,0xf8,0x01,0x1f,0x3e,0xc0,0x07,0x0f,0xf0,0xc1,
    0x03,0x78,0xf0,0x00,0x0f,0x7c,0x0f,0x9e,0x8f,0x8f,0xc7,0x83,0xf7,0xc0,0x7b,0xc0,
    0x1f,0xe0,0x07,0xe0,0x03,0xf0,0x01,0xfc,0x01,0xfe,0x80,0xf7,0xe0,0x79,0xf0,0x78,
    0x3c,0x7c,0x1f,0xbc,0x07,0x3c,0x0f,0xf8,0x1e,0x78,0x1e,0x7c,0x3c,0x3c,0x3c,0x3c,
    0x78,0x1e,0x78,0x0e,0xf0,0x0f,0xf0,0x07,0xe0,0x07,0xc0,0x03,0xc0,0x03,0xc0,0x03,
    0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xc0,0x03,0xff,0xff,0xff,0xff,0x7f,0x00,
    0x0f,0xf0,0x00,0x1f,0xf0,0x01,0x1e,0xe0,0x01,0x1e,0xe0,0x03,0x3e,0xc0,0x03,0x3c,
    0xc0,0x07,0xf8,0xff,0xff,0xff,0xff,0x03,0xff,0xff,0x3f,0xcf,0xf3,0x3c,0xcf,0xf3,
    0x3c,0xcf,0xf3,0x3c,0xcf,0xf3,0x3c,0xff,0xff,0x03,0x83,0x81,0xc0,0x60,0x20,0x30,
    0x18,0x08,0x04,0x06,0x03,0x81,0xc1,0x40,0x60,0x30,0xff,0xff,0xf3,0x3c,0xcf,0xf3,
    0x3c,0xcf,0xf3,0x3c,0xcf,0xf3,0x3c,0xcf,0xf3,0xff,0xff,0x03,0x78,0xc0,0x07,0x3e,
    0xf8,0xc1,0x1d,0xe7,0x38,0xce,0x70,0x07,0x3b,0x38,0xff,0xff,0xff,0x3f,0x8e,0x61,
    0xf8,0xc1,0xff,0xf8,0xbf,0x87,0x07,0xf0,0x00,0x1f,0xff,0xf3,0x7b,0x0f,0xef,0xe1,
    0x3d,0xbe,0xff,0xe7,0xff,0x78,0x3e,0x0f,0xe0,0x01,0x3c,0x80,0x07,0xf0,0x1e,0xfe,
    0xcf,0xff,0xfb,0x78,0x0f,0xff,0xc1,0x3f,0xf8,0x07,0xff,0xe0,0x1f,0xfe,0xc7,0xfb,
    0x7f,0xff,0xe7,0x3d,0x00,0xf0,0x83,0xff,0xf8,0x3f,0x8f,0xf7,0xe0,0x1f,0xc0,0x03,
    0x78,0x00,0x0f,0xe0,0xc1,0x7b,0x3c,0xff,0xc7,0x7f,0xe0,0x07,0x00,0x1e,0xc0,0x03,
    0x78,0x00,0x0f,0xef,0xf9,0xbf,0xff,0xf7,0xf8,0x1f,0xff,0xc1,0x3f,0xf8,0x07,0xff,
    0xe0,0x1f,0xbc,0xc7,0xf7,0xff,0xfc,0x1f,0xdf,0x03,0xf8,0x80,0x7f,0xf8,0x1f,0x8f,
    0xf3,0xe0,0x1e,0xdc,0xff,0xfb,0x7f,0x0f,0xe0,0x01,0x78,0x78,0xff,0xc7,0x7f,0xe0,
    0x03,0x7c,0xbf,0xdf,0xe3,0xf9,0xfd,0x3c,0x1e,0x8f,0xc7,0xe3,0xf1,0x78,0x3c,0x1e,
    0x0f,0x70,0x9e,0xdf,0xfb,0x7f,0x8f,0xff,0xf1,0x1f,0xfc,0x83,0x7f,0xf0,0x0f,0xfe,
    0xc1,0x7b,0x7c,0xff,0xcf,0xff,0xf1,0x3d,0x80,0x07,0xf0,0x1f,0xcf,0xff,0xe0,0x0f,
    0x0f,0xf0,0x00,0x0f,0xf0,0x00,0xef,0xf3,0x7f,0xff,0xff,0xf9,0x0f,0xff,0xf0,0x0f,
    0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x00,0xff,0x0f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x00,0x3c,0xcf,0x03,0x3c,0xcf,0xf3,0x3c,0xcf,0xf3,0x3c,
    0xcf,0xf3,0x3c,0xcf,0xf3,0xff,0xff,0x01,0x0f,0xe0,0x01,0x3c,0x80,0x07,0xf0,0xf0,
    0x1e,0xcf,0xf3,0x78,0x0e,0xef,0xe0,0x1f,0xfc,0x83,0xff,0xf0,0x3d,0x9e,0xc7,0xe3,
    0x79,0x3c,0x0f,0xef,0xe1,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
    0xef,0xf1,0xf9,0xdf,0xdf,0xff,0xff,0x3f,0x1f,0xff,0x78,0xf8,0xc7,0xc3,0x3f,0x1e,
    0xfe,0xf1,0xf0,0x8f,0x87,0x7f,0x3c,0xfc,0xe3,0xe1,0x1f,0x0f,0xff,0x78,0xf8,0xc7,
    0xc3,0x03,0xef,0xf3,0x7f,0xff,0xff,0xf9,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,
    0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x00,0xf0,0x03,0xff,0xe3,0xff,0x79,0x78,0x1f,
    0xfe,0x03,0xff,0xc0,0x3f,0xf0,0x0f,0xfc,0x87,0xef,0xe1,0xf9,0x7f,0xfc,0x0f,0xfc,
    0x00,0xef,0xe3,0xff,0xfc,0xbf,0x8f,0xf7,0xf0,0x1f,0xfc,0x83,0x7f,0xf0,0x0f,0xfe,
    0xe1,0x7f,0xbc,0xff,0xf7,0x7f,0xde,0xc3,0x03,0x78,0x00,0x0f,0xe0,0x01,0x3c,0x00,
    0xf0,0x9e,0xff,0xfb,0x7f,0x8f,0xff,0xe0,0x1f,0xfc,0x83,0x7f,0xf0,0x0f,0xfe,0xc1,
    0x7b,0x7c,0xff,0xcf,0xff,0xf1,0x3d,0x80,0x07,0xf0,0x00,0x1e,0xc0,0x03,0x78,0xcf,
    0xef,0xff,0x1f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0xf8,0xc3,0xff,
    0xf8,0xbf,0x87,0xff,0x00,0x7e,0x80,0x7f,0xe0,0x7f,0xf0,0x1f,0xe0,0x3f,0xf8,0xff,
    0xe7,0xff,0xf0,0x07,0x9e,0xe7,0xfd,0xbf,0xe7,0x79,0x9e,0xe7,0x79,0x9e,0xef,0xf3,
    0x00,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,0x0f,0xff,0xf0,
    0x9f,0xff,0xff,0xfe,0xcf,0xf7,0x00,0x0f,0xde,0xc1,0x7b,0x38,0x0f,0xc7,0xf1,0x78,
    0x0e,0xcf,0xc1,0x39,0xb8,0x03,0x7f,0xc0,0x0f,0xf8,0x00,0x1f,0xc0,0x03,0x0f,0x0f,
    0x77,0x78,0xbc,0xc3,0xe3,0x3d,0x1f,0xe7,0xf9,0x38,0xce,0xee,0x71,0x76,0x87,0xbb,
    0x3b,0xfc,0xd9,0xc1,0xcf,0x0e,0x3e,0x3e,0xf0,0xf1,0x01,0x0f,0x0f,0x78,0x78,0x00,
    0x1e,0xde,0xe3,0xf1,0x3c,0xfc,0x83,0x3f,0xe0,0x07,0x78,0x00,0x0f,0xf0,0x03,0x7f,
    0xe0,0x1e,0x9e,0xe7,0xf1,0x3c,0x3c,0x0f,0xdc,0xc3,0x7b,0x78,0x0e,0xc7,0xe3,0x78,
    0x1e,0xce,0xc1,0x39,0xf8,0x03,0x7e,0xc0,0x0f,0xf8,0x00,0x1e,0xc0,0x03,0x38,0x80,
    0x07,0xfc,0x80,0x0f,0xf0,0x00,0xff,0xff,0xff,0xff,0x81,0x07,0x1e,0xf8,0xe0,0x03,
    0x0f,0x3c,0xf0,0xc0,0x03,0xfe,0xff,0xff,0xff,0x03,0x38,0xcf,0x73,0x1c,0xc7,0x71,
    0x1c,0xf7,0x3c,0x1c,0xc7,0x71,0x1c,0xc7,0x71,0x3c,0x8f,0x03,0xff,0xff,0xff,0xff,
    0xff,0x3f,0xc7,0xf1,0x38,0x8e,0xe3,0x38,0x8e,0xe3,0xf0,0xbc,0xe3,0x38,0x8e,0xe3,
    0x38,0xcf,0x73,0x00,0x1e,0xf8,0xf1,0xf8,0x81,0x07,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 7, 0, 25, 1, 1},
/* ! */ {1, 8, 3, 7, 4, 18},
/* " */ {11, 12, 1, 7, 10, 6},
/* # */ {19, 14, -1, 8, 14, 17},
/* $ */ {49, 14, 0, 6, 14, 21},
/* % */ {86, 22, 1, 7, 20, 18},
/* & */ {132, 18, 1, 7, 16, 18},
/* ' */ {168, 6, 1, 7, 4, 6},
/* ( */ {172, 8, 1, 7, 7, 23},
/* ) */ {193, 8, 0, 7, 7, 23},
/* * */ {214, 10, 0, 7, 8, 8},
/* + */ {222, 15, 2, 14, 11, 11},
/* , */ {238, 6, 1, 22, 4, 7},
/* - */ {242, 8, 1, 17, 7, 3},
/* . */ {245, 6, 1, 22, 4, 3},
/* / */ {247, 7, 0, 7, 7, 18},
/* 0 */ {263, 14, 1, 7, 12, 18},
/* 1 */ {291, 14, 3, 7, 7, 18},
/* 2 */ {307, 14, 1, 7, 12, 18},
/* 3 */ {335, 14, 1, 7, 13, 18},
/* 4 */ {365, 14, 2, 7, 11, 18},
/* 5 */ {390, 14, 0, 7, 13, 18},
/* 6 */ {420, 14, 1, 7, 13, 18},
/* 7 */ {450, 14, 0, 7, 12, 18},
/* 8 */ {478, 14, 1, 7, 13, 18},
/* 9 */ {508, 14, 1, 7, 12, 18},
/* : */ {536, 6, 1, 13, 4, 12},
/* ; */ {543, 6, 1, 13, 4, 16},
/* < */ {552, 15, 1, 12, 12, 12},
/* = */ {571, 15, 1, 15, 12, 9},
/* > */ {585, 15, 1, 12, 12, 12},
/* ? */ {604, 15, 2, 7, 12, 18},
/* @ */ {632, 24, 1, 7, 22, 21},
/* A */ {690, 17, 0, 7, 17, 18},
/* B */ {729, 18, 2, 7, 15, 18},
/* C */ {763, 18, 1, 7, 16, 18},
/* D */ {799, 18, 2, 7, 15, 18},
/* E */ {833, 17, 2, 7, 13, 18},
/* F */ {863, 16, 2, 7, 12, 18},
/* G */ {891, 19, 1, 7, 16, 18},
/* H */ {927, 19, 2, 7, 15, 18},
/* I */ {961, 8, 2, 7, 4, 18},
/* J */ {971, 14, 1, 7, 12, 18},
/* K */ {999, 18, 2, 7, 16, 18},
/* L */ {1035, 15, 2, 7, 12, 18},
/* M */ {1063, 22, 2, 7, 18, 18},
/* N */ {1104, 19, 2, 7, 15, 18},
/* O */ {1138, 20, 1, 7, 18, 18},
/* P */ {1179, 17, 2, 7, 14, 18},
/* Q */ {1211, 20, 1, 7, 18, 19},
/* R */ {1254, 18, 2, 7, 16, 18},
/* S */ {1290, 17, 1, 7, 15, 18},
/* T */ {1324, 16, 1, 7, 14, 18},
/* U */ {1356, 18, 2, 7, 15, 18},
/* V */ {1390, 17, 0, 7, 16, 18},
/* W */ {1426, 24, 0, 7, 22, 18},
/* X */ {1476, 17, 0, 7, 15, 18},
/* Y */ {1510, 16, -1, 7, 16, 18},
/* Z */ {1546, 15, 0, 7, 13, 18},
/* [ */ {1576, 8, 2, 7, 6, 23},
/* \ */ {1594, 7, 0, 7, 7, 18},
/* ] */ {1610, 8, 0, 7, 6, 23},
/* ^ */ {1628, 15, 1, 7, 11, 10},
/* _ */ {1642, 14, -1, 28, 15, 2},
/* ` */ {1646, 6, 0, 7, 5, 3},
/* a */ {1648, 14, 1, 11, 13, 14},
/* b */ {1671, 16, 2, 7, 13, 18},
/* c */ {1701, 14, 1, 11, 13, 14},
/* d */ {1724, 16, 1, 7, 13, 18},
/* e */ {1754, 15, 1, 11, 13, 14},
/* f */ {1777, 9, 1, 7, 7, 18},
/* g */ {1793, 15, 1, 11, 13, 19},
/* h */ {1824, 15, 2, 7, 12, 18},
/* i */ {1852, 7, 2, 7, 4, 18},
/* j */ {1862, 7, 0, 7, 6, 23},
/* k */ {1880, 14, 2, 7, 13, 18},
/* l */ {1910, 7, 2, 7, 4, 18},
/* m */ {1920, 22, 2, 11, 19, 14},
/* n */ {1954, 15, 2, 11, 12, 14},
/* o */ {1976, 15, 1, 11, 14, 14},
/* p */ {2001, 16, 2, 11, 13, 19},
/* q */ {2032, 16, 1, 11, 13, 19},
/* r */ {2063, 10, 2, 11, 8, 14},
/* s */ {2077, 14, 0, 11, 13, 14},
/* t */ {2100, 8, 1, 9, 6, 16},
/* u */ {2113, 15, 2, 11, 12, 14},
/* v */ {2135, 14, 0, 11, 13, 14},
/* w */ {2158, 20, 0, 11, 19, 14},
/* x */ {2192, 14, 0, 11, 13, 14},
/* y */ {2215, 14, 0, 11, 13, 19},
/* z */ {2246, 13, 0, 11, 11, 14},
/* { */ {2266, 10, 0, 7, 6, 23},
/* | */ {2284, 7, 3, 7, 2, 23},
/* } */ {2290, 10, 3, 7, 6, 23},
/* ~ */ {2308, 13, 1, 17, 11, 4},
};

const monoGFX_font_t monoGFX_FreeSansBold_12pt = {bitmapBuffer, 2314, glyphs, 20};
