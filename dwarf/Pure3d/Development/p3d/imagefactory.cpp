/*
    Compile unit: D:\Pure3d\development\p3d\imagefactory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004292C -> 0x8004416C
*/
unsigned char __lower_map[]; // size: 0x0, address: 0x800F9188
// Range: 0x8004292C -> 0x80042A6C
int strcmpi(const char * a /* r3 */, const char * b /* r4 */) {
    // References
    // -> unsigned char __lower_map[];
}

// total size: 0x34
struct {} tImageHandler::Builder::__vtable; // size: 0x34, address: 0x801016E0
// total size: 0x34
struct {} ImageBuilder::__vtable; // size: 0x34, address: 0x801016AC
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
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
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
// total size: 0x1C
class ImageBuilder : public Builder {
    // Functions
    void BeginImage(int width, int height, int bpp, enum Origin origin, struct pddiColour * p);

    void ProcessScanline32(unsigned int * src);

    void ProcessScanline8(unsigned char * src);

    // Members
    class tImage * image; // offset 0x4, size 0x4
    unsigned int * palette; // offset 0x8, size 0x4
    unsigned char * scanline; // offset 0xC, size 0x4
    int totalScanline; // offset 0x10, size 0x4
    int stride; // offset 0x14, size 0x4
    int desiredDepth; // offset 0x18, size 0x4
};
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// Range: 0x80042A6C -> 0x80042BC8
// this: r29
void ImageBuilder::BeginImage(int width /* r24 */, int height /* r30 */, int bpp /* r25 */, enum Origin origin /* r26 */, struct pddiColour * p /* r31 */) {
    // Local variables
    int pixelWidth; // r27
}

// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
};
// Range: 0x80042BC8 -> 0x80042C20
// this: r31
void ImageBuilder::ProcessScanline32(unsigned int * src /* r4 */) {}

// Range: 0x80042C20 -> 0x80042E04
// this: r31
void ImageBuilder::ProcessScanline8(unsigned char * src /* r4 */) {
    // Local variables
    int x; // r7
}

// Range: 0x80042E04 -> 0x80042E08
void ImageBuilder::EndImage() {}

// total size: 0x34
struct {} TextureBuilder::__vtable; // size: 0x34, address: 0x8010165C
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
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
// total size: 0xC
class pddiTexture : public pddiObject {};
// total size: 0x18
class tTexture : public tEntity {
    // Members
protected:
    class pddiTexture * texture; // offset 0x10, size 0x4
};
// total size: 0x38
class TextureBuilder : public Builder {
    // Functions
    TextureBuilder();

    void BeginImage(int width, int height, int bpp, enum Origin origin, struct pddiColour * p);

    void ProcessScanline32(unsigned int * src);

    void ProcessScanline8(unsigned char * src);

    void EndImage();

    void DirectCopy(unsigned char * data, int len);

    void * GetMemoryImagePtr();

    void * GetPaletteMemoryImagePtr();

    void SetTextureType(enum pddiTextureType texType);

    int GetExpectedFileSize();

    void SetExpectedFileSize(int size);

    // Members
    class tTexture * texture; // offset 0x4, size 0x4
    unsigned int * palette; // offset 0x8, size 0x4
    struct pddiLockInfo * lockInfo; // offset 0xC, size 0x4
    int stride; // offset 0x10, size 0x4
    unsigned char * scanline; // offset 0x14, size 0x4
    int totalScanline; // offset 0x18, size 0x4
    int currentMipLevel; // offset 0x1C, size 0x4
    int alphaDepth; // offset 0x20, size 0x4
    int nMip; // offset 0x24, size 0x4
    enum pddiTextureType type; // offset 0x28, size 0x4
    enum pddiTextureUsageHint usage; // offset 0x2C, size 0x4
    int desiredDepth; // offset 0x30, size 0x4
    int m_ExpectedFileSize; // offset 0x34, size 0x4
};
// Range: 0x80042E08 -> 0x80042E64
// this: r3
TextureBuilder::TextureBuilder() {
    // References
    // -> struct [anonymous] TextureBuilder::__vtable;
    // -> struct [anonymous] tImageHandler::Builder::__vtable;
}

