/*
    Compile unit: D:\Pure3d\Simulation\physics\PhSStree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E8148 -> 0x800EBB64
*/
static float MAXPHW2; // size: 0x4, address: 0x8013AAD8
static float MAXWDRDT; // size: 0x4, address: 0x8013AADC
static float MAXSPEEDRATIO; // size: 0x4, address: 0x8013AAE0
static float FRACTFCMN; // size: 0x4, address: 0x8013AAE4
static float FRACTFCMN2; // size: 0x4, address: 0x8013AAE8
static float PARALLEL; // size: 0x4, address: 0x8013AAEC
static float PARALLELT; // size: 0x4, address: 0x8013AAF0
static float PARALLELT2; // size: 0x4, address: 0x8013AAF4
static float MINREACT; // size: 0x4, address: 0x8013AAF8
static float MINReactScale; // size: 0x4, address: 0x8013AAFC
static float ALMOST_ONE; // size: 0x4, address: 0x8013AB00
static unsigned char LIMITACCEL; // size: 0x1, address: 0x8013AB04
static float MaxReactRatio; // size: 0x4, address: 0x8013AB08
// total size: 0x98
struct {} PhSubSTreeObj::__vtable; // size: 0x98, address: 0x80115BE8
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
// total size: 0x150
class PhSubSTreeObj : public PhBasicObj {
    // Functions
    PhSubSTreeObj();

    ~PhSubSTreeObj();

    void ResetAnimInfo();

    void SetDOFData(class PhDOFData * d);

    int NDOF() const;

    void SetInvStiff(float r);

    float InvMass() const;

    float Mass() const;

    void SetParentSubObj(class PhSubSTreeObj * pso);

    void SetFakeInvI();

    void DissipateJointImpulse(float factor, float factor2);

    void StartIncludeVW();

    void IncludeVW(class Vector & v, class Vector & w);

    void IncludeVWReaction(class Vector & v, class Vector & w, unsigned char collancestor);

    unsigned char ImpulseReaction(class Vector & dvcm, class Vector & wabs);

    void GetLocalSpeed(const class Vector & pos, class Vector & v) const;

    void GetMassMatrix(class Vector & pos, class PhSymMat & m, class PhBasicObj * obj);

    void GetJointMassMatrix(class Vector & pos, class PhSymMat & m);

    void StartCollision(const class Vector & pos, const class Vector & dir, class PhBasicObj * obj);

    void CompAbsFact(const class Vector & pos, const class Vector & dir);

    void EndCollision(unsigned char fdyn);

    unsigned char AddImpulse(class Vector & pos, class Vector & imp, class PhSymMat & m, class PhBasicObj * obj);

    unsigned char AddJointImpulse(class Vector & pos, class Vector & imp, class PhSymMat & m, class PhBasicObj * obj);

    unsigned char TestForParallelImpulse(float parallel);

    void ResetCache();

    float GetEnergy() const;

    float ML2() const;

    void DrawSelf(int i);

    void PushState();

    class PhBasicObjState * GetState();

    unsigned char IsAncestorOf(const class PhSubSTreeObj * joint) const;

    void GetTransform(class Matrix & m) const;

    void UpdateJoint(class Matrix & mat, float scale, unsigned char doDynamics);

    void UpdateCMVector(class Matrix & m);

    void TestForSpeedProblem();

    void SetIKDef(unsigned char b);

    unsigned char IKDef();

    void RetrieveCollEl(class PhCollEl * el);

    void IntroduceCollEl(class PhCollEl * el, unsigned char own);

    class PhCollEl * CloneOwnCollEl();

