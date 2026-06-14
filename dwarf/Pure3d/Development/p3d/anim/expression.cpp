/*
    Compile unit: D:\Pure3d\development\p3d\anim\expression.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005DFB8 -> 0x8005F27C
*/
// total size: 0xC
struct {} tExpressionPreset::__vtable; // size: 0xC, address: 0x80105118
// total size: 0x20
class tExpressionPreset {
    // Functions
    tExpressionPreset(int nExp);

    ~tExpressionPreset();

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
// Range: 0x8005DFB8 -> 0x8005E094
// this: r30
tExpressionPreset::tExpressionPreset(int nExp /* r1+0xC */) {
    // Local variables
    int i; // r6

    // References
    // -> struct [anonymous] tExpressionPreset::__vtable;
}

// Range: 0x8005E094 -> 0x8005E134
// this: r30
tExpressionPreset::~tExpressionPreset() {
    // References
    // -> struct [anonymous] tExpressionPreset::__vtable;
}

// total size: 0xC
struct {} tExpressionGroup::__vtable; // size: 0xC, address: 0x801050F8
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
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
// total size: 0x30
class tExpressionGroup : public tEntity {
    // Functions
    tExpressionGroup(int nExp, int nPS);

    ~tExpressionGroup();

    class tAnimation * FindExpression(unsigned long long uid, int * expIndex) const;

    // Members
protected:
    int nExpression; // offset 0x10, size 0x4
    class tAnimation * * expression; // offset 0x14, size 0x4
    enum p3dExpressionStage * stage; // offset 0x18, size 0x4
    int nPreset; // offset 0x1C, size 0x4
    class tExpressionPreset * * preset; // offset 0x20, size 0x4
    unsigned long long target; // offset 0x28, size 0x8
};
// Range: 0x8005E134 -> 0x8005E24C
// this: r1+0x8
tExpressionGroup::tExpressionGroup(int nExp /* r28 */, int nPS /* r29 */) {
    // Local variables
    int i; // r5

    // References
    // -> struct [anonymous] tExpressionGroup::__vtable;
}

// Range: 0x8005E24C -> 0x8005E38C
// this: r30
tExpressionGroup::~tExpressionGroup() {
    // Local variables
    int i; // r27

    // References
    // -> struct [anonymous] tExpressionGroup::__vtable;
}

// Range: 0x8005E38C -> 0x8005E3F4
// this: r1+0x0
class tAnimation * tExpressionGroup::FindExpression(unsigned long long uid /* r1+0x8 */, int * expIndex /* r1+0x10 */) const {
    // Local variables
    int i; // r9
}

enum p3dExpressionStage {
    P3D_EXPRESSION_STAGE_1 = 0,
    P3D_EXPRESSION_STAGE_2 = 1,
};
// total size: 0x24
struct {} tExpressionMixer::__vtable; // size: 0x24, address: 0x801050AC
// total size: 0x20
class tExpressionMixer : public tEntity {
    // Functions
    tExpressionMixer();

    ~tExpressionMixer();

    void SetExpressionGroup(class tExpressionGroup * eg);

    void SetExpressionState(unsigned long long uid, float s);

    void SetExpressionWeight(unsigned long long uid, float w);

    void ResetToNeutral();

