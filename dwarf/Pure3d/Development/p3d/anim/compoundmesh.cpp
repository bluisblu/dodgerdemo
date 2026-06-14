/*
    Compile unit: D:\Pure3d\development\p3d\anim\compoundmesh.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005B898 -> 0x8005C254
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0xC
struct {} tPosable::__vtable; // size: 0xC, address: 0x801045D4
// total size: 0x3C
struct {} tDrawablePose::__vtable; // size: 0x3C, address: 0x80104A68
// total size: 0x3C
struct {} tCompoundMesh::__vtable; // size: 0x3C, address: 0x80104598
// total size: 0x18
class SceneNode {
    // Members
public:
    unsigned long long uid; // offset 0x0, size 0x8
    int poseIndex; // offset 0x8, size 0x4
    class tDrawable * drawable; // offset 0xC, size 0x4
    unsigned char visible; // offset 0x10, size 0x1
};
// total size: 0x50
class tCompoundMesh : public tDrawablePose {
    // Functions
    ~tCompoundMesh();

    void Display(class tPose * pose);

    // Members
protected:
    int nNode; // offset 0x20, size 0x4
    class SceneNode * node; // offset 0x24, size 0x4
    struct tBox3D boundingBox; // offset 0x28, size 0x18
    struct tSphere boundingSphere; // offset 0x40, size 0x10
};
// Range: 0x8005B898 -> 0x8005B960
// this: r26
tCompoundMesh::~tCompoundMesh() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] tCompoundMesh::__vtable;
}

// Range: 0x8005B960 -> 0x8005BA74
// this: r28
void tCompoundMesh::Display(class tPose * pose /* r29 */) {
    // Local variables
    int i; // r30
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tCompoundMeshLoader::__vtable; // size: 0x1C, address: 0x801044CC
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tCompoundMeshLoader : public tSimpleChunkHandler {
    // Functions
    tCompoundMeshLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);
};
// ERROR: Failed to emit tag 3746BE (GlobalSubroutine)
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
// total size: 0xC
struct {} tSafeEntityCaster<tSkeleton>::__vtable; // size: 0xC, address: 0x80104410
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 3793D8 (GlobalSubroutine)
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
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138670
static // total size: 0x8
struct {} tSafeEntityCaster<tSkeleton>::__RTTI; // size: 0x8, address: 0x80138678
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138680
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138690
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138698
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801386A0
static // total size: 0x8
struct {} tCompoundMeshLoader::__RTTI; // size: 0x8, address: 0x801386A8
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x801386B0
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x801386B8
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x801386C0
static // total size: 0x8
struct {} tCompoundMesh::__RTTI; // size: 0x8, address: 0x801386C8
enum Axis {
    AXIS_X = 1,
    AXIS_Y = 2,
    AXIS_Z = 4,
};
// total size: 0x108
class Joint {
    // Members
public:
    unsigned long long uid; // offset 0x0, size 0x8
    int parentIndex; // offset 0x8, size 0x4
    int dof; // offset 0xC, size 0x4
    class Matrix restPose; // offset 0x10, size 0x40
    class Matrix worldMatrix; // offset 0x50, size 0x40
    class Matrix inverseWorldMatrix; // offset 0x90, size 0x40
    enum Axis freeAxes; // offset 0xD0, size 0x4
    enum Axis primaryAxis; // offset 0xD4, size 0x4
    enum Axis secondaryAxis; // offset 0xD8, size 0x4
    enum Axis twistAxis; // offset 0xDC, size 0x4
    long mappedJointIndex; // offset 0xE0, size 0x4
    float xAxisMap; // offset 0xE4, size 0x4
    float yAxisMap; // offset 0xE8, size 0x4
    float zAxisMap; // offset 0xEC, size 0x4
    class Vector restPoseYZXEuler; // offset 0xF0, size 0xC
    unsigned char preserveBoneLengths; // offset 0xFC, size 0x1
    int pad1; // offset 0x100, size 0x4
    int pad2; // offset 0x104, size 0x4
};
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
// total size: 0x18
class tSkeleton : public tEntity {
    // Members
protected:
    int nJoint; // offset 0x10, size 0x4
    class Joint * joint; // offset 0x14, size 0x4
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
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tSkeleton::__RTTI; // size: 0x8, address: 0x801386D0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



