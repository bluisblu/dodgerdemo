/*
    Compile unit: D:\Pure3d\development\p3d\primgroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004A0A8 -> 0x8004DB54
*/
// total size: 0x10
struct {} tPrimGroup::__vtable; // size: 0x10, address: 0x801025EC
// total size: 0x2C
class tVertexList : public tRefCounted {
    // Members
    unsigned int format; // offset 0x8, size 0x4
    int nVertex; // offset 0xC, size 0x4
    class Vector * coord; // offset 0x10, size 0x4
    class Vector * normal; // offset 0x14, size 0x4
    class Vector2 * uv[4]; // offset 0x18, size 0x10
    struct pddiColour * colour; // offset 0x28, size 0x4
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
// total size: 0x14
class tPrimGroup : public tRefCounted {
    // Functions
    ~tPrimGroup();

    void SetShader(class tShader * m);

    // Members
protected:
    class tShader * mShader; // offset 0x8, size 0x4
    enum pddiPrimType mPrimType; // offset 0xC, size 0x4
    unsigned int mVertexFormat; // offset 0x10, size 0x4
};
// Range: 0x8004A0A8 -> 0x8004A124
// this: r30
tPrimGroup::~tPrimGroup() {
    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
}

// Range: 0x8004A124 -> 0x8004A17C
// this: r30
void tPrimGroup::SetShader(class tShader * m /* r31 */) {}

// total size: 0x10
struct {} tPrimGroupOptimised::__vtable; // size: 0x10, address: 0x801025DC
// total size: 0x18
class tPrimGroupOptimised : public tPrimGroup {
    // Functions
    ~tPrimGroupOptimised();

    void Display();

    // Members
    class pddiPrimBuffer * mBuffer; // offset 0x14, size 0x4
};
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// Range: 0x8004A17C -> 0x8004A230
// this: r30
tPrimGroupOptimised::~tPrimGroupOptimised() {
    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
    // -> struct [anonymous] tPrimGroupOptimised::__vtable;
}

// Range: 0x8004A230 -> 0x8004A28C
// this: r30
void tPrimGroupOptimised::Display() {}

// total size: 0x10
struct {} tPrimGroupStreamed::__vtable; // size: 0x10, address: 0x801025A4
// total size: 0x34
class tPrimGroupStreamed : public tPrimGroup {
    // Functions
    ~tPrimGroupStreamed();

    void Display();

    int GetNumVertex() const;

    void Display(class gcPrimStream * stream);

    void IndexedDisplay(class gcPrimStream * stream);

    void NonIndexedDisplay(class gcPrimStream * stream);

    // Members
    unsigned int mVertexCount; // offset 0x14, size 0x4
    unsigned int mIndexCount; // offset 0x18, size 0x4
    unsigned short * mIndices; // offset 0x1C, size 0x4
    class tVertexList * mVertexList; // offset 0x20, size 0x4
    class Vector * mWeightList; // offset 0x24, size 0x4
    unsigned int * mMatrixPalette; // offset 0x28, size 0x4
    int mMatrixCount; // offset 0x2C, size 0x4
    unsigned int * mMatrixList; // offset 0x30, size 0x4
};
// Range: 0x8004A28C -> 0x8004A33C
// this: r30
tPrimGroupStreamed::~tPrimGroupStreamed() {
    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
    // -> struct [anonymous] tPrimGroupStreamed::__vtable;
}

// Range: 0x8004A33C -> 0x8004A3DC
// this: r29
void tPrimGroupStreamed::Display() {
    // Local variables
    class gcPrimStream * stream; // r30
}

// Range: 0x8004A3DC -> 0x8004A3F8
// this: r1+0x0
int tPrimGroupStreamed::GetNumVertex() const {}

// Range: 0x8004A3F8 -> 0x8004A42C
// this: r3
void tPrimGroupStreamed::Display(class gcPrimStream * stream /* r4 */) {}

// total size: 0x24
struct {} tPrimGroupSkinned::__vtable; // size: 0x24, address: 0x80102558
// total size: 0x10
struct Offset {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    class Vector offset; // offset 0x4, size 0xC
};
// total size: 0xC
struct OffsetList {
    // Members
    unsigned int offsetCount; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
    struct Offset * offsets; // offset 0x8, size 0x4
};
// total size: 0x30
class tPrimGroupSkinned : public tPrimGroup {
    // Functions
    ~tPrimGroupSkinned();

    struct OffsetList * GetOffsetList(unsigned int i) const;

    // Members
protected:
    unsigned int mVertexCount; // offset 0x14, size 0x4
    unsigned int instanceCount; // offset 0x18, size 0x4
    unsigned int instanceSize; // offset 0x1C, size 0x4
    unsigned int mOffsetListCount; // offset 0x20, size 0x4
    unsigned int mOffsetListMax; // offset 0x24, size 0x4
    struct OffsetList * * mOffsetListGroup; // offset 0x28, size 0x4
    unsigned char deformed; // offset 0x2C, size 0x1
};
// Range: 0x8004A42C -> 0x8004A514
// this: r28
tPrimGroupSkinned::~tPrimGroupSkinned() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
    // -> struct [anonymous] tPrimGroupSkinned::__vtable;
}

