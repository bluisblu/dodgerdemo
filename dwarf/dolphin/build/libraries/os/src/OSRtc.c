/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSRtc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800113A0 -> 0x80011A3C
*/
// total size: 0x54
struct SramControl {
    // Members
    unsigned char sram[64]; // offset 0x0, size 0x40
    unsigned long offset; // offset 0x40, size 0x4
    int enabled; // offset 0x44, size 0x4
    int locked; // offset 0x48, size 0x4
    int sync; // offset 0x4C, size 0x4
    void (* callback)(); // offset 0x50, size 0x4
};
static struct SramControl Scb; // size: 0x54, address: 0x80117960
// Range: 0x800113A0 -> 0x80011400
static void WriteSramCallback() {
    // References
    // -> static struct SramControl Scb;
}

// Range: 0x80011400 -> 0x80011518
static int WriteSram(void * buffer /* r29 */, unsigned long offset /* r31 */, unsigned long size /* r30 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14
}

// Range: 0x80011518 -> 0x8001164C
void __OSInitSram() {
    // References
    // -> static struct SramControl Scb;
}

// total size: 0x14
struct OSSram {
    // Members
    unsigned short checkSum; // offset 0x0, size 0x2
    unsigned short checkSumInv; // offset 0x2, size 0x2
    unsigned long ead0; // offset 0x4, size 0x4
    unsigned long ead1; // offset 0x8, size 0x4
    unsigned long counterBias; // offset 0xC, size 0x4
    signed char displayOffsetH; // offset 0x10, size 0x1
    unsigned char ntd; // offset 0x11, size 0x1
    unsigned char language; // offset 0x12, size 0x1
    unsigned char flags; // offset 0x13, size 0x1
};
// Range: 0x8001164C -> 0x800116A8
struct OSSram * __OSLockSram() {
    // References
    // -> static struct SramControl Scb;
}

// total size: 0x2C
struct OSSramEx {
    // Members
    unsigned char flashID[2][12]; // offset 0x0, size 0x18
    unsigned long wirelessKeyboardID; // offset 0x18, size 0x4
    unsigned short wirelessPadID[4]; // offset 0x1C, size 0x8
    unsigned short _padding0; // offset 0x24, size 0x2
    unsigned char flashIDCheckSum[2]; // offset 0x26, size 0x2
    unsigned char _padding1[4]; // offset 0x28, size 0x4
};
// Range: 0x800116A8 -> 0x80011704
struct OSSramEx * __OSLockSramEx() {
    // References
    // -> static struct SramControl Scb;
}

// Range: 0x80011704 -> 0x800119F4
static int UnlockSram(int commit /* r1+0x8 */, unsigned long offset /* r1+0xC */) {
    // Local variables
    unsigned short * p; // r6
    struct OSSram * sram; // r1+0x8

    // References
    // -> static struct SramControl Scb;
}

// Range: 0x800119F4 -> 0x80011A18
int __OSUnlockSram(int commit /* r3 */) {}

// Range: 0x80011A18 -> 0x80011A3C
int __OSUnlockSramEx(int commit /* r3 */) {}




