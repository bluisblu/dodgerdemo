/*
    Compile unit: s:\dolphin\build\libraries\pad\src\Pad.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001B434 -> 0x8001D374
*/
static int Initialized; // size: 0x4, address: 0x8013B0B8
static unsigned long EnabledBits; // size: 0x4, address: 0x8013B0BC
static unsigned long ResettingBits; // size: 0x4, address: 0x8013B0C0
static long ResettingChan; // size: 0x4, address: 0x80137A08
static unsigned long ProbingBits; // size: 0x4, address: 0x8013B0C4
static unsigned long RecalibrateBits; // size: 0x4, address: 0x8013B0C8
static unsigned long WaitingBits; // size: 0x4, address: 0x8013B0CC
static unsigned long CheckingBits; // size: 0x4, address: 0x8013B0D0
static unsigned long AnalogMode; // size: 0x4, address: 0x80137A0C
static unsigned long Spec; // size: 0x4, address: 0x80137A10
// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
static void (* MakeStatus)(long, struct PADStatus *, unsigned long *); // size: 0x4, address: 0x80137A14
static unsigned long Type[4]; // size: 0x10, address: 0x80130390
static struct PADStatus Origin[4]; // size: 0x30, address: 0x801303A0
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
static struct OSResetFunctionInfo ResetFunctionInfo; // size: 0x10, address: 0x800FF0A0
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
// Range: 0x8001B434 -> 0x8001B504
static int DoReset() {
    // Local variables
    int rc; // r3
    unsigned long frame; // r1+0xC

    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
}

// Range: 0x8001B504 -> 0x8001B6D8
static void PADProbeCallback(long chan /* r1+0x8 */, unsigned long error /* r1+0xC */) {
    // Local variables
    unsigned long type; // r1+0x8

    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ProbingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long AnalogMode;
}

// Range: 0x8001B6D8 -> 0x8001B81C
static void UpdateOrigin(long chan /* r1+0x0 */) {
    // Local variables
    struct PADStatus * origin; // r3

    // References
    // -> static unsigned long AnalogMode;
    // -> static struct PADStatus Origin[4];
}

// Range: 0x8001B81C -> 0x8001B934
static void PADOriginCallback(unsigned long error /* r1+0xC */) {
    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long EnabledBits;
    // -> static unsigned long AnalogMode;
}

// Range: 0x8001B934 -> 0x8001B970
static void PADOriginUpdateCallback(long chan /* r3 */, unsigned long error /* r1+0xC */) {
    // References
    // -> static unsigned long EnabledBits;
}

// Range: 0x8001B970 -> 0x8001BBDC
static void PADFixCallback(unsigned long error /* r1+0xC */) {
    // Local variables
    unsigned long type; // r29
    unsigned long id; // r4
    unsigned long frame; // r1+0x2C

    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
}

unsigned long __PADFixBits; // size: 0x4, address: 0x8013B0DC
// Range: 0x8001BBDC -> 0x8001C304
static void PADResetCallback(unsigned long error /* r1+0xC */) {
    // Local variables
    unsigned long type; // r28
    unsigned long id; // r29
    unsigned long recalibrate; // r27
    unsigned long chanBit; // r1+0x8
    int fix; // r26
    unsigned long frame; // r1+0x58
    unsigned long id; // r26

    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ProbingBits;
    // -> static unsigned long AnalogMode;
    // -> static unsigned long Spec;
    // -> unsigned long __PADFixBits;
    // -> static unsigned long RecalibrateBits;
}

// Range: 0x8001C304 -> 0x8001C46C
int PADReset(unsigned long mask /* r29 */) {
    // Local variables
    int enabled; // r30
    int rc; // r31

    // References
    // -> static unsigned long ResettingBits;
    // -> static long ResettingChan;
    // -> static unsigned long Type[4];
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long RecalibrateBits;
    // -> static unsigned long Spec;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ProbingBits;
    // -> static unsigned long CheckingBits;
}

