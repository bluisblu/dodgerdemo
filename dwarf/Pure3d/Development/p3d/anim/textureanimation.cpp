/*
    Compile unit: D:\Pure3d\development\p3d\anim\textureanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80069CF8 -> 0x8006A2DC
*/
// total size: 0xC
struct {} tTextureAnimation::__vtable; // size: 0xC, address: 0x8010720C
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
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0xC
class tTimeIndex {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
};
// total size: 0xC
class tEntityChannel {
    // Members
public:
    int nKey; // offset 0x0, size 0x4
    class tTimeIndex * timeIndex; // offset 0x4, size 0x4
    class tEntity * * key; // offset 0x8, size 0x4
};
// total size: 0x28
class tTextureAnimation : public tAnimation {
    // Functions
    ~tTextureAnimation();

    // Members
    class tEntityChannel * mTextures; // offset 0x20, size 0x4
    class tShader * mDefaultShader; // offset 0x24, size 0x4
};
// ERROR: Failed to emit tag 41C4DF (GlobalSubroutine)
// total size: 0x40
struct {} tTextureAnimationController::__vtable; // size: 0x40, address: 0x801071CC
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x28
class tSimpleFrameController : public tAnimationFrameController {
    // Members
protected:
    class tAnimation * animation; // offset 0x18, size 0x4
    float frame; // offset 0x1C, size 0x4
    float relativeSpeed; // offset 0x20, size 0x4
};
// total size: 0x30
class tTextureAnimationController : public tSimpleFrameController {
    // Functions
    tTextureAnimationController();

    ~tTextureAnimationController();

    class tFrameController * Clone();

    void SetShader(class tShader * mat);

    void Update();

    // Members
protected:
    class tShader * mShader; // offset 0x28, size 0x4
};
// Range: 0x80069D94 -> 0x80069DD8
// this: r31
tTextureAnimationController::tTextureAnimationController() {
    // References
    // -> struct [anonymous] tTextureAnimationController::__vtable;
}

// Range: 0x80069DD8 -> 0x80069E54
// this: r30
tTextureAnimationController::~tTextureAnimationController() {
    // References
    // -> struct [anonymous] tTextureAnimationController::__vtable;
}

// Range: 0x80069E54 -> 0x80069EE4
// this: r30
class tFrameController * tTextureAnimationController::Clone() {
    // References
    // -> struct [anonymous] tTextureAnimationController::__vtable;
}

// Range: 0x80069EE4 -> 0x80069F3C
// this: r30
void tTextureAnimationController::SetShader(class tShader * mat /* r31 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138CE8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138CF8
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138D00
static // total size: 0x8
struct {} tTextureAnimation::__RTTI; // size: 0x8, address: 0x80138D08
// Range: 0x80069F3C -> 0x80069F7C
unsigned char tTextureAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tTextureAnimation::__RTTI;
}

// Range: 0x80069F7C -> 0x8006A028
// this: r30
void tTextureAnimationController::Update() {
    // Local variables
    class tTextureAnimation * anim; // r31
    float pframe; // f1
    class tEntityChannel * textures; // r3
    class tEntity * texture; // r1+0x14
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tTextureAnimationLoader::__vtable; // size: 0x1C, address: 0x801070B8
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tTextureAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tTextureAnimationLoader();
};
// ERROR: Failed to emit tag 41F2AD (GlobalSubroutine)
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
// ERROR: Failed to emit tag 4208A0 (GlobalSubroutine)
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
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138D10
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138D18
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138D20
static // total size: 0x8
struct {} tTextureAnimationLoader::__RTTI; // size: 0x8, address: 0x80138D28
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138D30
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138D38
static // total size: 0x8
struct {} tSimpleFrameController::__RTTI; // size: 0x8, address: 0x80138D40
static // total size: 0x8
struct {} tTextureAnimationController::__RTTI; // size: 0x8, address: 0x80138D48
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



