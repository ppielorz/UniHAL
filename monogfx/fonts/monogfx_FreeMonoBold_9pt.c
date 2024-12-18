#include "unihal/monogfx/monogfx.h"

static const uint8_t bitmapBuffer[1128] =
{
    0x00,0xff,0xff,0x5f,0xc2,0x0f,0x77,0x91,0x48,0x24,0x12,0x01,0x64,0x6c,0x6e,0x66,
    0xff,0xff,0x36,0x36,0xff,0xff,0x36,0x36,0x36,0x36,0x18,0x18,0x7e,0x7f,0x43,0x07,
    0x3e,0xfc,0xc1,0xc3,0x7f,0x7f,0x18,0x18,0x18,0x8e,0x4c,0x24,0xe3,0xf7,0xec,0x98,
    0x44,0x26,0x0e,0x3c,0x7e,0x26,0x06,0x0c,0x0e,0xdf,0xfb,0x73,0xff,0xfe,0x97,0x24,
    0x01,0xcc,0x66,0x33,0x33,0x33,0x67,0xc6,0x0c,0x33,0x66,0xce,0xcc,0xcc,0x6c,0x36,
    0x03,0x18,0x18,0x18,0xff,0x7e,0x3c,0x7e,0x66,0x18,0x18,0x18,0x18,0xff,0xff,0x18,
    0x18,0x18,0x18,0x6e,0x36,0x13,0xff,0xff,0x0f,0x3f,0xc0,0xe0,0x60,0x60,0x30,0x30,
    0x18,0x18,0x0c,0x0c,0x06,0x06,0x03,0x03,0x01,0x3c,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,
    0xc3,0xc3,0xe7,0x7e,0x3c,0x1c,0x1e,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff,
    0xff,0x7c,0xfc,0x1d,0x1f,0x0c,0x18,0x18,0x1c,0x1c,0x1c,0x0c,0xfb,0xf7,0x0f,0x3c,
    0x7f,0xc3,0xc0,0xc0,0x78,0x78,0xe0,0xc0,0xc0,0x7f,0x3e,0x70,0x70,0x78,0x6c,0x6c,
    0x66,0x62,0xff,0xff,0x60,0xf8,0xf8,0x7e,0xfc,0x18,0x30,0xe0,0xc7,0x1f,0x70,0xc0,
    0x80,0x87,0xff,0xf3,0x03,0xf8,0xfc,0x0e,0x07,0x3b,0x7f,0xe7,0xc3,0xc3,0xe7,0x7e,
    0x3c,0xff,0xff,0x0b,0x03,0x06,0x0c,0x0c,0x18,0x30,0x30,0x60,0xc0,0x80,0x00,0x3c,
    0x7e,0xc3,0xc3,0xc3,0x7e,0x7e,0xe7,0xc3,0xc3,0x7e,0x3c,0x3c,0x7e,0xe7,0xc3,0xc3,
    0xe7,0xfe,0xdc,0xe0,0x70,0x3f,0x1f,0x3f,0x00,0xe0,0x07,0xee,0x00,0x00,0x6e,0x26,
    0x13,0x00,0x81,0xc3,0xe3,0xf1,0xc0,0x03,0x1e,0xf0,0x80,0x01,0xff,0xff,0x0f,0xc0,
    0xff,0xff,0x03,0x00,0x1c,0xe0,0x01,0x1e,0xe0,0xc1,0xc3,0xc3,0x03,0x03,0x00,0x3e,
    0x7f,0xe3,0xc0,0xe0,0x78,0x38,0x08,0x00,0x1c,0x1c,0x78,0xf0,0xe3,0xd8,0x61,0xe3,
    0xcd,0xb7,0xdb,0x66,0x9b,0xcd,0x3f,0xfe,0x01,0x86,0xf9,0x87,0x07,0x7c,0xc0,0x0f,
    0xf0,0x00,0x1f,0x98,0x81,0x19,0xfc,0xc3,0x3f,0x0e,0xf7,0xf9,0x9f,0x0f,0xff,0xfc,
    0x67,0x98,0x61,0xfe,0xf8,0x67,0xb8,0xc1,0x06,0xff,0xff,0x0f,0xf8,0xfb,0x6f,0xf8,
    0xc0,0x03,0x0c,0x30,0xc0,0x00,0x06,0xfb,0x8f,0x0f,0xff,0xf8,0x8f,0xe1,0x0c,0x6c,
    0x60,0x03,0x1b,0xd8,0xc0,0x06,0xfb,0xdf,0x3f,0x00,0xff,0xff,0x6f,0xb3,0xcd,0x3e,
    0xf8,0x60,0x83,0xc1,0x06,0xff,0xff,0x3f,0xff,0xff,0x6f,0xb0,0xcd,0x3e,0xf8,0x60,
    0x83,0x0d,0x06,0xfc,0xf0,0x03,0xf8,0xe3,0x9f,0xc1,0x06,0x36,0x80,0x01,0x8c,0x7f,
    0xfc,0x06,0xf3,0x1f,0x3e,0x00,0xde,0xf3,0x1e,0xc3,0x18,0xc6,0x30,0xfe,0xf1,0x8f,
    0x61,0x0c,0xfb,0xfe,0xf7,0x01,0xff,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff,
    0xff,0xf8,0xe3,0x0f,0x0c,0x30,0xc0,0x00,0x33,0xcc,0x30,0xe3,0xfc,0xe1,0x03,0xef,
    0xbd,0x67,0x86,0x0d,0x1e,0xf8,0x60,0x87,0x19,0xc6,0x3c,0xff,0x3c,0x3f,0xfc,0xc0,
    0x00,0x03,0x0c,0x30,0xc0,0x30,0xc3,0x0c,0xff,0xff,0x3f,0x0f,0xff,0xf0,0x9e,0xe7,
    0x79,0xbe,0x67,0x6f,0xf6,0x66,0x66,0x06,0xf6,0xf9,0x9f,0x0f,0xc7,0x7f,0xbe,0xc7,
    0x3c,0x66,0x33,0xbb,0x99,0xcd,0x78,0xc6,0xfb,0xdc,0xc7,0x00,0xf8,0xe0,0x8f,0xe3,
    0x0e,0x3e,0xe0,0x01,0x0f,0xf8,0xe0,0x8e,0xe3,0x0f,0x3e,0x00,0x7f,0xfe,0x19,0x36,
    0x6c,0xd8,0x9f,0x1f,0x03,0x06,0x7e,0xfc,0x00,0xf8,0xe0,0x8f,0xe3,0x0e,0x3e,0xe0,
    0x01,0x0f,0xf8,0xe0,0x8e,0xe3,0x0f,0x3e,0x30,0xcc,0x7f,0xfe,0x01,0xfe,0xf0,0x0f,
    0xc3,0x18,0xc6,0x38,0xfe,0xf0,0x83,0x39,0x8c,0xfb,0xf8,0x87,0x01,0xfc,0xfe,0xc3,
    0xc3,0x0f,0x7e,0xf0,0xc3,0xc3,0x7f,0x3f,0xff,0xff,0x3f,0xf3,0xcc,0x33,0xc3,0x00,
    0x03,0x0c,0x30,0xf0,0xc3,0x0f,0xdf,0xff,0xbe,0xc1,0x0c,0x66,0x30,0x83,0x19,0xcc,
    0x60,0x8e,0xe3,0x0f,0x3e,0x00,0x9f,0xff,0xf9,0x0e,0xc7,0x30,0x0c,0x83,0x19,0x98,
    0x01,0x0f,0xf0,0x00,0x07,0x60,0x00,0x9f,0xff,0xf9,0x66,0x66,0x67,0xf6,0x62,0x3f,
    0xfe,0xe3,0x39,0x9c,0xc3,0x39,0x0c,0x03,0x8f,0x7f,0xbc,0xe3,0xb8,0x83,0x0f,0x38,
    0xe0,0x83,0x3b,0x8e,0x7b,0xfc,0xe3,0x01,0x8f,0x7f,0x3c,0xe3,0x38,0x83,0x0f,0x78,
    0x80,0x01,0x0c,0x60,0xc0,0x0f,0x7e,0x00,0x7f,0x7f,0x63,0x33,0x18,0x18,0xcc,0xc6,
    0xc3,0xff,0xff,0xff,0x33,0x33,0x33,0x33,0x33,0xf3,0x0f,0x01,0x03,0x03,0x06,0x06,
    0x0c,0x0c,0x18,0x18,0x30,0x30,0x60,0x60,0xc0,0xc0,0xff,0xcc,0xcc,0xcc,0xcc,0xcc,
    0xfc,0x0f,0x08,0x1c,0x3c,0x76,0xe3,0xc1,0xff,0xff,0x3f,0x11,0x01,0x7e,0xfc,0x01,
    0xe3,0xe7,0xef,0xd8,0xb0,0xff,0xfe,0x01,0x07,0x38,0x80,0x01,0xec,0xe1,0x3f,0x87,
    0x1b,0xd8,0xc0,0x06,0x76,0xf8,0xff,0xee,0x03,0xfc,0xfd,0x1f,0x1e,0x3c,0x60,0xc0,
    0x61,0xff,0xfc,0x00,0xc0,0x01,0x07,0x18,0x6f,0xfe,0x1d,0x37,0xd8,0x60,0x83,0x1d,
    0xe7,0x3f,0xff,0x7c,0xfc,0x1d,0x1f,0xfc,0xff,0xff,0x00,0xff,0xfc,0x00,0xf8,0xf9,
    0x33,0xf8,0xf7,0x8f,0x01,0x03,0x06,0x0c,0x18,0xfc,0xf9,0x03,0xbc,0xfb,0x7f,0xdc,
    0x60,0x83,0x0d,0x76,0x9c,0x7f,0xbc,0x01,0x06,0x18,0x3f,0x7c,0x00,0x07,0x1c,0x60,
    0x80,0x3d,0xfe,0x39,0x66,0x98,0x61,0x86,0x19,0xf6,0xfc,0xf3,0x18,0x18,0x00,0x1e,
    0x1e,0x18,0x18,0x18,0x18,0x18,0xff,0xff,0x30,0x18,0xe0,0xff,0x07,0x83,0xc1,0x60,
    0x30,0x18,0x0c,0x06,0xff,0x3e,0x07,0x1c,0x60,0x80,0x3d,0xf6,0xd8,0xe0,0x81,0x07,
    0x3e,0xd8,0x71,0xfe,0xf9,0x1e,0x1e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff,
    0xff,0xbf,0xf3,0x7f,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0xf6,0xee,0xef,0x0e,0xf7,
    0xfc,0xe7,0x98,0x61,0x86,0x19,0x66,0xd8,0xf3,0xcf,0x03,0x78,0xf8,0x77,0xf8,0xc0,
    0x03,0x0f,0x7c,0xb8,0x7f,0x78,0x00,0xee,0xf1,0x1f,0xc7,0x19,0xcc,0x60,0x06,0x73,
    0x9c,0x7f,0xec,0x61,0x00,0x03,0x7e,0xf0,0x03,0x78,0xe7,0x7f,0x87,0x33,0x30,0x03,
    0x33,0x30,0x87,0xe3,0x3f,0x78,0x03,0x30,0x00,0x03,0xfc,0xc0,0x0f,0xee,0xf9,0xcf,
    0x03,0x07,0x0c,0x30,0xc0,0xc0,0x1f,0x7f,0x00,0xfc,0xfd,0x1b,0xf6,0xc1,0x0f,0xbe,
    0xe0,0xff,0x7e,0x00,0x06,0x06,0x7f,0x7f,0x06,0x06,0x06,0x06,0xc6,0xfe,0x7c,0xe7,
    0x9d,0x67,0x98,0x61,0x86,0x19,0x66,0x9c,0xff,0xbc,0x03,0xdf,0xff,0x3e,0x63,0x18,
    0x83,0x0d,0x6c,0xc0,0x01,0x0e,0x70,0x00,0x8f,0x7f,0xbc,0xd9,0xec,0xc6,0x37,0xee,
    0x71,0x87,0x3b,0x88,0x01,0xef,0xdf,0xbb,0xe3,0x83,0x83,0x8f,0xbb,0xf7,0xef,0x01,
    0x8f,0x7f,0xbc,0xc1,0x18,0xc3,0x18,0x6e,0x60,0x03,0x0f,0x70,0x80,0x01,0x0e,0x7e,
    0xf0,0x03,0x7f,0x7f,0x33,0x18,0x0c,0x04,0xe2,0xff,0xff,0x98,0x33,0xc6,0x18,0x3b,
    0x87,0x31,0xc6,0x38,0x06,0xff,0xff,0xff,0x3f,0xe3,0x18,0x63,0x8c,0xe1,0xdc,0x18,
    0x63,0xce,0x00,0x0e,0x7e,0xcf,0x07,0x07,
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
 *  X offset: 4, Y offset: -11
 *  X size: 3, Y size: 12
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *      ###        
 *       #         
 *       #         
 *                 
 *      ###        
 *      ###        
 ********************/
{1, 11, 4, -11, 3, 12},

/********************
 *  Character: '"', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 6
 *    ### ###    
 *     #   #     
 *     #   #     
 *     #   #     
 *     #   #     
 *     #   #     
 ********************/
{6, 11, 2, -11, 7, 6},

/********************
 *  Character: '#', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 8, Y size: 14
 *     #  ##    
 *     ## ##    
 *    ### ##    
 *    ##  ##    
 *   ########   
 *   ########   
 *    ## ##     
 *    ## ##     
 *   ########   
 *   ########   
 *    ## ##     
 *    ## ##     
 *    ## ##     
 *    ## ##     
 ********************/
{12, 11, 1, -12, 8, 14},

/********************
 *  Character: '$', X advance: 11
 *  X offset: 2, Y offset: -12
 *  X size: 8, Y size: 15
 *       ##      
 *       ##      
 *     ######    
 *    #######    
 *    ##    #    
 *    ###        
 *     #####     
 *      ######   
 *    #     ##   
 *    ##    ##   
 *    #######    
 *    #######    
 *       ##      
 *       ##      
 *       ##      
 ********************/
{26, 11, 2, -12, 8, 15},

/********************
 *  Character: '%', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 7, Y size: 11
 *    ###       
 *   #  ##      
 *   #   #      
 *   #  ##      
 *    ######    
 *    ####      
 *   ## ###     
 *     ##  #    
 *     #   #    
 *     ##  #    
 *      ###     
 ********************/
{41, 11, 1, -10, 7, 11},

/********************
 *  Character: '&', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 8, Y size: 11
 *     ####     
 *    ######    
 *    ##  #     
 *    ##        
 *     ##       
 *    ###       
 *   ##### ##   
 *   ## #####   
 *   ##  ###    
 *   ########   
 *    #######   
 ********************/
{51, 11, 1, -10, 8, 11},

/********************
 *  Character: ''', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 3, Y size: 6
 *      ###        
 *       #         
 *       #         
 *       #         
 *       #         
 *       #         
 ********************/
{62, 11, 4, -11, 3, 6},

/********************
 *  Character: '(', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 4, Y size: 15
 *         ##       
 *         ##       
 *        ##        
 *        ##        
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ###        
 *        ##        
 *        ##        
 *         ##       
 *         ##       
 ********************/
{65, 11, 5, -11, 4, 15},

/********************
 *  Character: ')', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 4, Y size: 15
 *   ##         
 *   ##         
 *    ##        
 *    ##        
 *    ###       
 *     ##       
 *     ##       
 *     ##       
 *     ##       
 *     ##       
 *     ##       
 *    ##        
 *    ##        
 *   ##         
 *   ##         
 ********************/
{73, 11, 1, -11, 4, 15},

/********************
 *  Character: '*', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 8
 *      ##      
 *      ##      
 *      ##      
 *   ########   
 *    ######    
 *     ####     
 *    ######    
 *    ##  ##    
 ********************/
{81, 11, 1, -11, 8, 8},

/********************
 *  Character: '+', X advance: 11
 *  X offset: 2, Y offset: -9
 *  X size: 8, Y size: 10
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *    ########   
 *    ########   
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 ********************/
{89, 11, 2, -9, 8, 10},

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
{99, 11, 3, -2, 4, 6},

/********************
 *  Character: '-', X advance: 11
 *  X offset: 0, Y offset: -5
 *  X size: 10, Y size: 2
 *  ########## 
 *  ########## 
 ********************/
{102, 11, 0, -5, 10, 2},

/********************
 *  Character: '.', X advance: 11
 *  X offset: 4, Y offset: -1
 *  X size: 3, Y size: 2
 *      ###        
 *      ###        
 ********************/
{105, 11, 4, -1, 3, 2},

/********************
 *  Character: '/', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 8, Y size: 15
 *         ##   
 *        ###   
 *        ##    
 *        ##    
 *       ##     
 *       ##     
 *      ##      
 *      ##      
 *     ##       
 *     ##       
 *    ##        
 *    ##        
 *   ##         
 *   ##         
 *   #          
 ********************/
{106, 11, 1, -12, 8, 15},

/********************
 *  Character: '0', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *      ####     
 *     ######    
 *    ###  ###   
 *    ##    ##   
 *    ##    ##   
 *    ##    ##   
 *    ##    ##   
 *    ##    ##   
 *    ##    ##   
 *    ###  ###   
 *     ######    
 *      ####     
 ********************/
{121, 11, 2, -11, 8, 12},

/********************
 *  Character: '1', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *     ###      
 *    ####      
 *   ## ##      
 *      ##      
 *      ##      
 *      ##      
 *      ##      
 *      ##      
 *      ##      
 *      ##      
 *   ########   
 *   ########   
 ********************/
{133, 11, 1, -11, 8, 12},

/********************
 *  Character: '2', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *     #####    
 *    #######   
 *   ###   ###  
 *   ##     ##  
 *          ##  
 *         ##   
 *       ###    
 *      ###     
 *     ###      
 *    ##    ##  
 *    ########  
 *    ########  
 ********************/
{145, 11, 1, -11, 9, 12},

/********************
 *  Character: '3', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *      ####     
 *    #######    
 *    ##    ##   
 *          ##   
 *          ##   
 *       ####    
 *       ####    
 *         ###   
 *          ##   
 *          ##   
 *    #######    
 *     #####     
 ********************/
{159, 11, 2, -11, 8, 12},

/********************
 *  Character: '4', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *        ###    
 *        ###    
 *       ####    
 *      ## ##    
 *      ## ##    
 *     ##  ##    
 *     #   ##    
 *    ########   
 *    ########   
 *         ##    
 *       #####   
 *       #####   
 ********************/
{171, 11, 2, -11, 8, 12},

/********************
 *  Character: '5', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *    ######    
 *    ######    
 *    ##        
 *    ##        
 *    ######    
 *    #######   
 *         ###  
 *          ##  
 *          ##  
 *   ##    ###  
 *   ########   
 *    ######    
 ********************/
{183, 11, 1, -11, 9, 12},

/********************
 *  Character: '6', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *      #####   
 *     ######   
 *    ###       
 *   ###        
 *   ## ###     
 *   #######    
 *   ###  ###   
 *   ##    ##   
 *   ##    ##   
 *   ###  ###   
 *    ######    
 *     ####     
 ********************/
{197, 11, 1, -11, 8, 12},

/********************
 *  Character: '7', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 9, Y size: 12
 *   #########  
 *   #########  
 *    #    ##   
 *         ##   
 *         ##   
 *        ##    
 *        ##    
 *        ##    
 *       ##     
 *       ##     
 *       ##     
 *       #      
 ********************/
{209, 11, 1, -11, 9, 12},

/********************
 *  Character: '8', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *      ####     
 *     ######    
 *    ##    ##   
 *    ##    ##   
 *    ##    ##   
 *     ######    
 *     ######    
 *    ###  ###   
 *    ##    ##   
 *    ##    ##   
 *     ######    
 *      ####     
 ********************/
{223, 11, 2, -11, 8, 12},

/********************
 *  Character: '9', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 12
 *     ####     
 *    ######    
 *   ###  ###   
 *   ##    ##   
 *   ##    ##   
 *   ###  ###   
 *    #######   
 *     ### ##   
 *        ###   
 *       ###    
 *   ######     
 *   #####      
 ********************/
{235, 11, 1, -11, 8, 12},

/********************
 *  Character: ':', X advance: 11
 *  X offset: 4, Y offset: -8
 *  X size: 3, Y size: 9
 *      ###        
 *      ###        
 *                 
 *                 
 *                 
 *                 
 *                 
 *      ###        
 *      ###        
 ********************/
{247, 11, 4, -8, 3, 9},

/********************
 *  Character: ';', X advance: 11
 *  X offset: 3, Y offset: -8
 *  X size: 4, Y size: 12
 *      ###       
 *      ###       
 *                
 *                
 *                
 *                
 *      ###       
 *      ##        
 *      ##        
 *      #         
 *     ##         
 *     #          
 ********************/
{251, 11, 3, -8, 4, 12},

/********************
 *  Character: '<', X advance: 11
 *  X offset: 0, Y offset: -9
 *  X size: 9, Y size: 9
 *          #  
 *        ###  
 *      ####   
 *    ####     
 *  ####       
 *   ####      
 *     ####    
 *       ####  
 *         ##  
 ********************/
{257, 11, 0, -9, 9, 9},

/********************
 *  Character: '=', X advance: 11
 *  X offset: 0, Y offset: -7
 *  X size: 10, Y size: 5
 *  ########## 
 *  ########## 
 *             
 *  ########## 
 *  ########## 
 ********************/
{268, 11, 0, -7, 10, 5},

/********************
 *  Character: '>', X advance: 11
 *  X offset: 1, Y offset: -9
 *  X size: 10, Y size: 9
 *              
 *   ###        
 *    ####      
 *      ####    
 *        ####  
 *       ####   
 *     ####     
 *   ####       
 *   ##         
 ********************/
{275, 11, 1, -9, 10, 9},

/********************
 *  Character: '?', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *     #####     
 *    #######    
 *    ##   ###   
 *          ##   
 *         ###   
 *       ####    
 *       ###     
 *       #       
 *               
 *      ###      
 *      ###      
 ********************/
{287, 11, 2, -10, 8, 11},

/********************
 *  Character: '@', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 15
 *      ####    
 *     ######   
 *    ###   ##  
 *   ###    ##  
 *   ##   ####  
 *   ##  #####  
 *   ## ### ##  
 *   ## ##  ##  
 *   ## ##  ##  
 *   ##  ###### 
 *   ##   ##### 
 *   ###        
 *    ##    ##  
 *    ########  
 *      ####    
 ********************/
{298, 11, 1, -11, 10, 15},

/********************
 *  Character: 'A', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *    #####     
 *    ######    
 *      ####    
 *      #####   
 *     ##  ##   
 *     ##  ##   
 *    ########  
 *    ########  
 *   ###    ### 
 *  #####  #####
 *  #####  #####
 ********************/
{317, 11, 0, -10, 12, 11},

/********************
 *  Character: 'B', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ########   
 *   #########  
 *    ##    ##  
 *    ##    ##  
 *    #######   
 *    ########  
 *    ##    ### 
 *    ##     ## 
 *    ##     ## 
 *   ########## 
 *   ########   
 ********************/
{334, 11, 1, -10, 10, 11},

/********************
 *  Character: 'C', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *      ####### 
 *    ######### 
 *    ##    ### 
 *   ##      ## 
 *   ##         
 *   ##         
 *   ##         
 *   ##         
 *    ##     ## 
 *    ######### 
 *      #####   
 ********************/
{348, 11, 1, -10, 10, 11},

/********************
 *  Character: 'D', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ########   
 *  #########  
 *   ##    ### 
 *   ##      ##
 *   ##      ##
 *   ##      ##
 *   ##      ##
 *   ##      ##
 *   ##     ## 
 *  ########## 
 *  ########   
 ********************/
{362, 11, 0, -10, 11, 11},

/********************
 *  Character: 'E', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ########## 
 *   ########## 
 *    ## ##  ## 
 *    ## ##  ## 
 *    #####     
 *    #####     
 *    ## ##     
 *    ##     ## 
 *    ##     ## 
 *   ########## 
 *   ########## 
 ********************/
{378, 11, 1, -10, 10, 11},

/********************
 *  Character: 'F', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ########## 
 *   ########## 
 *    ##     ## 
 *    ## ##  ## 
 *    #####     
 *    #####     
 *    ## ##     
 *    ## ##     
 *    ##        
 *   ######     
 *   ######     
 ********************/
{392, 11, 1, -10, 10, 11},

/********************
 *  Character: 'G', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 11, Y size: 11
 *      ####### 
 *     ######## 
 *    ##     ## 
 *   ##      ## 
 *   ##         
 *   ##         
 *   ##   ######
 *   ##   ######
 *    ##     ## 
 *    ######### 
 *      #####   
 ********************/
{406, 11, 1, -10, 11, 11},

/********************
 *  Character: 'H', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *   #### #### 
 *   #### #### 
 *    ##    ## 
 *    ##    ## 
 *    ##    ## 
 *    ######## 
 *    ######## 
 *    ##    ## 
 *    ##    ## 
 *  ##### #####
 *  ##### #####
 ********************/
{422, 11, 0, -10, 11, 11},

/********************
 *  Character: 'I', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *    ########   
 *    ########   
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *    ########   
 *    ########   
 ********************/
{438, 11, 2, -10, 8, 11},

/********************
 *  Character: 'J', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *      ####### 
 *      ####### 
 *         ##   
 *         ##   
 *         ##   
 *         ##   
 *   ##    ##   
 *   ##    ##   
 *   ##   ###   
 *   #######    
 *    #####     
 ********************/
{449, 11, 1, -10, 10, 11},

/********************
 *  Character: 'K', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   #### ####  
 *   #### ####  
 *    ##  ##    
 *    ## ##     
 *    ####      
 *    #####     
 *    ## ###    
 *    ##  ##    
 *    ##   ##   
 *   ####  #### 
 *   ####  #### 
 ********************/
{463, 11, 1, -10, 10, 11},

/********************
 *  Character: 'L', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ######     
 *   ######     
 *     ##       
 *     ##       
 *     ##       
 *     ##       
 *     ##    ## 
 *     ##    ## 
 *     ##    ## 
 *   ########## 
 *   ########## 
 ********************/
{477, 11, 1, -10, 10, 11},

/********************
 *  Character: 'M', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *  ####    ####
 *  ####    ####
 *   ####  #### 
 *   ####  #### 
 *   ##### #### 
 *   ## #### ## 
 *   ## #### ## 
 *   ##  ##  ## 
 *   ##      ## 
 *  #####  #####
 *  #####  #####
 ********************/
{491, 11, 0, -10, 12, 11},

/********************
 *  Character: 'N', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ###   #####
 *  ####  #####
 *   ####   ## 
 *   ####   ## 
 *   ## ##  ## 
 *   ## ### ## 
 *   ##  ## ## 
 *   ##   #### 
 *   ##   #### 
 *  #####  ### 
 *  #####   ## 
 ********************/
{508, 11, 0, -10, 11, 11},

/********************
 *  Character: 'O', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *     #####   
 *    #######  
 *   ###   ### 
 *  ###     ###
 *  ##       ##
 *  ##       ##
 *  ##       ##
 *  ###     ###
 *   ###   ### 
 *    #######  
 *     #####   
 ********************/
{524, 11, 0, -10, 11, 11},

/********************
 *  Character: 'P', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 9, Y size: 11
 *   #######    
 *   ########   
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    #######   
 *    ######    
 *    ##        
 *    ##        
 *   ######     
 *   ######     
 ********************/
{540, 11, 1, -10, 9, 11},

/********************
 *  Character: 'Q', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 14
 *     #####   
 *    #######  
 *   ###   ### 
 *  ###     ###
 *  ##       ##
 *  ##       ##
 *  ##       ##
 *  ###     ###
 *   ###   ### 
 *    #######  
 *     #####   
 *     ##    ##
 *    #########
 *    ######## 
 ********************/
{553, 11, 0, -10, 11, 14},

/********************
 *  Character: 'R', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *   #######   
 *   ########  
 *    ##    ## 
 *    ##    ## 
 *    ##   ### 
 *    #######  
 *    ######   
 *    ##  ###  
 *    ##   ### 
 *  #####   ###
 *  #####    ##
 ********************/
{573, 11, 0, -10, 11, 11},

/********************
 *  Character: 'S', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *      ######   
 *     #######   
 *    ##    ##   
 *    ##    ##   
 *    ####       
 *     ######    
 *        ####   
 *    ##    ##   
 *    ##    ##   
 *    #######    
 *    ######     
 ********************/
{589, 11, 2, -10, 8, 11},

/********************
 *  Character: 'T', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 10, Y size: 11
 *   ########## 
 *   ########## 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *       ##     
 *       ##     
 *       ##     
 *       ##     
 *     ######   
 *     ######   
 ********************/
{600, 11, 1, -10, 10, 11},

/********************
 *  Character: 'U', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ##### #####
 *  ##### #####
 *   ##     ## 
 *   ##     ## 
 *   ##     ## 
 *   ##     ## 
 *   ##     ## 
 *   ##     ## 
 *   ###   ### 
 *    #######  
 *     #####   
 ********************/
{614, 11, 0, -10, 11, 11},

/********************
 *  Character: 'V', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *  #####  #####
 *  #####  #####
 *   ###    ### 
 *    ##    ##  
 *    ##    ##  
 *     ##  ##   
 *     ##  ##   
 *      ####    
 *      ####    
 *      ###     
 *       ##     
 ********************/
{630, 11, 0, -10, 12, 11},

/********************
 *  Character: 'W', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 12, Y size: 11
 *  #####  #####
 *  #####  #####
 *   ##  ##  ## 
 *   ## ###  ## 
 *   ## #### #  
 *   ## ######  
 *   #########  
 *   ####  ###  
 *    ###  ###  
 *    ###  ###  
 *    ##    ##  
 ********************/
{647, 11, 0, -10, 12, 11},

/********************
 *  Character: 'X', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ####   ####
 *  ####   ####
 *   ###   ### 
 *    ### ###  
 *     #####   
 *      ###    
 *     #####   
 *    ### ###  
 *   ###   ### 
 *  ####   ####
 *  ####   ####
 ********************/
{664, 11, 0, -10, 11, 11},

/********************
 *  Character: 'Y', X advance: 11
 *  X offset: 0, Y offset: -10
 *  X size: 11, Y size: 11
 *  ####   ####
 *  ####   ####
 *    ##   ### 
 *    ###  ##  
 *     #####   
 *      ####   
 *       ##    
 *       ##    
 *       ##    
 *     ######  
 *     ######  
 ********************/
{680, 11, 0, -10, 11, 11},

/********************
 *  Character: 'Z', X advance: 11
 *  X offset: 2, Y offset: -10
 *  X size: 8, Y size: 11
 *    #######    
 *    #######    
 *    ##   ##    
 *    ##  ##     
 *       ##      
 *       ##      
 *      ##  ##   
 *     ##   ##   
 *    ##    ##   
 *    ########   
 *    ########   
 ********************/
{696, 11, 2, -10, 8, 11},

/********************
 *  Character: '[', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 4, Y size: 15
 *       ####       
 *       ####       
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ####       
 *       ####       
 ********************/
{707, 11, 5, -11, 4, 15},

/********************
 *  Character: '\', X advance: 11
 *  X offset: 1, Y offset: -12
 *  X size: 8, Y size: 15
 *   #          
 *   ##         
 *   ##         
 *    ##        
 *    ##        
 *     ##       
 *     ##       
 *      ##      
 *      ##      
 *       ##     
 *       ##     
 *        ##    
 *        ##    
 *         ##   
 *         ##   
 ********************/
{715, 11, 1, -12, 8, 15},

/********************
 *  Character: ']', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 4, Y size: 15
 *   ####       
 *   ####       
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
 *     ##       
 *   ####       
 *   ####       
 ********************/
{730, 11, 1, -11, 4, 15},

/********************
 *  Character: '^', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 8, Y size: 6
 *      #       
 *     ###      
 *     ####     
 *    ## ###    
 *   ##   ###   
 *   #     ##   
 ********************/
{738, 11, 1, -11, 8, 6},

/********************
 *  Character: '_', X advance: 11
 *  X offset: 0, Y offset: 3
 *  X size: 11, Y size: 2
 *  ###########
 *  ###########
 ********************/
{744, 11, 0, 3, 11, 2},

/********************
 *  Character: '`', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 3, Y size: 3
 *     #          
 *      #         
 *       #        
 ********************/
{747, 11, 3, -11, 3, 3},

/********************
 *  Character: 'a', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 9, Y size: 9
 *    ######    
 *    #######   
 *         ##   
 *     ######   
 *    #######   
 *   ###   ##   
 *   ##    ##   
 *   #########  
 *    ########  
 ********************/
{749, 11, 1, -8, 9, 9},

/********************
 *  Character: 'b', X advance: 11
 *  X offset: 0, Y offset: -11
 *  X size: 11, Y size: 12
 *  ###        
 *  ###        
 *   ##        
 *   ## ####   
 *   ######### 
 *   ###    ###
 *   ##      ##
 *   ##      ##
 *   ##      ##
 *   ###    ###
 *  ########## 
 *  ### #####  
 ********************/
{760, 11, 0, -11, 11, 12},

/********************
 *  Character: 'c', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 9, Y size: 9
 *     #######  
 *    ########  
 *   ###    ##  
 *   ##     ##  
 *   ##         
 *   ##         
 *   ###    ##  
 *    ########  
 *     ######   
 ********************/
{777, 11, 1, -8, 9, 9},

/********************
 *  Character: 'd', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *         ###  
 *         ###  
 *          ##  
 *     #### ##  
 *    ########  
 *   ###   ###  
 *   ##     ##  
 *   ##     ##  
 *   ##     ##  
 *   ###   ###  
 *    ######### 
 *     ######## 
 ********************/
{788, 11, 1, -11, 10, 12},

/********************
 *  Character: 'e', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 9, Y size: 9
 *    #####    
 *   #######   
 *  ###   ###  
 *  ##     ##  
 *  #########  
 *  #########  
 *  ##         
 *   ########  
 *    ######   
 ********************/
{803, 11, 0, -8, 9, 9},

/********************
 *  Character: 'f', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 9, Y size: 12
 *       ######  
 *      #######  
 *      ##       
 *    ########   
 *    ########   
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *      ##       
 *    #######    
 *    #######    
 ********************/
{814, 11, 2, -11, 9, 12},

/********************
 *  Character: 'g', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 10, Y size: 13
 *     #### ### 
 *    ######### 
 *   ###   ###  
 *   ##     ##  
 *   ##     ##  
 *   ##     ##  
 *   ###   ###  
 *    ########  
 *     #### ##  
 *          ##  
 *          ##  
 *     ######   
 *     #####    
 ********************/
{828, 11, 1, -8, 10, 13},

/********************
 *  Character: 'h', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *   ###        
 *   ###        
 *    ##        
 *    ## ####   
 *    ########  
 *    ###   ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *   ####  #### 
 *   ####  #### 
 ********************/
{845, 11, 1, -11, 10, 12},

/********************
 *  Character: 'i', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *       ##      
 *       ##      
 *               
 *     ####      
 *     ####      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *    ########   
 *    ########   
 ********************/
{860, 11, 2, -11, 8, 12},

/********************
 *  Character: 'j', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 7, Y size: 16
 *        ##     
 *        ##     
 *               
 *    #######    
 *    #######    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *         ##    
 *    ######     
 *    #####      
 ********************/
{872, 11, 2, -11, 7, 16},

/********************
 *  Character: 'k', X advance: 11
 *  X offset: 1, Y offset: -11
 *  X size: 10, Y size: 12
 *   ###        
 *   ###        
 *    ##        
 *    ## ####   
 *    ## ####   
 *    ## ##     
 *    ####      
 *    ####      
 *    #####     
 *    ## ###    
 *   ###  ##### 
 *   ###  ##### 
 ********************/
{886, 11, 1, -11, 10, 12},

/********************
 *  Character: 'l', X advance: 11
 *  X offset: 2, Y offset: -11
 *  X size: 8, Y size: 12
 *     ####      
 *     ####      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *       ##      
 *    ########   
 *    ########   
 ********************/
{901, 11, 2, -11, 8, 12},

/********************
 *  Character: 'm', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 12, Y size: 9
 *  ###### ###  
 *  ########### 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *   ##  ##  ## 
 *  #### ### ###
 *  #### ### ###
 ********************/
{913, 11, 0, -8, 12, 9},

/********************
 *  Character: 'n', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 10, Y size: 9
 *   ### ####   
 *   #########  
 *    ###   ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *   ####  #### 
 *   ####  #### 
 ********************/
{927, 11, 1, -8, 10, 9},

/********************
 *  Character: 'o', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 10, Y size: 9
 *      ####    
 *    ########  
 *   ###    ### 
 *   ##      ## 
 *   ##      ## 
 *   ##      ## 
 *   ###    ### 
 *    ########  
 *      ####    
 ********************/
{939, 11, 1, -8, 10, 9},

/********************
 *  Character: 'p', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 11, Y size: 13
 *   ### ####  
 *   ######### 
 *    ###   ###
 *    ##     ##
 *    ##     ##
 *    ##     ##
 *    ###   ###
 *    ######## 
 *    ## ####  
 *    ##       
 *    ##       
 *  ######     
 *  ######     
 ********************/
{951, 11, 0, -8, 11, 13},

/********************
 *  Character: 'q', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 12, Y size: 13
 *     #### ### 
 *   ########## 
 *  ###    ###  
 *  ##      ##  
 *  ##      ##  
 *  ##      ##  
 *  ###    ###  
 *   #########  
 *     #### ##  
 *          ##  
 *          ##  
 *        ######
 *        ######
 ********************/
{969, 11, 0, -8, 12, 13},

/********************
 *  Character: 'r', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 10, Y size: 9
 *    ### ####  
 *    ######### 
 *     ####     
 *     ###      
 *     ##       
 *     ##       
 *     ##       
 *   #######    
 *   #######    
 ********************/
{989, 11, 1, -8, 10, 9},

/********************
 *  Character: 's', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 9, Y size: 9
 *     #######  
 *    ########  
 *    ##    ##  
 *    #####     
 *     ######   
 *       #####  
 *    #     ##  
 *   #########  
 *    ######    
 ********************/
{1001, 11, 1, -8, 9, 9},

/********************
 *  Character: 't', X advance: 11
 *  X offset: 1, Y offset: -10
 *  X size: 8, Y size: 11
 *    ##        
 *    ##        
 *   #######    
 *   #######    
 *    ##        
 *    ##        
 *    ##        
 *    ##        
 *    ##   ##   
 *    #######   
 *     #####    
 ********************/
{1012, 11, 1, -10, 8, 11},

/********************
 *  Character: 'u', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 10, Y size: 9
 *   ###  ####  
 *   ###  ####  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##    ##  
 *    ##   ###  
 *    ######### 
 *     #### ### 
 ********************/
{1023, 11, 1, -8, 10, 9},

/********************
 *  Character: 'v', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 11, Y size: 9
 *  ##### #####
 *  ##### #####
 *    ##   ##  
 *    ##   ##  
 *     ## ##   
 *     ## ##   
 *      ###    
 *      ###    
 *      ###    
 ********************/
{1035, 11, 0, -8, 11, 9},

/********************
 *  Character: 'w', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 11, Y size: 9
 *  ####   ####
 *  ####   ####
 *   ##  ## ## 
 *   ## ### ## 
 *    ##### ## 
 *    ### #### 
 *    ### ###  
 *    ### ###  
 *     #   ##  
 ********************/
{1048, 11, 0, -8, 11, 9},

/********************
 *  Character: 'x', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 9, Y size: 9
 *   #### ####  
 *   #### ####  
 *    ### ###   
 *     #####    
 *      ###     
 *     #####    
 *    ### ###   
 *   #### ####  
 *   #### ####  
 ********************/
{1061, 11, 1, -8, 9, 9},

/********************
 *  Character: 'y', X advance: 11
 *  X offset: 0, Y offset: -8
 *  X size: 11, Y size: 13
 *  ####   ####
 *  ####   ####
 *   ##     ## 
 *    ##   ##  
 *    ##   ##  
 *    ### ##   
 *     ## ##   
 *     ####    
 *      ###    
 *      ##     
 *     ###     
 *  ######     
 *  ######     
 ********************/
{1072, 11, 0, -8, 11, 13},

/********************
 *  Character: 'z', X advance: 11
 *  X offset: 1, Y offset: -8
 *  X size: 8, Y size: 9
 *   #######    
 *   #######    
 *   ##  ##     
 *      ##      
 *     ##       
 *     #        
 *    #   ###   
 *   ########   
 *   ########   
 ********************/
{1090, 11, 1, -8, 8, 9},

/********************
 *  Character: '{', X advance: 11
 *  X offset: 3, Y offset: -11
 *  X size: 5, Y size: 15
 *        ##      
 *       ###      
 *       ##       
 *       ##       
 *       ##       
 *       ##       
 *       ##       
 *     ###        
 *     ###        
 *       ##       
 *       ##       
 *       ##       
 *       ##       
 *       ###      
 *        ##      
 ********************/
{1099, 11, 3, -11, 5, 15},

/********************
 *  Character: '|', X advance: 11
 *  X offset: 5, Y offset: -11
 *  X size: 2, Y size: 15
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 *       ##         
 ********************/
{1109, 11, 5, -11, 2, 15},

/********************
 *  Character: '}', X advance: 11
 *  X offset: 4, Y offset: -11
 *  X size: 5, Y size: 15
 *      ##         
 *      ###        
 *       ##        
 *       ##        
 *       ##        
 *       ##        
 *       ##        
 *        ###      
 *        ###      
 *       ##        
 *       ##        
 *       ##        
 *       ##        
 *      ###        
 *      ##         
 ********************/
{1113, 11, 4, -11, 5, 15},

/********************
 *  Character: '~', X advance: 11
 *  X offset: 1, Y offset: -6
 *  X size: 9, Y size: 4
 *    ###       
 *   ###### ##  
 *   ##  #####  
 *        ###   
 ********************/
{1123, 11, 1, -6, 9, 4},

};

const monoGFX_font_t monoGFX_FreeMonoBold_9pt = {bitmapBuffer, 1128, glyphs};
