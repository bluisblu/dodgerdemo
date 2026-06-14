/*
    Compile unit: D:\Pure3d\development\p3d\shader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004DE80 -> 0x8004F0F8
*/
// total size: 0xC
struct {} tShader::__vtable; // size: 0xC, address: 0x80102938
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
    // Functions
    tShader();

    tShader(char * shaderName, char * definition);

    ~tShader();

    // Members
protected:
    class pddiShader * shader; // offset 0x10, size 0x4
};
// Range: 0x8004DE80 -> 0x8004DF18
// this: r1+0x8
tShader::tShader() {
    // References
    // -> struct [anonymous] tShader::__vtable;
}

// Range: 0x8004DF18 -> 0x8004DFC8
// this: r1+0x8
tShader::tShader(char * shaderName /* r28 */, char * definition /* r29 */) {
    // References
    // -> struct [anonymous] tShader::__vtable;
}

// Range: 0x8004DFC8 -> 0x8004E050
// this: r30
tShader::~tShader() {
    // References
    // -> struct [anonymous] tShader::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tShaderLoader::__vtable; // size: 0x1C, address: 0x801028F4
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tShaderLoader : public tSimpleChunkHandler {
    // Functions
    tShaderLoader();
};
// ERROR: Failed to emit tag 2B4027 (GlobalSubroutine)
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
// total size: 0xC
struct {} tSafeEntityCaster<tTexture>::__vtable; // size: 0xC, address: 0x801028B4
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
// Range: 0x8004E0B0 -> 0x8004E980
class tEntity * tShaderLoader::LoadObject(class tChunkFile * f /* r31 */, class tEntityStore * store /* r28 */) {
    // Local variables
    char name[128]; // r1+0x4C8
    char shaderName[128]; // r1+0x448
    class tShader * shader; // r26
    char defName[256]; // r1+0x334
    int size; // r20
    char * buffer; // r22
    char texName[256]; // r1+0x234
    unsigned int param; // r19
    unsigned int param; // r19
    unsigned int val; // r5
    unsigned int param; // r19
    float val; // f1
    unsigned int param; // r19
    unsigned int param; // r19
    class pddiVector v; // r1+0x224
    unsigned int param; // r19
    class pddiMatrix m; // r1+0x1E4

    // References
    // -> struct [anonymous] tShader::__vtable;
    // -> struct [anonymous] tSafeEntityCaster<tTexture>::__vtable;
}

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
// total size: 0x10
class tShaderDefinitionLoader : public tChunkHandler {};
// Range: 0x8004E980 -> 0x8004E998
unsigned char tShaderDefinitionLoader::CheckChunkID(unsigned int i /* r1+0x4 */) {}

enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// Range: 0x8004E998 -> 0x8004EA98
enum tLoadStatus tShaderDefinitionLoader::Load(class tChunkFile * f /* r28 */) {
    // Local variables
    char defName[256]; // r1+0x28
    int size; // r29
    char * buffer; // r28
}

// total size: 0x1C
struct {} tMaterialLoader::__vtable; // size: 0x1C, address: 0x80102804
// total size: 0x18
class tMaterialLoader : public tSimpleChunkHandler {
    // Functions
    tMaterialLoader();
};
// ERROR: Failed to emit tag 2B6FB7 (GlobalSubroutine)
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x8004EAF4 -> 0x8004F0F8
class tEntity * tMaterialLoader::LoadObject(class tChunkFile * f /* r31 */, class tEntityStore * store /* r1+0x36C */) {
    // Local variables
    char nameMat[128]; // r1+0x2EC
    class tShader * material; // r30
    char namePass[255]; // r1+0x1E4
    char nameTex[255]; // r1+0xE4
    struct pddiColour specular; // r1+0xD0

    // References
    // -> struct [anonymous] tSafeEntityCaster<tTexture>::__vtable;
    // -> struct [anonymous] tShader::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801381A8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801381B8
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801381C0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801381C8
static // total size: 0x8
struct {} tMaterialLoader::__RTTI; // size: 0x8, address: 0x801381D0
static // total size: 0x8
struct {} tShaderDefinitionLoader::__RTTI; // size: 0x8, address: 0x801381D8
// total size: 0x14
struct {} tShaderDefinitionLoader::__vtable; // size: 0x14, address: 0x80102854
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801381E0
static // total size: 0x8
struct {} tSafeEntityCaster<tTexture>::__RTTI; // size: 0x8, address: 0x801381E8
static // total size: 0x8
struct {} tShaderLoader::__RTTI; // size: 0x8, address: 0x801381F0
static // total size: 0x8
struct {} tShader::__RTTI; // size: 0x8, address: 0x80138200
static // total size: 0x8
struct {} tTexture::__RTTI; // size: 0x8, address: 0x80138208
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



