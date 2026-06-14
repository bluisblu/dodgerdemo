/*
    Compile unit: D:\Pure3d\development\pddi\gamecube\gcbufcopy.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B8F14 -> 0x800B94DC
*/
// total size: 0x28
struct {} pddiExtBufferCopy::__vtable; // size: 0x28, address: 0x80111268
// total size: 0x28
struct {} gcExtBufferCopy::__vtable; // size: 0x28, address: 0x80111240
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// total size: 0xC
class pddiExtBufferCopy : public pddiObject {};
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
enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
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
enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xC
class pddiShader : public pddiObject {};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
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
    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
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
// total size: 0x10
class gcDevice : public pddiDevice {
    // Members
    unsigned char initialized; // offset 0xC, size 0x1
};
// total size: 0x0
class gcDisplay {};
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
// total size: 0x14
class gcExtBufferCopy : public pddiExtBufferCopy {
    // Functions
    gcExtBufferCopy(class gcContext * c, class gcDevice * d);

    ~gcExtBufferCopy();

    class pddiTexture * CreateZTexture(int xres, int yres, int bpp);

    class pddiTexture * CreateBackTexture(int xres, int yres, int bpp, unsigned char alpha);

    // Members
    class gcContext * mContext; // offset 0xC, size 0x4
    class gcDevice * mDevice; // offset 0x10, size 0x4
};
// Range: 0x800B8F14 -> 0x800B8F7C
// this: r29
gcExtBufferCopy::gcExtBufferCopy(class gcContext * c /* r30 */, class gcDevice * d /* r31 */) {
    // References
    // -> struct [anonymous] gcExtBufferCopy::__vtable;
    // -> struct [anonymous] pddiExtBufferCopy::__vtable;
}

// Range: 0x800B8FE0 -> 0x800B9054
// this: r30
gcExtBufferCopy::~gcExtBufferCopy() {
    // References
    // -> struct [anonymous] pddiExtBufferCopy::__vtable;
    // -> struct [anonymous] gcExtBufferCopy::__vtable;
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
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
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
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
// total size: 0xBC
class gcTexture : public pddiTexture {
    // Members
protected:
    class gcContext * mContext; // offset 0xC, size 0x4
    struct _GXTexObj mTexture; // offset 0x10, size 0x20
    struct _GXTlutObj * mPalette; // offset 0x30, size 0x4
    unsigned short * mPalEntries; // offset 0x34, size 0x4
    int mPalEntryCount; // offset 0x38, size 0x4
    int mWidth; // offset 0x3C, size 0x4
    int mHeight; // offset 0x40, size 0x4
    int mBitsPerPixel; // offset 0x44, size 0x4
    int mAlphaDepth; // offset 0x48, size 0x4
    enum pddiTextureType mType; // offset 0x4C, size 0x4
    enum pddiPixelFormat mFormat; // offset 0x50, size 0x4
    enum _GXTexFmt mGXTexFormat; // offset 0x54, size 0x4
    enum _GXTexWrapMode mClampMode; // offset 0x58, size 0x4
    int mMipMapLevels; // offset 0x5C, size 0x4
    int mPriority; // offset 0x60, size 0x4
    struct pddiLockInfo mLock; // offset 0x64, size 0x50
    unsigned char mSwizzleEnable; // offset 0xB4, size 0x1
    char * * mBits; // offset 0xB8, size 0x4
};
// Range: 0x800B9054 -> 0x800B9164
// this: r7
class pddiTexture * gcExtBufferCopy::CreateZTexture(int xres /* r28 */, int yres /* r29 */, int bpp /* r31 */) {
    // Local variables
    class gcTexture * tex; // r30
    unsigned char ok; // r1+0x8
}

// Range: 0x800B9164 -> 0x800B927C
// this: r8
class pddiTexture * gcExtBufferCopy::CreateBackTexture(int xres /* r27 */, int yres /* r28 */, int bpp /* r29 */, unsigned char alpha /* r31 */) {
    // Local variables
    class gcTexture * tex; // r30
    int alphadepth; // r7
    unsigned char ok; // r1+0x8
}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A0F0
static // total size: 0x8
struct {} pddiTexture::__RTTI; // size: 0x8, address: 0x8013A0F8
static // total size: 0x8
struct {} gcTexture::__RTTI; // size: 0x8, address: 0x8013A100
// Range: 0x800B927C -> 0x800B93DC
unsigned char gcExtBufferCopy::CopyZBuf(class pddiTexture * t /* r4 */, unsigned char clear /* r27 */) {
    // Local variables
    class gcTexture * tex; // r30
    unsigned short xres; // r29
    unsigned short yres; // r28
    struct pddiLockInfo * lock; // r1+0x8

    // References
    // -> static struct [anonymous] pddiTexture::__RTTI;
    // -> static struct [anonymous] gcTexture::__RTTI;
}

// Range: 0x800B93DC -> 0x800B94DC
unsigned char gcExtBufferCopy::CopyBackBuf(class pddiTexture * t /* r4 */, unsigned char clear /* r27 */) {
    // Local variables
    class gcTexture * tex; // r30
    unsigned short xres; // r29
    unsigned short yres; // r28
    struct pddiLockInfo * lock; // r1+0x8

    // References
    // -> static struct [anonymous] pddiTexture::__RTTI;
    // -> static struct [anonymous] gcTexture::__RTTI;
}

static // total size: 0x8
struct {} pddiExtBufferCopy::__RTTI; // size: 0x8, address: 0x8013A108
static // total size: 0x8
struct {} gcExtBufferCopy::__RTTI; // size: 0x8, address: 0x8013A110



