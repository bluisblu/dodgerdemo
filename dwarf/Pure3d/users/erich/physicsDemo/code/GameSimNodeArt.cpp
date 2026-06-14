/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\GameSimNodeArt.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80009C54 -> 0x8000A440
*/
float reactHorizontalRatio; // size: 0x4, address: 0x801377F0
float crashHorizontalRatio; // size: 0x4, address: 0x801377F4
float crashARatio; // size: 0x4, address: 0x801377F8
float handLinkIntensity; // size: 0x4, address: 0x801377FC
float handMinDist; // size: 0x4, address: 0x80137800
int leftHandJoint; // size: 0x4, address: 0x80137804
int rightHandJoint; // size: 0x4, address: 0x80137808
int headJoint; // size: 0x4, address: 0x8013780C
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
class Vector headLookAtDir0; // size: 0xC, address: 0x80117700
class Vector headLookAtAxis; // size: 0xC, address: 0x8011770C
float maxHeadAngleDefH; // size: 0x4, address: 0x80137810
float maxHeadAngleDefV; // size: 0x4, address: 0x80137814
float maxHeadSpeed; // size: 0x4, address: 0x80137818
// total size: 0x44
struct {} GameSimNodeArt::__vtable; // size: 0x44, address: 0x800FC12C
// total size: 0x18
class SimNodeTarget : public SimTarget {
    // Members
protected:
    class SimNode * target; // offset 0x14, size 0x4
};
// total size: 0xAC
class GameSimNodeArt : public SimNodeArticulated {
    // Functions
    GameSimNodeArt(class PhSTreeObj * obj, class tPose * p, class Matrix * rm, class SimGroup * sg);

    ~GameSimNodeArt();

    void SetLookAt(class SimNode * node);

    void UpdatePoseModifier(float dt);

    void SetLeftHandLink(class SimNode * nodeTarget);

    void SetRightHandLink(class SimNode * nodeTarget);

    void DebugDisplay();

    void TestVirtualState(float dt);

    unsigned char TestCache();

    void AbsorbCache();

    // Members
public:
    class SimNodeTarget * lookAtTarget; // offset 0xA0, size 0x4
    class ImpulseLink * leftHandLink; // offset 0xA4, size 0x4
    class ImpulseLink * rightHandLink; // offset 0xA8, size 0x4
};
// Range: 0x80009C54 -> 0x80009CB4
// this: r31
GameSimNodeArt::GameSimNodeArt(class PhSTreeObj * obj /* r4 */, class tPose * p /* r5 */, class Matrix * rm /* r6 */, class SimGroup * sg /* r7 */) {
    // References
    // -> struct [anonymous] GameSimNodeArt::__vtable;
}

// Range: 0x80009CB4 -> 0x80009D60
// this: r30
GameSimNodeArt::~GameSimNodeArt() {
    // References
    // -> struct [anonymous] GameSimNodeArt::__vtable;
}

// Range: 0x80009D60 -> 0x80009EC0
// this: r29
void GameSimNodeArt::SetLookAt(class SimNode * node /* r30 */) {
    // References
    // -> float maxHeadSpeed;
    // -> float maxHeadAngleDefH;
    // -> float maxHeadAngleDefV;
    // -> class Vector headLookAtAxis;
    // -> class Vector headLookAtDir0;
    // -> int headJoint;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013781C
static // total size: 0x8
struct {} SimTarget::__RTTI; // size: 0x8, address: 0x80137824
static // total size: 0x8
struct {} SimNodeTarget::__RTTI; // size: 0x8, address: 0x8013782C
// Range: 0x80009EC0 -> 0x8000A03C
// this: r31
void GameSimNodeArt::UpdatePoseModifier(float dt /* f31 */) {
    // Local variables
    unsigned char seeTarget; // r30
    class Vector v; // r1+0x5C
    class SimNodeTarget * t; // r1+0x8
    class SimNodeTarget * t; // r1+0x8

    // References
    // -> static struct [anonymous] SimTarget::__RTTI;
    // -> static struct [anonymous] SimNodeTarget::__RTTI;
}

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
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// Range: 0x8000A03C -> 0x8000A120
// this: r29
void GameSimNodeArt::SetLeftHandLink(class SimNode * nodeTarget /* r30 */) {
    // Local variables
    class SimTarget * target; // r31
    class PhSubSTreeObj * substree; // r30

    // References
    // -> float handMinDist;
    // -> float handLinkIntensity;
    // -> int leftHandJoint;
}

// Range: 0x8000A120 -> 0x8000A204
// this: r29
void GameSimNodeArt::SetRightHandLink(class SimNode * nodeTarget /* r30 */) {
    // Local variables
    class SimTarget * target; // r31
    class PhSubSTreeObj * substree; // r30

    // References
    // -> float handMinDist;
    // -> float handLinkIntensity;
    // -> int rightHandJoint;
}

// Range: 0x8000A204 -> 0x8000A228
// this: r3
void GameSimNodeArt::DebugDisplay() {}

// Range: 0x8000A228 -> 0x8000A3D4
// this: r31
void GameSimNodeArt::TestVirtualState(float dt /* r1+0xC */) {
    // Local variables
    class Vector pos; // r1+0x88
    class Vector speed; // r1+0x7C
    class Vector dr; // r1+0x70

    // References
    // -> float reactHorizontalRatio;
    // -> float crashHorizontalRatio;
    // -> float crashARatio;
}

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
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class SimFlex {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class SimFlexJointMgr {};
// total size: 0x0
class IKanLinkMgr {};
// total size: 0x0
class tPose {};
enum LookAtControlEnum {
    LookAtEmpty = 0,
    LookAtDissipating = 1,
    LookAtActivated = 2,
};
// total size: 0x0
class TArray {};
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
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
// total size: 0x0
class FlexJointDef {};
// total size: 0x0
class tSkeleton {};
// total size: 0x0
class ParticleSystem {};
// total size: 0x0
class PhComposite {};
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
// Range: 0x8000A3D4 -> 0x8000A3F4
// this: r3
unsigned char GameSimNodeArt::TestCache() {}

// Range: 0x8000A3F4 -> 0x8000A414
// this: r3
void GameSimNodeArt::AbsorbCache() {}

static // total size: 0x8
struct {} SimNodeBase::__RTTI; // size: 0x8, address: 0x80137834
static // total size: 0x8
struct {} SimNode::__RTTI; // size: 0x8, address: 0x80137844
static // total size: 0x8
struct {} SimNodeArticulated::__RTTI; // size: 0x8, address: 0x8013784C
static // total size: 0x8
struct {} GameSimNodeArt::__RTTI; // size: 0x8, address: 0x80137854
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



