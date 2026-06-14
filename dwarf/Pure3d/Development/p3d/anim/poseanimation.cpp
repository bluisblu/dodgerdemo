/*
    Compile unit: D:\Pure3d\development\p3d\anim\poseanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80062634 -> 0x80063A58
*/
// total size: 0x28
struct {} tPoseAnimation::__vtable; // size: 0x28, address: 0x8010609C
// total size: 0x28
struct {} tPoseAnimationConcrete::__vtable; // size: 0x28, address: 0x80106028
// total size: 0x30
class tPoseAnimationConcrete : public tPoseAnimation {
    // Functions
    ~tPoseAnimationConcrete();

    unsigned char HasRotationChannel(int c) const;

    unsigned char HasTranslationChannel(int c) const;

    void GetRotationChannelEuler(int c, float frame, class Vector * v);

    void GetRotationChannelQuaternion(int c, float frame, class Quaternion * v);

    void GetRotationChannelMatrix(int c, float frame, class Matrix * m);

    void GetTranslationChannelValue(int c, float frame, float * v);

    // Members
protected:
    int nJoint; // offset 0x20, size 0x4
    class tRotationChannel * * rotation; // offset 0x24, size 0x4
    class tVectorChannel * * translation; // offset 0x28, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
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
// total size: 0x18
class tSkeleton : public tEntity {
    // Members
protected:
    int nJoint; // offset 0x10, size 0x4
    class Joint * joint; // offset 0x14, size 0x4
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
// total size: 0x20
class tPoseAnimation : public tAnimation {};
// ERROR: Failed to emit tag 3E8C82 (GlobalSubroutine)
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class tRotationChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x8006275C -> 0x8006279C
// this: r1+0x0
unsigned char tPoseAnimationConcrete::HasRotationChannel(int c /* r1+0x4 */) const {}

// Range: 0x8006279C -> 0x800627D4
// this: r1+0x0
unsigned char tPoseAnimationConcrete::HasTranslationChannel(int c /* r1+0x4 */) const {}

// Range: 0x800627D4 -> 0x80062818
// this: r1+0x8
void tPoseAnimationConcrete::GetRotationChannelEuler(int c /* r1+0xC */, float frame /* f1 */, class Vector * v /* r5 */) {}

// Range: 0x80062818 -> 0x8006285C
// this: r1+0x8
void tPoseAnimationConcrete::GetRotationChannelQuaternion(int c /* r1+0xC */, float frame /* f1 */, class Quaternion * v /* r5 */) {}

// Range: 0x8006285C -> 0x800628A0
// this: r1+0x8
void tPoseAnimationConcrete::GetRotationChannelMatrix(int c /* r1+0xC */, float frame /* f1 */, class Matrix * m /* r5 */) {}

// Range: 0x800628A0 -> 0x800628E4
// this: r1+0x8
void tPoseAnimationConcrete::GetTranslationChannelValue(int c /* r1+0xC */, float frame /* f1 */, float * v /* r5 */) {}

// total size: 0x28
struct {} tPoseAnimationMirrored::__vtable; // size: 0x28, address: 0x80105FC4
// total size: 0x28
class tPoseAnimationMirrored : public tPoseAnimation {
    // Functions
    ~tPoseAnimationMirrored();

    int GetNumJoint() const;

    unsigned char HasRotationChannel(int c) const;

    unsigned char HasTranslationChannel(int c) const;

    void GetRotationChannelEuler(int c, float frame, class Vector * v);

    void GetRotationChannelQuaternion(int c, float frame, class Quaternion * v);

    void GetRotationChannelMatrix(int c, float frame, class Matrix * m);

    void GetTranslationChannelValue(int c, float frame, float * v);

    // Members
protected:
    class tPoseAnimationConcrete * m_sourcePoseAnimation; // offset 0x20, size 0x4
    class tSkeleton * m_skeleton; // offset 0x24, size 0x4
};
// ERROR: Failed to emit tag 3EA2AB (GlobalSubroutine)
// Range: 0x8006297C -> 0x80062988
// this: r1+0x0
int tPoseAnimationMirrored::GetNumJoint() const {}

// Range: 0x80062988 -> 0x800629B8
// this: r3
unsigned char tPoseAnimationMirrored::HasRotationChannel(int c /* r4 */) const {}

// Range: 0x800629B8 -> 0x800629E8
// this: r3
unsigned char tPoseAnimationMirrored::HasTranslationChannel(int c /* r4 */) const {}

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
// Range: 0x800629E8 -> 0x80062B74
// this: r28
void tPoseAnimationMirrored::GetRotationChannelEuler(int c /* r1+0xC */, float frame /* f1 */, class Vector * v /* r29 */) {
    // Local variables
    long c_mapped; // r30
    float x_AxisMap; // f30
    float y_AxisMap; // f29
    float z_AxisMap; // f31
    class Vector tmp; // r1+0x74
}

// Range: 0x80062B74 -> 0x80062BDC
// this: r3
void tPoseAnimationMirrored::GetRotationChannelQuaternion(int c /* r4 */, float frame /* f1 */, class Quaternion * v /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x18
}

// Range: 0x80062BDC -> 0x80062C44
// this: r3
void tPoseAnimationMirrored::GetRotationChannelMatrix(int c /* r4 */, float frame /* f1 */, class Matrix * m /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x18
}

// Range: 0x80062C44 -> 0x80062D6C
// this: r29
void tPoseAnimationMirrored::GetTranslationChannelValue(int c /* r1+0xC */, float frame /* f1 */, float * v /* r30 */) {
    // Local variables
    long c_mapped; // r31
}

// total size: 0x50
struct {} tPoseAnimationController::__vtable; // size: 0x50, address: 0x80105F38
// total size: 0xC8
class tPoseAnimationController : public tBlendFrameController {
    // Functions
    tPoseAnimationController();

