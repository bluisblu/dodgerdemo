/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSExi.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000F7B8 -> 0x80010844
*/
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
// total size: 0x38
struct EXIControl {
    // Members
    void (* exiCallback)(long, struct OSContext *); // offset 0x0, size 0x4
    void (* tcCallback)(long, struct OSContext *); // offset 0x4, size 0x4
    void (* extCallback)(long, struct OSContext *); // offset 0x8, size 0x4
    unsigned long state; // offset 0xC, size 0x4
    int immLen; // offset 0x10, size 0x4
    unsigned char * immBuf; // offset 0x14, size 0x4
    unsigned long dev; // offset 0x18, size 0x4
    int items; // offset 0x1C, size 0x4
    // total size: 0x8
    struct {
        // Members
        unsigned long dev; // offset 0x0, size 0x4
        void (* callback)(long, struct OSContext *); // offset 0x4, size 0x4
    } queue[3]; // offset 0x20, size 0x18
};
static struct EXIControl Ecb[3]; // size: 0xA8, address: 0x801178A8
// Range: 0x8000F7B8 -> 0x8000F8AC
static void SetExiInterruptMask(long chan /* r1+0x8 */, struct EXIControl * exi /* r31 */) {
    // Local variables
    struct EXIControl * exi2; // r4

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x8000F8AC -> 0x8000FB08
int EXIImm(long chan /* r28 */, void * buf /* r29 */, long len /* r30 */, unsigned long type /* r31 */, void (* callback)(long, struct OSContext *) /* r19 */) {
    // Local variables
    struct EXIControl * exi; // r1+0x8
    int enabled; // r26
    unsigned long data; // r25
    int i; // r24

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x8000FB08 -> 0x8000FBA8
int EXIImmEx(long chan /* r27 */, void * buf /* r28 */, long len /* r29 */, unsigned long mode /* r30 */) {
    // Local variables
    long xLen; // r5
}

// Range: 0x8000FBA8 -> 0x8000FC94
int EXIDma(long chan /* r27 */, void * buf /* r28 */, long len /* r29 */, unsigned long type /* r30 */, void (* callback)(long, struct OSContext *) /* r25 */) {
    // Local variables
    struct EXIControl * exi; // r1+0x8
    int enabled; // r31

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x8000FC94 -> 0x8000FE64
int EXISync(long chan /* r1+0x8 */) {
    // Local variables
    struct EXIControl * exi; // r1+0x8
    int rc; // r29
    int enabled; // r3

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x8000FE64 -> 0x8000FEAC
unsigned long EXIClearInterrupts(long chan /* r1+0x0 */, int exi /* r1+0x4 */, int tc /* r1+0x8 */, int ext /* r1+0xC */) {
    // Local variables
    unsigned long cpr; // r1+0x0
    unsigned long prev; // r3
}

// Range: 0x8000FEAC -> 0x80010014
int EXIProbe(long chan /* r29 */) {
    // Local variables
    struct EXIControl * exi; // r27
    int enabled; // r31
    int rc; // r30
    unsigned long cpr; // r7
    long t; // r4

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x80010014 -> 0x80010140
int EXISelect(long chan /* r27 */, unsigned long dev /* r28 */, unsigned long freq /* r29 */) {
    // Local variables
    struct EXIControl * exi; // r1+0x8
    unsigned long cpr; // r4
    int enabled; // r30

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x80010140 -> 0x80010250
int EXIDeselect(long chan /* r31 */) {
    // Local variables
    struct EXIControl * exi; // r1+0x8
    unsigned long cpr; // r29
    int enabled; // r28

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x80010250 -> 0x800102D0
static void EXIIntrruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r4 */) {
    // Local variables
    long chan; // r3
    void (* callback)(long, struct OSContext *); // r12

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x800102D0 -> 0x800104C4
static void TCIntrruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r29 */) {
    // Local variables
    long chan; // r30
    struct EXIControl * exi; // r1+0x8
    void (* callback)(long, struct OSContext *); // r12

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x800104C4 -> 0x80010570
static void EXTIntrruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r30 */) {
    // Local variables
    long chan; // r31
    struct EXIControl * exi; // r3
    void (* callback)(long, struct OSContext *); // r12

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x80010570 -> 0x80010674
void EXIInit() {}

// Range: 0x80010674 -> 0x80010768
int EXILock(long chan /* r27 */, unsigned long dev /* r28 */, void (* unlockedCallback)(long, struct OSContext *) /* r29 */) {
    // Local variables
    struct EXIControl * exi; // r31
    int enabled; // r30
    int i; // r1+0x8

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x80010768 -> 0x80010844
int EXIUnlock(long chan /* r28 */) {
    // Local variables
    struct EXIControl * exi; // r31
    int enabled; // r30
    void (* unlockedCallback)(long, struct OSContext *); // r29

    // References
    // -> static struct EXIControl Ecb[3];
}




