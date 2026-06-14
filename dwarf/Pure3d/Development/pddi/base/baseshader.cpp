/*
    Compile unit: D:\Pure3d\development\pddi\base\baseshader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BD8BC -> 0x800BDDD4
*/
unsigned int currentUID; // size: 0x4, address: 0x8013A218
unsigned int newUID; // size: 0x4, address: 0x8013B2D8
class pddiBaseShader * lastShader; // size: 0x4, address: 0x8013B2DC
static int shaderCount; // size: 0x4, address: 0x8013B2E0
// total size: 0x48
struct pddiShadeAllocTable {
    // Members
    char name[64]; // offset 0x0, size 0x40
    class pddiBaseShader * (* func)(class pddiRenderContext *, char *, char *); // offset 0x40, size 0x4
    const char * aux; // offset 0x44, size 0x4
};
static struct pddiShadeAllocTable shaders[16]; // size: 0x480, address: 0x80112048
// total size: 0x10
class pddiBaseShader : public pddiShader {
    // Functions
    unsigned char SetTexture(unsigned int param, class pddiTexture * tex);

    unsigned char SetInt(unsigned int param, int i);

    unsigned char SetFloat(unsigned int param, float f);

    unsigned char SetColour(unsigned int param, struct pddiColour & c);

    unsigned char SetVector(unsigned int param, const class pddiVector & v);

    unsigned char SetMatrix(unsigned int param, const class pddiMatrix & m);

    // Static members
    static unsigned int newUID; // size: 0x4
    static unsigned int currentUID; // size: 0x4
    static class pddiBaseShader * lastShader; // size: 0x4

    // Members
protected:
    unsigned int uid; // offset 0xC, size 0x4
};
// Range: 0x800BD8BC -> 0x800BD960
// this: r29
unsigned char pddiBaseShader::SetTexture(unsigned int param /* r30 */, class pddiTexture * tex /* r31 */) {
    // Local variables
    struct pddiShadeTextureTable * tableTexture; // r5

    // References
    // -> unsigned int newUID;
}

// total size: 0x10
struct pddiShadeTextureTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiTexture *); // offset 0x4, size 0x4
};
// Range: 0x800BD960 -> 0x800BDA04
// this: r29
unsigned char pddiBaseShader::SetInt(unsigned int param /* r30 */, int i /* r31 */) {
    // Local variables
    struct pddiShadeIntTable * tableInt; // r5

    // References
    // -> unsigned int newUID;
}

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
// Range: 0x800BDA04 -> 0x800BDAA8
// this: r30
unsigned char pddiBaseShader::SetFloat(unsigned int param /* r31 */, float f /* f31 */) {
    // Local variables
    struct pddiShadeFloatTable * tableFloat; // r4

    // References
    // -> unsigned int newUID;
}

// Range: 0x800BDAA8 -> 0x800BDB54
// this: r29
unsigned char pddiBaseShader::SetColour(unsigned int param /* r30 */, struct pddiColour & c /* r31 */) {
    // Local variables
    struct pddiShadeColourTable * tableColour; // r5

    // References
    // -> unsigned int newUID;
}

// total size: 0x10
struct pddiShadeColourTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, struct pddiColour); // offset 0x4, size 0x4
};
// Range: 0x800BDB54 -> 0x800BDBF8
// this: r29
unsigned char pddiBaseShader::SetVector(unsigned int param /* r30 */, const class pddiVector & v /* r31 */) {
    // Local variables
    struct pddiShadeVectorTable * tableVector; // r5

    // References
    // -> unsigned int newUID;
}

// total size: 0x10
struct pddiShadeVectorTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiVector &); // offset 0x4, size 0x4
};
// Range: 0x800BDBF8 -> 0x800BDC9C
// this: r29
unsigned char pddiBaseShader::SetMatrix(unsigned int param /* r30 */, const class pddiMatrix & m /* r31 */) {
    // Local variables
    struct pddiShadeMatrixTable * tableMatrix; // r5

    // References
    // -> unsigned int newUID;
}

// total size: 0x10
struct pddiShadeMatrixTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiMatrix &); // offset 0x4, size 0x4
};
// Range: 0x800BDC9C -> 0x800BDD14
void pddiBaseShader::InstallShader(const char * name /* r3 */, class pddiBaseShader * (* func)(class pddiRenderContext *, char *, char *) /* r29 */, const char * aux /* r30 */) {
    // References
    // -> static int shaderCount;
    // -> static struct pddiShadeAllocTable shaders[16];
}

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
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
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
// total size: 0x0
class gcContext {};
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
// Range: 0x800BDD14 -> 0x800BDDD4
class pddiBaseShader * pddiBaseShader::AllocateShader(class pddiRenderContext * c /* r26 */, const char * name /* r27 */, const char * aux /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> static struct pddiShadeAllocTable shaders[16];
    // -> static int shaderCount;
}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A21C
static // total size: 0x8
struct {} pddiShader::__RTTI; // size: 0x8, address: 0x8013A224
static // total size: 0x8
struct {} pddiBaseShader::__RTTI; // size: 0x8, address: 0x8013A22C
// total size: 0x5C
struct {} pddiBaseShader::__vtable; // size: 0x5C, address: 0x80112510
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// total size: 0xC
class pddiShader : public pddiObject {};



