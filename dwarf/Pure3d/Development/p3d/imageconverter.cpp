/*
    Compile unit: D:\Pure3d\development\p3d\imageconverter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800416C8 -> 0x8004292C
*/
// total size: 0x2C
struct {} tImageConverter::__vtable; // size: 0x2C, address: 0x80101484
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
class tImage32 : public tImage {};
// total size: 0x4
class tImageConverter {
    // Functions
    tImageConverter();

    ~tImageConverter();

    class tTexture * ImageToTexture(class tImage * image);

    void UpdateTexture(class tImage * image, class tTexture * texture, int mip);

    void UpdateSurface(class tImage * image, struct pddiLockInfo * lock);

    class pddiSurface * ImageToSurface(class tImage * image);

    class tImage * Screenshot();

    class tImage * SurfaceToImage(class pddiSurface * surf);

    class tImage * LockToImage(struct pddiLockInfo * lock);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x800416C8 -> 0x800416D8
// this: r3
tImageConverter::tImageConverter() {
    // References
    // -> struct [anonymous] tImageConverter::__vtable;
}

// Range: 0x800416D8 -> 0x80041724
// this: r31
tImageConverter::~tImageConverter() {
    // References
    // -> struct [anonymous] tImageConverter::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137E30
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137E40
static // total size: 0x8
struct {} tImage::__RTTI; // size: 0x8, address: 0x80137E50
static // total size: 0x8
struct {} tImage8::__RTTI; // size: 0x8, address: 0x80137E58
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
// Range: 0x80041724 -> 0x80041980
// this: r27
class tTexture * tImageConverter::ImageToTexture(class tImage * image /* r28 */) {
    // Local variables
    class tTexture * texture; // r30
    enum pddiTextureType type; // r9
    class pddiTexture * pdditexture; // r29
    int lastError; // r1+0x8
    class tImage8 * image8; // r31

    // References
    // -> static struct [anonymous] tImage::__RTTI;
    // -> static struct [anonymous] tImage8::__RTTI;
}

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
// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// Range: 0x80041980 -> 0x80041A6C
// this: r28
void tImageConverter::UpdateTexture(class tImage * image /* r29 */, class tTexture * texture /* r30 */, int mip /* r31 */) {
    // Local variables
    class tImage8 * image8; // r3

    // References
    // -> static struct [anonymous] tImage::__RTTI;
    // -> static struct [anonymous] tImage8::__RTTI;
}

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
// Range: 0x80041A6C -> 0x80041B34
// this: r3
void tImageConverter::UpdateSurface(class tImage * image /* r4 */, struct pddiLockInfo * lock /* r5 */) {
    // Local variables
    enum pddiPixelFormat format; // r7
}

// Range: 0x80041B34 -> 0x80041BB4
void tImageConverter::FillLockPAL8(class tImage * img /* r1+0xC */, struct pddiLockInfo * lock /* r28 */) {
    // Local variables
    unsigned char * dest; // r31
    unsigned char * src; // r30
    int j; // r29
}

// Range: 0x80041BB4 -> 0x80041DE4
static void ConvertImage32To32(struct pddiColour * src /* r29 */, unsigned int * dest /* r4 */, struct pddiLockInfo * lock /* r30 */) {
    // Local variables
    int y; // r31
    char * buf; // r28
    int x; // r3
}

// Range: 0x80041DE4 -> 0x8004209C
void tImageConverter::FillLockRGB16(class tImage * image /* r26 */, struct pddiLockInfo * lock /* r27 */) {
    // Local variables
    unsigned short * dest; // r4
}

// Range: 0x8004209C -> 0x800421BC
void tImageConverter::FillLockRGB32(class tImage * image /* r26 */, struct pddiLockInfo * lock /* r27 */) {
    // Local variables
    unsigned int * dest; // r4
    struct pddiColour * src; // r3
}

// Range: 0x800421BC -> 0x8004227C
// this: r28
class pddiSurface * tImageConverter::ImageToSurface(class tImage * image /* r29 */) {
    // Local variables
    int width; // r31
    int height; // r30
    class pddiSurface * surface; // r30
    struct pddiLockInfo * lock; // r5
}

// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
// Range: 0x8004227C -> 0x80042394
// this: r28
class tImage * tImageConverter::Screenshot() {
    // Local variables
    int x; // r31
    int y; // r30
    class pddiSurface * surface; // r29
    class pddiRect rect; // r1+0x5C
    class tImage * image; // r29
}

enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
// Range: 0x80042394 -> 0x80042488
// this: r28
class tImage * tImageConverter::SurfaceToImage(class pddiSurface * surf /* r29 */) {
    // Local variables
    class tImage32 * image; // r30
}

// Range: 0x80042488 -> 0x8004251C
// this: r29
class tImage * tImageConverter::LockToImage(struct pddiLockInfo * lock /* r30 */) {
    // Local variables
    class tImage32 * image; // r31
}

// Range: 0x8004251C -> 0x8004292C
void tImageConverter::UpdateImage(struct pddiLockInfo * lock /* r1+0xC */, class tImage * image /* r1+0x10 */) {
    // Local variables
    int rFrac; // r7
    int gFrac; // r8
    int bFrac; // r9
    unsigned short * buf; // r10
    unsigned int * imgbits; // r11
    int y; // r12
    int x; // r1+0x8
    unsigned int pixel; // r30
    unsigned int ri; // r24
    unsigned int gi; // r23
    unsigned int bi; // r22
    unsigned int * buf; // r10
    unsigned int * imgbits; // r11
    int y; // r12
    int x; // r1+0x8
    unsigned int pixel; // r22
    unsigned int ri; // r23
    unsigned int gi; // r24
    unsigned int bi; // r22
}

static // total size: 0x8
struct {} tImageConverter::__RTTI; // size: 0x8, address: 0x80137E60



