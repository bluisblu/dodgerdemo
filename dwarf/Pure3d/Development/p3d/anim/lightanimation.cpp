/*
    Compile unit: D:\Pure3d\development\p3d\anim\lightanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80060338 -> 0x80060F14
*/
// total size: 0xC
struct {} tLightAnimation::__vtable; // size: 0xC, address: 0x801057DC
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
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
// total size: 0xC
class tTimeIndex {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
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
    // Functions
    ~tLightAnimation();

    // Members
    class tColourChannel * mColour; // offset 0x20, size 0x4
    class tVectorChannel * mParam; // offset 0x24, size 0x4
    class tVectorChannel * mEnable; // offset 0x28, size 0x4
};
// ERROR: Failed to emit tag 3BA74A (GlobalSubroutine)
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x50
struct {} tLightAnimationController::__vtable; // size: 0x50, address: 0x8010576C
enum tLightType {
    Invalid = -1,
    Ambient = 0,
    Point = 1,
    Directional = 2,
};
// total size: 0xC8
class tLightAnimationController : public tBlendFrameController {
    // Functions
    tLightAnimationController();

    ~tLightAnimationController();

    class tFrameController * Clone();

    void SetLight(class tLight * light);

    void UpdateNoBlending();

    void UpdateWithBlending();

    // Members
protected:
    class tLight * mLight; // offset 0xC0, size 0x4
    enum tLightType mLightType; // offset 0xC4, size 0x4
};
// Range: 0x80060410 -> 0x8006045C
// this: r31
tLightAnimationController::tLightAnimationController() {
    // References
    // -> struct [anonymous] tLightAnimationController::__vtable;
}

// Range: 0x8006045C -> 0x800604D0
// this: r30
tLightAnimationController::~tLightAnimationController() {
    // References
    // -> struct [anonymous] tLightAnimationController::__vtable;
}

// Range: 0x800604D0 -> 0x800605E0
// this: r30
class tFrameController * tLightAnimationController::Clone() {
    // References
    // -> struct [anonymous] tLightAnimationController::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138928
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138938
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80138948
static // total size: 0x8
struct {} tDirectionalLight::__RTTI; // size: 0x8, address: 0x80138950
static // total size: 0x8
struct {} tPointLight::__RTTI; // size: 0x8, address: 0x80138958
// Range: 0x800605E0 -> 0x800606B4
// this: r30
void tLightAnimationController::SetLight(class tLight * light /* r31 */) {
    // References
    // -> static struct [anonymous] tLight::__RTTI;
    // -> static struct [anonymous] tPointLight::__RTTI;
    // -> static struct [anonymous] tDirectionalLight::__RTTI;
}

static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138960
static // total size: 0x8
struct {} tLightAnimation::__RTTI; // size: 0x8, address: 0x80138968
// Range: 0x800606B4 -> 0x800606F4
unsigned char tLightAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tLightAnimation::__RTTI;
}

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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x0
class tCamera {};
// total size: 0xC0
class tView : public tRefCounted {
    // Members
protected:
    float l; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
    float r; // offset 0x10, size 0x4
    float b; // offset 0x14, size 0x4
    class tCamera * camera; // offset 0x18, size 0x4
    struct pddiColour ambientColour; // offset 0x1C, size 0x4
    struct pddiColour clearColour; // offset 0x20, size 0x4
    float clearDepth; // offset 0x24, size 0x4
    unsigned int clearStencil; // offset 0x28, size 0x4
    unsigned int clearMask; // offset 0x2C, size 0x4
    struct pddiColour fogColour; // offset 0x30, size 0x4
    float fogNear; // offset 0x34, size 0x4
    float fogFar; // offset 0x38, size 0x4
    class tLight * activeLightList[32]; // offset 0x3C, size 0x80
    unsigned char fogEnabled; // offset 0xBC, size 0x1
};
// Range: 0x800606F4 -> 0x800608A4
// this: r29
void tLightAnimationController::UpdateNoBlending() {
    // Local variables
    class tLightAnimation * anim; // r30
    float frame; // f31
    class tColourChannel * colour; // r3
    class tVectorChannel * param; // r31
    class tVectorChannel * enable; // r30
    class Vector v; // r1+0x28
    struct pddiColour c; // r1+0x24
    struct pddiColour c; // r1+0x20
    class tView * view; // r3
}

// Range: 0x800608A4 -> 0x80060BF4
// this: r31
void tLightAnimationController::UpdateWithBlending() {
    // Local variables
    int a; // r26
    class tLightAnimation * anim; // r27
    float frame; // f21
    float weight; // f20
    class tColourChannel * colour; // r3
    class tVectorChannel * param; // r28
    class tVectorChannel * enable; // r27
    class Vector v; // r1+0x2C
    struct pddiColour c; // r1+0x28
    int r; // r3
    int g; // r1+0x8
    int b; // r4
    struct pddiColour c; // r1+0x24
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tLightAnimationLoader::__vtable; // size: 0x1C, address: 0x80105658
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tLightAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tLightAnimationLoader();
};
// ERROR: Failed to emit tag 3C0E6D (GlobalSubroutine)
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
// total size: 0x1
class tColourChannelLoader {};
// total size: 0x4
class tVectorChannelLoader {
    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// ERROR: Failed to emit tag 3C2876 (GlobalSubroutine)
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
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138970
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138978
static // total size: 0x8
struct {} tLightAnimationLoader::__RTTI; // size: 0x8, address: 0x80138980
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138988
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138990
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x80138998
static // total size: 0x8
struct {} tLightAnimationController::__RTTI; // size: 0x8, address: 0x801389A0
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



