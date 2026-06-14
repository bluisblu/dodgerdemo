/*
    Compile unit: D:\Pure3d\Simulation\physics\PhRgdBod.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E655C -> 0x800E80CC
*/
static float InvTWDissip; // size: 0x4, address: 0x8013B438
// total size: 0xC0
struct {} PhRgdBody::__vtable; // size: 0xC0, address: 0x801159AC
// total size: 0x10
struct {} PhTime::__vtable; // size: 0x10, address: 0x80115A9C
// total size: 0x1E8
class PhRgdBody : public PhParticle {
    // Functions
    PhRgdBody(const class Vector & cm, float vol, float density, const class PhSymMat & i0);

    PhRgdBody(float vol, float density);

    ~PhRgdBody();

    void InitState();

    class PhBasicObj * Clone();

    void SetClone(class PhRgdBody * clone);

    void CalcRcm();

    void GetCMOffset(class Vector & off) const;

    void SetScale(float s);

    void UpdateForDynParam();

    void AddTransform(const class Vector & dr);

    void AddTransform(const class Vector & dr, const class Matrix & mat);

    void SetTransform(const class Vector & pos, const class Matrix & mat);

    void InitBody();

    void BodyI();

    unsigned char AddImpulse(class Vector & pos, class Vector & imp, class PhSymMat & m, class PhBasicObj * obj);

    void EndCollision();

    unsigned char GetCache(class Vector & v, class Vector & w) const;

    float GetEnergy() const;

    void GetLocalSpeed(const class Vector & pos, class Vector & v) const;

    void SkewIinv(const class Vector & pos, class PhSymMat & m) const;

    void GetMassMatrix(class Vector & pos, class PhSymMat & m);

    void SetRotationSpeed(float vx, float vy, float vz);

    void AddAppliedLocalForces(class Vector & f, class Vector & pos);

    void AddAppliedTorques(class Vector & t);

    void SolveAppliedForces(float dt);

    void DrawSelf(int in_drawType);

    void PushState(class PhBasicObjState * s);

    void FillState(class PhBasicObjState * s);

    class PhBasicObjState * GetState();

    signed short TestRestingCondition();

    unsigned char ResetRestingCondition(unsigned char in_bAll);

