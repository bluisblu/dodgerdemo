/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\PhysicsDrawable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000A514 -> 0x8000AF18
*/
float mCurrentTime; // size: 0x4, address: 0x8013AE88
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137890
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801378A0
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x801378A8
static // total size: 0x8
struct {} Scenegraph::Scenegraph::__RTTI; // size: 0x8, address: 0x801378B0
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x801378B8
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x801378C0
static // total size: 0x8
struct {} tPolySkin::__RTTI; // size: 0x8, address: 0x801378C8
static // total size: 0x8
struct {} tGeometry::__RTTI; // size: 0x8, address: 0x801378D0
static // total size: 0x8
struct {} tCompositeDrawable::__RTTI; // size: 0x8, address: 0x801378D8
// total size: 0xC
struct {} tSafeEntityCaster<PhObj>::__vtable; // size: 0xC, address: 0x800FC648
// total size: 0xC
struct {} tSafeEntityCaster<PhComposite>::__vtable; // size: 0xC, address: 0x800FC614
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
// total size: 0x0
class PhWorld {};
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
// total size: 0x0
class PhSubSTreeObj {};
// total size: 0x0
class PhSTreeObj {};
// total size: 0x10
class PhCompositeElement {
    // Members
public:
    class DrawableElement * fDE; // offset 0x0, size 0x4
    class PhCollEl * fEl; // offset 0x4, size 0x4
    int fJointIndex; // offset 0x8, size 0x4
    unsigned char fVisible; // offset 0xC, size 0x1
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x40
class PhComposite : public tEntity {
    // Members
protected:
    class tCompositeDrawable * fCompositeDrawable; // offset 0x10, size 0x4
    class PhSubSTreeObj * fSubObj; // offset 0x14, size 0x4
    class PhSTreeObj * fCompositePhObj; // offset 0x18, size 0x4
    class TList fPhCompositeElementList; // offset 0x1C, size 0x14
    float fTotVol; // offset 0x30, size 0x4
    int * fJointOccupation; // offset 0x34, size 0x4
    unsigned char fVisible; // offset 0x38, size 0x1
};
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
// total size: 0x0
class tVertexList {};
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
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
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
// total size: 0xA4
class PhysicsDrawable {
    // Functions
    PhysicsDrawable(class SimGroup * group, char * objname, unsigned char cloneph, unsigned char ismoving);

    void Display();

    void SetShadowLightDirection(class Vector & dir);

    void DisplayShadow();

    void SetPosition(class Vector & newpos);

    void SetVelocity(class Vector & newvel);

    void SetRotation(class Vector & rot);

    void GetPosition(class Vector & pos);

    void RemoveFromSimGroup();

    void AddToSimGroup();

