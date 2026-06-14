/*
    Compile unit: D:\Pure3d\development\p3d\anim\poseexpression.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80063B58 -> 0x80064588
*/
// total size: 0x28
struct {} tPoseExpressionMixer::__vtable; // size: 0x28, address: 0x80106270
// total size: 0x0
class tSkeleton {};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
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
// total size: 0x48
class tPoseExpressionMixer : public tExpressionMixer {
    // Functions
    tPoseExpressionMixer();

    ~tPoseExpressionMixer();

    void SetTarget(class tEntity * t);

    unsigned char ValidateTarget(class tEntity * e);

    void Update();

    void ResetTarget();

    void ResetAccumulators();

    void UpdatePose();

    // Members
protected:
    class tDrawablePose * dPose; // offset 0x20, size 0x4
    class tPose * pose; // offset 0x24, size 0x4
    int * expCnt[2]; // offset 0x28, size 0x8
    class Vector * translationAccumulator[2]; // offset 0x30, size 0x8
    class Quaternion * rotationAccumulator[2]; // offset 0x38, size 0x8
    float * weightAccumulator[2]; // offset 0x40, size 0x8
};
// Range: 0x80063B58 -> 0x80063BC0
// this: r31
tPoseExpressionMixer::tPoseExpressionMixer() {
    // References
    // -> struct [anonymous] tPoseExpressionMixer::__vtable;
}

// Range: 0x80063BC0 -> 0x80063CE4
// this: r31
tPoseExpressionMixer::~tPoseExpressionMixer() {
    // Local variables
    int i; // r29

    // References
    // -> struct [anonymous] tPoseExpressionMixer::__vtable;
}

// Range: 0x80063CE4 -> 0x80063E84
// this: r30
void tPoseExpressionMixer::SetTarget(class tEntity * t /* r22 */) {
    // Local variables
    class tDrawablePose * dp; // r1+0x8
    class tPose * p; // r1+0x8
    int nJoint; // r1+0x8
    int i; // r31
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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138AE0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138AF0
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138AF8
static // total size: 0x8
struct {} tPoseAnimation::__RTTI; // size: 0x8, address: 0x80138B00
// Range: 0x80063E84 -> 0x80063EFC
unsigned char tPoseExpressionMixer::ValidateExpressionGroup(class tExpressionGroup * eg /* r27 */) {
    // Local variables
    unsigned char allExpsValid; // r29
    int i; // r28
    class tAnimation * anim; // r3

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tPoseAnimation::__RTTI;
}

static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80138B08
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138B10
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80138B18
// ERROR: Failed to emit tag 3FE1C7 (GlobalSubroutine)
// total size: 0x20
class tPoseAnimation : public tAnimation {};
enum p3dExpressionStage {
    P3D_EXPRESSION_STAGE_1 = 0,
    P3D_EXPRESSION_STAGE_2 = 1,
};
// Range: 0x80064024 -> 0x800642CC
// this: r23
void tPoseExpressionMixer::Update() {
    // Local variables
    int i; // r26
    float currentState; // f31
    float currentWeight; // f30
    class tPoseAnimation * currExpression; // r25
    enum p3dExpressionStage stage; // r3
    float * stageWeight; // r6
    class Vector * stageTranslation; // r1+0x8
    class Quaternion * stageRotation; // r7
    int j; // r24
    unsigned char tchannel; // r1+0x8
    unsigned char rchannel; // r1+0x8
    class Vector v; // r1+0x4C
    class Quaternion q; // r1+0x3C
    float totalWeight; // f28
}

// Range: 0x800642CC -> 0x800642F8
// this: r1+0x8
void tPoseExpressionMixer::ResetTarget() {}

// Range: 0x800642F8 -> 0x800643AC
// this: r24
void tPoseExpressionMixer::ResetAccumulators() {
    // Local variables
    int j; // r26
    int i; // r25
}

// Range: 0x800643AC -> 0x80064588
// this: r26
void tPoseExpressionMixer::UpdatePose() {
    // Local variables
    class Quaternion IdentQuat; // r1+0x50
    int j; // r27
    class Vector v; // r1+0x44
    class Quaternion q; // r1+0x34
    int i; // r24
    float totalWeight; // r1+0x8
    class Matrix * m; // r24
}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138B20
static // total size: 0x8
struct {} tExpressionMixer::__RTTI; // size: 0x8, address: 0x80138B28
static // total size: 0x8
struct {} tPoseExpressionMixer::__RTTI; // size: 0x8, address: 0x80138B30
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



