/*
    Compile unit: D:\Pure3d\development\p3d\anim\sequencer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80064594 -> 0x8006931C
*/
// total size: 0x2C
class TextDataParser {
    // Functions
    unsigned char Advance();

    int CurrentToken(char * dest, int destlen);

    unsigned char IsSeperator(char c);

    unsigned char IsCurrentTokenComment();

    int TokenCountAtCurrentBracketLevel(const char * intoken);

    unsigned char PushPosition();

    unsigned char PopPosition();

    // Members
    char * mData; // offset 0x0, size 0x4
    int mDataLen; // offset 0x4, size 0x4
    int mCurrentTokenStart; // offset 0x8, size 0x4
    int mCurrentTokenLen; // offset 0xC, size 0x4
    int mCurrentLine; // offset 0x10, size 0x4
    int mBracketLevel; // offset 0x14, size 0x4
    unsigned char mDataPushed; // offset 0x18, size 0x1
    int mPushedCurrentTokenStart; // offset 0x1C, size 0x4
    int mPushedCurrentTokenLen; // offset 0x20, size 0x4
    int mPushedCurrentLine; // offset 0x24, size 0x4
    int mPushedBracketLevel; // offset 0x28, size 0x4
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
// Range: 0x80064594 -> 0x80064764
// this: r31
unsigned char TextDataParser::Advance() {
    // Local variables
    int maxlen; // r30
}

// Range: 0x80064764 -> 0x80064844
// this: r28
int TextDataParser::CurrentToken(char * dest /* r29 */, int destlen /* r30 */) {}

unsigned char __ctype_map[]; // size: 0x0, address: 0x800F9088
// Range: 0x80064844 -> 0x8006491C
// this: r1+0x0
unsigned char TextDataParser::IsSeperator(char c /* r1+0x4 */) {
    // References
    // -> unsigned char __ctype_map[];
}

// Range: 0x8006491C -> 0x80064950
// this: r1+0x0
unsigned char TextDataParser::IsCurrentTokenComment() {
    // Local variables
    char * s; // r1+0x0
}

// Range: 0x80064950 -> 0x80064A68
// this: r28
int TextDataParser::TokenCountAtCurrentBracketLevel(const char * intoken /* r29 */) {
    // Local variables
    int count; // r31
    char token[256]; // r1+0x10
    int start_bracket_level; // r30
}

// Range: 0x80064A68 -> 0x80064AAC
// this: r1+0x0
unsigned char TextDataParser::PushPosition() {}

// Range: 0x80064AAC -> 0x80064AF0
// this: r1+0x0
unsigned char TextDataParser::PopPosition() {}

// total size: 0xC
struct {} tSequencerState::__vtable; // size: 0xC, address: 0x80106DCC
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x30
class tEventAnimation : public tAnimation {
    // Members
    int nKeys; // offset 0x20, size 0x4
    float * timeIndices; // offset 0x24, size 0x4
    class tEvent * * events; // offset 0x28, size 0x4
};
enum LoopType {
    Loop = 0,
    LoopNHold = 1,
    LoopNOut = 2,
    PlayKill = 3,
};
// total size: 0x68
class tSequencerState : public tEntity {
    // Functions
    tSequencerState();

    ~tSequencerState();

    class tStateSequencerCommand * Update(float deltatime, class tSubPartState * sub_part);

    class tStateSequencerCommand * TransitionTo(class tSequencerState * new_state);

    class tStateSequencerCommand * DefaultTransition();

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
// Range: 0x80064AF0 -> 0x80064B8C
// this: r31
tSequencerState::tSequencerState() {
    // References
    // -> struct [anonymous] tSequencerState::__vtable;
}

// Range: 0x80064B8C -> 0x80064C34
// this: r30
tSequencerState::~tSequencerState() {
    // References
    // -> struct [anonymous] tSequencerState::__vtable;
}

// Range: 0x80064C34 -> 0x80064E3C
// this: r31
class tStateSequencerCommand * tSequencerState::Update(float deltatime /* f30 */, class tSubPartState * sub_part /* r1+0x10 */) {
    // Local variables
    class tBlendFrameController * ocontroller; // r27
    class tEventController * econtroller; // r28
    unsigned char need_cyclic; // r26
    unsigned char check_for_out; // r25
    class tAnimation * anim; // r1+0x8
    float prev_frame; // f31
    class tAnimation * anim; // r1+0x8
}

// Range: 0x80064E3C -> 0x80064F38
// this: r1+0x8
class tStateSequencerCommand * tSequencerState::TransitionTo(class tSequencerState * new_state /* r4 */) {
    // Local variables
    int a; // r8
    float minframe; // r1+0x8
    float maxframe; // r1+0x8
}

// Range: 0x80064F38 -> 0x80064F40
// this: r3
class tStateSequencerCommand * tSequencerState::DefaultTransition() {}

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
    // Members
    class tEventRecipient * recipient; // offset 0x28, size 0x4
    class tEventOrigin * origin; // offset 0x2C, size 0x4
    float lastFrame; // offset 0x30, size 0x4
};
// total size: 0xC
class tSubPartState {
    // Functions
    tSubPartState();

