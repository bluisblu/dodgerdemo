/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\game.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80005AFC -> 0x80008DA0
*/
// total size: 0x8
class Randomizer {
    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
class Randomizer GlobalRandomizer; // size: 0x8, address: 0x8013AE80
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
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x30
class tEntityTable : public tEntity {
    // Members
    int tableSize; // offset 0x10, size 0x4
    class tEntity * * table; // offset 0x14, size 0x4
    int nElement; // offset 0x18, size 0x4
    int resizeThreshhold; // offset 0x1C, size 0x4
    int nDeleteMarker; // offset 0x20, size 0x4
    int repackThreshhold; // offset 0x24, size 0x4
    class tEntity * deleteMarker; // offset 0x28, size 0x4
};
// total size: 0x458
class tInventory : public tEntityStore {
    // Members
protected:
    int nSection; // offset 0x8, size 0x4
    int currentSection; // offset 0xC, size 0x4
    unsigned char currentSectionOnly; // offset 0x10, size 0x1
    int sectionStack[16]; // offset 0x14, size 0x40
    int stackPos; // offset 0x54, size 0x4
    class tEntityTable * section[256]; // offset 0x58, size 0x400
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
// total size: 0x4
class MemoryManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x0
class LoadTask {};
// total size: 0x0
class tChunkFile {};
// total size: 0x10
class tChunkHandler : public tEntity {};
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
// total size: 0x4
class AsyncDone {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tLoadManager : public tRefCounted {
    // Members
protected:
    class tEntityStore * store; // offset 0x8, size 0x4
    int nLoadSlots; // offset 0xC, size 0x4
    int nLoaders; // offset 0x10, size 0x4
    class tFileHandler * * loaders; // offset 0x14, size 0x4
    class MemoryManager * memManager; // offset 0x18, size 0x4
    class LoadTask * async; // offset 0x1C, size 0x4
};
// total size: 0x4
class tMatrixStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
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
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
};
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
enum pddiStateMask {
    PDDI_STATE_RENDER = 1,
    PDDI_STATE_VIEW = 2,
    PDDI_STATE_LIGHTING = 4,
    PDDI_STATE_FOG = 8,
    PDDI_STATE_STENCIL = 16,
    PDDI_STATE_ALL = -1,
};
enum pddiStatType {
    PDDI_STAT_CURRENT_FRAME = 0,
    PDDI_STAT_FRAME_TIME = 1,
    PDDI_STAT_BUFFERED_PRIM = 2,
    PDDI_STAT_BUFFERED_PRIM_VERT = 3,
    PDDI_STAT_BUFFERED_INDEXED_PRIM = 4,
    PDDI_STAT_BUFFERED_INDEXED_PRIM_VERT = 5,
    PDDI_STAT_BUFFERED_PRIM_CALLS = 6,
    PDDI_STAT_BUFFERED_PRIM_AVG = 7,
    PDDI_STAT_BUFFERED_COUNT = 8,
    PDDI_STAT_BUFFERED_ALLOC = 9,
    PDDI_STAT_STREAMED_PRIM = 10,
    PDDI_STAT_STREAMED_PRIM_VERT = 11,
    PDDI_STAT_STREAMED_PRIM_CALLS = 12,
    PDDI_STAT_STREAMED_PRIM_AVG = 13,
    PDDI_STAT_SKINNED_BONES = 14,
    PDDI_STAT_SKINNED_XFORM_VERT = 15,
    PDDI_STAT_SKINNED_XFORM_MS = 16,
    PDDI_STAT_SKINNED_WAIT_MS = 17,
    PDDI_STAT_MATRIX_OPS = 18,
    PDDI_STAT_LIGHT_OPS = 19,
    PDDI_STAT_MATERIAL_OPS = 20,
    PDDI_STAT_TEXTURE_HITS = 21,
    PDDI_STAT_TEXTURE_MISSES = 22,
    PDDI_STAT_TEXTURE_UPLOADED = 23,
    PDDI_STAT_TEXTURE_ALLOCATED = 24,
    PDDI_STAT_TEXTURE_SLOP = 25,
    PDDI_STAT_TEXTURE_COUNT_4BIT = 26,
    PDDI_STAT_TEXTURE_ALLOC_4BIT = 27,
    PDDI_STAT_TEXTURE_COUNT_8BIT = 28,
    PDDI_STAT_TEXTURE_ALLOC_8BIT = 29,
    PDDI_STAT_TEXTURE_COUNT_16BIT = 30,
    PDDI_STAT_TEXTURE_ALLOC_16BIT = 31,
    PDDI_STAT_TEXTURE_COUNT_32BIT = 32,
    PDDI_STAT_TEXTURE_ALLOC_32BIT = 33,
    PDDI_STAT_TEXTURE_COUNT_DXTN = 34,
    PDDI_STAT_TEXTURE_ALLOC_DXTN = 35,
};
enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
enum pddiCompareMode {
    PDDI_COMPARE_NONE = 0,
    PDDI_COMPARE_ALWAYS = 1,
    PDDI_COMPARE_LESS = 2,
    PDDI_COMPARE_LESSEQUAL = 3,
    PDDI_COMPARE_GREATER = 4,
    PDDI_COMPARE_GREATEREQUAL = 5,
    PDDI_COMPARE_EQUAL = 6,
    PDDI_COMPARE_NOTEQUAL = 7,
};
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_FASTEST = 1,
    PDDI_HINT_SMALLEST = 2,
    PDDI_HINT_MEMORY_IMAGE = 3,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// total size: 0xC
class pddiRenderContext : public pddiObject {};
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
enum pddiDisplayMode {
    PDDI_DISPLAY_FULLSCREEN = 0,
    PDDI_DISPLAY_WINDOW = 1,
    PDDI_DISPLAY_FULLSCREEN_PAL = 2,
};
// total size: 0xC
class pddiDisplay : public pddiObject {};
// total size: 0x110
struct pddiLibInfo {
    // Members
    int versionMajor; // offset 0x0, size 0x4
    int versionMinor; // offset 0x4, size 0x4
    int versionBuild; // offset 0x8, size 0x4
    int libID; // offset 0xC, size 0x4
    char description[256]; // offset 0x10, size 0x100
};
// total size: 0xC
class pddiDevice : public pddiObject {};
// total size: 0xC
class pddiExtHardwareSkinning : public pddiObject {};
enum p3dMatrixType {
    P3D_MATRIX_MODELVIEW = 0,
};
// total size: 0xF8
class tContext {
    // Members
    class tInventory * Inventory; // offset 0x0, size 0x4
    class tLoadManager * loadManager; // offset 0x4, size 0x4
    unsigned int FrameCount; // offset 0x8, size 0x4
    class tMatrixStack * stack; // offset 0xC, size 0x4
    class tView * View; // offset 0x10, size 0x4
    class Matrix CVM; // offset 0x14, size 0x40
    class Matrix CVMI; // offset 0x54, size 0x40
    class Matrix CWM; // offset 0x94, size 0x40
    struct pddiColour clearColour; // offset 0xD4, size 0x4
    float clearDepth; // offset 0xD8, size 0x4
    unsigned int clearStencil; // offset 0xDC, size 0x4
    unsigned int clearMask; // offset 0xE0, size 0x4
    int nLights; // offset 0xE4, size 0x4
    class pddiDevice * RenderDevice; // offset 0xE8, size 0x4
    class pddiRenderContext * RenderContext; // offset 0xEC, size 0x4
    class pddiDisplay * RenderDisplay; // offset 0xF0, size 0x4
    class pddiExtHardwareSkinning * skinning; // offset 0xF4, size 0x4
};
// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
// total size: 0x4C
class PhysicsApp {
    // Members
    class tContext * mContext; // offset 0x0, size 0x4
    unsigned char mAppDone; // offset 0x4, size 0x1
    class Game * mGame; // offset 0x8, size 0x4
    struct PADStatus mControllers[4]; // offset 0xC, size 0x30
    unsigned short mPreviousButtonState[4]; // offset 0x3C, size 0x8
    unsigned short mButtonDown[4]; // offset 0x44, size 0x8
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
// total size: 0x40
class tPointLight : public tLight {
    // Members
protected:
    class Vector position; // offset 0x20, size 0xC
    float a; // offset 0x2C, size 0x4
    float b; // offset 0x30, size 0x4
    float c; // offset 0x34, size 0x4
    float range; // offset 0x38, size 0x4
};
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
// total size: 0xC
class pddiExtBufferCopy : public pddiObject {};
// total size: 0x0
class gcDevice {};
// total size: 0x14
class gcExtBufferCopy : public pddiExtBufferCopy {
    // Members
    class gcContext * mContext; // offset 0xC, size 0x4
    class gcDevice * mDevice; // offset 0x10, size 0x4
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
// total size: 0xC
struct TrackInfo {
    // Members
    float startTime; // offset 0x0, size 0x4
    float endTime; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x38
class tMultiController : public tFrameController {
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
// total size: 0x18
class PhPairEl {
    // Static members
    static unsigned char fUseAtRest; // size: 0x1
    static class PhPairElList * fBuffList; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhCollEl * fEla; // offset 0x4, size 0x4
    class PhCollEl * fElb; // offset 0x8, size 0x4
    int fCollide; // offset 0xC, size 0x4
    unsigned char fAtRest; // offset 0x10, size 0x1
    int fStepNextTest; // offset 0x14, size 0x4
};
// total size: 0x14
class PhPairElList : public VoidPList {};
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
// total size: 0x14
class iPhDynObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fDensity; // offset 0xC, size 0x4
    float fDensityCGS; // offset 0x10, size 0x4
};
// total size: 0x4
class Filter3D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x2C
class SimpleFilter3D : public Filter3D {
    // Members
protected:
    class Vector fDelta; // offset 0x4, size 0xC
    class Vector fDeltaScl; // offset 0x10, size 0xC
    class Vector fPrevMeasurement; // offset 0x1C, size 0xC
    float fDt; // offset 0x28, size 0x4
};
// total size: 0x2C
class SimpleFilterAbs3D : public SimpleFilter3D {};
// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
// total size: 0x120
class PhParticle : public PhObj {
    // Members
protected:
    float fInvMass; // offset 0xB8, size 0x4
    float fMass; // offset 0xBC, size 0x4
    float fVolumei; // offset 0xC0, size 0x4
    float fVolume; // offset 0xC4, size 0x4
    class Vector fV; // offset 0xC8, size 0xC
    class iPhDynObjParam * fDynParam; // offset 0xD4, size 0x4
    class Vector fCacheV; // offset 0xD8, size 0xC
    class Vector fF; // offset 0xE4, size 0xC
    signed short fTmpCtrl; // offset 0xF0, size 0x2
    class SimpleFilterAbs3D fLinRestCond; // offset 0xF4, size 0x2C
};
// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x4
class Filter1D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
class SimpleFilter1D : public Filter1D {
    // Members
protected:
    float fDelta; // offset 0x4, size 0x4
    float fDeltaScl; // offset 0x8, size 0x4
    float fPrevMeasurement; // offset 0xC, size 0x4
    float fDt; // offset 0x10, size 0x4
};
// total size: 0x1E8
class PhRgdBody : public PhParticle {
    // Members
protected:
    class Vector fRcm; // offset 0x120, size 0xC
    class Vector fDRcm0; // offset 0x12C, size 0xC
    unsigned char fDRcmNot0; // offset 0x138, size 0x1
    class Vector fL; // offset 0x13C, size 0xC
    class Vector fW; // offset 0x148, size 0xC
    class PhSymMat fI0; // offset 0x154, size 0x1C
    class PhSymMat fI; // offset 0x170, size 0x1C
    class PhSymMat fIinv; // offset 0x18C, size 0x1C
    class Vector fT; // offset 0x1A8, size 0xC
    class Vector fCacheL; // offset 0x1B4, size 0xC
    class Quaternion fQ; // offset 0x1C0, size 0x10
    class SimpleFilter1D fAngRestCond1D_mag; // offset 0x1D0, size 0x14
};
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// total size: 0x0
class tSkeleton {};
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
// total size: 0x14
class PhSubSTreeObjList : public VoidPList {};
// total size: 0x0
class PhDOFData {};
// total size: 0x150
class PhSubSTreeObj : public PhBasicObj {
    // Members
protected:
    int fIndex; // offset 0x70, size 0x4
    int fParentIndex; // offset 0x74, size 0x4
    class PhSubSTreeObj * fParentSubObj; // offset 0x78, size 0x4
    class PhSTreeObj * fParentObj; // offset 0x7C, size 0x4
    class PhSubSTreeObjList * fLChildSubObj; // offset 0x80, size 0x4
    unsigned char fSimulate; // offset 0x84, size 0x1
    class PhSymMat fI0; // offset 0x88, size 0x1C
    class Vector fCM0; // offset 0xA4, size 0xC
    class Vector fCM; // offset 0xB0, size 0xC
    float fVolume; // offset 0xBC, size 0x4
    float fCMn; // offset 0xC0, size 0x4
    float fInvStiff; // offset 0xC4, size 0x4
    float fLMax; // offset 0xC8, size 0x4
    float fReactScale; // offset 0xCC, size 0x4
    class PhDOFData * fDOFData; // offset 0xD0, size 0x4
    class Matrix fRotMat; // offset 0xD4, size 0x40
    class Vector fW; // offset 0x114, size 0xC
    class Vector fV; // offset 0x120, size 0xC
    class Vector fDV; // offset 0x12C, size 0xC
    float fCacheAbs; // offset 0x138, size 0x4
    unsigned char fSpeedProblem; // offset 0x13C, size 0x1
    float fFakeInvI; // offset 0x140, size 0x4
    float fWeightModifier; // offset 0x144, size 0x4
    unsigned char fMaxSpeedReached; // offset 0x148, size 0x1
    unsigned char fDone; // offset 0x149, size 0x1
};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0x240
class PhSTreeObj : public PhRgdBody {
    // Members
protected:
    class iPhEnv * fEnv; // offset 0x1E8, size 0x4
    class tPose * fPose; // offset 0x1EC, size 0x4
    class PhSubSTreeObj * fSubObj; // offset 0x1F0, size 0x4
    int fNbSubObj; // offset 0x1F4, size 0x4
    float fDt; // offset 0x1F8, size 0x4
    unsigned char fSubObjUpToDate; // offset 0x1FC, size 0x1
    float fTimeSinceCalcI0; // offset 0x200, size 0x4
    float fTimeCalcI0; // offset 0x204, size 0x4
    float fTimeSinceLastColl; // offset 0x208, size 0x4
    float fMaxJSpeed; // offset 0x20C, size 0x4
    float fInvTWDTDissip; // offset 0x210, size 0x4
    float fInvTWNewDissip; // offset 0x214, size 0x4
    float fInvWDissip; // offset 0x218, size 0x4
    class PhSubSTreeObj * fCollidingJoint; // offset 0x21C, size 0x4
    class PhSubSTreeObj * fSelfCollisionCenter; // offset 0x220, size 0x4
    unsigned char fSelfCollInProcess; // offset 0x224, size 0x1
    class PhPairElList * fPairCollElList; // offset 0x228, size 0x4
private:
    class Vector fCacheW; // offset 0x22C, size 0xC
    int fStartJoint; // offset 0x238, size 0x4
};
// total size: 0x14
class PhSTreeObjList : public VoidPList {};
// total size: 0x94
class PhCollision {
    // Members
public:
    class PhCollEl * fEla; // offset 0x0, size 0x4
    class PhCollEl * fElb; // offset 0x4, size 0x4
    class Vector fN; // offset 0x8, size 0xC
    float fDist; // offset 0x14, size 0x4
    unsigned char fDyn; // offset 0x18, size 0x1
    unsigned char fFixRest; // offset 0x19, size 0x1
    unsigned char fValid; // offset 0x1A, size 0x1
    class PhBasicObj * fObja; // offset 0x1C, size 0x4
    class PhBasicObj * fObjb; // offset 0x20, size 0x4
    unsigned char fQuickSolve; // offset 0x24, size 0x1
    class PhSymMat fMx; // offset 0x28, size 0x1C
    class PhSymMat fMa; // offset 0x44, size 0x1C
    class PhSymMat fMb; // offset 0x60, size 0x1C
protected:
    class Vector fPa; // offset 0x7C, size 0xC
    class Vector fPb; // offset 0x88, size 0xC
};
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
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x60
class PhCollSolver : public AccessCounter {
    // Members
protected:
    class PhCollisionList * fCollList; // offset 0x8, size 0x4
    class iPhEnv * fEnv; // offset 0xC, size 0x4
    class PhCollision * fCurrColl; // offset 0x10, size 0x4
    class Vector fPa; // offset 0x14, size 0xC
    class Vector fPb; // offset 0x20, size 0xC
    class Vector fVa; // offset 0x2C, size 0xC
    class Vector fVb; // offset 0x38, size 0xC
    class Vector fDV; // offset 0x44, size 0xC
    float fNDVN; // offset 0x50, size 0x4
    float fCollDist; // offset 0x54, size 0x4
    unsigned char fAllSolved; // offset 0x58, size 0x1
    unsigned char fFirst; // offset 0x59, size 0x1
    unsigned char fFullDynColl; // offset 0x5A, size 0x1
    unsigned char fSelfColl; // offset 0x5B, size 0x1
    unsigned char fQuickSolve; // offset 0x5C, size 0x1
};
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
class ParticleSystem {};
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x44
class FlexParticle {
    // Members
public:
    int index; // offset 0x0, size 0x4
    float x[3]; // offset 0x4, size 0xC
    float v[3]; // offset 0x10, size 0xC
    float uv[2]; // offset 0x1C, size 0x8
    unsigned char free; // offset 0x24, size 0x1
    unsigned char broken; // offset 0x25, size 0x1
    float collConstrain[2][3]; // offset 0x28, size 0x18
    int inColl; // offset 0x40, size 0x4
};
// total size: 0x34
class ConditionParams {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float Stretch1Dkf; // offset 0x4, size 0x4
    float Stretch1Dkd; // offset 0x8, size 0x4
    float Bend1Dkf; // offset 0xC, size 0x4
    float Bend1Dkd; // offset 0x10, size 0x4
    float Wind1DKf; // offset 0x14, size 0x4
    float Stretch2Dkf; // offset 0x18, size 0x4
    float Stretch2Dkd; // offset 0x1C, size 0x4
    float Shear2Dkf; // offset 0x20, size 0x4
    float Shear2Dkd; // offset 0x24, size 0x4
    float Bend2Dkf; // offset 0x28, size 0x4
    float Bend2Dkd; // offset 0x2C, size 0x4
    float Wind2DKf; // offset 0x30, size 0x4
};
// total size: 0xD0
class SimFlex : public SimNodeBase {
    // Members
public:
    class ParticleSystem * psyst; // offset 0x10, size 0x4
    class PhObj * currentPhObj; // offset 0x14, size 0x4
    class SimTarget * * target; // offset 0x18, size 0x4
    int pindex[10]; // offset 0x1C, size 0x28
    int nbFixParticle; // offset 0x44, size 0x4
    class PhBBox localCollel; // offset 0x48, size 0x40
    class PhSphere * interCollel; // offset 0x88, size 0x4
    float radius; // offset 0x8C, size 0x4
    class PhCollDetect * collDetector; // offset 0x90, size 0x4
    class PhCollData * collData; // offset 0x94, size 0x4
    class TList collideObjList; // offset 0x98, size 0x14
    class TList intercollideObjList; // offset 0xAC, size 0x14
protected:
    float system_scale; // offset 0xC0, size 0x4
    float impScale; // offset 0xC4, size 0x4
    class Matrix * extTransform; // offset 0xC8, size 0x4
    unsigned char isActivated; // offset 0xCC, size 0x1
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class TrackerLinkMgr {};
// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {};
// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {};
// total size: 0x0
class FlexJointDef {};
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
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned long owner; // offset 0x4, size 0x4
    unsigned long type; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    unsigned long source; // offset 0x10, size 0x4
    unsigned long dest; // offset 0x14, size 0x4
    unsigned long length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
// total size: 0xC
struct AllocInfo {
    // Members
    unsigned long start; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
    unsigned char released; // offset 0x8, size 0x1
};
// total size: 0x2C
class ARAMObj {
    // Static members
    static int mAllocHead; // size: 0x4
    static struct AllocInfo mAllocInfo[257]; // size: 0xC0C

