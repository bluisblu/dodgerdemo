/*
    Compile unit: D:\Pure3d\development\p3d\anim\animate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055FB0 -> 0x80057D24
*/
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80133058
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B248
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x80133064
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133070
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
// Range: 0x80055FB0 -> 0x80055FD0
float tAnimation::MakePhysicalFrame(float f /* f1 */, float rangeMin /* r1+0x8 */, float rangeMax /* r1+0xC */) {}

// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Functions
    void SetFrameRange(float minframe, float maxframe);

    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// Range: 0x80055FD0 -> 0x80055FDC
// this: r1+0x0
void tAnimationFrameController::SetFrameRange(float minframe /* r1+0x4 */, float maxframe /* r1+0x8 */) {}

// total size: 0x28
struct {} tFrameController::__vtable; // size: 0x28, address: 0x801038F0
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x40
struct {} tAnimationFrameController::__vtable; // size: 0x40, address: 0x801038B0
// total size: 0x40
struct {} tSimpleFrameController::__vtable; // size: 0x40, address: 0x80103870
// total size: 0x28
class tSimpleFrameController : public tAnimationFrameController {
    // Functions
    tSimpleFrameController();

    ~tSimpleFrameController();

    void SetAnimation(class tAnimation * anim);

    void SetAnimation(class tAnimation * anim, float startFrame);

    class tAnimation * GetAnimation();

    void SetRelativeSpeed(float rs);

    float GetRelativeSpeed();

    void SetFrame(float f);

    float GetFrame();

    void Advance(float deltaTime, unsigned char update);

    void Reset();

    unsigned char LastFrameReached();

    // Members
protected:
    class tAnimation * animation; // offset 0x18, size 0x4
    float frame; // offset 0x1C, size 0x4
    float relativeSpeed; // offset 0x20, size 0x4
};
// Range: 0x80056040 -> 0x800560B8
// this: r31
tSimpleFrameController::tSimpleFrameController() {
    // References
    // -> struct [anonymous] tSimpleFrameController::__vtable;
    // -> struct [anonymous] tAnimationFrameController::__vtable;
    // -> struct [anonymous] tFrameController::__vtable;
}

// Range: 0x8005612C -> 0x800561CC
// this: r30
tSimpleFrameController::~tSimpleFrameController() {
    // References
    // -> struct [anonymous] tFrameController::__vtable;
    // -> struct [anonymous] tAnimationFrameController::__vtable;
    // -> struct [anonymous] tSimpleFrameController::__vtable;
}

// Range: 0x800561CC -> 0x8005622C
// this: r30
void tSimpleFrameController::SetAnimation(class tAnimation * anim /* r31 */) {}

// Range: 0x8005622C -> 0x80056294
// this: r30
void tSimpleFrameController::SetAnimation(class tAnimation * anim /* r31 */, float startFrame /* f31 */) {}

// Range: 0x80056294 -> 0x8005629C
// this: r3
class tAnimation * tSimpleFrameController::GetAnimation() {}

// Range: 0x8005629C -> 0x800562A4
// this: r1+0x0
void tSimpleFrameController::SetRelativeSpeed(float rs /* r1+0x4 */) {}

// Range: 0x800562A4 -> 0x800562AC
// this: r1+0x0
float tSimpleFrameController::GetRelativeSpeed() {}

// Range: 0x800562AC -> 0x8005639C
// this: r31
void tSimpleFrameController::SetFrame(float f /* f1 */) {}

// Range: 0x8005639C -> 0x800563A4
// this: r1+0x0
float tSimpleFrameController::GetFrame() {}

// Range: 0x800563A4 -> 0x80056434
// this: r30
void tSimpleFrameController::Advance(float deltaTime /* r1+0xC */, unsigned char update /* r31 */) {
    // Local variables
    float deltaFrame; // f1
}

// Range: 0x80056434 -> 0x80056490
// this: r31
void tSimpleFrameController::Reset() {}

