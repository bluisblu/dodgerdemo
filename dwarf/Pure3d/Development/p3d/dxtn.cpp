/*
    Compile unit: D:\Pure3d\development\p3d\dxtn.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003C170 -> 0x8003C6B4
*/
// total size: 0x18
class tDXTNHandler : public tImageHandler {
    // Functions
    void CreateImage(class tFile * file, class Builder * builder);
};
// total size: 0x8
struct _DDCOLORKEY {
    // Members
    unsigned int dwColorSpaceLowValue; // offset 0x0, size 0x4
    unsigned int dwColorSpaceHighValue; // offset 0x4, size 0x4
};
// total size: 0x4
struct /* @class$219dxtn_cpp */ {
    // Members
    unsigned short wFlipMSTypes; // offset 0x0, size 0x2
    unsigned short wBltMSTypes; // offset 0x2, size 0x2
};
// total size: 0x20
struct _DDPIXELFORMAT {
    // Members
    unsigned int dwSize; // offset 0x0, size 0x4
    unsigned int dwFlags; // offset 0x4, size 0x4
    unsigned int dwFourCC; // offset 0x8, size 0x4
    union { // inferred
        unsigned int dwRGBBitCount; // offset 0xC, size 0x4
        unsigned int dwYUVBitCount; // offset 0xC, size 0x4
        unsigned int dwZBufferBitDepth; // offset 0xC, size 0x4
        unsigned int dwAlphaBitDepth; // offset 0xC, size 0x4
        unsigned int dwLuminanceBitCount; // offset 0xC, size 0x4
        unsigned int dwBumpBitCount; // offset 0xC, size 0x4
        unsigned int dwPrivateFormatBitCount; // offset 0xC, size 0x4
    };
    union { // inferred
        unsigned int dwRBitMask; // offset 0x10, size 0x4
        unsigned int dwYBitMask; // offset 0x10, size 0x4
        unsigned int dwStencilBitDepth; // offset 0x10, size 0x4
        unsigned int dwLuminanceBitMask; // offset 0x10, size 0x4
        unsigned int dwBumpDuBitMask; // offset 0x10, size 0x4
        unsigned int dwOperations; // offset 0x10, size 0x4
    };
    union { // inferred
        unsigned int dwGBitMask; // offset 0x14, size 0x4
        unsigned int dwUBitMask; // offset 0x14, size 0x4
        unsigned int dwZBitMask; // offset 0x14, size 0x4
        unsigned int dwBumpDvBitMask; // offset 0x14, size 0x4
        // total size: 0x4
        struct /* @class$219dxtn_cpp */ {
            // Members
            unsigned short wFlipMSTypes; // offset 0x0, size 0x2
            unsigned short wBltMSTypes; // offset 0x2, size 0x2
        } MultiSampleCaps; // offset 0x14, size 0x4
    };
    union { // inferred
        unsigned int dwBBitMask; // offset 0x18, size 0x4
        unsigned int dwVBitMask; // offset 0x18, size 0x4
        unsigned int dwStencilBitMask; // offset 0x18, size 0x4
        unsigned int dwBumpLuminanceBitMask; // offset 0x18, size 0x4
    };
    union { // inferred
        unsigned int dwRGBAlphaBitMask; // offset 0x1C, size 0x4
        unsigned int dwYUVAlphaBitMask; // offset 0x1C, size 0x4
        unsigned int dwLuminanceAlphaBitMask; // offset 0x1C, size 0x4
        unsigned int dwRGBZBitMask; // offset 0x1C, size 0x4
        unsigned int dwYUVZBitMask; // offset 0x1C, size 0x4
    };
};
// total size: 0x10
struct _DDSCAPS2 {
    // Members
    unsigned int dwCaps; // offset 0x0, size 0x4
    unsigned int dwCaps2; // offset 0x4, size 0x4
    unsigned int dwCaps3; // offset 0x8, size 0x4
    union { // inferred
        unsigned int dwCaps4; // offset 0xC, size 0x4
        unsigned int dwVolumeDepth; // offset 0xC, size 0x4
    };
};
// total size: 0x7C
struct _DDSURFACEDESC2 {
    // Members
    unsigned int dwSize; // offset 0x0, size 0x4
    unsigned int dwFlags; // offset 0x4, size 0x4
    unsigned int dwHeight; // offset 0x8, size 0x4
    unsigned int dwWidth; // offset 0xC, size 0x4
    union { // inferred
        int lPitch; // offset 0x10, size 0x4
        unsigned int dwLinearSize; // offset 0x10, size 0x4
    };
    union { // inferred
        unsigned int dwBackBufferCount; // offset 0x14, size 0x4
        unsigned int dwDepth; // offset 0x14, size 0x4
    };
    union { // inferred
        unsigned int dwMipMapCount; // offset 0x18, size 0x4
        unsigned int dwRefreshRate; // offset 0x18, size 0x4
        unsigned int dwSrcVBHandle; // offset 0x18, size 0x4
    };
    unsigned int dwAlphaBitDepth; // offset 0x1C, size 0x4
    unsigned int dwReserved; // offset 0x20, size 0x4
    void * lpSurface; // offset 0x24, size 0x4
    union { // inferred
        struct _DDCOLORKEY ddckCKDestOverlay; // offset 0x28, size 0x8
        unsigned int dwEmptyFaceColor; // offset 0x28, size 0x4
    };
    struct _DDCOLORKEY ddckCKDestBlt; // offset 0x30, size 0x8
    struct _DDCOLORKEY ddckCKSrcOverlay; // offset 0x38, size 0x8
    struct _DDCOLORKEY ddckCKSrcBlt; // offset 0x40, size 0x8
    union { // inferred
        struct _DDPIXELFORMAT ddpfPixelFormat; // offset 0x48, size 0x20
        unsigned int dwFVF; // offset 0x48, size 0x4
    };
    struct _DDSCAPS2 ddsCaps; // offset 0x68, size 0x10
    unsigned int dwTextureStage; // offset 0x78, size 0x4
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
// Range: 0x8003C170 -> 0x8003C2B8
unsigned char tDXTNHandler::CheckHeader(class tFile * file /* r29 */) {
    // Local variables
    unsigned int pos; // r31
    unsigned char succeed; // r30
    long ids; // r1+0x108
    struct _DDSURFACEDESC2 header; // r1+0x8C
    enum pddiPixelFormat format; // r1+0x8
    struct _DDSURFACEDESC2 header; // r1+0x10
    enum pddiPixelFormat format; // r1+0x8
}

// Range: 0x8003C2B8 -> 0x8003C310
// this: r3
void tDXTNHandler::CreateImage(class tFile * file /* r30 */, class Builder * builder /* r31 */) {}

// Range: 0x8003C310 -> 0x8003C318
unsigned char tDXTNHandler::SaveImage() {}

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
// Range: 0x8003C318 -> 0x8003C598
static void LoadDXTNFile(class tFile * file /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    long ids; // r1+0x8C
    struct _DDSURFACEDESC2 header; // r1+0x10
    enum pddiPixelFormat format; // r1+0x8
    enum pddiTextureType type; // r4
    int width; // r28
    unsigned int fpos; // r27
    unsigned int diff; // r26
    unsigned int readlen; // r25
    unsigned char * scanline_in; // r24
    unsigned char * scanline_in; // r24
    unsigned char * buf; // r25
    unsigned int yp; // r26
}

enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
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
// Range: 0x8003C598 -> 0x8003C630
static enum pddiPixelFormat DecodePixelFormat(struct _DDPIXELFORMAT * pddpf /* r1+0x0 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137C80
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80137C88
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x80137C90
static // total size: 0x8
struct {} tDXTNHandler::__RTTI; // size: 0x8, address: 0x80137C98
// total size: 0x3C
struct {} tDXTNHandler::__vtable; // size: 0x3C, address: 0x80100B88
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
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