    // Members
    struct ARQRequest mTransferRequest; // offset 0x0, size 0x20
    struct AllocInfo * mAlloc; // offset 0x20, size 0x4
    unsigned char mTransferring; // offset 0x24, size 0x1
    unsigned long mAllocSize; // offset 0x28, size 0x4
};
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
// total size: 0xC4
class GameSimGroup : public SimGroup {
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
// total size: 0x6C
class SimCollSolver : public PhCollSolver {
    // Members
protected:
    float dvSoundThresholdN; // offset 0x60, size 0x4
    float dangerousDVN; // offset 0x64, size 0x4
    float dvDynThresholdN; // offset 0x68, size 0x4
};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0xE
struct Topology {
    // Members
    unsigned short v[3]; // offset 0x0, size 0x6
    unsigned short n[3]; // offset 0x6, size 0x6
    unsigned char mIsDegenerate; // offset 0xC, size 0x1
};
// total size: 0x4
struct Edge {
    // Members
    unsigned short a; // offset 0x0, size 0x2
    unsigned short b; // offset 0x2, size 0x2
};
// total size: 0x14
class tPrimGroup : public tRefCounted {
    // Members
protected:
    class tShader * mShader; // offset 0x8, size 0x4
    enum pddiPrimType mPrimType; // offset 0xC, size 0x4
    unsigned int mVertexFormat; // offset 0x10, size 0x4
};
// total size: 0x0
class tVertexList {};
// total size: 0x34
class tPrimGroupStreamed : public tPrimGroup {
    // Members
    unsigned int mVertexCount; // offset 0x14, size 0x4
    unsigned int mIndexCount; // offset 0x18, size 0x4
    unsigned short * mIndices; // offset 0x1C, size 0x4
    class tVertexList * mVertexList; // offset 0x20, size 0x4
    class Vector * mWeightList; // offset 0x24, size 0x4
    unsigned int * mMatrixPalette; // offset 0x28, size 0x4
    int mMatrixCount; // offset 0x2C, size 0x4
    unsigned int * mMatrixList; // offset 0x30, size 0x4
};
// total size: 0x58
class guPrimGroupShadow : public tDrawable {
    // Members
protected:
    unsigned short mNumVertex; // offset 0x10, size 0x2
    unsigned short mNumTri; // offset 0x12, size 0x2
    unsigned short mNumEdges; // offset 0x14, size 0x2
    unsigned short mMaxEdges; // offset 0x16, size 0x2
    struct Topology * mTopologies; // offset 0x18, size 0x4
    class Vector * mVertices; // offset 0x1C, size 0x4
    class Vector * mNormals; // offset 0x20, size 0x4
    unsigned char * mCulled; // offset 0x24, size 0x4
    struct Edge * mEdges; // offset 0x28, size 0x4
    class tPrimGroupStreamed * mPrimGroupSource; // offset 0x2C, size 0x4
    class tShader * mShader; // offset 0x30, size 0x4
    class tShader * mDebugShader; // offset 0x34, size 0x4
    class Vector mLightAngle; // offset 0x38, size 0xC
    class Vector mLastLightAngle; // offset 0x44, size 0xC
    unsigned char mDebug; // offset 0x50, size 0x1
};
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
// total size: 0x4C
class FlexDrawable {
    // Members
protected:
    class tDrawable * mDrawable; // offset 0x0, size 0x4
    class SimGroup * mSimGroup; // offset 0x4, size 0x4
    class SimFlex * mSimFlex; // offset 0x8, size 0x4
    class Matrix mTransform; // offset 0xC, size 0x40
};
// total size: 0xF4
class Game {
    // Functions
    Game(class PhysicsApp * app);

