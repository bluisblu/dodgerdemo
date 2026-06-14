/*
    Compile unit: D:\Pure3d\Simulation\flexobj\psystongeom2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4DB4 -> 0x800F64A8
*/
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AE18
static // total size: 0x8
struct {} tPrimGroup::__RTTI; // size: 0x8, address: 0x8013AE20
static // total size: 0x8
struct {} tPrimGroupOptimised::__RTTI; // size: 0x8, address: 0x8013AE28
// total size: 0x38
struct {} ParticleSystemOnGeom2D::__vtable; // size: 0x38, address: 0x80116A08
// total size: 0xD0
class ParticleSystemOnGeom2D : public ParticleSystem {
    // Functions
    ParticleSystemOnGeom2D(class tGeometry * geom, unsigned int nparticle);

    ~ParticleSystemOnGeom2D();

    void ResetPos();

    void BuildConditions();

    unsigned char Find2AdjascentTris(unsigned int * edge, unsigned int * tri, unsigned int * extrap) const;

    void PreStepModification();

    void ComputeParticleNormal();

    void PreDisplay();

    void StreamParticle(unsigned char front);

    void Display();

    // Members
protected:
    class tGeometry * tgeom; // offset 0x98, size 0x4
    unsigned int nVertex; // offset 0x9C, size 0x4
    unsigned int nbPGM; // offset 0xA0, size 0x4
    unsigned int nTri; // offset 0xA4, size 0x4
    unsigned int nEdge; // offset 0xA8, size 0x4
    unsigned int * mapVL; // offset 0xAC, size 0x4
    unsigned int * pgmNbVertex; // offset 0xB0, size 0x4
    unsigned int * mapTri; // offset 0xB4, size 0x4
    unsigned int * mapEdge; // offset 0xB8, size 0x4
    float * lenEdge; // offset 0xBC, size 0x4
    float * triNormal; // offset 0xC0, size 0x4
    float * pNormal; // offset 0xC4, size 0x4
    class Vector * particlePos; // offset 0xC8, size 0x4
    unsigned char displayBackFace; // offset 0xCC, size 0x1
    unsigned char frontNormal; // offset 0xCD, size 0x1
};
// Range: 0x800F4DB4 -> 0x800F4ED0
// this: r1+0x8
ParticleSystemOnGeom2D::ParticleSystemOnGeom2D(class tGeometry * geom /* r30 */, unsigned int nparticle /* r29 */) {
    // Local variables
    int j; // r30

    // References
    // -> static struct [anonymous] tPrimGroup::__RTTI;
    // -> static struct [anonymous] tPrimGroupOptimised::__RTTI;
    // -> struct [anonymous] ParticleSystemOnGeom2D::__vtable;
}

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
// total size: 0x48
class tGeometry : public tDrawable {
    // Members
protected:
    struct tBox3D box; // offset 0x10, size 0x18
    struct tSphere sphere; // offset 0x28, size 0x10
    int nFaceNormal; // offset 0x38, size 0x4
    class Vector * faceNormal; // offset 0x3C, size 0x4
    int nPrimGroup; // offset 0x40, size 0x4
    class tPrimGroup * * primGroup; // offset 0x44, size 0x4
};
// Range: 0x800F4ED0 -> 0x800F4F78
// this: r30
ParticleSystemOnGeom2D::~ParticleSystemOnGeom2D() {
    // References
    // -> struct [anonymous] ParticleSystemOnGeom2D::__vtable;
}

// Range: 0x800F4F78 -> 0x800F502C
// this: r31
void ParticleSystemOnGeom2D::ResetPos() {
    // Local variables
    int i; // r7
}

// Range: 0x800F502C -> 0x800F5268
// this: r29
void ParticleSystemOnGeom2D::BuildConditions() {
    // Local variables
    unsigned int i; // r28
    class FlexParticle * p0; // r28
    class FlexParticle * p1; // r27
    class FlexParticle * p2; // r26
    float area; // f31
    unsigned int tri[2]; // r1+0x14
    unsigned int ep[2]; // r1+0xC
}

