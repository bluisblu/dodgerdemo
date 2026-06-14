/*
    Compile unit: D:\Pure3d\development\p3d\image.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800403D4 -> 0x800416A8
*/
// total size: 0x2C
struct {} tImage::__vtable; // size: 0x2C, address: 0x801012E0
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
    // Functions
    ~tImage();

    void FreeBits(unsigned char * mem);

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
// Range: 0x800403D4 -> 0x80040444
// this: r30
tImage::~tImage() {
    // References
    // -> struct [anonymous] tImage::__vtable;
}

enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
};
// Range: 0x80040444 -> 0x8004048C
void * tImage::operator new(unsigned long size /* r3 */, enum AllocType type /* r31 */) {
    // Local variables
    void * mem; // r3
}

// Range: 0x8004048C -> 0x800404C0
void tImage::operator delete(void * mem /* r3 */) {}

// Range: 0x800404C0 -> 0x800404FC
// this: r1+0x8
void tImage::FreeBits(unsigned char * mem /* r4 */) {}

// total size: 0x4C
struct {} tImage8::__vtable; // size: 0x4C, address: 0x80101294
// total size: 0x438
class tImage8 : public tImage {
    // Functions
    tImage8();

    ~tImage8();

    void SetPixelIndex(int x, int y, unsigned int index);

    unsigned int GetPixelIndex(int x, int y);

    void SetImage(int w, int h, unsigned char * newImage);

    void SetSize(int x, int y);

    void ReSize(int x, int y);

    unsigned int GetColour(int x, int y);

    void SetColour(int x, int y, unsigned int colour);

    unsigned int * GetPalette();

    void SetPalette(unsigned int * pal, int nColours);

    void SetPaletteEntry(int idx, unsigned int colour);

    unsigned int GetPaletteEntry(int idx);

    void CopyRegion(class tImage * srcImg, int sx, int sy, int sw, int sh, int dx, int dy);

