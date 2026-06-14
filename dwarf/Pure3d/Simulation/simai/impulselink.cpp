/*
    Compile unit: D:\Pure3d\Simulation\simai\impulselink.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEBE8 -> 0x800BF894
*/
static unsigned char UseIKDef; // size: 0x1, address: 0x8013B2F0
static float PARALLELJOINT; // size: 0x4, address: 0x8013A248
// total size: 0x24
struct {} ImpulseLink::__vtable; // size: 0x24, address: 0x80113274
enum SimStateLinkEnum {
    LinkLost = 0,
    LinkCaught = 1,
    LinkPull = 2,
    LinkPullP = 3,
    LinkContact = 4,
};
// total size: 0x54
class ImpulseLink {
    // Functions
    ImpulseLink(class PhSubSTreeObj * o1, class SimTarget * t);

    ~ImpulseLink();

    void Reset();

    void CompAppObjPos();

    unsigned char IKDefCompleted(float dt);

    void AddImpulse(float dt);

    void AddImpulseToObj();

    void AddImpulseToJoint(class PhSubSTreeObj * jnt);

    void ComputeImpulse(float dt);

    class PhSTreeObj * ParentJoint();

    void DebugDisplay();

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
// Range: 0x800BEBE8 -> 0x800BEC70
// this: r31
ImpulseLink::ImpulseLink(class PhSubSTreeObj * o1 /* r1+0xC */, class SimTarget * t /* r1+0x10 */) {
    // References
    // -> struct [anonymous] ImpulseLink::__vtable;
}

// Range: 0x800BEC70 -> 0x800BECD0
// this: r30
ImpulseLink::~ImpulseLink() {
    // References
    // -> struct [anonymous] ImpulseLink::__vtable;
}

// Range: 0x800BECD0 -> 0x800BECEC
// this: r1+0x0
void ImpulseLink::Reset() {}

// Range: 0x800BECEC -> 0x800BED24
// this: r4
void ImpulseLink::CompAppObjPos() {}

// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
static float IKOffsetScale$233; // size: 0x4, address: 0x8013B2F4
static signed char init$234; // size: 0x1, address: 0x8013B2F8
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
// Range: 0x800BED24 -> 0x800BEEE0
// this: r31
unsigned char ImpulseLink::IKDefCompleted(float dt /* f31 */) {
    // Local variables
    class Vector v2; // r1+0x38

    // References
    // -> static float IKOffsetScale$233;
    // -> static signed char init$234;
    // -> static unsigned char UseIKDef;
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
// Range: 0x800BEEE0 -> 0x800BEF98
// this: r31
void ImpulseLink::AddImpulse(float dt /* f31 */) {}

// Range: 0x800BEF98 -> 0x800BF0FC
// this: r29
void ImpulseLink::AddImpulseToObj() {
    // Local variables
    class PhSubSTreeObj * jnt; // r31
    unsigned char parallel; // r30

    // References
    // -> static float PARALLELJOINT;
}

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
class tPose {};
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
// Range: 0x800BF0FC -> 0x800BF210
// this: r29
void ImpulseLink::AddImpulseToJoint(class PhSubSTreeObj * jnt /* r30 */) {
    // Local variables
    class PhSymMat m; // r1+0x10
    class PhBasicObj * o; // r31
}

static float MinDistFact$330; // size: 0x4, address: 0x8013B2FC
static signed char init$331; // size: 0x1, address: 0x8013B300
static float MinDistFact2$333; // size: 0x4, address: 0x8013B304
static signed char init$334; // size: 0x1, address: 0x8013B308
// Range: 0x800BF210 -> 0x800BF3A0
// this: r31
void ImpulseLink::ComputeImpulse(float dt /* f31 */) {
    // Local variables
    float intensity; // f2

    // References
    // -> static float MinDistFact2$333;
    // -> static float MinDistFact$330;
    // -> static signed char init$334;
    // -> static signed char init$331;
}

// Range: 0x800BF3A0 -> 0x800BF3D0
// this: r3
class PhSTreeObj * ImpulseLink::ParentJoint() {}

// Range: 0x800BF3D0 -> 0x800BF440
// this: r3
void ImpulseLink::DebugDisplay() {
    // Local variables
    class Vector p; // r1+0x10
}

// total size: 0x24
struct {} HelloLink::__vtable; // size: 0x24, address: 0x80113250
// total size: 0x60
class HelloLink : public ImpulseLink {
    // Functions
    void CompAppObjPos();

    // Members
public:
    float distOffsetMax; // offset 0x54, size 0x4
    float timer; // offset 0x58, size 0x4
    float delTimer; // offset 0x5C, size 0x4
};
// Range: 0x800BF440 -> 0x800BF4DC
// this: r1+0x8
void HelloLink::CompAppObjPos() {}

// total size: 0x24
struct {} ReachLink::__vtable; // size: 0x24, address: 0x80113214
// total size: 0x60
class ReachLink : public ImpulseLink {
    // Functions
    void AddImpulse(float dt);

    // Members
protected:
    float fActivationDuration; // offset 0x54, size 0x4
    float fActivationTime; // offset 0x58, size 0x4
    float fRecoveryDuration; // offset 0x5C, size 0x4
};
// Range: 0x800BF4DC -> 0x800BF5C4
// this: r31
void ReachLink::AddImpulse(float dt /* f31 */) {}

// total size: 0xC
struct {} ImpulseLinkMgr::__vtable; // size: 0xC, address: 0x801131E4
// total size: 0xC
struct {} TList<ImpulseLink*>::__vtable; // size: 0xC, address: 0x801131C8
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class ImpulseLinkMgr {
    // Functions
    ~ImpulseLinkMgr();

    void RemoveAll();

    void DebugDisplay();

    void Update(float dt);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// Range: 0x800BF5C4 -> 0x800BF644
// this: r30
ImpulseLinkMgr::~ImpulseLinkMgr() {
    // References
    // -> struct [anonymous] TList<ImpulseLink*>::__vtable;
    // -> struct [anonymous] ImpulseLinkMgr::__vtable;
}

// Range: 0x800BF644 -> 0x800BF6C8
// this: r29
void ImpulseLinkMgr::RemoveAll() {
    // Local variables
    int i; // r30
}

// Range: 0x800BF6C8 -> 0x800BF73C
// this: r29
void ImpulseLinkMgr::DebugDisplay() {
    // Local variables
    int i; // r30
}

// Range: 0x800BF73C -> 0x800BF7C0
// this: r29
void ImpulseLinkMgr::Update(float dt /* f31 */) {
    // Local variables
    int i; // r30
}

static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A24C
static // total size: 0x8
struct {} TList<ImpulseLink*>::__RTTI; // size: 0x8, address: 0x8013A254
static // total size: 0x8
struct {} ImpulseLinkMgr::__RTTI; // size: 0x8, address: 0x8013A25C
static // total size: 0x8
struct {} ImpulseLink::__RTTI; // size: 0x8, address: 0x8013A264
static // total size: 0x8
struct {} ReachLink::__RTTI; // size: 0x8, address: 0x8013A26C
static // total size: 0x8
struct {} HelloLink::__RTTI; // size: 0x8, address: 0x8013A274