unsigned long __PADSpec; // size: 0x4, address: 0x8013B0D8
// Range: 0x8001C46C -> 0x8001C5E4
int PADInit() {
    // Local variables
    long long time; // r27

    // References
    // -> static long ResettingChan;
    // -> static unsigned long ResettingBits;
    // -> static unsigned long RecalibrateBits;
    // -> static unsigned long Spec;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ProbingBits;
    // -> static unsigned long CheckingBits;
    // -> static struct OSResetFunctionInfo ResetFunctionInfo;
    // -> static int Initialized;
    // -> unsigned long __PADFixBits;
    // -> unsigned long __PADSpec;
}

// Range: 0x8001C5E4 -> 0x8001C748
static void PADReceiveCheckCallback(long chan /* r30 */, unsigned long error /* r1+0xC */) {
    // Local variables
    unsigned long type; // r6
    unsigned long chanBit; // r1+0x8
    unsigned long frame; // r1+0x14

    // References
    // -> static unsigned long ProbingBits;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long Type[4];
}

// Range: 0x8001C748 -> 0x8001CA68
void PADRead(struct PADStatus * status /* r21 */) {
    // Local variables
    long chan; // r22
    unsigned long data[2]; // r1+0x10
    unsigned long chanBit; // r1+0x8
    unsigned long sr; // r1+0x8
    int chanShift; // r27
    unsigned long frame; // r1+0xC
    int enabled; // r27

    // References
    // -> static void (* MakeStatus)(long, struct PADStatus *, unsigned long *);
    // -> static unsigned long ProbingBits;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
    // -> static long ResettingChan;
    // -> static unsigned long ResettingBits;
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long Type[4];
}

// total size: 0x2
struct XY {
    // Members
    unsigned char line; // offset 0x0, size 0x1
    unsigned char count; // offset 0x1, size 0x1
};
static struct XY XYNTSC[12]; // size: 0x18, address: 0x800FF0B0
static struct XY XYPAL[12]; // size: 0x18, address: 0x800FF0C8
// Range: 0x8001CA68 -> 0x8001CB18
void PADSetSamplingRate(unsigned long msec /* r29 */) {
    // Local variables
    unsigned long tv; // r1+0x8
    struct XY * xy; // r30

    // References
    // -> static unsigned long EnabledBits;
    // -> static struct XY XYPAL[12];
    // -> static struct XY XYNTSC[12];
}

// Range: 0x8001CB18 -> 0x8001CB78
void PADSetSpec(unsigned long spec /* r1+0x0 */) {
    // References
    // -> static unsigned long Spec;
    // -> static void (* MakeStatus)(long, struct PADStatus *, unsigned long *);
    // -> unsigned long __PADSpec;
}

// Range: 0x8001CB78 -> 0x8001CCEC
static void SPEC0_MakeStatus(struct PADStatus * status /* r1+0x4 */, unsigned long * data /* r1+0x8 */) {}

// Range: 0x8001CCEC -> 0x8001CE60
static void SPEC1_MakeStatus(struct PADStatus * status /* r1+0x4 */, unsigned long * data /* r1+0x8 */) {}

// Range: 0x8001CE60 -> 0x8001D258
static void SPEC2_MakeStatus(long chan /* r1+0x0 */, struct PADStatus * status /* r1+0x4 */, unsigned long * data /* r1+0x8 */) {
    // Local variables
    struct PADStatus * origin; // r1+0x0

    // References
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long AnalogMode;
}

static int recalibrated$566; // size: 0x4, address: 0x8013B0D4
// Range: 0x8001D258 -> 0x8001D374
static int OnReset(int final /* r1+0x8 */) {
    // References
    // -> static int recalibrated$566;
    // -> static long ResettingChan;
    // -> static unsigned long ResettingBits;
    // -> static unsigned long RecalibrateBits;
    // -> static unsigned long EnabledBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long ProbingBits;
    // -> static unsigned long CheckingBits;
}




