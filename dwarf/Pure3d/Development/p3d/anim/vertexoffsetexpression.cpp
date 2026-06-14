/*
    Compile unit: D:\Pure3d\development\p3d\anim\vertexoffsetexpression.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A6C8 -> 0x8006B6CC
*/
// total size: 0xC
struct {} tVertexOffsetExpression::__vtable; // size: 0xC, address: 0x8010760C
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
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x30
class tVertexOffsetExpression : public tAnimation {
    // Functions
    ~tVertexOffsetExpression();

    // Members
protected:
    unsigned int * indices; // offset 0x20, size 0x4
    float * keys; // offset 0x24, size 0x4
    unsigned int nNumKeys; // offset 0x28, size 0x4
};
// ERROR: Failed to emit tag 42B513 (GlobalSubroutine)
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tVertexOffsetExpressionLoader::__vtable; // size: 0x1C, address: 0x801075DC
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tVertexOffsetExpressionLoader : public tSimpleChunkHandler {
    // Functions
    tVertexOffsetExpressionLoader();
};
// ERROR: Failed to emit tag 42BFEB (GlobalSubroutine)
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
// ERROR: Failed to emit tag 42D591 (GlobalSubroutine)
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
// total size: 0x28
struct {} tVertexOffsetExpressionMixer::__vtable; // size: 0x28, address: 0x8010751C
// total size: 0x20
class tExpressionPreset {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned long long uid; // offset 0x8, size 0x8
    int nExpression; // offset 0x10, size 0x4
    unsigned long long * expression; // offset 0x14, size 0x4
    float * state; // offset 0x18, size 0x4
    float * weight; // offset 0x1C, size 0x4
};
// total size: 0x30
class tExpressionGroup : public tEntity {
    // Members
protected:
    int nExpression; // offset 0x10, size 0x4
    class tAnimation * * expression; // offset 0x14, size 0x4
    enum p3dExpressionStage * stage; // offset 0x18, size 0x4
    int nPreset; // offset 0x1C, size 0x4
    class tExpressionPreset * * preset; // offset 0x20, size 0x4
    unsigned long long target; // offset 0x28, size 0x8
};
// total size: 0x20
class tExpressionMixer : public tEntity {
    // Members
protected:
    class tExpressionGroup * expressionGroup; // offset 0x10, size 0x4
    float * state; // offset 0x14, size 0x4
    float * weight; // offset 0x18, size 0x4
    unsigned char mixerReady; // offset 0x1C, size 0x1
};
// total size: 0x38
class tVertexOffsetExpressionMixer : public tExpressionMixer {
    // Functions
    tVertexOffsetExpressionMixer();

    ~tVertexOffsetExpressionMixer();

    void SetTarget(class tEntity * t);

    void PreprocessAnimations();

    void ResetTarget();

    void Update();

    // Members
protected:
    int * nNumVerticesPerNeutralState; // offset 0x20, size 0x4
    class Vector * * pSkinVertices; // offset 0x24, size 0x4
    class Vector * * pBlendVertices; // offset 0x28, size 0x4
    class tDrawable * drawable; // offset 0x2C, size 0x4
    class OffsetListPointerArrayHolder * pHolder; // offset 0x30, size 0x4
};
// Range: 0x8006A958 -> 0x8006A9AC
// this: r31
tVertexOffsetExpressionMixer::tVertexOffsetExpressionMixer() {
    // References
    // -> struct [anonymous] tVertexOffsetExpressionMixer::__vtable;
}