    void ComputeJointICM();

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
// Range: 0x800E8148 -> 0x800E81FC
// this: r1+0x8
PhSubSTreeObj::PhSubSTreeObj() {
    // References
    // -> struct [anonymous] PhSubSTreeObj::__vtable;
}

// Range: 0x800E81FC -> 0x800E82C0
// this: r30
PhSubSTreeObj::~PhSubSTreeObj() {
    // References
    // -> struct [anonymous] PhSubSTreeObj::__vtable;
}

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
// Range: 0x800E8324 -> 0x800E83B0
// this: r31
void PhSubSTreeObj::ResetAnimInfo() {}

// Range: 0x800E83B0 -> 0x800E83B8
// this: r1+0x0
void PhSubSTreeObj::SetDOFData(class PhDOFData * d /* r1+0x4 */) {}

// Range: 0x800E83B8 -> 0x800E83D4
// this: r1+0x0
int PhSubSTreeObj::NDOF() const {}

// Range: 0x800E83D4 -> 0x800E83DC
// this: r1+0x0
void PhSubSTreeObj::SetInvStiff(float r /* r1+0x4 */) {}

// Range: 0x800E83DC -> 0x800E840C
// this: r3
float PhSubSTreeObj::InvMass() const {}

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
// Range: 0x800E840C -> 0x800E843C
// this: r3
float PhSubSTreeObj::Mass() const {}

// total size: 0xC
struct {} PhSubSTreeObjList::__vtable; // size: 0xC, address: 0x80115B78
// Range: 0x800E843C -> 0x800E85B8
// this: r30
void PhSubSTreeObj::SetParentSubObj(class PhSubSTreeObj * pso /* r31 */) {
    // Local variables
    class PhSubSTreeObj * tmp; // r4
    float lmax; // r1+0x8

    // References
    // -> static float MINReactScale;
    // -> struct [anonymous] PhSubSTreeObjList::__vtable;
}

// Range: 0x800E85B8 -> 0x800E8614
// this: r1+0x0
void PhSubSTreeObj::SetFakeInvI() {}

// Range: 0x800E8614 -> 0x800E864C
// this: r1+0x8
void PhSubSTreeObj::DissipateJointImpulse(float factor /* f1 */, float factor2 /* f2 */) {}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800E864C -> 0x800E87A4
// this: r31
void PhSubSTreeObj::StartIncludeVW() {
    // Local variables
    class Vector w; // r1+0x48
    class Vector v; // r1+0x3C
    int i; // r27
}

// Range: 0x800E87A4 -> 0x800E89D4
// this: r27
void PhSubSTreeObj::IncludeVW(class Vector & v /* r28 */, class Vector & w /* r29 */) {
    // Local variables
    class Vector dv; // r1+0x70
    class Vector dr; // r1+0x64
    class Vector cache; // r1+0x58
    int i; // r30
}

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
// Range: 0x800E89D4 -> 0x800E8D6C
// this: r24
void PhSubSTreeObj::IncludeVWReaction(class Vector & v /* r25 */, class Vector & w /* r26 */, unsigned char collancestor /* r27 */) {
    // Local variables
    class Vector dv; // r1+0xA8
    class Vector dr; // r1+0x9C
    class Vector dw; // r1+0x84
    class Vector cache; // r1+0x78
    int i; // r28

    // References
    // -> static float MINREACT;
}

float Small_Speed; // size: 0x4, address: 0x8013B408
// Range: 0x800E8D6C -> 0x800E9038
// this: r28
unsigned char PhSubSTreeObj::ImpulseReaction(class Vector & dvcm /* r29 */, class Vector & wabs /* r30 */) {
    // Local variables
    class Vector dvtest; // r1+0x4C
    class Vector v; // r1+0x40
    float r1; // f1
    unsigned char ret; // r31
    float fact; // f2
    float f; // r1+0x8

    // References
    // -> float Small_Speed;
    // -> static float MaxReactRatio;
    // -> static unsigned char LIMITACCEL;
}

// Range: 0x800E9038 -> 0x800E9250
// this: r29
void PhSubSTreeObj::GetLocalSpeed(const class Vector & pos /* r30 */, class Vector & v /* r31 */) const {
    // Local variables
    class Vector dr; // r1+0x24
    class Vector dv; // r1+0x18
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
static unsigned char UseOldMethod$623; // size: 0x1, address: 0x8013B448
static signed char init$624; // size: 0x1, address: 0x8013B449
// Range: 0x800E9250 -> 0x800E94A4
// this: r28
void PhSubSTreeObj::GetMassMatrix(class Vector & pos /* r29 */, class PhSymMat & m /* r30 */, class PhBasicObj * obj /* r6 */) {
    // Local variables
    float totalpha; // f28
    float mass; // f1
    class PhSubSTreeObj * jnt; // r31

    // References
    // -> static unsigned char UseOldMethod$623;
    // -> static signed char init$624;
}

// Range: 0x800E94A4 -> 0x800E961C
// this: r29
void PhSubSTreeObj::GetJointMassMatrix(class Vector & pos /* r4 */, class PhSymMat & m /* r30 */) {
    // Local variables
    float tmp; // f1
}

// Range: 0x800E961C -> 0x800E96D4
// this: r28
void PhSubSTreeObj::StartCollision(const class Vector & pos /* r29 */, const class Vector & dir /* r30 */, class PhBasicObj * obj /* r31 */) {
    // Local variables
    class PhSubSTreeObj * jnt; // r31
}

// Range: 0x800E96D4 -> 0x800E98A0
// this: r30
void PhSubSTreeObj::CompAbsFact(const class Vector & pos /* r1+0xC */, const class Vector & dir /* r31 */) {
    // Local variables
    class Vector dr; // r1+0x58

    // References
    // -> static float PARALLEL;
    // -> static float FRACTFCMN;
    // -> static float FRACTFCMN2;
}

// Range: 0x800E98A0 -> 0x800E9908
// this: r30
void PhSubSTreeObj::EndCollision(unsigned char fdyn /* r31 */) {}

// Range: 0x800E9908 -> 0x800E9998
// this: r27
unsigned char PhSubSTreeObj::AddImpulse(class Vector & pos /* r28 */, class Vector & imp /* r29 */, class PhSymMat & m /* r30 */, class PhBasicObj * obj /* r31 */) {
    // Local variables
    class Vector localimp; // r1+0x1C
    unsigned char ret; // r31
}

// Range: 0x800E9998 -> 0x800E9F68
// this: r27
unsigned char PhSubSTreeObj::AddJointImpulse(class Vector & pos /* r28 */, class Vector & imp /* r29 */, class PhSymMat & m /* r30 */, class PhBasicObj * obj /* r31 */) {
    // Local variables
    class Vector absimp; // r1+0xB4
    class Vector dr; // r1+0xA8
    class Vector dveq; // r1+0x90
    class Vector dvtest; // r1+0x84
    float parallel; // f1
    float maxv; // r1+0x8
    class Vector cache; // r1+0x70
    float ratio; // r1+0x8
    float vdotv; // r1+0x8

    // References
    // -> static float ALMOST_ONE;
    // -> static float MAXSPEEDRATIO;
    // -> float Small_Speed;
    // -> static float MAXWDRDT;
}

// Range: 0x800E9F68 -> 0x800EA040
// this: r30
unsigned char PhSubSTreeObj::TestForParallelImpulse(float parallel /* f31 */) {
    // Local variables
    unsigned char ret; // r31

    // References
    // -> static float PARALLELT2;
    // -> static float PARALLELT;
    // -> static float PARALLEL;
}

// Range: 0x800EA040 -> 0x800EA0B8
// this: r3
void PhSubSTreeObj::ResetCache() {}

// Range: 0x800EA0B8 -> 0x800EA148
// this: r3
float PhSubSTreeObj::GetEnergy() const {
    // Local variables
    const class PhSubSTreeObj * o; // r4
    float e; // f31
}

// Range: 0x800EA148 -> 0x800EA160
// this: r1+0x0
float PhSubSTreeObj::ML2() const {}

// total size: 0xC
class iPhLength : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhLength : public iPhLength {};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// ERROR: Failed to emit tag 94FB69 (GlobalSubroutine)
// Range: 0x800EA6B8 -> 0x800EA704
// this: r31
void PhSubSTreeObj::PushState() {}

// Range: 0x800EA704 -> 0x800EA708
void PhSubSTreeObj::FillState() {}

// total size: 0xC
struct {} PhSubSTreeState::__vtable; // size: 0xC, address: 0x80115ADC
// ERROR: Failed to emit tag 95007C (GlobalSubroutine)
// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
};
// Range: 0x800EA784 -> 0x800EA7A8
// this: r1+0x0
unsigned char PhSubSTreeObj::IsAncestorOf(const class PhSubSTreeObj * joint /* r4 */) const {
    // Local variables
    const class PhSubSTreeObj * jnt; // r4
}

// Range: 0x800EA7A8 -> 0x800EA7F8
// this: r30
void PhSubSTreeObj::GetTransform(class Matrix & m /* r31 */) const {}

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
// Range: 0x800EA7F8 -> 0x800EAC90
// this: r30
void PhSubSTreeObj::UpdateJoint(class Matrix & mat /* r31 */, float scale /* f31 */, unsigned char doDynamics /* r1+0x14 */) {
    // Local variables
    class Vector tmpcm; // r1+0xD0
    class Matrix rotT; // r1+0x90
    class Matrix dmat; // r1+0x50
    float f; // f3
    int c; // r28
    class PhSubSTreeObj * s; // r1+0x8
}

// Range: 0x800EAC90 -> 0x800EACDC
// this: r30
void PhSubSTreeObj::UpdateCMVector(class Matrix & m /* r31 */) {}

// Range: 0x800EACDC -> 0x800EAD58
// this: r1+0x0
void PhSubSTreeObj::TestForSpeedProblem() {
    // Local variables
    unsigned char vprob; // r1+0x0

    // References
    // -> static float MAXPHW2;
}

// Range: 0x800EAD58 -> 0x800EAE44
// this: r31
void PhSubSTreeObj::SetIKDef(unsigned char b /* r30 */) {}

// Range: 0x800EAE44 -> 0x800EAEC4
// this: r1+0x8
unsigned char PhSubSTreeObj::IKDef() {}

// total size: 0x4
class ListLocker {
    // Members
    class VoidPList * fList; // offset 0x0, size 0x4
};
// Range: 0x800EAEC4 -> 0x800EB0E4
// this: r30
void PhSubSTreeObj::RetrieveCollEl(class PhCollEl * el /* r31 */) {
    // Local variables
    class PhSubSTreeObj * jp; // r29
    int i; // r28
    class PhCollEl * subel; // r27
    class ListLocker lock; // r1+0xC4
    int i; // r4
    class ListLocker lock; // r1+0xC0
    int j; // r27
    class PhCollEl * subel; // r28
}

// Range: 0x800EB0E4 -> 0x800EB2FC
// this: r31
void PhSubSTreeObj::IntroduceCollEl(class PhCollEl * el /* r27 */, unsigned char own /* r1+0x10 */) {
    // Local variables
    class PhSubSTreeObj * pj; // r28
    class PhCollElList * parentList; // r30
    class ListLocker lock; // r1+0x38
    int i; // r27
    class PhCollEl * subel; // r26
    class PhCollEl * tmpel; // r26
}

// Range: 0x800EB2FC -> 0x800EB400
// this: r28
class PhCollEl * PhSubSTreeObj::CloneOwnCollEl() {
    // Local variables
    class PhCollEl * el; // r30
    int i; // r29
    class PhCollEl * sel; // r3
}

// total size: 0xC
struct {} PhSymMat::__vtable; // size: 0xC, address: 0x8011606C
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
// Range: 0x800EB400 -> 0x800EB5E0
class PhSymMat JointInertia(int jindex /* r25 */, class PhCollEl * collEl /* r26 */, const class Vector & cm /* r27 */) {
    // Local variables
    class PhSymMat i0; // r1+0xB4
    int i; // r30
    class PhCollEl * el; // r29
    class PhSubSTreeObj * jnt; // r28

