/*
    Compile unit: D:\Pure3d\development\p3d\effects\opticlensflare.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006D0D4 -> 0x8006D8FC
*/
// total size: 0x38
struct {} tLensFlare::__vtable; // size: 0x38, address: 0x80107C68
// total size: 0x14
struct Flare {
    // Members
    class tShader * shader; // offset 0x0, size 0x4
    struct pddiColour colour; // offset 0x4, size 0x4
    float distance; // offset 0x8, size 0x4
    float width; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
};
// total size: 0x48
class tLensFlare : public tOpticEffect {
    // Functions
    tLensFlare(unsigned int nFlares);

    ~tLensFlare();

    void SetShader(unsigned int i, class tShader * mat);

    void SetColour(unsigned int i, struct pddiColour & c);

    void SetDistance(unsigned int i, float d);

    void SetWidth(unsigned int i, float w);

    void SetHeight(unsigned int i, float h);

    void DisplayEffect(const class Vector & sourceWorldPos, float displayIntensity);

    // Members
protected:
    unsigned int numFlares; // offset 0x40, size 0x4
    struct Flare * flares; // offset 0x44, size 0x4
};
// Range: 0x8006D0D4 -> 0x8006D1CC
// this: r1+0x8
tLensFlare::tLensFlare(unsigned int nFlares /* r29 */) {
    // Local variables
    unsigned int i; // r10

    // References
    // -> struct [anonymous] tLensFlare::__vtable;
}

// Range: 0x8006D1D0 -> 0x8006D278
// this: r26
tLensFlare::~tLensFlare() {
    // Local variables
    unsigned int i; // r28

    // References
    // -> struct [anonymous] tLensFlare::__vtable;
}

// Range: 0x8006D278 -> 0x8006D2D8
// this: r1+0x8
void tLensFlare::SetShader(unsigned int i /* r1+0xC */, class tShader * mat /* r30 */) {}

// Range: 0x8006D2D8 -> 0x8006D2F0
// this: r1+0x0
void tLensFlare::SetColour(unsigned int i /* r1+0x4 */, struct pddiColour & c /* r1+0x8 */) {}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x8006D2F0 -> 0x8006D304
// this: r1+0x0
void tLensFlare::SetDistance(unsigned int i /* r1+0x4 */, float d /* r1+0x8 */) {}

// Range: 0x8006D304 -> 0x8006D320
// this: r1+0x0
void tLensFlare::SetWidth(unsigned int i /* r1+0x4 */, float w /* r1+0x8 */) {}

// Range: 0x8006D320 -> 0x8006D33C
// this: r1+0x0
void tLensFlare::SetHeight(unsigned int i /* r1+0x4 */, float h /* r1+0x8 */) {}

// total size: 0xF0
class tCamera : public tEntity {
    // Members
protected:
    float fov; // offset 0x10, size 0x4
    float aspect; // offset 0x14, size 0x4
    float nearPlane; // offset 0x18, size 0x4
    float farPlane; // offset 0x1C, size 0x4
    float fovScaleX; // offset 0x20, size 0x4
    float fovScaleY; // offset 0x24, size 0x4
    float leftPlane[4]; // offset 0x28, size 0x10
    float rightPlane[4]; // offset 0x38, size 0x10
    float upPlane[4]; // offset 0x48, size 0x10
    float downPlane[4]; // offset 0x58, size 0x10
    class Matrix worldToCamera; // offset 0x68, size 0x40
    class Matrix cameraToWorld; // offset 0xA8, size 0x40
    unsigned char updated; // offset 0xE8, size 0x1
};
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
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// Range: 0x8006D33C -> 0x8006D8FC
// this: r1+0x8
void tLensFlare::DisplayEffect(const class Vector & sourceWorldPos /* r31 */, float displayIntensity /* f30 */) {
    // Local variables
    struct Flare * flareEnd; // r28
    struct Flare * curFlare; // r30
    class tCamera * currentCamera; // r3
    class Vector sourceCameraPos; // r1+0x194
    class gcPrimStream * stream; // r31
    struct pddiColour modulatedColour; // r1+0x190
    float x; // f7
    float y; // f8
    class pddiVector vertex0; // r1+0x178
    class pddiVector vertex1; // r1+0x16C
    class pddiVector vertex2; // r1+0x160
    class pddiVector vertex3; // r1+0x154
    class pddiVector2 uv0; // r1+0x14C
    class pddiVector2 uv1; // r1+0x144
    class pddiVector2 uv2; // r1+0x13C
    class pddiVector2 uv3; // r1+0x134
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
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138F08
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138F18
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138F20
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x80138F30
static // total size: 0x8
struct {} tOpticEffect::__RTTI; // size: 0x8, address: 0x80138F38
static // total size: 0x8
struct {} tLensFlare::__RTTI; // size: 0x8, address: 0x80138F40
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
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
// total size: 0x10
class tEffect : public tDrawable {};
// total size: 0x40
class tOpticEffect : public tEffect {
    // Members
protected:
    float intensity; // offset 0x10, size 0x4
    float intensityRate; // offset 0x14, size 0x4
    float sqDistanceCutOff; // offset 0x18, size 0x4
    float sourceRadius; // offset 0x1C, size 0x4
    class Vector sourceCentre; // offset 0x20, size 0xC
    unsigned char sourceOccluded; // offset 0x2C, size 0x1
    float frame; // offset 0x30, size 0x4
    float frameTime; // offset 0x34, size 0x4
    float deltaFrame; // offset 0x38, size 0x4
    unsigned char zTest; // offset 0x3C, size 0x1
    unsigned char zWrite; // offset 0x3D, size 0x1
    unsigned char fog; // offset 0x3E, size 0x1
};



