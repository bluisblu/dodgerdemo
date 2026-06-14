/*
    Compile unit: D:\Pure3d\Simulation\physics\PhPartic.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E5908 -> 0x800E649C
*/
// total size: 0xB0
struct {} PhParticle::__vtable; // size: 0xB0, address: 0x80115794
// total size: 0x14
struct {} SimpleFilterAbs3D::__vtable; // size: 0x14, address: 0x80114338
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
    // Functions
    PhParticle(float vol, float density);

    ~PhParticle();

    class PhBasicObj * Clone();

    void SetClone(class PhParticle * clone);

    void InitState();

    void SetDynParam(class iPhDynObjParam * param);

    void SolveAppliedForces(float dt);

    void Update(float dt);

    void SetTransform(const class Vector & pos, const class Matrix & mat);

    void GetMassMatrix(class PhSymMat & m);

    unsigned char AddImpulse(class Vector & imp);

    void EndCollision();

    void SetScale(float s);

    void GetTransform(class Matrix & mat) const;

    void UpdateForDynParam();

    void GetLocalSpeed(class Vector & v) const;

    void PushState(class PhBasicObjState * s);

    void FillState(class PhBasicObjState * s);

    class PhBasicObjState * GetState();

    signed short TestRestingCondition();

    unsigned char ResetRestingCondition();

    unsigned char UpdateRestingCondition(float in_dt);

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
// Range: 0x800E5908 -> 0x800E5A0C
// this: r1+0x8
PhParticle::PhParticle(float vol /* f30 */, float density /* f31 */) {
    // References
    // -> struct [anonymous] SimpleFilterAbs3D::__vtable;
    // -> struct [anonymous] PhParticle::__vtable;
}

// Range: 0x800E5A0C -> 0x800E5A78
// this: r30
PhParticle::~PhParticle() {
    // References
    // -> struct [anonymous] PhParticle::__vtable;
}

// Range: 0x800E5A78 -> 0x800E5C60
// this: r28
class PhBasicObj * PhParticle::Clone() {
    // Local variables
    class PhParticle * clone; // r31
    int t; // r30
    int i; // r29
}

// Range: 0x800E5C60 -> 0x800E5C80
// this: r3
void PhParticle::SetClone(class PhParticle * clone /* r4 */) {}

// Range: 0x800E5C80 -> 0x800E5C94
// this: r1+0x0
void PhParticle::InitState() {}

// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
// Range: 0x800E5C94 -> 0x800E5D24
// this: r30
void PhParticle::SetDynParam(class iPhDynObjParam * param /* r31 */) {}

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
// Range: 0x800E5D24 -> 0x800E5E0C
// this: r3
void PhParticle::SolveAppliedForces(float dt /* r1+0xC */) {
    // Local variables
    class Vector dr; // r1+0x10
}

// Range: 0x800E5E0C -> 0x800E5EA8
// this: r31
void PhParticle::Update(float dt /* f31 */) {}

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
// total size: 0x0
class PhPairEl {};
// total size: 0x14
class PhPairElList : public VoidPList {};
// total size: 0x0
class PhSTreeObj {};
// total size: 0x14
class PhSTreeObjList : public VoidPList {};
// total size: 0x0
class PhCollData {};
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
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x0
class PhCollSolver {};
// total size: 0x0
class PhCollDetect {};
// total size: 0x10
class PhWorldState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float fTotalTime; // offset 0x4, size 0x4
    int fNbSubObj; // offset 0x8, size 0x4
    class PhBasicObjState * * fSubObjState; // offset 0xC, size 0x4
};
// total size: 0x0
class PhCollision {};
// total size: 0x14
class PhCollisionList : public VoidPList {};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
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
// Range: 0x800E5EA8 -> 0x800E5F18
// this: r29
void PhParticle::SetTransform(const class Vector & pos /* r30 */, const class Matrix & mat /* r31 */) {}

