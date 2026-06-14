/*
    Compile unit: D:\Pure3d\development\p3d\imagefont.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044194 -> 0x80044634
*/
// total size: 0xC
struct {} tImageFont::__vtable; // size: 0xC, address: 0x80101898
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
// total size: 0x1C
class tImageGlyph : public tGlyph {
    // Members
public:
    unsigned int originX; // offset 0x4, size 0x4
    unsigned int originY; // offset 0x8, size 0x4
    int glyphWidth; // offset 0xC, size 0x4
    int totalWidth; // offset 0x10, size 0x4
    int leftOffset; // offset 0x14, size 0x4
    int rightOffset; // offset 0x18, size 0x4
};
// total size: 0x18
class tImageGlyphArray : public tGlyphArray {
    // Members
protected:
    int glyphHeight; // offset 0x10, size 0x4
    class tImageGlyph * glyphs; // offset 0x14, size 0x4
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x28
class tImageFont : public tEntity {
    // Functions
    ~tImageFont();

    // Members
protected:
    int lineSpacing; // offset 0x10, size 0x4
    class tImage * glyphImage; // offset 0x14, size 0x4
    class tImageGlyph * missingLetter; // offset 0x18, size 0x4
    class tImageGlyphArray * glyphs; // offset 0x1C, size 0x4
    struct pddiColour colour; // offset 0x20, size 0x4
};
// Range: 0x80044194 -> 0x80044228
// this: r30
tImageFont::~tImageFont() {
    // References
    // -> struct [anonymous] tImageFont::__vtable;
}

// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
};
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tImageFontLoader::__vtable; // size: 0x1C, address: 0x80101848
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x0
class tImageFactory {};
// total size: 0x20
class tImageLoader : public tSimpleChunkHandler {
    // Members
protected:
    class tImageFactory * factory; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
};
// total size: 0x20
class tImageFontLoader : public tSimpleChunkHandler {
    // Functions
    tImageFontLoader();

    ~tImageFontLoader();

    class tEntity * LoadObject(class tChunkFile * f);

    // Members
protected:
    class tImageLoader * imageLoader; // offset 0x18, size 0x4
};
// ERROR: Failed to emit tag 23D25C (GlobalSubroutine)
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
// ERROR: Failed to emit tag 23E7DB (GlobalSubroutine)
// Range: 0x80044348 -> 0x80044634
// this: r29
class tEntity * tImageFontLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[256]; // r1+0x2C
    int nGlyphs; // r28
    class tImageGlyphArray * glyphs; // r31
    class tImage * image; // r26
    class tImageGlyph * currentGlyph; // r1+0x8
    int i; // r25
    class tImageFont * newfont; // r25

    // References
    // -> struct [anonymous] tImageFont::__vtable;
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
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137E98
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137EA8
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137EB0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137EB8
static // total size: 0x8
struct {} tImageFontLoader::__RTTI; // size: 0x8, address: 0x80137EC0
static // total size: 0x8
struct {} tImageFont::__RTTI; // size: 0x8, address: 0x80137EC8



