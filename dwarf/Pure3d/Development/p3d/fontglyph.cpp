/*
    Compile unit: D:\Pure3d\development\p3d\fontglyph.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003E618 -> 0x8003ED1C
*/
// total size: 0x20
struct {} tGlyphArray::__vtable; // size: 0x20, address: 0x80100E5C
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
// total size: 0x10
class tGlyphArray : public tRefCounted {
    // Functions
    ~tGlyphArray();

    class tGlyph * FindGlyph(unsigned short index);

    // Members
protected:
    enum p3dGlyphType glyphType; // offset 0x8, size 0x4
    int numGlyphs; // offset 0xC, size 0x4
};
// Range: 0x8003E618 -> 0x8003E67C
// this: r30
tGlyphArray::~tGlyphArray() {
    // References
    // -> struct [anonymous] tGlyphArray::__vtable;
}

// total size: 0x2
class tGlyph {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
};
// Range: 0x8003E67C -> 0x8003E7CC
// this: r25
class tGlyph * tGlyphArray::FindGlyph(unsigned short index /* r26 */) {
    // Local variables
    int startPos; // r31
    int endPos; // r30
    int currPos; // r29
    class tGlyph * startGlyph; // r28
    class tGlyph * endGlyph; // r27
    class tGlyph * currGlyph; // r3
}

// total size: 0x20
struct {} tImageGlyphArray::__vtable; // size: 0x20, address: 0x80100E3C
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
    // Functions
    tImageGlyphArray();

    ~tImageGlyphArray();

    void SetNumGlyphs(int ng);

    void InitGlyphs(unsigned short * index, int ng);

    unsigned char SetGlyph(int i, class tGlyph & glyph);

    class tGlyph * GetGlyph(int i);

    // Members
protected:
    int glyphHeight; // offset 0x10, size 0x4
    class tImageGlyph * glyphs; // offset 0x14, size 0x4
};
// Range: 0x8003E7CC -> 0x8003E82C
// this: r31
tImageGlyphArray::tImageGlyphArray() {
    // References
    // -> struct [anonymous] tImageGlyphArray::__vtable;
    // -> struct [anonymous] tGlyphArray::__vtable;
}

// Range: 0x8003E82C -> 0x8003E8B4
// this: r30
tImageGlyphArray::~tImageGlyphArray() {
    // References
    // -> struct [anonymous] tGlyphArray::__vtable;
    // -> struct [anonymous] tImageGlyphArray::__vtable;
}

// Range: 0x8003E8B4 -> 0x8003E908
// this: r30
void tImageGlyphArray::SetNumGlyphs(int ng /* r31 */) {}

// Range: 0x8003E908 -> 0x8003E9D0
// this: r31
void tImageGlyphArray::InitGlyphs(unsigned short * index /* r30 */, int ng /* r5 */) {
    // Local variables
    int i; // r12
}

// Range: 0x8003E9D0 -> 0x8003EA30
// this: r1+0x0
unsigned char tImageGlyphArray::SetGlyph(int i /* r1+0x4 */, class tGlyph & glyph /* r1+0x8 */) {}

// Range: 0x8003EA30 -> 0x8003EA54
// this: r1+0x0
class tGlyph * tImageGlyphArray::GetGlyph(int i /* r1+0x4 */) {}

// total size: 0x20
struct {} tTextureGlyphArray::__vtable; // size: 0x20, address: 0x80100DF4
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
    // Functions
    tTextureGlyphArray();

    ~tTextureGlyphArray();

    void SetNumGlyphs(int ng);

    void InitGlyphs(unsigned short * index, int ng);

    unsigned char SetGlyph(int i, class tGlyph & glyph);

    class tGlyph * GetGlyph(int i);

    float GetGlyphWidth(int i);

    // Members
protected:
    float glyphHeight; // offset 0x10, size 0x4
    class tTextureGlyph * glyphs; // offset 0x14, size 0x4
};
// Range: 0x8003EA54 -> 0x8003EAB4
// this: r31
tTextureGlyphArray::tTextureGlyphArray() {
    // References
    // -> struct [anonymous] tTextureGlyphArray::__vtable;
    // -> struct [anonymous] tGlyphArray::__vtable;
}

// Range: 0x8003EAB4 -> 0x8003EB3C
// this: r30
tTextureGlyphArray::~tTextureGlyphArray() {
    // References
    // -> struct [anonymous] tGlyphArray::__vtable;
    // -> struct [anonymous] tTextureGlyphArray::__vtable;
}

// Range: 0x8003EB3C -> 0x8003EB90
// this: r30
void tTextureGlyphArray::SetNumGlyphs(int ng /* r31 */) {}

// Range: 0x8003EB90 -> 0x8003EC68
// this: r31
void tTextureGlyphArray::InitGlyphs(unsigned short * index /* r30 */, int ng /* r5 */) {
    // Local variables
    int i; // r12
}

// Range: 0x8003EC68 -> 0x8003ECD0
// this: r1+0x0
unsigned char tTextureGlyphArray::SetGlyph(int i /* r1+0x4 */, class tGlyph & glyph /* r1+0x8 */) {}

// Range: 0x8003ECD0 -> 0x8003ECF4
// this: r1+0x0
class tGlyph * tTextureGlyphArray::GetGlyph(int i /* r1+0x4 */) {}

// Range: 0x8003ECF4 -> 0x8003ED1C
// this: r1+0x0
float tTextureGlyphArray::GetGlyphWidth(int i /* r1+0x4 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137D30
static // total size: 0x8
struct {} tGlyphArray::__RTTI; // size: 0x8, address: 0x80137D38
static // total size: 0x8
struct {} tTextureGlyphArray::__RTTI; // size: 0x8, address: 0x80137D40
static // total size: 0x8
struct {} tImageGlyphArray::__RTTI; // size: 0x8, address: 0x80137D48