    // References
    // -> struct [anonymous] PhSymMat::__vtable;
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
// Range: 0x800EB5E0 -> 0x800EB714
class Vector JointVR(int jindex /* r26 */, class PhCollEl * collEl /* r27 */) {
    // Local variables
    int i; // r30
    class PhCollEl * el; // r29
    class PhSubSTreeObj * jnt; // r28
}

// Range: 0x800EB714 -> 0x800EB89C
float JointVolume(int jindex /* r29 */, class PhCollEl * collEl /* r30 */) {
    // Local variables
    float v; // f30
    int i; // r31
    class PhCollEl * el; // r23
    class PhSubSTreeObj * jnt; // r24
}

// Range: 0x800EB89C -> 0x800EBB64
// this: r31
void PhSubSTreeObj::ComputeJointICM() {
    // Local variables
    float density; // r1+0x8
    class Matrix m; // r1+0x74
}

static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013AB0C
static // total size: 0x8
struct {} PhSubSTreeState::__RTTI; // size: 0x8, address: 0x8013AB14
// total size: 0x24
class PhSubSTreeState : public PhBasicObjState {
    // Members
protected:
    class Vector fWDTImpulse; // offset 0xC, size 0xC
    class Vector fWImpulseNew; // offset 0x18, size 0xC
};
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013AB24
static // total size: 0x8
struct {} iPhLength::__RTTI; // size: 0x8, address: 0x8013AB2C
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
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013AB34
static // total size: 0x8
struct {} PhSubSTreeObjList::__RTTI; // size: 0x8, address: 0x8013AB3C
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AB44
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AB54
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013AB5C
static // total size: 0x8
struct {} PhSubSTreeObj::__RTTI; // size: 0x8, address: 0x8013AB64



