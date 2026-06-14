/*
    Compile unit: D:\Pure3d\development\p3d\anim\expressionanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005F3B8 -> 0x800602AC
*/
// total size: 0x10
struct {} tExpressionAnimChannel::__vtable; // size: 0x10, address: 0x801054C8
// total size: 0x8
struct tKey2DOF {
    // Members
    float v[2]; // offset 0x0, size 0x8
};
// total size: 0x14
class tExpressionAnimChannel : public tDynamicVectorChannel {
    // Functions
    ~tExpressionAnimChannel();

    void GetValue(float frame, float * v);

    // Members
protected:
    char * expression; // offset 0xC, size 0x4
    struct tKey2DOF * key; // offset 0x10, size 0x4
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
// ERROR: Failed to emit tag 3AE1DA (GlobalSubroutine)
// Range: 0x8005F478 -> 0x8005F584
// this: r29
void tExpressionAnimChannel::GetValue(float frame /* f31 */, float * v /* r30 */) {
    // Local variables
    int start; // r31
    float delta; // r1+0x8
}

// total size: 0xC
struct {} tExpressionAnimation::__vtable; // size: 0xC, address: 0x80105450
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
// total size: 0x28
class tExpressionAnimation : public tAnimation {
    // Functions
    ~tExpressionAnimation();

    // Members
protected:
    int nChannel; // offset 0x20, size 0x4
    class tExpressionAnimChannel * * channel; // offset 0x24, size 0x4
};
// ERROR: Failed to emit tag 3B1431 (GlobalSubroutine)
// total size: 0x5C
struct {} tExpressionAnimationController::__vtable; // size: 0x5C, address: 0x801053F4
// total size: 0xD0
class tExpressionAnimationController : public tBlendFrameController {
    // Functions
    tExpressionAnimationController();

    class tFrameController * Clone();

    ~tExpressionAnimationController();

    unsigned char ValidateAnimation(class tAnimation * anim);

    void SetTarget(class tEntity * target);

    void UpdateNoBlending();

    void UpdateWithBlending();

    void ResetAccumulators();

    // Members
protected:
    class tExpressionMixer * mixer; // offset 0xC0, size 0x4
    float * expStateAccumulator; // offset 0xC4, size 0x4
    float * expWeightAccumulator; // offset 0xC8, size 0x4
};
// Range: 0x8005F660 -> 0x8005F6AC
// this: r31
tExpressionAnimationController::tExpressionAnimationController() {
    // References
    // -> struct [anonymous] tExpressionAnimationController::__vtable;
}

// Range: 0x8005F6AC -> 0x8005F7F8
// this: r29
class tFrameController * tExpressionAnimationController::Clone() {
    // References
    // -> struct [anonymous] tExpressionAnimationController::__vtable;
}

// Range: 0x8005F7F8 -> 0x8005F8A4
// this: r30
tExpressionAnimationController::~tExpressionAnimationController() {
    // References
    // -> struct [anonymous] tExpressionAnimationController::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801388A0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801388B0
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x801388B8
static // total size: 0x8
struct {} tExpressionAnimation::__RTTI; // size: 0x8, address: 0x801388C0
// Range: 0x8005F8A4 -> 0x8005F984
// this: r25
unsigned char tExpressionAnimationController::ValidateAnimation(class tAnimation * anim /* r31 */) {
    // Local variables
    unsigned char isExpAnim; // r28
    unsigned char allExpsPresent; // r27
    class tExpressionGroup * eg; // r26
    class tExpressionAnimation * eanim; // r1+0x8
    int i; // r25
    const char * expName; // r3
    int expIndex; // r1+0x28

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tExpressionAnimation::__RTTI;
}

static // total size: 0x8
struct {} tExpressionMixer::__RTTI; // size: 0x8, address: 0x801388C8
// Range: 0x8005F984 -> 0x8005F9C4
unsigned char tExpressionAnimationController::ValidateTarget(class tEntity * target /* r4 */) {
    // References
    // -> static struct [anonymous] tEntity::__RTTI;
    // -> static struct [anonymous] tExpressionMixer::__RTTI;
}

// Range: 0x8005F9C4 -> 0x8005FA8C
// this: r30
void tExpressionAnimationController::SetTarget(class tEntity * target /* r31 */) {
    // Local variables
    class tExpressionMixer * mix; // r1+0x8
    int nExp; // r1+0x8
}

// Range: 0x8005FA8C -> 0x8005FB74
// this: r25
void tExpressionAnimationController::UpdateNoBlending() {
    // Local variables
    class tExpressionAnimation * anim; // r1+0x8
    float frame; // f30
    int i; // r27
    class tExpressionAnimChannel * channel; // r3
    const char * expName; // r26
    float value[2]; // r1+0x1C
}

// Range: 0x8005FB74 -> 0x8005FDE8
// this: r31
void tExpressionAnimationController::UpdateWithBlending() {
    // Local variables
    class tExpressionAnimation * eanim; // r1+0x8
    class tExpressionGroup * eg; // r25
    int i; // r26
    class tExpressionAnimChannel * channel; // r24
    const char * expName; // r3
    int expIndex; // r1+0x68
    float v[2]; // r1+0x60
    int j; // r24
    class tExpressionAnimChannel * channel; // r23
    const char * expName; // r3
    int expIndex; // r1+0x58
    float vBlend[2]; // r1+0x50
    float blendWeight; // f1
}

// Range: 0x8005FDE8 -> 0x8005FE38
// this: r1+0x0
void tExpressionAnimationController::ResetAccumulators() {
    // Local variables
    int i; // r6
}

// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x4
class tExpressionAnimChannelLoader {
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
// Range: 0x8005FE38 -> 0x80060074
class tExpressionAnimChannel * tExpressionAnimChannelLoader::Load(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[256]; // r1+0x140
    char expName[256]; // r1+0x3C
    int nKey; // r26
    class tExpressionAnimChannel * ch; // r1+0x8
    unsigned short * timeIndex; // r4
    int i; // r26

    // References
    // -> struct [anonymous] tExpressionAnimChannel::__vtable;
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
struct {} tExpressionAnimChannelLoader::__vtable; // size: 0xC, address: 0x80105300
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tExpressionAnimationLoader : public tSimpleChunkHandler {
    // Functions
    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    tExpressionAnimationLoader();
};
// ERROR: Failed to emit tag 3B51DE (GlobalSubroutine)
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tExpressionAnimationLoader::__vtable; // size: 0x1C, address: 0x801052C4
// ERROR: Failed to emit tag 3B5491 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
class tChunkHandler : public tEntity {};
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801388D0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801388D8
static // total size: 0x8
struct {} tExpressionAnimationLoader::__RTTI; // size: 0x8, address: 0x801388E0
static // total size: 0x8
struct {} tExpressionAnimChannelLoader::__RTTI; // size: 0x8, address: 0x801388E8
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801388F0
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801388F8
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x80138900
static // total size: 0x8
struct {} tExpressionAnimationController::__RTTI; // size: 0x8, address: 0x80138908
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
struct {} tVectorChannel::__RTTI; // size: 0x8, address: 0x80138910
static // total size: 0x8
struct {} tDynamicVectorChannel::__RTTI; // size: 0x8, address: 0x80138918
static // total size: 0x8
struct {} tExpressionAnimChannel::__RTTI; // size: 0x8, address: 0x80138920
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};



