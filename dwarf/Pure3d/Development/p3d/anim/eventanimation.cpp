/*
    Compile unit: D:\Pure3d\development\p3d\anim\eventanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005D8A0 -> 0x8005DF34
*/
// total size: 0xC
struct {} tEventAnimation::__vtable; // size: 0xC, address: 0x80104DA0
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
// total size: 0x8
class tEvent : public tRefCounted {};
// total size: 0x30
class tEventAnimation : public tAnimation {
    // Functions
    tEventAnimation(int n);

    ~tEventAnimation();

    // Members
    int nKeys; // offset 0x20, size 0x4
    float * timeIndices; // offset 0x24, size 0x4
    class tEvent * * events; // offset 0x28, size 0x4
};
// ERROR: Failed to emit tag 395C5F (GlobalSubroutine)
// ERROR: Failed to emit tag 395D1A (GlobalSubroutine)
// total size: 0x4
class tEventOrigin {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class tEventRecipient : public tEntity {};
// total size: 0x40
struct {} tEventController::__vtable; // size: 0x40, address: 0x80104D60
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x28
class tSimpleFrameController : public tAnimationFrameController {
    // Members
protected:
    class tAnimation * animation; // offset 0x18, size 0x4
    float frame; // offset 0x1C, size 0x4
    float relativeSpeed; // offset 0x20, size 0x4
};
// total size: 0x38
class tEventController : public tSimpleFrameController {
    // Functions
    tEventController();

    ~tEventController();

    class tFrameController * Clone();

    void SetRecipient(class tEventRecipient * r);

    class tEventRecipient * GetRecipient();

    void SetOrigin(class tEventOrigin * r);

    class tEventOrigin * GetOrigin();

    void SetAnimation(class tAnimation * anim);

    void SetAnimation(class tAnimation * anim, float startFrame, float blendFrames);

    void Update();

    // Members
    class tEventRecipient * recipient; // offset 0x28, size 0x4
    class tEventOrigin * origin; // offset 0x2C, size 0x4
    float lastFrame; // offset 0x30, size 0x4
};
// Range: 0x8005DA58 -> 0x8005DAA8
// this: r31
tEventController::tEventController() {
    // References
    // -> struct [anonymous] tEventController::__vtable;
}

// Range: 0x8005DAA8 -> 0x8005DB0C
// this: r30
tEventController::~tEventController() {
    // References
    // -> struct [anonymous] tEventController::__vtable;
}

// Range: 0x8005DB0C -> 0x8005DBB8
// this: r30
class tFrameController * tEventController::Clone() {
    // References
    // -> struct [anonymous] tEventController::__vtable;
}

// Range: 0x8005DBB8 -> 0x8005DBC0
// this: r1+0x0
void tEventController::SetRecipient(class tEventRecipient * r /* r1+0x4 */) {}

// Range: 0x8005DBC0 -> 0x8005DBC8
// this: r3
class tEventRecipient * tEventController::GetRecipient() {}

// Range: 0x8005DBC8 -> 0x8005DBD0
// this: r1+0x0
void tEventController::SetOrigin(class tEventOrigin * r /* r1+0x4 */) {}

// Range: 0x8005DBD0 -> 0x8005DBD8
// this: r3
class tEventOrigin * tEventController::GetOrigin() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801387B0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801387C0
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x801387C8
static // total size: 0x8
struct {} tEventAnimation::__RTTI; // size: 0x8, address: 0x801387D0
// Range: 0x8005DBD8 -> 0x8005DC18
unsigned char tEventController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tEventAnimation::__RTTI;
}

// Range: 0x8005DC18 -> 0x8005DC4C
// this: r31
void tEventController::SetAnimation(class tAnimation * anim /* r4 */) {}

// Range: 0x8005DC4C -> 0x8005DC80
// this: r31
void tEventController::SetAnimation(class tAnimation * anim /* r4 */, float startFrame /* f1 */, float blendFrames /* f2 */) {}

// Range: 0x8005DC80 -> 0x8005DF2C
// this: r30
void tEventController::Update() {
    // Local variables
    class tEventAnimation * anim; // r31

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tEventAnimation::__RTTI;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tEventAnimationLoader::__vtable; // size: 0x1C, address: 0x80104C54
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tEventAnimationLoader : public tSimpleChunkHandler {};
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
// Range: 0x8005DF2C -> 0x8005DF34
class tEntity * tEventAnimationLoader::LoadObject() {}

static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801387D8
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801387E0
static // total size: 0x8
struct {} tEventAnimationLoader::__RTTI; // size: 0x8, address: 0x801387E8
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801387F0
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801387F8
static // total size: 0x8
struct {} tSimpleFrameController::__RTTI; // size: 0x8, address: 0x80138800
static // total size: 0x8
struct {} tEventController::__RTTI; // size: 0x8, address: 0x80138808



