#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1470] =
{
    0x00,0x30,0x8c,0xe3,0x18,0x86,0x20,0x04,0x01,0x1c,0xc7,0x01,0xe3,0x71,0x28,0x14,
    0x02,0x40,0x06,0x13,0x88,0x40,0xc6,0x7f,0xc8,0x60,0x02,0x11,0xfe,0x21,0x02,0x19,
    0x4c,0x20,0x03,0x80,0x80,0x07,0xe6,0x98,0xcc,0x24,0x2e,0xe0,0x01,0x1e,0xe0,0x00,
    0x8f,0x64,0x24,0x73,0x19,0x6f,0xe0,0x01,0x01,0x38,0x84,0xf3,0x60,0x24,0x1c,0x05,
    0x43,0xc1,0x28,0x30,0xc9,0x39,0x99,0x40,0x26,0xc8,0x08,0x32,0x42,0x4c,0x10,0x13,
    0x82,0x03,0xc0,0x01,0x44,0xc0,0x08,0x98,0x01,0x0b,0xe0,0x00,0x9e,0xf7,0x63,0x66,
    0xe4,0x5c,0x9c,0x8f,0xe3,0xf0,0x3c,0x7d,0x1e,0x5f,0x01,0x20,0x84,0x30,0x86,0x71,
    0x0c,0xc3,0x30,0x0c,0x82,0x40,0x10,0x04,0x02,0x41,0x30,0x0c,0xc3,0x30,0x8c,0x61,
    0x08,0x61,0x04,0x18,0x18,0x49,0x6b,0x1c,0xff,0xd9,0x18,0x08,0x10,0x20,0x40,0x80,
    0xf0,0x1f,0x02,0x04,0x08,0x10,0x00,0xb6,0xa9,0x00,0xff,0x03,0xff,0x01,0x40,0x60,
    0x20,0x30,0x30,0x18,0x18,0x0c,0x0c,0x04,0x06,0x02,0x03,0x70,0x30,0x71,0x66,0xec,
    0xd8,0xf8,0xf1,0xe3,0xc7,0xc6,0x8d,0x1b,0x23,0x83,0x03,0xc0,0xf8,0x60,0x70,0x70,
    0x30,0x30,0x38,0x38,0x18,0x18,0x1c,0x1c,0x7f,0x78,0xc8,0x0b,0x07,0x0e,0x1c,0x18,
    0x38,0x30,0x30,0x30,0x30,0x30,0xf4,0xe7,0x0f,0xf0,0x21,0x0f,0x38,0xe0,0xc0,0x81,
    0x81,0x0f,0x38,0xc0,0x00,0x03,0x0c,0x10,0x67,0x78,0x00,0x00,0x03,0x0e,0x1c,0x68,
    0xd0,0x21,0x43,0x0c,0x39,0xe2,0xfc,0x07,0x06,0x1c,0x70,0x00,0xf0,0xf1,0x23,0x20,
    0xc0,0x83,0x0f,0x3c,0x70,0xc0,0x80,0x01,0x03,0x32,0xe2,0x03,0x80,0xe1,0xe1,0xe0,
    0xe0,0xc0,0x87,0x99,0x33,0x63,0xc6,0xcc,0x99,0x21,0xc3,0x03,0xfc,0xfd,0x0b,0x0b,
    0x02,0x06,0x04,0x0c,0x08,0x18,0x18,0x30,0x30,0x20,0x00,0xf0,0x30,0x33,0x66,0xcc,
    0x99,0x0f,0x1e,0x3a,0xe6,0x86,0x0d,0x1b,0x26,0x86,0x07,0x70,0x38,0x31,0x76,0x6c,
    0xd8,0xb8,0x71,0x63,0xfc,0xe0,0xc0,0xc1,0xe0,0x60,0x00,0x9c,0x73,0x00,0x00,0x38,
    0xe7,0x00,0x9c,0x73,0x00,0x00,0x30,0x86,0x88,0x01,0x00,0x81,0xe3,0xf3,0x70,0xe0,
    0x80,0x07,0x78,0xc0,0x01,0x02,0xff,0x03,0x00,0x00,0x00,0xff,0x03,0x01,0x3c,0xc0,
    0x03,0x3c,0xc0,0x03,0x0f,0x0f,0x0f,0x0f,0x04,0x00,0x3c,0xe6,0xe6,0xe0,0xf0,0x70,
    0x18,0x0c,0x06,0x02,0x00,0x03,0x07,0x07,0xe0,0x03,0x06,0xc3,0x80,0x19,0x56,0x43,
    0xe6,0x98,0x39,0x23,0xce,0x8c,0x33,0x91,0xfd,0x63,0x00,0x70,0x10,0xf0,0x03,0x00,
    0x01,0x20,0x00,0x0e,0xc0,0x01,0x3c,0x40,0x07,0xe8,0x80,0x18,0x18,0x03,0xff,0x30,
    0x1c,0x82,0x23,0x70,0x1e,0x3f,0xf8,0x03,0xe7,0x70,0x0e,0xe3,0x38,0x8e,0x73,0xf8,
    0x80,0x39,0x1c,0xc7,0x71,0x0c,0xe7,0x78,0x8e,0xf3,0x0f,0xe0,0x8b,0xe3,0x1c,0xc4,
    0x41,0x0e,0xe4,0x00,0x07,0x70,0x00,0x07,0x70,0x00,0x07,0x60,0x10,0x8e,0x81,0x07,
    0xf8,0x07,0x1c,0x03,0x87,0xc1,0xe0,0x38,0x38,0x0e,0x8e,0x83,0x63,0xe0,0x1c,0x3c,
    0x07,0xc7,0xc0,0x39,0x38,0x8e,0xc7,0x7f,0x00,0xf8,0x3f,0x1c,0x0e,0x07,0xc1,0x40,
    0x38,0x04,0x8e,0x81,0x3f,0x60,0x0c,0x1c,0x01,0x47,0xc0,0xc0,0x38,0x30,0x0e,0xc7,
    0xff,0x01,0xf8,0x1f,0x8e,0xc3,0x21,0x18,0x84,0x23,0x70,0x06,0xfe,0xc0,0x08,0x1c,
    0x81,0x23,0x70,0x00,0x07,0xe0,0x00,0x7e,0x00,0xe0,0x13,0x8e,0x73,0x20,0x0e,0xe4,
    0x00,0x1c,0xc0,0x01,0x38,0xf8,0x07,0xee,0xc0,0x1c,0x18,0x83,0xe3,0x70,0xf0,0x03,
    0xf8,0xfd,0x70,0x38,0x70,0x38,0x30,0x38,0x38,0x18,0x38,0x1c,0xf8,0x1f,0x18,0x1c,
    0x1c,0x0c,0x1c,0x0e,0x0c,0x0e,0x0e,0x0e,0x0e,0x0f,0xbf,0x1f,0xf8,0x70,0x70,0x30,
    0x38,0x38,0x38,0x18,0x1c,0x1c,0x0c,0x0e,0x0e,0x3f,0xe0,0x07,0x1c,0x70,0x80,0x03,
    0x1c,0x60,0x80,0x03,0x1c,0xe0,0x00,0x03,0x1c,0xe0,0x30,0x83,0x1d,0x78,0x00,0xf8,
    0x3d,0x1c,0x02,0x47,0xc0,0x08,0x38,0x01,0x2e,0x80,0x0f,0x60,0x07,0xdc,0x01,0xe7,
    0xc0,0x38,0x38,0x0c,0x0e,0xc7,0xe7,0x03,0xf8,0x01,0x07,0x70,0x00,0x03,0x38,0x80,
    0x03,0x38,0x80,0x01,0x1c,0xc0,0x01,0x0c,0xe8,0xc0,0x0e,0xf7,0x7f,0x78,0xc0,0xc3,
    0x81,0x07,0x07,0x0f,0x1c,0x3c,0x68,0xe8,0xa0,0xb3,0x83,0x4e,0x06,0xba,0x1c,0xe4,
    0x72,0x90,0xc7,0x40,0x9c,0x83,0x31,0x0e,0x46,0x38,0x3c,0xf9,0x01,0x78,0x78,0x38,
    0x18,0x3c,0x04,0x1e,0x82,0x0c,0x41,0x4e,0x20,0x26,0x10,0x17,0x84,0x0b,0x82,0x03,
    0xc1,0xc1,0xc0,0x60,0x20,0x00,0x00,0x00,0xc0,0x03,0xce,0xe1,0x30,0x0e,0xee,0xc0,
    0x1d,0xf8,0x03,0x3f,0xf0,0x07,0xee,0xe0,0x1d,0x9c,0xc3,0xe1,0x1c,0xf8,0x00,0xf8,
    0x07,0xe7,0x70,0x0e,0xe3,0x38,0x8e,0x73,0xf8,0x83,0x01,0x1c,0xc0,0x01,0x0c,0xe0,
    0x00,0x0e,0xf0,0x03,0xe0,0x03,0x73,0x18,0xc6,0xe1,0x0e,0xee,0xe0,0x0f,0x7e,0xf0,
    0x07,0x77,0x70,0x87,0x73,0x18,0xc6,0xc1,0x07,0x08,0xe0,0x43,0xfb,0x03,0xf8,0x07,
    0x8e,0xc3,0x71,0x18,0x8e,0xc3,0x71,0x1c,0xfe,0xc0,0x1e,0x9c,0x83,0x73,0x70,0x1e,
    0x87,0xe3,0x70,0x7e,0x3e,0x70,0x62,0xc6,0x10,0x43,0x1c,0xf0,0x80,0x07,0x3c,0xe0,
    0x01,0x26,0x98,0x60,0xc6,0xe4,0x01,0xfe,0x6f,0xe7,0x73,0x14,0x47,0x30,0x80,0x03,
    0x38,0x80,0x01,0x1c,0xc0,0x01,0x1c,0xc0,0x00,0x0e,0xf0,0x03,0x7e,0x9e,0x83,0x71,
    0x30,0x06,0xe2,0x40,0x1c,0x88,0x83,0x30,0x10,0x07,0xe2,0x20,0x1c,0x84,0x83,0xe0,
    0x08,0xf8,0x00,0x3f,0x9e,0x03,0x71,0x10,0x0e,0xc2,0x21,0x38,0x02,0x46,0xc0,0x05,
    0x78,0x00,0x0f,0xe0,0x00,0x0c,0x00,0x01,0x00,0xbf,0xcf,0x39,0x0e,0x71,0x1c,0xe1,
    0x38,0xc2,0x79,0x82,0xd3,0x04,0x97,0x05,0x2c,0x0b,0x38,0x0e,0x70,0x1c,0x60,0x18,
    0xc0,0x30,0x80,0x20,0x00,0xfc,0x3c,0x1c,0x02,0x47,0x80,0x09,0xe0,0x01,0x38,0x00,
    0x0e,0x80,0x03,0xe0,0x01,0x74,0x80,0x18,0x10,0x0e,0x86,0xc3,0xf3,0x03,0x3f,0xcf,
    0x20,0x1c,0xc2,0x11,0x98,0x80,0x07,0x78,0x80,0x03,0x38,0x80,0x03,0x18,0xc0,0x01,
    0x1c,0xf0,0x07,0xfc,0x67,0x38,0xe1,0x84,0x07,0x1c,0x70,0xc0,0x03,0x0e,0x38,0xe0,
    0x01,0x07,0x1d,0x74,0xb8,0xff,0x01,0xf0,0x30,0x18,0x18,0x18,0x18,0x08,0x0c,0x0c,
    0x0c,0x04,0x06,0x06,0x06,0x02,0x1f,0x63,0x08,0x61,0x0c,0x61,0x0c,0x21,0x8c,0x01,
    0x78,0x60,0x60,0x60,0x20,0x30,0x30,0x30,0x10,0x18,0x18,0x18,0x18,0x0c,0x0c,0x0f,
    0x18,0x70,0xb0,0x60,0x63,0xc4,0xd8,0x20,0xff,0x03,0x63,0x0c,0xf0,0xb1,0x33,0x33,
    0x66,0x6c,0xd8,0x98,0x31,0xfb,0xcc,0x00,0x00,0x7c,0x60,0xe0,0xc0,0x81,0x1d,0x67,
    0xc7,0x86,0x0d,0x1f,0x1b,0x36,0x66,0x86,0x07,0x70,0xdc,0xcc,0x0e,0x07,0x07,0x07,
    0x47,0x27,0x1e,0xc0,0x07,0x18,0xc0,0x00,0x07,0x1f,0xec,0x30,0xc7,0x38,0xc6,0x18,
    0xc6,0x38,0xc6,0x32,0x0f,0x37,0x00,0x70,0xdc,0xcc,0xce,0x66,0x1f,0x07,0x47,0x27,
    0x1e,0x00,0x07,0x2c,0x60,0x80,0x01,0x0c,0xf8,0x80,0x03,0x0c,0x60,0x00,0x03,0x1c,
    0x60,0x00,0x03,0x18,0x40,0x00,0x03,0x09,0x38,0x00,0x38,0x98,0x1b,0x33,0x66,0x06,
    0x87,0x01,0x07,0x7c,0xe6,0x84,0x09,0xe1,0x01,0x3c,0xc0,0x80,0x03,0x06,0x98,0xe1,
    0xc7,0x19,0x67,0x8c,0x31,0xe6,0x9c,0xb1,0xc6,0x19,0x03,0x9c,0x73,0x80,0x9e,0x31,
    0x66,0x8c,0xb1,0x0e,0xc0,0x81,0x03,0x07,0x00,0x0f,0x0c,0x18,0x30,0x70,0x60,0xc0,
    0xc0,0x81,0x01,0x03,0x86,0x06,0x07,0x00,0x38,0xc0,0x00,0x03,0x06,0xd8,0x63,0xc6,
    0x09,0x13,0x2c,0xf0,0xe1,0x86,0x19,0x66,0x19,0x03,0x9e,0x33,0xc6,0x9c,0x31,0xe6,
    0x8c,0xb1,0x0e,0x9e,0x39,0x7f,0xcd,0xb9,0x73,0x66,0xcc,0x99,0x73,0x66,0x8c,0x19,
    0x63,0xe6,0xf8,0x19,0x06,0x9e,0xf1,0xc7,0x11,0xc7,0x8c,0x3b,0xe6,0x98,0x31,0xc6,
    0x1d,0x03,0xf0,0x38,0x33,0x36,0x7c,0x78,0xf8,0xb0,0x71,0x73,0x3c,0x00,0xbc,0xe1,
    0x8d,0x33,0xc6,0x18,0x73,0xc6,0x18,0x33,0xcc,0xf8,0x61,0x80,0x01,0x0f,0x00,0xf0,
    0xb1,0x33,0x37,0x66,0x6c,0xd8,0x98,0x31,0x73,0x7c,0xc0,0xc0,0xc1,0x07,0xde,0xfc,
    0x1c,0x0c,0x0e,0x06,0x06,0x06,0x07,0x5c,0xb3,0xd1,0xc1,0xe1,0xe1,0x62,0xb3,0x0f,
    0x10,0x33,0x6f,0x8c,0x39,0x63,0x8c,0x75,0x00,0xcf,0x8c,0x19,0x33,0x66,0xc6,0xcc,
    0x9e,0x19,0x7f,0x6e,0x00,0x67,0xb3,0xd1,0x64,0xb2,0x38,0x0c,0x02,0x27,0x9b,0x6c,
    0xa7,0x5d,0x6e,0xb9,0x63,0x86,0x18,0x22,0x00,0x3c,0xc3,0x0b,0x07,0x0c,0x30,0xc0,
    0x01,0x07,0x1a,0x6a,0x9d,0x03,0x9c,0x31,0xe3,0xc4,0x09,0x0b,0x16,0x1c,0x38,0x30,
    0x60,0x40,0x58,0x70,0x00,0xfc,0x62,0x20,0x10,0x08,0x04,0x0e,0x0e,0x58,0x70,0xc0,
    0xc1,0xc0,0x80,0x01,0x03,0x06,0x06,0x0c,0x0c,0x0c,0x30,0x60,0xc0,0xc0,0x80,0x01,
    0x03,0x06,0x38,0x00,0xff,0x1f,0x70,0x80,0x01,0x03,0x06,0x0c,0x0c,0x18,0x30,0x60,
    0xc0,0xc1,0x80,0x01,0x03,0x03,0x06,0x0c,0x0c,0x0e,0x00,0x1e,0xe0,0x01,
};