    ~Game();

    unsigned char LoadData();

    unsigned char Init();

    void Shutdown();

    unsigned char Reset();

    void DodgerStumble(float xdir, float zdir, float time);

    unsigned char Think(float time);

    void ThinkInternal();

    unsigned char Render();

    void MoveDebugCam(float rx, float ry, float panx, float pany, float zoom);

    void InitProjectiles();

    unsigned char FireProjectile(int source, int type, float timetoimpact);

    void CheckDeadProjectiles();

    void CheckDeadDodger();

    void OverlayShadow(float near);

    class guPrimGroupShadow * BuildShadowPrims(unsigned long long geoname);

    class guPrimGroupShadow * BuildShadowPrims(char * geoname);

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
// Range: 0x80005AFC -> 0x80005B38
// this: r31
Game::Game(class PhysicsApp * app /* r1+0xC */) {}

// total size: 0x1
class allocator {};
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
// Range: 0x80005B90 -> 0x80005BF4
// this: r30
Game::~Game() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137648
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137658
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137660
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137668
static // total size: 0x8
struct {} tGeometryLoader::__RTTI; // size: 0x8, address: 0x80137670
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x20
class tGeometryLoader : public tSimpleChunkHandler {
    // Members
protected:
    unsigned char mEnableFaceNormals; // offset 0x18, size 0x1
    unsigned char mOptimize; // offset 0x19, size 0x1
    unsigned int mVertexMask; // offset 0x1C, size 0x4
};
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
// total size: 0x0
class tImage {};
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
// total size: 0x0
class tImage8 {};
// total size: 0x0
class tImage32 {};
// total size: 0x4
class tImageConverter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xA4
class tImageFactory {
    // Members
    int nHandler; // offset 0x0, size 0x4
    class tImageHandler * handler[32]; // offset 0x4, size 0x80
    class tImageConverter * converter; // offset 0x84, size 0x4
    unsigned char ignoreExt; // offset 0x88, size 0x1
    unsigned char autoStore; // offset 0x89, size 0x1
    unsigned char hasAlpha; // offset 0x8A, size 0x1
    int desiredDepth; // offset 0x8C, size 0x4
    unsigned char fullName; // offset 0x90, size 0x1
    int alphaDepthHint; // offset 0x94, size 0x4
    int nMipHint; // offset 0x98, size 0x4
    enum pddiTextureType typeHint; // offset 0x9C, size 0x4
    enum pddiTextureUsageHint usageHint; // offset 0xA0, size 0x4
};
// total size: 0x0
class TextDataParser {};
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
// total size: 0x18
class tSequencerLoader : public tChunkHandler {
    // Members
    class tEntityStore * mStore; // offset 0x10, size 0x4
    class tBlendFrameController * mAnimationTarget; // offset 0x14, size 0x4
};
// Range: 0x80005BF4 -> 0x80005FF8
// this: r30
unsigned char Game::LoadData() {
    // Local variables
    class tGeometryLoader * geoloader; // r1+0x8
    unsigned char opt; // r27
    class tImageFactory factory; // r1+0x148
    class tSequencerLoader seqloader; // r1+0x130

    // References
    // -> static struct [anonymous] tChunkHandler::__RTTI;
    // -> static struct [anonymous] tGeometryLoader::__RTTI;
}

static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x80137678
static // total size: 0x8
struct {} PhCollSolver::__RTTI; // size: 0x8, address: 0x80137680
static // total size: 0x8
struct {} SimCollSolver::__RTTI; // size: 0x8, address: 0x80137688
static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x80137690
static // total size: 0x8
struct {} tCompositeDrawable::DrawableElement::__RTTI; // size: 0x8, address: 0x80137698
static // total size: 0x8
struct {} tCompositeDrawable::DrawablePropElement::__RTTI; // size: 0x8, address: 0x801376A0
// total size: 0xC
struct {} tSafeEntityCaster<tCameraAnimationController>::__vtable; // size: 0xC, address: 0x800FBBB4
// total size: 0xC
struct {} tSafeEntityCaster<tCamera>::__vtable; // size: 0xC, address: 0x800FBB6C
// total size: 0xC
struct {} tSafeEntityCaster<tMultiController>::__vtable; // size: 0xC, address: 0x800FBB38
// total size: 0xC
struct {} tSafeEntityCaster<tSequencer>::__vtable; // size: 0xC, address: 0x800FBAFC
// total size: 0xC
struct {} tSafeEntityCaster<tLightGroup>::__vtable; // size: 0xC, address: 0x800FBAC4
unsigned char fUseAtRest; // size: 0x1, address: 0x8013B3C8
// total size: 0xC
struct {} tSafeEntityCaster<tCompositeDrawable>::__vtable; // size: 0xC, address: 0x800FBA8C
// total size: 0x18
class tLightGroup : public tEntity {
    // Members
    int mNumLights; // offset 0x10, size 0x4
    class tLight * * mLights; // offset 0x14, size 0x4
};
// total size: 0x30
class tDirectionalLight : public tLight {
    // Members
protected:
    class Vector direction; // offset 0x20, size 0xC
};
// total size: 0x14
class DrawablePropElement : public DrawableElement {
    // Members
    class tDrawable * prop; // offset 0xC, size 0x4
    int poseIndex; // offset 0x10, size 0x4
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x80005FF8 -> 0x80006AD4
// this: r31
unsigned char Game::Init() {
    // Local variables
    class tLightGroup * lg; // r3
    class tDirectionalLight * dl; // r26
    int a; // r28
    class DrawablePropElement * dpe; // r1+0x8
    class tCompositeDrawable * dodger; // r3
    struct pddiColour c; // r1+0x2DC

    // References
    // -> struct [anonymous] tSafeEntityCaster<tCompositeDrawable>::__vtable;
    // -> static struct [anonymous] tCompositeDrawable::DrawableElement::__RTTI;
    // -> static struct [anonymous] tCompositeDrawable::DrawablePropElement::__RTTI;
    // -> static struct [anonymous] PhCollSolver::__RTTI;
    // -> static struct [anonymous] SimCollSolver::__RTTI;
    // -> unsigned char fUseAtRest;
    // -> struct [anonymous] tSafeEntityCaster<tLightGroup>::__vtable;
    // -> struct [anonymous] tSafeEntityCaster<tSequencer>::__vtable;
    // -> struct [anonymous] tSafeEntityCaster<tMultiController>::__vtable;
    // -> struct [anonymous] tSafeEntityCaster<tCamera>::__vtable;
    // -> struct [anonymous] tSafeEntityCaster<tCameraAnimationController>::__vtable;
    // -> class Randomizer GlobalRandomizer;
}

// Range: 0x80006AE4 -> 0x80006B1C
// this: r31
void Game::Shutdown() {}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x80006B1C -> 0x80006C38
// this: r29
unsigned char Game::Reset() {
    // Local variables
    class Vector z; // r1+0x48
    class GameSimNodeArt * sna; // r30
}

// total size: 0x1
struct iterator {};
// total size: 0x4
class iterator : public iterator {
    // Members
    struct node * node_; // offset 0x0, size 0x4
};
// Range: 0x80006C38 -> 0x80006C64
// this: r1+0x0
void Game::DodgerStumble(float xdir /* r1+0x4 */, float zdir /* r1+0x8 */, float time /* r1+0xC */) {}

float mCurrentTime; // size: 0x4, address: 0x8013AE88
// Range: 0x80006C64 -> 0x80006C8C
// this: r1+0x0
unsigned char Game::Think(float time /* r1+0x4 */) {
    // References
    // -> float mCurrentTime;
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
// Range: 0x80006C8C -> 0x80007168
// this: r31
void Game::ThinkInternal() {
    // Local variables
    float seconds; // f31
    int source; // r29
    int type; // r30
    float timetoimpact; // f1
    class Vector pos; // r1+0xF0
    float speed; // r1+0x8
    int a; // r30
    class Vector local_dir; // r1+0xCC
    class Matrix invmat; // r1+0x8C

    // References
    // -> class Randomizer GlobalRandomizer;
}

enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
};
// Range: 0x80007168 -> 0x80007698
// this: r31
unsigned char Game::Render() {
    // Local variables
    int a; // r24
    enum pddiCullMode ocm; // r28
    unsigned char ozw; // r29
}

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
class DrawableElement : public DisplayListDrawable {
    // Members
protected:
    unsigned char visible; // offset 0x4, size 0x1
    unsigned char isTranslucent; // offset 0x5, size 0x1
    class tPose * pose; // offset 0x8, size 0x4
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
// Range: 0x80007698 -> 0x80007728
// this: r31
void Game::MoveDebugCam(float rx /* f1 */, float ry /* f28 */, float panx /* f29 */, float pany /* f30 */, float zoom /* f31 */) {}

static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x801376C8
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x801376D8
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x801376E0
// total size: 0x20
struct {} PhBasicObjParam::__vtable; // size: 0x20, address: 0x800FBA2C
// total size: 0x20
struct {} PhDynObjParam::__vtable; // size: 0x20, address: 0x800FB9B8
// Range: 0x80007728 -> 0x80007DBC
// this: r31
void Game::InitProjectiles() {
    // Local variables
    float colldist; // f31
    float friction; // f30
    int a; // r24
    class PhysicsDrawable * pd; // r1+0xB0
    class PhObj * po; // r23
    class PhBasicObjParam * bparam; // r22
    class PhParticle * part; // r22
    class PhDynObjParam * dparam; // r23
    class PhysicsDrawable * pd; // r1+0xAC
    class PhObj * po; // r22
    class PhBasicObjParam * bparam; // r23
    class PhParticle * part; // r22
    class PhDynObjParam * dparam; // r23
    class PhysicsDrawable * pd; // r1+0xA8
    class PhObj * po; // r22
    class PhBasicObjParam * bparam; // r23
    class PhParticle * part; // r22
    class PhDynObjParam * dparam; // r23
    class PhysicsDrawable * pd; // r1+0xA4
    class PhObj * po; // r22
    class PhBasicObjParam * bparam; // r23
    class PhParticle * part; // r22
    class PhDynObjParam * dparam; // r23

    // References
    // -> struct [anonymous] PhDynObjParam::__vtable;
    // -> static struct [anonymous] PhObj::__RTTI;
    // -> static struct [anonymous] PhParticle::__RTTI;
    // -> struct [anonymous] PhBasicObjParam::__vtable;
}

// Range: 0x80007DF0 -> 0x800080A0
// this: r29
unsigned char Game::FireProjectile(int source /* r30 */, int type /* r28 */, float timetoimpact /* f31 */) {
    // Local variables
    class Vector pos; // r1+0x130
    class Vector vel; // r1+0x124
    class Vector targetpos; // r1+0x118
    float ht; // f2
    class GameSimNodeArt * sna; // r28
    float pitchmult; // f3

    // References
    // -> class Randomizer GlobalRandomizer;
}

// total size: 0x1
struct iterator {};
// total size: 0x4
class iterator : public iterator {
    // Members
    class iterator i_; // offset 0x0, size 0x4
};
// Range: 0x800080A0 -> 0x800081C0
// this: r29
void Game::CheckDeadProjectiles() {
    // Local variables
    class iterator it; // r1+0x64
    class Vector pos; // r1+0x58
}

// Range: 0x800081C0 -> 0x80008264
// this: r31
void Game::CheckDeadDodger() {
    // Local variables
    class Vector pos; // r1+0x28
    class Vector z; // r1+0x1C
}

// Range: 0x80008264 -> 0x80008A84
// this: r30
void Game::OverlayShadow(float near /* f31 */) {
    // Local variables
    unsigned char zw; // r29
    class gcPrimStream * stream; // r31
    struct pddiColour c; // r1+0x178
}

// total size: 0x0
class gcContext {};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
// total size: 0x3C
struct gcStreamVertex {
    // Members
    class pddiVector pos; // offset 0x0, size 0xC
    class pddiVector norm; // offset 0xC, size 0xC
    class pddiVector2 uv[4]; // offset 0x18, size 0x20
    struct pddiColour col; // offset 0x38, size 0x4
};
// total size: 0x90
class gcPrimStream {
    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
static // total size: 0x8
struct {} tPrimGroup::__RTTI; // size: 0x8, address: 0x801376E8
static // total size: 0x8
struct {} tPrimGroupStreamed::__RTTI; // size: 0x8, address: 0x801376F0
// total size: 0xC
struct {} tSafeEntityCasterBase::__vtable; // size: 0xC, address: 0x800FBA4C
// total size: 0xC
struct {} tSafeEntityCaster<tGeometry>::__vtable; // size: 0xC, address: 0x800FB95C
// Range: 0x80008A84 -> 0x80008B70
// this: r29
class guPrimGroupShadow * Game::BuildShadowPrims(unsigned long long geoname /* r31 */) {
    // Local variables
    class tGeometry * geo; // r3
    class tPrimGroupStreamed * pgs; // r31

