/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\GameSimGroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80009390 -> 0x80009C48
*/
// total size: 0x3C
struct {} GameSimGroup::__vtable; // size: 0x3C, address: 0x800FC038
// total size: 0x0
class ARAMObj {};
// total size: 0x24
struct _AXPBMIX {
    // Members
    unsigned short vL; // offset 0x0, size 0x2
    unsigned short vDeltaL; // offset 0x2, size 0x2
    unsigned short vR; // offset 0x4, size 0x2
    unsigned short vDeltaR; // offset 0x6, size 0x2
    unsigned short vAuxAL; // offset 0x8, size 0x2
    unsigned short vDeltaAuxAL; // offset 0xA, size 0x2
    unsigned short vAuxAR; // offset 0xC, size 0x2
    unsigned short vDeltaAuxAR; // offset 0xE, size 0x2
    unsigned short vAuxBL; // offset 0x10, size 0x2
    unsigned short vDeltaAuxBL; // offset 0x12, size 0x2
    unsigned short vAuxBR; // offset 0x14, size 0x2
    unsigned short vDeltaAuxBR; // offset 0x16, size 0x2
    unsigned short vAuxBS; // offset 0x18, size 0x2
    unsigned short vDeltaAuxBS; // offset 0x1A, size 0x2
    unsigned short vS; // offset 0x1C, size 0x2
    unsigned short vDeltaS; // offset 0x1E, size 0x2
    unsigned short vAuxAS; // offset 0x20, size 0x2
    unsigned short vDeltaAuxAS; // offset 0x22, size 0x2
};
// total size: 0xE
struct _AXPBITD {
    // Members
    unsigned short flag; // offset 0x0, size 0x2
    unsigned short bufferHi; // offset 0x2, size 0x2
    unsigned short bufferLo; // offset 0x4, size 0x2
    unsigned short shiftL; // offset 0x6, size 0x2
    unsigned short shiftR; // offset 0x8, size 0x2
    unsigned short targetShiftL; // offset 0xA, size 0x2
    unsigned short targetShiftR; // offset 0xC, size 0x2
};
// total size: 0xE
struct _AXPBUPDATE {
    // Members
    unsigned short updNum[5]; // offset 0x0, size 0xA
    unsigned short dataHi; // offset 0xA, size 0x2
    unsigned short dataLo; // offset 0xC, size 0x2
};
// total size: 0x12
struct _AXPBDPOP {
    // Members
    signed short aL; // offset 0x0, size 0x2
    signed short aAuxAL; // offset 0x2, size 0x2
    signed short aAuxBL; // offset 0x4, size 0x2
    signed short aR; // offset 0x6, size 0x2
    signed short aAuxAR; // offset 0x8, size 0x2
    signed short aAuxBR; // offset 0xA, size 0x2
    signed short aS; // offset 0xC, size 0x2
    signed short aAuxAS; // offset 0xE, size 0x2
    signed short aAuxBS; // offset 0x10, size 0x2
};
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    signed short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x6
struct _AXPBFIR {
    // Members
    unsigned short numCoefs; // offset 0x0, size 0x2
    unsigned short coefsHi; // offset 0x2, size 0x2
    unsigned short coefsLo; // offset 0x4, size 0x2
};
// total size: 0x10
struct _AXPBADDR {
    // Members
    unsigned short loopFlag; // offset 0x0, size 0x2
    unsigned short format; // offset 0x2, size 0x2
    unsigned short loopAddressHi; // offset 0x4, size 0x2
    unsigned short loopAddressLo; // offset 0x6, size 0x2
    unsigned short endAddressHi; // offset 0x8, size 0x2
    unsigned short endAddressLo; // offset 0xA, size 0x2
    unsigned short currentAddressHi; // offset 0xC, size 0x2
    unsigned short currentAddressLo; // offset 0xE, size 0x2
};
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[8][2]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
};
// total size: 0x6
struct _AXPBADPCMLOOP {
    // Members
    unsigned short loop_pred_scale; // offset 0x0, size 0x2
    unsigned short loop_yn1; // offset 0x2, size 0x2
    unsigned short loop_yn2; // offset 0x4, size 0x2
};
// total size: 0xC0
struct _AXPB {
    // Members
    unsigned short nextHi; // offset 0x0, size 0x2
    unsigned short nextLo; // offset 0x2, size 0x2
    unsigned short currHi; // offset 0x4, size 0x2
    unsigned short currLo; // offset 0x6, size 0x2
    unsigned short srcSelect; // offset 0x8, size 0x2
    unsigned short coefSelect; // offset 0xA, size 0x2
    unsigned short mixerCtrl; // offset 0xC, size 0x2
    unsigned short state; // offset 0xE, size 0x2
    unsigned short type; // offset 0x10, size 0x2
    struct _AXPBMIX mix; // offset 0x12, size 0x24
    struct _AXPBITD itd; // offset 0x36, size 0xE
    struct _AXPBUPDATE update; // offset 0x44, size 0xE
    struct _AXPBDPOP dpop; // offset 0x52, size 0x12
    struct _AXPBVE ve; // offset 0x64, size 0x4
    struct _AXPBFIR fir; // offset 0x68, size 0x6
    struct _AXPBADDR addr; // offset 0x6E, size 0x10
    struct _AXPBADPCM adpcm; // offset 0x7E, size 0x28
    struct _AXPBSRC src; // offset 0xA6, size 0xE
    struct _AXPBADPCMLOOP adpcmLoop; // offset 0xB4, size 0x6
    unsigned short pad[3]; // offset 0xBA, size 0x6
};
// total size: 0x1F8
struct _AXVPB {
    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    void * next1; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    void (* callback)(void *); // offset 0x10, size 0x4
    unsigned long userContext; // offset 0x14, size 0x4
    unsigned long index; // offset 0x18, size 0x4
    unsigned long sync; // offset 0x1C, size 0x4
    unsigned long depop; // offset 0x20, size 0x4
    unsigned long updateMS; // offset 0x24, size 0x4
    unsigned long updateCounter; // offset 0x28, size 0x4
    unsigned long updateTotal; // offset 0x2C, size 0x4
    unsigned short * updateWrite; // offset 0x30, size 0x4
    unsigned short updateData[128]; // offset 0x34, size 0x100
    void * itdBuffer; // offset 0x134, size 0x4
    struct _AXPB pb; // offset 0x138, size 0xC0
};
// total size: 0x8
class SoundSample {
    // Static members
    static unsigned long mSilenceEnd; // size: 0x4
    static unsigned long mSilenceStart; // size: 0x4
    static class SoundSample * mSilence; // size: 0x4
    static struct _AXVPB * mVoiceAlloc[64]; // size: 0x100

