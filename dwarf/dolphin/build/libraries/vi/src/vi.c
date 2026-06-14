/*
    Compile unit: c:\dolphin\build\libraries\vi\src\vi.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80019B9C -> 0x8001B1FC
*/
static unsigned long retraceCount; // size: 0x4, address: 0x8013B078
static unsigned long changeMode; // size: 0x4, address: 0x8013B07C
static unsigned long flushFlag; // size: 0x4, address: 0x8013B080
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x310
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
static struct OSThreadQueue retraceQueue; // size: 0x8, address: 0x8013B084
static void (* PreCB)(unsigned long); // size: 0x4, address: 0x8013B08C
static void (* PostCB)(unsigned long); // size: 0x4, address: 0x8013B090
static unsigned long encoderType; // size: 0x4, address: 0x8013B094
static signed short displayOffsetH; // size: 0x2, address: 0x8013B098
static signed short displayOffsetV; // size: 0x2, address: 0x8013B09A
static unsigned long long changed; // size: 0x8, address: 0x8013B0A0
static unsigned short regs[59]; // size: 0x76, address: 0x80130248
static unsigned long long shdwChanged; // size: 0x8, address: 0x8013B0A8
static unsigned short shdwRegs[59]; // size: 0x76, address: 0x801302C0
static // total size: 0x58
struct {
    // Members
    unsigned short DispPosX; // offset 0x0, size 0x2
    unsigned short DispPosY; // offset 0x2, size 0x2
    unsigned short DispSizeX; // offset 0x4, size 0x2
    unsigned short DispSizeY; // offset 0x6, size 0x2
    unsigned short AdjustedDispPosX; // offset 0x8, size 0x2
    unsigned short AdjustedDispPosY; // offset 0xA, size 0x2
    unsigned short AdjustedDispSizeY; // offset 0xC, size 0x2
    unsigned short AdjustedPanPosY; // offset 0xE, size 0x2
    unsigned short AdjustedPanSizeY; // offset 0x10, size 0x2
    unsigned short FBSizeX; // offset 0x12, size 0x2
    unsigned short FBSizeY; // offset 0x14, size 0x2
    unsigned short PanPosX; // offset 0x16, size 0x2
    unsigned short PanPosY; // offset 0x18, size 0x2
    unsigned short PanSizeX; // offset 0x1A, size 0x2
    unsigned short PanSizeY; // offset 0x1C, size 0x2
    enum /* @enum$2vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } FBMode; // offset 0x20, size 0x4
    unsigned long nonInter; // offset 0x24, size 0x4
    unsigned long tv; // offset 0x28, size 0x4
    unsigned char wordPerLine; // offset 0x2C, size 0x1
    unsigned char std; // offset 0x2D, size 0x1
    unsigned char wpl; // offset 0x2E, size 0x1
    unsigned long bufAddr; // offset 0x30, size 0x4
    unsigned long tfbb; // offset 0x34, size 0x4
    unsigned long bfbb; // offset 0x38, size 0x4
    unsigned char xof; // offset 0x3C, size 0x1
    int black; // offset 0x40, size 0x4
    int threeD; // offset 0x44, size 0x4
    unsigned long rbufAddr; // offset 0x48, size 0x4
    unsigned long rtfbb; // offset 0x4C, size 0x4
    unsigned long rbfbb; // offset 0x50, size 0x4
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * timing; // offset 0x54, size 0x4
} HorVer; // size: 0x58, address: 0x80130338
static unsigned long FBSet; // size: 0x4, address: 0x8013B0B0
static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} timing[7]; // size: 0x10A, address: 0x800FEF38
static unsigned short taps[25]; // size: 0x32, address: 0x800FF044
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
// Range: 0x80019B9C -> 0x80019DAC
static void __VIRetraceHandler(struct OSContext * context /* r30 */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x18
    unsigned short reg; // r5
    unsigned long inter; // r6

