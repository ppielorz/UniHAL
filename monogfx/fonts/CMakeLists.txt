if(ENABLE_MONOGFX_FONT_CONVERTER)
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
            list(APPEND convertedFonts ${convertedFontPath})
        endforeach()
    endforeach()

    add_custom_target(monoGFX_fonts ALL DEPENDS ${convertedFonts})
endif()

file(GLOB fonts *.c)
target_sources(unihal PRIVATE ${fonts})