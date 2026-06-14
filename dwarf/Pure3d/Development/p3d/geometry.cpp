/*
    Compile unit: D:\Pure3d\development\p3d\geometry.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003F77C -> 0x8004035C
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x48
struct {} tGeometry::__vtable; // size: 0x48, address: 0x801010F4
// total size: 0x0
class tShader {};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
// total size: 0x14
class tPrimGroup : public tRefCounted {
    // Members
protected:
    class tShader * mShader; // offset 0x8, size 0x4
    enum pddiPrimType mPrimType; // offset 0xC, size 0x4
    unsigned int mVertexFormat; // offset 0x10, size 0x4
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
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x48
class tGeometry : public tDrawable {
    // Functions
    tGeometry(int nPG);

    ~tGeometry();

    class tShader * GetShader(int i);

    void SetShader(int i, class tShader * shader);

    void SetPrimGroup(int i, class tPrimGroup * group);

    void Display();

    void SetBoundingBox(float x1, float y1, float z1, float x2, float y2, float z2);

    void SetBoundingSphere(float centerx, float centery, float centerz, float radius);

    // Members
protected:
    struct tBox3D box; // offset 0x10, size 0x18
    struct tSphere sphere; // offset 0x28, size 0x10
    int nFaceNormal; // offset 0x38, size 0x4
    class Vector * faceNormal; // offset 0x3C, size 0x4
    int nPrimGroup; // offset 0x40, size 0x4
    class tPrimGroup * * primGroup; // offset 0x44, size 0x4
};
// Range: 0x8003F77C -> 0x8003F83C
// this: r1+0x8
tGeometry::tGeometry(int nPG /* r31 */) {
    // References
    // -> struct [anonymous] tGeometry::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// Range: 0x8003F83C -> 0x8003F900
// this: r26
tGeometry::~tGeometry() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] tGeometry::__vtable;
}

// Range: 0x8003F900 -> 0x8003F924
// this: r1+0x0
class tShader * tGeometry::GetShader(int i /* r1+0x4 */) {}

// Range: 0x8003F924 -> 0x8003F95C
// this: r1+0x8
void tGeometry::SetShader(int i /* r1+0xC */, class tShader * shader /* r5 */) {}

// Range: 0x8003F95C -> 0x8003F9BC
// this: r1+0x8
void tGeometry::SetPrimGroup(int i /* r1+0xC */, class tPrimGroup * group /* r30 */) {}

// Range: 0x8003F9BC -> 0x8003FA34
// this: r29
void tGeometry::Display() {
    // Local variables
    int i; // r30
}

// Range: 0x8003FA34 -> 0x8003FA50
// this: r1+0x0
void tGeometry::SetBoundingBox(float x1 /* r1+0x4 */, float y1 /* r1+0x8 */, float z1 /* r1+0xC */, float x2 /* r1+0x10 */, float y2 /* r1+0x14 */, float z2 /* r1+0x18 */) {}

// Range: 0x8003FA50 -> 0x8003FA64
// this: r1+0x0
void tGeometry::SetBoundingSphere(float centerx /* r1+0x4 */, float centery /* r1+0x8 */, float centerz /* r1+0xC */, float radius /* r1+0x10 */) {}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x20
struct {} tGeometryLoader::__vtable; // size: 0x20, address: 0x80101078
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x20
class tGeometryLoader : public tSimpleChunkHandler {
    // Functions
    tGeometryLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    unsigned char mEnableFaceNormals; // offset 0x18, size 0x1
    unsigned char mOptimize; // offset 0x19, size 0x1
    unsigned int mVertexMask; // offset 0x1C, size 0x4
};
// ERROR: Failed to emit tag 209D9C (GlobalSubroutine)
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
// Range: 0x8003FAD8 -> 0x8003FB28
class tGeometry * tGeometryLoader::Allocate(int nPrimGroup /* r31 */) {}

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
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
// total size: 0x8
class Vector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
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
// total size: 0x34
class tPrimGroupStreamed : public tPrimGroup {
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
// total size: 0x18
class tPrimGroupOptimised : public tPrimGroup {
    // Members
    class pddiPrimBuffer * mBuffer; // offset 0x14, size 0x4
};
// total size: 0x20
class tPrimGroupLoader {
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
// Range: 0x8003FB28 -> 0x8003FE54
// this: r27
class tEntity * tGeometryLoader::LoadObject(class tChunkFile * f /* r28 */, class tEntityStore * store /* r29 */) {
    // Local variables
    char name[255]; // r1+0xB8
    int nPrimGroup; // r4
    class tGeometry * geo; // r30
    int primGroupCount; // r24
    class tPrimGroupLoader pgLoader; // r1+0x94
    class tPrimGroup * pg; // r6
    float minx; // f31
    float miny; // f30
    float minz; // f29
    float maxx; // f28
    float maxy; // f27
    float maxz; // f6
    float cx; // f27
    float cy; // f28
    float cz; // f29
    float r; // f4
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
// total size: 0x20
struct {} tGeometryLoaderV13::__vtable; // size: 0x20, address: 0x80101024
// total size: 0x20
class tGeometryLoaderV13 : public tSimpleChunkHandler {
    // Functions
    tGeometryLoaderV13();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    unsigned char enableFaceNormals; // offset 0x18, size 0x1
    unsigned char optimize; // offset 0x19, size 0x1
    unsigned int vertexMask; // offset 0x1C, size 0x4
};
// ERROR: Failed to emit tag 211775 (GlobalSubroutine)
// Range: 0x8003FEC8 -> 0x8003FF18
class tGeometry * tGeometryLoaderV13::Allocate(int nPrimGroup /* r31 */) {}

// total size: 0xC
struct {} tVertexListLoader::__vtable; // size: 0xC, address: 0x80103254
// total size: 0xC
struct {} tPrimGroupLoaderV13::__vtable; // size: 0xC, address: 0x801023C4
// total size: 0x4
class tVertexListLoader {
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
// Range: 0x8003FF18 -> 0x80040254
// this: r28
class tEntity * tGeometryLoaderV13::LoadObject(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */) {
    // Local variables
    char name[255]; // r1+0xB0
    int nPrimGroup; // r4
    class tGeometry * geo; // r31
    int primGroupCount; // r25
    class tVertexList * vertexList; // r24
    class tVertexListLoader vlLoader; // r1+0xA8
    class tPrimGroupLoaderV13 pgLoader; // r1+0x90
    class tPrimGroupOptimised * pg; // r1+0x8
    float minx; // f31
    float miny; // f30
    float minz; // f29
    float maxx; // f28
    float maxy; // f27
    float maxz; // f6
    float cx; // f27
    float cy; // f28
    float cz; // f29
    float r; // f4

    // References
    // -> struct [anonymous] tPrimGroupLoaderV13::__vtable;
    // -> struct [anonymous] tVertexListLoader::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137D88
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137D98
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137DA0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137DA8
static // total size: 0x8
struct {} tGeometryLoaderV13::__RTTI; // size: 0x8, address: 0x80137DB0
static // total size: 0x8
struct {} tGeometryLoader::__RTTI; // size: 0x8, address: 0x80137DB8
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80137DC0
static // total size: 0x8
struct {} tGeometry::__RTTI; // size: 0x8, address: 0x80137DC8



