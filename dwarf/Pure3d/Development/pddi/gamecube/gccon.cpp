/*
    Compile unit: D:\Pure3d\Development\pddi\gamecube\gccon.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B17BC -> 0x800B4A4C
*/
// total size: 0x3C
struct gcStreamVertex {
    // Members
    class pddiVector pos; // offset 0x0, size 0xC
    class pddiVector norm; // offset 0xC, size 0xC
    class pddiVector2 uv[4]; // offset 0x18, size 0x20
    struct pddiColour col; // offset 0x38, size 0x4
};
// total size: 0x90
class gcPrimStream {
    // Functions
    void Begin(class gcContext * con, enum _GXPrimitive type, unsigned int vType);

    void End();

    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
static class gcPrimStream gPrimStream; // size: 0x90, address: 0x80133280
enum _GXPrimitive primTypeTable[5]; // size: 0x14, address: 0x801104A0
unsigned short gcDisplayListPrimTypes[5]; // size: 0xA, address: 0x801104B4
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
// Range: 0x800B17BC -> 0x800B18BC
float VertsToPrims(enum pddiPrimType type /* r1+0x8 */, int vertexcount /* r1+0xC */) {}

enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
// Range: 0x800B18BC -> 0x800B19CC
float VertsToPrims(enum _GXPrimitive type /* r1+0x8 */, int vertexcount /* r1+0xC */) {}

// total size: 0x1C0
struct {} gcContext::__vtable; // size: 0x1C0, address: 0x80110858
// total size: 0x10
class gcDevice : public pddiDevice {
    // Members
    unsigned char initialized; // offset 0xC, size 0x1
};
// total size: 0x80
struct GXFifoObj {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
};
// total size: 0x28
class gcDisplay : public pddiDisplay {
    // Members
    enum pddiDisplayMode mMode; // offset 0xC, size 0x4
    class gcContext * mContext; // offset 0x10, size 0x4
    struct GXFifoObj * mFifo; // offset 0x14, size 0x4
    unsigned char * mFifoBuffer; // offset 0x18, size 0x4
    unsigned int mFifoBufferSize; // offset 0x1C, size 0x4
    unsigned char * mXFB; // offset 0x20, size 0x4
    unsigned int mXFBSize; // offset 0x24, size 0x4
};
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
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
// total size: 0x10
struct Stats {
    // Members
    enum _GXPerf0 metric0; // offset 0x0, size 0x4
    unsigned long * var0; // offset 0x4, size 0x4
    enum _GXPerf1 metric1; // offset 0x8, size 0x4
    unsigned long * var1; // offset 0xC, size 0x4
};
// total size: 0x498
class gcContext : public pddiBaseContext {
    // Functions
    gcContext(class gcDevice * dev, class gcDisplay * disp);

    ~gcContext();

    void BeginFrame();

    void EndFrame();

    void Clear(unsigned int bufferMask);

    void SetClearColour(struct pddiColour & colour);

    void SetClearDepth(float depth);

    void SetupHardwareProjection();

    void LoadHardwareMatrix(enum pddiMatrixType id);

    void SetScissor(class pddiRect * rect);

    class gcPrimStream * BeginPrims(class pddiShader * mat, enum pddiPrimType primType, unsigned int vertexType);

    void EndPrims(class gcPrimStream * stream);

    void DrawPrimBuffer(class pddiShader * mat, class pddiPrimBuffer * buffer);

    void SetupHardwareLight(int handle);

    void PreMultiplyLights(struct pddiColour & diffuse, struct pddiColour & specular, float shininess);

    void SetAmbientLight(struct pddiColour & col);

