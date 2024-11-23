#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[949] =
{
    0x00,0x55,0x55,0xc0,0x77,0x99,0x48,0x24,0x02,0x24,0x12,0x89,0xf4,0x27,0x91,0xfe,
    0x14,0x0a,0x85,0x02,0x00,0x08,0x9e,0x48,0x24,0xe0,0x80,0x81,0xc1,0x71,0x0f,0x81,
    0x00,0x0e,0x13,0x11,0x13,0x0e,0xe0,0x1c,0x33,0x48,0x48,0x48,0x30,0x3c,0x81,0x40,
    0x60,0x58,0xa6,0x62,0x33,0x37,0x97,0x24,0x94,0x92,0x24,0x89,0x44,0x91,0x48,0x92,
    0x94,0x14,0x08,0xc4,0x9a,0x43,0x21,0x01,0x08,0x04,0x02,0xf1,0x47,0x20,0x10,0x08,
    0x6e,0x36,0x13,0xff,0x01,0x3f,0x40,0x20,0x08,0x04,0x81,0x20,0x10,0x0c,0x02,0x41,
    0x20,0x08,0x04,0x00,0x1c,0xd1,0x38,0x18,0x0c,0x06,0x83,0xc1,0xb1,0x88,0x03,0xe4,
    0x14,0x42,0x08,0x21,0x84,0x7c,0x1c,0x51,0x30,0x08,0x04,0x41,0x10,0x04,0x41,0xe0,
    0x0f,0x1e,0x61,0x40,0x40,0x60,0x18,0x60,0x80,0x80,0x80,0x43,0x3c,0x18,0x45,0x49,
    0x52,0x14,0x45,0x3f,0x04,0xe1,0x3e,0x02,0x02,0x02,0x3e,0x42,0x80,0x80,0x80,0x80,
    0x43,0x3c,0x78,0x86,0x40,0x10,0xe8,0x8c,0x86,0xc1,0xa1,0x88,0x03,0x7f,0x20,0x10,
    0x04,0x02,0x41,0x20,0x10,0x08,0x02,0x01,0x1c,0x51,0x30,0x28,0xe2,0x88,0x82,0xc1,
    0xa0,0x88,0x03,0x1c,0x51,0x38,0x18,0x16,0x73,0x81,0x20,0x10,0xe6,0x01,0xff,0x01,
    0xfc,0xee,0x0e,0xe0,0x66,0x13,0x01,0x00,0x81,0xc1,0x60,0x20,0x80,0x00,0x06,0x30,
    0x80,0x01,0xff,0x01,0xfc,0x07,0x03,0x08,0x60,0x00,0x03,0x18,0x18,0x0c,0x06,0x02,
    0x00,0x5e,0x1c,0x82,0x30,0x46,0x00,0x00,0xc0,0x00,0x3c,0x66,0x42,0x41,0x71,0x59,
    0x49,0x49,0xf1,0x01,0x03,0x06,0x7c,0x3c,0x80,0x02,0x14,0x20,0x81,0x08,0x44,0x20,
    0x84,0x3f,0x04,0x11,0xd0,0xe3,0x01,0xff,0x04,0x0b,0x14,0x28,0xc8,0x8f,0x60,0x81,
    0x02,0x05,0xff,0x03,0x78,0x0d,0x0b,0x0c,0x10,0x20,0x40,0x80,0x00,0x02,0x0c,0xe2,
    0x03,0x7f,0x84,0x09,0x12,0x28,0x50,0xa0,0x40,0x81,0x82,0x84,0xfd,0x01,0xff,0x04,
    0x09,0x12,0x20,0xc2,0x87,0x08,0x01,0x02,0x05,0xfe,0x07,0xff,0x05,0x0a,0x14,0x20,
    0xc2,0x87,0x08,0x01,0x02,0x04,0x3c,0x00,0x78,0x19,0x26,0x50,0x00,0x01,0x04,0x10,
    0x7c,0x40,0x02,0x19,0x84,0x0f,0xc7,0x05,0x09,0x12,0x24,0xc8,0x9f,0x20,0x41,0x82,
    0x04,0x1d,0x07,0x9f,0x10,0x42,0x08,0x21,0x84,0x7c,0xf8,0x81,0x00,0x01,0x02,0x04,
    0x48,0x90,0x20,0x41,0x46,0x70,0x00,0xc7,0x09,0x22,0x84,0x0c,0x0a,0xd8,0x20,0x82,
    0x10,0x82,0x08,0x72,0x38,0x1f,0x04,0x04,0x04,0x04,0x04,0x04,0x84,0x84,0x84,0xff,
    0x07,0x37,0x98,0xa2,0x14,0x25,0x25,0x29,0xc9,0x48,0x44,0x02,0x12,0xd0,0xc1,0x01,
    0x87,0x1b,0xa4,0x90,0x42,0x12,0xc9,0x24,0x92,0x50,0x42,0x09,0x76,0x18,0x78,0x10,
    0x22,0x50,0x80,0x01,0x06,0x18,0x60,0x80,0x02,0x11,0x82,0x07,0x7f,0x04,0x09,0x14,
    0x28,0x50,0x90,0x1f,0x01,0x02,0x04,0x3c,0x00,0x78,0x10,0x22,0x50,0x80,0x01,0x06,
    0x18,0x60,0x80,0x02,0x19,0x82,0x07,0x04,0x7c,0x12,0x06,0x7f,0x08,0x26,0x90,0x40,
    0x82,0xf8,0x21,0x84,0x30,0x82,0x08,0x74,0x30,0xbc,0xc6,0x82,0x02,0x04,0x38,0xc0,
    0x80,0x81,0xc3,0x3d,0xff,0x23,0x46,0x84,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0xf0,
    0x01,0x87,0x0b,0x24,0x90,0x40,0x02,0x09,0x24,0x90,0x40,0x02,0x11,0x82,0x07,0x8f,
    0x17,0x10,0x81,0x08,0x42,0x10,0x44,0x20,0x02,0x12,0x50,0x80,0x02,0x08,0x00,0x8f,
    0x17,0x90,0x80,0xc4,0x24,0x25,0x2a,0x51,0x8a,0x32,0x8c,0x61,0x0c,0x43,0x00,0xc7,
    0x09,0x42,0x04,0x12,0x28,0x40,0x80,0x02,0x11,0x84,0x08,0x72,0x3c,0xc7,0x05,0x11,
    0x21,0x82,0x02,0x02,0x04,0x08,0x10,0x20,0xf0,0x01,0x3f,0x21,0x21,0x10,0x08,0x08,
    0x04,0x02,0x82,0x81,0xfe,0x4f,0x92,0x24,0x49,0x92,0x03,0x81,0x80,0x40,0x40,0x20,
    0x20,0x10,0x18,0x08,0x04,0x04,0x02,0x02,0x01,0x27,0x49,0x92,0x24,0xc9,0x03,0x08,
    0x0a,0x49,0x14,0x04,0xff,0x07,0x11,0x01,0x7e,0x00,0x01,0xe2,0x37,0x28,0x50,0x30,
    0xdf,0x03,0x04,0x08,0x10,0xa0,0xc7,0x90,0x40,0x81,0x02,0x05,0x1a,0xda,0x03,0xbc,
    0xc2,0x81,0x01,0x01,0x01,0x82,0x7c,0x80,0x01,0x04,0x10,0x40,0x3c,0x19,0x17,0x50,
    0x40,0x01,0x05,0x64,0x1c,0xcf,0x7c,0x04,0x05,0xfc,0x1f,0x40,0x80,0x61,0x3c,0x78,
    0x02,0x81,0xe0,0x23,0x10,0x08,0x04,0x02,0xe1,0x07,0xbc,0x85,0x05,0x0a,0x14,0x28,
    0x90,0x30,0x5e,0x80,0x00,0x01,0xc3,0x03,0x03,0x04,0x08,0x10,0xa0,0xc7,0x98,0x20,
    0x41,0x82,0x04,0x09,0x3a,0x0e,0x08,0x00,0xc0,0x81,0x40,0x20,0x10,0x08,0xc4,0x1f,
    0x08,0x80,0x0f,0x21,0x84,0x10,0x42,0x08,0xf1,0x03,0x03,0x04,0x08,0x10,0x20,0x4f,
    0x84,0x06,0x07,0x12,0x44,0x08,0x19,0x0f,0x0e,0x04,0x02,0x81,0x40,0x20,0x10,0x08,
    0x04,0xe2,0x0f,0xed,0x26,0x46,0x8c,0x18,0x31,0x62,0xc4,0x89,0x7a,0x8c,0x09,0x12,
    0x24,0x48,0x90,0xa0,0xe3,0x7c,0x8c,0x05,0x0c,0x18,0x30,0xa0,0x31,0x3e,0x7b,0x0c,
    0x09,0x14,0x28,0x50,0xa0,0x21,0x3d,0x02,0x04,0x08,0x78,0x00,0x7c,0x0b,0x16,0x50,
    0x40,0x01,0x05,0x64,0x1c,0x4f,0x00,0x01,0x04,0x10,0xf0,0xe6,0x28,0x30,0x20,0x40,
    0x80,0x00,0x81,0x1f,0xbc,0xc2,0x82,0x1e,0xe0,0x81,0xc3,0x7d,0x02,0x02,0x02,0x3f,
    0x02,0x02,0x02,0x02,0x02,0x82,0x7c,0xc3,0x82,0x82,0x82,0x82,0x82,0xc2,0xbc,0xc7,
    0x0b,0x22,0x08,0x11,0x44,0x20,0x81,0x02,0x0c,0x87,0x07,0x24,0x91,0x2c,0xaa,0xa8,
    0x62,0x0c,0x11,0xcf,0x09,0x21,0x81,0x81,0x83,0x88,0xa0,0xe7,0xc7,0x05,0x09,0x22,
    0x42,0x04,0x05,0x0a,0x08,0x10,0x20,0x20,0xf8,0x01,0x3f,0x21,0x10,0x08,0x04,0x02,
    0x82,0xfe,0x48,0x44,0x44,0x34,0x44,0x44,0xc4,0xff,0x1f,0x21,0x22,0x22,0xc2,0x22,
    0x22,0x32,0x06,0x49,0x70,
};