    ~tPoseAnimationController();

    class tFrameController * Clone();

    void SetPose(class tPose * p);

    void UpdateNoBlending();

    void UpdateWithBlending();

    // Members
protected:
    class tPose * pose; // offset 0xC0, size 0x4
};
// Range: 0x80062D6C -> 0x80062DB0
// this: r31
tPoseAnimationController::tPoseAnimationController() {
    // References
    // -> struct [anonymous] tPoseAnimationController::__vtable;
}

// Range: 0x80062DB0 -> 0x80062E24
// this: r30
tPoseAnimationController::~tPoseAnimationController() {
    // References
    // -> struct [anonymous] tPoseAnimationController::__vtable;
}

// Range: 0x80062E24 -> 0x80062EEC
// this: r30
class tFrameController * tPoseAnimationController::Clone() {
    // References
    // -> struct [anonymous] tPoseAnimationController::__vtable;
}

// Range: 0x80062EEC -> 0x80062F44
// this: r30
void tPoseAnimationController::SetPose(class tPose * p /* r31 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138A68
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138A78
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138A80
static // total size: 0x8
struct {} tPoseAnimation::__RTTI; // size: 0x8, address: 0x80138A88
// Range: 0x80062F44 -> 0x80062F8C
unsigned char tPoseAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // Local variables
    class tPoseAnimation * poseAnimation; // r1+0x8

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tPoseAnimation::__RTTI;
}

// Range: 0x80062F8C -> 0x80063158
// this: r24
void tPoseAnimationController::UpdateNoBlending() {
    // Local variables
    class tPoseAnimation * anim; // r26
    float frame; // f31
    int i; // r25
    class Joint * joint; // r30
}

// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// Range: 0x80063158 -> 0x800634F0
// this: r27
void tPoseAnimationController::UpdateWithBlending() {
    // Local variables
    int i; // r28
    class Vector vBlend; // r1+0xC4
    class tPoseAnimation * anim; // r25
    float frame; // f1
    int j; // r24
    class Vector v; // r1+0xB8
    float frame; // f1
    class Quaternion qBlend; // r1+0xA8
    class tPoseAnimation * anim; // r24
    float frame; // f1
    class Joint * skeletonJoint; // r4
    int j; // r24
    float frame; // f1
    class Quaternion q; // r1+0x98
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tPoseAnimationLoader::__vtable; // size: 0x1C, address: 0x80105E24
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tPoseAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tPoseAnimationLoader();
};
// ERROR: Failed to emit tag 3EEA06 (GlobalSubroutine)
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
struct {} tRotationChannelLoader::__vtable; // size: 0xC, address: 0x80104060
// total size: 0x4
class tVectorChannelLoader {
    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// total size: 0x8
class tRotationChannelLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int poseIndex; // offset 0x4, size 0x4
};
// ERROR: Failed to emit tag 3F073A (GlobalSubroutine)
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
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138A90
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138A98
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138AA0
static // total size: 0x8
struct {} tPoseAnimationLoader::__RTTI; // size: 0x8, address: 0x80138AA8
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138AB0
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138AB8
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x80138AC0
static // total size: 0x8
struct {} tPoseAnimationController::__RTTI; // size: 0x8, address: 0x80138AC8
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x20
class PlayInfo {
    // Members
    float currentFrame; // offset 0x0, size 0x4
    float blendFrames; // offset 0x4, size 0x4
    float ooBlendFrames; // offset 0x8, size 0x4
    float accumDelta; // offset 0xC, size 0x4
    float t; // offset 0x10, size 0x4
    float minFrame; // offset 0x14, size 0x4
    float maxFrame; // offset 0x18, size 0x4
    class tAnimation * anim; // offset 0x1C, size 0x4
};
// total size: 0xC0
class tBlendFrameController : public tAnimationFrameController {
    // Members
protected:
    float relativeSpeed; // offset 0x18, size 0x4
    int nAnim; // offset 0x1C, size 0x4
    class PlayInfo playInfo[5]; // offset 0x20, size 0xA0
};
static // total size: 0x8
struct {} tPoseAnimationMirrored::__RTTI; // size: 0x8, address: 0x80138AD0
static // total size: 0x8
struct {} tPoseAnimationConcrete::__RTTI; // size: 0x8, address: 0x80138AD8
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



