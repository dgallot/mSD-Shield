#include <inttypes.h>
#include <avr/pgmspace.h>
#include "fonts.h"

#ifdef FONT_12X16
const prog_uint8_t font_PGM[] = 
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x20
  0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x21
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x22
  0x00,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0xFF,0x03,0xCC,0x00,0xCC,0x00,0x98,0x01,0x98,0x01,0xFC,0x07,0x30,0x03,0x30,0x03,0x30,0x03,0x00,0x00,0x00,0x00,0x00,0x00, // 0x23
  0x60,0x00,0x60,0x00,0xF8,0x01,0xFC,0x03,0x60,0x03,0x60,0x03,0xF8,0x03,0xFC,0x01,0x6C,0x00,0x6C,0x00,0xFC,0x03,0xF8,0x01,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x24
  0x00,0x00,0x00,0x00,0x01,0x00,0x83,0x03,0x87,0x03,0x8E,0x03,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x8E,0x03,0x0E,0x07,0x0E,0x06,0x00,0x00,0x00,0x00, // 0x25
  0x00,0x00,0x70,0x00,0xD8,0x00,0x98,0x01,0x98,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x01,0xE0,0x03,0x36,0x03,0x3C,0x03,0x18,0x03,0xBC,0x03,0xE6,0x01,0x00,0x00,0x00,0x00, // 0x26
  0xE0,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x27
  0x38,0x00,0x60,0x00,0xE0,0x00,0xC0,0x00,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x00,0xE0,0x00,0x60,0x00,0x38,0x00,0x00,0x00,0x00,0x00, // 0x28
  0xC0,0x01,0x60,0x00,0x70,0x00,0x30,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x30,0x00,0x70,0x00,0x60,0x00,0xC0,0x01,0x00,0x00,0x00,0x00, // 0x29
  0x00,0x00,0x00,0x00,0x00,0x00,0x6C,0x03,0x6C,0x03,0xF8,0x01,0xF0,0x00,0xFC,0x03,0xF0,0x00,0xF8,0x01,0x6C,0x03,0x6C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x2A
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xFC,0x03,0xFC,0x03,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x2B
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0xC0,0x00, // 0x2C
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x03,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x2D
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00, // 0x2E
  0x00,0x00,0x01,0x00,0x03,0x00,0x07,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x00,0x07,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00, // 0x2F
  0xF8,0x00,0xFE,0x03,0x06,0x03,0x07,0x06,0x0F,0x06,0x1B,0x06,0x33,0x06,0x63,0x06,0xC3,0x06,0x83,0x07,0x03,0x07,0x06,0x03,0xFE,0x03,0xF8,0x00,0x00,0x00,0x00,0x00, // 0x30
  0x30,0x00,0x70,0x00,0xF0,0x01,0xF0,0x01,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0xFE,0x01,0xFE,0x01,0x00,0x00,0x00,0x00, // 0x31
  0xFC,0x01,0xFE,0x03,0x07,0x07,0x03,0x06,0x07,0x06,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0xFF,0x07,0xFF,0x07,0x00,0x00,0x00,0x00, // 0x32
  0xFC,0x01,0xFE,0x03,0x07,0x07,0x03,0x06,0x03,0x00,0x07,0x00,0xFE,0x00,0xFC,0x00,0x06,0x00,0x03,0x00,0x03,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00, // 0x33
  0x1C,0x00,0x3C,0x00,0x7C,0x00,0xEC,0x00,0xCC,0x01,0x8C,0x03,0x0C,0x07,0x0C,0x06,0xFF,0x07,0xFF,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00, // 0x34
  0xFF,0x07,0xFF,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0xFC,0x07,0xFE,0x03,0x07,0x00,0x03,0x00,0x03,0x00,0x03,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00, // 0x35
  0x3C,0x00,0x7C,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x00,0x03,0xFC,0x07,0xFE,0x07,0x07,0x07,0x03,0x06,0x03,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00, // 0x36
  0xFF,0x07,0xFF,0x07,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00, // 0x37
  0xF8,0x00,0xFC,0x01,0x8E,0x03,0x06,0x03,0x06,0x03,0x8E,0x03,0xFC,0x01,0xFE,0x03,0x07,0x07,0x03,0x06,0x03,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00, // 0x38
  0xFC,0x01,0xFE,0x03,0x07,0x07,0x03,0x06,0x03,0x06,0x07,0x07,0xFF,0x03,0xFF,0x01,0x06,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0xF0,0x01,0xE0,0x01,0x00,0x00,0x00,0x00, // 0x39
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x3A
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0xC0,0x00, // 0x3B
  0x0C,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x80,0x03,0xC0,0x01,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00, // 0x3C
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x03,0xFE,0x03,0x00,0x00,0x00,0x00,0xFE,0x03,0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x3D
  0x00,0x03,0x80,0x03,0xC0,0x01,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x00,0x03,0x00,0x00,0x00,0x00, // 0x3E
  0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x0E,0x06,0x1C,0x00,0x38,0x00,0x70,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x3F
  0xFC,0x01,0xFE,0x03,0x06,0x03,0x7B,0x06,0xFB,0x06,0xDB,0x06,0xDB,0x06,0xDB,0x06,0xDB,0x06,0xFE,0x06,0x7C,0x06,0x00,0x07,0xFC,0x03,0xFC,0x00,0x00,0x00,0x00,0x00, // 0x40
  0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFC,0x03,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x41
  0xF0,0x07,0xF8,0x07,0x1C,0x06,0x0C,0x06,0x0C,0x06,0x1C,0x06,0xF8,0x07,0xFC,0x07,0x0E,0x06,0x06,0x06,0x06,0x06,0x0E,0x06,0xFC,0x07,0xF8,0x07,0x00,0x00,0x00,0x00, // 0x42
  0xF8,0x00,0xFC,0x01,0x8E,0x03,0x06,0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x06,0x03,0x8E,0x03,0xFC,0x01,0xF8,0x00,0x00,0x00,0x00,0x00, // 0x43
  0xF0,0x07,0xF8,0x07,0x1C,0x06,0x0C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x06,0x1C,0x06,0xF8,0x07,0xF0,0x07,0x00,0x00,0x00,0x00, // 0x44
  0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0x45
  0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00, // 0x46
  0xFC,0x00,0xFE,0x01,0x86,0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x3E,0x06,0x3E,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x86,0x03,0xFE,0x01,0xFE,0x00,0x00,0x00,0x00,0x00, // 0x47
  0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x48
  0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x49
  0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x06,0x06,0x06,0x0C,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x4A
  0x06,0x06,0x0E,0x06,0x1C,0x06,0x38,0x06,0x70,0x06,0xE0,0x06,0xC0,0x07,0xC0,0x07,0xE0,0x06,0x70,0x06,0x38,0x06,0x1C,0x06,0x0E,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x4B
  0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0x4C
  0x06,0x06,0x0E,0x07,0x0E,0x07,0x9E,0x07,0x9E,0x07,0xF6,0x06,0xF6,0x06,0x66,0x06,0x66,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x4D
  0x06,0x06,0x06,0x07,0x06,0x07,0x86,0x07,0xC6,0x06,0xC6,0x06,0x66,0x06,0x66,0x06,0x36,0x06,0x36,0x06,0x1E,0x06,0x0E,0x06,0x0E,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x4E
  0xF0,0x00,0xF8,0x01,0x9C,0x03,0x0C,0x03,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0x9C,0x03,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00, // 0x4F
  0xF8,0x07,0xFC,0x07,0x0E,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x06,0xFC,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00, // 0x50
  0xF0,0x00,0xF8,0x01,0x9C,0x03,0x0C,0x03,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x36,0x06,0x3C,0x03,0x9C,0x03,0xFE,0x01,0xF6,0x00,0x00,0x00,0x00,0x00, // 0x51
  0xF8,0x07,0xFC,0x07,0x0E,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x06,0xFC,0x07,0xF8,0x07,0x70,0x06,0x38,0x06,0x1C,0x06,0x0E,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x52
  0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x00,0x06,0x00,0x07,0xF8,0x03,0xFC,0x01,0x0E,0x00,0x06,0x00,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x53
  0xFC,0x03,0xFC,0x03,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x54
  0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x55
  0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x56
  0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x66,0x06,0x66,0x06,0xF6,0x06,0x9E,0x07,0x0E,0x07,0x0E,0x07,0x06,0x06,0x00,0x00,0x00,0x00, // 0x57
  0x06,0x06,0x06,0x06,0x0C,0x03,0x0C,0x03,0x98,0x01,0xF0,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x0C,0x03,0x0C,0x03,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x58
  0x06,0x06,0x06,0x06,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x59
  0xFE,0x07,0xFE,0x07,0x0C,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0x80,0x01,0x00,0x03,0x00,0x03,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0x5A
  0xF8,0x01,0xF8,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x5B
  0x00,0x00,0x00,0x04,0x00,0x06,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x5C
  0xF8,0x01,0xF8,0x01,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x5D
  0x20,0x00,0x70,0x00,0xF8,0x00,0xDC,0x01,0x8E,0x03,0x07,0x07,0x03,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x5E
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x07,0xFF,0x07, // 0x5F
  0x00,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x60,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x60
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0x61
  0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xF8,0x06,0xFC,0x07,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x06,0xFC,0x07,0xF8,0x07,0x00,0x00,0x00,0x00, // 0x62
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x06,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x63
  0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0xF6,0x01,0xFE,0x03,0x1E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x07,0xFE,0x03,0xFE,0x01,0x00,0x00,0x00,0x00, // 0x64
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0xFE,0x07,0xFC,0x07,0x00,0x06,0x00,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x65
  0x78,0x00,0xF8,0x00,0xC0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xF0,0x07,0xF0,0x07,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00, // 0x66
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x01,0xFE,0x03,0x06,0x07,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x06,0x00,0x0E,0x00,0xFC,0x03,0xF8,0x03, // 0x67
  0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0xF0,0x06,0xF8,0x07,0x1C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x00,0x00,0x00,0x00, // 0x68
  0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x69
  0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x98,0x01,0xF8,0x01,0xF0,0x00, // 0x6A
  0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x18,0x03,0x38,0x03,0x70,0x03,0xE0,0x03,0xE0,0x03,0x70,0x03,0x38,0x03,0x1C,0x03,0x0C,0x03,0x00,0x00,0x00,0x00, // 0x6B
  0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x6C
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x98,0x05,0xFC,0x07,0xFE,0x07,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x00,0x00,0x00,0x00, // 0x6D
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0xFC,0x03,0x0E,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x00,0x00,0x00,0x00, // 0x6E
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x6F
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xFC,0x07,0x0E,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x07,0xF8,0x06,0x00,0x06,0x00,0x06,0x00,0x06, // 0x70
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x01,0xFE,0x03,0x06,0x07,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x06,0x00,0x06,0x00,0x06,0x00, // 0x71
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x03,0xFE,0x03,0x86,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00, // 0x72
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x03,0xF8,0x07,0x00,0x06,0xF0,0x07,0xF8,0x03,0x18,0x00,0x18,0x00,0xF8,0x07,0xF0,0x03,0x00,0x00,0x00,0x00, // 0x73
  0x00,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xF0,0x07,0xF0,0x07,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xF8,0x01,0xF8,0x00,0x00,0x00,0x00,0x00, // 0x74
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0x75
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x76
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0xF6,0x06,0xFC,0x03,0x9C,0x03,0x08,0x01,0x00,0x00,0x00,0x00, // 0x77
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x1C,0x07,0xB8,0x03,0xF0,0x01,0xE0,0x00,0xF0,0x01,0xB8,0x03,0x1C,0x07,0x0C,0x06,0x00,0x00,0x00,0x00, // 0x78
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0x80,0x01, // 0x79
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x07,0xF8,0x07,0x30,0x00,0x60,0x00,0xC0,0x00,0x80,0x01,0x00,0x03,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00, // 0x7A
  0x3C,0x00,0x7C,0x00,0xE0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x01,0x80,0x03,0xC0,0x01,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,0x7C,0x00,0x3C,0x00,0x00,0x00, // 0x7B
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0x7C
  0xC0,0x03,0xE0,0x03,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x00,0x1C,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x70,0x00,0xE0,0x03,0xC0,0x03,0x00,0x00, // 0x7D
  0x00,0x00,0x00,0x00,0xC6,0x01,0x6C,0x03,0x38,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x7E
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x0C,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x7F
#ifndef FONT_END7F
  0xF8,0x00,0xFC,0x01,0x8E,0x03,0x06,0x03,0x06,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x06,0x03,0x8E,0x03,0xFC,0x01,0xF8,0x00,0x60,0x00,0xE0,0x01,0xE0,0x01, // 0x80
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0x81
  0x00,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x82
  0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0x83
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0x84
  0x00,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0x85
  0x00,0x00,0x60,0x00,0x90,0x00,0x60,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0x86
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x60,0x00,0xE0,0x01, // 0x87
  0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x88
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x89
  0x00,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x06,0x07,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x8A
  0x00,0x00,0x00,0x00,0xB0,0x01,0xB0,0x01,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x8B
  0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x8C
  0x00,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x8D
  0x98,0x01,0x98,0x01,0x00,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x8E
  0x60,0x00,0x90,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0x8F
  0x18,0x00,0x30,0x00,0x60,0x00,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0x90
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x03,0x66,0x06,0x66,0x00,0xFC,0x03,0x60,0x06,0x60,0x06,0x66,0x06,0xBC,0x03,0x00,0x00,0x00,0x00, // 0x91
  0x7E,0x00,0x7E,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x01,0xB0,0x01,0xBC,0x01,0x3C,0x03,0x30,0x03,0xF0,0x03,0xF0,0x07,0x30,0x06,0x3E,0x06,0x3E,0x06,0x00,0x00,0x00,0x00, // 0x92
  0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x93
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x94
  0x00,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x95
  0x00,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0x96
  0x00,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0x97
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0x80,0x01, // 0x98
  0x98,0x01,0x98,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0x99
  0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0x9A
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6,0x01,0xFC,0x03,0x1E,0x07,0x36,0x06,0x66,0x06,0xC6,0x06,0x8E,0x07,0xFC,0x03,0xF8,0x06,0x00,0x00,0x00,0x00, // 0x9B
  0x00,0x00,0x00,0x00,0x78,0x00,0xFC,0x00,0xCC,0x00,0xC0,0x00,0xC0,0x00,0xF0,0x01,0xC0,0x00,0xC0,0x00,0x80,0x01,0xFE,0x03,0xBC,0x03,0x00,0x00,0x00,0x00,0x00,0x00, // 0x9C
  0x00,0x00,0x00,0x00,0xF6,0x01,0xFC,0x03,0x1E,0x07,0x36,0x06,0x36,0x06,0x66,0x06,0x66,0x06,0xC6,0x06,0xC6,0x06,0x8E,0x07,0xFC,0x03,0xF8,0x06,0x00,0x00,0x00,0x00, // 0x9D
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x03,0x98,0x01,0xF0,0x00,0x60,0x00,0xF0,0x00,0x98,0x01,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x9E
  0x38,0x00,0x7C,0x00,0x6C,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x03,0xE0,0x03,0xC0,0x01,0x00,0x00, // 0x9F
  0x00,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0xA0
  0x00,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xA1
  0x00,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xA2
  0x00,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFE,0x03,0xF6,0x01,0x00,0x00,0x00,0x00, // 0xA3
  0x00,0x00,0x00,0x00,0xEC,0x00,0xB8,0x01,0x00,0x00,0xF8,0x03,0xFC,0x03,0x0E,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x06,0x03,0x00,0x00,0x00,0x00, // 0xA4
  0xEC,0x00,0xB8,0x01,0x00,0x00,0x06,0x06,0x06,0x07,0x86,0x07,0xC6,0x07,0xE6,0x06,0x76,0x06,0x3E,0x06,0x1E,0x06,0x0E,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0xA5
  0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x03,0xFE,0x07,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0xFC,0x03,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xA6
  0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0xFC,0x03,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xA7
  0x60,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x06,0x07,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xA8
  0x00,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x07,0x07,0xF3,0x06,0xDB,0x06,0xF3,0x06,0xDB,0x06,0xDB,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0xA9
  0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x0F,0xFE,0x0F,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xAA
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x0C,0x03,0x18,0x03,0xB0,0x07,0x60,0x00,0xDC,0x00,0x86,0x01,0x0C,0x03,0x18,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xAB
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x0C,0x03,0x18,0x03,0xB0,0x07,0x60,0x00,0xD6,0x00,0xB6,0x01,0x3E,0x03,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xAC
  0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0xAD
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0x01,0x18,0x03,0x30,0x06,0x18,0x03,0x8C,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xAE
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x06,0x18,0x03,0x8C,0x01,0x18,0x03,0x30,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xAF
  0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02,0x88,0x08,0x22,0x02, // 0xB0
  0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A, // 0xB1
  0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D,0x77,0x07,0xDD,0x0D, // 0xB2
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xB3
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x0F,0xE0,0x0F,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xB4
  0x30,0x00,0x60,0x00,0xC0,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0xB5
  0x60,0x00,0xF0,0x00,0x98,0x01,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0xB6
  0xC0,0x00,0x60,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0xB7
  0x00,0x00,0x00,0x00,0xFC,0x01,0xFE,0x03,0x07,0x07,0x73,0x06,0xDB,0x06,0xC3,0x06,0xDB,0x06,0x73,0x06,0x07,0x07,0xFE,0x03,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0xB8
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x0F,0x60,0x0F,0x60,0x00,0x60,0x0F,0x60,0x0F,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xB9
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xBA
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0xE0,0x0F,0x60,0x00,0x60,0x0F,0x60,0x0F,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xBB
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x0F,0x60,0x0F,0x60,0x00,0xE0,0x0F,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xBC
  0x00,0x00,0x60,0x00,0x60,0x00,0xF8,0x00,0xFC,0x01,0xEC,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0xEC,0x03,0xFC,0x01,0xF8,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0xBD
  0x06,0x06,0x06,0x06,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0xFC,0x03,0x60,0x00,0xFC,0x03,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0xBE
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0xE0,0x0F,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xBF
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7F,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xC0
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xC1
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xC2
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7F,0x00,0x7F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xC3
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xC4
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xFF,0x0F,0xFF,0x0F,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xC5
  0x00,0x00,0x00,0x00,0xEC,0x00,0xB8,0x01,0x00,0x00,0xFC,0x01,0xFE,0x03,0x06,0x00,0xFE,0x01,0xFE,0x03,0x06,0x06,0x06,0x06,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00, // 0xC6
  0xEC,0x00,0xB8,0x01,0x00,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0xF0,0x00,0x98,0x01,0x98,0x01,0x0C,0x03,0xFC,0x03,0xFE,0x07,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00, // 0xC7
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x7F,0x03,0x7F,0x03,0x00,0x03,0xFF,0x03,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xC8
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0xFF,0x03,0x00,0x03,0x7F,0x03,0x7F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xC9
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x7F,0x0F,0x7F,0x0F,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xCA
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x7F,0x0F,0x7F,0x0F,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xCB
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x7F,0x03,0x7F,0x03,0x00,0x03,0x7F,0x03,0x7F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xCC
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xCD
  0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x7F,0x0F,0x7F,0x0F,0x00,0x00,0x7F,0x0F,0x7F,0x0F,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03, // 0xCE
  0x00,0x00,0x06,0x06,0xF6,0x06,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF6,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00, // 0xCF
  0x00,0x00,0x00,0x00,0xF0,0x00,0xF8,0x01,0x88,0x01,0x80,0x01,0xC0,0x01,0xE0,0x00,0x70,0x00,0xF8,0x00,0x98,0x01,0x98,0x01,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00, // 0xD0
  0xF0,0x03,0xF8,0x03,0x1C,0x03,0x0C,0x03,0x06,0x03,0x06,0x03,0x86,0x07,0x86,0x07,0x06,0x03,0x06,0x03,0x0C,0x03,0x1C,0x03,0xF8,0x03,0xF0,0x03,0x00,0x00,0x00,0x00, // 0xD1
  0x60,0x00,0xF0,0x00,0x98,0x01,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0xD2
  0x98,0x01,0x98,0x01,0x00,0x00,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0xD3
  0x80,0x01,0xC0,0x00,0x60,0x00,0xFE,0x07,0xFE,0x07,0x00,0x06,0x00,0x06,0xF8,0x07,0xF8,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0xFE,0x07,0xFE,0x07,0x00,0x00,0x00,0x00, // 0xD4
  0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xD5
  0x18,0x00,0x30,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xD6
  0x60,0x00,0xF0,0x00,0x98,0x01,0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xD7
  0x98,0x01,0x98,0x01,0x00,0x00,0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xD8
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x0F,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xD9
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x7F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00, // 0xDA
  0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F, // 0xDB
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F, // 0xDC
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0xDD
  0x80,0x01,0xC0,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xDE
  0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xDF
  0x18,0x00,0x30,0x00,0x60,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE0
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x98,0x01,0x0C,0x03,0x0C,0x03,0xF8,0x03,0x1C,0x03,0x0C,0x03,0x0C,0x03,0x1C,0x03,0xF8,0x03,0x00,0x03,0x00,0x03, // 0xE1
  0x60,0x00,0xF0,0x00,0x98,0x01,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE2
  0x80,0x01,0xC0,0x00,0x60,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE3
  0x00,0x00,0x00,0x00,0xD8,0x01,0x70,0x03,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE4
  0xEC,0x00,0xB8,0x01,0x00,0x00,0xF8,0x01,0xFC,0x03,0x0E,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x07,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE5
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x1C,0x07,0xFC,0x07,0xEC,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06, // 0xE6
  0x00,0x00,0x00,0x00,0xC0,0x03,0xC0,0x03,0x80,0x01,0xF8,0x01,0xFC,0x01,0x8C,0x01,0x8C,0x01,0xFC,0x01,0xF8,0x01,0x80,0x01,0xC0,0x03,0xC0,0x03,0x00,0x00,0x00,0x00, // 0xE7
  0xC0,0x03,0xC0,0x03,0x80,0x01,0xF8,0x01,0xFC,0x01,0x8C,0x01,0x8C,0x01,0x8C,0x01,0x8C,0x01,0xFC,0x01,0xF8,0x01,0x80,0x01,0xC0,0x03,0xC0,0x03,0x00,0x00,0x00,0x00, // 0xE8
  0x18,0x00,0x30,0x00,0x60,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xE9
  0x60,0x00,0xF0,0x00,0x98,0x01,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xEA
  0x80,0x01,0xC0,0x00,0x60,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x03,0xFC,0x03,0xF8,0x01,0x00,0x00,0x00,0x00, // 0xEB
  0x00,0x00,0x00,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0x0C,0x03,0x0C,0x03,0x98,0x01,0x98,0x01,0xF0,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0x80,0x01, // 0xEC
  0x18,0x00,0x30,0x00,0x60,0x00,0x06,0x06,0x0C,0x03,0x98,0x01,0xF0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00, // 0xED
  0x00,0x00,0x00,0x00,0x78,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xEE
  0x30,0x00,0x60,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xEF
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF0
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0xF8,0x01,0xF8,0x01,0x60,0x00,0x60,0x00,0x00,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF1
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF2
  0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x01,0x0C,0x03,0x98,0x01,0x30,0x07,0x60,0x00,0xD6,0x00,0xB6,0x01,0x3E,0x03,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF3
  0x00,0x00,0xFE,0x01,0x6C,0x03,0x6C,0x06,0x6C,0x06,0x6C,0x06,0x6C,0x03,0xEC,0x01,0x6C,0x00,0x6C,0x00,0x6C,0x00,0x6C,0x00,0x6C,0x00,0x6C,0x00,0x00,0x00,0x00,0x00, // 0xF4
  0x00,0x00,0xF8,0x01,0x0C,0x03,0x00,0x03,0x00,0x03,0xF8,0x01,0x0C,0x03,0x0C,0x03,0xF8,0x01,0x0C,0x00,0x0C,0x00,0x0C,0x03,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF5
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0xFC,0x03,0xFC,0x03,0x00,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF6
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF7
  0xF0,0x00,0xF8,0x01,0x98,0x01,0x98,0x01,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF8
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x01,0x9C,0x03,0x9C,0x03,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xF9
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x70,0x00,0x70,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xFA
  0x80,0x01,0x80,0x03,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xFB
  0xC0,0x03,0x60,0x00,0xC0,0x01,0x60,0x00,0xC0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xFC
  0xC0,0x03,0x60,0x00,0xC0,0x01,0x00,0x03,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xFD
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0xFE
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // 0xFF
#endif
};
#endif