    // Members
protected:
    class ARAMObj * mARAM; // offset 0x0, size 0x4
    int mSampleRate; // offset 0x4, size 0x4
};
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// total size: 0x18
class SimNodeTarget : public SimTarget {
    // Members
protected:
    class SimNode * target; // offset 0x14, size 0x4
};
// total size: 0xAC
class GameSimNodeArt : public SimNodeArticulated {
    // Members
public:
    class SimNodeTarget * lookAtTarget; // offset 0xA0, size 0x4
    class ImpulseLink * leftHandLink; // offset 0xA4, size 0x4
    class ImpulseLink * rightHandLink; // offset 0xA8, size 0x4
};
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
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
// total size: 0x0
class tEventController {};
// total size: 0x4
class tEventOrigin {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEvent : public tRefCounted {};
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
// total size: 0x0
class PhysicsApp {};
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x0
class tLight {};
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
// total size: 0x118
class tPointCamera : public tCamera {
    // Members
protected:
    class Vector position; // offset 0xF0, size 0xC
    class Vector target; // offset 0xFC, size 0xC
    class Vector vup; // offset 0x108, size 0xC
    float TwistAngle; // offset 0x114, size 0x4
};
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x128
class ViewerCamera : public tPointCamera {
    // Members
    class Vector m_defaultPos; // offset 0x118, size 0xC
};
// total size: 0x0
class tPointLight {};
// total size: 0x0
class tShader {};
// total size: 0x0
class gcExtBufferCopy {};
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
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
// total size: 0x0
class tCameraAnimationController {};
// total size: 0x0
class tMultiController {};
// total size: 0x0
class SimCollSolver {};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x0
class guPrimGroupShadow {};
enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class DisplayList {
    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
};
// total size: 0x18
class Node : public tEntity {
    // Members
protected:
    class Node * parent; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0xA4
class PhysicsDrawable {
    // Static members
    static float mCurrentTime; // size: 0x4