// Range: 0x80042E64 -> 0x80043220
// this: r31
void TextureBuilder::BeginImage(int width /* r26 */, int height /* r30 */, int bpp /* r25 */, enum Origin origin /* r27 */, struct pddiColour * p /* r28 */) {
    // Local variables
    int lastError; // r1+0x8
}

// Range: 0x80043220 -> 0x800433D4
// this: r31
void TextureBuilder::ProcessScanline32(unsigned int * src /* r4 */) {
    // Local variables
    unsigned short * buf; // r3
    int i; // r5
    unsigned int * buf; // r3
    int i; // r5
}

// Range: 0x800433D4 -> 0x800435E0
// this: r31
void TextureBuilder::ProcessScanline8(unsigned char * src /* r4 */) {
    // Local variables
    unsigned short * buf; // r3
    int i; // r5
    unsigned int * buf; // r3
    int i; // r5
    unsigned char * buf; // r5
    int i; // r6
}

// Range: 0x800435E0 -> 0x80043620
// this: r1+0x8
void TextureBuilder::EndImage() {}

// Range: 0x80043620 -> 0x80043694
// this: r29
void TextureBuilder::DirectCopy(unsigned char * data /* r30 */, int len /* r31 */) {}

// Range: 0x80043694 -> 0x80043698
void TextureBuilder::SetCompressedData() {}

// Range: 0x80043698 -> 0x800436A0
// this: r3
void * TextureBuilder::GetMemoryImagePtr() {}

// Range: 0x800436A0 -> 0x800436AC
// this: r1+0x0
void * TextureBuilder::GetPaletteMemoryImagePtr() {}

// total size: 0x18
class tImageHandler : public tFileHandler {
    // Functions
    unsigned char CheckExtension(char * ext);

    enum tLoadStatus Load(class tFile * file, class tEntityStore * store);

    tImageHandler();

    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
// Range: 0x800436AC -> 0x80043740
// this: r3
unsigned char tImageHandler::CheckExtension(char * ext /* r29 */) {
    // Local variables
    char * handler; // r30
    int len; // r1+0x8
    int handlerLen; // r1+0x8
}

enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
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
// total size: 0x0
class tShader {};
// total size: 0x0
struct tRect {};
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
// total size: 0x70
class tSprite : public tDrawable {
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
// Range: 0x80043740 -> 0x800439C8
// this: r28
enum tLoadStatus tImageHandler::Load(class tFile * file /* r29 */, class tEntityStore * store /* r30 */) {
    // Local variables
    char name[256]; // r1+0x84
    int len; // r1+0x8
    int i; // r5
    enum tLoadStatus status; // r31
    class TextureBuilder builder; // r1+0x4C
    class tTexture * texture; // r28
    class ImageBuilder builder; // r1+0x30
    class tImage * image; // r28
    class ImageBuilder builder; // r1+0x14
    class tImage * image; // r29
    class tSprite * sprite; // r28

    // References
    // -> struct [anonymous] ImageBuilder::__vtable;
    // -> struct [anonymous] tImageHandler::Builder::__vtable;
}

// total size: 0x3C
struct {} tPNGHandler::__vtable; // size: 0x3C, address: 0x8010218C
// total size: 0x3C
struct {} tBMPHandler::__vtable; // size: 0x3C, address: 0x801007A4
// total size: 0x3C
struct {} tTargaHandler::__vtable; // size: 0x3C, address: 0x80102C4C
// total size: 0x3C
struct {} tRawImageHandler::__vtable; // size: 0x3C, address: 0x801026DC
// total size: 0x3C
struct {} tDXTNHandler::__vtable; // size: 0x3C, address: 0x80100B88
// total size: 0xA4
class tImageFactory {
    // Functions
    tImageFactory();

    ~tImageFactory();

    void SetTextureHints(int alphaDepth, int nMip, enum pddiTextureType type, enum pddiTextureUsageHint usage);

    class tImage * LoadAsImage(char * filename, char * inventoryName);

    class tImage * ParseAsImage(class tFile * file, char * inventoryName);

    class tTexture * LoadAsTexture(char * filename, char * inventoryName);

    class tTexture * ParseAsTexture(class tFile * file, char * inventoryName, int size);

    void ParseIntoTexture(class tFile * file, class tTexture * texture, int mipLevel);

    class tImageHandler * FindHandler(class tFile * file);

