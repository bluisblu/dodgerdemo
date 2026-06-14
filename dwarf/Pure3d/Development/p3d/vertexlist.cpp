/*
    Compile unit: D:\Pure3d\development\p3d\vertexlist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80054C1C -> 0x800558F8
*/
// total size: 0xC
struct {} tVertexList::__vtable; // size: 0xC, address: 0x80103284
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x2C
class tVertexList : public tRefCounted {
    // Functions
    tVertexList(unsigned int num, unsigned int type);

    ~tVertexList();

    void Stream(class gcPrimStream * stream, int start, int count);

    void Stream(class pddiPrimBufferStream * stream, int start, int count);

    // Members
    unsigned int format; // offset 0x8, size 0x4
    int nVertex; // offset 0xC, size 0x4
    class Vector * coord; // offset 0x10, size 0x4
    class Vector * normal; // offset 0x14, size 0x4
    class Vector2 * uv[4]; // offset 0x18, size 0x10
    struct pddiColour * colour; // offset 0x28, size 0x4
};
// Range: 0x80054C1C -> 0x80054D80
// this: r1+0x8
tVertexList::tVertexList(unsigned int num /* r27 */, unsigned int type /* r26 */) {
    // Local variables
    int i; // r26

    // References
    // -> struct [anonymous] tVertexList::__vtable;
}

// total size: 0x8
class Vector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// Range: 0x80054D80 -> 0x80054E38
// this: r30
tVertexList::~tVertexList() {
    // References
    // -> struct [anonymous] tVertexList::__vtable;
}

// Range: 0x80054E38 -> 0x800553A0
// this: r1+0x8
void tVertexList::Stream(class gcPrimStream * stream /* r31 */, int start /* r5 */, int count /* r1+0x14 */) {}

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
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x800553A0 -> 0x80055754
// this: r1+0x8
void tVertexList::Stream(class pddiPrimBufferStream * stream /* r30 */, int start /* r5 */, int count /* r1+0x14 */) {}

// total size: 0x4
class tVertexListLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
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
enum pddiVertexType {
    PDDI_VERTEX_C = 0,
    PDDI_VERTEX_N = 1,
    PDDI_VERTEX_T = 2,
    PDDI_VERTEX_CT = 3,
    PDDI_VERTEX_NT = 4,
};
// total size: 0x2C
struct pddiCanonicalVertex {
    // Members
    class pddiVector v; // offset 0x0, size 0xC
    class pddiVector n; // offset 0xC, size 0xC
    struct pddiColour c; // offset 0x18, size 0x4
    class pddiVector2 uv0; // offset 0x1C, size 0x8
    class pddiVector2 uv1; // offset 0x24, size 0x8
};
// Range: 0x80055754 -> 0x800558F8
class tVertexList * tVertexListLoader::Load(class tChunkFile * f /* r25 */, unsigned int vertexMask /* r26 */) {
    // Local variables
    int nVertex; // r31
    enum pddiVertexType type; // r1+0x8
    unsigned int mask; // r30
    class Vector * coord; // r30
    class Vector * normal; // r29
    struct pddiColour * colour; // r28
    class Vector2 * uv; // r27
    struct pddiCanonicalVertex cv; // r1+0x30
    int i; // r26
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
struct {} tVertexListLoader::__RTTI; // size: 0x8, address: 0x801383F8
// total size: 0xC
struct {} tVertexListLoader::__vtable; // size: 0xC, address: 0x80103254
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138400
static // total size: 0x8
struct {} tVertexList::__RTTI; // size: 0x8, address: 0x80138408