    void SetColourWrite(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

    void SetCullMode(enum pddiCullMode mode);

    void EnableZBuffer(unsigned char enable);

    void SetZCompare(enum pddiCompareMode compareMode);

    void SetZWrite(unsigned char b);

    void SetZRange(float n, float f);

    void EnableStencilBuffer(unsigned char enable);

    void SetStencilCompare(enum pddiCompareMode compare);

    void SetStencilRef(int ref);

    void SetStencilMask(unsigned int mask);

    void SetStencilWriteMask(unsigned int mask);

    void SetStencilOp(enum pddiStencilOp failOp, enum pddiStencilOp zFailOp, enum pddiStencilOp zPassOp);

    void SetAlphaRef(float ref);

    void SetFillMode(enum pddiFillMode mode);

    void EnableFog(unsigned char enable);

    void SetFog(struct pddiColour & colour, float start, float end);

    void BeginTiming();

    float EndTiming();

    class pddiObject * GetExtension(unsigned int extension);

    unsigned char VerifyExtension(unsigned int extension);

    // Members
protected:
    class gcDevice * mDevice; // offset 0x104, size 0x4
    class gcDisplay * mDisplay; // offset 0x108, size 0x4
    struct _GXLightObj mHWLights[8]; // offset 0x10C, size 0x200
    long long mTimerStart; // offset 0x310, size 0x8
    int mStatPass; // offset 0x318, size 0x4
    unsigned long mPerfClippedVertices; // offset 0x31C, size 0x4
    unsigned long mPerfClippedVertexClocks; // offset 0x320, size 0x4
    unsigned long mPerfTransformClipRatio; // offset 0x324, size 0x4
    unsigned long mPerfTransformWaitInputClocks; // offset 0x328, size 0x4
    unsigned long mPerfTransformWaitOutputClocks; // offset 0x32C, size 0x4
    unsigned long mPerfTransformClocks; // offset 0x330, size 0x4
    unsigned long mPerfTransformLightingClocks; // offset 0x334, size 0x4
    unsigned long mPerfTransformWaitBottomClocks; // offset 0x338, size 0x4
    unsigned long mPerfTransformRegisterLoadClocks; // offset 0x33C, size 0x4
    unsigned long mPerfTransformRegisterReadClocks; // offset 0x340, size 0x4
    unsigned long mPerfTrianglesCulled; // offset 0x344, size 0x4
    unsigned long mPerfTrianglesPassed; // offset 0x348, size 0x4
    unsigned long mPerfTrianglesScissored; // offset 0x34C, size 0x4
    unsigned long mPerfPerf0Clocks; // offset 0x350, size 0x4
    unsigned long mPerfTexelsProcesed; // offset 0x354, size 0x4
    unsigned long mPerfTextureIdleClocks; // offset 0x358, size 0x4
    unsigned long mPerfTextureRegisterLoad; // offset 0x35C, size 0x4
    unsigned long mPerfTextureMainMemStallClocks; // offset 0x360, size 0x4
    unsigned long mPerfTextureCacheHit12; // offset 0x364, size 0x4
    unsigned long mPerfTextureCacheHit34; // offset 0x368, size 0x4
    unsigned long mPerfTextureCacheHit56; // offset 0x36C, size 0x4
    unsigned long mPerfTextureCacheHit78; // offset 0x370, size 0x4
    unsigned long mPerfTextureCacheMiss; // offset 0x374, size 0x4
    unsigned long mPerfVertexCacheStalls; // offset 0x378, size 0x4
    unsigned long mPerfVertexCount; // offset 0x37C, size 0x4
    unsigned long mPerfIndexedVertexCahceMisses; // offset 0x380, size 0x4
    unsigned long mPerfGXTotalBytesRead; // offset 0x384, size 0x4
    unsigned long mPerfPerf1Clocks; // offset 0x388, size 0x4
    unsigned long mPerfVCacheCheck; // offset 0x38C, size 0x4
    unsigned long mPerfVCacheMiss; // offset 0x390, size 0x4
    unsigned long mPerfVCacheStallClocks; // offset 0x394, size 0x4
    unsigned long mPerfTopPixelsIn; // offset 0x398, size 0x4
    unsigned long mPerfTopPixelsOut; // offset 0x39C, size 0x4
    unsigned long mPerfBottomPixelsIn; // offset 0x3A0, size 0x4
    unsigned long mPerfBottomPixelsOut; // offset 0x3A4, size 0x4
    unsigned long mPerfRasterisedPixels; // offset 0x3A8, size 0x4
    unsigned long mPerfPixelCopyClocks; // offset 0x3AC, size 0x4
    struct Stats mStatPasses[14]; // offset 0x3B0, size 0xE0
    long long mBeginFrameTime; // offset 0x490, size 0x8
};
// Range: 0x800B19CC -> 0x800B1CB4
// this: r1+0x8
gcContext::gcContext(class gcDevice * dev /* r20 */, class gcDisplay * disp /* r19 */) {
    // References
    // -> struct [anonymous] gcContext::__vtable;
}

// Range: 0x800B1CB4 -> 0x800B1D40
// this: r30
gcContext::~gcContext() {
    // References
    // -> struct [anonymous] gcContext::__vtable;
}

// Range: 0x800B1D40 -> 0x800B1DB4
// this: r31
void gcContext::BeginFrame() {}

// Range: 0x800B1DB4 -> 0x800B2104
// this: r26
void gcContext::EndFrame() {
    // Local variables
    long long endtime; // r1+0x10
    unsigned char ds; // r30
    char s[2048]; // r1+0x44
    unsigned long zrej; // r25
    float zrejp; // f31
}

// Range: 0x800B2104 -> 0x800B2124
// this: r3
void gcContext::Clear(unsigned int bufferMask /* r4 */) {}

// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x800B2124 -> 0x800B21A4
// this: r31
void gcContext::SetClearColour(struct pddiColour & colour /* r1+0xC */) {
    // Local variables
    struct _GXColor gxcol; // r1+0x44
    unsigned int d; // r4
}

// Range: 0x800B21A4 -> 0x800B2218
// this: r31
void gcContext::SetClearDepth(float depth /* f1 */) {
    // Local variables
    struct _GXColor gxcol; // r1+0x40
    unsigned int d; // r4
}

// Range: 0x800B2218 -> 0x800B2460
// this: r29
void gcContext::SetupHardwareProjection() {
    // Local variables
    float matrix[4][4]; // r1+0x20
    class pddiCamera & camera; // r30
    float fov; // f5
    float n; // f6
    float f; // f1
    float p2; // f5
    float width; // f31
    float height; // f7
    class pddiFloatRect & vw; // r3
    float vpl; // f1
    float vpt; // f2
    float vpw; // f3
    float vph; // f4
}

enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800B2460 -> 0x800B26BC
// this: r31
void gcContext::LoadHardwareMatrix(enum pddiMatrixType id /* r1+0xC */) {
    // Local variables
    class pddiMatrix tmp; // r1+0x78
    float gxmlh[3][4]; // r1+0x48
    float gxmrh[3][4]; // r1+0x18
}

// Range: 0x800B26BC -> 0x800B275C
// this: r30
void gcContext::SetScissor(class pddiRect * rect /* r31 */) {}

unsigned int currentUID; // size: 0x4, address: 0x8013A218
class pddiBaseShader * lastShader; // size: 0x4, address: 0x8013B2DC
// Range: 0x800B275C -> 0x800B28CC
// this: r28
class gcPrimStream * gcContext::BeginPrims(class pddiShader * mat /* r26 */, enum pddiPrimType primType /* r29 */, unsigned int vertexType /* r30 */) {
    // Local variables
    class pddiBaseShader * material; // r26