    unsigned char UpdateRestingCondition(float in_dt);

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
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhTime : public iPhTime {};
// ERROR: Failed to emit tag 92B25A (GlobalSubroutine)
// Range: 0x800E675C -> 0x800E680C
// this: r1+0x8
PhRgdBody::PhRgdBody(float vol /* f1 */, float density /* f2 */) {
    // References
    // -> struct [anonymous] PhRgdBody::__vtable;
}

// Range: 0x800E680C -> 0x800E6894
// this: r30
PhRgdBody::~PhRgdBody() {
    // References
    // -> struct [anonymous] PhRgdBody::__vtable;
}

// Range: 0x800E6894 -> 0x800E68DC
// this: r3
void PhRgdBody::InitState() {}

// Range: 0x800E68DC -> 0x800E6B00
// this: r28
class PhBasicObj * PhRgdBody::Clone() {
    // Local variables
    class PhRgdBody * clone; // r31
    int t; // r30
    int i; // r29
}

// Range: 0x800E6C8C -> 0x800E6CAC
// this: r3
void PhRgdBody::SetClone(class PhRgdBody * clone /* r4 */) {}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800E6CAC -> 0x800E6D44
// this: r31
void PhRgdBody::CalcRcm() {
    // Local variables
    class Vector tmp; // r1+0xC
}

// Range: 0x800E6D44 -> 0x800E6D98
// this: r1+0x0
void PhRgdBody::GetCMOffset(class Vector & off /* r1+0x4 */) const {}

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
// Range: 0x800E6D98 -> 0x800E6E88
// this: r31
void PhRgdBody::SetScale(float s /* f30 */) {
    // Local variables
    float r; // f31
}

// Range: 0x800E6E88 -> 0x800E6ED8
// this: r31
void PhRgdBody::UpdateForDynParam() {
    // Local variables
    float oldMass; // f31
}

// Range: 0x800E6ED8 -> 0x800E6F44
// this: r1+0x0
void PhRgdBody::AddTransform(const class Vector & dr /* r1+0x4 */) {}

// Range: 0x800E6F44 -> 0x800E70BC
// this: r30
void PhRgdBody::AddTransform(const class Vector & dr /* r31 */, const class Matrix & mat /* r5 */) {
    // Local variables
    class Matrix m; // r1+0x20
}

// Range: 0x800E70BC -> 0x800E7214
// this: r31
void PhRgdBody::SetTransform(const class Vector & pos /* r1+0xC */, const class Matrix & mat /* r1+0x10 */) {}

// Range: 0x800E7214 -> 0x800E7254
// this: r31
void PhRgdBody::InitBody() {}

// Range: 0x800E7254 -> 0x800E72C4
// this: r31
void PhRgdBody::BodyI() {}

// Range: 0x800E72C4 -> 0x800E7354
// this: r27
unsigned char PhRgdBody::AddImpulse(class Vector & pos /* r28 */, class Vector & imp /* r29 */, class PhSymMat & m /* r30 */, class PhBasicObj * obj /* r31 */) {}

// Range: 0x800E7354 -> 0x800E741C
// this: r31
void PhRgdBody::EndCollision() {}

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
// Range: 0x800E741C -> 0x800E7478
// this: r6
unsigned char PhRgdBody::GetCache(class Vector & v /* r1+0xC */, class Vector & w /* r5 */) const {}

// Range: 0x800E7478 -> 0x800E74DC
// this: r1+0x0
float PhRgdBody::GetEnergy() const {
    // Local variables
    float e; // f2
}

// Range: 0x800E74DC -> 0x800E7580
// this: r30
void PhRgdBody::GetLocalSpeed(const class Vector & pos /* r1+0xC */, class Vector & v /* r31 */) const {
    // Local variables
    class Vector r; // r1+0x14
}

// Range: 0x800E7580 -> 0x800E7608
// this: r1+0x8
void PhRgdBody::SkewIinv(const class Vector & pos /* r1+0xC */, class PhSymMat & m /* r5 */) const {
    // Local variables
    class Vector r; // r1+0x14
}

// Range: 0x800E7608 -> 0x800E76F0
// this: r30
void PhRgdBody::GetMassMatrix(class Vector & pos /* r1+0xC */, class PhSymMat & m /* r31 */) {}

// Range: 0x800E76F0 -> 0x800E772C
// this: r6
void PhRgdBody::SetRotationSpeed(float vx /* r1+0xC */, float vy /* r1+0x10 */, float vz /* r1+0x14 */) {}

// Range: 0x800E772C -> 0x800E77EC
// this: r31
void PhRgdBody::AddAppliedLocalForces(class Vector & f /* r4 */, class Vector & pos /* r1+0x10 */) {
    // Local variables
    class Vector r; // r1+0x14
}

// Range: 0x800E77EC -> 0x800E7820
// this: r1+0x0
void PhRgdBody::AddAppliedTorques(class Vector & t /* r1+0x4 */) {}

// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// Range: 0x800E7820 -> 0x800E7BE8
// this: r31
void PhRgdBody::SolveAppliedForces(float dt /* r1+0xC */) {
    // Local variables
    float l_InvTWDis; // f3
    class Vector dr; // r1+0x64
    class Vector w; // r1+0x58
    class Quaternion q; // r1+0x48
    class Vector tmp2; // r1+0x30

    // References
    // -> static float InvTWDissip;
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x800E7BE8 -> 0x800E7DC0
// this: r30
void PhRgdBody::DrawSelf(int in_drawType /* r31 */) {
    // Local variables
    class Vector size; // r1+0x38
    struct pddiColour colour; // r1+0x34
    class Vector V; // r1+0x28
    class Vector W; // r1+0x1C
}

// Range: 0x800E7DC0 -> 0x800E7E20
// this: r30
void PhRgdBody::PushState(class PhBasicObjState * s /* r31 */) {
    // Local variables
    class PhRgdBodyState * state; // r1+0x8
}

// Range: 0x800E7E20 -> 0x800E7E70
// this: r30
void PhRgdBody::FillState(class PhBasicObjState * s /* r31 */) {
    // Local variables
    class PhRgdBodyState * state; // r1+0x8
}

// total size: 0xC
struct {} PhRgdBodyState::__vtable; // size: 0xC, address: 0x801158C0
// ERROR: Failed to emit tag 9373A6 (GlobalSubroutine)
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
static float fact1$577; // size: 0x4, address: 0x8013B43C
static signed char init$578; // size: 0x1, address: 0x8013B440
// Range: 0x800E7F04 -> 0x800E7FA0
// this: r31
signed short PhRgdBody::TestRestingCondition() {
    // Local variables
    float l_v; // r1+0x8
    float l_TypicalAngVel; // f31

    // References
    // -> static float fact1$577;
    // -> static signed char init$578;
}

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
// Range: 0x800E7FA0 -> 0x800E8054
// this: r31
unsigned char PhRgdBody::ResetRestingCondition(unsigned char in_bAll /* r4 */) {
    // Local variables
    float l_TypicalPeriod; // f30
    float l_wm; // f1
}

// Range: 0x800E8054 -> 0x800E80CC
// this: r31
unsigned char PhRgdBody::UpdateRestingCondition(float in_dt /* f31 */) {}

static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013AA48
static // total size: 0x8
struct {} PhObjState::__RTTI; // size: 0x8, address: 0x8013AA50
static // total size: 0x8
struct {} PhParticleState::__RTTI; // size: 0x8, address: 0x8013AA58
static // total size: 0x8
struct {} PhRgdBodyState::__RTTI; // size: 0x8, address: 0x8013AA60
// total size: 0x7C
class PhRgdBodyState : public PhParticleState {
    // Members
protected:
    class Vector fW; // offset 0x70, size 0xC
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AA68
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AA78
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013AA80
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013AA90
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x8013AA98
static // total size: 0x8
struct {} PhRgdBody::__RTTI; // size: 0x8, address: 0x8013AAA0
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013AAB8
static // total size: 0x8
struct {} iPhTime::__RTTI; // size: 0x8, address: 0x8013AAC0
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
struct {} PhTime::__RTTI; // size: 0x8, address: 0x8013AAD0



