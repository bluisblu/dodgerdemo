/*
    Compile unit: D:\Pure3d\development\p3d\anim\cameraanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80058004 -> 0x80058A90
*/
// total size: 0xC
struct {} tAnimation::__vtable; // size: 0xC, address: 0x80103EC0
// total size: 0xC
struct {} tCameraAnimation::__vtable; // size: 0xC, address: 0x80103EB4
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
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
class tCameraAnimation : public tAnimation {
    // Functions
    ~tCameraAnimation();

    // Members
    class tVectorChannel * mPosition; // offset 0x20, size 0x4
    class tVectorChannel * mLook; // offset 0x24, size 0x4
    class tVectorChannel * mUp; // offset 0x28, size 0x4
    class tVectorChannel * mFOV; // offset 0x2C, size 0x4
};
// Range: 0x80058068 -> 0x80058160
// this: r30
tCameraAnimation::~tCameraAnimation() {
    // References
    // -> struct [anonymous] tAnimation::__vtable;
    // -> struct [anonymous] tCameraAnimation::__vtable;
}

// total size: 0x10
struct {} tVectorChannel::__vtable; // size: 0x10, address: 0x80103EA4
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x50
struct {} tCameraAnimationController::__vtable; // size: 0x50, address: 0x80103E44
// total size: 0xC8
class tCameraAnimationController : public tBlendFrameController {
    // Functions
    tCameraAnimationController();

    ~tCameraAnimationController();

    class tFrameController * Clone();

    void SetCamera(class tVectorCamera * camera);

    void UpdateNoBlending();

    void UpdateWithBlending();

    // Members
protected:
    class tVectorCamera * mCamera; // offset 0xC0, size 0x4
};
// Range: 0x80058160 -> 0x800581A4
// this: r31
tCameraAnimationController::tCameraAnimationController() {
    // References
    // -> struct [anonymous] tCameraAnimationController::__vtable;
}

// Range: 0x800581A4 -> 0x80058218
// this: r30
tCameraAnimationController::~tCameraAnimationController() {
    // References
    // -> struct [anonymous] tCameraAnimationController::__vtable;
}

// Range: 0x80058218 -> 0x800582CC
// this: r30
class tFrameController * tCameraAnimationController::Clone() {
    // References
    // -> struct [anonymous] tCameraAnimationController::__vtable;
}

// Range: 0x800582CC -> 0x80058324
// this: r30
void tCameraAnimationController::SetCamera(class tVectorCamera * camera /* r31 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138578
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138588
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138590
static // total size: 0x8
struct {} tCameraAnimation::__RTTI; // size: 0x8, address: 0x80138598
// Range: 0x80058324 -> 0x80058364
unsigned char tCameraAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tCameraAnimation::__RTTI;
}

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
// Range: 0x80058364 -> 0x800584D0
// this: r28
void tCameraAnimationController::UpdateNoBlending() {
    // Local variables
    class tCameraAnimation * anim; // r29
    float frame; // f31
    class tVectorChannel * pos; // r3
    class tVectorChannel * look; // r31
    class tVectorChannel * up; // r30
    class tVectorChannel * fov; // r29
    class Vector v; // r1+0x18
    float prevfov; // r1+0x14
    float aspect; // r1+0x10
}

// Range: 0x800584D0 -> 0x8005877C
// this: r26
void tCameraAnimationController::UpdateWithBlending() {
    // Local variables
    class Vector vpos; // r1+0x4C
    class Vector vlook; // r1+0x40
    class Vector vup; // r1+0x34
    int a; // r27
    class tCameraAnimation * anim; // r28
    float frame; // f28
    float weight; // f27
    class tVectorChannel * pos; // r3
    class tVectorChannel * look; // r30
    class tVectorChannel * up; // r29
    class tVectorChannel * fov; // r28
    class Vector v; // r1+0x1C
    float prevfov; // r1+0x18
    float aspect; // r1+0x14
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tCameraAnimationLoader::__vtable; // size: 0x1C, address: 0x80103D30
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tCameraAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tCameraAnimationLoader();
};
// ERROR: Failed to emit tag 35DD71 (GlobalSubroutine)
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
// total size: 0x4
class tVectorChannelLoader {
    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// Range: 0x800587D8 -> 0x80058A90
class tEntity * tCameraAnimationLoader::LoadObject(class tChunkFile * f /* r31 */) {
    // Local variables
    char buf[256]; // r1+0x3C
    class tCameraAnimation * anim; // r3
    class tVectorChannelLoader channelLoader; // r1+0x34
    class tVectorChannelLoader channelLoader; // r1+0x30
    class tVectorChannelLoader channelLoader; // r1+0x2C
    class tVectorChannelLoader channelLoader; // r1+0x28

    // References
    // -> struct [anonymous] tCameraAnimation::__vtable;
    // -> struct [anonymous] tAnimation::__vtable;
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
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801385A0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801385A8
static // total size: 0x8
struct {} tCameraAnimationLoader::__RTTI; // size: 0x8, address: 0x801385B0
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801385B8
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801385C0
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x801385C8
static // total size: 0x8
struct {} tCameraAnimationController::__RTTI; // size: 0x8, address: 0x801385D0
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
struct {} tVectorChannel::__RTTI; // size: 0x8, address: 0x801385D8