    ~tSubPartState();

    void SetState(class tSequencerState * new_state, float baseSpeed, float start_frame, float blendframes);

    // Members
    class tSequencerState * mCurrentState; // offset 0x0, size 0x4
    class tBlendFrameController * mObjectController; // offset 0x4, size 0x4
    class tEventController * mEventController; // offset 0x8, size 0x4
};
// Range: 0x80064F40 -> 0x80064F54
// this: r3
tSubPartState::tSubPartState() {}

// Range: 0x80064F54 -> 0x80064FD0
// this: r30
tSubPartState::~tSubPartState() {}

// Range: 0x80064FD0 -> 0x8006518C
// this: r28
void tSubPartState::SetState(class tSequencerState * new_state /* r29 */, float baseSpeed /* f27 */, float start_frame /* f28 */, float blendframes /* f29 */) {
    // Local variables
    class tAnimation * oanim; // r30
    class tEventAnimation * eanim; // r31
    float min; // f31
    float max; // f30
}

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
// total size: 0xC
struct {} tSequencer::__vtable; // size: 0xC, address: 0x80106D50
// total size: 0xC
struct {} tEventOrigin::__vtable; // size: 0xC, address: 0x80106D9C
// total size: 0xC
struct {} tEventOriginSequencer::__vtable; // size: 0xC, address: 0x80106D90
// total size: 0x30
class tSequencer : public tEntity {
    // Functions
    ~tSequencer();

    unsigned char SetState(char * state, unsigned char kill_sub_states);

    unsigned char SetState(unsigned long long state, unsigned char kill_sub_states);

    unsigned char KillAllSubStates();

    void Update(float deltatime);

    class tSequencerState * FindState(unsigned long long state);

    void HandleCommand(class tStateSequencerCommand * cmd, class tSubPartState * subpart);

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
// Range: 0x8006518C -> 0x80065274
// this: r28
tSequencer::~tSequencer() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] tSequencer::__vtable;
}

// Range: 0x80065274 -> 0x800652C4
// this: r30
unsigned char tSequencer::SetState(char * state /* r4 */, unsigned char kill_sub_states /* r31 */) {}

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
// Range: 0x800652C4 -> 0x800653E0
// this: r29
unsigned char tSequencer::SetState(unsigned long long state /* r30 */, unsigned char kill_sub_states /* r1+0x18 */) {
    // Local variables
    class tSequencerState * new_state; // r31
    class tSubPartState * subpart; // r30
    class tStateSequencerCommand * cmd; // r1+0x8
    class tStateSequencerCommand tmp; // r1+0x24
}

// Range: 0x800653E0 -> 0x8006549C
// this: r28
unsigned char tSequencer::KillAllSubStates() {
    // Local variables
    int a; // r29
}

