#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1527] =
{
    0x00,0x18,0x33,0xc6,0x18,0x23,0xc6,0x08,0x60,0x06,0x7b,0xef,0x94,0x00,0x40,0x06,
    0x33,0x88,0x60,0xc6,0x7f,0xfe,0x63,0x06,0x11,0xff,0xfb,0x1f,0x11,0xcc,0x20,0x02,
    0x19,0x00,0x80,0x00,0x1f,0xfe,0xb1,0xcc,0x64,0x26,0xb0,0x81,0x0f,0xf0,0x01,0xdd,
    0xc8,0x26,0x76,0x19,0xff,0xf0,0x01,0x02,0x08,0x00,0x00,0x18,0x1e,0x84,0x1f,0x61,
    0xcc,0x30,0x26,0xf8,0x09,0x78,0x02,0x00,0x01,0x40,0x3e,0x90,0x3f,0x68,0x18,0x32,
    0x8e,0xf8,0x23,0xf8,0x00,0xe0,0x81,0x1f,0xce,0x30,0x86,0x19,0x78,0xe0,0x80,0xcd,
    0xc6,0x1a,0xde,0x60,0x86,0xf3,0x37,0x8f,0x03,0x7f,0x01,0x20,0x18,0x04,0xc1,0x20,
    0x18,0x0c,0x83,0xc1,0x60,0x30,0x18,0x0c,0x04,0x06,0x02,0x30,0x10,0x18,0x0c,0x06,
    0x83,0xc1,0x60,0x30,0x18,0x06,0xc3,0x20,0x18,0x04,0x01,0x98,0xfa,0x33,0x9a,0x04,
    0x60,0x00,0x03,0x18,0xfc,0xef,0x3f,0x18,0xc0,0x00,0x06,0x30,0x00,0xb6,0x14,0xff,
    0x03,0x0f,0x80,0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x01,
    0xf0,0xe0,0xc7,0xb9,0xc3,0x06,0x1b,0x3c,0xf0,0x40,0x83,0x0d,0x36,0xc8,0x31,0x7e,
    0xf0,0x00,0x20,0xee,0x7b,0x18,0x86,0x61,0x18,0xc2,0x30,0x0c,0x03,0xf0,0xc1,0x1f,
    0xc7,0x19,0x0c,0x60,0x80,0x03,0x0e,0x18,0x70,0xe0,0x80,0x01,0x06,0xf0,0x9f,0xff,
    0x00,0xe0,0xc1,0x3f,0x86,0x19,0x0c,0x30,0xf0,0x80,0x07,0x70,0x00,0x1b,0xd8,0xe0,
    0x8e,0xe3,0x0f,0x3e,0x00,0x00,0x03,0x06,0x1c,0x78,0xb0,0x61,0x86,0x08,0x21,0xc2,
    0xfc,0xff,0x3f,0x10,0x60,0x80,0x01,0xf0,0xc7,0x3f,0x06,0x10,0xc0,0x0f,0xfe,0x38,
    0x0e,0x60,0x00,0x03,0x18,0x60,0x86,0xf3,0x0f,0x1f,0x00,0xf0,0xe0,0xc7,0x39,0xc3,
    0x06,0xd8,0xe1,0xcf,0x71,0x83,0x0d,0x36,0xd8,0x31,0x7e,0xf0,0x00,0xfe,0xff,0x07,
    0x18,0x30,0x40,0x80,0x00,0x03,0x06,0x08,0x30,0x60,0x80,0x01,0x03,0x0c,0x00,0xe0,
    0xc1,0x3f,0x87,0x19,0xcc,0x30,0xfc,0xf0,0xc7,0x71,0x03,0x1b,0xd8,0xc0,0x8e,0xe3,
    0x0f,0x3e,0x00,0xf0,0xc1,0x1f,0xc7,0x1d,0x6c,0x60,0x83,0x3b,0x9e,0x7f,0x78,0x03,
    0x18,0x60,0x86,0xe3,0x0f,0x1e,0x00,0xcc,0x00,0x00,0x00,0x22,0x00,0x18,0x03,0x00,
    0x00,0x00,0xc6,0x10,0x22,0x00,0x00,0x03,0x87,0x87,0x03,0x03,0x38,0x80,0x03,0x38,
    0x80,0x00,0xfe,0xf7,0x1f,0x00,0xfc,0xf7,0x3f,0x04,0x70,0x00,0x07,0x70,0x00,0x03,
    0x87,0x87,0x03,0x03,0x00,0x7c,0xfe,0xc7,0xc3,0xc0,0x60,0x30,0x18,0x0c,0x04,0x00,
    0x00,0x06,0x02,0x00,0x3f,0x80,0xff,0x03,0x0f,0x1e,0x0e,0x60,0x1c,0x87,0x3b,0xff,
    0x6c,0x8e,0xf1,0x18,0xc6,0x33,0x88,0xcf,0x10,0x36,0x63,0xde,0x7c,0x3f,0xe7,0x3c,
    0x18,0x00,0xe0,0x01,0x00,0xff,0x01,0xf0,0x03,0x00,0x00,0x07,0x78,0x80,0x07,0x6c,
    0x40,0x06,0x66,0x30,0x06,0x41,0xf8,0x8f,0xff,0x0c,0xcc,0xc0,0x06,0x2c,0xc0,0x00,
    0xfc,0xc7,0xff,0x0c,0xcc,0xc0,0x06,0x6c,0x60,0xfe,0xe3,0x3f,0x06,0x36,0x60,0x03,
    0x36,0x30,0xff,0xf3,0x0f,0x00,0xe0,0x07,0xfe,0xe1,0x70,0x06,0x6c,0x00,0x0c,0xc0,
    0x00,0x18,0x00,0x03,0x60,0x80,0x0d,0x18,0x83,0xe3,0x3f,0xf0,0x01,0xfc,0xc3,0x7f,
    0x0c,0xce,0xc0,0x04,0x6c,0xc0,0x06,0x6c,0xc0,0x02,0x36,0x60,0x03,0x33,0x38,0xff,
    0xf1,0x07,0x00,0xfc,0xcf,0xff,0x0c,0xc0,0x00,0x04,0x60,0x00,0xfe,0xe3,0x3f,0x02,
    0x30,0x00,0x03,0x30,0x00,0xff,0xf3,0x3f,0x00,0xfc,0xcf,0xff,0x0c,0xc0,0x00,0x04,
    0x60,0x00,0xfe,0xe3,0x1f,0x06,0x30,0x00,0x03,0x30,0x00,0x03,0x10,0x00,0x00,0xc0,
    0x07,0xfc,0x87,0x83,0x33,0xc0,0x06,0x80,0x01,0x30,0x00,0x0c,0x7e,0x83,0xdf,0x00,
    0x36,0xc0,0x1c,0x3c,0xfe,0x0d,0x3e,0x01,0x0c,0x98,0x01,0x33,0x60,0x06,0x44,0xc0,
    0x0c,0x98,0xff,0xf3,0x7f,0x02,0x64,0xc0,0x0c,0x98,0x01,0x33,0x20,0x02,0x06,0xcc,
    0x4c,0x64,0x66,0x26,0x32,0x33,0x00,0x00,0x03,0x0c,0x30,0xe0,0x80,0x01,0x06,0x18,
    0x60,0xc0,0x0c,0x33,0xcc,0x38,0x7f,0xf8,0x00,0x0c,0x98,0xc1,0x31,0x0c,0xc6,0x40,
    0x0c,0xcc,0x80,0x1f,0x70,0x02,0xc6,0x60,0x18,0x0c,0x86,0xc1,0x30,0x30,0x02,0x06,
    0x0c,0x18,0x30,0x60,0x40,0xc0,0x80,0x01,0x03,0x02,0x06,0x0c,0x18,0xf0,0xef,0x1f,
    0x1c,0x60,0x3c,0x70,0x3c,0x70,0x34,0x78,0x34,0x68,0x36,0x2c,0x36,0x34,0x36,0x36,
    0x32,0x32,0x63,0x11,0x63,0x11,0xe3,0x18,0xe3,0x18,0x61,0x18,0x1c,0x90,0x03,0x73,
    0x60,0x1a,0x4c,0x83,0xcc,0x98,0x19,0x33,0x66,0xc2,0x6c,0x98,0x0c,0x9e,0xc1,0x33,
    0x70,0x02,0x06,0xe0,0x07,0xfc,0x87,0xc3,0x31,0xe0,0x06,0xb0,0x01,0x3c,0x00,0x0f,
    0xc0,0x03,0xf8,0x00,0x76,0xc0,0x39,0x38,0xfe,0x07,0x7e,0x00,0xfc,0xc7,0xff,0x0c,
    0xcc,0xc0,0x04,0x6c,0x60,0xfe,0xe7,0x1f,0x06,0x30,0x00,0x03,0x30,0x00,0x03,0x10,
    0x00,0x00,0xe0,0x07,0xfc,0x87,0xc3,0x31,0xe0,0x06,0xb0,0x01,0x3c,0x00,0x0f,0xc0,
    0x03,0xd8,0x00,0x76,0xd8,0x38,0x1c,0xfe,0x07,0x3e,0x03,0xc0,0x00,0xfc,0x8f,0xff,
    0x33,0x60,0x06,0x4c,0x80,0x0d,0x98,0xff,0xf0,0x1f,0x06,0x66,0xc0,0x0c,0x98,0x81,
    0x31,0x30,0x02,0x0e,0xe0,0x83,0x7f,0x18,0xce,0xc0,0x0c,0xc0,0x00,0x7c,0x00,0x3f,
    0x00,0x37,0x60,0x03,0x76,0x30,0xfe,0xc1,0x0f,0x00,0xff,0xff,0x3f,0x0c,0x60,0x00,
    0x03,0x18,0x40,0x00,0x03,0x18,0xc0,0x00,0x06,0x18,0xc0,0x00,0x06,0x00,0x0c,0x98,
    0x01,0x33,0x60,0x06,0x44,0xc0,0x0c,0x98,0x01,0x33,0x60,0x02,0x64,0xc0,0x0c,0x98,
    0x83,0xe1,0x1f,0xf8,0x01,0x03,0x3c,0x60,0x02,0x66,0x30,0x06,0x61,0x18,0x86,0x60,
    0x0c,0x66,0x40,0x06,0x34,0xc0,0x03,0x1c,0xc0,0x00,0x00,0x03,0x83,0x07,0x07,0x0f,
    0x0e,0x1b,0x1e,0x36,0x34,0x64,0x6c,0xcc,0x88,0x88,0x19,0x19,0x13,0x32,0x36,0x34,
    0x2c,0x68,0x70,0x70,0x60,0xe0,0xc0,0xc0,0x00,0x30,0x70,0x18,0x18,0x18,0x06,0x8c,
    0x01,0x6c,0x00,0x1e,0x00,0x06,0x80,0x03,0x60,0x03,0x98,0x01,0x8c,0x01,0xc3,0xc0,
    0xe0,0x30,0x60,0x00,0x07,0xcc,0xc0,0x18,0x1c,0x86,0xc1,0x18,0x90,0x01,0x1e,0xc0,
    0x01,0x30,0x00,0x02,0x60,0x00,0x0c,0x80,0x01,0x10,0x00,0xf8,0x1f,0xff,0x03,0x30,
    0x00,0x03,0x30,0x00,0x03,0x30,0x00,0x03,0x30,0x00,0x03,0x38,0x80,0x03,0xf0,0x3f,
    0xfe,0x07,0xf0,0x70,0x18,0x18,0x18,0x18,0x18,0x0c,0x0c,0x0c,0x0c,0x0c,0x06,0x06,
    0x06,0x06,0x1e,0x1f,0x55,0x95,0xaa,0x0a,0x78,0x3c,0x0c,0x06,0x83,0xc1,0x30,0x18,
    0x0c,0x06,0xc3,0x60,0x30,0x18,0x8f,0x07,0x30,0x38,0x78,0x6c,0x66,0x62,0x63,0x61,
    0xff,0x07,0x13,0x01,0xf0,0xe1,0xcf,0x30,0xc0,0xf0,0x79,0x36,0xd8,0x70,0xbf,0x7b,
    0x06,0x18,0x60,0x00,0x03,0x18,0xc0,0x1e,0xfe,0x79,0xdc,0xc1,0x06,0x36,0xb0,0xc1,
    0x1c,0xf7,0x9f,0x7d,0x00,0xf0,0xf0,0xef,0xb0,0xc1,0x03,0x0c,0x30,0xc0,0x61,0xfe,
    0xf0,0x01,0x00,0x06,0x30,0x80,0x01,0x8c,0x6f,0xfe,0x39,0xce,0x60,0x03,0x1b,0xd8,
    0xe0,0x8e,0xe3,0x1f,0xde,0x00,0xf0,0xf0,0x6f,0xb0,0xff,0xff,0x0f,0x30,0xc0,0x61,
    0xfe,0xf0,0x01,0x30,0xce,0x31,0x9e,0xc7,0x18,0x86,0x61,0x18,0xc3,0x00,0xf0,0xc4,
    0x3f,0xc7,0x18,0x64,0x20,0x03,0x19,0xcc,0x31,0x7c,0xc1,0x0d,0x60,0x86,0xf1,0x07,
    0x1f,0x00,0x18,0x30,0xc0,0x00,0x03,0xec,0xf1,0xef,0xb1,0xc3,0x06,0x1b,0x66,0x98,
    0x61,0x83,0x0d,0x06,0xcc,0x00,0x66,0x66,0x66,0x37,0x33,0x00,0xc0,0x60,0x00,0x00,
    0x60,0x70,0x30,0x30,0x30,0x30,0x18,0x18,0x18,0x18,0x18,0x0c,0x0f,0x07,0x18,0x30,
    0xc0,0x00,0x03,0x0c,0x33,0xe7,0x86,0x0d,0x7e,0xb8,0x61,0x84,0x31,0xc3,0x0c,0x06,
    0xcc,0xec,0x66,0x66,0x66,0x37,0x33,0x00,0xec,0x38,0xff,0xbe,0xe3,0xd8,0x30,0x6c,
    0x18,0x36,0x0c,0x1b,0x86,0x8d,0x63,0xc3,0xb0,0x61,0x18,0xec,0xf9,0xef,0xb0,0xc1,
    0x06,0x1b,0x66,0x98,0x61,0x83,0x0d,0x06,0x78,0xf8,0x39,0x36,0x3c,0x78,0xf0,0xb0,
    0x73,0x7e,0x78,0x00,0xd8,0x83,0x7f,0x38,0x8e,0xc1,0x0c,0xcc,0xc0,0x0c,0xc6,0x71,
    0xfe,0x63,0x1f,0x06,0x60,0x00,0x06,0x30,0x00,0x00,0xf0,0xe6,0xbf,0xe3,0x0d,0x36,
    0xb0,0x81,0x0d,0xee,0x78,0xfe,0xe1,0x0c,0x60,0x00,0x03,0x0c,0x60,0x00,0x6c,0xbb,
    0xc7,0x60,0x30,0x18,0x0c,0x83,0x01,0xf8,0xf0,0xef,0xb0,0x01,0x3e,0xe0,0x37,0xd8,
    0x70,0xff,0xf8,0x01,0x0c,0xf3,0x7d,0x86,0x61,0x18,0xc3,0xf0,0x18,0x00,0x8c,0x0d,
    0x1b,0x36,0x6c,0xdc,0xd8,0xb0,0x71,0xff,0xbc,0x01,0x83,0x07,0x0d,0x13,0x62,0xc6,
    0x86,0x05,0x0f,0x0e,0x18,0x00,0xc3,0xf1,0x70,0x3c,0x1e,0x8d,0x66,0xb3,0xc9,0x64,
    0xa3,0x59,0x28,0x1e,0x8e,0x83,0xe1,0x00,0x18,0xc6,0x18,0x6c,0xe0,0x01,0x06,0x38,
    0x60,0x01,0x19,0x84,0x30,0x0c,0x0c,0x46,0x18,0xc2,0x10,0x83,0x09,0x6c,0x60,0x01,
    0x0f,0x38,0x80,0x00,0x06,0x18,0xf0,0x80,0x03,0x00,0xfc,0xf1,0x07,0x18,0x10,0x30,
    0x60,0xc0,0x80,0x00,0xff,0xfc,0x03,0x70,0x3c,0x06,0xc3,0x60,0x30,0x1c,0x87,0x83,
    0xc1,0x60,0x18,0x0c,0x06,0x07,0x03,0x10,0x22,0x84,0x10,0x22,0x84,0x10,0x23,0x84,
    0x10,0x21,0x00,0x30,0x38,0x18,0x0c,0x83,0xc1,0x60,0x70,0x38,0x0e,0x83,0xc1,0x30,
    0x18,0x8f,0x03,0x06,0x8e,0xf9,0x60,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 5, 0, 19, 1, 1},
