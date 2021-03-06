#ifndef __FONT_8X11_H
#define __FONT_8X11_H


const far rom char FONT_8x11[144][11] = 
{ 
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // -   - 00
    { 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00 },   // - ! - 01
    { 0x00, 0x00, 0x6C, 0x6C, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - " - 02
    { 0x00, 0x00, 0x34, 0x34, 0x7E, 0x34, 0x34, 0x7E, 0x34, 0x34, 0x00 },   // - # - 03
    { 0x00, 0x18, 0x3C, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x3C, 0x18, 0x00 },   // - $ - 04
    { 0x00, 0x00, 0x62, 0x66, 0x0C, 0x18, 0x30, 0x66, 0x46, 0x00, 0x00 },   // - % - 05
    { 0x00, 0x38, 0x6C, 0x6C, 0x38, 0x3C, 0x6E, 0x64, 0x6E, 0x3A, 0x00 },   // - & - 06
    { 0x00, 0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - ' - 07
    { 0x00, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00 },   // - ( - 08
    { 0x00, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00 },   // - ) - 09
    { 0x00, 0x00, 0x18, 0x5A, 0x7E, 0x3C, 0x7E, 0x5A, 0x18, 0x00, 0x00 },   // - * - 0A
    { 0x00, 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00, 0x00 },   // - + - 0B
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x08 },   // - , - 0C
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - - - 0D
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00 },   // - . - 0E
    { 0x00, 0x00, 0x02, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00, 0x00 },   // - / - 0F

    { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00 },   // - : - 10
    { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x08, 0x00 },   // - ; - 11
    { 0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00 },   // - < - 12
    { 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 },   // - = - 13
    { 0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00 },   // - > - 14
    { 0x00, 0x3C, 0x66, 0x66, 0x06, 0x0C, 0x18, 0x18, 0x00, 0x18, 0x00 },   // - ? - 15
    { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x6E, 0x6E, 0x6E, 0x60, 0x3C, 0x00 },   // - @ - 16
    { 0x00, 0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00 },   // - [ - 17
    { 0x00, 0x00, 0x40, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00, 0x00 },   // -   - 18 reversed slash
    { 0x00, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00 },   // - ] - 19
    { 0x00, 0x18, 0x3C, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - ^ - 1A
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00 },   // - _ - 1B
    { 0x00, 0x18, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - ` - 1C
    { 0x00, 0x0C, 0x18, 0x18, 0x30, 0x60, 0x30, 0x18, 0x18, 0x0C, 0x00 },   // - { - 1D
    { 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00 },   // - | - 1E
    { 0x00, 0x30, 0x18, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x18, 0x30, 0x00 },   // - } - 1F
    { 0x00, 0x32, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - ~ - 20

    { 0x00, 0x3C, 0x66, 0x66, 0x6E, 0x7E, 0x76, 0x66, 0x66, 0x3C, 0x00 },   // - 0 - 21
    { 0x00, 0x08, 0x18, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x00 },   // - 1 - 22
    { 0x00, 0x3C, 0x66, 0x66, 0x06, 0x0C, 0x18, 0x30, 0x66, 0x7E, 0x00 },   // - 2 - 23
    { 0x00, 0x3C, 0x66, 0x06, 0x06, 0x1C, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - 3 - 24
    { 0x00, 0x0C, 0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x0C, 0x1E, 0x00 },   // - 4 - 25
    { 0x00, 0x7E, 0x66, 0x60, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - 5 - 26
    { 0x00, 0x1C, 0x30, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - 6 - 27
    { 0x00, 0x7E, 0x66, 0x06, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x00 },   // - 7 - 28
    { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - 8 - 29
    { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - 9 - 2A
 
    { 0x00, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00 },   // - � - 2B
    { 0x00, 0x7E, 0x66, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00 },   // - � - 2C
    { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00 },   // - � - 2D
    { 0x00, 0x7E, 0x66, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00 },   // - � - 2E
    { 0x00, 0x1C, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x7E, 0x42 },   // - � - 2F
    { 0x00, 0x7E, 0x66, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x66, 0x7E, 0x00 },   // - � - 30
    { 0x00, 0x5A, 0x5A, 0x5A, 0x5A, 0x3C, 0x5A, 0x5A, 0x5A, 0x5A, 0x00 },   // - � - 31
    { 0x00, 0x3C, 0x66, 0x06, 0x06, 0x1C, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - � - 32
    { 0x00, 0x62, 0x62, 0x62, 0x66, 0x6E, 0x7A, 0x72, 0x62, 0x62, 0x00 },   // - � - 33
    { 0x00, 0x08, 0x62, 0x62, 0x66, 0x6E, 0x7A, 0x72, 0x62, 0x62, 0x00 },   // - � - 34
    { 0x00, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x66, 0x66, 0x00 },   // - � - 35
    { 0x00, 0x1E, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x66, 0x00 },   // - � - 36
    { 0x00, 0x62, 0x62, 0x76, 0x7E, 0x6A, 0x62, 0x62, 0x62, 0x62, 0x00 },   // - � - 37
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - � - 38
    { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - � - 39
    { 0x00, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - � - 3A
    { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x60, 0x00 },   // - � - 3B
    { 0x00, 0x3C, 0x66, 0x66, 0x60, 0x60, 0x60, 0x66, 0x66, 0x3C, 0x00 },   // - � - 3C
    { 0x00, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 },   // - T - 3D
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - � - 3E
    { 0x00, 0x18, 0x3C, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x3C, 0x18, 0x00 },   // - � - 3F
    { 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x00 },   // - � - 40
    { 0x00, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x7E, 0x02 },   // - � - 41
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x06, 0x06, 0x00 },   // - � - 42
    { 0x00, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x7E, 0x00 },   // - � - 43
    { 0x00, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x7F, 0x01 },   // - � - 44
    { 0x00, 0x70, 0x30, 0x30, 0x3C, 0x32, 0x32, 0x32, 0x32, 0x3C, 0x00 },   // - � - 45
    { 0x00, 0x62, 0x62, 0x62, 0x62, 0x72, 0x6A, 0x6A, 0x6A, 0x72, 0x00 },   // - � - 46
    { 0x00, 0x60, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x00 },   // - � - 47
    { 0x00, 0x3C, 0x66, 0x06, 0x06, 0x1E, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - � - 48
    { 0x00, 0x64, 0x6E, 0x6A, 0x6A, 0x7A, 0x6A, 0x6A, 0x6E, 0x64, 0x00 },   // - � - 49
    { 0x00, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - � - 4A

    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x06, 0x3E, 0x66, 0x66, 0x3A, 0x00 },   // - � - 4B
    { 0x00, 0x3C, 0x60, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - � - 4C
    { 0x00, 0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00 },   // - � - 4D
    { 0x00, 0x00, 0x00, 0x7E, 0x66, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00 },   // - � - 4E
    { 0x00, 0x3C, 0x06, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - � - 4F
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x66, 0x7E, 0x60, 0x66, 0x3C, 0x00 },   // - � - 50
    { 0x00, 0x00, 0x00, 0x5A, 0x5A, 0x5A, 0x3C, 0x5A, 0x5A, 0x5A, 0x00 },   // - � - 51
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00 },   // - � - 52
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x6E, 0x76, 0x66, 0x66, 0x00 },   // - � - 53
    { 0x00, 0x18, 0x00, 0x66, 0x66, 0x66, 0x6E, 0x76, 0x66, 0x66, 0x00 },   // - � - 54
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x66, 0x00 },   // - � - 55
    { 0x00, 0x00, 0x00, 0x1E, 0x36, 0x36, 0x36, 0x36, 0x36, 0x66, 0x00 },   // - � - 56
    { 0x00, 0x00, 0x00, 0x62, 0x62, 0x76, 0x6A, 0x62, 0x62, 0x62, 0x00 },   // - � - 57
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00 },   // - � - 58
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - � - 59
    { 0x00, 0x00, 0x00, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - � - 5A
    { 0x00, 0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x00 },   // - � - 5B
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x00 },   // - � - 5C
    { 0x00, 0x00, 0x00, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 },   // - � - 5D
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C, 0x00 },   // - � - 5E
    { 0x00, 0x00, 0x00, 0x18, 0x3C, 0x5A, 0x5A, 0x5A, 0x3C, 0x18, 0x00 },   // - � - 5F
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x00 },   // - � - 60
    { 0x00, 0x00, 0x00, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x7E, 0x02 },   // - � - 61
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x00 },   // - � - 62
    { 0x00, 0x00, 0x00, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x7E, 0x00 },   // - � - 63
    { 0x00, 0x00, 0x00, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x7F, 0x01 },   // - � - 64
    { 0x00, 0x00, 0x00, 0x70, 0x30, 0x3C, 0x36, 0x36, 0x36, 0x3C, 0x00 },   // - � - 65
    { 0x00, 0x00, 0x00, 0x62, 0x62, 0x62, 0x72, 0x6A, 0x6A, 0x72, 0x00 },   // - � - 66
    { 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x00 },   // - � - 67
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x06, 0x1E, 0x06, 0x66, 0x3C, 0x00 },   // - � - 68
    { 0x00, 0x00, 0x00, 0x64, 0x6A, 0x6A, 0x7A, 0x6A, 0x6A, 0x64, 0x00 },   // - � - 69
    { 0x00, 0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x66, 0x00 },   // - � - 6A

    { 0x00, 0x78, 0x6C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00 },   // - D - 6B
    { 0x00, 0x7E, 0x66, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x60, 0x60, 0x00 },   // - F - 6C
    { 0x00, 0x3C, 0x66, 0x66, 0x60, 0x60, 0x6E, 0x66, 0x66, 0x3C, 0x00 },   // - G - 6D
    { 0x00, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x00 },   // - I - 6E
    { 0x00, 0x7E, 0x66, 0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3C, 0x00 },   // - J - 6F
    { 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x66, 0x7E, 0x00 },   // - L - 70
    { 0x00, 0x62, 0x62, 0x72, 0x7A, 0x6E, 0x66, 0x62, 0x62, 0x62, 0x00 },   // - N - 71
    { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6C, 0x6E, 0x3A, 0x00 },   // - Q - 72
    { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - R - 73
    { 0x00, 0x3C, 0x66, 0x60, 0x60, 0x3C, 0x06, 0x06, 0x66, 0x3C, 0x00 },   // - S - 74
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - U - 75
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00 },   // - V - 76
    { 0x00, 0x62, 0x62, 0x62, 0x62, 0x62, 0x6A, 0x7E, 0x76, 0x62, 0x00 },   // - W - 77
    { 0x00, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x00 },   // - Y - 78
    { 0x00, 0x7E, 0x66, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x66, 0x7E, 0x00 },   // - Z - 79
    
    { 0x00, 0x70, 0x30, 0x30, 0x3C, 0x36, 0x36, 0x36, 0x36, 0x7C, 0x00 },   // - b - 7A
    { 0x00, 0x0E, 0x0C, 0x0C, 0x3C, 0x6C, 0x6C, 0x6C, 0x6C, 0x3E, 0x00 },   // - d - 7B
    { 0x00, 0x18, 0x34, 0x30, 0x30, 0x30, 0x7C, 0x30, 0x30, 0x78, 0x00 },   // - f - 7C
    { 0x00, 0x00, 0x00, 0x3A, 0x6C, 0x6C, 0x7C, 0x3C, 0x0C, 0x6C, 0x38 },   // - g - 7D
    { 0x00, 0x00, 0x60, 0x60, 0x60, 0x6C, 0x76, 0x66, 0x66, 0x66, 0x00 },   // - h - 7E
    { 0x00, 0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00 },   // - i - 7F
    { 0x00, 0x00, 0x06, 0x00, 0x1E, 0x06, 0x06, 0x06, 0x36, 0x36, 0x1C },   // - j - 80
    { 0x00, 0x60, 0x60, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x66, 0x00 },   // - k - 81
    { 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00 },   // - l - 82
    { 0x00, 0x00, 0x00, 0x7C, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x6A, 0x00 },   // - m - 83
    { 0x00, 0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00 },   // - n - 84
    { 0x00, 0x00, 0x00, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x00 },   // - q - 85
    { 0x00, 0x00, 0x00, 0x5C, 0x36, 0x36, 0x30, 0x30, 0x30, 0x30, 0x00 },   // - r - 86
    { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x3C, 0x00 },   // - s - 87
    { 0x00, 0x18, 0x18, 0x18, 0x18, 0x3E, 0x18, 0x18, 0x18, 0x0E, 0x00 },   // - t - 88
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },   // - u - 89
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00 },   // - v - 8A
    { 0x00, 0x00, 0x00, 0x62, 0x62, 0x6A, 0x6A, 0x6A, 0x6A, 0x34, 0x00 },   // - w - 8B
    { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C },   // - y - 8C
    { 0x00, 0x00, 0x00, 0x7E, 0x66, 0x0C, 0x18, 0x30, 0x66, 0x7E, 0x00 },   // - z - 8D
    
    { 0x00, 0x3C, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },   // - � - 8E ������� 
 
    { 0x3C, 0x66, 0x81, 0xA5, 0xA5, 0x81, 0x99, 0xA5, 0x81, 0x66, 0x3C }    // - ������! - 8F
};


#endif
