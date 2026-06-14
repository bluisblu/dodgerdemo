/*
    Compile unit: D:\Pure3d\Simulation\physics\PhComposite.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DDC68 -> 0x800DF008
*/
// total size: 0xC
struct {} PhComposite::__vtable; // size: 0xC, address: 0x80114A18
// total size: 0xC
struct {} TList<PhComposite::PhCompositeElement*>::__vtable; // size: 0xC, address: 0x80114A68
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
// total size: 0x40
class PhComposite : public tEntity {
    // Functions
    PhComposite(class PhSubSTreeObj * subObj);

    ~PhComposite();

    class PhComposite * Clone(class tCompositeDrawable * compdraw);

    void Init(class tCompositeDrawable * compdraw, class tEntityStore * store);

    void BuiltPhCompositeElement(class tEntityStore * store);

    void BuildCollisionHierarchy();

    unsigned char IntroduceDrawEl(class tEntityStore * store, class DrawableElement * el);

    void SetVisibility(unsigned char computeDyn);

    void SetVisibility(class DrawableElement * el, unsigned char computeDyn);

    unsigned char IsParentOfJoint(int testparent, int joint);

    void ComputeDyn(class PhSubSTreeObj * j);

    void ResetPhObjVolume();

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
// Range: 0x800DDC68 -> 0x800DDD04
// this: r1+0x8
PhComposite::PhComposite(class PhSubSTreeObj * subObj /* r29 */) {
    // References
    // -> struct [anonymous] TList<PhComposite::PhCompositeElement*>::__vtable;
    // -> struct [anonymous] PhComposite::__vtable;
}

// Range: 0x800DDD68 -> 0x800DDE44
// this: r28
PhComposite::~PhComposite() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] TList<PhComposite::PhCompositeElement*>::__vtable;
    // -> struct [anonymous] PhComposite::__vtable;
}

// Range: 0x800DDE44 -> 0x800DE1A8
// this: r25
class PhComposite * PhComposite::Clone(class tCompositeDrawable * compdraw /* r26 */) {
    // Local variables
    class PhSubSTreeObj * subobj; // r1+0x8
    int i; // r28
    class PhSubSTreeObj * jnt; // r27
    class PhComposite * clone; // r24

    // References
    // -> struct [anonymous] TList<PhComposite::PhCompositeElement*>::__vtable;
    // -> struct [anonymous] PhComposite::__vtable;
}

// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
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
// ERROR: Failed to emit tag 88F9BA (GlobalSubroutine)
// Range: 0x800DE5F4 -> 0x800DE73C
// this: r31
void PhComposite::BuiltPhCompositeElement(class tEntityStore * store /* r27 */) {
    // Local variables
    int i; // r28
    class PhCollEl * bbox; // r27
}

