#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1610] =
{
    0x00,0x20,0x8e,0x73,0x1c,0xc7,0x30,0x0c,0x01,0x00,0xc0,0x71,0x00,0xe7,0xf3,0x7d,
    0x14,0x02,0x60,0x06,0x66,0x30,0xc3,0x7f,0xfe,0x87,0x19,0x98,0xc1,0x0c,0xff,0xf3,
    0x3f,0x66,0x30,0x03,0x33,0x00,0x80,0x00,0x06,0xfc,0xf0,0xcf,0x75,0xae,0xf3,0x81,
    0x0f,0xf8,0x01,0x1f,0xe8,0x6e,0x77,0xb9,0xff,0xf8,0x03,0x02,0x18,0x00,0x00,0x10,
    0x3c,0x8c,0x3f,0xe3,0x98,0x30,0x2c,0x18,0x1f,0xfc,0x07,0x3c,0x01,0x40,0x3c,0x30,
    0x3f,0xcc,0x18,0x63,0x8c,0xf0,0x63,0xf0,0x00,0xe0,0x01,0x3f,0xb8,0x83,0x3b,0xb8,
    0x01,0x0f,0x78,0xc0,0xc7,0xce,0x76,0x7c,0xc7,0x73,0x3c,0xff,0xc7,0x73,0xff,0x17,
    0x40,0x60,0x30,0x38,0x1c,0x0c,0x0e,0x0e,0x07,0x07,0x07,0x07,0x07,0x07,0x06,0x06,
    0x0e,0x0c,0x30,0x60,0x60,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0x60,0x70,0x30,0x38,
    0x18,0x0c,0x0c,0x06,0x48,0xfe,0x39,0x4a,0x02,0x30,0x60,0xc0,0xf8,0xff,0x1f,0x03,
    0x06,0x0e,0xee,0x46,0x36,0xff,0x03,0x3f,0x80,0x40,0x40,0x20,0x20,0x10,0x10,0x08,
    0x08,0x04,0x04,0x02,0x02,0x01,0xf0,0xe0,0xc7,0x39,0xe3,0x8e,0x3b,0x6e,0xf8,0xe1,
    0xc7,0x1d,0x77,0xdc,0x39,0x7e,0xf0,0x00,0x60,0xfc,0xef,0x87,0xc3,0xe1,0x30,0x1c,
    0x0e,0x87,0xc3,0x00,0xe0,0xc1,0x3f,0xcf,0x39,0x0e,0x70,0x80,0x03,0x0e,0x38,0xe0,
    0xc0,0x03,0x0f,0x3c,0xe0,0x9f,0xff,0x00,0xf0,0xe3,0x3f,0xc7,0x1d,0x0e,0x70,0xc0,
    0x81,0x07,0x7e,0x80,0x03,0xdc,0xe1,0x8e,0xf3,0x0f,0x3e,0x00,0x80,0x03,0x0f,0x3e,
    0xec,0x98,0x21,0xc6,0x9c,0x71,0xff,0xff,0x0f,0x0e,0x38,0xe0,0x00,0xf0,0xc7,0x3f,
    0x06,0x30,0xc0,0x1e,0xfe,0x39,0x0e,0x70,0x80,0x3b,0xcc,0x71,0xfe,0xc1,0x07,0xf0,
    0xe0,0xc7,0x39,0x03,0x0e,0xf8,0xe3,0xdf,0x73,0xc7,0x1d,0x77,0xcc,0x39,0x7e,0xf0,
    0x00,0xfe,0xf7,0x3f,0xe0,0x80,0x03,0x0e,0x38,0xc0,0x00,0x07,0x1c,0x60,0x80,0x03,
    0x1c,0x60,0x00,0xf0,0xc1,0x3f,0xc7,0x39,0xce,0x39,0xfc,0xf0,0xc7,0x71,0x86,0x3b,
    0xdc,0xe1,0x9e,0xe3,0x1f,0x3e,0x00,0xf0,0xc1,0x1f,0xc7,0x1d,0xee,0x70,0x87,0x3b,
    0xde,0x7f,0xbc,0x03,0x1c,0x70,0x8e,0xf3,0x0f,0x1f,0x00,0xcc,0x00,0x00,0x70,0x07,
    0xcc,0x00,0x00,0xee,0x46,0x36,0x00,0x06,0x3e,0xfe,0xfc,0xe0,0x80,0x3f,0xe0,0x0f,
    0x3c,0x00,0x01,0xfe,0xf7,0x1f,0x00,0x00,0x00,0x00,0xff,0xfd,0x07,0x04,0x78,0xe0,
    0x0f,0xfc,0xc0,0xc3,0xef,0xcf,0x07,0x03,0x00,0xf8,0xfc,0x3b,0x3f,0x3e,0x1c,0x18,
    0x38,0x38,0x38,0x38,0x70,0x00,0xc0,0x81,0x03,0x00,0x7e,0x00,0xfc,0x0f,0x78,0xf0,
    0xe0,0x00,0x87,0x01,0x70,0x06,0x00,0x3b,0xf8,0xd9,0x30,0xc6,0xc3,0x30,0x1e,0x82,
    0xf8,0x18,0xc6,0xc6,0x98,0x33,0xbe,0x8f,0xe3,0x3c,0x38,0x00,0xc0,0x03,0x01,0xf8,
    0x0f,0x80,0x3f,0x00,0x00,0x0f,0xf0,0x01,0x3e,0xe0,0x07,0xec,0xc0,0x1d,0x98,0x83,
    0xe3,0x38,0x1c,0xff,0xf3,0x7f,0x0e,0xee,0xc0,0x1d,0x38,0xfc,0x8f,0xff,0x73,0x70,
    0x0e,0xce,0xc0,0x1d,0x9c,0xff,0xf1,0x3f,0x0e,0xee,0xc0,0x1d,0xb8,0x83,0xf3,0x7f,
    0xfe,0x03,0xe0,0x07,0xfe,0xf1,0x78,0x0e,0xee,0x00,0x1c,0xc0,0x01,0x38,0x00,0x07,
    0xe0,0xc0,0x1d,0x9c,0xc7,0xe3,0x3f,0xf0,0x01,0xf8,0x0f,0xfe,0x87,0xc3,0x63,0xe0,
    0x1c,0x38,0x07,0xce,0x81,0x73,0xe0,0x0c,0x9c,0x03,0xe7,0xe0,0x38,0x3c,0xfe,0x87,
    0x7f,0x00,0xf8,0x1f,0xff,0xe3,0x00,0x0c,0xc0,0x01,0x38,0x00,0xff,0xe1,0x3f,0x0c,
    0xc0,0x01,0x38,0x00,0x07,0xe0,0x7f,0xfc,0x0f,0xf8,0x1f,0xff,0xe3,0x00,0x0c,0xc0,
    0x01,0x38,0x00,0xff,0xe1,0x3f,0x0c,0xc0,0x01,0x38,0x00,0x07,0xe0,0x00,0x0c,0x00,
    0xe0,0x07,0xff,0xf1,0x70,0x07,0xee,0x00,0x0e,0xc0,0xc1,0x3b,0x7c,0x07,0xec,0x80,
    0x3d,0x38,0x8f,0xc3,0x7f,0xf0,0x09,0x38,0x38,0x0e,0x8e,0x83,0x63,0xe0,0x1c,0x18,
    0x07,0xc7,0xff,0xf1,0x7f,0x0e,0x9c,0x03,0xe3,0xe0,0x38,0x38,0x06,0xce,0x81,0x03,
    0x38,0x8e,0x71,0x1c,0xc7,0x39,0x8e,0xe3,0x18,0xc7,0x01,0x00,0x07,0x38,0xc0,0x01,
    0x06,0x38,0xc0,0x01,0x0e,0x70,0x80,0x39,0xce,0x71,0x8e,0xf3,0x0f,0x1f,0x00,0x38,
    0x38,0x1c,0x0e,0x8e,0x03,0xe3,0xc0,0x39,0xe0,0x0e,0xf0,0x03,0xf8,0x03,0xdc,0x03,
    0xc7,0x81,0xe3,0xc1,0xe1,0xe0,0xf0,0x30,0x70,0x00,0x1c,0x38,0x70,0xe0,0xc0,0xc0,
    0x81,0x03,0x07,0x0e,0x0e,0x1c,0x38,0xf0,0xff,0x3f,0xf0,0xf0,0xf1,0xe1,0xe1,0xc3,
    0xc3,0xc7,0x87,0x8d,0x8f,0x9b,0x1d,0x37,0x1b,0x6e,0x3b,0xcc,0x76,0x9c,0xed,0x38,
    0xcf,0x70,0x9e,0x61,0x9c,0xe3,0x38,0x07,0x38,0x30,0x1e,0x8c,0x87,0xe3,0xe1,0xfc,
    0x38,0x37,0xc6,0xcd,0x31,0x77,0x8e,0x9d,0xe3,0xe7,0xf8,0x38,0x3c,0x06,0xcf,0x81,
    0x03,0xc0,0x07,0xfc,0x87,0xc3,0x71,0xe0,0x0e,0xb8,0x03,0x7e,0x80,0x1f,0xe0,0x07,
    0xdc,0x01,0x77,0xe0,0x38,0x1c,0xfe,0x03,0x3e,0x00,0xf8,0x0f,0xff,0xe3,0x70,0x0c,
    0xce,0xc1,0x39,0x18,0x87,0xe3,0x3f,0xfc,0xc3,0x01,0x38,0x00,0x07,0xe0,0x00,0x0c,
    0x00,0xe0,0x07,0xfc,0x87,0xc3,0x71,0xe0,0x0e,0xb8,0x03,0x7e,0x80,0x1f,0xe0,0x07,
    0xdc,0x61,0x77,0xf8,0x38,0x3c,0xfe,0x0f,0xfe,0x03,0x40,0x00,0xfc,0x8f,0xff,0x73,
    0x70,0x06,0xee,0xc0,0x1d,0x9c,0xff,0xf1,0x3f,0x06,0xee,0xc0,0x1d,0xb8,0x83,0x73,
    0x70,0x06,0x1e,0xe0,0x07,0xff,0xe3,0x78,0x0e,0xce,0x01,0x78,0x00,0xff,0x80,0x7f,
    0x00,0x0f,0xc0,0x1d,0xb8,0x87,0xe3,0x3f,0xf8,0x03,0xff,0xff,0x3f,0x1c,0x60,0x80,
    0x03,0x1c,0xe0,0x00,0x07,0x18,0xe0,0x00,0x07,0x38,0xc0,0x01,0x06,0x00,0x1c,0x9c,
    0x83,0x73,0x70,0x07,0xee,0xc0,0x1c,0x9c,0x83,0x73,0x70,0x07,0xee,0xe0,0x1c,0x9c,
    0xc7,0xe1,0x3f,0xf8,0x01,0x07,0x6e,0x60,0x06,0xe7,0x30,0x8e,0xe3,0x18,0xce,0xe1,
    0x0c,0xee,0xc0,0x06,0x7c,0xc0,0x03,0x1c,0xc0,0x01,0x87,0xc3,0x0f,0x87,0x1f,0x8f,
    0x3b,0x1e,0x77,0x36,0xe7,0x6c,0xce,0xd9,0x0c,0x9b,0x1d,0x36,0x1b,0x3c,0x3e,0x78,
    0x3c,0xf0,0x78,0xe0,0x70,0xc0,0xe1,0x00,0x70,0x70,0x38,0x1c,0x38,0x07,0xdc,0x01,
    0x7e,0x00,0x3e,0x00,0x0f,0x80,0x07,0xe0,0x03,0xf8,0x03,0xce,0x01,0xe7,0xc0,0xe1,
    0x70,0x70,0x00,0x0e,0xee,0x70,0x8e,0xc7,0x39,0xdc,0xc1,0x0d,0xfc,0x80,0x07,0x38,
    0x80,0x03,0x38,0x80,0x01,0x1c,0xc0,0x01,0xfc,0x9f,0xff,0x03,0x38,0x80,0x03,0x38,
    0x80,0x03,0x38,0x80,0x03,0x78,0x80,0x07,0x78,0x00,0x07,0xf0,0x3f,0xfe,0x07,0xe0,
    0xe1,0xc1,0x80,0x01,0x03,0x03,0x06,0x0c,0x18,0x18,0x30,0x60,0xc0,0xc0,0x80,0x01,
    0x03,0x1e,0x3c,0x00,0xc8,0x36,0x49,0x92,0x6c,0x9b,0xf0,0xf8,0x60,0x60,0x60,0x60,
    0x30,0x30,0x30,0x30,0x18,0x18,0x18,0x18,0x1c,0x0c,0x0f,0x0f,0xe0,0xe0,0xe1,0xc3,
    0xc6,0x8c,0xb9,0xe1,0xc3,0xff,0xff,0x3f,0x33,0xf8,0xf1,0xcf,0x38,0xe0,0x80,0xf1,
    0xe7,0xdd,0x71,0xe7,0xfc,0xe3,0x0e,0x38,0xc0,0x00,0x06,0xb8,0xc3,0x3f,0xce,0x33,
    0xdc,0xe1,0x06,0x37,0xb8,0xe1,0x9c,0xf7,0x9f,0x3b,0x00,0xf0,0xe1,0x1f,0xc7,0x1d,
    0x6e,0x80,0x03,0x1c,0xe0,0x00,0x87,0xf3,0x0f,0x1f,0x00,0x00,0x06,0x38,0xc0,0xf1,
    0xce,0x37,0xcf,0x39,0xec,0x60,0x07,0x3b,0xcc,0x61,0x9e,0xe3,0x1f,0x6f,0x00,0xf0,
    0xe1,0x9f,0xc3,0x1d,0xfe,0xff,0xff,0x1f,0xe0,0x00,0x8f,0xf3,0x0f,0x1f,0x00,0x78,
    0x3c,0x87,0xf3,0xfb,0x39,0x1c,0x0e,0xc3,0xe1,0x70,0x18,0x00,0xf0,0xc6,0x37,0xcf,
    0x39,0xec,0x20,0x07,0x39,0xcc,0x61,0x9e,0xe3,0x0f,0x6f,0x80,0x73,0x9c,0x7f,0xf0,
    0x01,0x38,0xc0,0x01,0x06,0xb8,0xc7,0x7f,0x8e,0x73,0x9c,0xe1,0x0e,0x73,0x98,0xe3,
    0x0c,0x67,0xb8,0xc3,0x00,0x9c,0x03,0xc6,0x9c,0x73,0xce,0x98,0x73,0x0e,0xe0,0xe0,
    0x00,0x60,0x70,0x70,0x70,0x30,0x38,0x38,0x38,0x38,0x18,0x1c,0x1c,0x1c,0x0f,0x07,
    0x38,0xc0,0x00,0x06,0x38,0xce,0x39,0xee,0xb0,0xc3,0x0f,0x7e,0x70,0x87,0x3b,0x8c,
    0x73,0x9c,0xe3,0x00,0x9c,0x73,0xc6,0x9c,0x73,0xce,0x98,0x73,0x0e,0xdc,0xf3,0xf8,
    0xff,0x73,0x1e,0x67,0x18,0xee,0x38,0xce,0x71,0x9c,0xe3,0x38,0xc3,0x31,0x86,0x61,
    0x8e,0xe3,0x1c,0xc7,0x01,0xdc,0xe3,0x3f,0xc7,0x39,0xee,0x70,0x87,0x39,0xcc,0x71,
    0x86,0x3b,0xdc,0x61,0x00,0xf0,0xf0,0xe7,0xbc,0xe3,0x87,0x1f,0x7e,0xf8,0x71,0xcf,
    0xf9,0xc3,0x03,0xb8,0x87,0x7f,0x38,0x8f,0xe1,0x1c,0xce,0xe0,0x0c,0xce,0x70,0x9c,
    0xe7,0x3f,0xee,0xe1,0x00,0x06,0x60,0x00,0x07,0x00,0xf0,0xc6,0x6f,0x9e,0xe7,0x70,
    0x07,0x77,0x30,0x87,0x73,0x38,0xcf,0xe3,0x3f,0xbc,0x01,0x18,0xc0,0x01,0x1c,0xc0,
    0x01,0xdc,0xfc,0x1c,0x1c,0x0e,0x0e,0x0e,0x0e,0x06,0x07,0x07,0xf8,0xf8,0x7f,0xf8,
    0x01,0x0f,0xf8,0xc1,0x1f,0x78,0xc7,0xfd,0xe3,0x07,0x1c,0xf7,0xff,0x8e,0xe3,0x18,
    0xc6,0xf1,0x3c,0x0c,0x3b,0xee,0xb8,0xe3,0x8e,0x1b,0x76,0xd8,0x71,0xc7,0xfd,0xe7,
    0x0d,0x86,0x1b,0x6e,0x9c,0x73,0xee,0xb8,0xe3,0x86,0x0f,0x3c,0x70,0xc0,0x01,0xc7,
    0xf1,0xe3,0xdc,0x79,0xee,0x3c,0x73,0xdb,0xb9,0x6d,0xdc,0x3e,0x3c,0x0f,0x9e,0x07,
    0xc7,0x83,0xe3,0x00,0x38,0x8e,0x73,0xf0,0x03,0x1f,0xf0,0x01,0x0e,0xf0,0x80,0x1f,
    0xdc,0xe1,0x3d,0x8e,0x03,0x0e,0x67,0x38,0xe3,0x38,0xc7,0x19,0x6e,0x70,0x83,0x0f,
    0x7c,0xc0,0x01,0x0e,0x30,0xc0,0x81,0x07,0x1c,0x00,0xf8,0xc7,0x3f,0xe0,0x80,0x03,
    0x0e,0x38,0xe0,0x80,0x07,0x1e,0xf0,0x8f,0x7f,0x00,0x70,0x3c,0x06,0xc3,0x60,0x30,
    0x18,0x8f,0x87,0xc1,0x60,0x38,0x1c,0x0e,0x0f,0x07,0x18,0x23,0x84,0x18,0x23,0xc4,
    0x18,0x23,0xc4,0x18,0x01,0x00,0x3c,0x1e,0x1c,0x86,0xc3,0xe1,0x70,0x78,0x3c,0x86,
    0xc3,0x60,0x30,0x18,0x87,0x03,0x8e,0xef,0x8d,0x03,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 5, 0, 19, 1, 1},
