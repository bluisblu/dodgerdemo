/*
    Compile unit: D:\Pure3d\development\p3d\loaders.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80045FEC -> 0x8004689C
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80132F78
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B238
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x80132F84
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80132F90
// total size: 0x3C
struct {} tTargaHandler::__vtable; // size: 0x3C, address: 0x80102C4C
// total size: 0x3C
struct {} tPNGHandler::__vtable; // size: 0x3C, address: 0x8010218C
// total size: 0x3C
struct {} tBMPHandler::__vtable; // size: 0x3C, address: 0x801007A4
// total size: 0x14
struct {} tTypeFaceHandler::__vtable; // size: 0x14, address: 0x80103134
// total size: 0x24
struct {} Scenegraph::TransformFrameControllerLoader::__vtable; // size: 0x24, address: 0x80109534
// total size: 0x14
struct {} tSEQFileHandler::__vtable; // size: 0x14, address: 0x80106D08
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
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
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
// total size: 0x0
class TextDataParser {};
// total size: 0x8
class tEvent : public tRefCounted {};
// total size: 0x20
class tBaseEvent : public tEvent {
    // Members
protected:
    unsigned long long nameUID; // offset 0x8, size 0x8
    unsigned long long addressUID; // offset 0x10, size 0x8
    unsigned int param; // offset 0x18, size 0x4
};
// total size: 0x30
class tGenericEvent : public tBaseEvent {
    // Members
protected:
    unsigned int dataLen; // offset 0x20, size 0x4
    void * data; // offset 0x24, size 0x4
    unsigned char delData; // offset 0x28, size 0x1
};
// total size: 0x0
class tEventAnimation {};
enum Commands {
    Invalid = 0,
    Start = 1,
    Replace = 2,
    Kill = 3,
    BlendIn = 4,
    BlendOut = 5,
    CrossFade = 6,
    UseDefault = 7,
};
// total size: 0x10
class tStateSequencerCommand {
    // Members
public:
    enum Commands mCommand; // offset 0x0, size 0x4
    class tSequencerState * mStateParam; // offset 0x4, size 0x4
    float mTimeParam; // offset 0x8, size 0x4
    float mStartFrame; // offset 0xC, size 0x4
};
// total size: 0x20
class tStateTransition : public tStateSequencerCommand {
    // Members
public:
    float mOutFrameMin; // offset 0x10, size 0x4
    float mOutFrameRange; // offset 0x14, size 0x4
    float mInFrame; // offset 0x18, size 0x4
    float mInFrameRangeScale; // offset 0x1C, size 0x4
};
enum LoopType {
    Loop = 0,
    LoopNHold = 1,
    LoopNOut = 2,
    PlayKill = 3,
};
// total size: 0x0
class tEventController {};
// total size: 0x4
class tEventOrigin {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class tEventRecipient : public tEntity {};
// total size: 0xC
class tSubPartState {
    // Members
    class tSequencerState * mCurrentState; // offset 0x0, size 0x4
    class tBlendFrameController * mObjectController; // offset 0x4, size 0x4
    class tEventController * mEventController; // offset 0x8, size 0x4
};
// total size: 0x68
class tSequencerState : public tEntity {
    // Members
    class tAnimation * mObjectAnimation; // offset 0x10, size 0x4
    class tEventAnimation * mEventAnimation; // offset 0x14, size 0x4
    float mFrameRangeMin; // offset 0x18, size 0x4
    float mFrameRangeMax; // offset 0x1C, size 0x4
    float mCurrentFrame; // offset 0x20, size 0x4
    class tStateTransition mDefaultTransition; // offset 0x24, size 0x20
    int mSubPart; // offset 0x44, size 0x4
    int mTransitionCount; // offset 0x48, size 0x4
    class tStateTransition * mTransitions; // offset 0x4C, size 0x4
    enum LoopType mLoopType; // offset 0x50, size 0x4
    int mMaxLoopCount; // offset 0x54, size 0x4
    int mLoopCount; // offset 0x58, size 0x4
    class tStateTransition * mOutDest; // offset 0x5C, size 0x4
    float mStateAnimationSpeed; // offset 0x60, size 0x4
};
// total size: 0x4
class tEventOriginSequencer : public tEventOrigin {};
// total size: 0x30
class tSequencer : public tEntity {
    // Members
    int mStateCount; // offset 0x10, size 0x4
    class tSequencerState * * mStates; // offset 0x14, size 0x4
    int mSubPartCount; // offset 0x18, size 0x4
    class tSubPartState * mSubParts; // offset 0x1C, size 0x4
    class tEntity * mAnimationTarget; // offset 0x20, size 0x4
    float mSequencerSpeed; // offset 0x24, size 0x4
    class tEventRecipient * mEventRecipient; // offset 0x28, size 0x4
    class tEventOriginSequencer mEventOrigin; // offset 0x2C, size 0x4
};
// total size: 0x18
class tSequencerLoader : public tChunkHandler {
    // Members
    class tEntityStore * mStore; // offset 0x10, size 0x4
    class tBlendFrameController * mAnimationTarget; // offset 0x14, size 0x4
};
// total size: 0x20
class tSEQFileHandler : public tFileHandler {
    // Members
protected:
    class tSequencerLoader sequencerLoader; // offset 0x8, size 0x18
};
// ERROR: Failed to emit tag 2636DC (GlobalSubroutine)
// total size: 0x24
struct {} tFrameControllerLoader::__vtable; // size: 0x24, address: 0x80103710
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tFrameControllerLoader : public tSimpleChunkHandler {};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
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
// total size: 0x8
class tFileHandler : public tRefCounted {};
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
// total size: 0x10
class tChunkHandler : public tEntity {};