    void AddScenegraphNode(class Node * node, class SimGroup * simgroup, unsigned char cloneph);

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
    // Members
protected:
    class Matrix * boneMatrix; // offset 0x20, size 0x4
    int nPrimGroup; // offset 0x24, size 0x4
    class tPrimGroupSkinned * * primGroup; // offset 0x28, size 0x4
    struct tSphere boundingSphere; // offset 0x2C, size 0x10
    struct tBox3D boundingBox; // offset 0x3C, size 0x18
    unsigned char oneBone; // offset 0x54, size 0x1
};
// total size: 0x28
class Scenegraph : public tDrawable {
    // Members
protected:
    class Node * root; // offset 0x10, size 0x4
    class DisplayList translucentDrawables; // offset 0x14, size 0x10
};
// ERROR: Failed to emit tag DDF9C (GlobalSubroutine)
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
// total size: 0x14
class PhBasicObjList : public VoidPList {};
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
// Range: 0x8000A8A8 -> 0x8000A954
// this: r31
void PhysicsDrawable::Display() {}

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
// Range: 0x8000A954 -> 0x8000A994
// this: r31
void PhysicsDrawable::SetShadowLightDirection(class Vector & dir /* r4 */) {
    // Local variables
    class Vector local_dir; // r1+0x10
}

// Range: 0x8000A994 -> 0x8000AA40
// this: r31
void PhysicsDrawable::DisplayShadow() {}

// Range: 0x8000AA40 -> 0x8000AA98
// this: r31
void PhysicsDrawable::SetPosition(class Vector & newpos /* r4 */) {}

static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x801378E0
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x801378F0
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x801378F8
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
// Range: 0x8000AA98 -> 0x8000AB24
// this: r30
void PhysicsDrawable::SetVelocity(class Vector & newvel /* r31 */) {
    // Local variables
    class PhParticle * p; // r1+0x8

    // References
    // -> static struct [anonymous] PhObj::__RTTI;
    // -> static struct [anonymous] PhParticle::__RTTI;
}

// Range: 0x8000AB24 -> 0x8000AB7C
// this: r31
void PhysicsDrawable::SetRotation(class Vector & rot /* r1+0xC */) {}

// Range: 0x8000AB7C -> 0x8000ABFC
// this: r1+0x8
void PhysicsDrawable::GetPosition(class Vector & pos /* r31 */) {
    // Local variables
    class tCompositeDrawable * cd; // r3
    class tPose * pose; // r1+0x8
}

// Range: 0x8000ABFC -> 0x8000AC48
// this: r31
void PhysicsDrawable::RemoveFromSimGroup() {}

// Range: 0x8000AC48 -> 0x8000ACA0
// this: r31
void PhysicsDrawable::AddToSimGroup() {}

static // total size: 0x8
struct {} Scenegraph::Node::__RTTI; // size: 0x8, address: 0x80137900
static // total size: 0x8
struct {} Scenegraph::Branch::__RTTI; // size: 0x8, address: 0x80137908
static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x80137910
static // total size: 0x8
struct {} Scenegraph::Leaf::__RTTI; // size: 0x8, address: 0x80137918
static // total size: 0x8
struct {} Scenegraph::Drawable::__RTTI; // size: 0x8, address: 0x80137920
enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// total size: 0x18
class Node : public tEntity {
    // Members
protected:
    class Node * parent; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// Range: 0x8000ACA0 -> 0x8000AF18
// this: r29
void PhysicsDrawable::AddScenegraphNode(class Node * node /* r25 */, class SimGroup * simgroup /* r30 */, unsigned char cloneph /* r31 */) {
    // Local variables
    int a; // r27
    class Drawable * drawnode; // r27
    class tDrawable * draw; // r26
    class Matrix * matrix; // r25
    class tCompositeDrawable * cd; // r3
    class SimNode * n; // r25
    class tPolySkin * skin; // r3
    class SimNode * n; // r25
    class SimNode * n; // r25

    // References
    // -> static struct [anonymous] tDrawable::__RTTI;
    // -> static struct [anonymous] tGeometry::__RTTI;
    // -> static struct [anonymous] tPolySkin::__RTTI;
    // -> static struct [anonymous] tCompositeDrawable::__RTTI;
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Drawable::__RTTI;
    // -> static struct [anonymous] Scenegraph::Branch::__RTTI;
}

// total size: 0x18
class Leaf : public Node {};
// total size: 0x28
class Drawable : public Leaf, public DisplayListDrawable {
    // Members
protected:
    class tDrawable * draw; // offset 0x1C, size 0x4
    unsigned char isTranslucent; // offset 0x20, size 0x1
};
static // total size: 0x8
struct {} tPrimGroup::__RTTI; // size: 0x8, address: 0x80137928
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
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80137930
static // total size: 0x8
struct {} tSafeEntityCaster<PhComposite>::__RTTI; // size: 0x8, address: 0x80137938
static // total size: 0x8
struct {} tSafeEntityCaster<PhObj>::__RTTI; // size: 0x8, address: 0x80137940
static // total size: 0x8
struct {} PhComposite::__RTTI; // size: 0x8, address: 0x80137948
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



