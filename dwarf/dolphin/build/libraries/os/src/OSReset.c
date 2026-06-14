/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSReset.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800112C8 -> 0x8001134C
*/
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
// total size: 0x8
struct OSResetFunctionQueue {
    // Members
    struct OSResetFunctionInfo * head; // offset 0x0, size 0x4
    struct OSResetFunctionInfo * tail; // offset 0x4, size 0x4
};
static struct OSResetFunctionQueue ResetFunctionQueue; // size: 0x8, address: 0x8013AEE8
// Range: 0x800112C8 -> 0x8001134C
void OSRegisterResetFunction(struct OSResetFunctionInfo * info /* r1+0x0 */) {
    // Local variables
    struct OSResetFunctionInfo * __prev; // r4
    struct OSResetFunctionInfo * __next; // r5
    struct OSResetFunctionInfo * __prev; // r1+0x0

    // References
    // -> static struct OSResetFunctionQueue ResetFunctionQueue;
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



