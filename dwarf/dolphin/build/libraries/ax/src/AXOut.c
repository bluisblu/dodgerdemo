/*
    Compile unit: C:\dolphin\build\libraries\ax\src\AXOut.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800142B4 -> 0x80014924
*/
static signed short __AXOutBuffer[2][320]; // size: 0x500, address: 0x8011B9C0
static long __AXOutSBuffer[160]; // size: 0x280, address: 0x8011BEC0
static unsigned long __AXOutFrame; // size: 0x4, address: 0x8013AF58
static unsigned long __AXOutDspReady; // size: 0x4, address: 0x8013AF5C
static long long __AXOsTime; // size: 0x8, address: 0x8013AF60
static void (* __AXUserFrameCallback)(); // size: 0x4, address: 0x8013AF68
static int __AXDSPInitFlag; // size: 0x4, address: 0x8013AF6C
static int __AXDSPDoneFlag; // size: 0x4, address: 0x8013AF70
// total size: 0x38
struct _AXPROFILE {
    // Members
    long long axFrameStart; // offset 0x0, size 0x8
    long long auxProcessingStart; // offset 0x8, size 0x8
    long long auxProcessingEnd; // offset 0x10, size 0x8
    long long userCallbackStart; // offset 0x18, size 0x8
    long long userCallbackEnd; // offset 0x20, size 0x8
    long long axFrameEnd; // offset 0x28, size 0x8
    unsigned long axNumVoices; // offset 0x30, size 0x4
};
struct _AXPROFILE __AXLocalProfile; // size: 0x38, address: 0x8011C140
// Range: 0x800142B4 -> 0x8001444C
void __AXOutNewFrame(unsigned long lessDspCycles /* r30 */) {
    // Local variables
    unsigned long cl; // r30
    int old; // r30
    struct _AXPROFILE * profile; // r3
    unsigned char * src; // r4
    unsigned char * dest; // r3
    unsigned long i; // r1+0x8

    // References
    // -> struct _AXPROFILE __AXLocalProfile;
    // -> static unsigned long __AXOutFrame;
    // -> static signed short __AXOutBuffer[2][320];
    // -> static long __AXOutSBuffer[160];
    // -> static void (* __AXUserFrameCallback)();
}

// total size: 0x50
struct STRUCT_DSP_TASK {
    // Members
    unsigned long state; // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    unsigned long flags; // offset 0x8, size 0x4
    unsigned short * iram_mmem_addr; // offset 0xC, size 0x4
    unsigned long iram_length; // offset 0x10, size 0x4
    unsigned long iram_addr; // offset 0x14, size 0x4
    unsigned short * dram_mmem_addr; // offset 0x18, size 0x4
    unsigned long dram_length; // offset 0x1C, size 0x4
    unsigned long dram_addr; // offset 0x20, size 0x4
    unsigned short dsp_init_vector; // offset 0x24, size 0x2
    unsigned short dsp_resume_vector; // offset 0x26, size 0x2
    void (* init_cb)(void *); // offset 0x28, size 0x4
    void (* res_cb)(void *); // offset 0x2C, size 0x4
    void (* done_cb)(void *); // offset 0x30, size 0x4
    void (* req_cb)(void *); // offset 0x34, size 0x4
    struct STRUCT_DSP_TASK * next; // offset 0x38, size 0x4
    struct STRUCT_DSP_TASK * prev; // offset 0x3C, size 0x4
    long long t_context; // offset 0x40, size 0x8
    long long t_task; // offset 0x48, size 0x8
};
struct STRUCT_DSP_TASK task; // size: 0x50, address: 0x8011C178
// Range: 0x8001444C -> 0x800144B4
void __AXOutAiCallback() {
    // References
    // -> struct STRUCT_DSP_TASK task;
    // -> static unsigned long __AXOutDspReady;
    // -> static long long __AXOsTime;
}

// Range: 0x800144B4 -> 0x800144C0
static void __AXDSPInitCallback() {
    // References
    // -> static int __AXDSPInitFlag;
}

// Range: 0x800144C0 -> 0x80014518
static void __AXDSPResumeCallback() {
    // References
    // -> static unsigned long __AXOutDspReady;
    // -> static long long __AXOsTime;
}

// Range: 0x80014518 -> 0x80014524
static void __AXDSPDoneCallback() {
    // References
    // -> static int __AXDSPDoneFlag;
}

unsigned short axDspSlave[]; // size: 0x0, address: 0x800FD280
unsigned short axDspSlaveLength; // size: 0x2, address: 0x801379D0
unsigned short ax_dram_image[8192]; // size: 0x4000, address: 0x8011C1C8
// Range: 0x80014524 -> 0x800145E8
void __AXOutInitDSP() {
    // References
    // -> static int __AXDSPInitFlag;
    // -> struct STRUCT_DSP_TASK task;
    // -> static int __AXDSPDoneFlag;
    // -> unsigned short ax_dram_image[8192];
    // -> unsigned short axDspSlaveLength;
    // -> unsigned short axDspSlave[];
}

// Range: 0x800145E8 -> 0x80014924
void __AXOutInit() {
    // Local variables
    unsigned long * p; // r4
    int i; // r1+0x8
    unsigned long * p; // r3
    int i; // r1+0x8

    // References
    // -> static unsigned long __AXOutFrame;
    // -> static signed short __AXOutBuffer[2][320];
    // -> static void (* __AXUserFrameCallback)();
    // -> static unsigned long __AXOutDspReady;
    // -> static long __AXOutSBuffer[160];
}