    // Members
protected:
    unsigned char mIsMoving; // offset 0x0, size 0x1
    unsigned char mInSimGroup; // offset 0x1, size 0x1
    unsigned char mIsScenegraph; // offset 0x2, size 0x1
    unsigned char mIsComposite; // offset 0x3, size 0x1
    class tDrawable * mDrawable; // offset 0x4, size 0x4
    class SimGroup * mSimGroup; // offset 0x8, size 0x4
    class SimNode * mSimNode; // offset 0xC, size 0x4
    class PhObj * mPhObj; // offset 0x10, size 0x4
    class PhSTreeObj * mPhSTree; // offset 0x14, size 0x4
    class Matrix mTransform; // offset 0x18, size 0x40
    class Matrix mInverseTransform; // offset 0x58, size 0x40
    class guPrimGroupShadow * mShadowPrims; // offset 0x98, size 0x4
    int mType; // offset 0x9C, size 0x4
    float mLastCollisionSoundTime; // offset 0xA0, size 0x4
};
// total size: 0x0
class tCompositeDrawable {};
// total size: 0x1
class allocator {};
// total size: 0x4
struct _EmptyMemberOpt : public allocator {
    // Members
    unsigned long m_; // offset 0x0, size 0x4
};
// total size: 0x8
struct node_base {
    // Members
    struct node * prev_; // offset 0x0, size 0x4
    struct node * next_; // offset 0x4, size 0x4
};
// total size: 0xC
struct node : public node_base {
    // Members
    void * data_; // offset 0x8, size 0x4
};
// total size: 0x1
class allocator {};
// total size: 0x8
struct _EmptyMemberOpt : public allocator {
    // Members
    struct node_base m_; // offset 0x0, size 0x8
};
// total size: 0x1
struct iterator {};
// total size: 0x4
class iterator : public iterator {
    // Members
    struct node * node_; // offset 0x0, size 0x4
};
// total size: 0x1
struct iterator {};
// total size: 0x4
class const_iterator : public iterator {
    // Members
    const struct node * node_; // offset 0x0, size 0x4
};
// total size: 0x0
class reverse_iterator {};
// total size: 0x0
class reverse_iterator {};
// total size: 0xC
class list {
    // Members
    struct _EmptyMemberOpt alloc_; // offset 0x0, size 0x4
    struct _EmptyMemberOpt node_alloc_; // offset 0x4, size 0x8
};
// total size: 0x1
class allocator {};
// total size: 0x1
struct iterator {};
// total size: 0x4
class iterator : public iterator {
    // Members
    class iterator i_; // offset 0x0, size 0x4
};
// total size: 0x1
struct iterator {};
// total size: 0x4
class const_iterator : public iterator {
    // Members
    class const_iterator i_; // offset 0x0, size 0x4
};
// total size: 0x0
class reverse_iterator {};
// total size: 0x0
class reverse_iterator {};
// total size: 0xC
class list : private list {};
// total size: 0x0
class FlexDrawable {};
// total size: 0x0
class tTexture {};
// total size: 0xF4
class Game {
    // Members
    class PhysicsApp * mApp; // offset 0x0, size 0x4
    class tView * mView; // offset 0x4, size 0x4
    class ViewerCamera * mCamera; // offset 0x8, size 0x4
    class tPointLight * mLight; // offset 0xC, size 0x4
    class Vector mLightPos; // offset 0x10, size 0xC
    class Vector mLightDirection; // offset 0x1C, size 0xC
    class tShader * mShadowShader; // offset 0x28, size 0x4
    class gcExtBufferCopy * mBufferCopier; // offset 0x2C, size 0x4
    class pddiTexture * mShadowColourBuffer; // offset 0x30, size 0x4
    class tCamera * mAnimCamera; // offset 0x34, size 0x4
    unsigned char mUseAnimCamera; // offset 0x38, size 0x1
    class tCameraAnimationController * mCameraController; // offset 0x3C, size 0x4
    class tMultiController * mFireController; // offset 0x40, size 0x4
    class tMultiController * mLightController; // offset 0x44, size 0x4
    class tMultiController * mSmokeController; // offset 0x48, size 0x4
    class tSequencer * mDodgerSequencer; // offset 0x4C, size 0x4
    class GameSimGroup * mSimGroup; // offset 0x50, size 0x4
    class SimCollSolver * mCollSolver; // offset 0x54, size 0x4
    int mFixedDrawableCount; // offset 0x58, size 0x4
    class PhysicsDrawable * * mFixedDrawables; // offset 0x5C, size 0x4
    class PhysicsDrawable * mDodger; // offset 0x60, size 0x4
    class Vector mDodgerPos; // offset 0x64, size 0xC
    class tShader * mShadowVolumeShader; // offset 0x70, size 0x4
    int mDodgerShadowCount; // offset 0x74, size 0x4
    class guPrimGroupShadow * * mDodgerShadows; // offset 0x78, size 0x4
    int * mDodgerShadowJointIndex; // offset 0x7C, size 0x4
    class tPose * mDodgerPose; // offset 0x80, size 0x4
    class tCompositeDrawable * mDodgerShadowComp; // offset 0x84, size 0x4
    class list mDrawables; // offset 0x88, size 0xC
    class FlexDrawable * mFlexDrawable; // offset 0x94, size 0x4
    float mUpdateTime; // offset 0x98, size 0x4
    float mThinkTime; // offset 0x9C, size 0x4
    float mRenderTime; // offset 0xA0, size 0x4
    float mShadowTime; // offset 0xA4, size 0x4
    unsigned char mAutoRotate; // offset 0xA8, size 0x1
    class SoundSample * mMusicL; // offset 0xAC, size 0x4
    class SoundSample * mMusicR; // offset 0xB0, size 0x4
    class SoundSample * mAmbientL; // offset 0xB4, size 0x4
    class SoundSample * mAmbientR; // offset 0xB8, size 0x4
    class SoundSample * mTorchFireL; // offset 0xBC, size 0x4
    class SoundSample * mTorchFireR; // offset 0xC0, size 0x4
    class SoundSample * mLaunchSound; // offset 0xC4, size 0x4
    class SoundSample * mRockDieSound; // offset 0xC8, size 0x4
    int mProjectileTypeCount; // offset 0xCC, size 0x4
    class list * mProjectiles; // offset 0xD0, size 0x4
    unsigned char mDisplayCollisionVolumes; // offset 0xD4, size 0x1
    unsigned char mDisplayStats; // offset 0xD5, size 0x1
    class tShader * mLogoShader; // offset 0xD8, size 0x4
    class tTexture * mRadLogo; // offset 0xDC, size 0x4
    unsigned char mInStumble; // offset 0xE0, size 0x1
    float mXDir; // offset 0xE4, size 0x4
    float mZDir; // offset 0xE8, size 0x4
    float mStumbleTime; // offset 0xEC, size 0x4
    float mStumbleTimeElapsed; // offset 0xF0, size 0x4
};
// total size: 0xC4
class GameSimGroup : public SimGroup {
    // Functions
    GameSimGroup();