static const monoGFX_glyph_t glyphs[] =
{
/********************
 *  Character: ' ', X advance: 11
 *  X offset: 0, Y offset: 0
 *  X size: 1, Y size: 1
 *             
 ********************/
{0, 11, 0, 0, 1, 1},

/********************
 *  Character: '!', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 2, Y size: 12
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *                  
 *                  
 *                  
 *       ##         
 ********************/
{1, 11, 5, -11, 2, 12},

/********************
 *  Character: '"', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 7, Y size: 5
 *    ### ###    
 *     #  ##     
 *     #   #     
 *     #   #     
 *     #   #     
 ********************/
{4, 11, 2, -10, 7, 5},

/********************
 *  Character: '#', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 7, Y size: 13
 *     #  #     
 *     #  #     
 *     #  #     
 *     #  #     
 *   #######    
 *     #  #     
 *     #  #     
 *   #######    
 *     # #      
 *     # #      
 *     # #      
 *     # #      
 *              
 ********************/
{9, 11, 1, -11, 7, 13},

/********************
 *  Character: '$', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 13
 *       #       
 *      ####     
 *     #   #     
 *     #   #     
 *     #         
 *      ###      
 *         ##    
 *          #    
 *    #     #    
 *    ##   ##    
 *    # ####     
 *       #       
 *       #       
 ********************/
{21, 11, 2, -11, 7, 13},

/********************
 *  Character: '%', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *    ###       
 *   ##  #      
 *   #   #      
 *   ##  #      
 *    ###       
 *        ###   
 *     ###      
 *   ##  ##     
 *      #  #    
 *      #  #    
 *      #  #    
 *       ##     
 ********************/
{33, 11, 1, -11, 8, 12},

/********************
 *  Character: '&', X advance: 11
 *  X offset: 2, Y offset: -9
 *  X size: 7, Y size: 10
 *      ####     
 *     #         
 *     #         
 *     #         
 *     ##        
 *    ## #  #    
 *    #  # #     
 *    #   ##     
 *    ##  ##     
 *     ### ##    
 ********************/
{45, 11, 2, -9, 7, 10},

/********************
 *  Character: ''', X advance: 11
 *  X offset: 4, Y offset: -10
 *  X size: 3, Y size: 5
 *      ###        
 *       #         
 *       #         
 *       #         
 *       #         
 ********************/
{54, 11, 4, -10, 3, 5},

/********************
 *  Character: '(', X advance: 11
 *  X offset: 6, Y offset: -10
 *  X size: 3, Y size: 13
 *          #        
 *         #         
 *         #         
 *        #          
 *        #          
 *        #          
 *        #          
 *        #          
 *        #          
 *        #          
 *         #         
 *         #         
 *          #        
 ********************/
{56, 11, 6, -10, 3, 13},

/********************
 *  Character: ')', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 3, Y size: 13
 *     #          
 *      #         
 *      #         
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *      #         
 *      #         
 *      #         
 *     #          
 ********************/
{61, 11, 3, -10, 3, 13},

/********************
 *  Character: '*', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 7, Y size: 6
 *       #       
 *       #       
 *    ## # ##    
 *      ###      
 *      # #      
 *      #  #     
 ********************/
{66, 11, 2, -10, 7, 6},

/********************
 *  Character: '+', X advance: 11
 *  X offset: 2, Y offset: -9
 *  X size: 7, Y size: 9
 *       #       
 *       #       
 *       #       
 *       #       
 *    #######    
 *       #       
 *       #       
 *       #       
 *       #       
 ********************/
{72, 11, 2, -9, 7, 9},

/********************
 *  Character: ',', X advance: 11
 *  X offset: 3, Y offset: -2
 *  X size: 4, Y size: 6
 *      ###       
 *      ##        
 *      ##        
 *     ##         
 *     ##         
 *     #          
 ********************/
{80, 11, 3, -2, 4, 6},

/********************
 *  Character: '-', X advance: 11
 *  X offset: 1, Y offset: -5
 *  X size: 9, Y size: 1
 *   #########  
 ********************/
{83, 11, 1, -5, 9, 1},

/********************
 *  Character: '.', X advance: 11
 *  X offset: 4, Y offset: -1
 *  X size: 3, Y size: 2
 *      ###        
 *      ###        
 ********************/
{85, 11, 4, -1, 3, 2},

/********************
 *  Character: '/', X advance: 11
 *  X offset: 2, Y offset: -12
 *  X size: 7, Y size: 15
 *          #    
 *          #    
 *         #     
 *         #     
 *        #      
 *        #      
 *       #       
 *       #       
 *      ##       
 *      #        
 *      #        
 *     #         
 *     #         
 *    #          
 *    #          
 ********************/
{86, 11, 2, -12, 7, 15},

/********************
 *  Character: '0', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *      ###      
 *     #   #     
 *    ##   ##    
 *    #     #    
 *    #     #    
 *    #     #    
 *    #     #    
 *    #     #    
 *    #     #    
 *    ##   ##    
 *     #   #     
 *      ###      
 ********************/
{100, 11, 2, -11, 7, 12},

/********************
 *  Character: '1', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 5, Y size: 11
 *       #        
 *     ###        
 *     # #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *     #####      
 ********************/
{111, 11, 3, -10, 5, 11},

/********************
 *  Character: '2', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *      ###      
 *     #   #     
 *    #     #    
 *    #     #    
 *          #    
 *         #     
 *        #      
 *       #       
 *      #        
 *     #         
 *    #          
 *    #######    
 ********************/
{118, 11, 2, -11, 7, 12},

/********************
 *  Character: '3', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *     ####      
 *    #    ##    
 *          #    
 *          #    
 *         ##    
 *       ##      
 *         ##    
 *           #   
 *           #   
 *           #   
 *    ##    #    
 *      ####     
 ********************/
{129, 11, 2, -11, 8, 12},

/********************
 *  Character: '4', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 6, Y size: 12
 *       ##      
 *      # #      
 *      # #      
 *     #  #      
 *     #  #      
 *    #   #      
 *    #   #      
 *    #   #      
 *    ######     
 *        #      
 *        #      
 *       ###     
 ********************/
{141, 11, 2, -11, 6, 12},

/********************
 *  Character: '5', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *     #####     
 *     #         
 *     #         
 *     #         
 *     #####     
 *     #    #    
 *           #   
 *           #   
 *           #   
 *           #   
 *    ##    #    
 *      ####     
 ********************/
{150, 11, 2, -11, 8, 12},

/********************
 *  Character: '6', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 7, Y size: 12
 *        ####    
 *       ##       
 *      #         
 *      #         
 *     #          
 *     # ###      
 *     ##   #     
 *     ##    #    
 *     #     #    
 *     ##    #    
 *      #   #     
 *       ###      
 ********************/
{162, 11, 3, -11, 7, 12},

/********************
 *  Character: '7', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *    #######    
 *          #    
 *          #    
 *         #     
 *         #     
 *         #     
 *        #      
 *        #      
 *        #      
 *        #      
 *       #       
 *       #       
 ********************/
{173, 11, 2, -11, 7, 12},

/********************
 *  Character: '8', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *      ###      
 *     #   #     
 *    #     #    
 *    #     #    
 *     #   #     
 *      ###      
 *     #   #     
 *    #     #    
 *    #     #    
 *    #     #    
 *     #   #     
 *      ###      
 ********************/
{184, 11, 2, -11, 7, 12},

/********************
 *  Character: '9', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 7, Y size: 12
 *       ###      
 *      #   #     
 *     #    ##    
 *     #     #    
 *     #    ##    
 *      #   ##    
 *       ### #    
 *           #    
 *          #     
 *          #     
 *        ##      
 *     ####       
 ********************/
{195, 11, 3, -11, 7, 12},

/********************
 *  Character: ':', X advance: 11
 *  X offset: 4, Y offset: -7
 *  X size: 3, Y size: 8
 *      ###        
 *      ###        
 *      ###        
 *                 
 *                 
 *                 
 *      ###        
 *      ###        
 ********************/
{206, 11, 4, -7, 3, 8},

/********************
 *  Character: ';', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 4, Y size: 11
 *     ###       
 *     ###       
 *     ###       
 *               
 *               
 *     ###       
 *     ##        
 *     ##        
 *    ##         
 *    #          
 *    #          
 ********************/
{209, 11, 2, -7, 4, 11},

/********************
 *  Character: '<', X advance: 11
 *  X offset: 1, Y offset: -9
 *  X size: 9, Y size: 9
 *           #  
 *         ##   
 *       ##     
 *     ##       
 *    #         
 *     #        
 *      ##      
 *        ##    
 *          ##  
 ********************/
{215, 11, 1, -9, 9, 9},

/********************
 *  Character: '=', X advance: 11
 *  X offset: 0, Y offset: -6
 *  X size: 9, Y size: 3
 *  #########  
 *             
 *  #########  
 ********************/
{226, 11, 0, -6, 9, 3},

/********************
 *  Character: '>', X advance: 11
 *  X offset: 1, Y offset: -9
 *  X size: 9, Y size: 9
 *   ##         
 *     #        
 *      ##      
 *        ##    
 *          ##  
 *         ##   
 *       ##     
 *     ##       
 *    #         
 ********************/
{230, 11, 1, -9, 9, 9},

/********************
 *  Character: '?', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 6, Y size: 11
 *      ####      
 *     #   ##     
 *     #    #     
 *          #     
 *         ##     
 *        ##      
 *       #        
 *                
 *                
 *                
 *       ##       
 ********************/
{241, 11, 3, -10, 6, 11},

/********************
 *  Character: '@', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 13
 *      ####     
 *     ##  ##    
 *     #    #    
 *    #     #    
 *    #   ###    
 *    #  ## #    
 *    #  #  #    
 *    #  #  #    
 *    #   ####   
 *    #          
 *    ##         
 *     ##        
 *      #####    
 ********************/
{250, 11, 2, -11, 8, 13},

/********************
 *  Character: 'A', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *    ####     
 *      # #    
 *      # #    
 *      #  #   
 *     #   #   
 *     #   #   
 *     #    #  
 *    #######  
 *    #     #  
 *   #       # 
 *  ####   ####
 ********************/
{263, 11, 0, -10, 11, 11},

/********************
 *  Character: 'B', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   ########   
 *    #     ##  
 *    #      #  
 *    #      #  
 *    #     #   
 *    ######    
 *    #     ##  
 *    #      #  
 *    #      #  
 *    #     ##  
 *   ########   
 ********************/
{279, 11, 1, -10, 9, 11},

/********************
 *  Character: 'C', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *      #### #  
 *    ##    ##  
 *    #      #  
 *   #          
 *   #          
 *   #          
 *   #          
 *   #          
 *    #         
 *    ##     #  
 *      #####   
 ********************/
{292, 11, 1, -10, 9, 11},

/********************
 *  Character: 'D', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   #######    
 *    #    ##   
 *    #     #   
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #     #   
 *    #    ##   
 *   #######    
 ********************/
{305, 11, 1, -10, 9, 11},

/********************
 *  Character: 'E', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   ########   
 *    #     #   
 *    #     #   
 *    #         
 *    #   #     
 *    #####     
 *    #   #     
 *    #         
 *    #      #  
 *    #      #  
 *   #########  
 ********************/
{318, 11, 1, -10, 9, 11},

/********************
 *  Character: 'F', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   #########  
 *    #      #  
 *    #      #  
 *    #         
 *    #   #     
 *    #####     
 *    #   #     
 *    #         
 *    #         
 *    #         
 *   ####       
 ********************/
{331, 11, 1, -10, 9, 11},

/********************
 *  Character: 'G', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *      #### #  
 *    ##    ##  
 *    #      #  
 *   #          
 *   #          
 *   #          
 *   #     #### 
 *   #       #  
 *    #      #  
 *    ##     #  
 *      #####   
 ********************/
{344, 11, 1, -10, 10, 11},

/********************
 *  Character: 'H', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   ###   ###  
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #######   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *   ###   ###  
 ********************/
{358, 11, 1, -10, 9, 11},

/********************
 *  Character: 'I', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 5, Y size: 11
 *     #####      
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *     #####      
 ********************/
{371, 11, 3, -10, 5, 11},

/********************
 *  Character: 'J', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 9, Y size: 11
 *       ######  
 *          #    
 *          #    
 *          #    
 *          #    
 *          #    
 *    #     #    
 *    #     #    
 *    #     #    
 *    ##   #     
 *      ###      
 ********************/
{378, 11, 2, -10, 9, 11},

/********************
 *  Character: 'K', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ###   ###  
 *    #     #   
 *    #    #    
 *    #  ##     
 *    # #       
 *    ## ##     
 *    #   #     
 *    #    #    
 *    #     #   
 *    #     #   
 *   ###    ### 
 ********************/
{391, 11, 1, -10, 10, 11},

/********************
 *  Character: 'L', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *    #####      
 *      #        
 *      #        
 *      #        
 *      #        
 *      #        
 *      #        
 *      #    #   
 *      #    #   
 *      #    #   
 *    ########   
 ********************/
{405, 11, 2, -10, 8, 11},

/********************
 *  Character: 'M', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ###     ###
 *   ##     ## 
 *   # #   # # 
 *   # #   # # 
 *   #  # #  # 
 *   #  # #  # 
 *   #  ##   # 
 *   #   #   # 
 *   #       # 
 *   #       # 
 *  ###     ###
 ********************/
{416, 11, 0, -10, 11, 11},

/********************
 *  Character: 'N', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ###    ### 
 *    ##     #  
 *    # #    #  
 *    # #    #  
 *    #  #   #  
 *    #  ##  #  
 *    #   #  #  
 *    #    # #  
 *    #    # #  
 *    #     ##  
 *   ###    ##  
 ********************/
{432, 11, 1, -10, 10, 11},

/********************
 *  Character: 'O', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *      ####    
 *     #    #   
 *    #      #  
 *   #        # 
 *   #        # 
 *   #        # 
 *   #        # 
 *   #        # 
 *    #      #  
 *     #    #   
 *      ####    
 ********************/
{446, 11, 1, -10, 10, 11},

/********************
 *  Character: 'P', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   #######    
 *    #     #   
 *    #      #  
 *    #      #  
 *    #      #  
 *    #     #   
 *    ######    
 *    #         
 *    #         
 *    #         
 *   ####       
 ********************/
{460, 11, 1, -10, 9, 11},

/********************
 *  Character: 'Q', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 14
 *      ####    
 *     #    #   
 *    #      #  
 *   #        # 
 *   #        # 
 *   #        # 
 *   #        # 
 *   #        # 
 *    #      #  
 *    ##    #   
 *      ####    
 *       #      
 *     #####  # 
 *     #    ##  
 ********************/
{473, 11, 1, -10, 10, 14},

/********************
 *  Character: 'R', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   #######    
 *    #     ##  
 *    #      #  
 *    #      #  
 *    #     #   
 *    ######    
 *    #    #    
 *    #    ##   
 *    #     #   
 *    #      #  
 *   ###     ## 
 ********************/
{491, 11, 1, -10, 10, 11},

/********************
 *  Character: 'S', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *      #### #   
 *     ##   ##   
 *     #     #   
 *     #         
 *      #        
 *       ###     
 *          ##   
 *           #   
 *    #      #   
 *    ##    ##   
 *    # ####     
 ********************/
{505, 11, 2, -10, 8, 11},

/********************
 *  Character: 'T', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   #########  
 *   #   #   #  
 *   #   #   #  
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *     #####    
 ********************/
{516, 11, 1, -10, 9, 11},

/********************
 *  Character: 'U', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ###    ### 
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *     #    #   
 *      ####    
 ********************/
{529, 11, 1, -10, 10, 11},

/********************
 *  Character: 'V', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ####   ####
 *   #       # 
 *    #      # 
 *    #     #  
 *    #     #  
 *     #   #   
 *     #   #   
 *      #  #   
 *      # #    
 *      # #    
 *       #     
 ********************/
{543, 11, 0, -10, 11, 11},

/********************
 *  Character: 'W', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ####   ####
 *   #       # 
 *   #       # 
 *   #   ##  # 
 *   #  # #  # 
 *    # # #  # 
 *    # #  # # 
 *    # #  ##  
 *    ##   ##  
 *    ##   ##  
 *    ##    #  
 ********************/
{559, 11, 0, -10, 11, 11},

/********************
 *  Character: 'X', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 10, Y size: 11
 *  ###   ###  
 *   #     #   
 *    #   #    
 *     #  #    
 *     # #     
 *      #      
 *     # #     
 *    #   #    
 *    #    #   
 *   #     #   
 *  ###   #### 
 ********************/
{575, 11, 0, -10, 10, 11},

/********************
 *  Character: 'Y', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 9, Y size: 11
 *  ###   ###  
 *   #     #   
 *    #   #    
 *    #   #    
 *     # #     
 *      #      
 *      #      
 *      #      
 *      #      
 *      #      
 *    #####    
 ********************/
{589, 11, 0, -10, 9, 11},

/********************
 *  Character: 'Z', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *    ######     
 *    #    #     
 *    #    #     
 *        #      
 *       #       
 *       #       
 *      #        
 *     #         
 *     #     #   
 *    #      #   
 *     #######   
 ********************/
{602, 11, 2, -10, 8, 11},

/********************
 *  Character: '[', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 3, Y size: 14
 *       ###        
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       ###        
 ********************/
{613, 11, 5, -11, 3, 14},

/********************
 *  Character: '\', X advance: 11
 *  X offset: 2, Y offset: -12
 *  X size: 7, Y size: 15
 *    #          
 *    #          
 *     #         
 *     #         
 *      #        
 *      #        
 *       #       
 *       #       
 *       ##      
 *        #      
 *        #      
 *         #     
 *         #     
 *          #    
 *          #    
 ********************/
{619, 11, 2, -12, 7, 15},

/********************
 *  Character: ']', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 3, Y size: 14
 *     ###        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *     ###        
 ********************/
{633, 11, 3, -11, 3, 14},

/********************
 *  Character: '^', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 5
 *       #       
 *      # #      
 *      #  #     
 *     #   #     
 *    #     #    
 ********************/
{639, 11, 2, -11, 7, 5},

/********************
 *  Character: '_', X advance: 11
 *  X offset: 0, Y offset: 2
 *  X size: 11, Y size: 1
 *  ###########
 ********************/
{644, 11, 0, 2, 11, 1},

/********************
 *  Character: '`', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 3, Y size: 3
 *     #          
 *      #         
 *       #        
 ********************/
{646, 11, 3, -11, 3, 3},

/********************
 *  Character: 'a', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 8
 *    ######    
 *          #   
 *          #   
 *     ######   
 *   ##     #   
 *   #      #   
 *   #     ##   
 *    ##### ##  
 ********************/
{648, 11, 1, -7, 9, 8},

/********************
 *  Character: 'b', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *   ##         
 *    #         
 *    #         
 *    #         
 *    # ####    
 *    ##    #   
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    ##    #   
 *   ## ####    
 ********************/
{657, 11, 1, -11, 9, 12},

/********************
 *  Character: 'c', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 8, Y size: 8
 *      #### #   
 *     #    ##   
 *    #      #   
 *    #          
 *    #          
 *    #          
 *     #     #   
 *      #####    
 ********************/
{671, 11, 2, -7, 8, 8},

/********************
 *  Character: 'd', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *          ##  
 *           #  
 *           #  
 *           #  
 *     ####  #  
 *    ##   ###  
 *   #       #  
 *   #       #  
 *   #       #  
 *   #       #  
 *    ##   ###  
 *     ####  ## 
 ********************/
{679, 11, 1, -11, 10, 12},

/********************
 *  Character: 'e', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 8
 *     #####    
 *    #     #   
 *   #       #  
 *   #########  
 *   #          
 *    #         
 *    ##    ##  
 *      ####    
 ********************/
{694, 11, 1, -7, 9, 8},

/********************
 *  Character: 'f', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *       ####    
 *      #        
 *      #        
 *      #        
 *     #####     
 *      #        
 *      #        
 *      #        
 *      #        
 *      #        
 *      #        
 *    ######     
 ********************/
{703, 11, 2, -11, 7, 12},

/********************
 *  Character: 'g', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 12
 *     #### ##  
 *    #    ##   
 *   #      #   
 *   #      #   
 *   #      #   
 *   #      #   
 *    #    ##   
 *     #### #   
 *          #   
 *          #   
 *         ##   
 *      ####    
 ********************/
{714, 11, 1, -7, 9, 12},

/********************
 *  Character: 'h', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *   ##         
 *    #         
 *    #         
 *    #         
 *    # ####    
 *    ##   ##   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *   ###   ###  
 ********************/
{728, 11, 1, -11, 9, 12},

/********************
 *  Character: 'i', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 7, Y size: 11
 *       #       
 *               
 *               
 *     ###       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *    #######    
 ********************/
{742, 11, 2, -10, 7, 11},

/********************
 *  Character: 'j', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 5, Y size: 15
 *        #       
 *                
 *                
 *     #####      
 *         #      
 *         #      
 *         #      
 *         #      
 *         #      
 *         #      
 *         #      
 *         #      
 *         #      
 *        ##      
 *     ####       
 ********************/
{752, 11, 3, -10, 5, 15},

/********************
 *  Character: 'k', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 9, Y size: 12
 *    ##         
 *     #         
 *     #         
 *     #         
 *     #  ####   
 *     #   #     
 *     # ##      
 *     ###       
 *     #  #      
 *     #   #     
 *     #    #    
 *    ##   ####  
 ********************/
{762, 11, 2, -11, 9, 12},

/********************
 *  Character: 'l', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *     ###       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *    #######    
 ********************/
{776, 11, 2, -11, 7, 12},

/********************
 *  Character: 'm', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 8
 *   # ## ###   
 *   ##  #   #  
 *   #   #   #  
 *   #   #   #  
 *   #   #   #  
 *   #   #   #  
 *   #   #   #  
 *   ##  #   #  
 ********************/
{787, 11, 1, -7, 9, 8},

/********************
 *  Character: 'n', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 8
 *    # ####    
 *    ##   ##   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *   ###   ###  
 ********************/
{796, 11, 1, -7, 9, 8},

/********************
 *  Character: 'o', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 8
 *     #####    
 *    ##   ##   
 *   #       #  
 *   #       #  
 *   #       #  
 *   #       #  
 *    ##   ##   
 *     #####    
 ********************/
{805, 11, 1, -7, 9, 8},

/********************
 *  Character: 'p', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 9, Y size: 12
 *   ## ####    
 *    ##    #   
 *    #      #  
 *    #      #  
 *    #      #  
 *    #      #  
 *    ##    #   
 *    # ####    
 *    #         
 *    #         
 *    #         
 *   ####       
 ********************/
{814, 11, 1, -7, 9, 12},

/********************
 *  Character: 'q', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 10, Y size: 12
 *     ##### ## 
 *    #     ##  
 *   #       #  
 *   #       #  
 *   #       #  
 *   #       #  
 *    ##   ###  
 *     ####  #  
 *           #  
 *           #  
 *           #  
 *         #### 
 ********************/
{828, 11, 1, -7, 10, 12},

/********************
 *  Character: 'r', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 9, Y size: 8
 *     ##  ###   
 *      # #      
 *      ##       
 *      #        
 *      #        
 *      #        
 *      #        
 *    ######     
 ********************/
{843, 11, 2, -7, 9, 8},

/********************
 *  Character: 's', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 8, Y size: 8
 *      #### #   
 *     #    ##   
 *     #     #   
 *     ####      
 *         ###   
 *    #      #   
 *    ##    ##   
 *    # #####    
 ********************/
{852, 11, 2, -7, 8, 8},

/********************
 *  Character: 't', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *     #         
 *     #         
 *     #         
 *    ######     
 *     #         
 *     #         
 *     #         
 *     #         
 *     #         
 *     #     #   
 *      #####    
 ********************/
{860, 11, 2, -10, 8, 11},

/********************
 *  Character: 'u', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 8, Y size: 8
 *   ##    ##   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #     #   
 *    #    ##   
 *     #### #   
 ********************/
{871, 11, 1, -7, 8, 8},

/********************
 *  Character: 'v', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 10, Y size: 8
 *  ###   #### 
 *   #     #   
 *   #     #   
 *    #   #    
 *    #   #    
 *     #  #    
 *     # #     
 *      ##     
 ********************/
{879, 11, 0, -7, 10, 8},

/********************
 *  Character: 'w', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 10, Y size: 8
 *  ###    ### 
 *  #       #  
 *   #  #   #  
 *   #  ## #   
 *   # # # #   
 *   # # # #   
 *   ##   ##   
 *    #   #    
 ********************/
{889, 11, 0, -7, 10, 8},

/********************
 *  Character: 'x', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 9, Y size: 8
 *  ####  ###  
 *    #    #   
 *     #  #    
 *      ##     
 *     ###     
 *    #   #    
 *   #     #   
 *  ####  ###  
 ********************/
{899, 11, 0, -7, 9, 8},

/********************
 *  Character: 'y', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 9, Y size: 12
 *  ###   ###  
 *   #     #   
 *   #     #   
 *    #   #    
 *    #   #    
 *     # #     
 *     # #     
 *      #      
 *      #      
 *      #      
 *     #       
 *  ######     
 ********************/
{908, 11, 0, -7, 9, 12},

/********************
 *  Character: 'z', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 8, Y size: 8
 *    ######     
 *    #    #     
 *        #      
 *       #       
 *      #        
 *     #         
 *     #     #   
 *     #######   
 ********************/
{922, 11, 2, -7, 8, 8},

/********************
 *  Character: '{', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 4, Y size: 14
 *        #       
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *     ##         
 *       #        
 *       #        
 *       #        
 *       #        
 *       #        
 *       ##       
 ********************/
{930, 11, 3, -11, 4, 14},

/********************
 *  Character: '|', X advance: 11
 *  X offset: 5, Y offset: -10
 *  X size: 1, Y size: 13
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 *       #          
 ********************/
{937, 11, 5, -10, 1, 13},

/********************
 *  Character: '}', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 4, Y size: 14
 *      #          
 *       #         
 *       #         
 *       #         
 *       #         
 *       #         
 *       #         
 *        ##       
 *       #         
 *       #         
 *       #         
 *       #         
 *       #         
 *      ##         
 ********************/
{939, 11, 4, -11, 4, 14},

/********************
 *  Character: '~', X advance: 11
 *  X offset: 1, Y offset: -6
 *  X size: 8, Y size: 3
 *    ##        
 *   #  #  #    
 *       ###    
 ********************/
{946, 11, 1, -6, 8, 3},

};

const monoGFX_font_t monoGFX_FreeMono_9pt = {bitmapBuffer, 949, glyphs};