    // References
    // -> static struct [anonymous] tPrimGroup::__RTTI;
    // -> static struct [anonymous] tPrimGroupStreamed::__RTTI;
    // -> struct [anonymous] tSafeEntityCaster<tGeometry>::__vtable;
    // -> struct [anonymous] tSafeEntityCasterBase::__vtable;
}

// total size: 0x48
class tGeometry : public tDrawable {
    // Members
protected:
    struct tBox3D box; // offset 0x10, size 0x18
    struct tSphere sphere; // offset 0x28, size 0x10
    int nFaceNormal; // offset 0x38, size 0x4
    class Vector * faceNormal; // offset 0x3C, size 0x4
    int nPrimGroup; // offset 0x40, size 0x4
    class tPrimGroup * * primGroup; // offset 0x44, size 0x4
};
// Range: 0x80008B70 -> 0x80008C6C
// this: r28
class guPrimGroupShadow * Game::BuildShadowPrims(char * geoname /* r4 */) {
    // References
    // -> static struct [anonymous] tPrimGroup::__RTTI;
    // -> static struct [anonymous] tPrimGroupStreamed::__RTTI;
    // -> struct [anonymous] tSafeEntityCaster<tGeometry>::__vtable;
}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801376F8
static // total size: 0x8
struct {} tSafeEntityCaster<tGeometry>::__RTTI; // size: 0x8, address: 0x80137700
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x80137710
static // total size: 0x8
struct {} iPhDynObjParam::__RTTI; // size: 0x8, address: 0x80137718
static // total size: 0x8
struct {} PhDynObjParam::__RTTI; // size: 0x8, address: 0x80137720
static // total size: 0x8
struct {} iPhBasicObjParam::__RTTI; // size: 0x8, address: 0x80137728
static // total size: 0x8
struct {} PhBasicObjParam::__RTTI; // size: 0x8, address: 0x80137730
static // total size: 0x8
struct {} tSafeEntityCaster<tCompositeDrawable>::__RTTI; // size: 0x8, address: 0x80137738
static // total size: 0x8
struct {} tSafeEntityCaster<tLightGroup>::__RTTI; // size: 0x8, address: 0x80137740
static // total size: 0x8
struct {} tSafeEntityCaster<tSequencer>::__RTTI; // size: 0x8, address: 0x80137748
static // total size: 0x8
struct {} tSafeEntityCaster<tMultiController>::__RTTI; // size: 0x8, address: 0x80137750
static // total size: 0x8
struct {} tSafeEntityCaster<tCamera>::__RTTI; // size: 0x8, address: 0x80137758
static // total size: 0x8
struct {} tSafeEntityCaster<tCameraAnimationController>::__RTTI; // size: 0x8, address: 0x80137760
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80137768
static // total size: 0x8
struct {} tGeometry::__RTTI; // size: 0x8, address: 0x80137770
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80137778
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80137780
static // total size: 0x8
struct {} tCompositeDrawable::__RTTI; // size: 0x8, address: 0x80137788
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tLightGroup::__RTTI; // size: 0x8, address: 0x80137790
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tSequencer::__RTTI; // size: 0x8, address: 0x80137798
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801377A0
static // total size: 0x8
struct {} tMultiController::__RTTI; // size: 0x8, address: 0x801377A8
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x801377B8
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801377C0
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x801377C8
static // total size: 0x8
struct {} tCameraAnimationController::__RTTI; // size: 0x8, address: 0x801377D0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
struct __file_modes {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4
    unsigned int io_mode : 3; // offset 0x0, size 0x4
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4
    unsigned int file_kind : 3; // offset 0x0, size 0x4
    unsigned int file_orientation : 2; // offset 0x0, size 0x4
    unsigned int binary_io : 1; // offset 0x0, size 0x4
};
// total size: 0x4
struct __file_state {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4
    unsigned int free_buffer : 1; // offset 0x0, size 0x4
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
};
// total size: 0x48
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    struct __file_modes mode; // offset 0x4, size 0x4
    struct __file_state state; // offset 0x8, size 0x4
    unsigned char char_buffer; // offset 0xC, size 0x1
    unsigned char char_buffer_overflow; // offset 0xD, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xE, size 0x2
    wchar_t ungetwc_buffer[2]; // offset 0x10, size 0x4
    unsigned long position; // offset 0x14, size 0x4
    unsigned char * buffer; // offset 0x18, size 0x4
    unsigned long buffer_size; // offset 0x1C, size 0x4
    unsigned char * buffer_ptr; // offset 0x20, size 0x4
    unsigned long buffer_len; // offset 0x24, size 0x4
    unsigned long buffer_alignment; // offset 0x28, size 0x4
    unsigned long saved_buffer_len; // offset 0x2C, size 0x4
    unsigned long buffer_pos; // offset 0x30, size 0x4
    int (* position_proc)(unsigned long, unsigned long *, int, void (*)()); // offset 0x34, size 0x4
    int (* read_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x38, size 0x4
    int (* write_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x3C, size 0x4
    int (* close_proc)(unsigned long); // offset 0x40, size 0x4
    void (* idle_proc)(); // offset 0x44, size 0x4
};
struct _FILE __files[]; // size: 0x0, address: 0x800FFA98