// Range: 0x8006549C -> 0x80065540
// this: r29
void tSequencer::Update(float deltatime /* f31 */) {
    // Local variables
    int a; // r30
    class tStateSequencerCommand * cmd; // r4
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138B38
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138B48
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138B50
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138B58
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x80138B60
// Range: 0x80065540 -> 0x80065598
// this: r1+0x0
class tSequencerState * tSequencer::FindState(unsigned long long state /* r1+0x8 */) {
    // Local variables
    int a; // r9
}

// Range: 0x80065598 -> 0x8006573C
// this: r29
void tSequencer::HandleCommand(class tStateSequencerCommand * cmd /* r30 */, class tSubPartState * subpart /* r31 */) {}

unsigned char __lower_map[]; // size: 0x0, address: 0x800F9188
// total size: 0x20
class tSEQFileHandler : public tFileHandler {
    // Functions
    enum tLoadStatus Load(class tFile * file, class tEntityStore * store);

    // Members
protected:
    class tSequencerLoader sequencerLoader; // offset 0x8, size 0x18
};
// Range: 0x8006573C -> 0x80065834
unsigned char tSEQFileHandler::CheckExtension(char * file /* r31 */) {
    // Local variables
    int len; // r1+0x8

    // References
    // -> unsigned char __lower_map[];
}

enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// Range: 0x80065834 -> 0x80065858
// this: r3
enum tLoadStatus tSEQFileHandler::Load(class tFile * file /* r4 */, class tEntityStore * store /* r5 */) {}

// total size: 0x14
struct {} tSequencerLoader::__vtable; // size: 0x14, address: 0x80106CA0
// total size: 0x18
class tSequencerLoader : public tChunkHandler {
    // Functions
    tSequencerLoader();

    ~tSequencerLoader();

    enum tLoadStatus Load(class tFile * file, class tEntityStore * store);

    enum tLoadStatus ParseScript(class TextDataParser * parser);

    class tSequencer * ParseSequencer(class TextDataParser * parser);

    unsigned char ParseStates(class TextDataParser * parser, class tSequencer * seq);

    unsigned char ParseState(class TextDataParser * parser, class tSequencerState * state);

    unsigned char ParseTransitions(class TextDataParser * parser, class tSequencerState * state);

    unsigned char FixupTransitions(class tSequencer * seq);

    unsigned char BuildSubParts(class tSequencer * seq);

    class tEventAnimation * ParseEventAnim(class TextDataParser * parser);

    class tEvent * ParseEvent(class TextDataParser * parser, float & time);

    // Members
    class tEntityStore * mStore; // offset 0x10, size 0x4
    class tBlendFrameController * mAnimationTarget; // offset 0x14, size 0x4
};
// ERROR: Failed to emit tag 409ACC (GlobalSubroutine)
// total size: 0x0
class tChunkFile {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// ERROR: Failed to emit tag 409E6B (GlobalSubroutine)
// Range: 0x80065944 -> 0x8006594C
enum tLoadStatus tSequencerLoader::Load() {}

// Range: 0x8006594C -> 0x80065A88
// this: r29
enum tLoadStatus tSequencerLoader::Load(class tFile * file /* r30 */, class tEntityStore * store /* r1+0x10 */) {
    // Local variables
    class TextDataParser * parser; // r31
    enum tLoadStatus result; // r30
}

// Range: 0x80065A88 -> 0x80065A90
unsigned char tSequencerLoader::CheckChunkID() {}

// Range: 0x80065A90 -> 0x80065BF8
// this: r29
enum tLoadStatus tSequencerLoader::ParseScript(class TextDataParser * parser /* r30 */) {
    // Local variables
    char token[128]; // r1+0x10
    unsigned char ok; // r1+0x8
    class tSequencer * seq; // r4
    class tEventAnimation * ea; // r4
}

// total size: 0xC
struct {} tSafeEntityCaster<tBlendFrameController>::__vtable; // size: 0xC, address: 0x80106C34
// ERROR: Failed to emit tag 40A31E (GlobalSubroutine)
// Range: 0x8006615C -> 0x8006647C
// this: r25
unsigned char tSequencerLoader::ParseStates(class TextDataParser * parser /* r26 */, class tSequencer * seq /* r27 */) {
    // Local variables
    char token[128]; // r1+0xA0
    int current_state; // r29
    int startline; // r28
    int a; // r24
    unsigned char ok; // r1+0x8
}

// total size: 0xC
struct {} tSafeEntityCaster<tAnimation>::__vtable; // size: 0xC, address: 0x80106BF0
// total size: 0xC
struct {} tSafeEntityCaster<tEventAnimation>::__vtable; // size: 0xC, address: 0x80106BB8
// ERROR: Failed to emit tag 40A76C (GlobalSubroutine)
// Range: 0x80066E1C -> 0x80067170
// this: r26
unsigned char tSequencerLoader::ParseTransitions(class TextDataParser * parser /* r27 */, class tSequencerState * state /* r28 */) {
    // Local variables
    char token[128]; // r1+0xA4
    int current_transition; // r1+0x8
    int startline; // r29
    int a; // r9
    unsigned char ok; // r1+0x8
}

// total size: 0x20
class tStateTransition : public tStateSequencerCommand {
    // Members
public:
    float mOutFrameMin; // offset 0x10, size 0x4
    float mOutFrameRange; // offset 0x14, size 0x4
    float mInFrame; // offset 0x18, size 0x4
    float mInFrameRangeScale; // offset 0x1C, size 0x4
};
// Range: 0x80067170 -> 0x80067C38
unsigned char tSequencerLoader::ParseTransition(class TextDataParser * parser /* r31 */, class tStateTransition * dest /* r30 */) {
    // Local variables
    char token[128]; // r1+0x11C
    char value[128]; // r1+0x9C
    unsigned char is_transition; // r24
    int startline; // r25
}

// Range: 0x80067C38 -> 0x80067D0C
// this: r23
unsigned char tSequencerLoader::FixupTransitions(class tSequencer * seq /* r24 */) {
    // Local variables
    int a; // r27
    class tSequencerState * state; // r1+0x8
    char * name; // r30
    int transition; // r26
    char * name; // r25
    class tSequencerState * dest; // r1+0x8
}

// Range: 0x80067D0C -> 0x80067EF8
// this: r30
unsigned char tSequencerLoader::BuildSubParts(class tSequencer * seq /* r31 */) {
    // Local variables
    int maxsub; // r5
    int a; // r1+0x8

    // References
    // -> static struct [anonymous] tEntity::__RTTI;
    // -> static struct [anonymous] tBlendFrameController::__RTTI;
}

// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0x8
class tEvent : public tRefCounted {};
// total size: 0x10
class tEventRecipient : public tEntity {};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// Range: 0x80067EF8 -> 0x80067F7C
class tSequencerState * tSequencerLoader::FindState(class tSequencer * seq /* r31 */, char * name /* r5 */) {
    // Local variables
    unsigned long long uid; // r1+0x8
    int state; // r8
}

// Range: 0x80067F7C -> 0x80068660
// this: r30
class tEventAnimation * tSequencerLoader::ParseEventAnim(class TextDataParser * parser /* r31 */) {
    // Local variables
    char token[128]; // r1+0x1A0
    char value[128]; // r1+0x120
    int startline; // r24
    class tEventAnimation * eventanim; // r23
    int maxevent; // r1+0x8
    int a; // r4
    int currentevent; // r22
    float fr; // r1+0x8
    unsigned char cyclic; // r1+0x8
    float time; // r1+0x118
    class tEvent * event; // r1+0x8
}

// total size: 0x1C
struct {} tEvent::__vtable; // size: 0x1C, address: 0x80104B44
// total size: 0x1C
struct {} tBaseEvent::__vtable; // size: 0x1C, address: 0x80104B28
// total size: 0x1C
struct {} tGenericEvent::__vtable; // size: 0x1C, address: 0x80104B0C
// Range: 0x80068660 -> 0x80068BC8
// this: r29
class tEvent * tSequencerLoader::ParseEvent(class TextDataParser * parser /* r30 */, float & time /* r31 */) {
    // Local variables
    char token[128]; // r1+0x124
    char value[128]; // r1+0xA4
    int startline; // r25
    class tGenericEvent * event; // r24

    // References
    // -> struct [anonymous] tGenericEvent::__vtable;
    // -> struct [anonymous] tBaseEvent::__vtable;
    // -> struct [anonymous] tEvent::__vtable;
}

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
// Range: 0x80068BC8 -> 0x8006931C
unsigned char tSequencerLoader::ParseEventData(class TextDataParser * parser /* r26 */, class tGenericEvent * event /* r21 */) {
    // Local variables
    char token[128]; // r1+0x124
    char value[128]; // r1+0xA4
    int startline; // r30
    int datasize; // r20
    int stringstart; // r29
    int currentdata; // r28
    int maxdata; // r1+0x8
    char * data; // r27
    int sl; // r3
    int len; // r5
    char * * s; // r3
}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138C3C
static // total size: 0x8
struct {} tSafeEntityCaster<tEventAnimation>::__RTTI; // size: 0x8, address: 0x80138C44
static // total size: 0x8
struct {} tSafeEntityCaster<tAnimation>::__RTTI; // size: 0x8, address: 0x80138C4C
static // total size: 0x8
struct {} tSafeEntityCaster<tBlendFrameController>::__RTTI; // size: 0x8, address: 0x80138C54
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138C5C
static // total size: 0x8
struct {} tSequencerLoader::__RTTI; // size: 0x8, address: 0x80138C64
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80138C6C
static // total size: 0x8
struct {} tSEQFileHandler::__RTTI; // size: 0x8, address: 0x80138C74
// total size: 0x14
struct {} tSEQFileHandler::__vtable; // size: 0x14, address: 0x80106D08
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x8
class tFileHandler : public tRefCounted {};
static // total size: 0x8
struct {} tSequencer::__RTTI; // size: 0x8, address: 0x80138C7C
static // total size: 0x8
struct {} tEventOrigin::__RTTI; // size: 0x8, address: 0x80138C84
static // total size: 0x8
struct {} tEventOriginSequencer::__RTTI; // size: 0x8, address: 0x80138C8C
// total size: 0x4
class tEventOriginSequencer : public tEventOrigin {};
// total size: 0x4
class tEventOrigin {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static // total size: 0x8
struct {} tSequencerState::__RTTI; // size: 0x8, address: 0x80138C94
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138C9C
static // total size: 0x8
struct {} tEventAnimation::__RTTI; // size: 0x8, address: 0x80138CA4
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