    // References
    // -> static class gcPrimStream gPrimStream;
    // -> enum _GXPrimitive primTypeTable[5];
    // -> class pddiBaseShader * lastShader;
    // -> unsigned int currentUID;
}

// total size: 0x10
struct pddiShadeMatrixTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiMatrix &); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeVectorTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiVector &); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeColourTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, struct pddiColour); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeFloatTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, float); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeIntTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, int); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeTextureTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiTexture *); // offset 0x4, size 0x4
};
// total size: 0x10
class pddiBaseShader : public pddiShader {
    // Static members
    static unsigned int newUID; // size: 0x4
    static unsigned int currentUID; // size: 0x4
    static class pddiBaseShader * lastShader; // size: 0x4

    // Members
protected:
    unsigned int uid; // offset 0xC, size 0x4
};
// Range: 0x800B28CC -> 0x800B2900
// this: r3
void gcContext::EndPrims(class gcPrimStream * stream /* r31 */) {}

// Range: 0x800B2900 -> 0x800B2A50
// this: r28
void gcContext::DrawPrimBuffer(class pddiShader * mat /* r4 */, class pddiPrimBuffer * buffer /* r29 */) {
    // Local variables
    class pddiBaseShader * material; // r30

    // References
    // -> class pddiBaseShader * lastShader;
    // -> unsigned int currentUID;
}

// Range: 0x800B2A50 -> 0x800B2A58
int gcContext::GetMaxLights() {}

// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800B2A58 -> 0x800B2EAC
// this: r28
void gcContext::SetupHardwareLight(int handle /* r1+0xC */) {
    // Local variables
    struct _GXLightObj * dl; // r30
    struct _GXLightObj * sl; // r29
    struct _GXColor c; // r1+0x10C
    class pddiVector wp; // r1+0x100
    class pddiVector wd; // r1+0xF4
    class pddiVector sd; // r1+0xE8
    float spot2; // f31
    float spot1; // f30
    float spot0; // f29
    float sharpness; // f1
    class pddiVector vp; // r1+0xD8
    class pddiVector vd; // r1+0xCC
    class pddiVector vsd; // r1+0xC0
    class pddiMatrix tmp; // r1+0x7C
}

// Range: 0x800B2EAC -> 0x800B3058
// this: r21
void gcContext::PreMultiplyLights(struct pddiColour & diffuse /* r22 */, struct pddiColour & specular /* r23 */, float shininess /* r1+0x14 */) {
    // Local variables
    int a; // r26
    struct _GXLightObj * dl; // r25
    struct _GXLightObj * sl; // r24
    struct _GXColor c; // r1+0x98
}

// Range: 0x800B3058 -> 0x800B3084
// this: r3
void gcContext::SetAmbientLight(struct pddiColour & col /* r1+0xC */) {}

// Range: 0x800B3084 -> 0x800B3110
// this: r3
void gcContext::SetColourWrite(unsigned char red /* r28 */, unsigned char green /* r29 */, unsigned char blue /* r30 */, unsigned char alpha /* r31 */) {}

enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
static enum _GXCullMode gcCullModeTable[3]; // size: 0xC, address: 0x80110624
enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
// Range: 0x800B3110 -> 0x800B3154
// this: r3
void gcContext::SetCullMode(enum pddiCullMode mode /* r31 */) {
    // References
    // -> static enum _GXCullMode gcCullModeTable[3];
}

enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
static enum _GXCompare compTable[8]; // size: 0x20, address: 0x80110630
// Range: 0x800B3154 -> 0x800B31E4
// this: r31
void gcContext::EnableZBuffer(unsigned char enable /* r4 */) {
    // References
    // -> static enum _GXCompare compTable[8];
}

enum pddiCompareMode {
    PDDI_COMPARE_NONE = 0,
    PDDI_COMPARE_ALWAYS = 1,
    PDDI_COMPARE_LESS = 2,
    PDDI_COMPARE_LESSEQUAL = 3,
    PDDI_COMPARE_GREATER = 4,
    PDDI_COMPARE_GREATEREQUAL = 5,
    PDDI_COMPARE_EQUAL = 6,
    PDDI_COMPARE_NOTEQUAL = 7,
};
// Range: 0x800B31E4 -> 0x800B3274
// this: r31
void gcContext::SetZCompare(enum pddiCompareMode compareMode /* r4 */) {
    // References
    // -> static enum _GXCompare compTable[8];
}

// Range: 0x800B3274 -> 0x800B3304
// this: r31
void gcContext::SetZWrite(unsigned char b /* r4 */) {
    // References
    // -> static enum _GXCompare compTable[8];
}

// Range: 0x800B3304 -> 0x800B3308
void gcContext::SetZBias() {}

// Range: 0x800B3308 -> 0x800B3328
// this: r3
void gcContext::SetZRange(float n /* f1 */, float f /* f2 */) {}

