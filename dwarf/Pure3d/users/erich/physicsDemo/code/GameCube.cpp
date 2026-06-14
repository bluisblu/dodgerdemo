/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\GameCube.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000CF48 -> 0x8000D500
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80117840
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013AEA8
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8011784C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80117858
// total size: 0x8
class tParticleRenderModule : public tRefCounted {};
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
enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
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
// total size: 0x0
class pddiExtHardwareSkinning {};
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
// total size: 0x0
class gcExtBufferCopy {};
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
// total size: 0x8
class tEvent : public tRefCounted {};
// total size: 0x4
class tEventOrigin {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class tEventRecipient : public tEntity {};
// total size: 0x30
class tEventAnimation : public tAnimation {
    // Members
    int nKeys; // offset 0x20, size 0x4
    float * timeIndices; // offset 0x24, size 0x4
    class tEvent * * events; // offset 0x28, size 0x4
};
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
class GameSimGroup {};
// total size: 0x0
class SimCollSolver {};
// total size: 0x0
class PhysicsDrawable {};
// total size: 0x0
class guPrimGroupShadow {};
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
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x10
class tDrawable : public tEntity {};
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
class SoundSample {};
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
    // Functions
    unsigned char InitPure3D();

    void ReadControllers();

    void UpdateDebugCam();

    struct PADStatus * Controller(int c);

    // Members
    class tContext * mContext; // offset 0x0, size 0x4
    unsigned char mAppDone; // offset 0x4, size 0x1
    class Game * mGame; // offset 0x8, size 0x4
    struct PADStatus mControllers[4]; // offset 0xC, size 0x30
    unsigned short mPreviousButtonState[4]; // offset 0x3C, size 0x8
    unsigned short mButtonDown[4]; // offset 0x44, size 0x8
};
// total size: 0x18
class tContextInitData {
    // Members
public:
    int xsize; // offset 0x0, size 0x4
    int ysize; // offset 0x4, size 0x4
    int bpp; // offset 0x8, size 0x4
    int nColourBuffer; // offset 0xC, size 0x4
    unsigned int bufferMask; // offset 0x10, size 0x4
    unsigned char pal; // offset 0x14, size 0x1
};
// Range: 0x8000CF48 -> 0x8000D070
// this: r31
unsigned char PhysicsApp::InitPure3D() {
    // Local variables
    class tContextInitData init; // r1+0x24
    class tP3DFileHandler * p3d; // r31
}

// Range: 0x8000D070 -> 0x8000D14C
// this: r31
void PhysicsApp::ReadControllers() {}

// Range: 0x8000D14C -> 0x8000D220
// this: r3
void PhysicsApp::UpdateDebugCam() {
    // Local variables
    float panx; // f3
    float pany; // f4
    float rotx; // f1
    float roty; // f2
    float zoom; // f5
}

// Range: 0x8000D220 -> 0x8000D234
// this: r1+0x0
struct PADStatus * PhysicsApp::Controller(int c /* r1+0x4 */) {}

// Range: 0x8000D234 -> 0x8000D3F4
int main() {
    // Local variables
    class PhysicsApp * app; // r31
    unsigned char ok; // r1+0x8
}

// Range: 0x8000D3F4 -> 0x8000D468
static void CPPInit() {
    // Local variables
    void * arenaLo; // r31
    void * arenaHi; // r30
}

static unsigned int _malloc_total; // size: 0x4, address: 0x8013AEAC
// Range: 0x8000D468 -> 0x8000D49C
void * malloc(unsigned int size /* r3 */) {
    // References
    // -> static unsigned int _malloc_total;
}

// Range: 0x8000D49C -> 0x8000D4C4
void free(void * mem /* r3 */) {}