// Range: 0x800F5268 -> 0x800F5340
// this: r25
unsigned char ParticleSystemOnGeom2D::Find2AdjascentTris(unsigned int * edge /* r26 */, unsigned int * tri /* r27 */, unsigned int * extrap /* r28 */) const {
    // Local variables
    unsigned char found; // r30
    unsigned int i; // r29
}

// Range: 0x800F5340 -> 0x800F54EC
unsigned char ParticleSystemOnGeom2D::EdgeOfTriangle(unsigned int * edge /* r1+0x4 */, unsigned int * t /* r1+0x8 */, unsigned int & extraPoint /* r1+0xC */) {
    // Local variables
    unsigned char found; // r3
    unsigned int i; // r11
}

static int maxiter$401; // size: 0x4, address: 0x8013B4A0
static signed char init$402; // size: 0x1, address: 0x8013B4A4
// Range: 0x800F54EC -> 0x800F55C4
// this: r31
void ParticleSystemOnGeom2D::PreStepModification() {
    // Local variables
    int n; // r28
    unsigned char moved; // r27
    unsigned int i; // r26

    // References
    // -> static int maxiter$401;
    // -> static signed char init$402;
}

// Range: 0x800F55C4 -> 0x800F57C8
// this: r31
void ParticleSystemOnGeom2D::ComputeParticleNormal() {
    // Local variables
    unsigned int i; // r29
    int ii; // r1+0x8
    int j; // r29
}

// Range: 0x800F57C8 -> 0x800F5800
// this: r31
void ParticleSystemOnGeom2D::PreDisplay() {}

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
// total size: 0x0
class tVertexList {};
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
// Range: 0x800F5800 -> 0x800F5994
// this: r24
void ParticleSystemOnGeom2D::StreamParticle(unsigned char front /* r1+0xC */) {
    // Local variables
    unsigned int j; // r27
    class tPrimGroupOptimised * pg; // r1+0x8
    class pddiPrimBufferStream * stream; // r26
    int index; // r1+0x8
    unsigned int i; // r25
    float * p; // r4
    float * n; // r5
    unsigned int i; // r25
    float * p; // r4
    float n[3]; // r1+0x10
}

enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
// Range: 0x800F5994 -> 0x800F5A98
// this: r29
void ParticleSystemOnGeom2D::Display() {
    // Local variables
    enum pddiCullMode mode; // r30
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} PSystGeomLoader::__vtable; // size: 0x1C, address: 0x80116980
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class PSystGeomLoader : public tSimpleChunkHandler {
    // Functions
    PSystGeomLoader();
};
// ERROR: Failed to emit tag 9C76A2 (GlobalSubroutine)
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
// total size: 0x34
class ConditionParams {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float Stretch1Dkf; // offset 0x4, size 0x4
    float Stretch1Dkd; // offset 0x8, size 0x4
    float Bend1Dkf; // offset 0xC, size 0x4
    float Bend1Dkd; // offset 0x10, size 0x4
    float Wind1DKf; // offset 0x14, size 0x4
    float Stretch2Dkf; // offset 0x18, size 0x4
    float Stretch2Dkd; // offset 0x1C, size 0x4
    float Shear2Dkf; // offset 0x20, size 0x4
    float Shear2Dkd; // offset 0x24, size 0x4
    float Bend2Dkf; // offset 0x28, size 0x4
    float Bend2Dkd; // offset 0x2C, size 0x4
    float Wind2DKf; // offset 0x30, size 0x4
};
// ERROR: Failed to emit tag 9C90B4 (GlobalSubroutine)
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
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x8013AE30
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AE40
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x8013AE48
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x8013AE50
static // total size: 0x8
struct {} PSystGeomLoader::__RTTI; // size: 0x8, address: 0x8013AE58
static // total size: 0x8
struct {} ParticleSystem::__RTTI; // size: 0x8, address: 0x8013AE60
static // total size: 0x8
struct {} ParticleSystemOnGeom2D::__RTTI; // size: 0x8, address: 0x8013AE68
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
// total size: 0x44
class FlexParticle {
    // Members
public:
    int index; // offset 0x0, size 0x4
    float x[3]; // offset 0x4, size 0xC
    float v[3]; // offset 0x10, size 0xC
    float uv[2]; // offset 0x1C, size 0x8
    unsigned char free; // offset 0x24, size 0x1
    unsigned char broken; // offset 0x25, size 0x1
    float collConstrain[2][3]; // offset 0x28, size 0x18
    int inColl; // offset 0x40, size 0x4
};
// total size: 0x28
class pm {
    // Members
public:
    float k[3][3]; // offset 0x0, size 0x24
    int column; // offset 0x24, size 0x4
};
// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    class pm * fArray; // offset 0x8, size 0x4
};
// total size: 0x30
class SparseBlockMatrix {
    // Members
protected:
    int nRows; // offset 0x0, size 0x4
    int vecSize; // offset 0x4, size 0x4
    float eps; // offset 0x8, size 0x4
    float eps2; // offset 0xC, size 0x4
    int maxiter; // offset 0x10, size 0x4
    class TArray * lrows; // offset 0x14, size 0x4
    float * vec_r; // offset 0x18, size 0x4
    float * vec_c; // offset 0x1C, size 0x4
    float * vec_t; // offset 0x20, size 0x4
    float * vec_q; // offset 0x24, size 0x4
    float * vec_s; // offset 0x28, size 0x4
    float * vec_b; // offset 0x2C, size 0x4
};
// total size: 0x2C
class Condition {
    // Members
    class Condition * nextCond; // offset 0x0, size 0x4
    float xi[3]; // offset 0x4, size 0xC
    float xj[3]; // offset 0x10, size 0xC
public:
    void * __vptr$; // offset 0x1C, size 0x4
    class FlexParticle * pi; // offset 0x20, size 0x4
    class FlexParticle * pj; // offset 0x24, size 0x4
    class ConditionParams * params; // offset 0x28, size 0x4
};
// total size: 0x14
class VoidPList {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char fLock; // offset 0x4, size 0x1
private:
    int fSize; // offset 0x8, size 0x4
    int fArraySize; // offset 0xC, size 0x4
    void * fArray; // offset 0x10, size 0x4
};
// total size: 0x14
class FlexParticleList : public VoidPList {};
// total size: 0x0
class Wind {};
// total size: 0x98
class ParticleSystem : public tEntity {
    // Members
public:
    class FlexParticle * * lp; // offset 0x10, size 0x4
    class Condition * Conditions; // offset 0x14, size 0x4
    class ConditionParams * cparams; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    int nbp; // offset 0x20, size 0x4
    float deli; // offset 0x24, size 0x4
    class SparseBlockMatrix * A; // offset 0x28, size 0x4
    float * mass; // offset 0x2C, size 0x4
    float * b; // offset 0x30, size 0x4
    float * z; // offset 0x34, size 0x4
    float * dv; // offset 0x38, size 0x4
    class TArray * Sfilter; // offset 0x3C, size 0x4
    float extDensity; // offset 0x40, size 0x4
    float gravity[3]; // offset 0x44, size 0xC
    float wind[3]; // offset 0x50, size 0xC
    class FlexParticleList interplist; // offset 0x5C, size 0x14
    unsigned char drawparticle; // offset 0x70, size 0x1
    float maxDv; // offset 0x74, size 0x4
    float maxdef; // offset 0x78, size 0x4
    float rest; // offset 0x7C, size 0x4
    float frict; // offset 0x80, size 0x4
    float dvtstatic2; // offset 0x84, size 0x4
protected:
    int vecSize; // offset 0x88, size 0x4
    float invTimeStep; // offset 0x8C, size 0x4
    float timeStep; // offset 0x90, size 0x4
private:
    class Wind * windFunction; // offset 0x94, size 0x4
};
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x8013AE70
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



