#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1088] =
{
    0x00,0x24,0x29,0x49,0x00,0x06,0x66,0xb3,0x48,0x36,0x03,0x50,0x50,0x48,0x28,0xfe,
    0x24,0x24,0x7f,0x14,0x12,0x0a,0x0a,0x01,0x20,0xf8,0x84,0x02,0x02,0x1c,0x60,0x40,
    0x41,0x23,0x1e,0x04,0x04,0x1c,0x26,0x22,0x32,0x1c,0xe0,0x1c,0x3b,0x4c,0x44,0x64,
    0x38,0x78,0x06,0x81,0xc0,0x50,0xa6,0x62,0x11,0x17,0xdf,0x16,0x48,0x24,0x12,0x11,
    0x11,0x11,0x01,0x88,0x88,0x88,0x88,0x44,0x22,0x01,0x10,0xc8,0x9c,0xc1,0x90,0x00,
    0x10,0x10,0x10,0x10,0xff,0x08,0x08,0x08,0x08,0x9c,0x19,0x33,0x02,0xff,0x01,0x3f,
    0x00,0x02,0x04,0x10,0x20,0x40,0x00,0x01,0x02,0x04,0x10,0x20,0x40,0x00,0x01,0x02,
    0x04,0x00,0x00,0x78,0xcc,0x84,0x82,0x82,0x81,0x41,0x41,0x41,0x61,0x33,0x1e,0x60,
    0x50,0x28,0x24,0x20,0x20,0x10,0x10,0x10,0x10,0x10,0xff,0xe0,0x41,0x8c,0x20,0x80,
    0x00,0x01,0x02,0x04,0x0c,0x08,0x10,0x20,0xc0,0x3f,0xf0,0x10,0x02,0x04,0x08,0x08,
    0x0e,0x10,0x40,0x80,0x80,0x85,0xf1,0x00,0x60,0x28,0x14,0x49,0x16,0x89,0x42,0x7f,
    0x10,0x84,0x07,0xfc,0x04,0x04,0x02,0x7a,0xc6,0x80,0x80,0x80,0x40,0x21,0x1e,0xe0,
    0x18,0x04,0x06,0x02,0x3b,0x65,0x43,0x41,0x41,0x23,0x1e,0x7f,0x41,0x40,0x20,0x20,
    0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x78,0xc4,0x82,0x82,0x46,0x38,0x66,0x41,0x41,
    0x41,0x23,0x1e,0x78,0xc4,0x82,0x82,0xc2,0xa6,0xdc,0x40,0x60,0x20,0x18,0x07,0xec,
    0x06,0x00,0x77,0x30,0x8e,0x01,0x00,0xc7,0x18,0xc6,0x10,0x00,0x00,0x02,0x06,0x06,
    0x06,0x06,0x10,0x80,0x01,0x18,0x80,0x00,0xff,0x03,0xf0,0x1f,0x04,0x10,0xc0,0x00,
    0x02,0x18,0x08,0x0c,0x06,0x03,0x00,0xbc,0x71,0x10,0x08,0x63,0x10,0x00,0x00,0xc0,
    0x01,0x70,0x8c,0x84,0x82,0x62,0x51,0x49,0x49,0x71,0x01,0x01,0x03,0x1e,0xf0,0x01,
    0x0a,0x50,0x40,0x02,0x12,0x88,0x41,0x08,0x7f,0x0c,0x22,0xd0,0xe3,0x01,0xfc,0x21,
    0x88,0x20,0x82,0x08,0xf1,0x43,0x30,0x81,0x04,0x12,0xf4,0x0f,0xf0,0x22,0x4c,0xa0,
    0x00,0x02,0x04,0x10,0x40,0x00,0x01,0x08,0xc2,0x07,0xfc,0x20,0x84,0x20,0x81,0x04,
    0x12,0x48,0x20,0x41,0x82,0x09,0xf3,0x03,0xfc,0x47,0x20,0x82,0x10,0x80,0x04,0x3e,
    0x10,0x81,0x00,0x04,0x21,0xc8,0x7f,0x00,0xfc,0x47,0x20,0x02,0x11,0x80,0x04,0x3e,
    0x10,0x81,0x00,0x04,0x20,0xc0,0x0f,0x00,0xf0,0x22,0x4c,0xa0,0x00,0x02,0x04,0x10,
    0x5e,0x40,0x01,0x09,0xc2,0x0f,0x3c,0x47,0x10,0x82,0x10,0x84,0x20,0xfe,0x10,0x84,
    0x20,0x04,0x21,0xc8,0xf3,0x00,0xfc,0x41,0x80,0x00,0x01,0x02,0x02,0x04,0x08,0x10,
    0x20,0xfc,0x03,0xe0,0x0f,0x10,0x00,0x01,0x10,0x80,0x00,0x08,0x82,0x10,0x08,0x41,
    0x10,0x06,0x1e,0x00,0x3c,0x8f,0x20,0x08,0x81,0x0c,0x28,0x40,0x05,0x8c,0x40,0x08,
    0x84,0x40,0x10,0x0f,0x03,0xfc,0x40,0x00,0x01,0x04,0x10,0x40,0x80,0x00,0x82,0x08,
    0x22,0xf8,0x3f,0x1c,0x18,0x85,0xa1,0x28,0x94,0x84,0x92,0xc8,0x09,0x31,0x21,0x22,
    0x04,0x84,0x80,0x3c,0x3e,0x0c,0x8f,0x41,0x18,0x42,0x21,0x24,0x42,0x22,0x44,0x42,
    0x14,0x42,0x21,0x18,0x8f,0x01,0xf0,0x30,0x44,0xa0,0x80,0x01,0x06,0x18,0x60,0x40,
    0x81,0x08,0xc3,0x03,0xfc,0x21,0x8c,0x20,0x82,0x08,0x12,0xc6,0x0f,0x01,0x04,0x10,
    0xf0,0x03,0xf0,0x30,0x44,0xa0,0x80,0x01,0x06,0x18,0x60,0x40,0x81,0x08,0xc3,0x03,
    0x01,0x9e,0x88,0x01,0xfc,0x21,0x8c,0x20,0x82,0x08,0xf1,0x43,0x04,0x21,0x84,0x10,
    0xf4,0x20,0x70,0x11,0x13,0x24,0x40,0x00,0x0f,0x20,0x40,0x81,0x86,0xf4,0x00,0xff,
    0x45,0x14,0x11,0x04,0x10,0x20,0x80,0x00,0x02,0x08,0x20,0xf0,0x03,0xcf,0x0b,0x24,
    0x98,0x20,0x82,0x08,0x12,0x48,0x10,0x41,0x8c,0xe0,0x01,0x0f,0x17,0x90,0x40,0x08,
    0x42,0x08,0x22,0x10,0x81,0x04,0x28,0xc0,0x00,0x02,0x00,0x0f,0x17,0x90,0x80,0x44,
    0x24,0x13,0x95,0x28,0xc5,0x18,0xc7,0x18,0xc6,0x10,0x00,0x1c,0x8f,0x20,0x10,0x01,
    0x09,0x60,0x00,0x02,0x50,0x80,0x08,0x84,0x20,0x10,0xc7,0x03,0x87,0x0b,0x42,0x04,
    0x11,0x28,0x60,0x80,0x00,0x02,0x08,0x20,0xf0,0x03,0xfc,0x09,0x12,0x02,0x02,0x02,
    0x02,0x02,0x02,0x82,0x02,0xfd,0x03,0x38,0x41,0x10,0x04,0x21,0x08,0x82,0x20,0x04,
    0xc1,0x01,0x11,0x21,0x22,0x42,0x44,0x8c,0x88,0x38,0x08,0x41,0x10,0x84,0x20,0x08,
    0x42,0x10,0xc4,0x01,0x08,0x0c,0x49,0x14,0x04,0xfe,0x0f,0x25,0x7c,0x00,0x01,0xe2,
    0x27,0x2c,0x48,0x18,0xef,0x18,0x80,0x00,0x04,0x10,0x80,0x3c,0x1c,0x23,0x90,0x80,
    0x04,0x24,0x10,0xc3,0xec,0x01,0xf8,0x12,0x2e,0x50,0x00,0x01,0x04,0x30,0x18,0x1f,
    0x80,0x03,0x08,0x10,0x40,0x78,0x11,0x26,0x50,0x40,0x81,0x04,0x32,0x8c,0x6f,0xf8,
    0x0c,0x0b,0xfc,0x1f,0x20,0x80,0x00,0x3e,0xc0,0x07,0x01,0x04,0x20,0xc0,0x1f,0x08,
    0x40,0x00,0x01,0x08,0x40,0x00,0x02,0xfe,0x00,0x78,0x1b,0x26,0x48,0x20,0x81,0x04,
    0x32,0x8e,0x17,0x40,0x00,0x01,0x82,0x07,0x0c,0x40,0x00,0x02,0x10,0x80,0x1e,0x0c,
    0x11,0x88,0x40,0x04,0x22,0x08,0x41,0x1e,0x0f,0x20,0x20,0x00,0x00,0x3c,0x10,0x10,
    0x10,0x10,0x10,0x10,0xff,0x80,0xc0,0x00,0x00,0xfc,0x80,0x80,0x40,0x40,0x40,0x40,
    0x60,0x20,0x20,0x10,0x0f,0x1c,0x40,0x80,0x00,0x02,0xc8,0x23,0x82,0x06,0x06,0x24,
    0x10,0x41,0xc8,0x71,0x38,0x20,0x20,0x20,0x20,0x30,0x10,0x10,0x10,0x10,0x10,0xff,
    0x7c,0x8e,0x98,0x44,0x44,0x44,0x44,0x44,0x44,0x42,0x74,0xee,0xec,0x61,0x48,0x20,
    0x81,0x04,0x12,0x44,0xd0,0xe3,0x78,0x08,0x09,0x0c,0x18,0x30,0xd0,0x10,0x1e,0xcc,
    0xc3,0x31,0x02,0x09,0x48,0x40,0x02,0x31,0x8c,0x1e,0x04,0x20,0x80,0x00,0x3e,0x00,
    0x78,0x37,0x8c,0x40,0x02,0x12,0x88,0x40,0x0c,0xc3,0x17,0x80,0x00,0x02,0x10,0xe0,
    0x03,0xce,0xa3,0x80,0x01,0x02,0x08,0x10,0x40,0xc0,0x1f,0xf8,0x8c,0x04,0x38,0xc0,
    0x81,0xc3,0x3d,0x08,0x04,0xe1,0x4f,0x20,0x10,0x04,0x02,0x01,0x1f,0xc7,0x09,0x0a,
    0x12,0x24,0x48,0x90,0x18,0x6f,0x8f,0x0b,0x44,0x08,0x11,0x44,0x90,0x80,0x01,0x06,
    0x07,0x17,0x88,0x4c,0x64,0xa2,0x0a,0x53,0x98,0x41,0x0c,0x9c,0x47,0x08,0x24,0xc0,
    0x00,0x05,0x64,0x18,0xe2,0x79,0x38,0x8e,0x40,0x10,0x02,0x11,0x10,0x01,0x09,0x60,
    0x00,0x06,0x20,0x00,0x01,0x10,0xf0,0x03,0xfe,0x42,0x20,0x10,0x08,0x04,0x43,0x3f,
    0x30,0x84,0x20,0x08,0x42,0x0c,0x04,0x21,0x08,0x82,0x01,0x20,0x49,0x49,0x52,0x12,
    0x30,0x10,0x08,0x02,0x81,0x40,0xc0,0x18,0x04,0x82,0x40,0x18,0x00,0x8e,0xc9,0x30,
    
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
 *  X size: 3, Y size: 12
 *         #        
 *         #        
 *         #        
 *         #        
 *        #         
 *        #         
 *        #         
 *        #         
 *                  
 *                  
 *                  
 *       ##         
 ********************/
{1, 11, 5, -11, 3, 12},

/********************
 *  Character: '"', X advance: 11
 *  X offset: 4, Y offset: -10
 *  X size: 7, Y size: 5
 *       ##  ##    
 *       ##  ##    
 *       #   #     
 *       #  ##     
 *      ##  ##     
 ********************/
{6, 11, 4, -10, 7, 5},

/********************
 *  Character: '#', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 13
 *        # #    
 *        # #    
 *       #  #    
 *       # #     
 *     #######   
 *      #  #     
 *      #  #     
 *    #######    
 *      # #      
 *     #  #      
 *     # #       
 *     # #       
 *    #          
 ********************/
{11, 11, 2, -11, 8, 13},

/********************
 *  Character: '$', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 8, Y size: 13
 *          #     
 *        #####   
 *       #    #   
 *      #         
 *      #         
 *       ###      
 *          ##    
 *           #    
 *     #     #    
 *     ##   #     
 *      ####      
 *       #        
 *       #        
 ********************/
{24, 11, 3, -11, 8, 13},

/********************
 *  Character: '%', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *      ###      
 *     ##  #     
 *     #   #     
 *     #  ##     
 *      ###      
 *         ###   
 *      ###      
 *    ## ###     
 *      ##  #    
 *      #   #    
 *      #  ##    
 *       ###     
 ********************/
{37, 11, 2, -11, 8, 12},

/********************
 *  Character: '&', X advance: 11
 *  X offset: 3, Y offset: -9
 *  X size: 7, Y size: 10
 *        ####    
 *       ##       
 *       #        
 *       #        
 *       ##       
 *      # #  #    
 *     #  # #     
 *     #   ##     
 *     #   #      
 *      ### #     
 ********************/
{49, 11, 3, -9, 7, 10},

/********************
 *  Character: ''', X advance: 11
 *  X offset: 7, Y offset: -10
 *  X size: 3, Y size: 5
 *         ###        
 *         ##         
 *         ##         
 *         ##         
 *         #          
 ********************/
{58, 11, 7, -10, 3, 5},

/********************
 *  Character: '(', X advance: 11
 *  X offset: 6, Y offset: -10
 *  X size: 4, Y size: 13
 *           #       
 *          #        
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
 *        #          
 ********************/
{60, 11, 6, -10, 4, 13},

/********************
 *  Character: ')', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 4, Y size: 13
 *        #       
 *        #       
 *        #       
 *        #       
 *        #       
 *        #       
 *        #       
 *        #       
 *       #        
 *       #        
 *      #         
 *      #         
 *     #          
 ********************/
{67, 11, 3, -10, 4, 13},

/********************
 *  Character: '*', X advance: 11
 *  X offset: 4, Y offset: -10
 *  X size: 7, Y size: 6
 *          #      
 *          #      
 *      ##  ###    
 *        ##       
 *        ##       
 *       #  #      
 ********************/
{74, 11, 4, -10, 7, 6},

/********************
 *  Character: '+', X advance: 11
 *  X offset: 2, Y offset: -9
 *  X size: 8, Y size: 9
 *        #      
 *        #      
 *        #      
 *        #      
 *    ########   
 *       #       
 *       #       
 *       #       
 *       #       
 ********************/
{80, 11, 2, -9, 8, 9},

/********************
 *  Character: ',', X advance: 11
 *  X offset: 2, Y offset: -2
 *  X size: 5, Y size: 6
 *      ###      
 *      ##       
 *     ##        
 *     ##        
 *    ##         
 *    #          
 ********************/
{89, 11, 2, -2, 5, 6},

/********************
 *  Character: '-', X advance: 11
 *  X offset: 2, Y offset: -5
 *  X size: 9, Y size: 1
 *    #########  
 ********************/
{93, 11, 2, -5, 9, 1},

/********************
 *  Character: '.', X advance: 11
 *  X offset: 4, Y offset: -1
 *  X size: 3, Y size: 2
 *      ###        
 *      ###        
 ********************/
{95, 11, 4, -1, 3, 2},

/********************
 *  Character: '/', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 10, Y size: 15
 *            # 
 *           #  
 *           #  
 *          #   
 *         #    
 *         #    
 *        #     
 *       #      
 *       #      
 *      #       
 *     #        
 *     #        
 *    #         
 *   #          
 *              
 ********************/
{96, 11, 1, -12, 10, 15},

/********************
 *  Character: '0', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 8, Y size: 12
 *        ####    
 *       ##  ##   
 *       #    #   
 *      #     #   
 *      #     #   
 *     #      #   
 *     #     #    
 *     #     #    
 *     #     #    
 *     #    ##    
 *     ##  ##     
 *      ####      
 ********************/
{115, 11, 3, -11, 8, 12},

/********************
 *  Character: '1', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *         ##    
 *        # #    
 *       # #     
 *      #  #     
 *         #     
 *         #     
 *        #      
 *        #      
 *        #      
 *        #      
 *        #      
 *    ########   
 ********************/
{127, 11, 2, -11, 8, 12},

/********************
 *  Character: '2', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *        ####  
 *       #   ## 
 *      #     # 
 *            # 
 *           #  
 *          #   
 *         #    
 *       ##     
 *      #       
 *     #        
 *    #         
 *   ########   
 ********************/
{139, 11, 1, -11, 10, 12},

/********************
 *  Character: '3', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *       ####   
 *      #    #  
 *           #  
 *           #  
 *          #   
 *       ###    
 *         #    
 *          #   
 *          #   
 *         ##   
 *   #    ##    
 *    ####      
 ********************/
{154, 11, 1, -11, 9, 12},

/********************
 *  Character: '4', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 12
 *         ##    
 *        # #    
 *        # #    
 *       #  #    
 *      #  ##    
 *     #   #     
 *     #   #     
 *    #    #     
 *    #######    
 *         #     
 *        #      
 *      ####     
 ********************/
{168, 11, 2, -11, 7, 12},

/********************
 *  Character: '5', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *      ######   
 *      #        
 *      #        
 *     #         
 *     # ####    
 *     ##   ##   
 *           #   
 *           #   
 *           #   
 *          #    
 *    #    #     
 *     ####      
 ********************/
{179, 11, 2, -11, 8, 12},

/********************
 *  Character: '6', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 8, Y size: 12
 *           ###   
 *         ##      
 *        #        
 *       ##        
 *       #         
 *      ## ###     
 *      # #  ##    
 *      ##    #    
 *      #     #    
 *      #     #    
 *      ##   #     
 *       ####      
 ********************/
{191, 11, 4, -11, 8, 12},

/********************
 *  Character: '7', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 8, Y size: 12
 *      #######    
 *      #     #    
 *            #    
 *           #     
 *           #     
 *          #      
 *          #      
 *         #       
 *         #       
 *        #        
 *        #        
 *       #         
 ********************/
{203, 11, 4, -11, 8, 12},

/********************
 *  Character: '8', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 8, Y size: 12
 *        ####    
 *       #   ##   
 *      #     #   
 *      #     #   
 *      ##   #    
 *        ###     
 *      ##  ##    
 *     #     #    
 *     #     #    
 *     #     #    
 *     ##   #     
 *      ####      
 ********************/
{215, 11, 3, -11, 8, 12},

/********************
 *  Character: '9', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *       ####    
 *      #   ##   
 *     #     #   
 *     #     #   
 *     #    ##   
 *     ##  # #   
 *      ### ##   
 *          #    
 *         ##    
 *         #     
 *       ##      
 *    ###        
 ********************/
{227, 11, 2, -11, 8, 12},

/********************
 *  Character: ':', X advance: 11
 *  X offset: 5, Y offset: -7
 *  X size: 4, Y size: 8
 *         ##       
 *        ###       
 *        ##        
 *                  
 *                  
 *                  
 *       ###        
 *       ###        
 ********************/
{239, 11, 5, -7, 4, 8},

/********************
 *  Character: ';', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 6, Y size: 11
 *        ##     
 *       ###     
 *       ##      
 *               
 *               
 *      ###      
 *      ##       
 *     ##        
 *     ##        
 *    ##         
 *    #          
 ********************/
{243, 11, 2, -7, 6, 11},

/********************
 *  Character: '<', X advance: 11
 *  X offset: 2, Y offset: -9
 *  X size: 10, Y size: 9
 *             # 
 *           ##  
 *         ##    
 *       ##      
 *     ##        
 *      #        
 *       ##      
 *         ##    
 *           #   
 ********************/
{252, 11, 2, -9, 10, 9},

/********************
 *  Character: '=', X advance: 11
 *  X offset: 1, Y offset: -6
 *  X size: 10, Y size: 3
 *   ########## 
 *              
 *   #########  
 ********************/
{264, 11, 1, -6, 10, 3},

/********************
 *  Character: '>', X advance: 11
 *  X offset: 1, Y offset: -9
 *  X size: 9, Y size: 9
 *     #        
 *      #       
 *       ##     
 *         #    
 *          ##  
 *         #    
 *       ##     
 *     ##       
 *   ##         
 ********************/
{268, 11, 1, -9, 9, 9},

/********************
 *  Character: '?', X advance: 11
 *  X offset: 4, Y offset: -10
 *  X size: 7, Y size: 11
 *        ####     
 *      ##   ##    
 *      #     #    
 *            #    
 *          ##     
 *        ##       
 *        #        
 *                 
 *                 
 *                 
 *      ###        
 ********************/
{279, 11, 4, -10, 7, 11},

/********************
 *  Character: '@', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 13
 *        ###    
 *      ##   #   
 *      #    #   
 *     #     #   
 *     #   ##    
 *    #   # #    
 *    #  #  #    
 *    #  #  #    
 *    #   ###    
 *    #          
 *    #          
 *    ##         
 *     ####      
 ********************/
{289, 11, 2, -11, 8, 13},

/********************
 *  Character: 'A', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *      #####  
 *        # #  
 *        # #  
 *       #  #  
 *       #  #  
 *      #   ## 
 *      #    # 
 *     ####### 
 *    ##     # 
 *    #      # 
 *  ####   ####
 ********************/
{302, 11, 0, -10, 11, 11},

/********************
 *  Character: 'B', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 10, Y size: 11
 *    #######  
 *     #     # 
 *     #     # 
 *     #     # 
 *     #    #  
 *    ######   
 *    #     ## 
 *    #      # 
 *    #      # 
 *    #     #  
 *  ########   
 ********************/
{318, 11, 0, -10, 10, 11},

/********************
 *  Character: 'C', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 11
 *        #### # 
 *       #    ## 
 *      #      # 
 *     #         
 *     #         
 *    #          
 *    #          
 *    #          
 *    #          
 *     #     #   
 *      #####    
 ********************/
{332, 11, 2, -10, 10, 11},

/********************
 *  Character: 'D', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 10, Y size: 11
 *    ######   
 *     #    #  
 *     #     # 
 *    #      # 
 *    #      # 
 *    #      # 
 *    #      # 
 *    #     #  
 *   #     ##  
 *   #    ##   
 *  ######     
 ********************/
{346, 11, 0, -10, 10, 11},

/********************
 *  Character: 'E', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *    #########
 *     #      #
 *     #     # 
 *     #       
 *     #  #    
 *    #####    
 *    #   #    
 *    #        
 *    #     #  
 *    #     #  
 *  #########  
 ********************/
{360, 11, 0, -10, 11, 11},

/********************
 *  Character: 'F', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *    #########
 *     #      #
 *     #      #
 *     #       
 *     #  #    
 *    #####    
 *    #   #    
 *    #        
 *    #        
 *    #        
 *  ######     
 ********************/
{376, 11, 0, -10, 11, 11},

/********************
 *  Character: 'G', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 11
 *        #### # 
 *       #    ## 
 *      #      # 
 *     #         
 *     #         
 *    #          
 *    #    ####  
 *    #       #  
 *    #       #  
 *     #     #   
 *      ######   
 ********************/
{392, 11, 2, -10, 10, 11},

/********************
 *  Character: 'H', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 11, Y size: 11
 *     ####  ###
 *      #     # 
 *      #     # 
 *      #     # 
 *      #     # 
 *     #######  
 *     #     #  
 *     #     #  
 *     #     #  
 *     #     #  
 *   ####  #### 
 ********************/
{406, 11, 1, -10, 11, 11},

/********************
 *  Character: 'I', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 9, Y size: 11
 *      #######  
 *         #     
 *         #     
 *         #     
 *         #     
 *        #      
 *        #      
 *        #      
 *        #      
 *        #      
 *    ########   
 ********************/
{422, 11, 2, -10, 9, 11},

/********************
 *  Character: 'J', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 12, Y size: 11
 *        #######
 *           #   
 *           #   
 *           #   
 *          #    
 *          #    
 *    #     #    
 *   #      #    
 *   #     #     
 *   #    ##     
 *    ####       
 ********************/
{435, 11, 1, -10, 12, 11},

/********************
 *  Character: 'K', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *    ####  ####
 *     #     #  
 *     #    #   
 *     #  ##    
 *     # #      
 *    # # #     
 *    ##   #    
 *    #    #    
 *    #    #    
 *    #     #   
 *  ####    ##  
 ********************/
{452, 11, 0, -10, 12, 11},

/********************
 *  Character: 'L', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *     ######   
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *      #       
 *      #     # 
 *      #     # 
 *      #     # 
 *   ########## 
 ********************/
{469, 11, 1, -10, 10, 11},

/********************
 *  Character: 'M', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 13, Y size: 11
 *    ###      ##
 *     # #    ## 
 *     # #   # # 
 *     # #  #  # 
 *     # #  #  # 
 *    #  ###  #  
 *    #   ##  #  
 *    #   #   #  
 *    #       #  
 *    #       #  
 *  ####   ##### 
 ********************/
{483, 11, 0, -10, 13, 11},

/********************
 *  Character: 'N', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *    ##    ####
 *     ##     # 
 *     ##    #  
 *    # #    #  
 *    #  #   #  
 *    #  #   #  
 *    #   #  #  
 *    #   # #   
 *   #    # #   
 *   #     ##   
 *  ####   ##   
 ********************/
{501, 11, 0, -10, 12, 11},

/********************
 *  Character: 'O', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 11
 *        ####   
 *      ##    #  
 *      #      # 
 *     #       # 
 *    #        # 
 *    #        # 
 *    #        # 
 *    #       #  
 *    #      #   
 *     #    ##   
 *      ####     
 ********************/
{518, 11, 2, -10, 10, 11},

/********************
 *  Character: 'P', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 10, Y size: 11
 *    #######  
 *     #    ## 
 *     #     # 
 *     #     # 
 *     #     # 
 *    #    ##  
 *    ######   
 *    #        
 *    #        
 *    #        
 *  ######     
 ********************/
{532, 11, 0, -10, 10, 11},

/********************
 *  Character: 'Q', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 14
 *        ####   
 *      ##    #  
 *      #      # 
 *     #       # 
 *    #        # 
 *    #        # 
 *    #        # 
 *    #       #  
 *    #      #   
 *     #    ##   
 *      ####     
 *      #        
 *     ####  #   
 *     #   ##    
 ********************/
{546, 11, 2, -10, 10, 14},

/********************
 *  Character: 'R', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 10, Y size: 11
 *    #######  
 *     #    ## 
 *     #     # 
 *     #     # 
 *     #    #  
 *    ######   
 *    #   #    
 *    #    #   
 *    #    #   
 *    #     #  
 *  ####     # 
 ********************/
{564, 11, 0, -10, 10, 11},

/********************
 *  Character: 'S', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 9, Y size: 11
 *        ### #  
 *       #   ##  
 *      #     #  
 *      #        
 *      #        
 *       ####    
 *           #   
 *           #   
 *    #      #   
 *    ##    #    
 *    # ####     
 ********************/
{578, 11, 2, -10, 9, 11},

/********************
 *  Character: 'T', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 11
 *    #########  
 *    #   #   #  
 *    #   #   #  
 *        #      
 *        #      
 *       #       
 *       #       
 *       #       
 *       #       
 *       #       
 *    ######     
 ********************/
{591, 11, 2, -10, 10, 11},

/********************
 *  Character: 'U', X advance: 11
 *  X offset: 3, Y offset: -10
 *  X size: 10, Y size: 11
 *     ####  #### 
 *      #      #  
 *      #     ##  
 *      #     #   
 *      #     #   
 *      #     #   
 *     #      #   
 *     #     #    
 *     #     #    
 *     ##   #     
 *      ####      
 ********************/
{605, 11, 3, -10, 10, 11},

/********************
 *  Character: 'V', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 11, Y size: 11
 *    ####    ###
 *     #       # 
 *     #      #  
 *      #     #  
 *      #    #   
 *      #   #    
 *      #   #    
 *      #  #     
 *       # #     
 *       ##      
 *       #       
 ********************/
{619, 11, 2, -10, 11, 11},

/********************
 *  Character: 'W', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 11, Y size: 11
 *    ####    ###
 *     #       # 
 *     #       # 
 *     #   #   # 
 *     #  ##  #  
 *     # # #  #  
 *     # #  # #  
 *     ##   ##   
 *    ###   ##   
 *    ##    ##   
 *    ##    #    
 ********************/
{635, 11, 2, -10, 11, 11},

/********************
 *  Character: 'X', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *    ###   ####
 *     #     #  
 *      #   #   
 *      #  #    
 *       ##     
 *       #      
 *      # #     
 *     #   #    
 *    #    #    
 *   #      #   
 *  ###   ####  
 ********************/
{651, 11, 0, -10, 12, 11},

/********************
 *  Character: 'Y', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 10, Y size: 11
 *    ###    ### 
 *     #     #   
 *      #   #    
 *      #   #    
 *       # #     
 *       ##      
 *       #       
 *       #       
 *       #       
 *       #       
 *    ######     
 ********************/
{668, 11, 2, -10, 10, 11},

/********************
 *  Character: 'Z', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 9, Y size: 11
 *      #######  
 *      #     #  
 *      #    #   
 *          #    
 *         #     
 *        #      
 *       #       
 *      #        
 *     #     #   
 *    #      #   
 *    ########   
 ********************/
{682, 11, 2, -10, 9, 11},

/********************
 *  Character: '[', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 6, Y size: 14
 *          ###     
 *         #        
 *         #        
 *         #        
 *         #        
 *         #        
 *        #         
 *        #         
 *        #         
 *        #         
 *        #         
 *       #          
 *       #          
 *       ###        
 ********************/
{695, 11, 5, -11, 6, 14},

/********************
 *  Character: '\', X advance: 11
 *  X offset: 5, Y offset: -12
 *  X size: 4, Y size: 14
 *       #          
 *       #          
 *       #          
 *        #         
 *        #         
 *        #         
 *        #         
 *         #        
 *         #        
 *         #        
 *         ##       
 *          #       
 *          #       
 *          #       
 ********************/
{706, 11, 5, -12, 4, 14},

/********************
 *  Character: ']', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 6, Y size: 14
 *        ###     
 *          #     
 *         #      
 *         #      
 *         #      
 *         #      
 *        #       
 *        #       
 *        #       
 *        #       
 *       #        
 *       #        
 *       #        
 *     ###        
 ********************/
{713, 11, 3, -11, 6, 14},

/********************
 *  Character: '^', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 7, Y size: 5
 *        #       
 *        ##      
 *       #  #     
 *      #   #     
 *     #     #    
 ********************/
{724, 11, 3, -11, 7, 5},

/********************
 *  Character: '_', X advance: 11
 *  X offset: -1, Y offset: 2
 *  X size: 12, Y size: 1
 *   ###########
 ********************/
{729, 11, -1, 2, 12, 1},

/********************
 *  Character: '`', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 2, Y size: 3
 *       #          
 *       #          
 *        #         
 ********************/
{731, 11, 5, -11, 2, 3},

/********************
 *  Character: 'a', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 9, Y size: 8
 *      #####    
 *           #   
 *           #   
 *      ######   
 *     #    ##   
 *    #     #    
 *    #    ##    
 *     #### ###  
 ********************/
{732, 11, 2, -7, 9, 8},

/********************
 *  Character: 'b', X advance: 11
 *  X offset: 0, Y offset: -11
 *  X size: 11, Y size: 12
 *     ##      
 *      #      
 *      #      
 *     #       
 *     #  #### 
 *     ###   ##
 *     #      #
 *    #       #
 *    #       #
 *    #      # 
 *    ##    ## 
 *   ## ####   
 ********************/
{741, 11, 0, -11, 11, 12},

/********************
 *  Character: 'c', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 10, Y size: 8
 *       ##### # 
 *      #    ### 
 *     #      #  
 *    #          
 *    #          
 *    #          
 *    ##     ##  
 *      #####    
 ********************/
{758, 11, 2, -7, 10, 8},

/********************
 *  Character: 'd', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 10, Y size: 12
 *           ### 
 *             # 
 *            #  
 *            #  
 *       #### #  
 *      #    ##  
 *     #      #  
 *    #       #  
 *    #      #   
 *    #      #   
 *    ##    ##   
 *     ##### ##  
 ********************/
{768, 11, 2, -11, 10, 12},

/********************
 *  Character: 'e', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 9, Y size: 8
 *       #####   
 *     ##    ##  
 *     #      #  
 *    #########  
 *    #          
 *    #          
 *     #         
 *      #####    
 ********************/
{783, 11, 2, -7, 9, 8},

/********************
 *  Character: 'f', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 11, Y size: 12
 *          #####
 *         #     
 *        #      
 *        #      
 *      #######  
 *        #      
 *        #      
 *       #       
 *       #       
 *       #       
 *       #       
 *    #######    
 ********************/
{792, 11, 2, -11, 11, 12},

/********************
 *  Character: 'g', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 10, Y size: 12
 *       #### ## 
 *     ##    ##  
 *     #     #   
 *    #      #   
 *    #      #   
 *    #      #   
 *    ##   ###   
 *     #### #    
 *          #    
 *          #    
 *         #     
 *     ####      
 ********************/
{809, 11, 2, -7, 10, 12},

/********************
 *  Character: 'h', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 11, Y size: 12
 *     ##       
 *      #       
 *      #       
 *      #       
 *      # ####  
 *      ##    # 
 *     #      # 
 *     #      # 
 *     #      # 
 *     #     #  
 *     #     #  
 *   ####   ####
 ********************/
{824, 11, 1, -11, 11, 12},

/********************
 *  Character: 'i', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *        #     
 *        #     
 *              
 *              
 *     ####     
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *   ########   
 ********************/
{841, 11, 1, -11, 8, 12},

/********************
 *  Character: 'j', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 16
 *          #   
 *         ##   
 *              
 *              
 *     ######   
 *          #   
 *          #   
 *         #    
 *         #    
 *         #    
 *         #    
 *        ##    
 *        #     
 *        #     
 *       #      
 *   ####       
 ********************/
{853, 11, 1, -11, 8, 16},

/********************
 *  Character: 'k', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *     ###      
 *       #      
 *      #       
 *      #       
 *      #  #### 
 *      #   #   
 *      # ##    
 *      ##      
 *     #  #     
 *     #   #    
 *     #    #   
 *   ###   ###  
 ********************/
{869, 11, 1, -11, 10, 12},

/********************
 *  Character: 'l', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *      ###     
 *        #     
 *        #     
 *        #     
 *        #     
 *       ##     
 *       #      
 *       #      
 *       #      
 *       #      
 *       #      
 *   ########   
 ********************/
{884, 11, 1, -11, 8, 12},

/********************
 *  Character: 'm', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 12, Y size: 8
 *    #####  ###
 *     #   ##  #
 *    #   #   # 
 *    #   #   # 
 *    #   #   # 
 *    #   #   # 
 *   #    #   # 
 *  ###  ### ###
 ********************/
{896, 11, 0, -7, 12, 8},

/********************
 *  Character: 'n', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 10, Y size: 8
 *     ## ####  
 *      ##    # 
 *     #      # 
 *     #      # 
 *     #      # 
 *     #     #  
 *     #     #  
 *   ####   ### 
 ********************/
{908, 11, 1, -7, 10, 8},

/********************
 *  Character: 'o', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 9, Y size: 8
 *       ####    
 *      #    #   
 *     #      #  
 *    #       #  
 *    #       #  
 *    #      #   
 *    ##    #    
 *      ####     
 ********************/
{918, 11, 2, -7, 9, 8},

/********************
 *  Character: 'p', X advance: 11
 *  X offset: -1, Y offset: -7
 *  X size: 11, Y size: 12
 *    ##  #### 
 *     ###   ##
 *     #      #
 *    #       #
 *    #       #
 *    #      # 
 *    ##    ## 
 *    # ####   
 *    #        
 *    #        
 *   #         
 *  #####      
 ********************/
{927, 11, -1, -7, 11, 12},

/********************
 *  Character: 'q', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 11, Y size: 12
 *       #### ###
 *     ##    ##  
 *     #      #  
 *    #       #  
 *    #      #   
 *    #      #   
 *    ##    ##   
 *     ##### #   
 *           #   
 *          #    
 *          #    
 *        #####  
 ********************/
{944, 11, 2, -7, 11, 12},

/********************
 *  Character: 'r', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 10, Y size: 8
 *    ###  #### 
 *      # #     
 *      ##      
 *      #       
 *      #       
 *     #        
 *     #        
 *   #######    
 ********************/
{961, 11, 1, -7, 10, 8},

/********************
 *  Character: 's', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 8, Y size: 8
 *       #####   
 *      ##   #   
 *      #        
 *       ###     
 *          ##   
 *    #      #   
 *    ##    ##   
 *    # ####     
 ********************/
{971, 11, 2, -7, 8, 8},

/********************
 *  Character: 't', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 7, Y size: 11
 *       #       
 *       #       
 *      #        
 *    #######    
 *      #        
 *      #        
 *      #        
 *     #         
 *     #         
 *     #         
 *      #####    
 ********************/
{979, 11, 2, -10, 7, 11},

/********************
 *  Character: 'u', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 9, Y size: 8
 *    ###   ###  
 *      #     #  
 *     #     #   
 *     #     #   
 *     #     #   
 *     #     #   
 *     #   ##    
 *     #### ##   
 ********************/
{989, 11, 2, -7, 9, 8},

/********************
 *  Character: 'v', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 10, Y size: 8
 *    ####   ### 
 *     #      #  
 *      #    #   
 *      #   #    
 *      #   #    
 *      #  #     
 *       ##      
 *       ##      
 ********************/
{998, 11, 2, -7, 10, 8},

/********************
 *  Character: 'w', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 11, Y size: 8
 *    ###     ###
 *     #      #  
 *     #  ##  #  
 *     #  ##  #  
 *     # # # #   
 *     ##  # #   
 *     ##  ##    
 *     #   ##    
 ********************/
{1008, 11, 2, -7, 11, 8},

/********************
 *  Character: 'x', X advance: 11
 *  X offset: 1, Y offset: -7
 *  X size: 11, Y size: 8
 *     ###  ####
 *      #    #  
 *       #  #   
 *        ##    
 *       # #    
 *      #  ##   
 *    ##    #   
 *   ####  #### 
 ********************/
{1019, 11, 1, -7, 11, 8},

/********************
 *  Character: 'y', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 12, Y size: 12
 *     ###   ###
 *     #      # 
 *      #    #  
 *      #   #   
 *      #   #   
 *      #  #    
 *       ##     
 *       ##     
 *       #      
 *      #       
 *      #       
 *  ######      
 ********************/
{1030, 11, 0, -7, 12, 12},

/********************
 *  Character: 'z', X advance: 11
 *  X offset: 2, Y offset: -7
 *  X size: 8, Y size: 8
 *     #######   
 *     #    #    
 *         #     
 *        #      
 *       #       
 *      #        
 *    ##    #    
 *    ######     
 ********************/
{1048, 11, 2, -7, 8, 8},

/********************
 *  Character: '{', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 6, Y size: 14
 *          ##     
 *          #      
 *         #       
 *         #       
 *         #       
 *         #       
 *        #        
 *      ##         
 *        #        
 *        #        
 *       #         
 *       #         
 *       #         
 *       ##        
 ********************/
{1056, 11, 4, -11, 6, 14},

/********************
 *  Character: '|', X advance: 11
 *  X offset: 5, Y offset: -10
 *  X size: 3, Y size: 13
 *                  
 *         #        
 *         #        
 *         #        
 *         #        
 *        #         
 *        #         
 *        #         
 *        #         
 *        #         
 *       #          
 *       #          
 *       #          
 ********************/
{1067, 11, 5, -10, 3, 13},

/********************
 *  Character: '}', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 7, Y size: 14
 *         ##     
 *          #     
 *          #     
 *         #      
 *         #      
 *         #      
 *         #      
 *          ##    
 *        ##      
 *        #       
 *        #       
 *       #        
 *       #        
 *     ##         
 ********************/
{1072, 11, 3, -11, 7, 14},

/********************
 *  Character: '~', X advance: 11
 *  X offset: 2, Y offset: -6
 *  X size: 8, Y size: 3
 *     ###   #   
 *    #  #  ##   
 *        ##     
 ********************/
{1085, 11, 2, -6, 8, 3},

};

const monoGFX_font_t monoGFX_FreeMonoOblique_9pt = {bitmapBuffer, 1088, glyphs};
