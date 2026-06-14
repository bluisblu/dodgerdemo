/*
    Compile unit: c:\dolphin\build\libraries\gx\src\GXTexture.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80023D78 -> 0x80024AC4
*/
unsigned char GXTexMode0Ids[8]; // size: 0x8, address: 0x80137A38
unsigned char GXTexMode1Ids[8]; // size: 0x8, address: 0x80137A40
unsigned char GXTexImage0Ids[8]; // size: 0x8, address: 0x80137A48
unsigned char GXTexImage1Ids[8]; // size: 0x8, address: 0x80137A50
unsigned char GXTexImage2Ids[8]; // size: 0x8, address: 0x80137A58
unsigned char GXTexImage3Ids[8]; // size: 0x8, address: 0x80137A60
unsigned char GXTexTlutIds[8]; // size: 0x8, address: 0x80137A68
static unsigned char GX2HWFiltConv[6]; // size: 0x6, address: 0x80137A70
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
// Range: 0x80023D78 -> 0x80023ED4
unsigned long GXGetTexBufferSize(unsigned short width /* r3 */, unsigned short height /* r4 */, unsigned long format /* r1+0xC */, unsigned char mipmap /* r1+0x10 */, unsigned char max_lod /* r1+0x11 */) {
    // Local variables
    unsigned long tileShiftX; // r1+0x8
    unsigned long tileShiftY; // r8
    unsigned long tileBytes; // r5
    unsigned long bufferSize; // r31
    unsigned long level; // r1+0x8
}

