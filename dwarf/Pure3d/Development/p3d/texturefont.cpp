/*
    Compile unit: D:\Pure3d\development\p3d\texturefont.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80051CBC -> 0x80053C40
*/
// total size: 0x54
struct {} tFont::__vtable; // size: 0x54, address: 0x80100D2C
// total size: 0x54
struct {} tTextureFont::__vtable; // size: 0x54, address: 0x80102F64
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
// total size: 0x10
class tFont : public tEntity {};
// total size: 0x20
class tTextureGlyph : public tGlyph {
    // Members
public:
    unsigned int originX; // offset 0x4, size 0x4
    unsigned int originY; // offset 0x8, size 0x4
    float glyphWidth; // offset 0xC, size 0x4
    float totalWidth; // offset 0x10, size 0x4
    float leftOffset; // offset 0x14, size 0x4
    float rightOffset; // offset 0x18, size 0x4
    unsigned int texture; // offset 0x1C, size 0x4
};
// total size: 0x18
class tTextureGlyphArray : public tGlyphArray {
    // Members
protected:
    float glyphHeight; // offset 0x10, size 0x4
    class tTextureGlyph * glyphs; // offset 0x14, size 0x4
};
// total size: 0x40
class tTextureFont : public tFont {
    // Functions
    tTextureFont(class tTexture * * t, unsigned int nt, class tTextureGlyphArray * ga, float s, enum p3dFontMode m, class tShader * mat, int nX, int nY);

    ~tTextureFont();

    float GetLineSpacing();

    float GetLineHeight();

    float GetLineWidth(char * text);

    float GetLineWidth(unsigned short * text);

    float GetTextHeight(char * text);

    float GetTextHeight(unsigned short * text);

    float GetTextWidth(char * text);

    float GetTextWidth(unsigned short * text);

    void DisplayText(char * text);

    void DisplayText(unsigned short * text);

    void DisplayLine(char * text);

    void DisplayLine(unsigned short * origText);

    void DrawLetter(class gcPrimStream * buffer, class tTextureGlyph * currentLetter, float x);

    void DrawBlank(class gcPrimStream * buffer, float x, float width);

    // Members
protected:
    enum p3dFontMode fontMode; // offset 0x10, size 0x4
    float nativeX; // offset 0x14, size 0x4
    float nativeY; // offset 0x18, size 0x4
    float fontSize; // offset 0x1C, size 0x4
    float lineSpacing; // offset 0x20, size 0x4
    class tTextureGlyph * missingLetter; // offset 0x24, size 0x4
    class tTextureGlyphArray * glyphs; // offset 0x28, size 0x4
    struct pddiColour colour; // offset 0x2C, size 0x4
    int nTextures; // offset 0x30, size 0x4
    class tTexture * * textures; // offset 0x34, size 0x4
    class tShader * baseShader; // offset 0x38, size 0x4
};
enum p3dFontMode {
    P3D_SCREEN_FONT = 0,
    P3D_WORLD_FONT = 1,
};
// Range: 0x80051CBC -> 0x80051ECC
// this: r1+0x8
tTextureFont::tTextureFont(class tTexture * * t /* r25 */, unsigned int nt /* r26 */, class tTextureGlyphArray * ga /* r27 */, float s /* f31 */, enum p3dFontMode m /* r28 */, class tShader * mat /* r29 */, int nX /* r30 */, int nY /* r31 */) {
    // Local variables
    int i; // r6

    // References
    // -> struct [anonymous] tTextureFont::__vtable;
    // -> struct [anonymous] tFont::__vtable;
}

// Range: 0x80051ECC -> 0x80051FB4
// this: r26
tTextureFont::~tTextureFont() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] tFont::__vtable;
    // -> struct [anonymous] tTextureFont::__vtable;
}

// Range: 0x80051FB4 -> 0x80051FE0
// this: r1+0x0
float tTextureFont::GetLineSpacing() {}

// Range: 0x80051FE0 -> 0x8005201C
// this: r1+0x0
float tTextureFont::GetLineHeight() {}

// Range: 0x8005201C -> 0x8005206C
// this: r31
float tTextureFont::GetLineWidth(char * text /* r4 */) {
    // Local variables
    unsigned short str[512]; // r1+0x10
    float width; // f1
}

// Range: 0x8005206C -> 0x80052144
// this: r30
float tTextureFont::GetLineWidth(unsigned short * text /* r31 */) {
    // Local variables
    float width; // f31
    class tTextureGlyph * currentLetter; // r3
    float scaleFactor; // f30
}

// Range: 0x80052144 -> 0x80052194
// this: r31
float tTextureFont::GetTextHeight(char * text /* r4 */) {
    // Local variables
    unsigned short str[512]; // r1+0x10
    float height; // f1
}

// Range: 0x80052194 -> 0x800521F4
// this: r3
float tTextureFont::GetTextHeight(unsigned short * text /* r31 */) {
    // Local variables
    float lineHeight; // f1
    float height; // r1+0x8
}

// Range: 0x800521F4 -> 0x80052244
// this: r31
float tTextureFont::GetTextWidth(char * text /* r4 */) {
    // Local variables
    unsigned short str[512]; // r1+0x10
    float width; // f1
}

// Range: 0x80052244 -> 0x80052354
// this: r30
float tTextureFont::GetTextWidth(unsigned short * text /* r31 */) {
    // Local variables
    float maxWidth; // f31
    float width; // f30
    class tTextureGlyph * currentLetter; // r3
    float scaleFactor; // f29
}

// Range: 0x80052354 -> 0x800523A4
// this: r31
void tTextureFont::DisplayText(char * text /* r4 */) {
    // Local variables
    unsigned short str[512]; // r1+0x10
}

