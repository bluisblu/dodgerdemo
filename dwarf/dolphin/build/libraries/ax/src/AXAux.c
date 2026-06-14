/*
    Compile unit: C:\dolphin\build\libraries\ax\src\AXAux.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80013AA8 -> 0x80013DB4
*/
static long __AXBufferAuxA[3][480]; // size: 0x1680, address: 0x801185C0
static long __AXBufferAuxB[3][480]; // size: 0x1680, address: 0x80119C40
static void (* __AXCallbackAuxA)(void *, void *); // size: 0x4, address: 0x8013AF18
static void (* __AXCallbackAuxB)(void *, void *); // size: 0x4, address: 0x8013AF1C
static void * __AXContextAuxA; // size: 0x4, address: 0x8013AF20
static void * __AXContextAuxB; // size: 0x4, address: 0x8013AF24
static long * __AXAuxADspWrite; // size: 0x4, address: 0x8013AF28
static long * __AXAuxADspRead; // size: 0x4, address: 0x8013AF2C
static long * __AXAuxBDspWrite; // size: 0x4, address: 0x8013AF30
static long * __AXAuxBDspRead; // size: 0x4, address: 0x8013AF34
static unsigned long __AXAuxDspWritePosition; // size: 0x4, address: 0x8013AF38
static unsigned long __AXAuxDspReadPosition; // size: 0x4, address: 0x8013AF3C
static unsigned long __AXAuxCpuReadWritePosition; // size: 0x4, address: 0x8013AF40
// Range: 0x80013AA8 -> 0x80013B84
void __AXAuxInit() {
    // Local variables
    int i; // r1+0x0
    long * pA; // r3
    long * pB; // r4

    // References
    // -> static long __AXBufferAuxB[3][480];
    // -> static long __AXBufferAuxA[3][480];
    // -> static unsigned long __AXAuxCpuReadWritePosition;
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static void * __AXContextAuxB;
    // -> static void * __AXContextAuxA;
    // -> static void (* __AXCallbackAuxB)(void *, void *);
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80013B84 -> 0x80013BB8
void __AXGetAuxAInput(unsigned long * p /* r1+0x0 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static long __AXBufferAuxA[3][480];
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80013BB8 -> 0x80013BD4
void __AXGetAuxAOutput(unsigned long * p /* r1+0x0 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxA[3][480];
}

// Range: 0x80013BD4 -> 0x80013C08
void __AXGetAuxBInput(unsigned long * p /* r1+0x0 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static long __AXBufferAuxB[3][480];
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80013C08 -> 0x80013C24
void __AXGetAuxBOutput(unsigned long * p /* r1+0x0 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxB[3][480];
}

unsigned long __AXClMode; // size: 0x4, address: 0x8013AF54
// total size: 0xC
struct AX_AUX_DATA {
    // Members
    long * l; // offset 0x0, size 0x4
    long * r; // offset 0x4, size 0x4
    long * s; // offset 0x8, size 0x4
};
// Range: 0x80013C24 -> 0x80013DB4
void __AXProcessAux() {
    // Local variables
    struct AX_AUX_DATA auxData; // r1+0x8

    // References
    // -> static unsigned long __AXAuxCpuReadWritePosition;
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static void * __AXContextAuxB;
    // -> static void (* __AXCallbackAuxB)(void *, void *);
    // -> static long __AXBufferAuxB[3][480];
    // -> unsigned long __AXClMode;
    // -> static void * __AXContextAuxA;
    // -> static void (* __AXCallbackAuxA)(void *, void *);
    // -> static long __AXBufferAuxA[3][480];
    // -> static long * __AXAuxBDspRead;
    // -> static long * __AXAuxBDspWrite;
    // -> static long * __AXAuxADspRead;
    // -> static long * __AXAuxADspWrite;
}




