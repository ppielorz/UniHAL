#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1212] =
{
    0x00,0xff,0x5f,0xc1,0x03,0xd3,0x24,0x49,0x12,0x88,0x10,0x21,0x42,0xe4,0x1f,0x09,
    0x13,0x22,0xff,0x89,0x10,0x21,0x41,0x02,0x08,0x3e,0x6b,0x4b,0x0b,0x0f,0x0e,0x3c,
    0x78,0xc8,0xc9,0xc9,0x6b,0x3e,0x08,0x38,0x84,0xf3,0x70,0x24,0x0c,0x05,0x43,0xc1,
    0x28,0x27,0x6b,0x3a,0x99,0x40,0x23,0xc8,0x08,0x31,0x42,0x4c,0x08,0x0e,0x70,0x00,
    0x13,0x60,0x02,0x4c,0x80,0xf7,0x60,0x0c,0x8f,0x30,0x13,0x63,0x61,0x18,0x0c,0x83,
    0xe3,0xe8,0xf3,0x00,0xff,0x01,0x00,0x13,0x23,0xc6,0x18,0x63,0x0c,0x61,0x08,0x82,
    0x83,0x10,0x84,0x31,0xc6,0x18,0x63,0x84,0x88,0x08,0x86,0x51,0x5a,0x4e,0x6d,0x18,
    0x10,0x20,0x40,0x80,0xf0,0x1f,0x02,0x04,0x08,0x10,0x00,0x36,0x05,0x0f,0x0f,0x10,
    0x23,0x84,0x08,0x21,0x42,0x88,0x11,0x00,0x38,0x8c,0x19,0x1b,0x3c,0x78,0xf0,0xe0,
    0xc1,0x83,0x07,0x1b,0x23,0x86,0x03,0x80,0x39,0xc6,0x18,0x63,0x8c,0x31,0xc6,0x3c,
    0x3c,0x72,0x61,0x60,0x60,0x20,0x30,0x10,0x08,0x04,0x82,0x7f,0x3c,0x73,0x60,0x60,
    0x30,0x38,0x7c,0xe0,0xc0,0xc0,0xc0,0x60,0x1f,0x40,0x60,0x78,0x68,0x64,0x64,0x62,
    0x61,0xfe,0x60,0x60,0x60,0x00,0xf0,0x08,0x04,0x3c,0x78,0xe0,0xc0,0xc0,0xc0,0xc0,
    0x40,0x20,0x1f,0xe0,0x38,0x0c,0x06,0x06,0x3b,0x67,0xc3,0xc3,0xc3,0xc3,0xc6,0x66,
    0x3c,0xfe,0xc1,0x41,0x40,0x40,0x20,0x20,0x20,0x10,0x10,0x10,0x08,0x08,0x3c,0xe6,
    0xc3,0xc3,0x67,0x3c,0x38,0x76,0xe3,0xc3,0xc3,0x66,0x3c,0x3c,0x66,0x43,0xc3,0xc3,
    0xc3,0xc6,0xfc,0x60,0x60,0x70,0x38,0x1c,0x06,0x0f,0xc0,0x03,0x1b,0x00,0x80,0x24,
    0x05,0x00,0x81,0xc3,0xf1,0x30,0x60,0x80,0x03,0x38,0xc0,0x01,0x02,0xff,0x01,0x00,
    0x00,0xf0,0x1f,0x01,0x0e,0x70,0x80,0x03,0x1c,0x38,0x1c,0x0e,0x07,0x02,0x00,0xbe,
    0x70,0x18,0x0c,0x06,0x41,0x20,0x10,0x08,0x00,0x83,0x01,0xf0,0x03,0x83,0x30,0x20,
    0xe3,0x3d,0x26,0x47,0xe4,0x8c,0x9c,0x89,0x33,0xc9,0xdc,0x30,0x00,0x0c,0x02,0x3f,
    0x00,0x40,0x00,0x18,0x80,0x03,0xd0,0x00,0x1a,0x20,0x03,0xc4,0x40,0x18,0xf8,0x87,
    0xc1,0x10,0x30,0x03,0xf6,0xe0,0x01,0xff,0x61,0x18,0x83,0x19,0xcc,0x60,0x86,0xf1,
    0x83,0x61,0x0c,0x66,0x30,0x83,0x19,0xf6,0x1f,0xf8,0x64,0xb8,0x81,0x05,0x38,0x80,
    0x01,0x0c,0x60,0x00,0x03,0x30,0x80,0x01,0x19,0x84,0x1f,0xff,0x81,0xe1,0x30,0x38,
    0x06,0xc6,0x80,0x19,0x30,0x03,0x66,0xc0,0x0c,0x98,0x81,0x31,0x30,0x86,0xf3,0x1f,
    0x00,0xff,0x33,0x90,0x01,0x0c,0x60,0x00,0x83,0xf8,0xc7,0x20,0x06,0x30,0x80,0x81,
    0x0c,0xf4,0x3f,0xff,0x1b,0x68,0x80,0x01,0x06,0x18,0xe4,0x9f,0x41,0x06,0x18,0x60,
    0x80,0x01,0x0f,0x00,0xf0,0xc4,0x70,0x06,0x66,0x40,0x03,0x30,0x00,0x03,0x3f,0x60,
    0x03,0x36,0x60,0x06,0xc6,0x60,0xf0,0x01,0x0f,0x6f,0x60,0x06,0x66,0x60,0x06,0x66,
    0x60,0xfe,0x67,0x60,0x06,0x66,0x60,0x06,0x66,0x60,0x0f,0x0f,0x6f,0x66,0x66,0x66,
    0x66,0x66,0x0f,0x3c,0x86,0x61,0x18,0x86,0x61,0x18,0x86,0x6d,0x0f,0x8f,0x6f,0x30,
    0x86,0x61,0x04,0x26,0x60,0x01,0x3e,0x60,0x07,0xe6,0x60,0x1c,0x86,0x63,0x70,0x8f,
    0x0f,0x0f,0x30,0x80,0x01,0x0c,0x60,0x00,0x03,0x18,0xc0,0x00,0x06,0x30,0x80,0x01,
    0x0d,0xf6,0x3f,0x0f,0xe0,0x1c,0x70,0x1c,0x70,0x3c,0x68,0x34,0x68,0x74,0x6c,0x64,
    0x64,0xe4,0x66,0xc4,0x62,0xc4,0x63,0x84,0x61,0x84,0x61,0x8e,0xf0,0x07,0xee,0x40,
    0x1e,0xa4,0x41,0x3a,0x24,0x47,0xe2,0x24,0x5c,0x82,0x25,0x70,0x02,0x27,0x60,0x07,
    0x04,0xf0,0xc1,0x30,0x06,0x66,0x60,0x03,0x3c,0xc0,0x03,0x3c,0xc0,0x03,0x6c,0x60,
    0x06,0xc6,0x30,0xf8,0x00,0x7f,0x8c,0x19,0x36,0x6c,0xd8,0xb0,0x31,0x3f,0x06,0x0c,
    0x18,0x30,0xf0,0x00,0xf8,0xc1,0x30,0x06,0x66,0x40,0x03,0x3c,0xc0,0x03,0x3c,0xc0,
    0x03,0x6c,0x60,0x06,0x86,0x10,0xf0,0x00,0x0e,0x80,0x03,0xe0,0x7f,0x30,0x86,0x61,
    0x0c,0x63,0x18,0x63,0xf8,0xc1,0x06,0x66,0x30,0x86,0x71,0x0c,0xf7,0x70,0xb8,0x88,
    0x19,0x32,0xe8,0x80,0x07,0x1c,0x70,0xc0,0x03,0x0b,0x36,0xa6,0x07,0xff,0x3f,0xc6,
    0x61,0x08,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0xf0,
    0x00,0x0f,0x6e,0x40,0x06,0x64,0x40,0x06,0x64,0x40,0x06,0x64,0x40,0x06,0x64,0x40,
    0x06,0xc4,0x20,0xf8,0x01,0x1f,0xde,0x01,0x31,0x10,0x0e,0x82,0x41,0x30,0x04,0x8c,
    0x80,0x09,0x60,0x01,0x2c,0x00,0x03,0x60,0x00,0x04,0x00,0xdf,0xc7,0x3b,0x0e,0xc6,
    0x30,0x08,0xc3,0x20,0x18,0x47,0x60,0x1c,0x81,0xd1,0x04,0x2c,0x0b,0xb0,0x2c,0x80,
    0xe1,0x00,0x86,0x01,0x18,0x06,0x20,0x10,0x00,0x3f,0x9e,0x83,0x61,0x10,0x18,0x01,
    0x17,0xc0,0x01,0x30,0x00,0x0d,0x90,0x03,0x61,0x30,0x18,0x02,0xf7,0xf1,0x01,0x3f,
    0x9e,0x01,0x61,0x10,0x1c,0x01,0x23,0xc0,0x02,0x30,0x00,0x06,0xc0,0x00,0x18,0x00,
    0x03,0x60,0x00,0x1e,0x00,0xfc,0x67,0x30,0x02,0x03,0x18,0xc0,0x00,0x0c,0x60,0x00,
    0x03,0x38,0x80,0x81,0x1c,0xe8,0x40,0xfe,0x07,0x3f,0x33,0x33,0x33,0x33,0x33,0x33,
    0xf3,0x61,0x08,0x21,0x08,0x21,0x08,0x21,0x0c,0x01,0xcf,0xcc,0xcc,0xcc,0xcc,0xcc,
    0xcc,0xfc,0x10,0x38,0x28,0x64,0x44,0xc2,0x82,0xff,0x03,0x21,0x04,0x9e,0x19,0x0c,
    0xc6,0x93,0xcd,0x66,0x7e,0x04,0x0e,0x18,0x30,0x60,0xc0,0x8e,0x33,0xc3,0x86,0x0d,
    0x1b,0x36,0x64,0x8c,0x07,0x78,0xc6,0x02,0x03,0x03,0x03,0x07,0xc6,0x3c,0x80,0xc0,
    0x01,0x03,0x06,0x8c,0x9b,0x39,0x61,0xc3,0x86,0x0d,0x1b,0x66,0x8c,0x1f,0x38,0x66,
    0xc2,0xff,0x03,0x03,0x07,0xc6,0x3c,0xf0,0x08,0x0c,0x0c,0x1e,0x0c,0x0c,0x0c,0x0c,
    0x0c,0x0c,0x0c,0x1f,0x38,0x90,0x6f,0x8c,0x31,0xce,0xe0,0x41,0x80,0x00,0xfe,0x08,
    0x34,0xd0,0x21,0x7e,0x00,0x04,0x1c,0x60,0x80,0x01,0x06,0xd8,0xe3,0x98,0x61,0x86,
    0x19,0x66,0x98,0x61,0x86,0x3d,0x0f,0x0c,0x00,0xe4,0x18,0x63,0x8c,0xb1,0x0f,0x18,
    0x00,0xcc,0x31,0xc6,0x18,0x63,0x8c,0x31,0x3a,0x04,0x0e,0x18,0x30,0x60,0xc0,0xbc,
    0x11,0x13,0x1e,0x3c,0xd8,0x30,0x63,0xec,0x3d,0x74,0x66,0x66,0x66,0x66,0x66,0xf6,
    0x77,0x8e,0x73,0x66,0x8c,0x19,0x63,0xc6,0x98,0x31,0x66,0x8c,0x19,0x63,0xef,0x3d,
    0x77,0x9c,0x19,0x33,0x66,0xcc,0x98,0x31,0x63,0xef,0x01,0x7c,0x8c,0x0d,0x1f,0x3c,
    0x78,0xf0,0x61,0x63,0x7c,0x00,0x77,0x6e,0xc6,0xc6,0xc6,0xc6,0x46,0x66,0x3e,0x06,
    0x06,0x06,0x0f,0x78,0x19,0x26,0xd8,0x60,0x83,0x0d,0x36,0x98,0x61,0xfc,0x01,0x06,
    0x18,0x60,0xc0,0x03,0xb6,0x63,0x18,0x86,0x61,0x18,0x0f,0x6e,0x1c,0x0e,0x1e,0x1e,
    0xcf,0x1d,0xc4,0x3c,0x63,0x8c,0x31,0xc6,0x70,0xe7,0x8c,0x19,0x33,0x66,0xcc,0x98,
    0x31,0x63,0xfc,0x01,0xcf,0x0d,0x11,0x62,0xc2,0x04,0x07,0x0e,0x08,0x10,0x00,0xef,
    0xd9,0x08,0x19,0x23,0x62,0xc2,0x4c,0x50,0x0b,0xce,0xc0,0x18,0x10,0x01,0xef,0x88,
    0xb0,0xc0,0x00,0x03,0x07,0x19,0x61,0xe7,0x01,0xcf,0x0d,0x19,0x62,0xc2,0x04,0x0b,
    0x0e,0x18,0x10,0x20,0x40,0x40,0x70,0x00,0x7e,0x62,0x30,0x10,0x18,0x0c,0x8c,0x86,
    0x7f,0x98,0x31,0xc6,0x18,0x63,0x83,0x31,0xc6,0x18,0x63,0x18,0xff,0x1f,0xc3,0x18,
    0x63,0x8c,0x31,0xd8,0x18,0x63,0x8c,0x31,0x03,0x1e,0xc5,0x01,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 5
 *  X offset: 0, Y offset: 0
 *  X size: 1, Y size: 1
 *       
 ********************/
{0, 5, 0, 0, 1, 1},

/********************
 *  Character: '!', X advance: 6
 *  X offset: 2, Y offset: -12
 *  X size: 2, Y size: 13
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    #     
 *    #     
 *    #     
 *          
 *          
 *    ##    
 *    ##    
 ********************/
{1, 6, 2, -12, 2, 13},

/********************
 *  Character: '"', X advance: 8
 *  X offset: 1, Y offset: -12
 *  X size: 6, Y size: 5
 *   ##  #   
 *   ##  #   
 *    #  #   
 *    #  #   
 *    #  #   
 ********************/
{5, 8, 1, -12, 6, 5},

/********************
 *  Character: '#', X advance: 9
 *  X offset: 0, Y offset: -12
 *  X size: 9, Y size: 13
 *     #   # 
 *     #   # 
 *     #   # 
 *     #   # 
 *   ########
 *     #  #  
 *    ##  #  
 *    #   #  
 *  #########
 *    #   #  
 *    #   #  
 *    #  #   
 *    #  #   
 ********************/
{9, 9, 0, -12, 9, 13},

/********************
 *  Character: '$', X advance: 10
 *  X offset: 1, Y offset: -13
 *  X size: 8, Y size: 15
 *      #      
 *    #####    
 *   ## # ##   
 *   ## #  #   
 *   ## #      
 *   ####      
 *    ###      
 *     ####    
 *      ####   
 *      #  ##  
 *   #  #  ##  
 *   #  #  ##  
 *   ## # ##   
 *    #####    
 *      #      
 ********************/
{24, 10, 1, -13, 8, 15},

/********************
 *  Character: '%', X advance: 16
 *  X offset: 1, Y offset: -12
 *  X size: 14, Y size: 13
 *      ###    #     
 *    ###  ####      
 *   ###   #  #      
 *   ##    # #       
 *   ##    # #       
 *   ##   # #  ###   
 *    #  ## # ##  #  
 *    ###  #  ##  #  
 *         # ##   #  
 *        #  ##   #  
 *       #   ##   #  
 *       #   ##  #   
 *      #     ###    
 ********************/
{39, 16, 1, -12, 14, 13},

/********************
 *  Character: '&', X advance: 15
 *  X offset: 1, Y offset: -12
 *  X size: 13, Y size: 13
 *       ###        
 *      ##  #       
 *      ##  #       
 *      ##  #       
 *      #### ####   
 *       ##   ##    
 *     ####   #     
 *    ##  ##  #     
 *   ##   ## #      
 *   ##    ##       
 *   ##    ##       
 *   ###   ###   #  
 *    #####  ####   
 ********************/
{62, 15, 1, -12, 13, 13},

/********************
 *  Character: ''', X advance: 4
 *  X offset: 1, Y offset: -12
 *  X size: 2, Y size: 5
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   #   
 ********************/
{84, 4, 1, -12, 2, 5},

/********************
 *  Character: '(', X advance: 6
 *  X offset: 1, Y offset: -12
 *  X size: 5, Y size: 16
 *         
 *      ## 
 *     #   
 *    ##   
 *    #    
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *    #    
 *    ##   
 *     #   
 *      #  
 *       # 
 ********************/
{86, 6, 1, -12, 5, 16},

/********************
 *  Character: ')', X advance: 6
 *  X offset: 0, Y offset: -11
 *  X size: 5, Y size: 16
 *  ##    
 *    #   
 *    #   
 *     #  
 *     ## 
 *     ## 
 *     ## 
 *     ## 
 *     ## 
 *     ## 
 *     ## 
 *     #  
 *     #  
 *    #   
 *   #    
 *  #     
 ********************/
{96, 6, 0, -11, 5, 16},

/********************
 *  Character: '*', X advance: 10
 *  X offset: 3, Y offset: -12
 *  X size: 6, Y size: 8
 *      ##       
 *      ##       
 *     # #  #    
 *      ## #     
 *      ###      
 *     # # ##    
 *      ##       
 *      ##       
 ********************/
{106, 10, 3, -12, 6, 8},

/********************
 *  Character: '+', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 9, Y size: 9
 *       #      
 *       #      
 *       #      
 *       #      
 *   #########  
 *       #      
 *       #      
 *       #      
 *       #      
 ********************/
{112, 11, 1, -8, 9, 9},

/********************
 *  Character: ',', X advance: 5
 *  X offset: 1, Y offset: -1
 *  X size: 3, Y size: 5
 *    ##  
 *    ##  
 *     #  
 *    #   
 *        
 ********************/
{123, 5, 1, -1, 3, 5},

/********************
 *  Character: '-', X advance: 6
 *  X offset: 1, Y offset: -4
 *  X size: 4, Y size: 1
 *   ####  
 ********************/
{125, 6, 1, -4, 4, 1},

/********************
 *  Character: '.', X advance: 5
 *  X offset: 1, Y offset: -1
 *  X size: 2, Y size: 2
 *   ##   
 *   ##   
 ********************/
{126, 5, 1, -1, 2, 2},

/********************
 *  Character: '/', X advance: 6
 *  X offset: 0, Y offset: -12
 *  X size: 5, Y size: 13
 *      # 
 *     ## 
 *     #  
 *     #  
 *     #  
 *    #   
 *    #   
 *    #   
 *   #    
 *   #    
 *   #    
 *  ##    
 *  #     
 ********************/
{127, 6, 0, -12, 5, 13},

/********************
 *  Character: '0', X advance: 10
 *  X offset: 0, Y offset: -12
 *  X size: 9, Y size: 13
 *     ###    
 *   ##   ##  
 *   ##   ##  
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *   ##   ##  
 *    #   ##  
 *     ###    
 ********************/
{136, 10, 0, -12, 9, 13},

/********************
 *  Character: '1', X advance: 9
 *  X offset: 2, Y offset: -13
 *  X size: 5, Y size: 14
 *             
 *      ##     
 *     ###     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *     ####    
 ********************/
{151, 9, 2, -13, 5, 14},

/********************
 *  Character: '2', X advance: 10
 *  X offset: 0, Y offset: -11
 *  X size: 8, Y size: 12
 *    ####    
 *   #  ###   
 *  #    ##   
 *       ##   
 *       ##   
 *       #    
 *      ##    
 *      #     
 *     #      
 *    #       
 *   #     #  
 *  #######   
 ********************/
{160, 10, 0, -11, 8, 12},

/********************
 *  Character: '3', X advance: 10
 *  X offset: 0, Y offset: -12
 *  X size: 8, Y size: 13
 *    ####    
 *  ##  ###   
 *       ##   
 *       ##   
 *      ##    
 *     ###    
 *    #####   
 *       ###  
 *        ##  
 *        ##  
 *        ##  
 *       ##   
 *  #####     
 ********************/
{172, 10, 0, -12, 8, 13},

/********************
 *  Character: '4', X advance: 9
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *         #  
 *        ##  
 *      ####  
 *      # ##  
 *     #  ##  
 *     #  ##  
 *    #   ##  
 *   #    ##  
 *    ####### 
 *        ##  
 *        ##  
 *        ##  
 ********************/
{185, 9, 1, -11, 8, 12},

/********************
 *  Character: '5', X advance: 9
 *  X offset: 0, Y offset: -13
 *  X size: 8, Y size: 14
 *           
 *      #### 
 *     #     
 *    #      
 *    ####   
 *     ####  
 *       ### 
 *        ## 
 *        ## 
 *        ## 
 *        ## 
 *        #  
 *       #   
 *  #####    
 ********************/
{197, 9, 0, -13, 8, 14},

/********************
 *  Character: '6', X advance: 10
 *  X offset: 1, Y offset: -13
 *  X size: 8, Y size: 14
 *        ###  
 *      ###    
 *     ##      
 *    ##       
 *    ##       
 *   ## ###    
 *   ###  ##   
 *   ##    ##  
 *   ##    ##  
 *   ##    ##  
 *   ##    ##  
 *    ##   ##  
 *    ##  ##   
 *     ####    
 ********************/
{211, 10, 1, -13, 8, 14},

/********************
 *  Character: '7', X advance: 10
 *  X offset: 0, Y offset: -12
 *  X size: 8, Y size: 13
 *   #######  
 *  #     ##  
 *  #     #   
 *        #   
 *        #   
 *       #    
 *       #    
 *       #    
 *      #     
 *      #     
 *      #     
 *     #      
 *     #      
 ********************/
{225, 10, 0, -12, 8, 13},

/********************
 *  Character: '8', X advance: 10
 *  X offset: 1, Y offset: -12
 *  X size: 8, Y size: 13
 *     ####    
 *    ##  ###  
 *   ##    ##  
 *   ##    ##  
 *   ###  ##   
 *     ####    
 *      ###    
 *    ## ###   
 *   ##   ###  
 *   ##    ##  
 *   ##    ##  
 *    ##  ##   
 *     ####    
 ********************/
{238, 10, 1, -12, 8, 13},

/********************
 *  Character: '9', X advance: 9
 *  X offset: 1, Y offset: -12
 *  X size: 8, Y size: 14
 *     ####   
 *    ##  ##  
 *   ##    #  
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *    ##   ## 
 *     ###### 
 *        ##  
 *        ##  
 *       ###  
 *      ###   
 *     ###    
 *    ##      
 ********************/
{251, 9, 1, -12, 8, 14},

/********************
 *  Character: ':', X advance: 5
 *  X offset: 1, Y offset: -8
 *  X size: 2, Y size: 9
 *   ##   
 *   ##   
 *        
 *        
 *        
 *        
 *        
 *   ##   
 *   ##   
 ********************/
{265, 5, 1, -8, 2, 9},

/********************
 *  Character: ';', X advance: 5
 *  X offset: 1, Y offset: -8
 *  X size: 3, Y size: 12
 *   ##   
 *   ##   
 *        
 *        
 *        
 *        
 *        
 *     #  
 *     #  
 *     #  
 *     #  
 *    #   
 ********************/
{268, 5, 1, -8, 3, 12},

/********************
 *  Character: '<', X advance: 11
 *  X offset: 0, Y offset: -9
 *  X size: 9, Y size: 10
 *          #  
 *        ###  
 *      ###    
 *   ####      
 *  ##         
 *  ##         
 *   ###       
 *      ###    
 *        ###  
 *          #  
 ********************/
{273, 11, 0, -9, 9, 10},

/********************
 *  Character: '=', X advance: 11
 *  X offset: 0, Y offset: -6
 *  X size: 9, Y size: 5
 *  #########  
 *             
 *             
 *             
 *  #########  
 ********************/
{285, 11, 0, -6, 9, 5},

/********************
 *  Character: '>', X advance: 11
 *  X offset: 0, Y offset: -9
 *  X size: 9, Y size: 10
 *  #          
 *  ###        
 *    ###      
 *      ###    
 *        ###  
 *        ###  
 *      ###    
 *    ###      
 *  ###        
 *  #          
 ********************/
{291, 11, 0, -9, 9, 10},

/********************
 *  Character: '?', X advance: 8
 *  X offset: 1, Y offset: -12
 *  X size: 7, Y size: 13
 *    #####  
 *   #    ## 
 *   #    ## 
 *        ## 
 *        ## 
 *        #  
 *       #   
 *       #   
 *       #   
 *       #   
 *           
 *      ##   
 *      ##   
 ********************/
{303, 8, 1, -12, 7, 13},

/********************
 *  Character: '@', X advance: 16
 *  X offset: 2, Y offset: -12
 *  X size: 13, Y size: 13
 *        ######      
 *       ##     #     
 *      ##       #    
 *     ##   #### ##   
 *    ##   ##  #  #   
 *    ##   #   #  #   
 *    ##  ##   #  #   
 *    ##  ##  #   #   
 *    ##  ##  #  #    
 *     ##  ### ##     
 *      ##            
 *       ##     #     
 *        ######      
 ********************/
{315, 16, 2, -12, 13, 13},

/********************
 *  Character: 'A', X advance: 14
 *  X offset: 0, Y offset: -12
 *  X size: 13, Y size: 13
 *        #       
 *        ##      
 *       ###      
 *       # ##     
 *       # ##     
 *      #  ##     
 *      #   ##    
 *     #    ##    
 *     ########   
 *    ##     ##   
 *    #       ##  
 *   ##       ##  
 *  ####     #### 
 ********************/
{337, 14, 0, -12, 13, 13},

/********************
 *  Character: 'B', X advance: 12
 *  X offset: 0, Y offset: -12
 *  X size: 11, Y size: 13
 *  #########   
 *    ##    ##  
 *    ##     ## 
 *    ##     ## 
 *    ##     ## 
 *    ##    ##  
 *    ######    
 *    ##    ##  
 *    ##     ## 
 *    ##     ## 
 *    ##     ## 
 *    ##    ##  
 *  #########   
 ********************/
{359, 12, 0, -12, 11, 13},

/********************
 *  Character: 'C', X advance: 13
 *  X offset: 1, Y offset: -12
 *  X size: 11, Y size: 13
 *      #####  #  
 *     ##    ###  
 *    ##      ##  
 *    #        #  
 *   ##           
 *   ##           
 *   ##           
 *   ##           
 *   ##           
 *    ##          
 *    ##       #  
 *     ##     #   
 *      ######    
 ********************/
{377, 13, 1, -12, 11, 13},

/********************
 *  Character: 'D', X advance: 14
 *  X offset: 0, Y offset: -12
 *  X size: 13, Y size: 13
 *  #########     
 *    ##    ###   
 *    ##     ###  
 *    ##      ##  
 *    ##       ## 
 *    ##       ## 
 *    ##       ## 
 *    ##       ## 
 *    ##       ## 
 *    ##      ##  
 *    ##      ##  
 *    ##    ###   
 *  #########     
 ********************/
{395, 14, 0, -12, 13, 13},

/********************
 *  Character: 'E', X advance: 12
 *  X offset: 1, Y offset: -12
 *  X size: 11, Y size: 13
 *   ##########  
 *    ##      #  
 *    ##         
 *    ##         
 *    ##         
 *    ##     #   
 *    ########   
 *    ##     #   
 *    ##         
 *    ##         
 *    ##      #  
 *    ##      #  
 *   ##########  
 ********************/
{417, 12, 1, -12, 11, 13},

/********************
 *  Character: 'F', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 10, Y size: 13
 *   ########## 
 *    ##      # 
 *    ##        
 *    ##        
 *    ##        
 *    ##     #  
 *    ########  
 *    ##     #  
 *    ##        
 *    ##        
 *    ##        
 *    ##        
 *   ####       
 ********************/
{435, 11, 1, -12, 10, 13},

/********************
 *  Character: 'G', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *       ####  #   
 *     ##    ###   
 *    ##      ##   
 *    ##       #   
 *   ##            
 *   ##            
 *   ##      ####  
 *   ##       ##   
 *   ##       ##   
 *   ##       ##   
 *    ##      ##   
 *     ##     ##   
 *       #####     
 ********************/
{452, 14, 1, -12, 12, 13},

/********************
 *  Character: 'H', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *   ####    ####  
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *    ##########   
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *    ##      ##   
 *   ####    ####  
 ********************/
{472, 14, 1, -12, 12, 13},

/********************
 *  Character: 'I', X advance: 6
 *  X offset: 1, Y offset: -12
 *  X size: 4, Y size: 13
 *   ####  
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *    ##   
 *   ####  
 ********************/
{492, 6, 1, -12, 4, 13},

/********************
 *  Character: 'J', X advance: 7
 *  X offset: 0, Y offset: -12
 *  X size: 6, Y size: 13
 *    #### 
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *  ## ##  
 *  ####   
 ********************/
{499, 7, 0, -12, 6, 13},

/********************
 *  Character: 'K', X advance: 13
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *   ####   ##### 
 *    ##     ##   
 *    ##    ##    
 *    ##   #      
 *    ##  #       
 *    ## #        
 *    #####       
 *    ## ###      
 *    ##  ###     
 *    ##   ###    
 *    ##    ###   
 *    ##     ###  
 *   ####   ##### 
 ********************/
{509, 13, 1, -12, 12, 13},

/********************
 *  Character: 'L', X advance: 12
 *  X offset: 1, Y offset: -12
 *  X size: 11, Y size: 13
 *   ####        
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##         
 *    ##       # 
 *    ##     ##  
 *   ##########  
 ********************/
{529, 12, 1, -12, 11, 13},

/********************
 *  Character: 'M', X advance: 17
 *  X offset: 0, Y offset: -12
 *  X size: 16, Y size: 13
 *  ####         ### 
 *    ###       ###  
 *    ###       ###  
 *    ####     # ##  
 *    # ##     # ##  
 *    # ###   ## ##  
 *    #  ##   #  ##  
 *    #  ### ##  ##  
 *    #   ## #   ##  
 *    #   ####   ##  
 *    #    ##    ##  
 *    #    ##    ##  
 *   ###   #    #### 
 ********************/
{547, 17, 0, -12, 16, 13},

/********************
 *  Character: 'N', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *   ###      ###  
 *    ###      #   
 *    ####     #   
 *    # ##     #   
 *    # ###    #   
 *    #  ###   #   
 *    #   ###  #   
 *    #    ### #   
 *    #     ## #   
 *    #      ###   
 *    #      ###   
 *    #       ##   
 *   ###       #   
 ********************/
{573, 14, 1, -12, 12, 13},

/********************
 *  Character: 'O', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *       #####     
 *     ##    ##    
 *    ##      ##   
 *    ##      ##   
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *    ##      ##   
 *    ##      ##   
 *     ##    ##    
 *      #####      
 ********************/
{593, 14, 1, -12, 12, 13},

/********************
 *  Character: 'P', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 9, Y size: 13
 *   #######    
 *    ##   ##   
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##   ##   
 *    ######    
 *    ##        
 *    ##        
 *    ##        
 *    ##        
 *   ####       
 ********************/
{613, 11, 1, -12, 9, 13},

/********************
 *  Character: 'Q', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 16
 *      ######     
 *     ##    ##    
 *    ##      ##   
 *    ##       #   
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *   ##        ##  
 *    ##      ##   
 *    ##      ##   
 *      #    #     
 *       ####      
 *        ###      
 *          ###    
 *            ###  
 ********************/
{628, 14, 1, -12, 12, 16},

/********************
 *  Character: 'R', X advance: 13
 *  X offset: 1, Y offset: -12
 *  X size: 11, Y size: 13
 *   #######      
 *    ##   ##     
 *    ##    ##    
 *    ##    ##    
 *    ##    ##    
 *    ##   ##     
 *    ######      
 *    ## ##       
 *    ##  ##      
 *    ##   ##     
 *    ##   ###    
 *    ##    ###   
 *   ####    ###  
 ********************/
{652, 13, 1, -12, 11, 13},

/********************
 *  Character: 'S', X advance: 10
 *  X offset: 0, Y offset: -12
 *  X size: 9, Y size: 13
 *     ### #  
 *    #   ##  
 *   ##    #  
 *   ##     # 
 *   ###      
 *    ####    
 *      ###   
 *       ###  
 *        ### 
 *  #      ## 
 *   #     ## 
 *   ##   ##  
 *   # ####   
 ********************/
{670, 10, 0, -12, 9, 13},

/********************
 *  Character: 'T', X advance: 12
 *  X offset: 0, Y offset: -12
 *  X size: 12, Y size: 13
 *  ############
 *  ##   ##   ##
 *  #    ##    #
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *      ####    
 ********************/
{685, 12, 0, -12, 12, 13},

/********************
 *  Character: 'U', X advance: 14
 *  X offset: 1, Y offset: -12
 *  X size: 12, Y size: 13
 *   ####     ###  
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *    ##       #   
 *     ##     #    
 *      ######     
 ********************/
{705, 14, 1, -12, 12, 13},

/********************
 *  Character: 'V', X advance: 13
 *  X offset: 0, Y offset: -12
 *  X size: 13, Y size: 13
 *  #####    ####
 *   ###       # 
 *    ##      #  
 *    ###     #  
 *     ##     #  
 *     ##    #   
 *      ##   #   
 *      ##  #    
 *       ## #    
 *       ## #    
 *        ##     
 *        ##     
 *        #      
 ********************/
{725, 13, 0, -12, 13, 13},

/********************
 *  Character: 'W', X advance: 18
 *  X offset: 0, Y offset: -12
 *  X size: 18, Y size: 13
 *  ##### #####   ####
 *   ###   ###     ## 
 *    ##    ##     #  
 *    ##    ##     #  
 *     ##   ###   #   
 *     ##   ###   #   
 *     ##   # ##  #   
 *      ## #  ## #    
 *      ## #  ## #    
 *       ##    ###    
 *       ##    ##     
 *       ##    ##     
 *       #      #     
 ********************/
{747, 18, 0, -12, 18, 13},

/********************
 *  Character: 'X', X advance: 14
 *  X offset: 0, Y offset: -12
 *  X size: 13, Y size: 13
 *  ######   #### 
 *    ###     ##  
 *     ##     #   
 *      ##   #    
 *      ### #     
 *       ###      
 *        ##      
 *       # ##     
 *      #  ###    
 *     #    ##    
 *    ##     ##   
 *    #      ###  
 *  #####   ##### 
 ********************/
{777, 14, 0, -12, 13, 13},

/********************
 *  Character: 'Y', X advance: 13
 *  X offset: 0, Y offset: -12
 *  X size: 13, Y size: 13
 *  ######   ####
 *    ##       # 
 *     ##     #  
 *     ###   #   
 *      ##   #   
 *       ## #    
 *        ##     
 *        ##     
 *        ##     
 *        ##     
 *        ##     
 *        ##     
 *       ####    
 ********************/
{799, 13, 0, -12, 13, 13},

/********************
 *  Character: 'Z', X advance: 12
 *  X offset: 0, Y offset: -12
 *  X size: 12, Y size: 13
 *    ######### 
 *   ##     ##  
 *   #      ##  
 *         ##   
 *        ##    
 *        ##    
 *       ##     
 *      ##      
 *     ###      
 *     ##      #
 *    ###      #
 *   ###      # 
 *   ########## 
 ********************/
{821, 12, 0, -12, 12, 13},

/********************
 *  Character: '[', X advance: 6
 *  X offset: 2, Y offset: -12
 *  X size: 4, Y size: 16
 *    ####  
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ####  
 ********************/
{841, 6, 2, -12, 4, 16},

/********************
 *  Character: '\', X advance: 6
 *  X offset: 0, Y offset: -12
 *  X size: 5, Y size: 13
 *  #     
 *  ##    
 *   #    
 *   #    
 *   #    
 *    #   
 *    #   
 *    #   
 *     #  
 *     #  
 *     #  
 *     ## 
 *      # 
 ********************/
{849, 6, 0, -12, 5, 13},

/********************
 *  Character: ']', X advance: 6
 *  X offset: 0, Y offset: -12
 *  X size: 4, Y size: 16
 *  ####  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *    ##  
 *  ####  
 ********************/
{858, 6, 0, -12, 4, 16},

/********************
 *  Character: '^', X advance: 9
 *  X offset: 0, Y offset: -12
 *  X size: 8, Y size: 7
 *      #    
 *     ###   
 *     # #   
 *    #  ##  
 *    #   #  
 *   #    ## 
 *   #     # 
 ********************/
{866, 9, 0, -12, 8, 7},

/********************
 *  Character: '_', X advance: 9
 *  X offset: 0, Y offset: 2
 *  X size: 10, Y size: 1
 *  ##########
 ********************/
{873, 9, 0, 2, 10, 1},

/********************
 *  Character: '`', X advance: 5
 *  X offset: 0, Y offset: -12
 *  X size: 4, Y size: 3
 *  #    
 *   #   
 *    #  
 ********************/
{875, 5, 0, -12, 4, 3},

/********************
 *  Character: 'a', X advance: 8
 *  X offset: 1, Y offset: -8
 *  X size: 7, Y size: 9
 *    ####   
 *   ##  ##  
 *       ##  
 *       ##  
 *     ####  
 *    #  ##  
 *   ##  ##  
 *   ##  ##  
 *    ###### 
 ********************/
{877, 8, 1, -8, 7, 9},

/********************
 *  Character: 'b', X advance: 10
 *  X offset: 0, Y offset: -13
 *  X size: 9, Y size: 14
 *    #       
 *  ###       
 *   ##       
 *   ##       
 *   ##       
 *   ## ###   
 *   ###  ##  
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    #  
 *   ##   ##  
 *    ####    
 ********************/
{885, 10, 0, -13, 9, 14},

/********************
 *  Character: 'c', X advance: 8
 *  X offset: 0, Y offset: -8
 *  X size: 8, Y size: 9
 *     #### 
 *   ##   ##
 *   #      
 *  ##      
 *  ##      
 *  ##      
 *  ###     
 *   ##   ##
 *    ####  
 ********************/
{901, 8, 0, -8, 8, 9},

/********************
 *  Character: 'd', X advance: 9
 *  X offset: 0, Y offset: -13
 *  X size: 9, Y size: 14
 *         # 
 *       ### 
 *        ## 
 *        ## 
 *        ## 
 *    ### ## 
 *   ##  ### 
 *   #    ## 
 *  ##    ## 
 *  ##    ## 
 *  ##    ## 
 *  ##    ## 
 *   ##   ## 
 *    ###### 
 ********************/
{910, 9, 0, -13, 9, 14},

/********************
 *  Character: 'e', X advance: 8
 *  X offset: 0, Y offset: -8
 *  X size: 8, Y size: 9
 *     ###  
 *   ##  ## 
 *   #    ##
 *  ########
 *  ##      
 *  ##      
 *  ###     
 *   ##   ##
 *    ####  
 ********************/
{926, 8, 0, -8, 8, 9},

/********************
 *  Character: 'f', X advance: 7
 *  X offset: 0, Y offset: -12
 *  X size: 8, Y size: 13
 *      ####
 *     #    
 *    ##    
 *    ##    
 *   ####   
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *    ##    
 *  #####   
 ********************/
{935, 7, 0, -12, 8, 13},

/********************
 *  Character: 'g', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 10, Y size: 13
 *     ###    
 *    #  #####
 *   ##   ##  
 *   ##   ##  
 *   ###  ##  
 *     ####   
 *    #       
 *   #        
 *   #######  
 *   #      # 
 *  ##      # 
 *  ###    #  
 *   ######   
 ********************/
{948, 9, 0, -8, 10, 13},

/********************
 *  Character: 'h', X advance: 9
 *  X offset: -1, Y offset: -13
 *  X size: 10, Y size: 14
 *    #       
 *  ###       
 *   ##       
 *   ##       
 *   ##       
 *   ## ####  
 *   ###   ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *   ##    ## 
 *  ####  ####
 ********************/
{965, 9, -1, -13, 10, 14},

/********************
 *  Character: 'i', X advance: 5
 *  X offset: 0, Y offset: -11
 *  X size: 5, Y size: 12
 *    ## 
 *       
 *       
 *     # 
 *   ### 
 *    ## 
 *    ## 
 *    ## 
 *    ## 
 *    ## 
 *    ## 
 *  #####
 ********************/
{983, 5, 0, -11, 5, 12},

/********************
 *  Character: 'j', X advance: 7
 *  X offset: -1, Y offset: -11
 *  X size: 5, Y size: 16
 *     ##  
 *         
 *         
 *     ##  
 *    ###  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     ##  
 *     #   
 *  ###    
 ********************/
{991, 7, -1, -11, 5, 16},

/********************
 *  Character: 'k', X advance: 10
 *  X offset: 1, Y offset: -13
 *  X size: 9, Y size: 14
 *     #       
 *   ###       
 *    ##       
 *    ##       
 *    ##       
 *    ##  #### 
 *    ##   #   
 *    ##  #    
 *    ####     
 *    ####     
 *    ## ##    
 *    ##  ##   
 *    ##   ##  
 *   #### #### 
 ********************/
{1001, 10, 1, -13, 9, 14},

/********************
 *  Character: 'l', X advance: 5
 *  X offset: 0, Y offset: -13
 *  X size: 4, Y size: 14
 *    #  
 *  ###  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *  #### 
 ********************/
{1017, 5, 0, -13, 4, 14},

/********************
 *  Character: 'm', X advance: 15
 *  X offset: 0, Y offset: -8
 *  X size: 14, Y size: 9
 *  ### ###  ###   
 *   ###  ###  ##  
 *   ##   ##   ##  
 *   ##   ##   ##  
 *   ##   ##   ##  
 *   ##   ##   ##  
 *   ##   ##   ##  
 *   ##   ##   ##  
 *  #### #### #### 
 ********************/
{1024, 15, 0, -8, 14, 9},

/********************
 *  Character: 'n', X advance: 9
 *  X offset: -1, Y offset: -8
 *  X size: 9, Y size: 9
 *  ### ###  
 *   ###  ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *  #### ####
 ********************/
{1040, 9, -1, -8, 9, 9},

/********************
 *  Character: 'o', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 9
 *    #####  
 *   ##   ## 
 *  ##    ###
 *  ##     ##
 *  ##     ##
 *  ##     ##
 *  ###    ##
 *   ##   ## 
 *    #####  
 ********************/
{1051, 9, 0, -8, 9, 9},

/********************
 *  Character: 'p', X advance: 10
 *  X offset: 0, Y offset: -8
 *  X size: 8, Y size: 13
 *  ### ###   
 *   ### ##   
 *   ##   ##  
 *   ##   ##  
 *   ##   ##  
 *   ##   ##  
 *   ##   #   
 *   ##  ##   
 *   #####    
 *   ##       
 *   ##       
 *   ##       
 *  ####      
 ********************/
{1062, 10, 0, -8, 8, 13},

/********************
 *  Character: 'q', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 10, Y size: 13
 *     #### # 
 *   ##    ## 
 *   #     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *  ##     ## 
 *   ##    ## 
 *    ####### 
 *         ## 
 *         ## 
 *         ## 
 *        ####
 ********************/
{1075, 9, 0, -8, 10, 13},

/********************
 *  Character: 'r', X advance: 7
 *  X offset: 0, Y offset: -8
 *  X size: 6, Y size: 9
 *   ## ## 
 *   ###   
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *   ##    
 *  ####   
 ********************/
{1092, 7, 0, -8, 6, 9},

/********************
 *  Character: 's', X advance: 7
 *  X offset: 1, Y offset: -8
 *  X size: 6, Y size: 9
 *    ### # 
 *   #   ## 
 *   #    # 
 *   ##     
 *    ####  
 *      ### 
 *   #   ## 
 *   ##  ## 
 *   # ###  
 ********************/
{1099, 7, 1, -8, 6, 9},

/********************
 *  Character: 't', X advance: 5
 *  X offset: 0, Y offset: -10
 *  X size: 5, Y size: 11
 *    #  
 *   ##  
 *  #### 
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *   ##  
 *    ###
 ********************/
{1106, 5, 0, -10, 5, 11},

/********************
 *  Character: 'u', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 9
 *  ###  ### 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *   ##   ## 
 *    #######
 ********************/
{1113, 9, 0, -8, 9, 9},

/********************
 *  Character: 'v', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 9
 *  ####  ###
 *   ##    # 
 *    #    # 
 *    ##  #  
 *    ##  #  
 *     ###   
 *     ###   
 *      #    
 *      #    
 ********************/
{1124, 9, 0, -8, 9, 9},

/********************
 *  Character: 'w', X advance: 13
 *  X offset: 0, Y offset: -8
 *  X size: 13, Y size: 9
 *  #### ####  ##
 *   ##   #    # 
 *   ##   ##   # 
 *    #   ##  #  
 *    ##  ##  #  
 *     # # ## #  
 *     ###  ##   
 *     ##   ##   
 *      #   #    
 ********************/
{1135, 13, 0, -8, 13, 9},

/********************
 *  Character: 'x', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 9
 *  #### ### 
 *    #   #  
 *    ## #   
 *     ##    
 *      ##   
 *     ###   
 *    #  ##  
 *   #    ## 
 *  ###  ####
 ********************/
{1150, 9, 0, -8, 9, 9},

/********************
 *  Character: 'y', X advance: 9
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 13
 *  ####  ###
 *   ##    # 
 *   ##    # 
 *    ##  #  
 *    ##  #  
 *     ## #  
 *     ###   
 *      ##   
 *      #    
 *      #    
 *      #    
 *     #     
 *  ###      
 ********************/
{1161, 9, 0, -8, 9, 13},

/********************
 *  Character: 'z', X advance: 8
 *  X offset: 0, Y offset: -8
 *  X size: 8, Y size: 9
 *   ###### 
 *   #   ## 
 *      ##  
 *      #   
 *     ##   
 *    ##    
 *    ##   #
 *   ##    #
 *  ####### 
 ********************/
{1176, 8, 0, -8, 8, 9},

/********************
 *  Character: '{', X advance: 9
 *  X offset: 2, Y offset: -13
 *  X size: 5, Y size: 17
 *       ##    
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *    ##       
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *      ##     
 *       ##    
 ********************/
{1185, 9, 2, -13, 5, 17},

/********************
 *  Character: '|', X advance: 4
 *  X offset: 1, Y offset: -12
 *  X size: 1, Y size: 13
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 *   #   
 ********************/
{1196, 4, 1, -12, 1, 13},

/********************
 *  Character: '}', X advance: 9
 *  X offset: 2, Y offset: -11
 *  X size: 5, Y size: 17
 *    ##       
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *       ##    
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *     ##      
 *    ##       
 ********************/
{1198, 9, 2, -11, 5, 17},

/********************
 *  Character: '~', X advance: 9
 *  X offset: 0, Y offset: -5
 *  X size: 9, Y size: 2
 *   ####   #
 *   #   ### 
 ********************/
{1209, 9, 0, -5, 9, 2},

};

const monoGFX_font_t monoGFX_FreeSerif_9pt = {bitmapBuffer, 1212, glyphs};