// Range: 0x8006A9AC -> 0x8006AAA4
// this: r27
tVertexOffsetExpressionMixer::~tVertexOffsetExpressionMixer() {
    // Local variables
    class tPolySkin * skin; // r30
    int i; // r29

    // References
    // -> struct [anonymous] tVertexOffsetExpressionMixer::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138D90
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138DA0
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138DA8
static // total size: 0x8
struct {} tVertexOffsetExpression::__RTTI; // size: 0x8, address: 0x80138DB0
// Range: 0x8006AAA4 -> 0x8006AB34
unsigned char tVertexOffsetExpressionMixer::ValidateExpressionGroup(class tExpressionGroup * eg /* r28 */) {
    // Local variables
    int i; // r29
    class tVertexOffsetExpression * expr; // r1+0x8

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tVertexOffsetExpression::__RTTI;
}

static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138DB8
// Range: 0x8006AB34 -> 0x8006AB7C
unsigned char tVertexOffsetExpressionMixer::ValidateTarget(class tEntity * e /* r4 */) {
    // Local variables
    class tDrawable * target; // r1+0x8

    // References
    // -> static struct [anonymous] tEntity::__RTTI;
    // -> static struct [anonymous] tDrawable::__RTTI;
}

static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80138DC0
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80138DC8
static // total size: 0x8
struct {} tPolySkin::__RTTI; // size: 0x8, address: 0x80138DD0
// Range: 0x8006AB7C -> 0x8006AD58
// this: r24
void tVertexOffsetExpressionMixer::SetTarget(class tEntity * t /* r23 */) {
    // Local variables
    class tDrawable * dw_tmp; // r1+0x8
    class tPolySkin * skin; // r1+0x8
    int nNumPrimGroups; // r1+0x8
    int i; // r27
    class tPrimGroupSkinned * pPrimGroupSkinned; // r26
    int numVertices; // r25

    // References
    // -> static struct [anonymous] tDrawable::__RTTI;
    // -> static struct [anonymous] tPolySkin::__RTTI;
}

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
// Range: 0x8006AD58 -> 0x8006ADDC
// this: r31
void tVertexOffsetExpressionMixer::PreprocessAnimations() {
    // References
    // -> static struct [anonymous] tDrawable::__RTTI;
    // -> static struct [anonymous] tPolySkin::__RTTI;
}

// Range: 0x8006ADDC -> 0x8006AE9C
// this: r28
void tVertexOffsetExpressionMixer::ResetTarget() {
    // Local variables
    class tPolySkin * skin; // r30
    int i; // r29
}

enum p3dExpressionStage {
    P3D_EXPRESSION_STAGE_1 = 0,
    P3D_EXPRESSION_STAGE_2 = 1,
};
// Range: 0x8006AE9C -> 0x8006B230
// this: r31
void tVertexOffsetExpressionMixer::Update() {
    // Local variables
    class Vector vertexOffsets[3]; // r1+0x8C
    int vertexWeights[3]; // r1+0x80
    class Offset * curOffset; // r3
    class Offset * lastOffset; // r11
    class Offset * endOffset; // r1+0x8
    int exprIndex; // r1+0x8
    int i; // r30
    unsigned char keyFound; // r12
    enum p3dExpressionStage exprStage; // r7
    float exprWeight; // r1+0x8
    float t; // f6
    class Vector * vertex; // r4
    const class Vector & interpVec; // r7
    const class Vector & curOff; // r7
    float totalWeight; // r1+0x8
    float recWeight; // f5
    int s; // r1+0x8
    class tPolySkin * skin; // r28
}

// total size: 0xC
struct {} OffsetListPointerArrayHolder::__vtable; // size: 0xC, address: 0x801074AC
// total size: 0x0
class tSkeleton {};
// total size: 0x90
class Joint {
    // Members
public:
    class Matrix objectMatrix; // offset 0x0, size 0x40
    class Matrix worldMatrix; // offset 0x40, size 0x40
    class Joint * parent; // offset 0x80, size 0x4
    unsigned int pad[3]; // offset 0x84, size 0xC
};
// total size: 0x18
class tPose : public tRefCounted {
    // Members
protected:
    int nJoint; // offset 0x8, size 0x4
    class tSkeleton * skeleton; // offset 0xC, size 0x4
    class Joint * joint; // offset 0x10, size 0x4
    unsigned char poseReady; // offset 0x14, size 0x1
};
// total size: 0x4
class tPosable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tDrawablePose : public tDrawable, public tPosable {
    // Members
protected:
    class tSkeleton * skeleton; // offset 0x14, size 0x4
    class tPose * pose; // offset 0x18, size 0x4
};
// total size: 0x58
class tPolySkin : public tDrawablePose {
    // Members
protected:
    class Matrix * boneMatrix; // offset 0x20, size 0x4
    int nPrimGroup; // offset 0x24, size 0x4
    class tPrimGroupSkinned * * primGroup; // offset 0x28, size 0x4
    struct tSphere boundingSphere; // offset 0x2C, size 0x10
    struct tBox3D boundingBox; // offset 0x3C, size 0x18
    unsigned char oneBone; // offset 0x54, size 0x1
};
// total size: 0x1C
class OffsetListPointerArrayHolder {
    // Functions
    OffsetListPointerArrayHolder(class tPolySkin * s, class Vector * * verts);

    ~OffsetListPointerArrayHolder();

    void AddExpressionGroup(class tExpressionGroup * expressionGroup);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int maxNumVert; // offset 0x4, size 0x4
    class tPolySkin * skin; // offset 0x8, size 0x4
    unsigned int totalNumOffsets; // offset 0xC, size 0x4
    class Vector * * pBlendVertices; // offset 0x10, size 0x4
    int numExpressions; // offset 0x14, size 0x4
    class Offset * offsetArray; // offset 0x18, size 0x4
};
// Range: 0x8006B230 -> 0x8006B290
// this: r3
OffsetListPointerArrayHolder::OffsetListPointerArrayHolder(class tPolySkin * s /* r1+0x4 */, class Vector * * verts /* r1+0x8 */) {
    // Local variables
    int i; // r7

    // References
    // -> struct [anonymous] OffsetListPointerArrayHolder::__vtable;
}

// Range: 0x8006B290 -> 0x8006B2F4
// this: r30
OffsetListPointerArrayHolder::~OffsetListPointerArrayHolder() {
    // References
    // -> struct [anonymous] OffsetListPointerArrayHolder::__vtable;
}

// total size: 0x18
class Offset {
    // Members
public:
    class Vector * vertex; // offset 0x0, size 0x4
    int expressionIndex; // offset 0x4, size 0x4
    float keyVal; // offset 0x8, size 0x4
    class Vector offset; // offset 0xC, size 0xC
};
// Range: 0x8006B2F4 -> 0x8006B658
// this: r29
void OffsetListPointerArrayHolder::AddExpressionGroup(class tExpressionGroup * expressionGroup /* r30 */) {
    // Local variables
    int expIter; // r17
    int primGroupIndex; // r18
    unsigned int t; // r19
    unsigned int k; // r20
    unsigned int u; // r5
    unsigned int currentVertexIndex; // r9
    class tVertexOffsetExpression * exp; // r1+0x8
    class tPrimGroupSkinned * pg; // r21
    struct OffsetList * currentList; // r1+0x8
    int curOffset; // r31
    class tVertexOffsetExpression * exp; // r1+0x8
    class tPrimGroupSkinned * pg; // r25
    struct OffsetList * currentList; // r1+0x8
    class Offset offsetToAdd; // r1+0x50

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tVertexOffsetExpression::__RTTI;
}

// Range: 0x8006B658 -> 0x8006B6CC
int compareOffsets(void * el1 /* r1+0x0 */, void * el2 /* r1+0x4 */) {
    // Local variables
    class Offset * off1; // r1+0x0
    class Offset * off2; // r1+0x0
}

static // total size: 0x8
struct {} OffsetListPointerArrayHolder::__RTTI; // size: 0x8, address: 0x80138DD8
static // total size: 0x8
struct {} tExpressionMixer::__RTTI; // size: 0x8, address: 0x80138DE0
static // total size: 0x8
struct {} tVertexOffsetExpressionMixer::__RTTI; // size: 0x8, address: 0x80138DE8
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138DF0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138DF8
static // total size: 0x8
struct {} tVertexOffsetExpressionLoader::__RTTI; // size: 0x8, address: 0x80138E00



