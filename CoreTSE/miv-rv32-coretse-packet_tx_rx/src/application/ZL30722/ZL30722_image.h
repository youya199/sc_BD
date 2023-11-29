
/*
 * Copyright 2017 Microchip Corporation.  
 * All rights reserved.
 * 
 * ZL30722 image.
 */

#ifndef ZL30722_IMAGE_H_
#define ZL30722_IMAGE_H_

//;======================================================================
//; EEPROM Image File Writer
//;======================================================================
//; File (0) : C:\Users\Rieche\Desktop\ZL30722_DUT_Config-125.mfg
//;  - Device Type : 30722
//;  - Device Rev : 1
//;  - GUI Version : 2.3.1
//;  - HAL Version : 08091700
//;  - XA  Input  Frequency Hz =    125000000 * (1) / (1)
//;  - OC1 Output Frequency Hz =    125000000 * (1) / (1)
//;  - OC2 Output Frequency Hz =    125000000 * (1) / (1)
//;  - EEPROM DSP code built from this file
//;  - DSP Code writes : 967
//;  - Reg wr or Waits : 106
//;======================================================================
//; EEPROM File Statistics
//;  - Preamble bytes : 16
//;  - Common code bytes : 989
//;  - Common code used from File : 0
//;  - Branch 0 code bytes : 211
//;  - Total Bytes Needed : 1217 / 2036
//;======================================================================
//; File Generation Date : Mon Dec 04 12:50:03 2017
//;======================================================================
//; Address range 0x07F4 to 0x07FF is reserved for factory test and
//; should not be modified.
//; This address range is omitted from the EEPROM data image to prevent
//; it from being overwritten.
//;======================================================================
#include <stdint.h>

#define ZL30722_IMAGE_SIZE (sizeof(ZL30722_image) / sizeof(uint8_t))