    void LoadSounds();

    void PushCollisionSoundEvent(class SimNode * a, class SimNode * b, float dvn);

    class SimNodeArticulated * NewSimNodeArticulated(class PhSTreeObj * obj, class tPose * pose, class Matrix * rm);

    unsigned char RequestNewState(class SimNodeArticulated * c, const class Vector & vcmdeviation);

    unsigned char RequestNewSimNodeArticulatedControl(class SimNodeArticulated * n, signed short c);

    // Members
protected:
    class SoundSample * mDodgerHitSounds[4]; // offset 0x6C, size 0x10
    class SoundSample * mDodgerOofSounds[4]; // offset 0x7C, size 0x10
    class SoundSample * mBallSounds[5]; // offset 0x8C, size 0x14
    class SoundSample * mCubeSounds[6]; // offset 0xA0, size 0x18
    class GameSimNodeArt * mCharSimNode; // offset 0xB8, size 0x4
    class tSequencer * mSequencer; // offset 0xBC, size 0x4
    class Game * mGame; // offset 0xC0, size 0x4
};
// Range: 0x80009390 -> 0x800093F0
// this: r1+0x8
GameSimGroup::GameSimGroup() {
    // References
    // -> struct [anonymous] GameSimGroup::__vtable;
}

// Range: 0x800093F0 -> 0x800096DC
// this: r30
void GameSimGroup::LoadSounds() {}

float mCurrentTime; // size: 0x4, address: 0x8013AE88
// total size: 0x8
class Randomizer {
    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
class Randomizer GlobalRandomizer; // size: 0x8, address: 0x8013AE80
enum PhysicsTypes {
    Dodger = 0,
    ProjectileB = 1,
    ProjectileC = 2,
    Arena = 3,
};
// Range: 0x800096DC -> 0x80009978
// this: r31
void GameSimGroup::PushCollisionSoundEvent(class SimNode * a /* r4 */, class SimNode * b /* r29 */, float dvn /* f31 */) {
    // Local variables
    class PhysicsDrawable * pda; // r30
    class PhysicsDrawable * pdb; // r4
    enum PhysicsTypes typea; // r5
    enum PhysicsTypes typeb; // r6
    int sound; // r1+0x8
    float pitch; // f3
    float vol; // f1
    int sound; // r1+0x8
    float pitch; // f3
    int sound; // r1+0x8
    float pitch; // f3

    // References
    // -> class Randomizer GlobalRandomizer;
    // -> float mCurrentTime;
}

// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
// total size: 0x10
class SimNodeBase {
    // Static members
    static int gRefIndex; // size: 0x4
    static class SimNodeBase * gNodeList[100]; // size: 0x190

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class Matrix * rootMatrix; // offset 0x4, size 0x4
    class SimGroup * simGroup; // offset 0x8, size 0x4
    int refIndex; // offset 0xC, size 0x4
};
// total size: 0x0
class SimRestBase {};
// total size: 0x20
class SimNode : public SimNodeBase {
    // Members
protected:
    class PhObj * phObj; // offset 0x10, size 0x4
    class PhCollEl * collEl; // offset 0x14, size 0x4
    class SimRestBase * simRest; // offset 0x18, size 0x4
    unsigned char wasSimulating; // offset 0x1C, size 0x1
    unsigned char useWasSimulating; // offset 0x1D, size 0x1
    unsigned char useTestRest; // offset 0x1E, size 0x1
    unsigned char movingObj; // offset 0x1F, size 0x1
};
// Range: 0x80009978 -> 0x800099D8
// this: r28
class SimNodeArticulated * GameSimGroup::NewSimNodeArticulated(class PhSTreeObj * obj /* r29 */, class tPose * pose /* r30 */, class Matrix * rm /* r31 */) {}

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
// Range: 0x800099D8 -> 0x80009C10
// this: r29
unsigned char GameSimGroup::RequestNewState(class SimNodeArticulated * c /* r4 */, const class Vector & vcmdeviation /* r30 */) {
    // Local variables
    class Vector bbvect; // r1+0x50
    class Vector up; // r1+0x40
    class Vector rightVect; // r1+0x28
    float goright; // f29
    float dist; // f28
}

// Range: 0x80009C10 -> 0x80009C48
// this: r3
unsigned char GameSimGroup::RequestNewSimNodeArticulatedControl(class SimNodeArticulated * n /* r4 */, signed short c /* r5 */) {}

static // total size: 0x8
struct {} SimGroup::__RTTI; // size: 0x8, address: 0x801377E0
static // total size: 0x8
struct {} GameSimGroup::__RTTI; // size: 0x8, address: 0x801377E8
// total size: 0x14
class VoidPList {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char fLock; // offset 0x4, size 0x1
private:
    int fSize; // offset 0x8, size 0x4
    int fArraySize; // offset 0xC, size 0x4
    void * fArray; // offset 0x10, size 0x4
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
enum CollElEnum {
    CollEl = 0,
    SphereEl = 1,
    CylEl = 2,
    ConeEl = 3,
    OBBoxEl = 4,
    WallEl = 5,
    BBoxEl = 6,
    MaxCollElEnum = 7,
};
// total size: 0x14
class PhCollElList : public VoidPList {};
// total size: 0x1C
class PhSymMat {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float xx; // offset 0x4, size 0x4
    float xy; // offset 0x8, size 0x4
    float xz; // offset 0xC, size 0x4
    float yy; // offset 0x10, size 0x4
    float yz; // offset 0x14, size 0x4
    float zz; // offset 0x18, size 0x4
};
// total size: 0x40
class PhCollEl {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class Vector fP; // offset 0x4, size 0xC
    class Vector fBSize; // offset 0x10, size 0xC
    float fSR; // offset 0x1C, size 0x4
protected:
    enum CollElEnum fType; // offset 0x20, size 0x4
    int fObjRef; // offset 0x24, size 0x4
    class PhBasicObj * fObj; // offset 0x28, size 0x4
    class PhCollElList * fSubElemList; // offset 0x2C, size 0x4
    int fLevel; // offset 0x30, size 0x4
    unsigned char fUpdated; // offset 0x34, size 0x1
    unsigned char fApproxBSize; // offset 0x35, size 0x1
private:
    class Vector * fDP; // offset 0x38, size 0x4
    int fAIRef; // offset 0x3C, size 0x4
};
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
};
// total size: 0x0
class TList {};
// total size: 0x4
class PhUnits {
    // Static members
    static class TList * fList; // size: 0x4
    static float fT; // size: 0x4
    static float fM; // size: 0x4
    static float fL; // size: 0x4
    static unsigned char fUnitSet; // size: 0x1

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x24
class iPhBasicObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fRestCoeff; // offset 0xC, size 0x4
    float fTangRestCoeff; // offset 0x10, size 0x4
    float fFrictCoeff; // offset 0x14, size 0x4
    float fCollDist; // offset 0x18, size 0x4
    float fFrictCoeffCGS; // offset 0x1C, size 0x4
    float fCollDistCGS; // offset 0x20, size 0x4
};
// total size: 0x0
class PhBasicObjState {};
// total size: 0x70
class PhBasicObj : public tEntity {
    // Static members
    static int sPhBasicObjRefIndex; // size: 0x4
    static float Small_Speed; // size: 0x4

