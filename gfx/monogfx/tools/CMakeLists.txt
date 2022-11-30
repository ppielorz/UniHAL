add_executable(monoGFX_fontConverter monogfx_fontConverter.cpp)

target_link_libraries(monoGFX_fontConverter
    PRIVATE unihal
    PRIVATE monoGFX_consolePrinter
    PRIVATE freetype
)

target_include_directories(monoGFX_fontConverter 
    PRIVATE /usr/include/freetype2
    PRIVATE /usr/include/libpng16
)

add_library(monoGFX_consolePrinter monogfx_consolePrinter.c)
target_link_libraries(monoGFX_consolePrinter PRIVATE unihal)