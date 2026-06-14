/*
    Compile unit: D:\Pure3d\development\p3d\anim\polyskin.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80061998 -> 0x80062224
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x3C
struct {} tDrawablePose::__vtable; // size: 0x3C, address: 0x80104A68
// total size: 0x40
struct {} tPolySkin::__vtable; // size: 0x40, address: 0x80105C00
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
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
// total size: 0x14
class tPrimGroup : public tRefCounted {
    // Members
protected:
    class tShader * mShader; // offset 0x8, size 0x4
    enum pddiPrimType mPrimType; // offset 0xC, size 0x4
    unsigned int mVertexFormat; // offset 0x10, size 0x4
};
// total size: 0x10
struct Offset {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    class Vector offset; // offset 0x4, size 0xC
};
// total size: 0xC
struct OffsetList {
    // Members
    unsigned int offsetCount; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
    struct Offset * offsets; // offset 0x8, size 0x4
};
// total size: 0x30
class tPrimGroupSkinned : public tPrimGroup {
    // Members
protected:
    unsigned int mVertexCount; // offset 0x14, size 0x4
    unsigned int instanceCount; // offset 0x18, size 0x4
    unsigned int instanceSize; // offset 0x1C, size 0x4
    unsigned int mOffsetListCount; // offset 0x20, size 0x4
    unsigned int mOffsetListMax; // offset 0x24, size 0x4
    struct OffsetList * * mOffsetListGroup; // offset 0x28, size 0x4
    unsigned char deformed; // offset 0x2C, size 0x1
};
// total size: 0x58
class tPolySkin : public tDrawablePose {
    // Functions
    ~tPolySkin();

    void Display(class tPose * p);

    void DisplayInstanced(class tPose * p, unsigned int count);

    // Members
protected:
    class Matrix * boneMatrix; // offset 0x20, size 0x4
    int nPrimGroup; // offset 0x24, size 0x4
    class tPrimGroupSkinned * * primGroup; // offset 0x28, size 0x4
    struct tSphere boundingSphere; // offset 0x2C, size 0x10
    struct tBox3D boundingBox; // offset 0x3C, size 0x18
    unsigned char oneBone; // offset 0x54, size 0x1
};
// Range: 0x80061998 -> 0x80061A6C
// this: r28
tPolySkin::~tPolySkin() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] tPolySkin::__vtable;
}

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
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
// total size: 0xC
class pddiExtHardwareSkinning : public pddiObject {};
// Range: 0x80061A6C -> 0x80061B7C
// this: r31
void tPolySkin::Display(class tPose * p /* r26 */) {
    // Local variables
    int i; // r27
    class pddiExtHardwareSkinning * hwSkin; // r27
    int j; // r29
}

// Range: 0x80061B7C -> 0x80061CE4
// this: r30
void tPolySkin::DisplayInstanced(class tPose * p /* r1+0xC */, unsigned int count /* r31 */) {
    // Local variables
    int i; // r9
    class pddiExtHardwareSkinning * hwSkin; // r28
    int j; // r27
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x20
struct {} tPolySkinLoader::__vtable; // size: 0x20, address: 0x80105B34
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x20
class tPolySkinLoader : public tSimpleChunkHandler {
    // Functions
    tPolySkinLoader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    unsigned char optimise; // offset 0x18, size 0x1
};
// ERROR: Failed to emit tag 3D267A (GlobalSubroutine)
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
// total size: 0x8
class Vector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
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
// total size: 0x2C
class tVertexList : public tRefCounted {
    // Members
    unsigned int format; // offset 0x8, size 0x4
    int nVertex; // offset 0xC, size 0x4
    class Vector * coord; // offset 0x10, size 0x4
    class Vector * normal; // offset 0x14, size 0x4
    class Vector2 * uv[4]; // offset 0x18, size 0x10
    struct pddiColour * colour; // offset 0x28, size 0x4
};
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
// total size: 0x18
class tPrimGroupOptimised : public tPrimGroup {
    // Members
    class pddiPrimBuffer * mBuffer; // offset 0x14, size 0x4
};
// total size: 0x20
class tPrimGroupLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class tShader * mShader; // offset 0x4, size 0x4
    enum pddiPrimType mPrimType; // offset 0x8, size 0x4
    unsigned int mVertexFormat; // offset 0xC, size 0x4
    unsigned int mVertexCount; // offset 0x10, size 0x4
    unsigned int mIndexCount; // offset 0x14, size 0x4
    unsigned int mMatrixCount; // offset 0x18, size 0x4
    unsigned int mVertexFormatMask; // offset 0x1C, size 0x4
};
// ERROR: Failed to emit tag 3D66E3 (GlobalSubroutine)
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
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
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
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801389F8
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138A00
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138A10
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138A18
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138A20
static // total size: 0x8
struct {} tPolySkinLoader::__RTTI; // size: 0x8, address: 0x80138A28
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80138A30
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138A38
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80138A40
static // total size: 0x8
struct {} tPolySkin::__RTTI; // size: 0x8, address: 0x80138A48
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
class tSkeleton : public tEntity {
    // Members
protected:
    int nJoint; // offset 0x10, size 0x4
    class Joint * joint; // offset 0x14, size 0x4
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
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
class tSafeEntityCaster : public tSafeEntityCasterBase {};



