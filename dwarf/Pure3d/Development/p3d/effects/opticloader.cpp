/*
    Compile unit: D:\Pure3d\development\p3d\effects\opticloader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006D8FC -> 0x8006E858
*/
// total size: 0x1
class tOpticChannelLoader {};
// total size: 0x10
class tOpticIntChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    int * data; // offset 0xC, size 0x4
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
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
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
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tCoronaLoader::__vtable; // size: 0x1C, address: 0x80107EA0
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tCoronaLoader : public tSimpleChunkHandler {
    // Functions
    tCoronaLoader();
};
// ERROR: Failed to emit tag 46B1C3 (GlobalSubroutine)
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
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
// total size: 0x60
class tCorona : public tOpticEffect {
    // Members
protected:
    class tShader * shader; // offset 0x40, size 0x4
    struct pddiColour colour; // offset 0x44, size 0x4
    int textureFrameRate; // offset 0x48, size 0x4
    int numTextureFrames; // offset 0x4C, size 0x4
    float width; // offset 0x50, size 0x4
    float height; // offset 0x54, size 0x4
    unsigned char perspectiveScale; // offset 0x58, size 0x1
};
// ERROR: Failed to emit tag 474BED (GlobalSubroutine)
// total size: 0x1C
struct {} tLensFlareLoader::__vtable; // size: 0x1C, address: 0x80107DF8
// total size: 0x18
class tLensFlareLoader : public tSimpleChunkHandler {
    // Functions
    tLensFlareLoader();
};
// ERROR: Failed to emit tag 47502B (GlobalSubroutine)
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
    // Members
protected:
    unsigned int numFlares; // offset 0x40, size 0x4
    struct Flare * flares; // offset 0x44, size 0x4
};
// ERROR: Failed to emit tag 475A08 (GlobalSubroutine)
// total size: 0x1C
struct {} tCoronaLoaderV13::__vtable; // size: 0x1C, address: 0x80107DA4
// total size: 0x18
class tCoronaLoaderV13 : public tSimpleChunkHandler {
    // Functions
    tCoronaLoaderV13();
};
// ERROR: Failed to emit tag 475E72 (GlobalSubroutine)
// ERROR: Failed to emit tag 475F14 (GlobalSubroutine)
// total size: 0x1C
struct {} tLensFlareLoaderV13::__vtable; // size: 0x1C, address: 0x80107D50
// total size: 0x18
class tLensFlareLoaderV13 : public tSimpleChunkHandler {
    // Functions
    tLensFlareLoaderV13();
};
// ERROR: Failed to emit tag 476370 (GlobalSubroutine)
// ERROR: Failed to emit tag 476415 (GlobalSubroutine)
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138F48
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138F58
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138F60
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138F68
static // total size: 0x8
struct {} tLensFlareLoaderV13::__RTTI; // size: 0x8, address: 0x80138F70
static // total size: 0x8
struct {} tCoronaLoaderV13::__RTTI; // size: 0x8, address: 0x80138F78
static // total size: 0x8
struct {} tLensFlareLoader::__RTTI; // size: 0x8, address: 0x80138F80
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138F88
static // total size: 0x8
struct {} tCoronaLoader::__RTTI; // size: 0x8, address: 0x80138F90
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