// Range: 0x80023ED4 -> 0x80023F9C
void __GetImageTileCount(enum _GXTexFmt fmt /* r1+0x0 */, unsigned short wd /* r4 */, unsigned short ht /* r5 */, unsigned long * rowTiles /* r1+0x8 */, unsigned long * colTiles /* r1+0xC */, unsigned long * cmpTiles /* r1+0x10 */) {
    // Local variables
    unsigned long texRowShift; // r11
    unsigned long texColShift; // r12
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
// total size: 0x20
struct __GXTexObjInt_struct {
    // Members
    unsigned long mode0; // offset 0x0, size 0x4
    unsigned long mode1; // offset 0x4, size 0x4
    unsigned long image0; // offset 0x8, size 0x4
    unsigned long image3; // offset 0xC, size 0x4
    void * userData; // offset 0x10, size 0x4
    enum _GXTexFmt fmt; // offset 0x14, size 0x4
    unsigned long tlutName; // offset 0x18, size 0x4
    unsigned short loadCnt; // offset 0x1C, size 0x2
    unsigned char loadFmt; // offset 0x1E, size 0x1
    unsigned char flags; // offset 0x1F, size 0x1
};
// Range: 0x80023F9C -> 0x800241F0
void GXInitTexObj(struct _GXTexObj * obj /* r3 */, void * image_ptr /* r27 */, unsigned short width /* r28 */, unsigned short height /* r29 */, enum _GXTexFmt format /* r30 */, enum _GXTexWrapMode wrap_s /* r24 */, enum _GXTexWrapMode wrap_t /* r25 */, unsigned char mipmap /* r26 */) {
    // Local variables
    unsigned long maxLOD; // r1+0x8
    unsigned short rowT; // r1+0x8
    unsigned short colT; // r7
    struct __GXTexObjInt_struct * t; // r31
}

enum _GXCITexFmt {
    GX_TF_C4 = 8,
    GX_TF_C8 = 9,
    GX_TF_C14X2 = 10,
};
// Range: 0x800241F0 -> 0x80024238
void GXInitTexObjCI(struct _GXTexObj * obj /* r30 */, void * image_ptr /* r4 */, unsigned short width /* r5 */, unsigned short height /* r6 */, enum _GXCITexFmt format /* r7 */, enum _GXTexWrapMode wrap_s /* r8 */, enum _GXTexWrapMode wrap_t /* r9 */, unsigned char mipmap /* r10 */, unsigned long tlut_name /* r31 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r1+0x8
}

enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
enum _GXAnisotropy {
    GX_ANISO_1 = 0,
    GX_ANISO_2 = 1,
    GX_ANISO_4 = 2,
    GX_MAX_ANISOTROPY = 3,
};
// Range: 0x80024238 -> 0x800243CC
void GXInitTexObjLOD(struct _GXTexObj * obj /* r1+0x8 */, enum _GXTexFilter min_filt /* r1+0xC */, enum _GXTexFilter mag_filt /* r1+0x10 */, float min_lod /* f1 */, float max_lod /* f2 */, float lod_bias /* f3 */, unsigned char bias_clamp /* r1+0x20 */, unsigned char do_edge_lod /* r1+0x21 */, enum _GXAnisotropy max_aniso /* r1+0x24 */) {
    // Local variables
    unsigned char lmin; // r4
    struct __GXTexObjInt_struct * t; // r1+0x8

    // References
    // -> static unsigned char GX2HWFiltConv[6];
}

// Range: 0x800243CC -> 0x800243D4
enum _GXTexFmt GXGetTexObjFmt(struct _GXTexObj * to /* r3 */) {}

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
// total size: 0xC
struct __GXTlutObjInt_struct {
    // Members
    unsigned long tlut; // offset 0x0, size 0x4
    unsigned long loadTlut0; // offset 0x4, size 0x4
    unsigned short numEntries; // offset 0x8, size 0x2
};
// total size: 0x10
struct __GXTlutRegionInt_struct {
    // Members
    unsigned long loadTlut1; // offset 0x0, size 0x4
    struct __GXTlutObjInt_struct tlutObj; // offset 0x4, size 0xC
};
// total size: 0x10
struct __GXTexRegionInt_struct {
    // Members
    unsigned long image1; // offset 0x0, size 0x4
    unsigned long image2; // offset 0x4, size 0x4
    unsigned short sizeEven; // offset 0x8, size 0x2
    unsigned short sizeOdd; // offset 0xA, size 0x2
    unsigned char is32bMipmap; // offset 0xC, size 0x1
    unsigned char isCached; // offset 0xD, size 0x1
};
// Range: 0x800243D4 -> 0x8002457C
void GXLoadTexObjPreLoaded(struct _GXTexObj * obj /* r28 */, struct _GXTexRegion * region /* r1+0xC */, enum _GXTexMapID id /* r29 */) {
    // Local variables
    struct __GXTlutRegionInt_struct * tlr; // r1+0x8
    struct __GXTexObjInt_struct * t; // r1+0x8
    struct __GXTexRegionInt_struct * r; // r1+0x8

    // References
    // -> struct __GXData_struct * gx;
    // -> unsigned char GXTexTlutIds[8];
    // -> unsigned char GXTexImage3Ids[8];
    // -> unsigned char GXTexImage2Ids[8];
    // -> unsigned char GXTexImage1Ids[8];
    // -> unsigned char GXTexImage0Ids[8];
    // -> unsigned char GXTexMode1Ids[8];
    // -> unsigned char GXTexMode0Ids[8];
}

// Range: 0x8002457C -> 0x800245D0
void GXLoadTexObj(struct _GXTexObj * obj /* r30 */, enum _GXTexMapID id /* r31 */) {
    // Local variables
    struct _GXTexRegion * r; // r4

    // References
    // -> struct __GXData_struct * gx;
}

// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
enum _GXTlutFmt {
    GX_TL_IA8 = 0,
    GX_TL_RGB565 = 1,
    GX_TL_RGB5A3 = 2,
    GX_MAX_TLUTFMT = 3,
};
// Range: 0x800245D0 -> 0x80024618
void GXInitTlutObj(struct _GXTlutObj * tlut_obj /* r1+0x0 */, void * lut /* r1+0x4 */, enum _GXTlutFmt fmt /* r1+0x8 */, unsigned short n_entries /* r1+0xC */) {
    // Local variables
    struct __GXTlutObjInt_struct * t; // r1+0x0
}

// Range: 0x80024618 -> 0x800246B4
void GXLoadTlut(struct _GXTlutObj * tlut_obj /* r30 */, unsigned long tlut_name /* r4 */) {
    // Local variables
    struct __GXTlutRegionInt_struct * r; // r1+0x8
    struct __GXTlutObjInt_struct * t; // r1+0x8

    // References
    // -> struct __GXData_struct * gx;
}

enum _GXTexCacheSize {
    GX_TEXCACHE_32K = 0,
    GX_TEXCACHE_128K = 1,
    GX_TEXCACHE_512K = 2,
    GX_TEXCACHE_NONE = 3,
};
// Range: 0x800246B4 -> 0x800247D4
void GXInitTexCacheRegion(struct _GXTexRegion * region /* r1+0x0 */, unsigned char is_32b_mipmap /* r1+0x4 */, unsigned long tmem_even /* r1+0x8 */, enum _GXTexCacheSize size_even /* r1+0xC */, unsigned long tmem_odd /* r1+0x10 */, enum _GXTexCacheSize size_odd /* r1+0x14 */) {
    // Local variables
    unsigned long WidthExp2; // r10
    struct __GXTexRegionInt_struct * t; // r1+0x0
}

enum _GXTlutSize {
    GX_TLUT_16 = 1,
    GX_TLUT_32 = 2,
    GX_TLUT_64 = 4,
    GX_TLUT_128 = 8,
    GX_TLUT_256 = 16,
    GX_TLUT_512 = 32,
    GX_TLUT_1K = 64,
    GX_TLUT_2K = 128,
    GX_TLUT_4K = 256,
    GX_TLUT_8K = 512,
    GX_TLUT_16K = 1024,
};
// Range: 0x800247D4 -> 0x8002481C
void GXInitTlutRegion(struct _GXTlutRegion * region /* r1+0x0 */, unsigned long tmem_addr /* r1+0x4 */, enum _GXTlutSize tlut_size /* r1+0x8 */) {
    // Local variables
    struct __GXTlutRegionInt_struct * t; // r1+0x0
}

// Range: 0x8002481C -> 0x80024864
void GXInvalidateTexAll() {}

// Range: 0x80024864 -> 0x80024878
struct _GXTexRegion * (* GXSetTexRegionCallback(struct _GXTexRegion * (* f)(struct _GXTexObj *, enum _GXTexMapID) /* r1+0x0 */))(struct _GXTexObj *, enum _GXTexMapID) {
    // Local variables
    struct _GXTexRegion * (* oldcb)(struct _GXTexObj *, enum _GXTexMapID); // r1+0x0

    // References
    // -> struct __GXData_struct * gx;
}

// Range: 0x80024878 -> 0x8002488C
struct _GXTlutRegion * (* GXSetTlutRegionCallback(struct _GXTlutRegion * (* f)(unsigned long) /* r1+0x0 */))(unsigned long) {
    // Local variables
    struct _GXTlutRegion * (* oldcb)(unsigned long); // r1+0x0

    // References
    // -> struct __GXData_struct * gx;
}

enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
// Range: 0x8002488C -> 0x80024958
static void __SetSURegs(unsigned long tmap /* r1+0x0 */, unsigned long tcoord /* r1+0x4 */) {
    // Local variables
    unsigned long h; // r1+0x0
    unsigned char t_bias; // r1+0x0

    // References
    // -> struct __GXData_struct * gx;
}

// Range: 0x80024958 -> 0x80024AC4
void __GXSetSUTexRegs() {
    // Local variables
    unsigned long nStages; // r31
    unsigned long nIndStages; // r27
    unsigned long i; // r30
    unsigned long tmap; // r29
    unsigned long coord; // r28
    unsigned long * ptref; // r4

    // References
    // -> struct __GXData_struct * gx;
}




