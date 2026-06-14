/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\guPrimGroupShadow.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000AF88 -> 0x8000C020
*/
// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80117718
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013AE90
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x80117724
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80117730
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x20
struct {} guPrimGroupShadow::__vtable; // size: 0x20, address: 0x800FC76C
// total size: 0x8
class tParticleRenderModule : public tRefCounted {};
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
// total size: 0x18
class tTexture : public tEntity {
    // Members
protected:
    class pddiTexture * texture; // offset 0x10, size 0x4
};
// total size: 0x18
class tShader : public tEntity {
    // Members
protected:
    class pddiShader * shader; // offset 0x10, size 0x4
};
// total size: 0x14
class tPrimGroup : public tRefCounted {
    // Members
protected:
    class tShader * mShader; // offset 0x8, size 0x4
    enum pddiPrimType mPrimType; // offset 0xC, size 0x4
    unsigned int mVertexFormat; // offset 0x10, size 0x4
};
// total size: 0x8
class Vector2 {
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
// total size: 0x2C
class tVertexList : public tRefCounted {
    // Members
    unsigned int format; // offset 0x8, size 0x4
    int nVertex; // offset 0xC, size 0x4
    class Vector * coord; // offset 0x10, size 0x4
    class Vector * normal; // offset 0x14, size 0x4
    class Vector2 * uv[4]; // offset 0x18, size 0x10
    struct pddiColour * colour; // offset 0x28, size 0x4
};
// total size: 0x34
class tPrimGroupStreamed : public tPrimGroup {
    // Members
    unsigned int mVertexCount; // offset 0x14, size 0x4
    unsigned int mIndexCount; // offset 0x18, size 0x4
    unsigned short * mIndices; // offset 0x1C, size 0x4
    class tVertexList * mVertexList; // offset 0x20, size 0x4
    class Vector * mWeightList; // offset 0x24, size 0x4
    unsigned int * mMatrixPalette; // offset 0x28, size 0x4
    int mMatrixCount; // offset 0x2C, size 0x4
    unsigned int * mMatrixList; // offset 0x30, size 0x4
};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0xE
struct Topology {
    // Members
    unsigned short v[3]; // offset 0x0, size 0x6
    unsigned short n[3]; // offset 0x6, size 0x6
    unsigned char mIsDegenerate; // offset 0xC, size 0x1
};
// total size: 0x4
struct Edge {
    // Members
    unsigned short a; // offset 0x0, size 0x2
    unsigned short b; // offset 0x2, size 0x2
};
// total size: 0x58
class guPrimGroupShadow : public tDrawable {
    // Functions
    guPrimGroupShadow(class tPrimGroupStreamed * pgsource, class tShader * shader);

    ~guPrimGroupShadow();

    void FindEdges();

    void CreateEdgeData();

    void SetLightDirection(const class Vector & lightAngle);

    void UpdateEdges();

    void Display();

    // Members
protected:
    unsigned short mNumVertex; // offset 0x10, size 0x2
    unsigned short mNumTri; // offset 0x12, size 0x2
    unsigned short mNumEdges; // offset 0x14, size 0x2
    unsigned short mMaxEdges; // offset 0x16, size 0x2
    struct Topology * mTopologies; // offset 0x18, size 0x4
    class Vector * mVertices; // offset 0x1C, size 0x4
    class Vector * mNormals; // offset 0x20, size 0x4
    unsigned char * mCulled; // offset 0x24, size 0x4
    struct Edge * mEdges; // offset 0x28, size 0x4
    class tPrimGroupStreamed * mPrimGroupSource; // offset 0x2C, size 0x4
    class tShader * mShader; // offset 0x30, size 0x4
    class tShader * mDebugShader; // offset 0x34, size 0x4
    class Vector mLightAngle; // offset 0x38, size 0xC
    class Vector mLastLightAngle; // offset 0x44, size 0xC
    unsigned char mDebug; // offset 0x50, size 0x1
};
// Range: 0x8000AF88 -> 0x8000B26C
// this: r1+0x8
guPrimGroupShadow::guPrimGroupShadow(class tPrimGroupStreamed * pgsource /* r29 */, class tShader * shader /* r31 */) {
    // References
    // -> struct [anonymous] guPrimGroupShadow::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// Range: 0x8000B2D0 -> 0x8000B384
// this: r30
guPrimGroupShadow::~guPrimGroupShadow() {
    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] guPrimGroupShadow::__vtable;
}

enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
// Range: 0x8000B384 -> 0x8000B3F4
int guPrimGroupShadow::VertsToPrims(enum pddiPrimType type /* r1+0x4 */, int verts /* r5 */) {}

// Range: 0x8000B3F4 -> 0x8000B5F4
// this: r23
void guPrimGroupShadow::FindEdges() {
    // Local variables
    unsigned short i; // r25
    unsigned short j; // r24
    struct Topology & ti; // r1+0x8
    struct Topology & tj; // r1+0x8
}

// Range: 0x8000B5F4 -> 0x8000B974
// this: r20
void guPrimGroupShadow::CreateEdgeData() {
    // Local variables
    enum pddiPrimType type; // r1+0x8
    unsigned short numIndex; // r1+0x8
    unsigned short step; // r25
    unsigned short i; // r5
    unsigned short j; // r6
    unsigned short k; // r11
    int NumDuplicateVerts; // r1+0x8
    int degenerateCount; // r1+0x8
    unsigned short a; // r24
    unsigned short b; // r23
    unsigned short c; // r22
    unsigned short nextTri; // r21
    class Vector vAB; // r1+0x98
    class Vector vBC; // r1+0x8C
}

// Range: 0x8000B974 -> 0x8000B9AC
// this: r3
void guPrimGroupShadow::SetLightDirection(const class Vector & lightAngle /* r1+0xC */) {}

// Range: 0x8000B9AC -> 0x8000BC08
// this: r1+0x8
void guPrimGroupShadow::UpdateEdges() {
    // Local variables
    unsigned short i; // r8
    unsigned short j; // r11
    unsigned short map[3]; // r1+0x74
}

// Range: 0x8000BC08 -> 0x8000BFE4
// this: r29
void guPrimGroupShadow::Display() {
    // Local variables
    class gcPrimStream * stream; // r31
    struct pddiColour colour; // r1+0x120
    unsigned short i; // r28
    class Vector & a; // r7
    class Vector & b; // r30
}

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
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137958
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137968
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80137970
static // total size: 0x8
struct {} guPrimGroupShadow::__RTTI; // size: 0x8, address: 0x80137978