// Range: 0x800523A4 -> 0x800524B4
// this: r30
void tTextureFont::DisplayText(unsigned short * text /* r31 */) {
    // Local variables
    float lineHeight; // r1+0x8
}

// Range: 0x800524B4 -> 0x80052504
// this: r31
void tTextureFont::DisplayLine(char * text /* r4 */) {
    // Local variables
    unsigned short str[512]; // r1+0x10
}

// Range: 0x80052504 -> 0x800527B8
// this: r27
void tTextureFont::DisplayLine(unsigned short * origText /* r28 */) {
    // Local variables
    float scaleFactor; // f31
    class tTextureGlyph * currentLetter; // r25
    int m; // r30
    unsigned short * text; // r29
    class gcPrimStream * stream; // r24
    float x; // f30
    class gcPrimStream * stream; // r24
    float width; // f30
    float x; // f29
}

// Range: 0x800527B8 -> 0x80052CBC
// this: r30
void tTextureFont::DrawLetter(class gcPrimStream * buffer /* r31 */, class tTextureGlyph * currentLetter /* r29 */, float x /* f27 */) {
    // Local variables
    float invTextureWidth; // f30
    float invTextureHeight; // f5
    float scaleFactor; // f6
    float h; // f7
    float w; // f29
    float originX; // f6
    float originY; // f7
    float u0; // f28
    float u1; // f30
    float v0; // f26
    float v1; // f25
}

// total size: 0x0
class gcContext {};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x3C
struct gcStreamVertex {
    // Members
    class pddiVector pos; // offset 0x0, size 0xC
    class pddiVector norm; // offset 0xC, size 0xC
    class pddiVector2 uv[4]; // offset 0x18, size 0x20
    struct pddiColour col; // offset 0x38, size 0x4
};
// total size: 0x90
class gcPrimStream {
    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
// Range: 0x80052CBC -> 0x80053158
// this: r30
void tTextureFont::DrawBlank(class gcPrimStream * buffer /* r31 */, float x /* f28 */, float width /* f29 */) {
    // Local variables
    float invTextureWidth; // f31
    float invTextureHeight; // f5
    float scaleFactor; // f6
    float h; // f7
    float w; // f30
    float u1; // f31
    float v0; // f27
}

// total size: 0x10
struct {} tTextureGlyphRetriever::__vtable; // size: 0x10, address: 0x80102F14
// total size: 0x18
class tBitmapGlyphRetriever {
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
// total size: 0x1C
class tTextureGlyphRetriever : public tBitmapGlyphRetriever {
    // Functions
    tTextureGlyphRetriever(class tTextureGlyphArray * g);

    ~tTextureGlyphRetriever();

    unsigned char GetGlyph(int i, class tImage * image, int dx, int dy);

    // Members
protected:
    class tImage * glyphsImage; // offset 0x18, size 0x4
};
// Range: 0x80053158 -> 0x800532A4
// this: r1+0x8
tTextureGlyphRetriever::tTextureGlyphRetriever(class tTextureGlyphArray * g /* r28 */) {
    // Local variables
    int numGlyphs; // r1+0x8
    int i; // r29

    // References
    // -> struct [anonymous] tTextureGlyphRetriever::__vtable;
}

// Range: 0x800532A4 -> 0x80053348
// this: r30
tTextureGlyphRetriever::~tTextureGlyphRetriever() {
    // References
    // -> struct [anonymous] tTextureGlyphRetriever::__vtable;
}

// Range: 0x80053348 -> 0x800533E0
// this: r27
unsigned char tTextureGlyphRetriever::GetGlyph(int i /* r28 */, class tImage * image /* r29 */, int dx /* r30 */, int dy /* r31 */) {
    // Local variables
    class tTextureGlyph * currentGlyph; // r1+0x8
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x28
struct {} tTextureFontLoader::__vtable; // size: 0x28, address: 0x80102E9C
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
    // Members
protected:
    class tImageFactory * factory; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
};
// total size: 0x28
class tTextureFontLoader : public tSimpleChunkHandler {
    // Functions
    tTextureFontLoader();

    ~tTextureFontLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    class tImageLoader * imageLoader; // offset 0x18, size 0x4
    class tImageConverter * converter; // offset 0x1C, size 0x4
    unsigned char normalize; // offset 0x20, size 0x1
};
// ERROR: Failed to emit tag 2EF1D0 (GlobalSubroutine)
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
// ERROR: Failed to emit tag 2F0751 (GlobalSubroutine)
// total size: 0x10
class tBitmapFontRepacker {
    // Members
protected:
    int currGlyph; // offset 0x0, size 0x4
    int glyphBorder; // offset 0x4, size 0x4
    unsigned char * packedGlyphs; // offset 0x8, size 0x4
    class tBitmapGlyphRetriever * glyphRetriever; // offset 0xC, size 0x4
};
// ERROR: Failed to emit tag 2F0D5F (GlobalSubroutine)
// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
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
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801382F0
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801382F8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138308
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138310
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138318
static // total size: 0x8
struct {} tTextureFontLoader::__RTTI; // size: 0x8, address: 0x80138320
static // total size: 0x8
struct {} tBitmapGlyphRetriever::__RTTI; // size: 0x8, address: 0x80138328
static // total size: 0x8
struct {} tTextureGlyphRetriever::__RTTI; // size: 0x8, address: 0x80138330
static // total size: 0x8
struct {} tFont::__RTTI; // size: 0x8, address: 0x80138340
static // total size: 0x8
struct {} tTextureFont::__RTTI; // size: 0x8, address: 0x80138348
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