// total size: 0x4
class ListLocker {
    // Members
    class VoidPList * fList; // offset 0x0, size 0x4
};
// Range: 0x800DE73C -> 0x800DEA34
// this: r28
void PhComposite::BuildCollisionHierarchy() {
    // Local variables
    int orphan[100]; // r1+0x98
    int nborphan; // r30
    int i; // r29
    class PhSubSTreeObj * parent; // r25
    class PhCollElList * lst; // r25
    unsigned char modif; // r24
    class ListLocker lock; // r1+0x94
    int j; // r29
    class PhCollEl * refel; // r23
    int testparent; // r23
    unsigned char found; // r24
    class PhCollEl * el; // r24
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
class PhCollElList : public VoidPList {};
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
// total size: 0x0
class PhWorld {};
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
// total size: 0x18
class PhDOFData {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    float fMaxAngle; // offset 0x4, size 0x4
    float fMinAngle; // offset 0x8, size 0x4
    float fCurAngle; // offset 0xC, size 0x4
    int fDOF; // offset 0x10, size 0x4
    unsigned char fEmptyDynW; // offset 0x14, size 0x1
    unsigned char fParentRelative; // offset 0x15, size 0x1
    unsigned char fSaveIKDef; // offset 0x16, size 0x1
};
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
static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x8013A788
static // total size: 0x8
struct {} tCompositeDrawable::DrawableElement::__RTTI; // size: 0x8, address: 0x8013A790
static // total size: 0x8
struct {} tCompositeDrawable::DrawablePropElement::__RTTI; // size: 0x8, address: 0x8013A798
static // total size: 0x8
struct {} tCompositeDrawable::DrawablePoseElement::__RTTI; // size: 0x8, address: 0x8013A7A0
// Range: 0x800DEA34 -> 0x800DEC00
// this: r31
unsigned char PhComposite::IntroduceDrawEl(class tEntityStore * store /* r25 */, class DrawableElement * el /* r24 */) {
    // Local variables
    unsigned char ret; // r30
    class DrawablePropElement * propel; // r26
    class PhCollEl * newel; // r27
    class DrawablePoseElement * poseel; // r29
    int i; // r25
    class PhCollEl * el; // r24

    // References
    // -> static struct [anonymous] tCompositeDrawable::DrawableElement::__RTTI;
    // -> static struct [anonymous] tCompositeDrawable::DrawablePoseElement::__RTTI;
    // -> static struct [anonymous] tCompositeDrawable::DrawablePropElement::__RTTI;
}

enum PhObjEnum {
    phBasicObj = 0,
    phObj = 1,
    phMoving = 2,
    phParticle = 3,
    phRgdBody = 4,
    phLRgdBody = 5,
    phSTree = 6,
    MaxPhObjEnum = 7,
};
// total size: 0x10
class DrawablePoseElement : public DrawableElement {
    // Members
    class tDrawablePose * skin; // offset 0xC, size 0x4
};
// total size: 0x14
class DrawablePropElement : public DrawableElement {
    // Members
    class tDrawable * prop; // offset 0xC, size 0x4
    int poseIndex; // offset 0x10, size 0x4
};
// Range: 0x800DEC00 -> 0x800DECA4
// this: r28
void PhComposite::SetVisibility(unsigned char computeDyn /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800DECA4 -> 0x800DEDFC
// this: r26
void PhComposite::SetVisibility(class DrawableElement * el /* r27 */, unsigned char computeDyn /* r28 */) {
    // Local variables
    unsigned char setObjVol; // r30
    int i; // r29
    class PhCompositeElement * cel; // r1+0x8
    class PhSubSTreeObj * jnt; // r24
    float prevVol; // f31
}

// Range: 0x800DEDFC -> 0x800DEE3C
// this: r1+0x0
unsigned char PhComposite::IsParentOfJoint(int testparent /* r1+0x4 */, int joint /* r1+0x8 */) {
    // Local variables
    int p; // r1+0x0
}

// Range: 0x800DEE3C -> 0x800DEEC4
// this: r30
void PhComposite::ComputeDyn(class PhSubSTreeObj * j /* r31 */) {
    // Local variables
    int parentIndex; // r1+0x8
}

// Range: 0x800DEEC4 -> 0x800DEF84
// this: r1+0x8
void PhComposite::ResetPhObjVolume() {
    // Local variables
    int i; // r7
}

// Range: 0x800DEF84 -> 0x800DF008
class PhSubSTreeObj * FindDynJoint(class PhSubSTreeObj * inJnt /* r3 */) {
    // Local variables
    class PhSubSTreeObj * jnt; // r31
}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x8013A7A8
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A7B0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A7C0
static // total size: 0x8
struct {} PhComposite::__RTTI; // size: 0x8, address: 0x8013A7C8
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A7D0
static // total size: 0x8
struct {} TList<PhComposite::PhCompositeElement*>::__RTTI; // size: 0x8, address: 0x8013A7D8
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x8013A7E0
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x8013A7E8
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x8013A7F0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



