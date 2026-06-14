/*
    Compile unit: D:\Pure3d\Simulation\physics\PhSTree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EBD04 -> 0x800EE340
*/
static unsigned char ALLOW_FDYN; // size: 0x1, address: 0x8013AB78
static float BASEMAXRATIO; // size: 0x4, address: 0x8013AB7C
static float MINDVEQ; // size: 0x4, address: 0x8013B450
// total size: 0xC0
struct {} PhSTreeObj::__vtable; // size: 0xC0, address: 0x80115ED0
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
    // Functions
    PhSTreeObj(float vol, float density, class PhSubSTreeObj * subobj, int njoint);

    ~PhSTreeObj();

    void SetSubObj(class PhSubSTreeObj * subobj);

    void SetCollEl(class PhCollEl * collEl);

    class PhBasicObj * Clone();

    void SetClone(class PhSTreeObj * clone);

    void SetBasicParam(class iPhBasicObjParam * param);

    void SetSelfCollisionList(class PhPairElList * list);

    void CalcI0();

    void ResetAnimInfo();

    void SetPose(class tPose * pose);

    void Update(float dt);

    void AdvanceFrame(float dt);

    void AddTransform(const class Vector & dr);

    void AddTransform(const class Vector & dr, const class Matrix & mat);

    void SetTransform(const class Vector & pos, const class Matrix & mat);

    void SetScale(float scale);

    void EndCollision(unsigned char fdyn);

    void ResetCache();

    unsigned char GetCache(class Vector & v, class Vector & w) const;

    unsigned char AddImpulse(class Vector & pos, class Vector & imp, class PhSymMat & m);

    void SetPhEnv(class iPhEnv * env);

    void DissipateJointImpulse();

    unsigned char CollidingJoint(class PhSubSTreeObj * jnt1, class PhBasicObj * obj2);

    void FindCollisionCenter(class PhSubSTreeObj * jnt1, class PhSubSTreeObj * jnt2);

    void UnCollidingJoint(const class PhSubSTreeObj * j);

    void PushState(class PhBasicObjState * s);

    void FillState(class PhBasicObjState * s);

    void DrawSelf(int j);

    class PhBasicObjState * GetState();

    void SetControl(signed short c);

    void UpdateJoints();

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
// total size: 0xC
class PhTime : public iPhTime {};
// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
// ERROR: Failed to emit tag 960DD3 (GlobalSubroutine)
// Range: 0x800EBE9C -> 0x800EBFE8
// this: r30
PhSTreeObj::~PhSTreeObj() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] PhSTreeObj::__vtable;
}

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
// Range: 0x800EBFE8 -> 0x800EC1C4
// this: r31
void PhSTreeObj::SetSubObj(class PhSubSTreeObj * subobj /* r1+0xC */) {
    // Local variables
    int i; // r29
    class PhSubSTreeObj * p; // r4
}

// Range: 0x800EC1C4 -> 0x800EC1D4
// this: r1+0x0
void PhSTreeObj::SetCollEl(class PhCollEl * collEl /* r1+0x4 */) {}

// total size: 0xC
struct {} PhBasicObjList::__vtable; // size: 0xC, address: 0x80115DC8
// total size: 0x14
class PhBasicObjList : public VoidPList {};
// ERROR: Failed to emit tag 961F51 (GlobalSubroutine)
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
// Range: 0x800EC7E4 -> 0x800EC804
// this: r3
void PhSTreeObj::SetClone(class PhSTreeObj * clone /* r4 */) {}