const uint8_t ZL30722_image[] = {
    0x01, 0x21, 0x00, 0x04, 0xCA, 0x40, 0x01, 0x07, 0xED, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x0B, 0x0C, 0x04, 0x0E, 0x00, 0x04, 0x0E, 0x00, 0x04, 0x0B, 0x0D, 0x84, 0x0E, 0xFF, 0xA0,
    0x19, 0x62, 0x80, 0x00, 0x62, 0x64, 0x00, 0x92, 0x00, 0x00, 0x62, 0x20, 0x00, 0x82, 0x64, 0x00,
    0x92, 0x00, 0x00, 0x2D, 0x60, 0x00, 0x6A, 0x00, 0x00, 0x19, 0x80, 0x65, 0x39, 0x80, 0x45, 0x82,
    0x60, 0x00, 0x01, 0x00, 0x40, 0x19, 0x26, 0x06, 0xD9, 0x00, 0x06, 0x00, 0x00, 0x00, 0x39, 0x00,
    0x07, 0xFC, 0xA0, 0x04, 0x19, 0xE0, 0x00, 0x98, 0x28, 0x00, 0x66, 0x00, 0x60, 0xB8, 0x28, 0x00,
    0xE6, 0x00, 0x60, 0x26, 0x01, 0x00, 0x19, 0x80, 0x04, 0x19, 0xC0, 0x04, 0x00, 0x00, 0x00, 0x19,
    0x60, 0x04, 0x04, 0x20, 0x0E, 0xE6, 0x02, 0x00, 0x19, 0x80, 0x04, 0xD9, 0x64, 0x04, 0x86, 0x02,
    0x00, 0x98, 0x00, 0x00, 0x19, 0x40, 0x64, 0xB8, 0x20, 0x40, 0x78, 0x25, 0x40, 0x58, 0x26, 0x40,
    0xD8, 0x25, 0x40, 0x19, 0x80, 0x64, 0xD9, 0x64, 0x64, 0x66, 0x01, 0x60, 0x98, 0x24, 0x00, 0xC6,
    0x00, 0x60, 0x78, 0x24, 0x00, 0xB8, 0x02, 0x60, 0x39, 0x40, 0x64, 0x78, 0x04, 0x00, 0x98, 0x02,
    0x60, 0x39, 0x40, 0x64, 0x39, 0x80, 0x04, 0x19, 0x60, 0x04, 0xE6, 0x00, 0x00, 0x23, 0x6E, 0x00,
    0x23, 0x8C, 0x00, 0x8D, 0x60, 0x00, 0x42, 0x49, 0x00, 0x67, 0x1D, 0x00, 0x23, 0x8C, 0x00, 0x8C,
    0x60, 0x00, 0x63, 0x20, 0x0C, 0x02, 0x88, 0x00, 0x8C, 0x60, 0x00, 0x62, 0x00, 0x06, 0x03, 0x6C,
    0x00, 0xD2, 0x02, 0x00, 0x00, 0x00, 0x00, 0x23, 0x8A, 0x00, 0x13, 0x02, 0x00, 0x8C, 0x60, 0x00,
    0x63, 0x80, 0x00, 0xE2, 0x49, 0x00, 0x0E, 0x60, 0x00, 0x92, 0x02, 0x00, 0x63, 0x80, 0x00, 0xE2,
    0x48, 0x00, 0x0E, 0x60, 0x00, 0x12, 0x04, 0x00, 0x4C, 0x60, 0x00, 0x62, 0x40, 0x00, 0x23, 0x84,
    0x00, 0x0E, 0x60, 0x00, 0x52, 0x02, 0x00, 0x63, 0x88, 0x00, 0x8C, 0x60, 0x00, 0x63, 0x20, 0x00,
    0x38, 0x02, 0x00, 0x18, 0x02, 0x60, 0x04, 0x60, 0x6D, 0x78, 0x21, 0x00, 0x39, 0xC0, 0x65, 0x19,
    0x60, 0x61, 0xA6, 0x06, 0x60, 0xD8, 0x25, 0x00, 0xC6, 0x00, 0x40, 0x19, 0xC0, 0x05, 0x58, 0x26,
    0x00, 0x19, 0x40, 0x66, 0xE6, 0x05, 0x60, 0x39, 0xA0, 0x46, 0xC6, 0x00, 0x00, 0x98, 0x20, 0x00,
    0xB8, 0x00, 0x60, 0x38, 0x02, 0x40, 0x46, 0x00, 0x40, 0x18, 0x02, 0x00, 0x38, 0x06, 0x40, 0x04,
    0x60, 0x4C, 0x04, 0x80, 0x4C, 0x39, 0x60, 0x45, 0x66, 0x04, 0x40, 0xB8, 0x20, 0x00, 0x39, 0x40,
    0x66, 0x04, 0x60, 0x6D, 0x23, 0x60, 0x60, 0x66, 0x02, 0x60, 0x78, 0x25, 0x00, 0x86, 0x03, 0x40,
    0x83, 0x6C, 0x00, 0x2C, 0x60, 0x00, 0x63, 0x80, 0x0C, 0x62, 0x6C, 0x00, 0x24, 0x40, 0x00, 0x4C,
    0x60, 0x00, 0x62, 0x60, 0x0C, 0xB0, 0x08, 0x00, 0x6A, 0x00, 0x00, 0x46, 0x02, 0x60, 0x19, 0x60,
    0x05, 0x83, 0x6C, 0x00, 0xB0, 0x08, 0x00, 0x63, 0x60, 0x0D, 0xB8, 0x26, 0x00, 0x19, 0xA0, 0x66,
    0x66, 0x01, 0x60, 0x6A, 0x00, 0x00, 0x39, 0x40, 0x21, 0x19, 0x40, 0x81, 0x6F, 0x60, 0x00, 0x63,
    0x80, 0x00, 0x82, 0x6A, 0x00, 0x32, 0x00, 0x00, 0x8D, 0x60, 0x00, 0x6A, 0x00, 0x00, 0x39, 0x60,
    0x21, 0x19, 0x40, 0x86, 0x63, 0x8D, 0x00, 0x23, 0x60, 0x00, 0x8D, 0x60, 0x00, 0x63, 0x40, 0x0D,
    0xB9, 0xC4, 0x06, 0x98, 0x04, 0x00, 0x58, 0x25, 0x40, 0x39, 0xA0, 0x64, 0xA3, 0x8A, 0x6D, 0xC6,
    0x02, 0x60, 0xB8, 0x24, 0x00, 0x42, 0x68, 0x40, 0x02, 0x60, 0x60, 0x10, 0x0A, 0x00, 0x42, 0x88,
    0x00, 0x8C, 0x60, 0x00, 0x62, 0x80, 0x00, 0x43, 0x6D, 0x00, 0x6F, 0x60, 0x00, 0x52, 0x01, 0x00,
    0x8D, 0x60, 0x00, 0x6A, 0x00, 0x00, 0x39, 0xA0, 0x84, 0xA2, 0x8A, 0x8D, 0xE6, 0x00, 0x80, 0x24,
    0x80, 0x00, 0x82, 0x6D, 0x00, 0x8D, 0x60, 0x00, 0x6A, 0x00, 0x00, 0x62, 0x80, 0x8D, 0x04, 0x60,
    0x20, 0x19, 0xA0, 0x24, 0xB8, 0x04, 0x00, 0x19, 0x40, 0x64, 0xD8, 0x26, 0x40, 0x98, 0x04, 0x40,
    0xD8, 0x22, 0x40, 0x39, 0x40, 0x44, 0x58, 0x0A, 0x00, 0x19, 0xC0, 0x44, 0x04, 0x20, 0x4E, 0x26,
    0x05, 0x40, 0x38, 0x0A, 0x00, 0x86, 0x00, 0x60, 0xD8, 0x00, 0x00, 0x19, 0xC0, 0x44, 0x04, 0x20,
    0x4E, 0x26, 0x00, 0x40, 0xB8, 0x04, 0x00, 0x04, 0xC0, 0x4E, 0x04, 0xE0, 0x4C, 0x39, 0xE0, 0x44,
    0xC6, 0x03, 0x40, 0xF8, 0x04, 0x00, 0xC6, 0x01, 0x60, 0x25, 0x80, 0x00, 0xC2, 0x6E, 0x00, 0x8C,
    0x60, 0x00, 0x62, 0xC0, 0x0E, 0x90, 0x08, 0x00, 0x6A, 0x00, 0x00, 0x23, 0x6C, 0x00, 0x00, 0x00,
    0x00, 0xE3, 0x8C, 0x00, 0x8C, 0x60, 0x00, 0x63, 0xE0, 0x0C, 0x04, 0xC0, 0x4E, 0x19, 0xE0, 0x44,
    0xC6, 0x01, 0x00, 0x25, 0x80, 0x00, 0xC2, 0x6E, 0x00, 0x8C, 0x60, 0x00, 0x62, 0xC0, 0x0E, 0x70,
    0x0A, 0x00, 0x6A, 0x00, 0x00, 0x04, 0xC0, 0x4E, 0x39, 0xE0, 0x44, 0xA6, 0x00, 0x60, 0xE3, 0x6C,
    0x00, 0x90, 0x08, 0x00, 0x63, 0x20, 0x0E, 0x04, 0xE0, 0x4C, 0x39, 0xC0, 0x04, 0xC2, 0x88, 0x00,
    0x58, 0x24, 0x00, 0xF1, 0x0A, 0x60, 0x83, 0x40, 0x00, 0x43, 0x6D, 0x00, 0x47, 0x07, 0x00, 0x63,
    0xE0, 0x0D, 0xB9, 0x05, 0x05, 0x18, 0x05, 0x00, 0x82, 0x29, 0x6D, 0x19, 0xE0, 0x65, 0xF8, 0x25,
    0x40, 0xE6, 0x00, 0x60, 0x25, 0x80, 0x00, 0x22, 0x6D, 0x00, 0x8D, 0x60, 0x00, 0x62, 0x20, 0x0D,
    0x00, 0x00, 0x00, 0x6A, 0x00, 0x00, 0x39, 0xE0, 0x25, 0x98, 0x04, 0x00, 0x23, 0x8C, 0x60, 0xD3,
    0x02, 0x60, 0x83, 0x00, 0x6C, 0x23, 0x6C, 0x60, 0x86, 0x02, 0x60, 0xE3, 0x8D, 0x00, 0x02, 0x84,
    0x0E, 0x3F, 0x49, 0x00, 0x0E, 0x60, 0x00, 0x92, 0x02, 0x00, 0x63, 0x00, 0x0E, 0xF8, 0x05, 0x00,
    0x18, 0x25, 0x60, 0x58, 0x25, 0x40, 0x03, 0x80, 0x60, 0x43, 0x8D, 0x40, 0x58, 0x24, 0x00, 0xD1,
    0x0A, 0x60, 0x22, 0x49, 0x00, 0x0E, 0x60, 0x00, 0x03, 0x8C, 0x00, 0x8C, 0x60, 0x00, 0x63, 0x00,
    0x0C, 0xD2, 0x02, 0x00, 0x03, 0x8E, 0x00, 0x8C, 0x60, 0x00, 0xA2, 0x49, 0x00, 0x07, 0x02, 0x00,
    0xB9, 0x45, 0x05, 0x98, 0x04, 0x00, 0x63, 0xA0, 0x40, 0x02, 0x88, 0x40, 0x8C, 0x60, 0x40, 0x62,
    0x00, 0x46, 0xA3, 0x60, 0x40, 0x98, 0x24, 0x00, 0x38, 0x21, 0x60, 0x39, 0xA0, 0x64, 0xA3, 0x8A,
    0x6D, 0x04, 0x60, 0x6D, 0xF8, 0x02, 0x60, 0x39, 0x40, 0x64, 0x19, 0x00, 0x07, 0x01, 0x00, 0x00,
    0x63, 0x20, 0x00, 0x6F, 0x60, 0x00, 0x4D, 0x60, 0x00, 0x6A, 0x00, 0x00, 0x19, 0xA0, 0x25, 0x39,
    0xA0, 0x85, 0x23, 0x60, 0x20, 0x08, 0x00, 0x20, 0x2A, 0x00, 0x00, 0x04, 0x60, 0x00, 0x4C, 0x60,
    0x80, 0x4D, 0x60, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x15, 0x04, 0x0E, 0x05, 0x04, 0x0E, 0x14, 0x04, 0x0B, 0x00, 0xFF, 0xFF, 0x40, 0x09, 0x01,
    0x12, 0x04, 0x06, 0x21, 0x08, 0x41, 0x01, 0x01, 0x02, 0x06, 0x41, 0x06, 0x04, 0x5D, 0x69, 0x80,
    0xBC, 0x3D, 0x41, 0x0C, 0x01, 0x37, 0x01, 0x01, 0x10, 0x05, 0x41, 0x25, 0x02, 0xC7, 0x40, 0x5F,
    0x41, 0x2A, 0x02, 0xB3, 0x80, 0x80, 0x40, 0x1C, 0x01, 0x10, 0x80, 0x43, 0x01, 0x01, 0x3F, 0x06,
    0x43, 0x10, 0x03, 0xF0, 0x05, 0x08, 0x17, 0x03, 0x15, 0xF9, 0x43, 0x19, 0x03, 0x80, 0xF9, 0x0B,
    0x0A, 0x43, 0x20, 0x03, 0x03, 0xFF, 0xFF, 0x0F, 0x43, 0x30, 0x01, 0xF1, 0x04, 0x03, 0x39, 0x80,
    0x43, 0x40, 0x03, 0x03, 0xFF, 0xFF, 0x0F, 0x43, 0x50, 0x01, 0xF1, 0x04, 0x03, 0x59, 0x80, 0x04,
    0x00, 0x40, 0x44, 0x04, 0x05, 0x00, 0x00, 0x44, 0x04, 0x12, 0x06, 0x04, 0x0C, 0x02, 0x04, 0x10,
    0x63, 0x44, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x44, 0x26, 0x01, 0xD0, 0x07, 0x44, 0x2C,
    0x06, 0x10, 0x0A, 0x04, 0x08, 0x30, 0xFA, 0x09, 0x44, 0x34, 0x02, 0xAE, 0x47, 0x01, 0x44, 0x38,
    0x02, 0x61, 0x90, 0x2A, 0x44, 0x3C, 0x01, 0xE6, 0x05, 0x44, 0x40, 0x01, 0xF7, 0x02, 0x04, 0x44,
    0x35, 0x04, 0x46, 0x6E, 0x44, 0x48, 0x03, 0x4C, 0x37, 0x89, 0x01, 0x44, 0x50, 0x01, 0x44, 0x44,
    0x04, 0x57, 0x0C, 0x04, 0x5A, 0xC8, 0x44, 0x5C, 0x01, 0x41, 0x0F, 0x04, 0x0B, 0x06, 0x42, 0x00,
    0x03, 0x01, 0x01, 0x10, 0x02, 0x42, 0x10, 0x03, 0x01, 0x01, 0x10, 0x02, 0x02, 0x21, 0x01, 0x00,
    0x0C, 0x01, 0x00, 0x0B, 0x11, 0xD5, 0x00, 0x0D, 0x03, 0xFF, 0x62, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

#endif /* ZL30722_IMAGE_H_ */