/* ! */ {1, 5, 2, 5, 5, 14},
/* " */ {10, 7, 3, 5, 5, 5},
/* # */ {14, 11, 1, 5, 11, 14},
/* $ */ {34, 11, 1, 4, 11, 17},
/* % */ {58, 17, 3, 5, 15, 14},
/* & */ {85, 13, 2, 5, 11, 14},
/* ' */ {105, 4, 3, 5, 2, 5},
/* ( */ {107, 6, 2, 5, 7, 18},
/* ) */ {123, 6, -1, 5, 7, 18},
/* * */ {139, 7, 3, 5, 6, 6},
/* + */ {144, 11, 1, 10, 11, 9},
/* , */ {157, 5, 1, 16, 3, 5},
/* - */ {159, 6, 2, 12, 5, 2},
/* . */ {161, 5, 2, 17, 2, 2},
/* / */ {162, 5, -1, 5, 8, 14},
/* 0 */ {176, 11, 2, 5, 10, 14},
/* 1 */ {194, 11, 3, 5, 6, 14},
/* 2 */ {205, 11, 0, 5, 11, 14},
/* 3 */ {225, 11, 1, 5, 11, 14},
/* 4 */ {245, 11, 1, 5, 10, 14},
/* 5 */ {263, 11, 1, 5, 11, 14},
/* 6 */ {283, 11, 2, 5, 10, 14},
/* 7 */ {301, 11, 2, 5, 10, 14},
/* 8 */ {319, 11, 1, 5, 11, 14},
/* 9 */ {339, 11, 1, 5, 11, 14},
/* : */ {359, 5, 2, 9, 4, 10},
/* ; */ {365, 5, 1, 9, 5, 13},
/* < */ {374, 11, 1, 9, 10, 9},
/* = */ {386, 11, 1, 12, 11, 5},
/* > */ {393, 11, 0, 10, 10, 9},
/* ? */ {405, 11, 4, 5, 8, 14},
/* @ */ {419, 19, 2, 5, 18, 17},
/* A */ {458, 13, 0, 5, 12, 14},
/* B */ {480, 13, 1, 5, 12, 14},
/* C */ {502, 13, 2, 5, 13, 14},
/* D */ {525, 13, 1, 5, 12, 14},
/* E */ {547, 12, 1, 5, 12, 14},
/* F */ {569, 11, 1, 5, 12, 14},
/* G */ {591, 15, 2, 5, 14, 14},
/* H */ {616, 14, 1, 5, 13, 14},
/* I */ {639, 5, 2, 5, 4, 14},
/* J */ {647, 10, 1, 5, 10, 14},
/* K */ {665, 13, 1, 5, 13, 14},
/* L */ {688, 11, 1, 5, 9, 14},
/* M */ {704, 16, 1, 5, 16, 14},
/* N */ {732, 14, 1, 5, 13, 14},
/* O */ {755, 15, 2, 5, 14, 14},
/* P */ {780, 12, 1, 5, 12, 14},
/* Q */ {802, 15, 2, 5, 14, 15},
/* R */ {829, 13, 1, 5, 13, 14},
/* S */ {852, 12, 2, 5, 12, 14},
/* T */ {874, 12, 3, 5, 11, 14},
/* U */ {894, 14, 2, 5, 13, 14},
/* V */ {917, 12, 3, 5, 12, 14},
/* W */ {939, 18, 3, 5, 17, 14},
/* X */ {969, 13, 0, 5, 15, 14},
/* Y */ {996, 13, 3, 5, 13, 14},
/* Z */ {1019, 12, 0, 5, 13, 14},
/* [ */ {1042, 5, 0, 5, 8, 18},
/* \ */ {1060, 5, 3, 5, 2, 14},
/* ] */ {1064, 5, -1, 5, 7, 18},
/* ^ */ {1080, 9, 1, 5, 8, 8},
/* _ */ {1088, 11, -2, 21, 11, 1},
/* ` */ {1090, 6, 3, 5, 3, 3},
/* a */ {1092, 11, 1, 9, 10, 10},
/* b */ {1105, 11, 1, 5, 11, 14},
/* c */ {1125, 10, 1, 9, 10, 10},
/* d */ {1138, 11, 1, 5, 11, 14},
/* e */ {1158, 10, 1, 9, 10, 10},
/* f */ {1171, 5, 1, 5, 6, 14},
/* g */ {1182, 10, 0, 9, 11, 14},
/* h */ {1202, 10, 1, 5, 10, 14},
/* i */ {1220, 4, 1, 5, 4, 14},
/* j */ {1228, 5, -1, 5, 8, 18},
/* k */ {1246, 10, 1, 5, 10, 14},
/* l */ {1264, 4, 1, 5, 4, 14},
/* m */ {1272, 16, 1, 9, 15, 10},
/* n */ {1291, 10, 1, 9, 10, 10},
/* o */ {1304, 11, 2, 9, 9, 10},
/* p */ {1316, 11, 0, 9, 12, 14},
/* q */ {1338, 11, 1, 9, 11, 14},
/* r */ {1358, 6, 1, 9, 7, 10},
/* s */ {1367, 9, 1, 9, 10, 10},
/* t */ {1380, 5, 2, 7, 6, 12},
/* u */ {1390, 10, 2, 9, 9, 10},
/* v */ {1402, 9, 2, 9, 9, 10},
/* w */ {1414, 14, 2, 9, 14, 10},
/* x */ {1432, 9, 0, 9, 11, 10},
/* y */ {1446, 9, -1, 9, 11, 14},
/* z */ {1466, 9, 0, 9, 10, 10},
/* { */ {1479, 6, 1, 5, 7, 18},
/* | */ {1495, 5, 1, 5, 5, 18},
/* } */ {1507, 6, -1, 5, 7, 18},
/* ~ */ {1523, 11, 3, 10, 8, 4},
};

const monoGFX_font_t monoGFX_FreeSansOblique_9pt = {bitmapBuffer, 1527, glyphs, 20};