// Range: 0x800EC804 -> 0x800EC888
// this: r28
void PhSTreeObj::SetBasicParam(class iPhBasicObjParam * param /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EC888 -> 0x800EC940
// this: r28
void PhSTreeObj::SetSelfCollisionList(class PhPairElList * list /* r29 */) {
    // Local variables
    int i; // r30
}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// Range: 0x800EC940 -> 0x800ECD90
// this: r31
void PhSTreeObj::CalcI0() {
    // Local variables
    class Vector v; // r1+0x80
    int i; // r29
    class Matrix rotMatT; // r1+0x40
    class Vector tmp1; // r1+0x34
    class PhSymMat tmp; // r1+0x18
}

// Range: 0x800ECD90 -> 0x800ECDFC
// this: r29
void PhSTreeObj::ResetAnimInfo() {
    // Local variables
    int i; // r30
}

// Range: 0x800ECDFC -> 0x800ECE64
// this: r30
void PhSTreeObj::SetPose(class tPose * pose /* r31 */) {}

// Range: 0x800ECE64 -> 0x800ECEA8
// this: r31
void PhSTreeObj::Update(float dt /* f31 */) {}

// Range: 0x800ECEA8 -> 0x800ECF7C
// this: r29
void PhSTreeObj::AdvanceFrame(float dt /* r1+0xC */) {}

// Range: 0x800ECF7C -> 0x800ECFA4
// this: r3
void PhSTreeObj::AddTransform(const class Vector & dr /* r4 */) {}

// Range: 0x800ECFA4 -> 0x800ECFCC
// this: r3
void PhSTreeObj::AddTransform(const class Vector & dr /* r4 */, const class Matrix & mat /* r5 */) {}

// Range: 0x800ECFCC -> 0x800ECFF4
// this: r3
void PhSTreeObj::SetTransform(const class Vector & pos /* r4 */, const class Matrix & mat /* r5 */) {}

// Range: 0x800ECFF4 -> 0x800ED1C8
// this: r31
void PhSTreeObj::SetScale(float scale /* f27 */) {
    // Local variables
    float f3; // f2
    float f; // f29
    float f5; // f28
    int i; // r29
}

// Range: 0x800ED1C8 -> 0x800ED43C
// this: r31
void PhSTreeObj::EndCollision(unsigned char fdyn /* r30 */) {
    // References
    // -> static unsigned char ALLOW_FDYN;
}

// Range: 0x800ED43C -> 0x800ED470
// this: r1+0x0
void PhSTreeObj::ResetCache() {}

// Range: 0x800ED470 -> 0x800ED4BC
// this: r1+0x0
unsigned char PhSTreeObj::GetCache(class Vector & v /* r1+0x4 */, class Vector & w /* r1+0x8 */) const {}

// Range: 0x800ED4BC -> 0x800ED768
// this: r29
unsigned char PhSTreeObj::AddImpulse(class Vector & pos /* r30 */, class Vector & imp /* r31 */, class PhSymMat & m /* r6 */) {
    // Local variables
    class Vector dveq; // r1+0x5C
    class Vector dr; // r1+0x44
    class Vector dvw; // r1+0x38
    float ratio; // r1+0x8

    // References
    // -> static float BASEMAXRATIO;
    // -> static float MINDVEQ;
}

// Range: 0x800ED768 -> 0x800ED7D0
// this: r30
void PhSTreeObj::SetPhEnv(class iPhEnv * env /* r31 */) {}

static float recovFact; // size: 0x4, address: 0x8013AB80
// Range: 0x800ED7D0 -> 0x800ED98C
// this: r29
void PhSTreeObj::DissipateJointImpulse() {
    // Local variables
    float factor; // f31
    float factor2; // f30
    int i; // r30

    // References
    // -> static float recovFact;
}

// Range: 0x800ED98C -> 0x800EDA74
// this: r31
unsigned char PhSTreeObj::CollidingJoint(class PhSubSTreeObj * jnt1 /* r4 */, class PhBasicObj * obj2 /* r5 */) {
    // Local variables
    class PhSubSTreeObj * jnt2; // r5
    class PhSubSTreeObj * jnt2; // r5
}

// Range: 0x800EDA74 -> 0x800EDB20
// this: r27
void PhSTreeObj::FindCollisionCenter(class PhSubSTreeObj * jnt1 /* r28 */, class PhSubSTreeObj * jnt2 /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EDB20 -> 0x800EDB38
// this: r1+0x0
void PhSTreeObj::UnCollidingJoint(const class PhSubSTreeObj * j /* r1+0x4 */) {}

// Range: 0x800EDB38 -> 0x800EDCC4
// this: r31
void PhSTreeObj::PushState(class PhBasicObjState * s /* r27 */) {
    // Local variables
    class PhSTreeState * state; // r1+0x8
    int i; // r28
}

// Range: 0x800EDCC4 -> 0x800EDD5C
// this: r27
void PhSTreeObj::FillState(class PhBasicObjState * s /* r28 */) {
    // Local variables
    class PhSTreeState * state; // r1+0x8
    int i; // r29
}

// Range: 0x800EDD5C -> 0x800EDE58
// this: r30
void PhSTreeObj::DrawSelf(int j /* r31 */) {
    // Local variables
    int i; // r27
}

// Range: 0x800EDE58 -> 0x800EDEC0
// this: r31
class PhBasicObjState * PhSTreeObj::GetState() {
    // Local variables
    class PhSTreeState * state; // r4
}

// total size: 0xC
struct {} PhSTreeState::__vtable; // size: 0xC, address: 0x80115D64
// total size: 0x8C
class PhSTreeState : public PhRgdBodyState {
    // Functions
    PhSTreeState(signed short type);

    ~PhSTreeState();

    // Members
protected:
    float fCurFrame; // offset 0x7C, size 0x4
    float fDt; // offset 0x80, size 0x4
    int fNbSubObj; // offset 0x84, size 0x4
    class PhBasicObjState * * fSubObjState; // offset 0x88, size 0x4
};
// ERROR: Failed to emit tag 96C68B (GlobalSubroutine)
// total size: 0x7C
class PhRgdBodyState : public PhParticleState {
    // Members
protected:
    class Vector fW; // offset 0x70, size 0xC
};
// total size: 0x70
class PhParticleState : public PhObjState {
    // Members
protected:
    class Vector fV; // offset 0x5C, size 0xC
    signed short fControl; // offset 0x68, size 0x2
    float fControlTime; // offset 0x6C, size 0x4
};
// total size: 0x5C
class PhObjState : public PhBasicObjState {
    // Members
protected:
    class Vector fR; // offset 0xC, size 0xC
    class Matrix fRotMat; // offset 0x18, size 0x40
    float fScaleFact; // offset 0x58, size 0x4
};
// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 96D0DF (GlobalSubroutine)
// Range: 0x800EE010 -> 0x800EE070
// this: r30
void PhSTreeObj::SetControl(signed short c /* r31 */) {}

// Range: 0x800EE070 -> 0x800EE340
// this: r31
void PhSTreeObj::UpdateJoints() {
    // Local variables
    class Vector v; // r1+0x74
    class Matrix m; // r1+0x34
    class Joint * current; // r4
    unsigned char doDynamics; // r30
    int i; // r26
}

static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013AB84
static // total size: 0x8
struct {} PhObjState::__RTTI; // size: 0x8, address: 0x8013AB8C
static // total size: 0x8
struct {} PhParticleState::__RTTI; // size: 0x8, address: 0x8013AB94
static // total size: 0x8
struct {} PhRgdBodyState::__RTTI; // size: 0x8, address: 0x8013AB9C
static // total size: 0x8
struct {} PhSTreeState::__RTTI; // size: 0x8, address: 0x8013ABA4
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013ABAC
static // total size: 0x8
struct {} PhBasicObjList::__RTTI; // size: 0x8, address: 0x8013ABB4
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013ABBC
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013ABCC
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013ABD4
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013ABE4
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x8013ABEC
static // total size: 0x8
struct {} PhRgdBody::__RTTI; // size: 0x8, address: 0x8013ABF4
static // total size: 0x8
struct {} PhSTreeObj::__RTTI; // size: 0x8, address: 0x8013ABFC
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013AC14
static // total size: 0x8
struct {} iPhTime::__RTTI; // size: 0x8, address: 0x8013AC1C
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
static // total size: 0x8
struct {} iPhSpeed::__RTTI; // size: 0x8, address: 0x8013AC24