static const monoGFX_glyph_t glyphs[] =
{
/*   */ {0, 5, 0, 19, 1, 1},
/* ! */ {1, 7, 1, 6, 6, 14},
/* " */ {12, 11, 2, 6, 7, 5},
/* # */ {17, 9, -1, 6, 11, 13},
/* $ */ {35, 10, -1, 5, 11, 16},
/* % */ {57, 16, 1, 5, 14, 14},
/* & */ {82, 15, 0, 6, 13, 14},
/* ' */ {105, 5, 2, 6, 2, 5},
/* ( */ {107, 6, 1, 6, 6, 16},
/* ) */ {119, 6, -2, 6, 6, 16},
/* * */ {131, 10, 0, 6, 8, 9},
/* + */ {140, 11, 1, 10, 9, 9},
/* , */ {151, 5, -2, 16, 3, 6},
/* - */ {154, 6, 0, 14, 5, 2},
/* . */ {156, 5, 0, 17, 3, 3},
/* / */ {158, 6, -1, 6, 8, 13},
/* 0 */ {171, 10, 0, 6, 9, 14},
/* 1 */ {187, 9, 0, 6, 8, 14},
/* 2 */ {201, 9, 0, 6, 9, 14},
/* 3 */ {217, 9, 0, 6, 10, 14},
/* 4 */ {235, 9, 0, 6, 10, 13},
/* 5 */ {252, 10, -1, 6, 9, 14},
/* 6 */ {268, 10, 1, 6, 9, 14},
/* 7 */ {284, 9, 1, 6, 9, 13},
/* 8 */ {299, 9, 0, 6, 9, 14},
/* 9 */ {315, 10, -1, 6, 9, 14},
/* : */ {331, 5, 0, 10, 5, 10},
/* ; */ {338, 5, -1, 10, 5, 12},
/* < */ {346, 11, 0, 8, 9, 10},
/* = */ {358, 11, 1, 12, 10, 5},
/* > */ {365, 11, 1, 8, 10, 10},
/* ? */ {378, 9, 2, 6, 8, 14},
/* @ */ {392, 16, 1, 6, 14, 13},
/* A */ {415, 13, 0, 6, 13, 14},
/* B */ {438, 12, 0, 6, 12, 14},
/* C */ {459, 12, 1, 6, 12, 14},
/* D */ {480, 14, 0, 6, 14, 14},
/* E */ {505, 12, 0, 6, 14, 14},
/* F */ {530, 12, 0, 6, 13, 14},
/* G */ {553, 13, 1, 6, 13, 14},
/* H */ {576, 14, 0, 6, 16, 14},
/* I */ {604, 7, 0, 6, 8, 14},
/* J */ {618, 9, 0, 6, 11, 15},
/* K */ {639, 13, 0, 6, 14, 14},
/* L */ {664, 12, 0, 6, 12, 14},
/* M */ {685, 17, 0, 6, 18, 14},
/* N */ {717, 13, 0, 6, 15, 14},
/* O */ {744, 13, 1, 6, 13, 14},
/* P */ {767, 11, 0, 6, 12, 14},
/* Q */ {788, 13, 1, 6, 12, 17},
/* R */ {814, 13, 0, 6, 13, 14},
/* S */ {837, 10, 0, 6, 10, 14},
/* T */ {855, 11, 1, 6, 12, 14},
/* U */ {876, 14, 2, 6, 13, 14},
/* V */ {899, 13, 2, 6, 13, 13},
/* W */ {921, 18, 2, 6, 17, 13},
/* X */ {949, 13, 0, 6, 14, 14},
/* Y */ {974, 12, 2, 6, 12, 14},
/* Z */ {995, 11, -1, 6, 11, 14},
/* [ */ {1015, 6, -1, 6, 8, 16},
/* \ */ {1031, 8, 2, 6, 5, 13},
/* ] */ {1040, 6, -2, 6, 8, 16},
/* ^ */ {1056, 11, 1, 6, 9, 7},
/* _ */ {1064, 9, 0, 21, 10, 1},
/* ` */ {1066, 6, 2, 6, 4, 3},
/* a */ {1068, 10, 0, 10, 9, 10},
/* b */ {1080, 9, 0, 5, 9, 15},
/* c */ {1097, 8, 0, 10, 8, 10},
/* d */ {1107, 10, 0, 5, 11, 14},
/* e */ {1127, 8, 0, 10, 8, 10},
/* f */ {1137, 9, -2, 5, 11, 18},
/* g */ {1162, 9, 0, 10, 9, 13},
/* h */ {1177, 10, 0, 5, 10, 14},
/* i */ {1195, 6, 1, 6, 5, 14},
/* j */ {1204, 6, -1, 6, 9, 17},
/* k */ {1224, 10, 0, 5, 10, 14},
/* l */ {1242, 6, 1, 5, 5, 14},
/* m */ {1251, 15, 0, 10, 14, 10},
/* n */ {1269, 10, -1, 10, 10, 10},
/* o */ {1282, 9, 0, 10, 9, 10},
/* p */ {1294, 9, -2, 10, 10, 13},
/* q */ {1311, 9, 0, 10, 9, 13},
/* r */ {1326, 8, 0, 10, 8, 9},
/* s */ {1335, 7, -1, 10, 7, 10},
/* t */ {1344, 5, 1, 7, 5, 13},
/* u */ {1353, 10, 1, 9, 9, 10},
/* v */ {1365, 8, 1, 10, 7, 9},
/* w */ {1373, 12, 2, 10, 10, 9},
/* x */ {1385, 9, -1, 10, 10, 10},
/* y */ {1398, 8, -2, 10, 9, 13},
/* z */ {1413, 8, 0, 10, 8, 10},
/* { */ {1423, 7, 0, 5, 9, 18},
/* | */ {1444, 5, 2, 6, 1, 13},
/* } */ {1446, 7, -3, 5, 9, 18},
/* ~ */ {1467, 11, 1, 13, 9, 2},
};

const monoGFX_font_t monoGFX_FreeSerifBoldItalic_9pt = {bitmapBuffer, 1470, glyphs, 20};
