/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSContext.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000EC14 -> 0x8000F47C
*/
// Range: 0x8000EC14 -> 0x8000ED38
static void __OSLoadFPUContext(unsigned long dummy /* r3 */, struct OSContext * fpucontext /* r4 */) {}

// Range: 0x8000ED38 -> 0x8000EE60
static void __OSSaveFPUContext(unsigned long dummy1 /* r3 */, unsigned long dummy2 /* r4 */, struct OSContext * fpucontext /* r5 */) {}

// Range: 0x8000EE60 -> 0x8000EEBC
void OSSetCurrentContext(struct OSContext * context /* r3 */) {}

// Range: 0x8000EEBC -> 0x8000EEC8
struct OSContext * OSGetCurrentContext() {}

// Range: 0x8000EEC8 -> 0x8000EF48
unsigned long OSSaveContext(struct OSContext * context /* r3 */) {}

// Range: 0x8000EF48 -> 0x8000F020
void OSLoadContext(struct OSContext * context /* r3 */) {}

// Range: 0x8000F020 -> 0x8000F028
unsigned long OSGetStackPointer() {}

// Range: 0x8000F028 -> 0x8000F04C
void OSClearContext(struct OSContext * context /* r1+0x0 */) {}

// Range: 0x8000F04C -> 0x8000F108
void OSInitContext(struct OSContext * context /* r3 */, unsigned long pc /* r4 */, unsigned long newsp /* r5 */) {}

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
// Range: 0x8000F108 -> 0x8000F3B0
void OSDumpContext(struct OSContext * context /* r28 */) {
    // Local variables
    unsigned long i; // r25
    unsigned long * p; // r25
    struct OSContext * currentContext; // r30
    struct OSContext fpuContext; // r1+0x10
    int enabled; // r29
}

// Range: 0x8000F3B0 -> 0x8000F434
static void OSSwitchFPUContext(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}

// Range: 0x8000F434 -> 0x8000F47C
void __OSContextInit() {}