    // Members
public:
    void * userData; // offset 0x10, size 0x4
    char fStringData[24]; // offset 0x14, size 0x18
protected:
    class Vector fR; // offset 0x2C, size 0xC
    signed short fType; // offset 0x38, size 0x2
    signed short fControl; // offset 0x3A, size 0x2
    class PhCollEl * fCollEl; // offset 0x3C, size 0x4
    unsigned char fCollElPreUpdated; // offset 0x40, size 0x1
    class PhWorld * fWorld; // offset 0x44, size 0x4
    class iPhBasicObjParam * fBasicParam; // offset 0x48, size 0x4
    unsigned char fCacheEmpty; // offset 0x4C, size 0x1
    unsigned char fHollow; // offset 0x4D, size 0x1
    int fRefIndex; // offset 0x50, size 0x4
    float fSleepTime; // offset 0x54, size 0x4
private:
    unsigned char justCollide; // offset 0x58, size 0x1
    float fTypicalLinVel; // offset 0x5C, size 0x4
    float fTypicalAngVel; // offset 0x60, size 0x4
    float fTypicalLength; // offset 0x64, size 0x4
    float fTypicalPeriod; // offset 0x68, size 0x4
};
// total size: 0x14
class PhBasicObjList : public VoidPList {};
// total size: 0x0
class PhPairEl {};
// total size: 0x14
class PhPairElList : public VoidPList {};
// total size: 0x0
class PhSTreeObj {};
// total size: 0x14
class PhSTreeObjList : public VoidPList {};
// total size: 0x0
class PhCollision {};
// total size: 0x14
class PhCollisionList : public VoidPList {};
// total size: 0x2C
class PhCollData {
    // Static members
    static class PhCollisionList * fBuffList; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhCollisionList fCollList; // offset 0x4, size 0x14
    class PhCollisionList fUpdateCollList; // offset 0x18, size 0x14
};
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x0
class PhCollSolver {};
enum GEOM_CODE {
    NO_INTERSECTION = -1,
    ALL_INSIDE = 0,
    ONE_POINT = 1,
    TWO_POINTS = 2,
    THREE_POINTS = 3,
};
// total size: 0x6C
class PhCyl : public PhCollEl {
    // Members
public:
    class Vector fO; // offset 0x40, size 0xC
    float fL; // offset 0x4C, size 0x4
    float fR; // offset 0x50, size 0x4
    unsigned char fFlatEnd; // offset 0x54, size 0x1
protected:
    class Vector fOi; // offset 0x58, size 0xC
    float fLi; // offset 0x64, size 0x4
    float fRi; // offset 0x68, size 0x4
};
// total size: 0xA0
class PhOBBox : public PhCollEl {
    // Members
public:
    class Vector fO[3]; // offset 0x40, size 0x24
    float fL[3]; // offset 0x64, size 0xC
protected:
    class Vector fOi[3]; // offset 0x70, size 0x24
    float fLi[3]; // offset 0x94, size 0xC
};
// total size: 0x34
class PhCollDetectSub {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhPairElList * fPairList; // offset 0x4, size 0x4
    class PhCollData * fCollData; // offset 0x8, size 0x4
    int fLevel; // offset 0xC, size 0x4
    float fCollDist; // offset 0x10, size 0x4
    class Vector fT; // offset 0x14, size 0xC
    class Vector fN; // offset 0x20, size 0xC
    float fNt; // offset 0x2C, size 0x4
    int fNewColl; // offset 0x30, size 0x4
};
// total size: 0x58
class PhWall : public PhCollEl {
    // Members
public:
    class Vector fN; // offset 0x40, size 0xC
protected:
    class Vector fNi; // offset 0x4C, size 0xC
};
// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// total size: 0x48
class PhCollDetect : protected PhCollDetectSub, public AccessCounter {
    // Members
protected:
    unsigned char fQuickDetection; // offset 0x3C, size 0x1
    int fMaxStepNextTest; // offset 0x40, size 0x4
    float fSafeCollDistMultiple; // offset 0x44, size 0x4
};
// total size: 0x0
class PhWorldState {};
// total size: 0x0
class PhParticle {};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhTime : public iPhTime {};
// total size: 0x78
class PhWorld {
    // Static members
    static class PhCollSolver * fCollSolver; // size: 0x4
    static class PhCollDetect * fCollDetector; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhBasicObjList fObjList; // offset 0x4, size 0x14
    class PhPairElList fPairCollElList; // offset 0x18, size 0x14
    class PhSTreeObjList fSelfCollObjList; // offset 0x2C, size 0x14
    class PhCollData * fCollData; // offset 0x40, size 0x4
    class iPhEnv * fEnv; // offset 0x44, size 0x4
    class PhBBox * fBBox; // offset 0x48, size 0x4
    unsigned char fCollNonDynPair; // offset 0x4C, size 0x1
    unsigned char fSubIterate; // offset 0x4D, size 0x1
    float fMaxDt; // offset 0x50, size 0x4
    float fDt; // offset 0x54, size 0x4
    float fDDt; // offset 0x58, size 0x4
    int fNStep; // offset 0x5C, size 0x4
    float fTotalTime; // offset 0x60, size 0x4
    float fTimeDelta; // offset 0x64, size 0x4
    unsigned char fShowAllFrames; // offset 0x68, size 0x1
    int fUpdateCollisionFrequency; // offset 0x6C, size 0x4
    int fUpdateCollisionCall; // offset 0x70, size 0x4
    unsigned char fSelfCollision; // offset 0x74, size 0x1
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class ImpulseLinkMgr {};
// total size: 0x0
class IKanLinkMgr {};
// total size: 0x0
class SimFlexJointMgr {};
// total size: 0x0
class TrackerLink {};
// total size: 0x0
class PhComposite {};
// total size: 0x40
class VirtualCM {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class Vector vP; // offset 0x4, size 0xC
    class Vector vS; // offset 0x10, size 0xC
    class Vector vA; // offset 0x1C, size 0xC
    float invTP; // offset 0x28, size 0x4
    float invTS; // offset 0x2C, size 0x4
    float invTA; // offset 0x30, size 0x4
    float restP; // offset 0x34, size 0x4
    float restS; // offset 0x38, size 0x4
    unsigned char verticalVcm; // offset 0x3C, size 0x1
};
// total size: 0x0
class SimFlexJoint {};
// total size: 0x0
class IKanLink {};
// total size: 0x0
class ImpulseLink {};
// total size: 0x0
class tPose {};
// total size: 0xA0
class SimNodeArticulated : public SimNode {
    // Members
protected:
    float wdtDissipHybrid; // offset 0x20, size 0x4
    float wdtDissipFullPhysics; // offset 0x24, size 0x4
    class ImpulseLinkMgr * impulseLinkMgr; // offset 0x28, size 0x4
    class IKanLinkMgr * ikanLinkMgr; // offset 0x2C, size 0x4
    class SimFlexJointMgr * simFlexJointMgr; // offset 0x30, size 0x4
    class TrackerLink * trackerLink; // offset 0x34, size 0x4
    class PhComposite * phcomp; // offset 0x38, size 0x4
    class Vector bbVect; // offset 0x3C, size 0xC
    class VirtualCM virtualCM; // offset 0x48, size 0x40
    float height; // offset 0x88, size 0x4
    float frontDev; // offset 0x8C, size 0x4
    float sideDev; // offset 0x90, size 0x4
    float strength; // offset 0x94, size 0x4
    float strength_up; // offset 0x98, size 0x4
    float updateTime; // offset 0x9C, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class SimFlex {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class TrackerLinkMgr {};
// total size: 0x14
class iPhDynObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fDensity; // offset 0xC, size 0x4
    float fDensityCGS; // offset 0x10, size 0x4
};
// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {};
// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {};
// total size: 0x0
class FlexJointDef {};
// total size: 0x0
class tSkeleton {};
// total size: 0x0
class ParticleSystem {};
// total size: 0x6C
class SimGroup {
    // Static members
    static int simGroupCounter; // size: 0x4
    static float MSCALE; // size: 0x4
    static float TSCALE; // size: 0x4
    static float LSCALE; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhWorld * phworld; // offset 0x4, size 0x4
    class TList simNodes; // offset 0x8, size 0x14
    class TList simNodeArticulateds; // offset 0x1C, size 0x14
    class TList simFlexs; // offset 0x30, size 0x14
    class SimFlexJointMgr * simFlexJointMgr; // offset 0x44, size 0x4
    class IKanLinkMgr * ikanLinkMgr; // offset 0x48, size 0x4
    class TrackerLinkMgr * trackerLinkMgr; // offset 0x4C, size 0x4
    class SimNodeBase * selObj; // offset 0x50, size 0x4
    float simTime; // offset 0x54, size 0x4
    class SimNode * floorNode; // offset 0x58, size 0x4
    class PhDynObjParam * treedynparam; // offset 0x5C, size 0x4
    class PhDynObjParam * dynparam; // offset 0x60, size 0x4
    class PhBasicObjParam * bparam; // offset 0x64, size 0x4
    class PhBasicObjParam * treebparam; // offset 0x68, size 0x4
};