// Range: 0x80056490 -> 0x800564FC
// this: r1+0x8
unsigned char tSimpleFrameController::LastFrameReached() {}

// total size: 0x50
struct {} tBlendFrameController::__vtable; // size: 0x50, address: 0x801037E4
// total size: 0xC0
class tBlendFrameController : public tAnimationFrameController {
    // Functions
    tBlendFrameController();

    tBlendFrameController(class tBlendFrameController * c);

    ~tBlendFrameController();

    void SetAnimation(class tAnimation * anim);

    void SetAnimation(class tAnimation * anim, float startframe);

    void SetAnimation(class tAnimation * anim, float startFrame, float blendFrames);

    class tAnimation * GetAnimation();

    void SetFrame(float f);

    float GetFrame();

    void Advance(float deltaTime, unsigned char update);

    void Update();

    void RemoveOldestAnim();

    void Reset();

    unsigned char LastFrameReached();

    // Members
protected:
    float relativeSpeed; // offset 0x18, size 0x4
    int nAnim; // offset 0x1C, size 0x4
    class PlayInfo playInfo[5]; // offset 0x20, size 0xA0
};
// Range: 0x800564FC -> 0x800565A4
// this: r1+0x8
tBlendFrameController::tBlendFrameController() {
    // References
    // -> struct [anonymous] tBlendFrameController::__vtable;
    // -> struct [anonymous] tAnimationFrameController::__vtable;
    // -> struct [anonymous] tFrameController::__vtable;
}

// Range: 0x800565A4 -> 0x8005666C
// this: r1+0x8
tBlendFrameController::tBlendFrameController(class tBlendFrameController * c /* r30 */) {
    // References
    // -> struct [anonymous] tBlendFrameController::__vtable;
    // -> struct [anonymous] tAnimationFrameController::__vtable;
    // -> struct [anonymous] tFrameController::__vtable;
}

// Range: 0x8005666C -> 0x8005670C
// this: r30
tBlendFrameController::~tBlendFrameController() {
    // References
    // -> struct [anonymous] tFrameController::__vtable;
    // -> struct [anonymous] tAnimationFrameController::__vtable;
    // -> struct [anonymous] tBlendFrameController::__vtable;
}

// Range: 0x8005670C -> 0x800567B0
// this: r29
void tBlendFrameController::SetAnimation(class tAnimation * anim /* r4 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800567B0 -> 0x80056860
// this: r29
void tBlendFrameController::SetAnimation(class tAnimation * anim /* r4 */, float startframe /* f31 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80056860 -> 0x80056A3C
// this: r31
void tBlendFrameController::SetAnimation(class tAnimation * anim /* r30 */, float startFrame /* f29 */, float blendFrames /* f30 */) {}

// Range: 0x80056A3C -> 0x80056A64
// this: r1+0x0
class tAnimation * tBlendFrameController::GetAnimation() {}

// Range: 0x80056A64 -> 0x80056B60
// this: r1+0x8
void tBlendFrameController::SetFrame(float f /* f1 */) {
    // Local variables
    class PlayInfo * pi; // r31
}

// Range: 0x80056B60 -> 0x80056B80
// this: r1+0x0
float tBlendFrameController::GetFrame() {}

// Range: 0x80056B80 -> 0x80056E74
// this: r30
void tBlendFrameController::Advance(float deltaTime /* f30 */, unsigned char update /* r31 */) {
    // Local variables
    int activeAnims; // r27
    int i; // r26
    float deltaFrame; // r1+0x8
}

// Range: 0x80056E74 -> 0x80056ECC
// this: r3
void tBlendFrameController::Update() {}

// Range: 0x80056ECC -> 0x80056F90
// this: r31
void tBlendFrameController::RemoveOldestAnim() {
    // Local variables
    int i; // r5
}

// total size: 0x20
class PlayInfo {
    // Functions
    PlayInfo();

    ~PlayInfo();