// Range: 0x800B3328 -> 0x800B3348
// this: r3
void gcContext::EnableStencilBuffer(unsigned char enable /* r4 */) {}

// Range: 0x800B3348 -> 0x800B3368
// this: r3
void gcContext::SetStencilCompare(enum pddiCompareMode compare /* r4 */) {}

// Range: 0x800B3368 -> 0x800B3388
// this: r3
void gcContext::SetStencilRef(int ref /* r4 */) {}

// Range: 0x800B3388 -> 0x800B33A8
// this: r3
void gcContext::SetStencilMask(unsigned int mask /* r4 */) {}

// Range: 0x800B33A8 -> 0x800B33C8
// this: r3
void gcContext::SetStencilWriteMask(unsigned int mask /* r4 */) {}

enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
// Range: 0x800B33C8 -> 0x800B33E8
// this: r3
void gcContext::SetStencilOp(enum pddiStencilOp failOp /* r4 */, enum pddiStencilOp zFailOp /* r5 */, enum pddiStencilOp zPassOp /* r6 */) {}

// Range: 0x800B33E8 -> 0x800B343C
// this: r3
void gcContext::SetAlphaRef(float ref /* f31 */) {
    // Local variables
    unsigned char aref; // r4
}

enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
// Range: 0x800B343C -> 0x800B345C
// this: r3
void gcContext::SetFillMode(enum pddiFillMode mode /* r4 */) {}

enum _GXFogType {
    GX_FOG_NONE = 0,
    GX_FOG_LIN = 2,
    GX_FOG_EXP = 4,
    GX_FOG_EXP2 = 5,
    GX_FOG_REVEXP = 6,
    GX_FOG_REVEXP2 = 7,
};
static enum _GXFogType fogTable[4]; // size: 0x10, address: 0x80110650
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x800B345C -> 0x800B3544
// this: r30
void gcContext::EnableFog(unsigned char enable /* r31 */) {
    // Local variables
    struct pddiColour c; // r1+0x34
    float start; // r1+0x30
    float end; // r1+0x2C
    struct _GXColor fogc; // r1+0x28
    class pddiCamera & camera; // r3
    float n; // f3
    float f; // f4
}

// Range: 0x800B3544 -> 0x800B3628
// this: r30
void gcContext::SetFog(struct pddiColour & colour /* r31 */, float start /* f30 */, float end /* f31 */) {
    // Local variables
    struct _GXColor fogc; // r1+0x34
}

// Range: 0x800B3628 -> 0x800B3630
int gcContext::GetMaxTextureDimension() {}

// Range: 0x800B3630 -> 0x800B3664
// this: r31
void gcContext::BeginTiming() {}

// Range: 0x800B3664 -> 0x800B36F0
// this: r31
float gcContext::EndTiming() {
    // Local variables
    long long end; // r1+0x8
    float us; // r1+0x8
}

// Range: 0x800B36F0 -> 0x800B3788
// this: r31
class pddiObject * gcContext::GetExtension(unsigned int extension /* r4 */) {}

// Range: 0x800B3788 -> 0x800B37CC
// this: r3
unsigned char gcContext::VerifyExtension(unsigned int extension /* r4 */) {}

// total size: 0x38
struct {} pddiPrimBuffer::__vtable; // size: 0x38, address: 0x801107B4
// total size: 0x38
struct {} gcPrimBuffer::__vtable; // size: 0x38, address: 0x801106AC
// total size: 0x4C
struct {} pddiPrimBufferStream::__vtable; // size: 0x4C, address: 0x80110768
// total size: 0x4C
struct {} gcPrimBufferStream::__vtable; // size: 0x4C, address: 0x8011071C
// total size: 0x4C
class gcPrimBuffer : public pddiPrimBuffer {
    // Functions
    gcPrimBuffer(class gcContext * context);

    ~gcPrimBuffer();

    void Create(enum pddiPrimType type, unsigned int vertexFormat, int nVertex, int nIndex);

    class pddiPrimBufferStream * Lock();

    void Unlock();

    void SetIndices(unsigned short * i, int count);

    void Display();

    // Members
protected:
    class gcPrimBufferStream * mStream; // offset 0xC, size 0x4
    class gcContext * mContext; // offset 0x10, size 0x4
    enum pddiPrimType mPrimType; // offset 0x14, size 0x4
    unsigned int mVertexType; // offset 0x18, size 0x4
    float * mCoord; // offset 0x1C, size 0x4
    float * mNormal; // offset 0x20, size 0x4
    float * mUV; // offset 0x24, size 0x4
    unsigned char * mColour; // offset 0x28, size 0x4
    int mTotal; // offset 0x2C, size 0x4
    int mVertexCount; // offset 0x30, size 0x4
    int mIndexCount; // offset 0x34, size 0x4
    int mDLPos; // offset 0x38, size 0x4
    int mDLIndexCount; // offset 0x3C, size 0x4
    int mDLByteCount; // offset 0x40, size 0x4
    unsigned char * mDisplayList; // offset 0x44, size 0x4
    int mDisplayListSize; // offset 0x48, size 0x4
};
// Range: 0x800B37CC -> 0x800B388C
// this: r1+0x8
gcPrimBuffer::gcPrimBuffer(class gcContext * context /* r31 */) {
    // References
    // -> struct [anonymous] gcPrimBufferStream::__vtable;
    // -> struct [anonymous] pddiPrimBufferStream::__vtable;
    // -> struct [anonymous] gcPrimBuffer::__vtable;
    // -> struct [anonymous] pddiPrimBuffer::__vtable;
}

enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
// Range: 0x800B388C -> 0x800B395C
// this: r30
gcPrimBuffer::~gcPrimBuffer() {
    // References
    // -> struct [anonymous] pddiPrimBuffer::__vtable;
    // -> struct [anonymous] gcPrimBuffer::__vtable;
}

// Range: 0x800B395C -> 0x800B3C28
// this: r31
void gcPrimBuffer::Create(enum pddiPrimType type /* r1+0xC */, unsigned int vertexFormat /* r1+0x10 */, int nVertex /* r1+0x18 */, int nIndex /* r1+0x1C */) {
    // Local variables
    int numuv; // r1+0x8
    int a; // r4

    // References
    // -> unsigned short gcDisplayListPrimTypes[5];
}

// Range: 0x800B3C28 -> 0x800B3CA4
// this: r3
class pddiPrimBufferStream * gcPrimBuffer::Lock() {
    // Local variables
    int pos; // r5
}

// Range: 0x800B3CA4 -> 0x800B3DF4
// this: r30
void gcPrimBuffer::Unlock() {
    // Local variables
    int numuv; // r31
}

// Range: 0x800B3DF4 -> 0x800B3EB8
// this: r3
void gcPrimBuffer::SetIndices(unsigned short * i /* r4 */, int count /* r5 */) {
    // Local variables
    int a; // r1+0x8
    int b; // r7
}

enum _GXAttrType {
    GX_NONE = 0,
    GX_DIRECT = 1,
    GX_INDEX8 = 2,
    GX_INDEX16 = 3,
};
enum _GXAttr {
    GX_VA_PNMTXIDX = 0,
    GX_VA_TEX0MTXIDX = 1,
    GX_VA_TEX1MTXIDX = 2,
    GX_VA_TEX2MTXIDX = 3,
    GX_VA_TEX3MTXIDX = 4,
    GX_VA_TEX4MTXIDX = 5,
    GX_VA_TEX5MTXIDX = 6,
    GX_VA_TEX6MTXIDX = 7,
    GX_VA_TEX7MTXIDX = 8,
    GX_VA_POS = 9,
    GX_VA_NRM = 10,
    GX_VA_CLR0 = 11,
    GX_VA_CLR1 = 12,
    GX_VA_TEX0 = 13,
    GX_VA_TEX1 = 14,
    GX_VA_TEX2 = 15,
    GX_VA_TEX3 = 16,
    GX_VA_TEX4 = 17,
    GX_VA_TEX5 = 18,
    GX_VA_TEX6 = 19,
    GX_VA_TEX7 = 20,
    GX_POS_MTX_ARRAY = 21,
    GX_NRM_MTX_ARRAY = 22,
    GX_TEX_MTX_ARRAY = 23,
    GX_LIGHT_ARRAY = 24,
    GX_VA_NBT = 25,
    GX_VA_MAX_ATTR = 26,
    GX_VA_NULL = 255,
};
// Range: 0x800B3EB8 -> 0x800B4128
// this: r31
void gcPrimBuffer::Display() {
    // Local variables
    enum _GXAttrType at; // r27
    int numuv; // r1+0x8
    int a; // r26
    enum _GXAttr attr; // r25
}

// Range: 0x800B4128 -> 0x800B42A4
// this: r28
void gcPrimStream::Begin(class gcContext * con /* r1+0xC */, enum _GXPrimitive type /* r1+0x10 */, unsigned int vType /* r1+0x14 */) {
    // Local variables
    int numuv; // r1+0x8
    int a; // r30
    enum _GXAttr attr; // r29
}

// Range: 0x800B42A4 -> 0x800B44A0
// this: r31
void gcPrimStream::End() {
    // Local variables
    int idx; // r1+0x8
    int numuv; // r1+0x8
    int a; // r8
}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A008
static // total size: 0x8
struct {} pddiPrimBuffer::__RTTI; // size: 0x8, address: 0x8013A010
static // total size: 0x8
struct {} gcPrimBuffer::__RTTI; // size: 0x8, address: 0x8013A018
static // total size: 0x8
struct {} pddiPrimBufferStream::__RTTI; // size: 0x8, address: 0x8013A020
static // total size: 0x8
struct {} gcPrimBufferStream::__RTTI; // size: 0x8, address: 0x8013A028
// total size: 0x8
class gcPrimBufferStream : public pddiPrimBufferStream {
    // Functions
    void Next();

    void Coord(float x, float y, float z);

    void Normal(float x, float y, float z);

    void Colour(struct pddiColour & colour);

    void UV(float u, float v, int channel);

    void Vertex(class pddiVector * v, class pddiVector * n, class pddiVector2 * uv);

    void Vertex(class pddiVector * v, struct pddiColour & c, class pddiVector2 * uv);

    void Vertex(class pddiVector * v, class pddiVector2 * uv);

    void Vertex(class pddiVector * v, class pddiVector * n);

    void Vertex(class pddiVector * v, struct pddiColour & c);

    // Members
public:
    class gcPrimBuffer * mBuffer; // offset 0x4, size 0x4
};
// Range: 0x800B44A0 -> 0x800B4590
// this: r1+0x0
void gcPrimBufferStream::Next() {}