    // References
    // -> static struct OSThreadQueue retraceQueue;
    // -> static unsigned long retraceCount;
    // -> static void (* PostCB)(unsigned long);
    // -> static unsigned long flushFlag;
    // -> static unsigned long changeMode;
    // -> static unsigned long long shdwChanged;
    // -> static unsigned short shdwRegs[59];
    // -> static void (* PreCB)(unsigned long);
}

enum /* @enum$1vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
};
// Range: 0x80019DAC -> 0x80019E14
static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * getTiming(enum /* @enum$1vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
} mode /* r1+0x0 */) {
    // References
    // -> static struct [anonymous] timing[7];
}

// Range: 0x80019E14 -> 0x80019FFC
void __VIInit(enum /* @enum$1vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
} mode /* r29 */) {
    // Local variables
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r1+0x8
    unsigned long nonInter; // r30
    unsigned long tv; // r1+0x8
    unsigned long a; // r1+0x1C
    unsigned short vct; // r6
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
// Range: 0x80019FFC -> 0x8001A430
void VIInit() {
    // Local variables
    unsigned short dspCfg; // r27
    unsigned long value; // r1+0x8
    unsigned long tv; // r1+0x8

    // References
    // -> static void (* PostCB)(unsigned long);
    // -> static void (* PreCB)(unsigned long);
    // -> static struct OSThreadQueue retraceQueue;
    // -> static struct [anonymous] HorVer;
    // -> static unsigned short regs[59];
    // -> static signed short displayOffsetV;
    // -> static signed short displayOffsetH;
    // -> static unsigned short taps[25];
    // -> static unsigned long flushFlag;
    // -> static unsigned long changeMode;
    // -> static unsigned long long shdwChanged;
    // -> static unsigned long long changed;
    // -> static unsigned long retraceCount;
    // -> static unsigned long encoderType;
}

// Range: 0x8001A430 -> 0x8001A484
void VIWaitForRetrace() {
    // Local variables
    int enabled; // r31
    unsigned long count; // r30

    // References
    // -> static unsigned long retraceCount;
    // -> static struct OSThreadQueue retraceQueue;
}

enum /* @enum$2vi_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// Range: 0x8001A484 -> 0x8001A758
static void setFbbRegs(// total size: 0x58
struct {
    // Members
    unsigned short DispPosX; // offset 0x0, size 0x2
    unsigned short DispPosY; // offset 0x2, size 0x2
    unsigned short DispSizeX; // offset 0x4, size 0x2
    unsigned short DispSizeY; // offset 0x6, size 0x2
    unsigned short AdjustedDispPosX; // offset 0x8, size 0x2
    unsigned short AdjustedDispPosY; // offset 0xA, size 0x2
    unsigned short AdjustedDispSizeY; // offset 0xC, size 0x2
    unsigned short AdjustedPanPosY; // offset 0xE, size 0x2
    unsigned short AdjustedPanSizeY; // offset 0x10, size 0x2
    unsigned short FBSizeX; // offset 0x12, size 0x2
    unsigned short FBSizeY; // offset 0x14, size 0x2
    unsigned short PanPosX; // offset 0x16, size 0x2
    unsigned short PanPosY; // offset 0x18, size 0x2
    unsigned short PanSizeX; // offset 0x1A, size 0x2
    unsigned short PanSizeY; // offset 0x1C, size 0x2
    enum /* @enum$2vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } FBMode; // offset 0x20, size 0x4
    unsigned long nonInter; // offset 0x24, size 0x4
    unsigned long tv; // offset 0x28, size 0x4
    unsigned char wordPerLine; // offset 0x2C, size 0x1
    unsigned char std; // offset 0x2D, size 0x1
    unsigned char wpl; // offset 0x2E, size 0x1
    unsigned long bufAddr; // offset 0x30, size 0x4
    unsigned long tfbb; // offset 0x34, size 0x4
    unsigned long bfbb; // offset 0x38, size 0x4
    unsigned char xof; // offset 0x3C, size 0x1
    int black; // offset 0x40, size 0x4
    int threeD; // offset 0x44, size 0x4
    unsigned long rbufAddr; // offset 0x48, size 0x4
    unsigned long rtfbb; // offset 0x4C, size 0x4
    unsigned long rbfbb; // offset 0x50, size 0x4
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * timing; // offset 0x54, size 0x4
} * HorVer /* r1+0x8 */, unsigned long * tfbb /* r1+0xC */, unsigned long * bfbb /* r1+0x10 */, unsigned long * rtfbb /* r1+0x14 */, unsigned long * rbfbb /* r1+0x18 */) {
    // Local variables
    unsigned long shifted; // r10

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x8001A758 -> 0x8001A8F4
static void setVerticalRegs(unsigned short dispPosY /* r1+0x8 */, unsigned short dispSizeY /* r1+0xA */, unsigned char equ /* r1+0xC */, unsigned short acv /* r1+0xE */, unsigned short prbOdd /* r1+0x10 */, unsigned short prbEven /* r1+0x12 */, unsigned short psbOdd /* r1+0x14 */, unsigned short psbEven /* r1+0x16 */, int black /* r31 */) {
    // Local variables
    unsigned short actualPrbOdd; // r1+0x8
    unsigned short actualPrbEven; // r3
    unsigned short actualPsbOdd; // r6
    unsigned short actualPsbEven; // r7
    unsigned short actualAcv; // r4
    unsigned short c; // r12
    unsigned short d; // r29

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum /* @enum$1vi_c */ {
        VI_TVMODE_NTSC_INT = 0,
        VI_TVMODE_NTSC_DS = 1,
        VI_TVMODE_NTSC_PROG = 2,
        VI_TVMODE_PAL_INT = 4,
        VI_TVMODE_PAL_DS = 5,
        VI_TVMODE_MPAL_INT = 8,
        VI_TVMODE_MPAL_DS = 9,
        VI_TVMODE_DEBUG_INT = 12,
    } viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum /* @enum$2vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
// Range: 0x8001A8F4 -> 0x8001AF48
void VIConfigure(struct _GXRenderModeObj * rm /* r19 */) {
    // Local variables
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r1+0x10
    unsigned long reg; // r5
    int enabled; // r16
    unsigned long newNonInter; // r1+0x10
    unsigned long tvInBootrom; // r1+0x10

    // References
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long FBSet;
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
    // -> static unsigned long encoderType;
    // -> static signed short displayOffsetV;
    // -> static signed short displayOffsetH;
    // -> static unsigned long changeMode;
}

// Range: 0x8001AF48 -> 0x8001B04C
void VIFlush() {
    // Local variables
    int enabled; // r30

    // References
    // -> static unsigned long flushFlag;
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
    // -> static unsigned short shdwRegs[59];
    // -> static unsigned long long shdwChanged;
}

// Range: 0x8001B04C -> 0x8001B0B8
void VISetNextFrameBuffer(void * fb /* r30 */) {
    // Local variables
    int enabled; // r30

    // References
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long FBSet;
}

// Range: 0x8001B0B8 -> 0x8001B134
void VISetBlack(int black /* r30 */) {
    // Local variables
    int enabled; // r30
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r10

    // References
    // -> static struct [anonymous] HorVer;
}

// Range: 0x8001B134 -> 0x8001B1F0
static unsigned long getCurrentFieldEvenOdd() {
    // Local variables
    unsigned short value; // r1+0x8
    enum /* @enum$1vi_c */ {
        VI_TVMODE_NTSC_INT = 0,
        VI_TVMODE_NTSC_DS = 1,
        VI_TVMODE_NTSC_PROG = 2,
        VI_TVMODE_PAL_INT = 4,
        VI_TVMODE_PAL_DS = 5,
        VI_TVMODE_MPAL_INT = 8,
        VI_TVMODE_MPAL_DS = 9,
        VI_TVMODE_DEBUG_INT = 12,
    } tvMode; // r3
    unsigned long nhlines; // r9
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r3

    // References
    // -> static struct [anonymous] HorVer;
}

// Range: 0x8001B1F0 -> 0x8001B1FC
unsigned long VIGetTvFormat() {}




