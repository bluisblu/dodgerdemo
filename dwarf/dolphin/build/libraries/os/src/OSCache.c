/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSCache.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000E824 -> 0x8000EC14
*/
// Range: 0x8000E824 -> 0x8000E838
void DCEnable() {}

// Range: 0x8000E838 -> 0x8000E868
void DCInvalidateRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x8000E868 -> 0x8000E89C
void DCFlushRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x8000E89C -> 0x8000E8CC
void DCFlushRangeNoSync(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x8000E8CC -> 0x8000E904
void ICInvalidateRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x8000E904 -> 0x8000E914
void ICFlashInvalidate() {}

// Range: 0x8000E914 -> 0x8000E928
void ICEnable() {}

// Range: 0x8000E928 -> 0x8000E9C0
void L2GlobalInvalidate() {}

// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    double psf[32]; // offset 0x1C8, size 0x100
};
// Range: 0x8000E9C0 -> 0x8000EB20
void DMAErrorHandler(struct OSContext * context /* r29 */) {
    // Local variables
    unsigned long hid2; // r30
}

// Range: 0x8000EB20 -> 0x8000EC14
void __OSCacheInit() {}