    void AddHandler(class tImageHandler * h);

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
// Range: 0x800439C8 -> 0x80043B38
// this: r31
tImageFactory::tImageFactory() {
    // References
    // -> struct [anonymous] tDXTNHandler::__vtable;
    // -> struct [anonymous] tRawImageHandler::__vtable;
    // -> struct [anonymous] tTargaHandler::__vtable;
    // -> struct [anonymous] tBMPHandler::__vtable;
    // -> struct [anonymous] tPNGHandler::__vtable;
}

// Range: 0x80043BAC -> 0x80043C54
// this: r28
tImageFactory::~tImageFactory() {
    // Local variables
    int i; // r30
}

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
// Range: 0x80043C54 -> 0x80043C68
// this: r1+0x0
void tImageFactory::SetTextureHints(int alphaDepth /* r1+0x4 */, int nMip /* r1+0x8 */, enum pddiTextureType type /* r1+0xC */, enum pddiTextureUsageHint usage /* r1+0x10 */) {}

// Range: 0x80043C68 -> 0x80043CEC
// this: r28
class tImage * tImageFactory::LoadAsImage(char * filename /* r4 */, char * inventoryName /* r29 */) {
    // Local variables
    class tFile * file; // r31
    class tImage * image; // r30
}

// Range: 0x80043CEC -> 0x80043DFC
// this: r28
class tImage * tImageFactory::ParseAsImage(class tFile * file /* r29 */, char * inventoryName /* r30 */) {
    // Local variables
    class tImageHandler * handler; // r3
    class ImageBuilder builder; // r1+0x2C
    class tImage * result; // r31

    // References
    // -> struct [anonymous] ImageBuilder::__vtable;
    // -> struct [anonymous] tImageHandler::Builder::__vtable;
}

// Range: 0x80043DFC -> 0x80043E98
// this: r28
class tTexture * tImageFactory::LoadAsTexture(char * filename /* r4 */, char * inventoryName /* r29 */) {
    // Local variables
    class tFile * file; // r31
    class tTexture * texture; // r30
    int size; // r6
}

// Range: 0x80043E98 -> 0x80043F90
// this: r27
class tTexture * tImageFactory::ParseAsTexture(class tFile * file /* r28 */, char * inventoryName /* r29 */, int size /* r30 */) {
    // Local variables
    class tImageHandler * handler; // r31
    class TextureBuilder builder; // r1+0x40
    class tTexture * texture; // r31
}

// Range: 0x80043F90 -> 0x80044010
// this: r3
void tImageFactory::ParseIntoTexture(class tFile * file /* r28 */, class tTexture * texture /* r29 */, int mipLevel /* r30 */) {
    // Local variables
    class tImageHandler * handler; // r31
    class TextureBuilder builder; // r1+0x18
}

// Range: 0x80044010 -> 0x80044098
// this: r27
class tImageHandler * tImageFactory::FindHandler(class tFile * file /* r28 */) {
    // Local variables
    class tImageHandler * ret; // r30
    int i; // r29
}

// Range: 0x80044098 -> 0x800440B8
// this: r1+0x0
void tImageFactory::AddHandler(class tImageHandler * h /* r1+0x4 */) {}

// total size: 0x3C
struct {} tImageHandler::__vtable; // size: 0x3C, address: 0x801015EC
// ERROR: Failed to emit tag 234030 (GlobalSubroutine)
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
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x8
class tFileHandler : public tRefCounted {};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137E68
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80137E70
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x80137E78
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
static // total size: 0x8
struct {} tImageHandler::Builder::__RTTI; // size: 0x8, address: 0x80137E80
static // total size: 0x8
struct {} TextureBuilder::__RTTI; // size: 0x8, address: 0x80137E88
// Range: 0x80044154 -> 0x8004415C
// this: r1+0x0
void TextureBuilder::SetTextureType(enum pddiTextureType texType /* r1+0x4 */) {}

// Range: 0x8004415C -> 0x80044164
// this: r3
int TextureBuilder::GetExpectedFileSize() {}

// Range: 0x80044164 -> 0x8004416C
// this: r1+0x0
void TextureBuilder::SetExpectedFileSize(int size /* r1+0x4 */) {}

static // total size: 0x8
struct {} ImageBuilder::__RTTI; // size: 0x8, address: 0x80137E90
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};



