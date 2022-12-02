/******************************************************************************
 @file monoGFX_fontConverter.cpp

 @brief MonoGFX font converter
 
 @author Paweł Pielorz (pawel.pielorz@gmail.com)

 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/

#include <iostream>
#include <ostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>

#include <ft2build.h>
#include FT_FREETYPE_H

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
const std::string asciiToPrint = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

/******************************************************************************
 Local variables
 *****************************************************************************/
static uint8_t bitmapBuffer[UINT16_MAX];
static size_t bitmapBufferSize = 0U;
static std::ostringstream glyphsStream;

static int fontSize;
static std::string fontName;
static std::string sourceFontPath;
static std::string convertedFontPath;

/******************************************************************************
 Local function prototypes
 *****************************************************************************/
static void checkArgs(const int argc, const char* const argv[]);
static void init(FT_Library& library, FT_Face& face, const std::string& sourceFontPath);
static void convertSingleGlyph(FT_Face& face, const char character);

/******************************************************************************
 Public Functions
 *****************************************************************************/

int main(int argc, char* argv[])
{
    FT_Library library;
    FT_Face face;

    try
    {
        checkArgs(argc, argv);
        //std::cout << "Converting font " << sourceFontPath << " to " << convertedFontPath << " with size " << fontSize << std::endl;

        init(library, face, sourceFontPath);

        glyphsStream << "static const monoGFX_glyph_t glyphs[] =" << std::endl << "{" << std::endl;
        for(const char& character : asciiToPrint) 
        {
            convertSingleGlyph(face, character);
        }
        glyphsStream << "};" << std::endl << std::endl;

        std::fstream convertedFont (convertedFontPath.c_str(), std::fstream::out);
        convertedFont << "#include \"unihal/gfx/monogfx/monogfx.h\"" << std::endl << std::endl;
        convertedFont << "static const uint8_t bitmapBuffer[" << std::dec << bitmapBufferSize << "] =" << std::endl << "{" << std::endl << "    ";
        for(auto i = 0U; i < bitmapBufferSize; i++)
        {
            convertedFont << "0x" << std::setfill('0') << std::setw(2) << std::hex << (int) bitmapBuffer[i] << ",";
            if(((i + 1) % 16) == 0)
            {
                convertedFont << "\n    ";
            }
        }
        convertedFont << std::endl << "};" << std::endl << std::endl;
        convertedFont << glyphsStream.str();
        convertedFont << "const monoGFX_font_t monoGFX_" << std::dec << fontName << "_" << fontSize << "pt = {bitmapBuffer, " << (int) bitmapBufferSize;
        convertedFont << ", glyphs, 20};" << std::endl; //TODO 20 yAdvance

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
static void checkArgs(const int argc, const char* const argv[])
{
    if (argc != 5)
    {
        throw std::runtime_error("Wrong arguments, usage: ./monoGFX_fontConverter size fontName sourceFontPath convertedFontPath");
    }

    std::istringstream fontSizeStream(argv[1]);
    if (!(fontSizeStream >> fontSize))
    {
        throw std::runtime_error("Given font size is not a number");
    }

    if(fontSize < 8 || fontSize > 40)
    {
        throw std::runtime_error("Font size shall be between 8 and 40");
    }

    fontName.assign(argv[2]);
    sourceFontPath.assign(argv[3]);
    convertedFontPath.assign(argv[4]);
}

static void init(FT_Library& library, FT_Face& face, const std::string& sourceFontPath)
{
    auto ftStatus = FT_Init_FreeType(&library);
    if (ftStatus)
    {
        throw std::runtime_error("FT_Init_FreeType error: " + std::to_string(ftStatus));
    }

    ftStatus = FT_New_Face(library, sourceFontPath.c_str(), 0, &face);
    if (ftStatus)
    {
        throw std::runtime_error("FT_New_Face error: " + std::to_string(ftStatus));
    }

    ftStatus = FT_Set_Char_Size(face, fontSize * 64, 0, 150, 0);
    if (ftStatus)
    {
        throw std::runtime_error("FT_Set_Char_Size error: " + std::to_string(ftStatus));
    }
}

static void convertSingleGlyph(FT_Face& face, const char character)
{
    FT_UInt glyphIndex = FT_Get_Char_Index(face, character);
    auto ftStatus = FT_Load_Glyph(face, glyphIndex, FT_LOAD_TARGET_MONO);
    if (ftStatus)
    {
        throw std::runtime_error("FT_New_Face error: " + std::to_string(ftStatus));
    }

    ftStatus = FT_Render_Glyph(face->glyph, FT_RENDER_MODE_MONO);
    if (ftStatus)
    {
        throw std::runtime_error("FT_Render_Glyph error: " + std::to_string(ftStatus));
    }

    const FT_Bitmap& bitmap = face->glyph->bitmap;
    const size_t bitmapOffset = bitmapBufferSize;
    const uint8_t xAdvance = (int8_t) (face->glyph->metrics.horiAdvance / 64);
    const int8_t xOffset = (int8_t) (face->glyph->metrics.horiBearingX / 64);
    const int8_t yOffset = (uint8_t) ((face->glyph->metrics.vertAdvance - face->glyph->metrics.horiBearingY) / 64);
    const uint8_t width = (uint8_t) bitmap.width;
    const uint8_t height = (uint8_t) bitmap.rows;

    glyphsStream << "/* " << character << " */ {" << (int) bitmapOffset << ", " << (int) xAdvance << ", " << (int) xOffset << ", " << (int) yOffset;
    glyphsStream << ", " << (int) width << ", " << (int) height << "}," << std::endl;

    for(auto row = 0U; row < bitmap.rows; row++)
    {
        for(auto column = 0U; column < bitmap.width; column++)
        {
            size_t fontBitmapByteOffset = bitmapOffset + (bitmap.width * row + column) / 8;
            uint8_t fontBitmapBitOffset = (bitmap.width * row + column) % 8;
            size_t sourceByteOffset = row * bitmap.pitch + column / 8;
            uint8_t sourceByte = bitmap.buffer[sourceByteOffset];
            uint8_t sourceBitPosition = 7 - column % 8;
            bool bitSet = (1 << sourceBitPosition) & sourceByte;

            if(bitSet)
            {
                bitmapBuffer[fontBitmapByteOffset] |= (1 << fontBitmapBitOffset);
            }
        }
    }
    bitmapBufferSize += bitmap.rows * bitmap.width / 8 + (bitmap.width % 8 + 7) / 8;
}
