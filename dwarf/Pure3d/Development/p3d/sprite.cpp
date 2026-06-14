/*
    Compile unit: D:\Pure3d\development\p3d\sprite.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F634 -> 0x80050D98
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x20
struct {} tSprite::__vtable; // size: 0x20, address: 0x80102B44
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
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
// total size: 0x18
struct sprVertex {
    // Members
    class pddiVector v; // offset 0x0, size 0xC
    struct pddiColour c; // offset 0xC, size 0x4
    class pddiVector2 uv0; // offset 0x10, size 0x8
};
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
// total size: 0x18
class tTexture : public tEntity {
    // Members
protected:
    class pddiTexture * texture; // offset 0x10, size 0x4
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xC
class pddiShader : public pddiObject {};
// total size: 0x18
class tShader : public tEntity {
    // Members
protected:
    class pddiShader * shader; // offset 0x10, size 0x4
};
// total size: 0x70
class tSprite : public tDrawable {
    // Functions
    tSprite(class tImage * image, class tShader * mat, int border, int nx, int ny, class tImageConverter * conv);

    ~tSprite();

    void SetBlitBorder(int border);

    int CalcSections(struct tRect * * sections, int & numXSect, int & numYSect);

    void BuildSections(class tImage * image, class tImageConverter * conv);

    void BuildTexture(int texNum, struct tRect & src, int newX, int newY, class tImage * image, class tImage * buffer, class tImageConverter * conv);

    void BuildPoly(int polyNum, struct tRect & src, int newX, int newY);

    void SetColour(struct pddiColour & c);

    void Display();

    // Members
protected:
    int nPolys; // offset 0x10, size 0x4
    struct sprVertex * polys; // offset 0x14, size 0x4
    class tTexture * * textures; // offset 0x18, size 0x4
    class tShader * Shader; // offset 0x1C, size 0x4
    struct pddiColour colour; // offset 0x20, size 0x4
    int height; // offset 0x24, size 0x4
    int width; // offset 0x28, size 0x4
    int blitBorder; // offset 0x2C, size 0x4
    int nativeX; // offset 0x30, size 0x4
    int nativeY; // offset 0x34, size 0x4
    int maxSize; // offset 0x38, size 0x4
    int minSize; // offset 0x3C, size 0x4
    float scaleX; // offset 0x40, size 0x4
    float scaleY; // offset 0x44, size 0x4
    struct tBox3D box; // offset 0x48, size 0x18
    struct tSphere sphere; // offset 0x60, size 0x10
};
// Range: 0x8004F634 -> 0x8004F868
// this: r1+0x8
tSprite::tSprite(class tImage * image /* r29 */, class tShader * mat /* r30 */, int border /* r25 */, int nx /* r26 */, int ny /* r27 */, class tImageConverter * conv /* r31 */) {
    // References
    // -> struct [anonymous] tSprite::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// Range: 0x8004F868 -> 0x8004F938
// this: r28
tSprite::~tSprite() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] tSprite::__vtable;
}

// Range: 0x8004F938 -> 0x8004F9B0
// this: r31
void tSprite::SetBlitBorder(int border /* r4 */) {}

// Range: 0x8004F9B0 -> 0x8004FB84
// this: r1+0x8
int tSprite::CalcSections(struct tRect * * sections /* r4 */, int & numXSect /* r1+0x10 */, int & numYSect /* r1+0x14 */) {
    // Local variables
    int x; // r30
    int y; // r1+0x8
    int xSect; // r8
    int ySect; // r29
    int accumulated; // r28
}

static signed char init$408; // size: 0x1, address: 0x8013B240
// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
};
// total size: 0x30
class tImage32 : public tImage {};
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
// total size: 0x4
class tImageConverter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static class tImageConverter staticConv$406; // size: 0x4, address: 0x8013B244
// Range: 0x8004FB84 -> 0x8004FE5C
// this: r27
void tSprite::BuildSections(class tImage * image /* r28 */, class tImageConverter * conv /* r29 */) {
    // Local variables
    int numXSect; // r1+0x30
    int numYSect; // r1+0x2C
    int xSect; // r21
    int ySect; // r24
    int sectionNum; // r31
    struct tRect * * sections; // r30
    class tImage * buffer; // r23
    int border; // r22
    int newX; // r20
    int newY; // r19

    // References
    // -> static class tImageConverter staticConv$406;
    // -> static signed char init$408;
}

enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
};
// total size: 0x30
class tImage : public tEntity {
    // Members
protected:
    unsigned char permanent; // offset 0x10, size 0x1
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
    unsigned int key; // offset 0x20, size 0x4
    int alphaDepth; // offset 0x24, size 0x4
    unsigned char * image; // offset 0x28, size 0x4
    unsigned char hasAlpha; // offset 0x2C, size 0x1
    unsigned char keyEnabled; // offset 0x2D, size 0x1
};
// Range: 0x8004FE60 -> 0x800503B8
// this: r16
void tSprite::BuildTexture(int texNum /* r15 */, struct tRect & src /* r17 */, int newX /* r25 */, int newY /* r26 */, class tImage * image /* r27 */, class tImage * buffer /* r28 */, class tImageConverter * conv /* r14 */) {
    // Local variables
    int srcX1; // r21
    int srcX2; // r1+0x8
    int srcY1; // r20
    int srcY2; // r1+0x8
    int destX1; // r19
    int destX2; // r31
    int destY1; // r30
    int destY2; // r29
    int copyWidth; // r18
    int copyHeight; // r17
    int x; // r22
    int y; // r17
    unsigned int corner; // r20
}

// total size: 0x18
struct tRect {
    // Members
    int top; // offset 0x0, size 0x4
    int left; // offset 0x4, size 0x4
    int bottom; // offset 0x8, size 0x4
    int right; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int width; // offset 0x14, size 0x4
};
// Range: 0x800503B8 -> 0x8005070C
// this: r1+0x8
void tSprite::BuildPoly(int polyNum /* r1+0xC */, struct tRect & src /* r1+0x10 */, int newX /* r1+0x14 */, int newY /* r1+0x18 */) {
    // Local variables
    float fudgeU; // f8
    float fudgeV; // f6
    float u0; // f1
    float u1; // f8
    float v0; // f2
    float v1; // f9
}

// Range: 0x8005070C -> 0x8005074C
// this: r1+0x0
void tSprite::SetColour(struct pddiColour & c /* r1+0x4 */) {
    // Local variables
    int a; // r7
}

// Range: 0x8005074C -> 0x80050A5C
// this: r31
void tSprite::Display() {
    // Local variables
    int i; // r28
    class gcPrimStream * stream; // r27
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
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x24
struct {} tSpriteLoader::__vtable; // size: 0x24, address: 0x80102AD0
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x8
class tFileHandler : public tRefCounted {};
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
// total size: 0xA4
class tImageFactory {
    // Members
    int nHandler; // offset 0x0, size 0x4
    class tImageHandler * handler[32]; // offset 0x4, size 0x80
    class tImageConverter * converter; // offset 0x84, size 0x4
    unsigned char ignoreExt; // offset 0x88, size 0x1
    unsigned char autoStore; // offset 0x89, size 0x1
    unsigned char hasAlpha; // offset 0x8A, size 0x1
    int desiredDepth; // offset 0x8C, size 0x4
    unsigned char fullName; // offset 0x90, size 0x1
    int alphaDepthHint; // offset 0x94, size 0x4
    int nMipHint; // offset 0x98, size 0x4
    enum pddiTextureType typeHint; // offset 0x9C, size 0x4
    enum pddiTextureUsageHint usageHint; // offset 0xA0, size 0x4
};
// total size: 0x20
class tImageLoader : public tSimpleChunkHandler {
    // Members
protected:
    class tImageFactory * factory; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
};
// total size: 0x28
class tSpriteLoader : public tSimpleChunkHandler {
    // Functions
    tSpriteLoader();

    ~tSpriteLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    class tImageConverter * converter; // offset 0x18, size 0x4
    class tImageLoader * imageLoader; // offset 0x1C, size 0x4
    unsigned char forceAlphaTest; // offset 0x20, size 0x1
    unsigned char normalize; // offset 0x21, size 0x1
};
// ERROR: Failed to emit tag 2CE33B (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
struct Chunk {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int dataLength; // offset 0x4, size 0x4
    unsigned int chunkLength; // offset 0x8, size 0x4
    unsigned int startPosition; // offset 0xC, size 0x4
};
// total size: 0x210
class tChunkFile {
    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// ERROR: Failed to emit tag 2CF8B7 (GlobalSubroutine)
// ERROR: Failed to emit tag 2CFA16 (GlobalSubroutine)
enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138240
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138248
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138258
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138260
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138268
static // total size: 0x8
struct {} tSpriteLoader::__RTTI; // size: 0x8, address: 0x80138270
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138280
static // total size: 0x8
struct {} tSprite::__RTTI; // size: 0x8, address: 0x80138288
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