    void SetAnimation(class tAnimation * newAnim, float minframe, float maxframe);

    void NullAnimation();

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
// Range: 0x80056F90 -> 0x80056FB8
// this: r3
PlayInfo::PlayInfo() {}

// Range: 0x80056FB8 -> 0x8005701C
// this: r30
PlayInfo::~PlayInfo() {}

// Range: 0x8005701C -> 0x80057094
// this: r30
void PlayInfo::SetAnimation(class tAnimation * newAnim /* r31 */, float minframe /* f30 */, float maxframe /* f31 */) {}

// Range: 0x80057094 -> 0x800570A0
// this: r1+0x0
void PlayInfo::NullAnimation() {}

// Range: 0x800570A0 -> 0x8005714C
// this: r3
void tBlendFrameController::Reset() {
    // Local variables
    int a; // r29
}

// Range: 0x8005714C -> 0x800571C4
// this: r1+0x8
unsigned char tBlendFrameController::LastFrameReached() {
    // Local variables
    class tAnimation * anim; // r1+0x8
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x24
struct {} tFrameControllerLoader::__vtable; // size: 0x24, address: 0x80103710
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tFrameControllerLoader : public tSimpleChunkHandler {
    // Functions
    tFrameControllerLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);
};
// ERROR: Failed to emit tag 33A817 (GlobalSubroutine)
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
// Range: 0x80057220 -> 0x80057334
// this: r28
class tEntity * tFrameControllerLoader::LoadObject(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */) {
    // Local variables
    char buffer[256]; // r1+0x14
    unsigned int type; // r31
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
// Range: 0x80057334 -> 0x80057370
unsigned char tFrameControllerLoader::CheckFC(unsigned int t /* r1+0x4 */) {}

// total size: 0xC
struct {} tSafeEntityCaster<tVectorCamera>::__vtable; // size: 0xC, address: 0x80103650
// total size: 0xC
struct {} tSafeEntityCaster<tCameraAnimation>::__vtable; // size: 0xC, address: 0x80103614
// total size: 0xC
struct {} tSafeEntityCaster<tExpressionMixer>::__vtable; // size: 0xC, address: 0x801035D8
// total size: 0xC
struct {} tSafeEntityCaster<tExpressionAnimation>::__vtable; // size: 0xC, address: 0x8010359C
// total size: 0xC
struct {} tSafeEntityCaster<tLightAnimation>::__vtable; // size: 0xC, address: 0x80103528
// total size: 0xC
struct {} tSafeEntityCaster<tPolySkin>::__vtable; // size: 0xC, address: 0x801034EC
// total size: 0xC
struct {} tSafeEntityCaster<tPoseAnimation>::__vtable; // size: 0xC, address: 0x801034B4
// total size: 0xC
struct {} tSafeEntityCaster<tCompoundMesh>::__vtable; // size: 0xC, address: 0x80103478
// total size: 0xC
struct {} tSafeEntityCaster<tVisibilityAnimation>::__vtable; // size: 0xC, address: 0x801033FC
// total size: 0xC
struct {} tSafeEntityCaster<Scenegraph::Scenegraph>::__vtable; // size: 0xC, address: 0x801033BC
// total size: 0xC
struct {} tSafeEntityCaster<tTextureAnimation>::__vtable; // size: 0xC, address: 0x80103378
// total size: 0xC
struct {} tSafeEntityCaster<tEffect>::__vtable; // size: 0xC, address: 0x80103338
enum p3dFrameControllerType {
    P3D_FC_UNDEFINED = 0,
    P3D_FC_CAMERA = 1,
    P3D_FC_EXPRESSION = 2,
    P3D_FC_LIGHT = 3,
    P3D_FC_POLYSKIN = 4,
    P3D_FC_COMPOUNDMESH = 5,
    P3D_FC_VISIBILITY = 6,
    P3D_FC_DEFORMPOLYSKIN = 7,
    P3D_FC_TEXTURE = 8,
    P3D_FC_SCENEGRAPHTRANSFORM = 9,
    P3D_FC_HSPLINEOFFSETABSOLUTE = 10,
    P3D_FC_HSPLINEOFFSETRELATIVE = 11,
    P3D_FC_HSPLINESKIN = 12,
    P3D_FC_EFFECT = 13,
    P3D_FC_COMPOSITEDRAWABLE = 14,
    P3D_FC_COMPOSITEDRAWABLEVISIBILITY = 15,
};
// total size: 0xF0
class tCamera : public tEntity {
    // Members
protected:
    float fov; // offset 0x10, size 0x4
    float aspect; // offset 0x14, size 0x4
    float nearPlane; // offset 0x18, size 0x4
    float farPlane; // offset 0x1C, size 0x4
    float fovScaleX; // offset 0x20, size 0x4
    float fovScaleY; // offset 0x24, size 0x4
    float leftPlane[4]; // offset 0x28, size 0x10
    float rightPlane[4]; // offset 0x38, size 0x10
    float upPlane[4]; // offset 0x48, size 0x10
    float downPlane[4]; // offset 0x58, size 0x10
    class Matrix worldToCamera; // offset 0x68, size 0x40
    class Matrix cameraToWorld; // offset 0xA8, size 0x40
    unsigned char updated; // offset 0xE8, size 0x1
};
// total size: 0x118
class tVectorCamera : public tCamera {
    // Members
protected:
    class Vector position; // offset 0xF0, size 0xC
    class Vector direction; // offset 0xFC, size 0xC
    class Vector up; // offset 0x108, size 0xC
};
// total size: 0xC8
class tCameraAnimationController : public tBlendFrameController {
    // Members
protected:
    class tVectorCamera * mCamera; // offset 0xC0, size 0x4
};
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x30
class tCameraAnimation : public tAnimation {
    // Members
    class tVectorChannel * mPosition; // offset 0x20, size 0x4
    class tVectorChannel * mLook; // offset 0x24, size 0x4
    class tVectorChannel * mUp; // offset 0x28, size 0x4
    class tVectorChannel * mFOV; // offset 0x2C, size 0x4
};
enum p3dExpressionStage {
    P3D_EXPRESSION_STAGE_1 = 0,
    P3D_EXPRESSION_STAGE_2 = 1,
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
// total size: 0xD0
class tExpressionAnimationController : public tBlendFrameController {
    // Members
protected:
    class tExpressionMixer * mixer; // offset 0xC0, size 0x4
    float * expStateAccumulator; // offset 0xC4, size 0x4
    float * expWeightAccumulator; // offset 0xC8, size 0x4
};
// total size: 0xC
class tTimeIndex {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
};
// total size: 0xC
class tDynamicVectorChannel : public tVectorChannel {
    // Members
protected:
    int nKey; // offset 0x4, size 0x4
    class tTimeIndex * timeIndex; // offset 0x8, size 0x4
};
// total size: 0x8
struct tKey2DOF {
    // Members
    float v[2]; // offset 0x0, size 0x8
};
// total size: 0x14
class tExpressionAnimChannel : public tDynamicVectorChannel {
    // Members
protected:
    char * expression; // offset 0xC, size 0x4
    struct tKey2DOF * key; // offset 0x10, size 0x4
};
// total size: 0x28
class tExpressionAnimation : public tAnimation {
    // Members
protected:
    int nChannel; // offset 0x20, size 0x4
    class tExpressionAnimChannel * * channel; // offset 0x24, size 0x4
};
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
};
enum tLightType {
    Invalid = -1,
    Ambient = 0,
    Point = 1,
    Directional = 2,
};
// total size: 0xC8
class tLightAnimationController : public tBlendFrameController {
    // Members
protected:
    class tLight * mLight; // offset 0xC0, size 0x4
    enum tLightType mLightType; // offset 0xC4, size 0x4
};
// total size: 0x14
class tColourChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    int nKey; // offset 0x8, size 0x4
    class tTimeIndex * timeIndex; // offset 0xC, size 0x4
    struct pddiColour * key; // offset 0x10, size 0x4
};
// total size: 0x30
class tLightAnimation : public tAnimation {
    // Members
    class tColourChannel * mColour; // offset 0x20, size 0x4
    class tVectorChannel * mParam; // offset 0x24, size 0x4
    class tVectorChannel * mEnable; // offset 0x28, size 0x4
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
// total size: 0x10
class tDrawable : public tEntity {};
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
// total size: 0xC8
class tPoseAnimationController : public tBlendFrameController {
    // Members
protected:
    class tPose * pose; // offset 0xC0, size 0x4
};
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
    // Members
protected:
    int nNode; // offset 0x20, size 0x4
    class SceneNode * node; // offset 0x24, size 0x4
    struct tBox3D boundingBox; // offset 0x28, size 0x18
    struct tSphere boundingSphere; // offset 0x40, size 0x10
};
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xC
class DrawableElement : public DisplayListDrawable {
    // Members
protected:
    unsigned char visible; // offset 0x4, size 0x1
    unsigned char isTranslucent; // offset 0x5, size 0x1
    class tPose * pose; // offset 0x8, size 0x4
};
// total size: 0x10
class DisplayList {
    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
};
// total size: 0x68
class tCompositeDrawable : public tDrawablePose {
    // Members
    struct tBox3D boundingBox; // offset 0x20, size 0x18
    struct tSphere boundingSphere; // offset 0x38, size 0x10
    int elementArraySize; // offset 0x48, size 0x4
    int nElements; // offset 0x4C, size 0x4
    class DrawableElement * * elements; // offset 0x50, size 0x4
    class DisplayList translucentObjects; // offset 0x54, size 0x10
};
// total size: 0x20
class tVisibilityChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned long long nodeUID; // offset 0x8, size 0x8
    unsigned char bStartState; // offset 0x10, size 0x1
    unsigned int nFrames; // offset 0x14, size 0x4
    unsigned int * frames; // offset 0x18, size 0x4
};
// total size: 0x30
class tVisibilityAnimation : public tAnimation {
    // Members
    unsigned long long uidScene; // offset 0x20, size 0x8
    unsigned int nChannels; // offset 0x28, size 0x4
    class tVisibilityChannel * animChannels; // offset 0x2C, size 0x4
};
enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// total size: 0x18
class Node : public tEntity {
    // Members
protected:
    class Node * parent; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0x28
class Scenegraph : public tDrawable {
    // Members
protected:
    class Node * root; // offset 0x10, size 0x4
    class DisplayList translucentDrawables; // offset 0x14, size 0x10
};
// total size: 0x28
class Branch : public Node {
    // Members
protected:
    int nChildren; // offset 0x18, size 0x4
    int allocatedChildren; // offset 0x1C, size 0x4
    class Node * * children; // offset 0x20, size 0x4
};
// total size: 0x30
class Visibility : public Branch {
    // Members
protected:
    unsigned char isVisible; // offset 0x28, size 0x1
};
// total size: 0x30
class tVisibilityAnimationController : public tSimpleFrameController {
    // Members
protected:
    class Scenegraph * pScene; // offset 0x28, size 0x4
    class Visibility * * visNodes; // offset 0x2C, size 0x4
};
// total size: 0x30
class tCompDrawVisibilityAnimationController : public tSimpleFrameController {
    // Members
protected:
    class tCompositeDrawable * pCompDraw; // offset 0x28, size 0x4
    class DrawableElement * * visNodes; // offset 0x2C, size 0x4
};
// total size: 0x30
class tTextureAnimationController : public tSimpleFrameController {
    // Members
protected:
    class tShader * mShader; // offset 0x28, size 0x4
};
// total size: 0xC
class tEntityChannel {
    // Members
public:
    int nKey; // offset 0x0, size 0x4
    class tTimeIndex * timeIndex; // offset 0x4, size 0x4
    class tEntity * * key; // offset 0x8, size 0x4
};
// total size: 0x28
class tTextureAnimation : public tAnimation {
    // Members
    class tEntityChannel * mTextures; // offset 0x20, size 0x4
    class tShader * mDefaultShader; // offset 0x24, size 0x4
};
// total size: 0x10
class tEffect : public tDrawable {};
// total size: 0x28
class tEffectController : public tAnimationFrameController {
    // Members
protected:
    class tEffect * effect; // offset 0x18, size 0x4
    float relativeSpeed; // offset 0x1C, size 0x4
    float accumulatedTime; // offset 0x20, size 0x4
};
// ERROR: Failed to emit tag 351C7C (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138428
static // total size: 0x8
struct {} tSafeEntityCaster<tEffect>::__RTTI; // size: 0x8, address: 0x80138430
static // total size: 0x8
struct {} tSafeEntityCaster<tTextureAnimation>::__RTTI; // size: 0x8, address: 0x80138438
static // total size: 0x8
struct {} tSafeEntityCaster<Scenegraph::Scenegraph>::__RTTI; // size: 0x8, address: 0x80138440
static // total size: 0x8
struct {} tSafeEntityCaster<tVisibilityAnimation>::__RTTI; // size: 0x8, address: 0x80138448
static // total size: 0x8
struct {} tSafeEntityCaster<tCompoundMesh>::__RTTI; // size: 0x8, address: 0x80138450
static // total size: 0x8
struct {} tSafeEntityCaster<tPoseAnimation>::__RTTI; // size: 0x8, address: 0x80138458
static // total size: 0x8
struct {} tSafeEntityCaster<tPolySkin>::__RTTI; // size: 0x8, address: 0x80138460
static // total size: 0x8
struct {} tSafeEntityCaster<tLightAnimation>::__RTTI; // size: 0x8, address: 0x80138468
static // total size: 0x8
struct {} tSafeEntityCaster<tExpressionAnimation>::__RTTI; // size: 0x8, address: 0x80138470
static // total size: 0x8
struct {} tSafeEntityCaster<tExpressionMixer>::__RTTI; // size: 0x8, address: 0x80138478
static // total size: 0x8
struct {} tSafeEntityCaster<tCameraAnimation>::__RTTI; // size: 0x8, address: 0x80138480
static // total size: 0x8
struct {} tSafeEntityCaster<tVectorCamera>::__RTTI; // size: 0x8, address: 0x80138488
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138490
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801384A0
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801384A8
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801384B0
static // total size: 0x8
struct {} tFrameControllerLoader::__RTTI; // size: 0x8, address: 0x801384B8
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801384C0
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801384C8
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x801384D0
static // total size: 0x8
struct {} tSimpleFrameController::__RTTI; // size: 0x8, address: 0x801384D8
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x801384E8
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x801384F0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x801384F8
static // total size: 0x8
struct {} tTextureAnimation::__RTTI; // size: 0x8, address: 0x80138500
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80138508
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80138510
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} Scenegraph::Scenegraph::__RTTI; // size: 0x8, address: 0x80138518
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tVisibilityAnimation::__RTTI; // size: 0x8, address: 0x80138520
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tCompoundMesh::__RTTI; // size: 0x8, address: 0x80138528
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPoseAnimation::__RTTI; // size: 0x8, address: 0x80138530
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPolySkin::__RTTI; // size: 0x8, address: 0x80138538
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tLightAnimation::__RTTI; // size: 0x8, address: 0x80138540
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tExpressionAnimation::__RTTI; // size: 0x8, address: 0x80138548
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tExpressionMixer::__RTTI; // size: 0x8, address: 0x80138550
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tCameraAnimation::__RTTI; // size: 0x8, address: 0x80138558
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x80138568
static // total size: 0x8
struct {} tVectorCamera::__RTTI; // size: 0x8, address: 0x80138570
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



