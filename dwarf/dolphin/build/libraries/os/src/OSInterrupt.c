/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSInterrupt.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80010844 -> 0x80011064
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
static void (* * InterruptHandlerTable)(signed short, struct OSContext *); // size: 0x4, address: 0x8013AEE0
static unsigned long InterruptPrioTable[11]; // size: 0x2C, address: 0x800FD138
// Range: 0x80010844 -> 0x80010858
int OSDisableInterrupts() {}

// Range: 0x80010858 -> 0x8001086C
int OSEnableInterrupts() {}

// Range: 0x8001086C -> 0x80010890
int OSRestoreInterrupts(int level /* r3 */) {}

// Range: 0x80010890 -> 0x800108AC
void (* __OSSetInterruptHandler(signed short interrupt /* r1+0x0 */, void (* handler)(signed short, struct OSContext *) /* r1+0x4 */))(signed short, struct OSContext *) {
    // Local variables
    void (* oldHandler)(signed short, struct OSContext *); // r3

    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x800108AC -> 0x800108C0
void (* __OSGetInterruptHandler(signed short interrupt /* r1+0x0 */))(signed short, struct OSContext *) {
    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x800108C0 -> 0x80010934
void __OSInterruptInit() {
    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x80010934 -> 0x80010BE4
static unsigned long SetInterruptMask(unsigned long mask /* r3 */, unsigned long current /* r1+0x4 */) {
    // Local variables
    unsigned long reg; // r5
}

// Range: 0x80010BE4 -> 0x80010C6C
unsigned long __OSMaskInterrupts(unsigned long global /* r31 */) {
    // Local variables
    int enabled; // r30
    unsigned long prev; // r29
    unsigned long local; // r1+0x8
    unsigned long mask; // r3
}

// Range: 0x80010C6C -> 0x80010CF4
unsigned long __OSUnmaskInterrupts(unsigned long global /* r31 */) {
    // Local variables
    int enabled; // r30
    unsigned long prev; // r29
    unsigned long local; // r1+0x8
    unsigned long mask; // r3
}

// Range: 0x80010CF4 -> 0x80011018
void __OSDispatchInterrupt(struct OSContext * context /* r30 */) {
    // Local variables
    unsigned long intsr; // r31
    unsigned long reg; // r4
    unsigned long cause; // r1+0x8
    unsigned long unmasked; // r1+0x8
    unsigned long * prio; // r3
    signed short interrupt; // r29

    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
    // -> static unsigned long InterruptPrioTable[11];
}

// Range: 0x80011018 -> 0x80011064
static void ExternalInterruptHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}