// Range: 0x8004A514 -> 0x8004A524
// this: r1+0x0
struct OffsetList * tPrimGroupSkinned::GetOffsetList(unsigned int i /* r1+0x4 */) const {}

// total size: 0x24
struct {} tPrimGroupSkinnedStreamed::__vtable; // size: 0x24, address: 0x80102534
// total size: 0x28
struct SkinVertex {
    // Members
    float weights[3]; // offset 0x0, size 0xC
    unsigned char indices[4]; // offset 0xC, size 0x4
    class Vector normal; // offset 0x10, size 0xC
    class Vector position; // offset 0x1C, size 0xC
};
// total size: 0x3C
class tPrimGroupSkinnedStreamed : public tPrimGroupSkinned {
    // Functions
    ~tPrimGroupSkinnedStreamed();

    void Display();

    void DisplayInstanced(unsigned int count);

    unsigned char GetVertices(unsigned int start, unsigned int count, class Vector * v);

    unsigned char SetVertices(unsigned int start, unsigned int count, class Vector * v);

    // Members
protected:
    class pddiPrimBuffer * mBuffer; // offset 0x30, size 0x4
    class Matrix * boneMatrix; // offset 0x34, size 0x4
    struct SkinVertex * mVertices; // offset 0x38, size 0x4
};
// Range: 0x8004A528 -> 0x8004A654
// this: r31
tPrimGroupSkinnedStreamed::~tPrimGroupSkinnedStreamed() {
    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
    // -> struct [anonymous] tPrimGroupSkinned::__vtable;
    // -> struct [anonymous] tPrimGroupSkinnedStreamed::__vtable;
}

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
// Range: 0x8004A654 -> 0x8004AE5C
// this: r28
void tPrimGroupSkinnedStreamed::Display() {
    // Local variables
    class pddiPrimBufferStream * stream; // r31
    int count; // r30
    struct SkinVertex * verts; // r1+0x8
    int i; // r29
    class Matrix * m; // r3
    class Vector normal; // r1+0x40
    class Vector vertex; // r1+0x34
    class Vector * sv; // r7
    float weight; // r1+0x8
    int i; // r29
    class Matrix * m; // r4
    class Vector * sv; // r7
    float weight; // r1+0x8
}

// Range: 0x8004AE5C -> 0x8004AECC
// this: r31
void tPrimGroupSkinnedStreamed::DisplayInstanced(unsigned int count /* r4 */) {}

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
class pddiPrimBuffer : public pddiObject {};
// Range: 0x8004AECC -> 0x8004B0CC
// this: r1+0x8
unsigned char tPrimGroupSkinnedStreamed::GetVertices(unsigned int start /* r4 */, unsigned int count /* r1+0x10 */, class Vector * v /* r6 */) {
    // Local variables
    unsigned int i; // r4
}

// Range: 0x8004B0CC -> 0x8004B2CC
// this: r1+0x8
unsigned char tPrimGroupSkinnedStreamed::SetVertices(unsigned int start /* r4 */, unsigned int count /* r1+0x10 */, class Vector * v /* r6 */) {
    // Local variables
    unsigned int i; // r4
}

// total size: 0x24
struct {} tPrimGroupSkinnedOptimised::__vtable; // size: 0x24, address: 0x801024D8
// total size: 0x44
class tPrimGroupSkinnedOptimised : public tPrimGroupSkinned {
    // Functions
    ~tPrimGroupSkinnedOptimised();

    void Display();

    void DisplayInstanced(unsigned int count);

    class pddiPrimBuffer * GetBuffer();

    unsigned char GetVertices(unsigned int start, unsigned int count, class Vector * v);

    unsigned char SetVertices(unsigned int count, class Vector * v);

    void ReleaseTempVertices();

    // Members
    class pddiPrimBuffer * mBuffer; // offset 0x30, size 0x4
    class Vector * tempPositions; // offset 0x34, size 0x4
    unsigned int nMatrices; // offset 0x38, size 0x4
    class Matrix * * matrixPalette; // offset 0x3C, size 0x4
    unsigned char oneBone; // offset 0x40, size 0x1
};
// Range: 0x8004B2CC -> 0x8004B400
// this: r31
tPrimGroupSkinnedOptimised::~tPrimGroupSkinnedOptimised() {
    // References
    // -> struct [anonymous] tPrimGroup::__vtable;
    // -> struct [anonymous] tPrimGroupSkinned::__vtable;
    // -> struct [anonymous] tPrimGroupSkinnedOptimised::__vtable;
}

// total size: 0xC
class pddiExtHardwareSkinning : public pddiObject {};
// Range: 0x8004B400 -> 0x8004B4BC
// this: r28
void tPrimGroupSkinnedOptimised::Display() {
    // Local variables
    class pddiExtHardwareSkinning * hwSkin; // r30
    unsigned int i; // r29
}

