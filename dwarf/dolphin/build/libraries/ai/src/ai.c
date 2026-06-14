/*
    Compile unit: c:\dolphin\build\libraries\ai\src\ai.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001D374 -> 0x8001DC28
*/
static void (* __AIS_Callback)(unsigned long); // size: 0x4, address: 0x8013B0E0
static void (* __AID_Callback)(); // size: 0x4, address: 0x8013B0E4
static unsigned char * __CallbackStack; // size: 0x4, address: 0x8013B0E8
static unsigned char * __OldStack; // size: 0x4, address: 0x8013B0EC
static int __AI_init_flag; // size: 0x4, address: 0x8013B0F0
// Range: 0x8001D374 -> 0x8001D3B8
void (* AIRegisterDMACallback(void (* callback)() /* r30 */))() {
    // Local variables
    void (* old_callback)(); // r31
    int old; // r3

    // References
    // -> static void (* __AID_Callback)();
}

// Range: 0x8001D3B8 -> 0x8001D440
void AIInitDMA(unsigned long start_addr /* r30 */, unsigned long length /* r31 */) {
    // Local variables
    int old; // r3
}

// Range: 0x8001D440 -> 0x8001D458
void AIStartDMA() {}

// Range: 0x8001D458 -> 0x8001D530
void AISetStreamPlayState(unsigned long state /* r29 */) {
    // Local variables
    int old; // r31
    unsigned char vol_left; // r30
    unsigned char vol_right; // r29
}

// Range: 0x8001D530 -> 0x8001D540
unsigned long AIGetStreamPlayState() {}

// Range: 0x8001D540 -> 0x8001D620
void AISetDSPSampleRate(unsigned long rate /* r26 */) {
    // Local variables
    int old; // r26
    unsigned long afr_state; // r1+0x8
    unsigned char vol_left; // r30
    unsigned char vol_right; // r29
}

// Range: 0x8001D620 -> 0x8001D634
unsigned long AIGetDSPSampleRate() {}

// Range: 0x8001D634 -> 0x8001D708
static void __AI_set_stream_sample_rate(unsigned long rate /* r25 */) {
    // Local variables
    int old; // r30
    unsigned long play_state; // r29
    unsigned char vol_left; // r28
    unsigned char vol_right; // r27
    unsigned long dsp_src_state; // r26
}

// Range: 0x8001D708 -> 0x8001D718
unsigned long AIGetStreamSampleRate() {}

// Range: 0x8001D718 -> 0x8001D734
void AISetStreamVolLeft(unsigned char vol /* r1+0x0 */) {}

// Range: 0x8001D734 -> 0x8001D744
unsigned char AIGetStreamVolLeft() {}

// Range: 0x8001D744 -> 0x8001D760
void AISetStreamVolRight(unsigned char vol /* r1+0x0 */) {}

// Range: 0x8001D760 -> 0x8001D770
unsigned char AIGetStreamVolRight() {}

static long long bound_32KHz; // size: 0x8, address: 0x8013B0F8
static long long bound_48KHz; // size: 0x8, address: 0x8013B100
static long long min_wait; // size: 0x8, address: 0x8013B108
static long long max_wait; // size: 0x8, address: 0x8013B110
static long long buffer; // size: 0x8, address: 0x8013B118
// Range: 0x8001D770 -> 0x8001D8D4
void AIInit(unsigned char * stack /* r30 */) {
    // References
    // -> static int __AI_init_flag;
    // -> static unsigned char * __CallbackStack;
    // -> static void (* __AID_Callback)();
    // -> static void (* __AIS_Callback)(unsigned long);
    // -> static long long buffer;
    // -> static long long max_wait;
    // -> static long long min_wait;
    // -> static long long bound_48KHz;
    // -> static long long bound_32KHz;
}

// Range: 0x8001D8D4 -> 0x8001D8E0
void AIReset() {
    // References
    // -> static int __AI_init_flag;
}

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
// Range: 0x8001D8E0 -> 0x8001D95C
static void __AISHandler(struct OSContext * context /* r30 */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* __AIS_Callback)(unsigned long);
}

// Range: 0x8001D95C -> 0x8001D9EC
static void __AIDHandler(struct OSContext * context /* r31 */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10
    unsigned short tmp; // r5

    // References
    // -> static unsigned char * __CallbackStack;
    // -> static void (* __AID_Callback)();
}

// Range: 0x8001D9EC -> 0x8001DA44
static void __AICallbackStackSwitch(void * cb /* r31 */) {}

// Range: 0x8001DA44 -> 0x8001DC28
static void __AI_SRC_INIT() {
    // Local variables
    long long rising_32khz; // r1+0x8
    long long rising_48khz; // r3
    long long diff; // r1+0x8
    long long temp; // r29
    unsigned long temp0; // r3
    unsigned long temp1; // r3
    unsigned long done; // r1+0x8
    unsigned long Init_Cnt; // r1+0x8

    // References
    // -> static long long max_wait;
    // -> static long long bound_48KHz;
    // -> static long long min_wait;
    // -> static long long buffer;
    // -> static long long bound_32KHz;
}

// total size: 0x30
struct STRUCT_TIMELOG {
    // Members
    long long t_start; // offset 0x0, size 0x8
    long long t1; // offset 0x8, size 0x8
    long long t2; // offset 0x10, size 0x8
    long long t3; // offset 0x18, size 0x8
    long long t4; // offset 0x20, size 0x8
    long long t_end; // offset 0x28, size 0x8
};