// Range: 0x800E5F18 -> 0x800E5F3C
// this: r1+0x0
void PhParticle::GetMassMatrix(class PhSymMat & m /* r1+0x8 */) {}

// Range: 0x800E5F3C -> 0x800E5F74
// this: r1+0x0
unsigned char PhParticle::AddImpulse(class Vector & imp /* r1+0x8 */) {}

// Range: 0x800E5F74 -> 0x800E5FFC
// this: r31
void PhParticle::EndCollision() {}

// Range: 0x800E5FFC -> 0x800E605C
// this: r31
void PhParticle::SetScale(float s /* f31 */) {}

// Range: 0x800E605C -> 0x800E607C
// this: r3
void PhParticle::GetTransform(class Matrix & mat /* r4 */) const {}

// Range: 0x800E607C -> 0x800E60A4
// this: r1+0x0
void PhParticle::UpdateForDynParam() {}

// Range: 0x800E60A4 -> 0x800E60C0
// this: r1+0x0
void PhParticle::GetLocalSpeed(class Vector & v /* r1+0x8 */) const {}

// Range: 0x800E60C0 -> 0x800E6118
// this: r30
void PhParticle::PushState(class PhBasicObjState * s /* r31 */) {
    // Local variables
    class PhParticleState * state; // r1+0x8
}

// Range: 0x800E6118 -> 0x800E6170
// this: r30
void PhParticle::FillState(class PhBasicObjState * s /* r31 */) {
    // Local variables
    class PhParticleState * state; // r1+0x8
}

// total size: 0xC
struct {} PhParticleState::__vtable; // size: 0xC, address: 0x801156EC
// ERROR: Failed to emit tag 926FDC (GlobalSubroutine)
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
static int l_MaxTestRest$330; // size: 0x4, address: 0x8013B418
static signed char init$331; // size: 0x1, address: 0x8013B41C
static int l_TestRest$333; // size: 0x4, address: 0x8013B420
static signed char init$334; // size: 0x1, address: 0x8013B424
static float fact$340; // size: 0x4, address: 0x8013B428
static signed char init$341; // size: 0x1, address: 0x8013B42C
// Range: 0x800E61F8 -> 0x800E6330
// this: r31
signed short PhParticle::TestRestingCondition() {
    // Local variables
    signed short l_result; // r3
    class Vector l_estimate; // r1+0x10

    // References
    // -> static int l_TestRest$333;
    // -> static float fact$340;
    // -> static signed char init$341;
    // -> static int l_MaxTestRest$330;
    // -> static signed char init$334;
    // -> static signed char init$331;
}

// Range: 0x800E6330 -> 0x800E640C
// this: r30
unsigned char PhParticle::ResetRestingCondition() {
    // Local variables
    float l_Typicalvel; // f31
    float l_TypicalPeriod; // f30
    class Vector l_vMeas; // r1+0x38
    class Vector l_vPeriod; // r1+0x2C
}

static float scale$385; // size: 0x4, address: 0x8013B430
static signed char init$386; // size: 0x1, address: 0x8013B434
// Range: 0x800E640C -> 0x800E649C
// this: r3
unsigned char PhParticle::UpdateRestingCondition(float in_dt /* f1 */) {
    // Local variables
    class Vector l_v; // r1+0x18

    // References
    // -> static float scale$385;
    // -> static signed char init$386;
}

static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013A9F8
static // total size: 0x8
struct {} PhObjState::__RTTI; // size: 0x8, address: 0x8013AA00
static // total size: 0x8
struct {} PhParticleState::__RTTI; // size: 0x8, address: 0x8013AA08
// total size: 0x70
class PhParticleState : public PhObjState {
    // Members
protected:
    class Vector fV; // offset 0x5C, size 0xC
    signed short fControl; // offset 0x68, size 0x2
    float fControlTime; // offset 0x6C, size 0x4
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AA10
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AA20
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013AA28
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013AA38
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x8013AA40
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};



