/*
    Compile unit: D:\Pure3d\development\p3d\anim\multicontroller.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80060F14 -> 0x800618E0
*/
// total size: 0x28
struct {} tMultiController::__vtable; // size: 0x28, address: 0x801059E4
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
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x38
class tMultiController : public tFrameController {
    // Functions
    tMultiController(int t, float f);

    ~tMultiController();

    void Advance(float d, unsigned char update);

    void SetRelativeSpeed(float rs);

    float GetRelativeSpeed();

    void SetFrame(float f);

    float GetFrame();

    void Update();

    // Members
protected:
    float deltaTime; // offset 0x10, size 0x4
    float length; // offset 0x14, size 0x4
    float lastTime; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    float speed; // offset 0x20, size 0x4
    float relativeSpeed; // offset 0x24, size 0x4
    unsigned char loop; // offset 0x28, size 0x1
    unsigned int nTracks; // offset 0x2C, size 0x4
    struct TrackInfo * trackInfo; // offset 0x30, size 0x4
    class tFrameController * * tracks; // offset 0x34, size 0x4
};
// ERROR: Failed to emit tag 3C76CC (GlobalSubroutine)
// ERROR: Failed to emit tag 3C77A6 (GlobalSubroutine)
// Range: 0x800610C0 -> 0x800610C8
class tFrameController * tMultiController::Clone() {}

// Range: 0x800610C8 -> 0x80061120
// this: r3
void tMultiController::Advance(float d /* r1+0xC */, unsigned char update /* r1+0x10 */) {}

// Range: 0x80061120 -> 0x80061128
// this: r1+0x0
void tMultiController::SetRelativeSpeed(float rs /* r1+0x4 */) {}

// Range: 0x80061128 -> 0x80061130
// this: r1+0x0
float tMultiController::GetRelativeSpeed() {}

static unsigned char first$259; // size: 0x1, address: 0x8013B250
static signed char init$260; // size: 0x1, address: 0x8013B251
// Range: 0x80061130 -> 0x80061268
// this: r28
void tMultiController::SetFrame(float f /* f30 */) {
    // Local variables
    unsigned int i; // r29

    // References
    // -> static unsigned char first$259;
    // -> static signed char init$260;
}

// Range: 0x80061268 -> 0x80061280
// this: r1+0x0
float tMultiController::GetFrame() {}

// Range: 0x80061280 -> 0x8006142C
// this: r28
void tMultiController::Update() {
    // Local variables
    float lenMS; // r1+0x8
    unsigned int i; // r29
    float startMS; // r1+0x8
    float endMS; // f29
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tMultiControllerLoader::__vtable; // size: 0x1C, address: 0x8010595C
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tMultiControllerLoader : public tSimpleChunkHandler {
    // Functions
    tMultiControllerLoader();
};
// ERROR: Failed to emit tag 3C8851 (GlobalSubroutine)
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
struct {} tSafeEntityCaster<tFrameController>::__vtable; // size: 0xC, address: 0x801058A8
// total size: 0xC
struct TrackInfo {
    // Members
    float startTime; // offset 0x0, size 0x4
    float endTime; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// Range: 0x80061488 -> 0x800618E0
class tEntity * tMultiControllerLoader::LoadObject(class tChunkFile * f /* r30 */, class tEntityStore * store /* r31 */) {
    // Local variables
    char buf[256]; // r1+0x2D0
    float length; // f30
    unsigned int numtracks; // r17
    class tMultiController * cont; // r3
    unsigned int track_index; // r21
    int i; // r20
    char name[256]; // r1+0x1C4
    struct TrackInfo track; // r1+0x1B8
    char name[256]; // r1+0xB8
    struct TrackInfo track; // r1+0xAC

    // References
    // -> struct [anonymous] tSafeEntityCaster<tFrameController>::__vtable;
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
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801389A8
static // total size: 0x8
struct {} tSafeEntityCaster<tFrameController>::__RTTI; // size: 0x8, address: 0x801389B0
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801389B8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801389C8
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x801389D0
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x801389D8
static // total size: 0x8
struct {} tMultiControllerLoader::__RTTI; // size: 0x8, address: 0x801389E0
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801389E8
static // total size: 0x8
struct {} tMultiController::__RTTI; // size: 0x8, address: 0x801389F0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