    void Clear(unsigned int colour);

    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
};
// Range: 0x800404FC -> 0x80040590
// this: r1+0x8
tImage8::tImage8() {
    // References
    // -> struct [anonymous] tImage8::__vtable;
    // -> struct [anonymous] tImage::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137DD8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137DE8
static // total size: 0x8
struct {} tImage::__RTTI; // size: 0x8, address: 0x80137DF8
static // total size: 0x8
struct {} tImage8::__RTTI; // size: 0x8, address: 0x80137E00
// Range: 0x80040590 -> 0x80040638
// this: r30
tImage8::~tImage8() {
    // References
    // -> struct [anonymous] tImage::__vtable;
    // -> struct [anonymous] tImage8::__vtable;
}

// Range: 0x80040638 -> 0x80040650
// this: r1+0x0
void tImage8::SetPixelIndex(int x /* r1+0x4 */, int y /* r1+0x8 */, unsigned int index /* r1+0xC */) {}

// Range: 0x80040650 -> 0x80040668
// this: r1+0x0
unsigned int tImage8::GetPixelIndex(int x /* r1+0x4 */, int y /* r1+0x8 */) {}

// Range: 0x80040668 -> 0x800406D4
// this: r28
void tImage8::SetImage(int w /* r29 */, int h /* r30 */, unsigned char * newImage /* r31 */) {}

// Range: 0x800406D4 -> 0x80040748
// this: r31
void tImage8::SetSize(int x /* r1+0xC */, int y /* r1+0x10 */) {}

// Range: 0x80040748 -> 0x80040850
// this: r29
void tImage8::ReSize(int x /* r30 */, int y /* r31 */) {
    // Local variables
    int size; // r26
    int minWidth; // r25
    unsigned char * newImage; // r3
    unsigned char * newTemp; // r26
    unsigned char * oldTemp; // r24
    int i; // r23
}

// Range: 0x80040850 -> 0x80040874
// this: r1+0x0
unsigned int tImage8::GetColour(int x /* r1+0x4 */, int y /* r1+0x8 */) {}

// Range: 0x80040874 -> 0x8004088C
// this: r1+0x0
void tImage8::SetColour(int x /* r1+0x4 */, int y /* r1+0x8 */, unsigned int colour /* r1+0xC */) {}

// Range: 0x8004088C -> 0x80040894
// this: r3
unsigned int * tImage8::GetPalette() {}

// Range: 0x80040894 -> 0x800408FC
// this: r29
void tImage8::SetPalette(unsigned int * pal /* r30 */, int nColours /* r31 */) {}

// Range: 0x800408FC -> 0x8004090C
// this: r1+0x0
void tImage8::SetPaletteEntry(int idx /* r1+0x4 */, unsigned int colour /* r1+0x8 */) {}

// Range: 0x8004090C -> 0x8004091C
// this: r1+0x0
unsigned int tImage8::GetPaletteEntry(int idx /* r1+0x4 */) {}

// Range: 0x8004091C -> 0x80040A00
// this: r1+0x8
void tImage8::CopyRegion(class tImage * srcImg /* r4 */, int sx /* r5 */, int sy /* r6 */, int sw /* r7 */, int sh /* r8 */, int dx /* r9 */, int dy /* r10 */) {
    // Local variables
    unsigned char * dest; // r10
}

// Range: 0x80040A00 -> 0x80040A30
// this: r3
void tImage8::Clear(unsigned int colour /* r4 */) {}

// total size: 0x2C
struct {} tImage32::__vtable; // size: 0x2C, address: 0x80101268
// total size: 0x30
class tImage32 : public tImage {
    // Functions
    tImage32();

    ~tImage32();

    void SetImage(int w, int h, unsigned char * newImage);

    void SetSize(int x, int y);

    void ReSize(int x, int y);

    unsigned int GetColour(int x, int y);

    void SetColour(int x, int y, unsigned int colour);

    void CopyRegion(class tImage * srcImg, int sx, int sy, int sw, int sh, int dx, int dy);

    void Clear(unsigned int colour);
};
// Range: 0x80040A30 -> 0x80040AA8
// this: r31
tImage32::tImage32() {
    // References
    // -> struct [anonymous] tImage32::__vtable;
    // -> struct [anonymous] tImage::__vtable;
}

// Range: 0x80040AA8 -> 0x80040B50
// this: r30
tImage32::~tImage32() {
    // References
    // -> struct [anonymous] tImage::__vtable;
    // -> struct [anonymous] tImage32::__vtable;
}

// Range: 0x80040B50 -> 0x80040BC0
// this: r28
void tImage32::SetImage(int w /* r29 */, int h /* r30 */, unsigned char * newImage /* r31 */) {}

// Range: 0x80040BC0 -> 0x80040C38
// this: r31
void tImage32::SetSize(int x /* r1+0xC */, int y /* r1+0x10 */) {}

// Range: 0x80040C38 -> 0x80040D18
// this: r29
void tImage32::ReSize(int x /* r30 */, int y /* r31 */) {
    // Local variables
    int size; // r26
    int minWidth; // r26
    unsigned char * newImage; // r25
    unsigned char * newTemp; // r24
    unsigned char * oldTemp; // r23
    int i; // r22
}

// Range: 0x80040D18 -> 0x80040D34
// this: r1+0x0
unsigned int tImage32::GetColour(int x /* r1+0x4 */, int y /* r1+0x8 */) {}

// Range: 0x80040D34 -> 0x80040D50
// this: r1+0x0
void tImage32::SetColour(int x /* r1+0x4 */, int y /* r1+0x8 */, unsigned int colour /* r1+0xC */) {}

// Range: 0x80040D50 -> 0x80040EC0
// this: r1+0x8
void tImage32::CopyRegion(class tImage * srcImg /* r4 */, int sx /* r5 */, int sy /* r6 */, int sw /* r7 */, int sh /* r8 */, int dx /* r9 */, int dy /* r10 */) {
    // Local variables
    unsigned int * src; // r3
    unsigned int * dest; // r5
    int srcPitch; // r10
    unsigned int * dest; // r9
}

// Range: 0x80040EC0 -> 0x80040EF0
// this: r1+0x0
void tImage32::Clear(unsigned int colour /* r1+0x4 */) {
    // Local variables
    unsigned int * pix; // r6
    int i; // r7
}

// Range: 0x80040EF0 -> 0x80040F58
static void p3dBlockCopy(unsigned char * src /* r25 */, unsigned char * dest /* r26 */, int width /* r27 */, int height /* r28 */, int srcStride /* r29 */, int destStride /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x80040F58 -> 0x80041068
static void ImageBlockCopy8(class tImage8 * srcImg /* r3 */, unsigned char * destBase /* r24 */, int x0 /* r25 */, int y0 /* r26 */, int width /* r27 */, int height /* r28 */, int destStride /* r29 */) {
    // Local variables
    unsigned char * srcBase; // r30
    int x1; // r4
    int y1; // r5
    int y; // r6
    unsigned char * src; // r7
    unsigned char * dest; // r8
    int x; // r1+0x8
}

// Range: 0x80041068 -> 0x80041128
static void ImageBlockCopy8Mask(class tImage8 * srcImg /* r3 */, unsigned char * destBase /* r23 */, int x0 /* r24 */, int y0 /* r25 */, int width /* r26 */, int height /* r27 */, int destStride /* r28 */, unsigned char mask /* r29 */) {
    // Local variables
    unsigned char * srcBase; // r30
    int x1; // r5
    int y1; // r6
    int y; // r7
    unsigned char * src; // r8
    unsigned char * dest; // r9
    int x; // r1+0x8
}

// Range: 0x80041128 -> 0x80041194
static void BlockCopy32Mask(unsigned int * srcBase /* r3 */, unsigned int * destBase /* r4 */, int width /* r5 */, int height /* r1+0x14 */, int srcStride /* r1+0x18 */, int destStride /* r1+0x1C */, unsigned int mask /* r1+0x20 */) {
    // Local variables
    int i; // r11
    unsigned int * src; // r12
    unsigned int * dest; // r31
    int j; // r1+0x8
}

// Range: 0x80041194 -> 0x80041224
static void ImageBlockCopy32(class tImage * src /* r23 */, unsigned int * destBase /* r24 */, int x0 /* r25 */, int y0 /* r6 */, int width /* r1+0x18 */, int height /* r1+0x1C */, int destStride /* r1+0x20 */) {
    // Local variables
    int x1; // r30
    int y1; // r29
    int y; // r28
    unsigned int * dest; // r27
    int x; // r26
}

// Range: 0x80041224 -> 0x80041364
static void ImageBlockCopy32Mask(class tImage * src /* r22 */, unsigned int * destBase /* r23 */, int x0 /* r24 */, int y0 /* r6 */, int width /* r1+0x18 */, int height /* r1+0x1C */, int destStride /* r1+0x20 */, unsigned int mask /* r25 */) {
    // Local variables
    int x1; // r30
    int y1; // r29
    int y; // r28
    unsigned int * dest; // r27
    int x; // r26
    unsigned int colour; // r1+0x8
    int red; // r3
    int green; // r5
    int blue; // r6
    int alpha; // r7
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tImageLoader::__vtable; // size: 0x1C, address: 0x80101210
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
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
// total size: 0x0
class tImageConverter {};
enum pddiTextureUsageHint {
    PDDI_USAGE_STATIC = 0,
    PDDI_USAGE_DYNAMIC = 1,
    PDDI_USAGE_NOCACHE = 2,
};
// total size: 0x0
class tTexture {};
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
    // Functions
    tImageLoader();

    ~tImageLoader();

    class tEntity * LoadObject(class tChunkFile * file);

    class tImage * LoadImage(class tChunkFile * f);

    // Members
protected:
    class tImageFactory * factory; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
};
// ERROR: Failed to emit tag 21B71C (GlobalSubroutine)
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
// ERROR: Failed to emit tag 21CC97 (GlobalSubroutine)
// Range: 0x80041480 -> 0x800414A4
// this: r3
class tEntity * tImageLoader::LoadObject(class tChunkFile * file /* r4 */) {}

// Range: 0x800414A4 -> 0x800416A8
// this: r30
class tImage * tImageLoader::LoadImage(class tChunkFile * f /* r31 */) {
    // Local variables
    class tImage * image; // r27
    char name[128]; // r1+0x14C
    unsigned char alpha; // r26
    class tFile * file; // r28
    char fileName[255]; // r1+0x30
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
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137E08
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137E10
static // total size: 0x8
struct {} tImageLoader::__RTTI; // size: 0x8, address: 0x80137E18
static // total size: 0x8
struct {} tImage32::__RTTI; // size: 0x8, address: 0x80137E20



