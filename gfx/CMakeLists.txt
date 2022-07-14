add_library(unihal-gfx  monogfx/monogfx.c
                            monogfx/fonts/freesans_12pt7.c
                            monogfx/fonts/freesans_24pt7.c
                            monogfx/fonts/freesans_18pt7.c
                            monogfx/fonts/freesans_9pt7.c
            )

target_include_directories(unihal-gfx PUBLIC monogfx)