add_library(monoGFX_fonts OBJECT)
target_include_directories(monoGFX_fonts PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(unihal PRIVATE monoGFX_fonts)

set(FONT_SIZES 9 12 18 24)
set(FONTS FreeMono FreeMonoBoldOblique FreeSans FreeSansBoldOblique FreeSerif FreeSerifBoldItalic FreeMonoBold
            FreeMonoOblique FreeSansBold FreeSansOblique FreeSerifBold FreeSerifItalic)

foreach(font ${FONTS})
    foreach(fontSize ${FONT_SIZES})
        set(sourceFontPath "${CMAKE_SOURCE_DIR}/thirdparty/fonts/freefont/${font}.ttf")
        set(convertedFontPath "${CMAKE_CURRENT_SOURCE_DIR}/monogfx_${font}_${fontSize}pt.c")
        add_custom_command(OUTPUT "${convertedFontPath}"
            COMMAND monoGFX_fontConverter ${fontSize} ${font} ${sourceFontPath} ${convertedFontPath}
            DEPENDS monoGFX_fontConverter
        )
        target_sources(monoGFX_fonts PRIVATE ${convertedFontPath})
    endforeach()
endforeach()
