/*
    Compile unit: c:\dolphin\build\libraries\gx\src\GXFifo.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80020C20 -> 0x800214F0
*/
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
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
static struct OSThread * __GXCurrentThread; // size: 0x4, address: 0x8013B190
static unsigned char CPGPLinked; // size: 0x1, address: 0x8013B194
static int GXOverflowSuspendInProgress; // size: 0x4, address: 0x8013B198
static void (* BreakPointCB)(); // size: 0x4, address: 0x8013B19C
static unsigned long __GXOverflowCount; // size: 0x4, address: 0x8013B1A0
// total size: 0x10
struct _GXTexRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
// total size: 0x10
struct _GXTlutRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXTexMapID {
    GX_TEXMAP0 = 0,
    GX_TEXMAP1 = 1,
    GX_TEXMAP2 = 2,
    GX_TEXMAP3 = 3,
    GX_TEXMAP4 = 4,
    GX_TEXMAP5 = 5,
    GX_TEXMAP6 = 6,
    GX_TEXMAP7 = 7,
    GX_MAX_TEXMAP = 8,
    GX_TEXMAP_NULL = 255,
    GX_TEX_DISABLE = 256,
};
enum _GXAttrType {
    GX_NONE = 0,
    GX_DIRECT = 1,
    GX_INDEX8 = 2,
    GX_INDEX16 = 3,
};
enum _GXPerf0 {
    GX_PERF0_VERTICES = 0,
    GX_PERF0_CLIP_VTX = 1,
    GX_PERF0_CLIP_CLKS = 2,
    GX_PERF0_XF_WAIT_IN = 3,
    GX_PERF0_XF_WAIT_OUT = 4,
    GX_PERF0_XF_XFRM_CLKS = 5,
    GX_PERF0_XF_LIT_CLKS = 6,
    GX_PERF0_XF_BOT_CLKS = 7,
    GX_PERF0_XF_REGLD_CLKS = 8,
    GX_PERF0_XF_REGRD_CLKS = 9,
    GX_PERF0_CLIP_RATIO = 10,
    GX_PERF0_TRIANGLES = 11,
    GX_PERF0_TRIANGLES_CULLED = 12,
    GX_PERF0_TRIANGLES_PASSED = 13,
    GX_PERF0_TRIANGLES_SCISSORED = 14,
    GX_PERF0_TRIANGLES_0TEX = 15,
    GX_PERF0_TRIANGLES_1TEX = 16,
    GX_PERF0_TRIANGLES_2TEX = 17,
    GX_PERF0_TRIANGLES_3TEX = 18,
    GX_PERF0_TRIANGLES_4TEX = 19,
    GX_PERF0_TRIANGLES_5TEX = 20,
    GX_PERF0_TRIANGLES_6TEX = 21,
    GX_PERF0_TRIANGLES_7TEX = 22,
    GX_PERF0_TRIANGLES_8TEX = 23,
    GX_PERF0_TRIANGLES_0CLR = 24,
    GX_PERF0_TRIANGLES_1CLR = 25,
    GX_PERF0_TRIANGLES_2CLR = 26,
    GX_PERF0_QUAD_0CVG = 27,
    GX_PERF0_QUAD_NON0CVG = 28,
    GX_PERF0_QUAD_1CVG = 29,
    GX_PERF0_QUAD_2CVG = 30,
    GX_PERF0_QUAD_3CVG = 31,
    GX_PERF0_QUAD_4CVG = 32,
    GX_PERF0_AVG_QUAD_CNT = 33,
    GX_PERF0_CLOCKS = 34,
    GX_PERF0_NONE = 35,
};
enum _GXPerf1 {
    GX_PERF1_TEXELS = 0,
    GX_PERF1_TX_IDLE = 1,
    GX_PERF1_TX_REGS = 2,
    GX_PERF1_TX_MEMSTALL = 3,
    GX_PERF1_TC_CHECK1_2 = 4,
    GX_PERF1_TC_CHECK3_4 = 5,
    GX_PERF1_TC_CHECK5_6 = 6,
    GX_PERF1_TC_CHECK7_8 = 7,
    GX_PERF1_TC_MISS = 8,
    GX_PERF1_VC_ELEMQ_FULL = 9,
    GX_PERF1_VC_MISSQ_FULL = 10,
    GX_PERF1_VC_MEMREQ_FULL = 11,
    GX_PERF1_VC_STATUS7 = 12,
    GX_PERF1_VC_MISSREP_FULL = 13,
    GX_PERF1_VC_STREAMBUF_LOW = 14,
    GX_PERF1_VC_ALL_STALLS = 15,
    GX_PERF1_VERTICES = 16,
    GX_PERF1_FIFO_REQ = 17,
    GX_PERF1_CALL_REQ = 18,
    GX_PERF1_VC_MISS_REQ = 19,
    GX_PERF1_CP_ALL_REQ = 20,
    GX_PERF1_CLOCKS = 21,
    GX_PERF1_NONE = 22,
};
// total size: 0x4F4
struct __GXData_struct {
    // Members
    unsigned short vNum; // offset 0x0, size 0x2
    unsigned short bpSent; // offset 0x2, size 0x2
    unsigned long vLim; // offset 0x4, size 0x4
    unsigned long cpEnable; // offset 0x8, size 0x4
    unsigned long cpStatus; // offset 0xC, size 0x4
    unsigned long cpClr; // offset 0x10, size 0x4
    unsigned long vcdLo; // offset 0x14, size 0x4
    unsigned long vcdHi; // offset 0x18, size 0x4
    unsigned long vatA[8]; // offset 0x1C, size 0x20
    unsigned long vatB[8]; // offset 0x3C, size 0x20
    unsigned long vatC[8]; // offset 0x5C, size 0x20
    unsigned long lpSize; // offset 0x7C, size 0x4
    unsigned long matIdxA; // offset 0x80, size 0x4
    unsigned long matIdxB; // offset 0x84, size 0x4
    unsigned long indexBase[4]; // offset 0x88, size 0x10
    unsigned long indexStride[4]; // offset 0x98, size 0x10
    unsigned long ambColor[2]; // offset 0xA8, size 0x8
    unsigned long matColor[2]; // offset 0xB0, size 0x8
    unsigned long suTs0[8]; // offset 0xB8, size 0x20
    unsigned long suTs1[8]; // offset 0xD8, size 0x20
    unsigned long suScis0; // offset 0xF8, size 0x4
    unsigned long suScis1; // offset 0xFC, size 0x4
    unsigned long tref[8]; // offset 0x100, size 0x20
    unsigned long iref; // offset 0x120, size 0x4
    unsigned long bpMask; // offset 0x124, size 0x4
    unsigned long IndTexScale0; // offset 0x128, size 0x4
    unsigned long IndTexScale1; // offset 0x12C, size 0x4
    unsigned long tevc[16]; // offset 0x130, size 0x40
    unsigned long teva[16]; // offset 0x170, size 0x40
    unsigned long tevKsel[8]; // offset 0x1B0, size 0x20
    unsigned long cmode0; // offset 0x1D0, size 0x4
    unsigned long cmode1; // offset 0x1D4, size 0x4
    unsigned long zmode; // offset 0x1D8, size 0x4
    unsigned long peCtrl; // offset 0x1DC, size 0x4
    unsigned long cpDispSrc; // offset 0x1E0, size 0x4
    unsigned long cpDispSize; // offset 0x1E4, size 0x4
    unsigned long cpDispStride; // offset 0x1E8, size 0x4
    unsigned long cpDisp; // offset 0x1EC, size 0x4
    unsigned long cpTexSrc; // offset 0x1F0, size 0x4
    unsigned long cpTexSize; // offset 0x1F4, size 0x4
    unsigned long cpTexStride; // offset 0x1F8, size 0x4
    unsigned long cpTex; // offset 0x1FC, size 0x4
    unsigned char cpTexZ; // offset 0x200, size 0x1
    unsigned long genMode; // offset 0x204, size 0x4
    struct _GXTexRegion TexRegions[8]; // offset 0x208, size 0x80
    struct _GXTexRegion TexRegionsCI[4]; // offset 0x288, size 0x40
    unsigned long nextTexRgn; // offset 0x2C8, size 0x4
    unsigned long nextTexRgnCI; // offset 0x2CC, size 0x4
    struct _GXTlutRegion TlutRegions[20]; // offset 0x2D0, size 0x140
    struct _GXTexRegion * (* texRegionCallback)(struct _GXTexObj *, enum _GXTexMapID); // offset 0x410, size 0x4
    struct _GXTlutRegion * (* tlutRegionCallback)(unsigned long); // offset 0x414, size 0x4
    enum _GXAttrType nrmType; // offset 0x418, size 0x4
    unsigned char hasNrms; // offset 0x41C, size 0x1
    unsigned char hasBiNrms; // offset 0x41D, size 0x1
    unsigned long projType; // offset 0x420, size 0x4
    float projMtx[6]; // offset 0x424, size 0x18
    float vpLeft; // offset 0x43C, size 0x4
    float vpTop; // offset 0x440, size 0x4
    float vpWd; // offset 0x444, size 0x4
    float vpHt; // offset 0x448, size 0x4
    float vpNearz; // offset 0x44C, size 0x4
    float vpFarz; // offset 0x450, size 0x4
    unsigned char fgRange; // offset 0x454, size 0x1
    float fgSideX; // offset 0x458, size 0x4
    unsigned long tImage0[8]; // offset 0x45C, size 0x20
    unsigned long tMode0[8]; // offset 0x47C, size 0x20
    unsigned long texmapId[16]; // offset 0x49C, size 0x40
    unsigned long tcsManEnab; // offset 0x4DC, size 0x4
    enum _GXPerf0 perf0; // offset 0x4E0, size 0x4
    enum _GXPerf1 perf1; // offset 0x4E4, size 0x4
    unsigned long perfSel; // offset 0x4E8, size 0x4
    unsigned char inDispList; // offset 0x4EC, size 0x1
    unsigned char dlSaveContext; // offset 0x4ED, size 0x1
    unsigned char dirtyVAT; // offset 0x4EE, size 0x1
    unsigned long dirtyState; // offset 0x4F0, size 0x4
};
struct __GXData_struct * gx; // size: 0x4, address: 0x80137A20
void * __cpReg; // size: 0x4, address: 0x8013B184
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
// Range: 0x80020C20 -> 0x80020D5C
static void GXCPInterruptHandler(struct OSContext * context /* r31 */) {
    // References
    // -> static void (* BreakPointCB)();
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
    // -> static struct OSThread * __GXCurrentThread;
    // -> static int GXOverflowSuspendInProgress;
    // -> static unsigned long __GXOverflowCount;
}

