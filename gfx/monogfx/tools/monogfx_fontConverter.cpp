/******************************************************************************
 @file monoGFX_fontConverter.cpp

 @brief MonoGFX font converter
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <assert.h>

#include <ft2build.h>
#include FT_FREETYPE_H

#include "unihal/gfx/monogfx/monogfx.h"
#include "monogfx_printers.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
const std::string asciiToPrint = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

/******************************************************************************
 Local variables
 *****************************************************************************/
static uint8_t bitmapBuffer[UINT16_MAX];
static monoGFX_glyph_t glyphsBuffer[95];
static monoGFX_font_t testFont = 
{
    .bitmap = bitmapBuffer,
    .bitmapSize = 0U,
    .glyphs = glyphsBuffer,
    .yAdvance = 40
};

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void init(FT_Library& library, FT_Face& face, const std::string& fontPath);
static void convertSingleGlyph(FT_Face& face, const char character);
static uint8_t reverseByte(const uint8_t x);

/******************************************************************************
 Public Functions
 *****************************************************************************/

int main(int argc, char *argv[])
{
    FT_Library library;
    FT_Face face;
    const auto fontPath = "/usr/share/fonts/truetype/freefont/FreeSans.ttf";

    try
    {
        std::cout << "Converting font " << fontPath << std::endl;
        init(library, face, fontPath);
        for(const char& character : asciiToPrint) 
        {
            convertSingleGlyph(face, character);
        }
        std::cout << "Final bitmap size: " << std::dec << testFont.bitmapSize << std::endl;
        monoGFX_t gfx = {0};
        uint8_t gfxBuffer[MONOGFX_BUFFER_SIZE(2000, 100)] = {0};
        extern GFXfont FreeSans9pt7b;
        assert(monoGFX_status_success == monoGFX_init(&gfx, 2000, 100, gfxBuffer, sizeof(gfxBuffer), monoGFX_rotation_none));
        assert(monoGFX_status_success == monoGFX_printNew(&gfx, 0, 0, &testFont, " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"));
        //assert(monoGFX_status_success == monoGFX_printNew(&gfx, 0, 0, &testFont, "~"));
        monoGFX_print(&gfx, 0, 50, &FreeSans9pt7b, " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
        //monoGFX_print(&gfx, 0, 50, &FreeSans9pt7b, "~");
        
        monoGFX_pngPrinter(&gfx, "/home/ppielorz/Drzemlik/source/unihal/gfx/monogfx/test.png");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

/******************************************************************************
 Local Functions
 *****************************************************************************/

void init(FT_Library& library, FT_Face& face, const std::string& fontPath)
{
    auto ftStatus = FT_Init_FreeType(&library);
    if (ftStatus)
    {
        throw std::runtime_error("FT_Init_FreeType error: " + std::to_string(ftStatus));
    }

    ftStatus = FT_New_Face(library, fontPath.c_str(), 0, &face);
    if (ftStatus)
    {
        throw std::runtime_error("FT_New_Face error: " + std::to_string(ftStatus));
    }
    std::cout << "Font family name: " << face->family_name << std::endl;

    ftStatus = FT_Set_Char_Size(
          face,    /* handle to face object         */
          9*64,       /* char_width in 1/64 of points  */
          /*9*64*/0,   /* char_height in 1/64 of points */
          150,     /* horizontal device resolution  */
          0 );   /* vertical device resolution    */
    if (ftStatus)
    {
        throw std::runtime_error("FT_Set_Char_Size error: " + std::to_string(ftStatus));
    }
}



static void convertSingleGlyph(FT_Face& face, const char character)
{
    FT_UInt glyphIndex = FT_Get_Char_Index(face, character);
    auto ftStatus = FT_Load_Glyph(
          face,          /* handle to face object */
          glyphIndex,   /* glyph index           */
          FT_LOAD_TARGET_MONO );  /* load flags, see below */
    if (ftStatus)
    {
        throw std::runtime_error("FT_New_Face error: " + std::to_string(ftStatus));
    }

    ftStatus = FT_Render_Glyph( face->glyph,   /* glyph slot  */
                         FT_RENDER_MODE_MONO ); /* render mode */
 

    const FT_Bitmap& bitmap = face->glyph->bitmap;

    monoGFX_glyph_t* testGlyph = &testFont.glyphs[character - MONOGFX_FIRST_ASCII_CHARACTER];
    testGlyph->bitmapOffset = testFont.bitmapSize;
    testGlyph->xAdvance = (int8_t) (face->glyph->metrics.horiAdvance / 64);
    testGlyph->xOffset = (int8_t) (face->glyph->metrics.horiBearingX / 64);
    //testGlyph->yOffset = (uint8_t) (face->glyph->metrics.height / 64) - bitmap.rows;
    //testGlyph->yOffset = (uint8_t) (face->glyph->metrics.vertBearingY / 64);
    testGlyph->yOffset = (uint8_t) ((face->glyph->metrics.vertAdvance - face->glyph->metrics.horiBearingY) / 64);
    testGlyph->width = (uint8_t) bitmap.width;
    testGlyph->height = (uint8_t) bitmap.rows;


    std::cout << "Rendering '"      << character << "' " \
                << "bitmapOffset: " << std::setw(4) << std::to_string(testGlyph->bitmapOffset) << " " \
                << "xAdvance: "     << std::setw(2) << std::to_string(testGlyph->xAdvance) << " " \
                << "xOffset: "      << std::setw(2) << std::to_string(testGlyph->xOffset) << " " \
                << "yOffset: "      << std::setw(2) << std::to_string(testGlyph->yOffset) << " " \
                << "width: "        << std::setw(2) << std::to_string(testGlyph->width) << " " \
                << "height: "       << std::setw(2) << std::to_string(testGlyph->height) << std::endl;

    for(auto row = 0U; row < bitmap.rows; row++)
    {
        for(auto column = 0U; column < bitmap.width; column++)
        {
            size_t fontBitmapByteOffset = testGlyph->bitmapOffset + (bitmap.width * row + column) / 8;
            uint8_t fontBitmapBitOffset = (bitmap.width * row + column) % 8;
            size_t sourceByteOffset = row * bitmap.pitch + column / 8;
            uint8_t sourceByte = bitmap.buffer[sourceByteOffset];
            uint8_t sourceBitPosition = 7 - column % 8;
            bool bitSet = (1 << sourceBitPosition) & sourceByte;
            //printf("row: %u, column: %u, fontBitmapByteOffset: %lu, fontBitmapBitOffset: %u, sourceByteOffset: %lu, sourceBitPosition: %u, sourceByte: %02X, actual bit %s\n", 
            //row, column, fontBitmapByteOffset, fontBitmapBitOffset, sourceByteOffset, sourceBitPosition, sourceByte, bitSet ? "set" : "not set");

            if(bitSet)
            {
                testFont.bitmap[fontBitmapByteOffset] |= (1 << fontBitmapBitOffset);
            }
        }
    }
    testFont.bitmapSize += bitmap.rows * bitmap.width / 8 + (bitmap.width % 8 + 7) / 8;
}

static uint8_t reverseByte(const uint8_t x)
{
    static const uint8_t lookupTable[] = 
    {
        0x00, 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0,
        0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0,
        0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8,
        0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8,
        0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4,
        0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4,
        0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec,
        0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc,
        0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2,
        0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2,
        0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea,
        0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa,
        0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6,
        0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6,
        0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee,
        0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe,
        0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1,
        0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1,
        0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9,
        0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9,
        0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5,
        0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5,
        0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed,
        0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd,
        0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3,
        0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3,
        0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb,
        0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb,
        0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7,
        0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7,
        0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef,
        0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff,
    };
    return lookupTable[x];
}