// Range: 0x8004B4BC -> 0x8004B52C
// this: r31
void tPrimGroupSkinnedOptimised::DisplayInstanced(unsigned int count /* r4 */) {}

// Range: 0x8004B52C -> 0x8004B534
// this: r3
class pddiPrimBuffer * tPrimGroupSkinnedOptimised::GetBuffer() {}

// Range: 0x8004B534 -> 0x8004B57C
// this: r1+0x8
unsigned char tPrimGroupSkinnedOptimised::GetVertices(unsigned int start /* r1+0xC */, unsigned int count /* r5 */, class Vector * v /* r6 */) {}

// Range: 0x8004B57C -> 0x8004B620
// this: r27
unsigned char tPrimGroupSkinnedOptimised::SetVertices(unsigned int count /* r28 */, class Vector * v /* r31 */) {
    // Local variables
    class pddiPrimBufferStream * stream; // r30
    unsigned int a; // r29
}

// Range: 0x8004B620 -> 0x8004B658
// this: r31
void tPrimGroupSkinnedOptimised::ReleaseTempVertices() {}

// Range: 0x8004B658 -> 0x8004BBB4
// this: r1+0x8
void tPrimGroupStreamed::IndexedDisplay(class gcPrimStream * stream /* r30 */) {}

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
// Range: 0x8004BBB4 -> 0x8004BBE0
// this: r1+0x8
void tPrimGroupStreamed::NonIndexedDisplay(class gcPrimStream * stream /* r4 */) {}

// total size: 0x18
struct {} tPrimGroupLoader::__vtable; // size: 0x18, address: 0x8010243C
// total size: 0x20
class tPrimGroupLoader {
    // Functions
    tPrimGroupLoader();

    ~tPrimGroupLoader();

    class tPrimGroupStreamed * LoadStreamed(class tChunkFile * f, class tEntityStore * store);

    class tPrimGroupSkinned * LoadSkinned(class tChunkFile * f, class tEntityStore * store, class Matrix * bones, unsigned char optimise);

    class tPrimGroupOptimised * LoadOptimised(class tChunkFile * f, class tEntityStore * store);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class tShader * mShader; // offset 0x4, size 0x4
    enum pddiPrimType mPrimType; // offset 0x8, size 0x4
    unsigned int mVertexFormat; // offset 0xC, size 0x4
    unsigned int mVertexCount; // offset 0x10, size 0x4
    unsigned int mIndexCount; // offset 0x14, size 0x4
    unsigned int mMatrixCount; // offset 0x18, size 0x4
    unsigned int mVertexFormatMask; // offset 0x1C, size 0x4
};
// Range: 0x8004BBE0 -> 0x8004BBF8
// this: r3
tPrimGroupLoader::tPrimGroupLoader() {
    // References
    // -> struct [anonymous] tPrimGroupLoader::__vtable;
}

// Range: 0x8004BBF8 -> 0x8004BC44
// this: r31
tPrimGroupLoader::~tPrimGroupLoader() {
    // References
    // -> struct [anonymous] tPrimGroupLoader::__vtable;
}

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
// ERROR: Failed to emit tag 2A6BE1 (GlobalSubroutine)
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x8
class Vector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// ERROR: Failed to emit tag 2A765B (GlobalSubroutine)
// ERROR: Failed to emit tag 2A7BA5 (GlobalSubroutine)
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
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
class tPrimGroupLoaderV13 {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class tShader * shader; // offset 0x4, size 0x4
    enum pddiPrimType primType; // offset 0x8, size 0x4
    int start; // offset 0xC, size 0x4
    int count; // offset 0x10, size 0x4
    int nIndices; // offset 0x14, size 0x4
};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
// ERROR: Failed to emit tag 2A94A5 (GlobalSubroutine)
static // total size: 0x8
struct {} tPrimGroupLoaderV13::__RTTI; // size: 0x8, address: 0x80138110
// total size: 0xC
struct {} tPrimGroupLoaderV13::__vtable; // size: 0xC, address: 0x801023C4
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138118
static // total size: 0x8
struct {} tPrimGroupLoader::__RTTI; // size: 0x8, address: 0x80138120
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138128
static // total size: 0x8
struct {} tPrimGroup::__RTTI; // size: 0x8, address: 0x80138130
static // total size: 0x8
struct {} tPrimGroupSkinned::__RTTI; // size: 0x8, address: 0x80138138
static // total size: 0x8
struct {} tPrimGroupSkinnedOptimised::__RTTI; // size: 0x8, address: 0x80138140
static // total size: 0x8
struct {} tPrimGroupSkinnedStreamed::__RTTI; // size: 0x8, address: 0x80138148
static // total size: 0x8
struct {} tPrimGroupStreamed::__RTTI; // size: 0x8, address: 0x80138150
static // total size: 0x8
struct {} tPrimGroupOptimised::__RTTI; // size: 0x8, address: 0x80138158
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138168
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