// total size: 0x24
struct __GXFifoObj {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned char * top; // offset 0x4, size 0x4
    unsigned long size; // offset 0x8, size 0x4
    unsigned long hiWatermark; // offset 0xC, size 0x4
    unsigned long loWatermark; // offset 0x10, size 0x4
    void * rdPtr; // offset 0x14, size 0x4
    void * wrPtr; // offset 0x18, size 0x4
    long count; // offset 0x1C, size 0x4
    unsigned char bind_cpu; // offset 0x20, size 0x1
    unsigned char bind_gp; // offset 0x21, size 0x1
};
// Range: 0x80020D5C -> 0x80020DC8
void GXInitFifoBase(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r30 */, void * base /* r31 */, unsigned long size /* r1+0x10 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r1+0x8
}

// Range: 0x80020DC8 -> 0x80020E38
void GXInitFifoPtrs(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r29 */, void * readPtr /* r30 */, void * writePtr /* r31 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r1+0x8
    int enabled; // r3
}

// Range: 0x80020E38 -> 0x80020E44
void GXInitFifoLimits(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x0 */, unsigned long hiWatermark /* r1+0x4 */, unsigned long loWatermark /* r1+0x8 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r1+0x0
}

struct __GXFifoObj * CPUFifo; // size: 0x4, address: 0x8013B1A8
struct __GXFifoObj * GPFifo; // size: 0x4, address: 0x8013B1A4
void * __piReg; // size: 0x4, address: 0x8013B180
// Range: 0x80020E44 -> 0x80020F54
void GXSetCPUFifo(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r30 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r1+0x8
    int enabled; // r31
    unsigned long reg; // r6
    unsigned long reg; // r1+0x8

    // References
    // -> void * __piReg;
    // -> static unsigned char CPGPLinked;
    // -> struct __GXFifoObj * GPFifo;
    // -> struct __GXFifoObj * CPUFifo;
}

// Range: 0x80020F54 -> 0x800210CC
void GXSetGPFifo(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r30 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r1+0x8
    int enabled; // r31

    // References
    // -> static unsigned char CPGPLinked;
    // -> struct __GXFifoObj * GPFifo;
    // -> struct __GXFifoObj * CPUFifo;
    // -> void * __cpReg;
}

// Range: 0x800210CC -> 0x80021110
void __GXFifoInit() {
    // References
    // -> static int GXOverflowSuspendInProgress;
    // -> static struct OSThread * __GXCurrentThread;
}

// Range: 0x80021110 -> 0x80021138
static void __GXFifoReadEnable() {
    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
}

// Range: 0x80021138 -> 0x8002115C
static void __GXFifoReadDisable() {
    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
}

// Range: 0x8002115C -> 0x800211A0
static void __GXFifoLink(unsigned char en /* r1+0x0 */) {
    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
}

// Range: 0x800211A0 -> 0x800211EC
static void __GXWriteFifoIntEnable(unsigned char hiWatermarkEn /* r1+0x0 */, unsigned char loWatermarkEn /* r1+0x1 */) {
    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
}

// Range: 0x800211EC -> 0x80021238
static void __GXWriteFifoIntReset(unsigned char hiWatermarkClr /* r1+0x0 */, unsigned char loWatermarkClr /* r1+0x1 */) {
    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
}

// Range: 0x80021238 -> 0x8002133C
void * GXRedirectWriteGatherPipe(void * ptr /* r30 */) {
    // Local variables
    unsigned long reg; // r5
    int enabled; // r31

    // References
    // -> void * __piReg;
    // -> struct __GXFifoObj * CPUFifo;
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
    // -> static unsigned char CPGPLinked;
}

// Range: 0x8002133C -> 0x800214F0
void GXRestoreWriteGatherPipe() {
    // Local variables
    unsigned long reg; // r1+0x8
    unsigned long i; // r6
    int enabled; // r31

    // References
    // -> struct __GXData_struct * gx;
    // -> void * __cpReg;
    // -> static unsigned char CPGPLinked;
    // -> void * __piReg;
    // -> struct __GXFifoObj * CPUFifo;
}




