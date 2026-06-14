/*
    Compile unit: D:\Pure3d\Simulation\simai\siminterface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C6BF0 -> 0x800C70EC
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80137398
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B360
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x801373A4
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x801373B0
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
    // Members
protected:
    class Matrix * boneMatrix; // offset 0x20, size 0x4
    int nPrimGroup; // offset 0x24, size 0x4
    class tPrimGroupSkinned * * primGroup; // offset 0x28, size 0x4
    struct tSphere boundingSphere; // offset 0x2C, size 0x10
    struct tBox3D boundingBox; // offset 0x3C, size 0x18
    unsigned char oneBone; // offset 0x54, size 0x1
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
// ERROR: Failed to emit tag 782756 (GlobalSubroutine)
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
class PhPairEl {};
// total size: 0x14
class PhPairElList : public VoidPList {};
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
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
enum SimStateLinkEnum {
    LinkLost = 0,
    LinkCaught = 1,
    LinkPull = 2,
    LinkPullP = 3,
    LinkContact = 4,
};
// total size: 0x54
class ImpulseLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhSubSTreeObj * fJoint; // offset 0x4, size 0x4
    class SimTarget * fTarget; // offset 0x8, size 0x4
    float fIntensity; // offset 0xC, size 0x4
    float fMinDist; // offset 0x10, size 0x4
    class Vector fObjPos; // offset 0x14, size 0xC
    class Vector fImpulse; // offset 0x20, size 0xC
    class Vector fImpulsePos; // offset 0x2C, size 0xC
    class Vector fN; // offset 0x38, size 0xC
    enum SimStateLinkEnum fState; // offset 0x44, size 0x4
protected:
    float fMindIKOffset; // offset 0x48, size 0x4
    float fDissipDist; // offset 0x4C, size 0x4
    float fFilteredDist; // offset 0x50, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class ImpulseLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// total size: 0x0
class SRS {};
// total size: 0x0
class TArray {};
enum IKLimbType {
    IKLimbStd = 0,
    IKLimbPreTorsion = 1,
    IKLimbPostTorsion = 2,
    IKLimbDualTorsion = 3,
};
// total size: 0x114
class IKanDriver {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class tPose * pose; // offset 0x4, size 0x4
    class SRS * iksolver; // offset 0x8, size 0x4
    class Matrix T; // offset 0xC, size 0x40
    class Matrix S; // offset 0x4C, size 0x40
    int j1Index; // offset 0x8C, size 0x4
    int jmidIndex; // offset 0x90, size 0x4
    int j2Index; // offset 0x94, size 0x4
    float swivelangle; // offset 0x98, size 0x4
    float ax; // offset 0x9C, size 0x4
    float say; // offset 0xA0, size 0x4
    float az; // offset 0xA4, size 0x4
    class Matrix E; // offset 0xA8, size 0x40
    class TArray * jointDep; // offset 0xE8, size 0x4
    class Vector projAxis; // offset 0xEC, size 0xC
    class Vector rotAxis; // offset 0xF8, size 0xC
    unsigned char swivelFromPose; // offset 0x104, size 0x1
    unsigned char fixR1Rot; // offset 0x105, size 0x1
    float fixR1Rotx; // offset 0x108, size 0x4
    float fixR1Roty; // offset 0x10C, size 0x4
    float fixR1Rotz; // offset 0x110, size 0x4
};
// total size: 0x20
class IKanLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class IKanDriver * ikanDriver; // offset 0x4, size 0x4
    class SimTarget * target; // offset 0x8, size 0x4
    unsigned char solveForPos; // offset 0xC, size 0x1
    char name[16]; // offset 0xD, size 0x10
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class IKanLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// total size: 0x0
class SimFlexJointMgr {};
enum LookAtControlEnum {
    LookAtEmpty = 0,
    LookAtDissipating = 1,
    LookAtActivated = 2,
};
// total size: 0x94
class TrackerLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class tPose * pose; // offset 0x4, size 0x4
    class SimTarget * lookAt; // offset 0x8, size 0x4
    int trackerJoint; // offset 0xC, size 0x4
    float trackerJointDef; // offset 0x10, size 0x4
    enum LookAtControlEnum lookAtControl; // offset 0x14, size 0x4
    class Vector lookAtDir0; // offset 0x18, size 0xC
    class Vector axis0; // offset 0x24, size 0xC
    unsigned char trackVertical; // offset 0x30, size 0x1
    float trackerJointDefVertical; // offset 0x34, size 0x4
    float speedH; // offset 0x38, size 0x4
    float speedV; // offset 0x3C, size 0x4
    float maxangleH; // offset 0x40, size 0x4
    float maxangleV; // offset 0x44, size 0x4
    float goodEnough; // offset 0x48, size 0x4
    class TArray * jointDep; // offset 0x4C, size 0x4
    unsigned char seeTarget; // offset 0x50, size 0x1
    unsigned char useAnimJointLocalMat; // offset 0x51, size 0x1
    class Matrix jointLocalMat; // offset 0x54, size 0x40
};
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
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class TrackerLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {};
// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {};
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
// total size: 0x5C
class FlexJointDefItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned short nbParticle; // offset 0x4, size 0x2
    unsigned short startJoint; // offset 0x6, size 0x2
    unsigned short endJoint; // offset 0x8, size 0x2
    float restStiff; // offset 0xC, size 0x4
    float restStiffd; // offset 0x10, size 0x4
    unsigned char gravity; // offset 0x14, size 0x1
    unsigned short simMethod; // offset 0x16, size 0x2
    unsigned char useRestingPose; // offset 0x18, size 0x1
    unsigned short restMethod; // offset 0x1A, size 0x2
    unsigned short updateMethod; // offset 0x1C, size 0x2
    unsigned char useVirtualJoint; // offset 0x1E, size 0x1
    class ConditionParams flexObjParam; // offset 0x20, size 0x34
    signed short nbCollJoint; // offset 0x54, size 0x2
    signed short * collJoint; // offset 0x58, size 0x4
};
// total size: 0x18
class FlexJointDef : public tEntity {
    // Members
public:
    unsigned int nbDef; // offset 0x10, size 0x4
    class FlexJointDefItem * def; // offset 0x14, size 0x4
};
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
// total size: 0x0
class SparseBlockMatrix {};
// total size: 0x2C
class Condition {
    // Members
    class Condition * nextCond; // offset 0x0, size 0x4
    float xi[3]; // offset 0x4, size 0xC
    float xj[3]; // offset 0x10, size 0xC
public:
    void * __vptr$; // offset 0x1C, size 0x4
    class FlexParticle * pi; // offset 0x20, size 0x4
    class FlexParticle * pj; // offset 0x24, size 0x4
    class ConditionParams * params; // offset 0x28, size 0x4
};
// total size: 0x0
class TArray {};
// total size: 0x14
class FlexParticleList : public VoidPList {};
// total size: 0x0
class Wind {};
// total size: 0x98
class ParticleSystem : public tEntity {
    // Members
public:
    class FlexParticle * * lp; // offset 0x10, size 0x4
    class Condition * Conditions; // offset 0x14, size 0x4
    class ConditionParams * cparams; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    int nbp; // offset 0x20, size 0x4
    float deli; // offset 0x24, size 0x4
    class SparseBlockMatrix * A; // offset 0x28, size 0x4
    float * mass; // offset 0x2C, size 0x4
    float * b; // offset 0x30, size 0x4
    float * z; // offset 0x34, size 0x4
    float * dv; // offset 0x38, size 0x4
    class TArray * Sfilter; // offset 0x3C, size 0x4
    float extDensity; // offset 0x40, size 0x4
    float gravity[3]; // offset 0x44, size 0xC
    float wind[3]; // offset 0x50, size 0xC
    class FlexParticleList interplist; // offset 0x5C, size 0x14
    unsigned char drawparticle; // offset 0x70, size 0x1
    float maxDv; // offset 0x74, size 0x4
    float maxdef; // offset 0x78, size 0x4
    float rest; // offset 0x7C, size 0x4
    float frict; // offset 0x80, size 0x4
    float dvtstatic2; // offset 0x84, size 0x4
protected:
    int vecSize; // offset 0x88, size 0x4
    float invTimeStep; // offset 0x8C, size 0x4
    float timeStep; // offset 0x90, size 0x4
private:
    class Wind * windFunction; // offset 0x94, size 0x4
};
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
// total size: 0xC
struct {} tSafeEntityCaster<FlexJointDef>::__vtable; // size: 0xC, address: 0x80113C2C
// ERROR: Failed to emit tag 79EA33 (GlobalSubroutine)
// Range: 0x800C6E6C -> 0x800C6F78
class SimNodeArticulated * AddSkin(unsigned long long name /* r30 */, class Matrix * transform /* r25 */, class tPose * pose /* r26 */, class SimGroup * sg /* r31 */, unsigned char clonePhobj /* r28 */) {
    // Local variables
    class PhSTreeObj * ph; // r4
    class SimNodeArticulated * n; // r27