/* ! */ {1, 6, 2, 4, 6, 15},
/* " */ {13, 9, 3, 5, 7, 5},
/* # */ {18, 11, 0, 6, 12, 13},
/* $ */ {38, 11, 1, 4, 11, 17},
/* % */ {62, 17, 2, 5, 15, 14},
/* & */ {89, 14, 2, 5, 12, 14},
/* ' */ {110, 5, 3, 5, 3, 5},
/* ( */ {112, 6, 2, 5, 8, 18},
/* ) */ {130, 6, -2, 5, 8, 18},
/* * */ {148, 7, 2, 5, 6, 6},
/* + */ {153, 11, 1, 11, 9, 8},
/* , */ {162, 5, 1, 15, 4, 6},
/* - */ {165, 6, 1, 13, 5, 2},
/* . */ {167, 5, 1, 17, 3, 2},
/* / */ {168, 5, -1, 5, 8, 14},
/* 0 */ {182, 11, 2, 5, 10, 14},
/* 1 */ {200, 11, 3, 5, 7, 13},
/* 2 */ {212, 11, 1, 5, 11, 14},
/* 3 */ {232, 11, 1, 5, 11, 14},
/* 4 */ {252, 11, 1, 6, 10, 13},
/* 5 */ {269, 11, 1, 6, 11, 13},
/* 6 */ {287, 11, 2, 5, 10, 14},
/* 7 */ {305, 11, 2, 6, 11, 13},
/* 8 */ {323, 11, 1, 5, 11, 14},
/* 9 */ {343, 11, 1, 5, 11, 14},
/* : */ {363, 6, 1, 10, 4, 9},
/* ; */ {368, 6, 1, 10, 4, 12},
/* < */ {374, 11, 1, 9, 11, 9},
/* = */ {387, 11, 1, 11, 11, 7},
/* > */ {397, 11, 0, 10, 10, 9},
/* ? */ {409, 12, 3, 5, 9, 14},
/* @ */ {425, 19, 1, 4, 19, 18},
/* A */ {468, 14, 0, 5, 13, 14},
/* B */ {491, 14, 1, 5, 13, 14},
/* C */ {514, 14, 2, 5, 13, 14},
/* D */ {537, 14, 1, 5, 14, 14},
/* E */ {562, 13, 1, 5, 13, 14},
/* F */ {585, 12, 1, 5, 13, 14},
/* G */ {608, 15, 2, 5, 13, 14},
/* H */ {631, 14, 1, 5, 14, 14},
/* I */ {656, 5, 1, 5, 6, 14},
/* J */ {667, 11, 1, 5, 11, 14},
/* K */ {687, 14, 1, 5, 15, 14},
/* L */ {714, 12, 1, 5, 9, 14},
/* M */ {730, 16, 1, 5, 17, 14},
/* N */ {760, 14, 1, 5, 14, 14},
/* O */ {785, 15, 2, 5, 14, 14},
/* P */ {810, 13, 1, 5, 13, 14},
/* Q */ {833, 15, 2, 5, 14, 15},
/* R */ {860, 14, 1, 5, 13, 14},
/* S */ {883, 13, 1, 5, 13, 14},
/* T */ {906, 12, 2, 5, 11, 14},
/* U */ {926, 14, 2, 5, 13, 14},
/* V */ {949, 13, 3, 5, 12, 14},
/* W */ {970, 18, 3, 5, 17, 14},
/* X */ {1000, 13, 0, 5, 15, 14},
/* Y */ {1027, 13, 3, 5, 12, 14},
/* Z */ {1048, 12, 0, 5, 13, 14},
/* [ */ {1071, 6, 0, 5, 9, 18},
/* \ */ {1092, 5, 3, 2, 3, 16},
/* ] */ {1098, 6, -1, 5, 8, 18},
/* ^ */ {1116, 11, 2, 5, 9, 8},
/* _ */ {1125, 11, -2, 21, 11, 2},
/* ` */ {1128, 6, 3, 5, 3, 2},
/* a */ {1129, 11, 1, 8, 10, 11},
/* b */ {1143, 12, 1, 5, 11, 14},
/* c */ {1163, 11, 1, 8, 11, 11},
/* d */ {1179, 12, 2, 5, 11, 14},
/* e */ {1199, 11, 1, 8, 11, 11},
/* f */ {1215, 6, 1, 5, 7, 14},
/* g */ {1228, 12, 1, 8, 11, 15},
/* h */ {1249, 12, 1, 5, 11, 14},
/* i */ {1269, 5, 1, 5, 5, 14},
/* j */ {1278, 5, -1, 5, 8, 18},
/* k */ {1296, 11, 1, 5, 11, 14},
/* l */ {1316, 5, 1, 5, 5, 14},
/* m */ {1325, 17, 1, 8, 17, 11},
/* n */ {1349, 12, 1, 8, 11, 11},
/* o */ {1365, 12, 2, 8, 10, 11},
/* p */ {1379, 12, 0, 8, 12, 15},
/* q */ {1402, 12, 1, 8, 12, 15},
/* r */ {1425, 7, 1, 8, 8, 11},
/* s */ {1436, 11, 2, 8, 10, 11},
/* t */ {1450, 6, 2, 7, 6, 12},
/* u */ {1459, 12, 2, 8, 10, 11},
/* v */ {1473, 11, 2, 8, 10, 11},
/* w */ {1487, 15, 2, 8, 15, 11},
/* x */ {1508, 11, 0, 8, 12, 11},
/* y */ {1525, 11, 0, 8, 11, 15},
/* z */ {1546, 9, 0, 8, 11, 11},
/* { */ {1562, 7, 1, 5, 7, 18},
/* | */ {1578, 5, 1, 5, 5, 18},
/* } */ {1590, 7, 0, 5, 7, 18},
/* ~ */ {1606, 11, 1, 13, 9, 3},
};

const monoGFX_font_t monoGFX_FreeSansBoldOblique_9pt = {bitmapBuffer, 1610, glyphs, 20};