    // Members
protected:
    class tExpressionGroup * expressionGroup; // offset 0x10, size 0x4
    float * state; // offset 0x14, size 0x4
    float * weight; // offset 0x18, size 0x4
    unsigned char mixerReady; // offset 0x1C, size 0x1
};
// Range: 0x8005E3F4 -> 0x8005E444
// this: r31
tExpressionMixer::tExpressionMixer() {
    // References
    // -> struct [anonymous] tExpressionMixer::__vtable;
}

// Range: 0x8005E444 -> 0x8005E4F0
// this: r30
tExpressionMixer::~tExpressionMixer() {
    // References
    // -> struct [anonymous] tExpressionMixer::__vtable;
}

// Range: 0x8005E4F0 -> 0x8005E6D8
// this: r30
void tExpressionMixer::SetExpressionGroup(class tExpressionGroup * eg /* r29 */) {
    // Local variables
    int nExp; // r1+0x8
    int i; // r3
}

// Range: 0x8005E6D8 -> 0x8005E744
// this: r1+0x0
void tExpressionMixer::SetExpressionState(unsigned long long uid /* r1+0x8 */, float s /* r1+0x10 */) {
    // Local variables
    int expIndex; // r1+0x0
}

// Range: 0x8005E744 -> 0x8005E7B0
// this: r1+0x0
void tExpressionMixer::SetExpressionWeight(unsigned long long uid /* r1+0x8 */, float w /* r1+0x10 */) {
    // Local variables
    int expIndex; // r1+0x0
}

// Range: 0x8005E7B0 -> 0x8005E804
// this: r1+0x0
void tExpressionMixer::ResetToNeutral() {
    // Local variables
    int i; // r6
}

// total size: 0x4
class tExpressionPresetLoader {
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
// Range: 0x8005E804 -> 0x8005EA0C
class tExpressionPreset * tExpressionPresetLoader::Load(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[256]; // r1+0x13C
    unsigned int numExpression; // r31
    unsigned int i; // r24
    char expName[256]; // r1+0x34
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
// total size: 0xC
struct {} tExpressionPresetLoader::__vtable; // size: 0xC, address: 0x80105078
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tExpressionGroupLoader : public tSimpleChunkHandler {
    // Functions
    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    tExpressionGroupLoader();
};
// total size: 0x8
class tFileHandler : public tRefCounted {};
// total size: 0x58
class tP3DFileHandler : public tFileHandler {
    // Members
protected:
    int nLoadSlots; // offset 0x8, size 0x4
    int nLoaders; // offset 0xC, size 0x4
    class tChunkHandler * * loaders; // offset 0x10, size 0x4
    int nExtensions; // offset 0x14, size 0x4
    char extensions[8][8]; // offset 0x18, size 0x40
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// Range: 0x8005EA0C -> 0x8005ECB8
// this: r26
class tEntity * tExpressionGroupLoader::LoadObject(class tChunkFile * f /* r27 */, class tEntityStore * store /* r28 */) {
    // Local variables
    char name[256]; // r1+0x140
    char targetname[256]; // r1+0x3C
    int nExp; // r24
    int nPreset; // r29
    class tExpressionGroup * expressionGroup; // r3
    int i; // r30
    int np; // r1+0x8
    int ne; // r1+0x8
    class tExpressionPresetLoader presetLoader; // r1+0x38
    class tExpressionPreset * preset; // r1+0x8
    class tP3DFileHandler * p3d; // r24
    class tChunkHandler * handler; // r24
    class tExpressionStore * expStore; // r23
    enum tLoadStatus rc; // r1+0x8

    // References
    // -> struct [anonymous] tExpressionPresetLoader::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tExpressionGroupLoader::__vtable; // size: 0x1C, address: 0x80105044
// ERROR: Failed to emit tag 3A2B2B (GlobalSubroutine)
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
// total size: 0x14
struct {} tExpressionGroupLoader::tExpressionStore::__vtable; // size: 0x14, address: 0x80104FCC
// total size: 0x10
class tExpressionStore : public tEntityStore {
    // Functions
    tExpressionStore();

    ~tExpressionStore();

    class tEntity * Find(class tSafeEntityCasterBase & c, unsigned long long uid);

    void Store(class tEntity * obj);

    // Members
protected:
    class tAnimation * * storedExp; // offset 0x8, size 0x4
    class tEntityStore * primaryStore; // offset 0xC, size 0x4
};
// ERROR: Failed to emit tag 3A3AA2 (GlobalSubroutine)
// ERROR: Failed to emit tag 3A3B38 (GlobalSubroutine)
// Range: 0x8005EE04 -> 0x8005EE34
// this: r3
class tEntity * tExpressionStore::Find(class tSafeEntityCasterBase & c /* r4 */, unsigned long long uid /* r5 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138810
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138820
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138828
// Range: 0x8005EE34 -> 0x8005EEA8
// this: r30
void tExpressionStore::Store(class tEntity * obj /* r4 */) {
    // Local variables
    class tAnimation * exp; // r1+0x8

    // References
    // -> static struct [anonymous] tEntity::__RTTI;
    // -> static struct [anonymous] tAnimation::__RTTI;
}

// total size: 0x1C
struct {} tExpressionMixerLoader::__vtable; // size: 0x1C, address: 0x80104F54
// total size: 0x18
class tExpressionMixerLoader : public tSimpleChunkHandler {
    // Functions
    tExpressionMixerLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);
};
// ERROR: Failed to emit tag 3A41AC (GlobalSubroutine)
// total size: 0xC
struct {} tSafeEntityCaster<tExpressionGroup>::__vtable; // size: 0xC, address: 0x80104EAC
enum MixerType {
    Undefined = 0,
    Pose = 1,
    HSplineOffset = 2,
    VertexOffset = 3,
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
// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x48
class tPoseExpressionMixer : public tExpressionMixer {
    // Members
protected:
    class tDrawablePose * dPose; // offset 0x20, size 0x4
    class tPose * pose; // offset 0x24, size 0x4
    int * expCnt[2]; // offset 0x28, size 0x8
    class Vector * translationAccumulator[2]; // offset 0x30, size 0x8
    class Quaternion * rotationAccumulator[2]; // offset 0x38, size 0x8
    float * weightAccumulator[2]; // offset 0x40, size 0x8
};
// total size: 0x0
class tPolySkin {};
// total size: 0x18
class Offset {
    // Members
public:
    class Vector * vertex; // offset 0x0, size 0x4
    int expressionIndex; // offset 0x4, size 0x4
    float keyVal; // offset 0x8, size 0x4
    class Vector offset; // offset 0xC, size 0xC
};
// total size: 0x1C
class OffsetListPointerArrayHolder {
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
// total size: 0x38
class tVertexOffsetExpressionMixer : public tExpressionMixer {
    // Members
protected:
    int * nNumVerticesPerNeutralState; // offset 0x20, size 0x4
    class Vector * * pSkinVertices; // offset 0x24, size 0x4
    class Vector * * pBlendVertices; // offset 0x28, size 0x4
    class tDrawable * drawable; // offset 0x2C, size 0x4
    class OffsetListPointerArrayHolder * pHolder; // offset 0x30, size 0x4
};
// ERROR: Failed to emit tag 3ABD50 (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138830
static // total size: 0x8
struct {} tSafeEntityCaster<tExpressionGroup>::__RTTI; // size: 0x8, address: 0x80138838
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138840
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138848
static // total size: 0x8
struct {} tExpressionMixerLoader::__RTTI; // size: 0x8, address: 0x80138850
static // total size: 0x8
struct {} tEntityStore::__RTTI; // size: 0x8, address: 0x80138858
static // total size: 0x8
struct {} tExpressionGroupLoader::tExpressionStore::__RTTI; // size: 0x8, address: 0x80138860
static // total size: 0x8
struct {} tExpressionGroupLoader::__RTTI; // size: 0x8, address: 0x80138868
static // total size: 0x8
struct {} tExpressionPresetLoader::__RTTI; // size: 0x8, address: 0x80138870
static // total size: 0x8
struct {} tExpressionMixer::__RTTI; // size: 0x8, address: 0x80138878
static // total size: 0x8
struct {} tExpressionGroup::__RTTI; // size: 0x8, address: 0x80138880
static // total size: 0x8
struct {} tExpressionPreset::__RTTI; // size: 0x8, address: 0x80138888
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138890
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80138898
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



