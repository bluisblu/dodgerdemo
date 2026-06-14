/*
    Compile unit: D:\Pure3d\development\p3d\bmp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80038750 -> 0x8003938C
*/
// total size: 0x18
class tBMPHandler : public tImageHandler {
    // Functions
    void CreateImage(class tFile * file, class Builder * builder);
};
// total size: 0x34
struct BMPHeader {
    // Members
    int size; // offset 0x0, size 0x4
    unsigned char reserved1[2]; // offset 0x4, size 0x2
    unsigned char reserved2[2]; // offset 0x6, size 0x2
    int offset; // offset 0x8, size 0x4
    int headerSize; // offset 0xC, size 0x4
    int width; // offset 0x10, size 0x4
    int height; // offset 0x14, size 0x4
    signed short nPlanes; // offset 0x18, size 0x2
    signed short bpp; // offset 0x1A, size 0x2
    int compression; // offset 0x1C, size 0x4
    int byteSize; // offset 0x20, size 0x4
    int xPixelsPerMeter; // offset 0x24, size 0x4
    int yPixelsPerMeter; // offset 0x28, size 0x4
    int nColour; // offset 0x2C, size 0x4
    int nImportantColour; // offset 0x30, size 0x4
};
// Range: 0x80038750 -> 0x800388A4
unsigned char tBMPHandler::CheckHeader(class tFile * file /* r29 */) {
    // Local variables
    unsigned int pos; // r31
    unsigned char good; // r30
    signed short ids; // r1+0x48
    char * id; // r1+0x8
    struct BMPHeader header; // r1+0x14
}

// Range: 0x800388A4 -> 0x8003898C
// this: r3
void tBMPHandler::CreateImage(class tFile * file /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    char buf[256]; // r1+0x50
    char id[2]; // r1+0x4C
    struct BMPHeader header; // r1+0x18
}

// Range: 0x8003898C -> 0x80038994
unsigned char tBMPHandler::SaveImage() {}

// Range: 0x80038994 -> 0x80038D70
static void LoadBMP4(class tFile * file /* r29 */, struct BMPHeader & header /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    struct pddiColour pal[16]; // r1+0x40
    int nColour; // r23
    int i; // r1+0x8
    int width; // r23
    int pad; // r26
    unsigned char * scanline_in; // r25
    unsigned char * scanline_out; // r24
    int y; // r23
    int i; // r10
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x80038D70 -> 0x80038FDC
static void LoadBMP8(class tFile * file /* r29 */, struct BMPHeader & header /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    struct pddiColour pal[256]; // r1+0x3C
    int nColour; // r28
    int i; // r1+0x8
    int width; // r28
    int pad; // r27
    unsigned char * scanline; // r26
    int y; // r25
}

// Range: 0x80038FDC -> 0x80039140
static void LoadBMP24(class tFile * file /* r22 */, struct BMPHeader & header /* r23 */, class Builder * builder /* r24 */) {
    // Local variables
    int width; // r1+0x8
    int pad; // r29
    unsigned int * scanline; // r28
    int y; // r27
    unsigned char * c; // r26
    int x; // r25
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
// Range: 0x80039140 -> 0x80039308
static void FillHeader(class tFile * f /* r30 */, struct BMPHeader * h /* r31 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137BA0
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80137BA8
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x80137BB0
static // total size: 0x8
struct {} tBMPHandler::__RTTI; // size: 0x8, address: 0x80137BB8
// total size: 0x3C
struct {} tBMPHandler::__vtable; // size: 0x3C, address: 0x801007A4
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
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
// total size: 0x14
struct {} tFileHandler::__vtable; // size: 0x14, address: 0x801007E0
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
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



