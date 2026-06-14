/*
    Compile unit: D:\Pure3d\development\p3d\fontutility.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003DCCC -> 0x8003E618
*/
// total size: 0x10
struct {} tBitmapGlyphRetriever::__vtable; // size: 0x10, address: 0x80100D98
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum p3dGlyphType {
    STD_GLYPH = 0,
    IMAGE_GLYPH = 1,
    TEXTURE_GLYPH = 2,
};
// total size: 0x2
class tGlyph {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
};
// total size: 0x10
class tGlyphArray : public tRefCounted {
    // Members
protected:
    enum p3dGlyphType glyphType; // offset 0x8, size 0x4
    int numGlyphs; // offset 0xC, size 0x4
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
// total size: 0x18
class tBitmapGlyphRetriever {
    // Functions
    tBitmapGlyphRetriever();

    ~tBitmapGlyphRetriever();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int minGlyphWidth; // offset 0x4, size 0x4
    int maxGlyphWidth; // offset 0x8, size 0x4
    int glyphHeight; // offset 0xC, size 0x4
    int * glyphWidths; // offset 0x10, size 0x4
    class tGlyphArray * glyphs; // offset 0x14, size 0x4
};
// Range: 0x8003DCCC -> 0x8003DCF4
// this: r3
tBitmapGlyphRetriever::tBitmapGlyphRetriever() {
    // References
    // -> struct [anonymous] tBitmapGlyphRetriever::__vtable;
}

// Range: 0x8003DCF4 -> 0x8003DD40
// this: r31
tBitmapGlyphRetriever::~tBitmapGlyphRetriever() {
    // References
    // -> struct [anonymous] tBitmapGlyphRetriever::__vtable;
}

// total size: 0x10
class tBitmapFontRepacker {
    // Functions
    tBitmapFontRepacker(class tBitmapGlyphRetriever * gr, int gb);

    ~tBitmapFontRepacker();

    unsigned char FinishedPacking();

    void PackLetters(class tImage * image, unsigned int imageNum, int backgroundGlyphSize, unsigned char powOf2);

    void CalcSize(int & width, int & height, int maxWidth, int maxHeight, unsigned char powOf2);

    // Members
protected:
    int currGlyph; // offset 0x0, size 0x4
    int glyphBorder; // offset 0x4, size 0x4
    unsigned char * packedGlyphs; // offset 0x8, size 0x4
    class tBitmapGlyphRetriever * glyphRetriever; // offset 0xC, size 0x4
};
// Range: 0x8003DD40 -> 0x8003DE54
// this: r30
tBitmapFontRepacker::tBitmapFontRepacker(class tBitmapGlyphRetriever * gr /* r1+0xC */, int gb /* r1+0x10 */) {
    // Local variables
    int nGlyphs; // r3
    int i; // r10
}

// Range: 0x8003DE54 -> 0x8003DEA8
// this: r30
tBitmapFontRepacker::~tBitmapFontRepacker() {}

// Range: 0x8003DEA8 -> 0x8003DEC8
// this: r1+0x0
unsigned char tBitmapFontRepacker::FinishedPacking() {}

// Range: 0x8003DEC8 -> 0x8003E0D0
// this: r16
void tBitmapFontRepacker::PackLetters(class tImage * image /* r17 */, unsigned int imageNum /* r18 */, int backgroundGlyphSize /* r6 */, unsigned char powOf2 /* r19 */) {
    // Local variables
    int glyphMinWidth; // r25
    int numLines; // r24
    int currX; // r23
    int currY; // r22
    int i; // r21
    int nextGlyph; // r20
}

// Range: 0x8003E0D0 -> 0x8003E14C
void tBitmapFontRepacker::ShrinkImage(class tImage * image /* r4 */, int lastY /* r5 */, unsigned char powOf2 /* r1+0x14 */) {
    // Local variables
    int newHeight; // r5
}

// Range: 0x8003E14C -> 0x8003E618
// this: r1+0x8
void tBitmapFontRepacker::CalcSize(int & width /* r1+0xC */, int & height /* r1+0x10 */, int maxWidth /* r1+0x14 */, int maxHeight /* r1+0x18 */, unsigned char powOf2 /* r1+0x1C */) {
    // Local variables
    int glyphHeight; // r1+0x8
    int glyphWidth; // r9
    int nGlyphsLeft; // r10
    int i; // r31
    int nColumns; // r1+0x8
    int nLines; // r1+0x8
    int heightWidthRatio; // r31
    int usedCols; // r30
    int usedLines; // r29
    int newwidth; // r7
    int newheight; // r8
    int newwidth; // r11
    int newheight; // r6
}

static // total size: 0x8
struct {} tBitmapGlyphRetriever::__RTTI; // size: 0x8, address: 0x80137D28



