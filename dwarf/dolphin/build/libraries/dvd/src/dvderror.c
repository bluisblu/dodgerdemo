/*
    Compile unit: i:\dolphin\build\libraries\dvd\src\dvderror.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001981C -> 0x80019974
*/
static unsigned long ErrorTable[16]; // size: 0x40, address: 0x800FEE88
// total size: 0x2C
struct OSSramEx {
    // Members
    unsigned char flashID[2][12]; // offset 0x0, size 0x18
    unsigned long wirelessKeyboardID; // offset 0x18, size 0x4
    unsigned short wirelessPadID[4]; // offset 0x1C, size 0x8
    unsigned char dvdErrorCode; // offset 0x24, size 0x1
    unsigned char _padding0; // offset 0x25, size 0x1
    unsigned char flashIDCheckSum[2]; // offset 0x26, size 0x2
    unsigned char _padding1[4]; // offset 0x28, size 0x4
};
// Range: 0x8001981C -> 0x80019974
void __DVDStoreErrorCode(unsigned long error /* r1+0x8 */) {
    // Local variables
    struct OSSramEx * sram; // r1+0x8

    // References
    // -> static unsigned long ErrorTable[16];
}