    // References
    // -> struct [anonymous] tSafeEntityCaster<FlexJointDef>::__vtable;
}

// Range: 0x800C6F78 -> 0x800C702C
class SimNode * AddGeom(unsigned long long name /* r31 */, class Matrix * transform /* r27 */, class SimGroup * sg /* r28 */, unsigned char clonePhobj /* r29 */, unsigned char ismoving /* r30 */) {
    // Local variables
    class PhObj * ph; // r31
    class SimNode * n; // r3
}

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
// total size: 0xC
struct {} tSafeEntityCaster<ParticleSystemOnGeom2D>::__vtable; // size: 0xC, address: 0x80113BBC
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
// total size: 0xD0
class ParticleSystemOnGeom2D : public ParticleSystem {
    // Members
protected:
    class tGeometry * tgeom; // offset 0x98, size 0x4
    unsigned int nVertex; // offset 0x9C, size 0x4
    unsigned int nbPGM; // offset 0xA0, size 0x4
    unsigned int nTri; // offset 0xA4, size 0x4
    unsigned int nEdge; // offset 0xA8, size 0x4
    unsigned int * mapVL; // offset 0xAC, size 0x4
    unsigned int * pgmNbVertex; // offset 0xB0, size 0x4
    unsigned int * mapTri; // offset 0xB4, size 0x4
    unsigned int * mapEdge; // offset 0xB8, size 0x4
    float * lenEdge; // offset 0xBC, size 0x4
    float * triNormal; // offset 0xC0, size 0x4
    float * pNormal; // offset 0xC4, size 0x4
    class Vector * particlePos; // offset 0xC8, size 0x4
    unsigned char displayBackFace; // offset 0xCC, size 0x1
    unsigned char frontNormal; // offset 0xCD, size 0x1
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A3E8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A3F8
static // total size: 0x8
struct {} Scenegraph::Node::__RTTI; // size: 0x8, address: 0x8013A400
static // total size: 0x8
struct {} Scenegraph::Branch::__RTTI; // size: 0x8, address: 0x8013A408
static // total size: 0x8
struct {} Scenegraph::Transform::__RTTI; // size: 0x8, address: 0x8013A410
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
// Range: 0x800C702C -> 0x800C70B0
class Matrix * GetSimMatrix(class Node * nn /* r3 */) {
    // Local variables
    class Node * n; // r31

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Transform::__RTTI;
}

static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x8013A418
static // total size: 0x8
struct {} Scenegraph::Leaf::__RTTI; // size: 0x8, address: 0x8013A420
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x8013A428
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x8013A430
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x8013A438
// total size: 0x18
class Leaf : public Node {};
// total size: 0x28
class Drawable : public Leaf, public DisplayListDrawable {
    // Members
protected:
    class tDrawable * draw; // offset 0x1C, size 0x4
    unsigned char isTranslucent; // offset 0x20, size 0x1
};
// total size: 0x28
class Scenegraph : public tDrawable {
    // Members
protected:
    class Node * root; // offset 0x10, size 0x4
    class DisplayList translucentDrawables; // offset 0x14, size 0x10
};
static // total size: 0x8
struct {} LinkDef::Def::__RTTI; // size: 0x8, address: 0x8013A440
// total size: 0xC
struct {} tSafeEntityCaster<LinkDef>::__vtable; // size: 0xC, address: 0x80113B78
enum TargetTypeEnum {
    VectorTarget = 0,
    NodeTarget = 1,
    PoseJointTarget = 2,
};
// total size: 0x38
class Target {
    // Members
public:
    enum TargetTypeEnum type; // offset 0x0, size 0x4
    char name[24]; // offset 0x4, size 0x18
    unsigned long long uid; // offset 0x20, size 0x8
    class Vector offset; // offset 0x28, size 0xC
    signed short joint; // offset 0x34, size 0x2
};
// total size: 0x40
class Def {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class Target target; // offset 0x8, size 0x38
};
// total size: 0x60
class IKDef : public Def {
    // Members
public:
    signed short startJoint; // offset 0x40, size 0x2
    unsigned char useSwivel; // offset 0x42, size 0x1
    unsigned char solveForPos; // offset 0x43, size 0x1
    class Vector endEffector; // offset 0x44, size 0xC
    class Vector sAngleMult; // offset 0x50, size 0xC
};
// total size: 0x48
class ReachDef : public Def {
    // Members
public:
    signed short startJoint; // offset 0x40, size 0x2
    float intensity; // offset 0x44, size 0x4
};
// total size: 0x70
class TrackerDef : public Def {
    // Members
public:
    signed short startJoint; // offset 0x40, size 0x2
    float speed; // offset 0x44, size 0x4
    float speed2; // offset 0x48, size 0x4
    float maxAngle; // offset 0x4C, size 0x4
    float maxAngle2; // offset 0x50, size 0x4
    class Vector localLookAtDir; // offset 0x54, size 0xC
    class Vector axis; // offset 0x60, size 0xC
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x8013A448
static // total size: 0x8
struct {} tSafeEntityCaster<LinkDef>::__RTTI; // size: 0x8, address: 0x8013A450
static // total size: 0x8
struct {} tSafeEntityCaster<ParticleSystemOnGeom2D>::__RTTI; // size: 0x8, address: 0x8013A458
static // total size: 0x8
struct {} tSafeEntityCaster<FlexJointDef>::__RTTI; // size: 0x8, address: 0x8013A460
static // total size: 0x8
struct {} LinkDef::__RTTI; // size: 0x8, address: 0x8013A470
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} ParticleSystem::__RTTI; // size: 0x8, address: 0x8013A478
static // total size: 0x8
struct {} ParticleSystemOnGeom2D::__RTTI; // size: 0x8, address: 0x8013A480
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} FlexJointDef::__RTTI; // size: 0x8, address: 0x8013A488
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