// Range: 0x800B4590 -> 0x800B45E0
// this: r3
void gcPrimBufferStream::Coord(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {}

// Range: 0x800B45E0 -> 0x800B4608
// this: r1+0x0
void gcPrimBufferStream::Normal(float x /* r1+0x4 */, float y /* r1+0x8 */, float z /* r1+0xC */) {}

// Range: 0x800B4608 -> 0x800B4658
// this: r1+0x0
void gcPrimBufferStream::Colour(struct pddiColour & colour /* r1+0x4 */) {}

// Range: 0x800B4658 -> 0x800B467C
// this: r1+0x0
void gcPrimBufferStream::UV(float u /* r1+0x4 */, float v /* r1+0x8 */, int channel /* r1+0xC */) {}

// Range: 0x800B467C -> 0x800B4680
void gcPrimBufferStream::Specular() {}

// Range: 0x800B4680 -> 0x800B4684
void gcPrimBufferStream::SkinIndices() {}

// Range: 0x800B4684 -> 0x800B4688
void gcPrimBufferStream::SkinWeights() {}

// Range: 0x800B4688 -> 0x800B4734
// this: r3
void gcPrimBufferStream::Vertex(class pddiVector * v /* r1+0xC */, class pddiVector * n /* r1+0x10 */, class pddiVector2 * uv /* r1+0x14 */) {}

// Range: 0x800B4734 -> 0x800B47FC
// this: r3
void gcPrimBufferStream::Vertex(class pddiVector * v /* r1+0xC */, struct pddiColour & c /* r1+0x10 */, class pddiVector2 * uv /* r1+0x14 */) {}

// Range: 0x800B47FC -> 0x800B4878
// this: r3
void gcPrimBufferStream::Vertex(class pddiVector * v /* r1+0xC */, class pddiVector2 * uv /* r1+0x10 */) {}

// Range: 0x800B4878 -> 0x800B4904
// this: r3
void gcPrimBufferStream::Vertex(class pddiVector * v /* r1+0xC */, class pddiVector * n /* r1+0x10 */) {}

// Range: 0x800B4904 -> 0x800B49AC
// this: r3
void gcPrimBufferStream::Vertex(class pddiVector * v /* r1+0xC */, struct pddiColour & c /* r1+0x10 */) {}

// Range: 0x800B49AC -> 0x800B49B4
unsigned char gcPrimBufferStream::CheckMemImageVersion() {}

// Range: 0x800B49B4 -> 0x800B49BC
void * gcPrimBufferStream::GetMemImagePtr() {}

// Range: 0x800B49BC -> 0x800B49C4
unsigned int gcPrimBufferStream::GetMemImageLength() {}

// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static // total size: 0x8
struct {} pddiRenderContext::__RTTI; // size: 0x8, address: 0x8013A030
static // total size: 0x8
struct {} pddiBaseContext::__RTTI; // size: 0x8, address: 0x8013A038
static // total size: 0x8
struct {} gcContext::__RTTI; // size: 0x8, address: 0x8013A040
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
enum pddiPixelFormat {
    PDDI_PIXEL_UNKNOWN = 0,
    PDDI_PIXEL_RGB565 = 1,
    PDDI_PIXEL_ARGB1555 = 2,
    PDDI_PIXEL_RGB555 = 3,
    PDDI_PIXEL_ARGB4444 = 4,
    PDDI_PIXEL_RGB888 = 5,
    PDDI_PIXEL_ARGB8888 = 6,
    PDDI_PIXEL_PAL8 = 7,
    PDDI_PIXEL_PAL4 = 8,
    PDDI_PIXEL_LUM8 = 9,
    PDDI_PIXEL_DUDV88 = 10,
    PDDI_PIXEL_DXT1 = 11,
    PDDI_PIXEL_DXT2 = 12,
    PDDI_PIXEL_DXT3 = 13,
    PDDI_PIXEL_DXT4 = 14,
    PDDI_PIXEL_DXT5 = 15,
    PDDI_PIXEL_Z32 = 16,
    PDDI_PIXEL_Z24 = 17,
    PDDI_PIXEL_Z16 = 18,
    PDDI_PIXEL_Z8 = 19,
    PDDI_PIXEL_PS2_4BIT = 20,
    PDDI_PIXEL_PS2_8BIT = 21,
    PDDI_PIXEL_PS2_16BIT = 22,
    PDDI_PIXEL_PS2_32BIT = 23,
};
// total size: 0x50
struct pddiLockInfo {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum pddiPixelFormat format; // offset 0xC, size 0x4
    unsigned char native; // offset 0x10, size 0x1
    int rgbaLShift[4]; // offset 0x14, size 0x10
    int rgbaRShift[4]; // offset 0x24, size 0x10
    unsigned int rgbaMask[4]; // offset 0x34, size 0x10
    int pitch; // offset 0x44, size 0x4
    void * bits; // offset 0x48, size 0x4
    void * palette; // offset 0x4C, size 0x4
};
// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
enum pddiTextureType {
    PDDI_TEXTYPE_RGB = 0,
    PDDI_TEXTYPE_PALETTIZED = 1,
    PDDI_TEXTYPE_LUMINANCE = 2,
    PDDI_TEXTYPE_BUMPMAP = 3,
    PDDI_TEXTYPE_DXT1 = 4,
    PDDI_TEXTYPE_DXT2 = 5,
    PDDI_TEXTYPE_DXT3 = 6,
    PDDI_TEXTYPE_DXT4 = 7,
    PDDI_TEXTYPE_DXT5 = 8,
    PDDI_TEXTYPE_IPU = 9,
    PDDI_TEXTYPE_Z = 10,
    PDDI_TEXTURE_LINEAR = 11,
    PDDI_TEXTYPE_RENDERTARGET = 12,
    PDDI_TEXTYPE_PS2_4BIT = 13,
    PDDI_TEXTYPE_PS2_8BIT = 14,
    PDDI_TEXTYPE_PS2_16BIT = 15,
    PDDI_TEXTYPE_PS2_32BIT = 16,
};
enum pddiTextureUsageHint {
    PDDI_USAGE_STATIC = 0,
    PDDI_USAGE_DYNAMIC = 1,
    PDDI_USAGE_NOCACHE = 2,
};
// total size: 0xC
class pddiTexture : public pddiObject {};
enum pddiStateMask {
    PDDI_STATE_RENDER = 1,
    PDDI_STATE_VIEW = 2,
    PDDI_STATE_LIGHTING = 4,
    PDDI_STATE_FOG = 8,
    PDDI_STATE_STENCIL = 16,
    PDDI_STATE_ALL = -1,
};
enum pddiStatType {
    PDDI_STAT_CURRENT_FRAME = 0,
    PDDI_STAT_FRAME_TIME = 1,
    PDDI_STAT_BUFFERED_PRIM = 2,
    PDDI_STAT_BUFFERED_PRIM_VERT = 3,
    PDDI_STAT_BUFFERED_INDEXED_PRIM = 4,
    PDDI_STAT_BUFFERED_INDEXED_PRIM_VERT = 5,
    PDDI_STAT_BUFFERED_PRIM_CALLS = 6,
    PDDI_STAT_BUFFERED_PRIM_AVG = 7,
    PDDI_STAT_BUFFERED_COUNT = 8,
    PDDI_STAT_BUFFERED_ALLOC = 9,
    PDDI_STAT_STREAMED_PRIM = 10,
    PDDI_STAT_STREAMED_PRIM_VERT = 11,
    PDDI_STAT_STREAMED_PRIM_CALLS = 12,
    PDDI_STAT_STREAMED_PRIM_AVG = 13,
    PDDI_STAT_SKINNED_BONES = 14,
    PDDI_STAT_SKINNED_XFORM_VERT = 15,
    PDDI_STAT_SKINNED_XFORM_MS = 16,
    PDDI_STAT_SKINNED_WAIT_MS = 17,
    PDDI_STAT_MATRIX_OPS = 18,
    PDDI_STAT_LIGHT_OPS = 19,
    PDDI_STAT_MATERIAL_OPS = 20,
    PDDI_STAT_TEXTURE_HITS = 21,
    PDDI_STAT_TEXTURE_MISSES = 22,
    PDDI_STAT_TEXTURE_UPLOADED = 23,
    PDDI_STAT_TEXTURE_ALLOCATED = 24,
    PDDI_STAT_TEXTURE_SLOP = 25,
    PDDI_STAT_TEXTURE_COUNT_4BIT = 26,
    PDDI_STAT_TEXTURE_ALLOC_4BIT = 27,
    PDDI_STAT_TEXTURE_COUNT_8BIT = 28,
    PDDI_STAT_TEXTURE_ALLOC_8BIT = 29,
    PDDI_STAT_TEXTURE_COUNT_16BIT = 30,
    PDDI_STAT_TEXTURE_ALLOC_16BIT = 31,
    PDDI_STAT_TEXTURE_COUNT_32BIT = 32,
    PDDI_STAT_TEXTURE_ALLOC_32BIT = 33,
    PDDI_STAT_TEXTURE_COUNT_DXTN = 34,
    PDDI_STAT_TEXTURE_ALLOC_DXTN = 35,
};
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// total size: 0xC
class pddiShader : public pddiObject {};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
// total size: 0xC
class pddiRenderContext : public pddiObject {};
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
enum pddiDisplayMode {
    PDDI_DISPLAY_FULLSCREEN = 0,
    PDDI_DISPLAY_WINDOW = 1,
    PDDI_DISPLAY_FULLSCREEN_PAL = 2,
};
// total size: 0xC
class pddiDisplay : public pddiObject {};
// total size: 0x110
struct pddiLibInfo {
    // Members
    int versionMajor; // offset 0x0, size 0x4
    int versionMinor; // offset 0x4, size 0x4
    int versionBuild; // offset 0x8, size 0x4
    int libID; // offset 0xC, size 0x4
    char description[256]; // offset 0x10, size 0x100
};
// total size: 0xC
class pddiDevice : public pddiObject {};
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiMatrix * stack; // offset 0xC, size 0x4
};
// total size: 0x10
class pddiMatrixStack : public pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x4
class pddiState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class pddiFloatRect {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
// total size: 0x10
class pddiCamera {
    // Members
public:
    float nearPlane; // offset 0x0, size 0x4
    float farPlane; // offset 0x4, size 0x4
    float fov; // offset 0x8, size 0x4
    float aspect; // offset 0xC, size 0x4
};
// total size: 0x14
class pddiPlane {
    // Members
public:
    unsigned char enabled; // offset 0x0, size 0x1
    float coeff[4]; // offset 0x4, size 0x10
};
// total size: 0xC8
class pddiViewState : public pddiState {
    // Members
public:
    struct pddiColour clearColour; // offset 0x4, size 0x4
    float clearDepth; // offset 0x8, size 0x4
    unsigned int clearStencil; // offset 0xC, size 0x4
    enum pddiProjectionMode projectionMode; // offset 0x10, size 0x4
    class pddiFloatRect viewWindow; // offset 0x14, size 0x10
    class pddiCamera camera; // offset 0x24, size 0x10
    class pddiPlane clipPlane[6]; // offset 0x34, size 0x78
    float zBias; // offset 0xAC, size 0x4
    float zRange[2]; // offset 0xB0, size 0x8
    class pddiRect scissor; // offset 0xB8, size 0x10
};
// total size: 0x20
class pddiRenderState : public pddiState {
    // Members
public:
    enum pddiCullMode cullMode; // offset 0x4, size 0x4
    unsigned char zEnabled; // offset 0x8, size 0x1
    enum pddiCompareMode zCompare; // offset 0xC, size 0x4
    unsigned char zWrite; // offset 0x10, size 0x1
    enum pddiFillMode fillMode; // offset 0x14, size 0x4
    float alphaRef; // offset 0x18, size 0x4
    unsigned char redWrite; // offset 0x1C, size 0x1
    unsigned char greenWrite; // offset 0x1D, size 0x1
    unsigned char blueWrite; // offset 0x1E, size 0x1
    unsigned char alphaWrite; // offset 0x1F, size 0x1
};
// total size: 0x60
class pddiLight {
    // Members
public:
    class pddiVector worldPosition; // offset 0x0, size 0xC
    class pddiVector viewPosition; // offset 0xC, size 0xC
    class pddiVector worldDirection; // offset 0x18, size 0xC
    class pddiVector viewDirection; // offset 0x24, size 0xC
    int pad1; // offset 0x30, size 0x4
    unsigned char enabled; // offset 0x34, size 0x1
    enum pddiLightType type; // offset 0x38, size 0x4
    struct pddiColour colour; // offset 0x3C, size 0x4
    float range; // offset 0x40, size 0x4
    float attenA; // offset 0x44, size 0x4
    float attenB; // offset 0x48, size 0x4
    float attenC; // offset 0x4C, size 0x4
    float phi; // offset 0x50, size 0x4
    float theta; // offset 0x54, size 0x4
    float falloff; // offset 0x58, size 0x4
    int pad2; // offset 0x5C, size 0x4
};
// total size: 0x18C
class pddiLightingState : public pddiState {
    // Members
public:
    struct pddiColour ambient; // offset 0x4, size 0x4
    int padd; // offset 0x8, size 0x4
    class pddiLight light[4]; // offset 0xC, size 0x180
};
// total size: 0x14
class pddiFogState : public pddiState {
    // Members
public:
    unsigned char enabled; // offset 0x4, size 0x1
    struct pddiColour colour; // offset 0x8, size 0x4
    float start; // offset 0xC, size 0x4
    float end; // offset 0x10, size 0x4
};
// total size: 0x24
class pddiStencilState : public pddiState {
    // Members
public:
    unsigned char enabled; // offset 0x4, size 0x1
    enum pddiCompareMode compare; // offset 0x8, size 0x4
    int ref; // offset 0xC, size 0x4
    unsigned int mask; // offset 0x10, size 0x4
    unsigned int writeMask; // offset 0x14, size 0x4
    enum pddiStencilOp failOp; // offset 0x18, size 0x4
    enum pddiStencilOp zFailOp; // offset 0x1C, size 0x4
    enum pddiStencilOp zPassOp; // offset 0x20, size 0x4
};
// total size: 0x48
class pddiContextState {
    // Members
public:
    unsigned int currentFrame; // offset 0x0, size 0x4
    unsigned int inFrame; // offset 0x4, size 0x4
    unsigned int contextFlags; // offset 0x8, size 0x4
    class pddiMatrixStack * matrixStack[5]; // offset 0xC, size 0x14
    class pddiStack * viewStateStack; // offset 0x20, size 0x4
    class pddiStack * renderStateStack; // offset 0x24, size 0x4
    class pddiStack * lightingStateStack; // offset 0x28, size 0x4
    class pddiStack * fogStateStack; // offset 0x2C, size 0x4
    class pddiStack * stencilStateStack; // offset 0x30, size 0x4
    class pddiViewState * viewState; // offset 0x34, size 0x4
    class pddiRenderState * renderState; // offset 0x38, size 0x4
    class pddiLightingState * lightingState; // offset 0x3C, size 0x4
    class pddiFogState * fogState; // offset 0x40, size 0x4
    class pddiStencilState * stencilState; // offset 0x44, size 0x4
};
// total size: 0x8
class pddiFont {
    // Members
    class pddiRenderContext * context; // offset 0x0, size 0x4
    class pddiShader * shader; // offset 0x4, size 0x4
};
// total size: 0x104
class pddiBaseContext : public pddiRenderContext {
    // Members
protected:
    class pddiDisplay * display; // offset 0xC, size 0x4
    class pddiDevice * device; // offset 0x10, size 0x4
    class pddiContextState state; // offset 0x14, size 0x48
    float stats[40]; // offset 0x5C, size 0xA0
    class pddiFont * font; // offset 0xFC, size 0x4
    unsigned char displayStats; // offset 0x100, size 0x1
    unsigned char supressPrimTally; // offset 0x101, size 0x1
};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};



