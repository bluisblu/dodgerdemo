/*
    Compile unit: D:\Pure3d\Simulation\physics\PhObj.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E46A0 -> 0x800E5908
*/
float Small_Speed; // size: 0x4, address: 0x8013B408
int sPhBasicObjRefIndex; // size: 0x4, address: 0x8013B40C
// total size: 0x94
struct {} PhBasicObj::__vtable; // size: 0x94, address: 0x801155C4
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
class PhParticle {};
// total size: 0x0
class PhCollision {};
// total size: 0x14
class PhCollisionList : public VoidPList {};
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
    // Functions
    PhBasicObj();

    ~PhBasicObj();

    class PhBasicObj * Clone();

    void PreUpdateCollEl();

    void UpdateCollEl();

    void SetClone(class PhBasicObj * clone);

    void SetBasicParam(class iPhBasicObjParam * param);

    void SetCollEl(class PhCollEl * collEl);

    void SetWorld(class PhWorld * w);

    class PhBasicObjState * GetState();

    void DrawSelf(int i);

    void ComputeTypicalValues();

    unsigned char DoesNeedWakeUp(float in_dt);

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
class iPhLength : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 90C9A7 (GlobalSubroutine)
// Range: 0x800E47C8 -> 0x800E4860
// this: r30
PhBasicObj::~PhBasicObj() {
    // References
    // -> struct [anonymous] PhBasicObj::__vtable;
}

// Range: 0x800E4860 -> 0x800E49C0
// this: r31
class PhBasicObj * PhBasicObj::Clone() {
    // Local variables
    class PhBasicObj * clone; // r30
    int t; // r6
    int i; // r7
}

// Range: 0x800E49C0 -> 0x800E4A40
// this: r31
void PhBasicObj::PreUpdateCollEl() {}

// Range: 0x800E4A40 -> 0x800E4A98
// this: r31
void PhBasicObj::UpdateCollEl() {}

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
// Range: 0x800E4A98 -> 0x800E4B98
// this: r30
void PhBasicObj::SetClone(class PhBasicObj * clone /* r31 */) {}

// Range: 0x800E4B98 -> 0x800E4C18
// this: r30
void PhBasicObj::SetBasicParam(class iPhBasicObjParam * param /* r31 */) {}

// Range: 0x800E4C18 -> 0x800E4C6C
// this: r31
void PhBasicObj::SetCollEl(class PhCollEl * collEl /* r1+0xC */) {}

// Range: 0x800E4C6C -> 0x800E4C90
// this: r3
void PhBasicObj::SetWorld(class PhWorld * w /* r1+0xC */) {}

static signed char init$294; // size: 0x1, address: 0x8013B410
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
static class Matrix m$293; // size: 0x40, address: 0x801375B0
// Range: 0x800E4C90 -> 0x800E4CDC
class Matrix & PhBasicObj::GetRotMat() {
    // References
    // -> static class Matrix m$293;
    // -> static signed char init$294;
}

// ERROR: Failed to emit tag 9122EF (GlobalSubroutine)
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800E4D28 -> 0x800E4DB0
// this: r3
void PhBasicObj::DrawSelf(int i /* r1+0xC */) {
    // Local variables
    class Vector size; // r1+0x14
}

// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
// ERROR: Failed to emit tag 913B3E (GlobalSubroutine)
// total size: 0x9C
struct {} PhObj::__vtable; // size: 0x9C, address: 0x801154D0
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Functions
    PhObj();

    ~PhObj();

    class PhBasicObj * Clone();

    void SetClone(class PhObj * clone);

    void SetScale(float s);

    void SetTransform(const class Vector & pos, const class Matrix & mat);

    void AddTransform(const class Vector & dr);

    void AddTransform(const class Vector & dr, const class Matrix & mat);

    void GetTransform(class Matrix & mat) const;

    void PushState(class PhBasicObjState * s);

    void FillState(class PhBasicObjState * s);

    class PhBasicObjState * GetState();

    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
// Range: 0x800E4F48 -> 0x800E4FB4
// this: r1+0x8
PhObj::PhObj() {
    // References
    // -> struct [anonymous] PhObj::__vtable;
}

// Range: 0x800E4FB4 -> 0x800E505C
// this: r30
PhObj::~PhObj() {
    // References
    // -> struct [anonymous] PhBasicObj::__vtable;
    // -> struct [anonymous] PhObj::__vtable;
}

// Range: 0x800E505C -> 0x800E51BC
// this: r29
class PhBasicObj * PhObj::Clone() {
    // Local variables
    class PhObj * clone; // r28
    int t; // r31
    int i; // r30

    // References
    // -> struct [anonymous] PhObj::__vtable;
}

// Range: 0x800E51BC -> 0x800E5250
// this: r30
void PhObj::SetClone(class PhObj * clone /* r31 */) {}

// Range: 0x800E5250 -> 0x800E52A0
// this: r31
void PhObj::SetScale(float s /* f1 */) {}

// Range: 0x800E52A0 -> 0x800E5370
// this: r31
void PhObj::SetTransform(const class Vector & pos /* r1+0xC */, const class Matrix & mat /* r1+0x10 */) {}

// Range: 0x800E5370 -> 0x800E53AC
// this: r1+0x0
void PhObj::AddTransform(const class Vector & dr /* r1+0x4 */) {}

// Range: 0x800E53AC -> 0x800E562C
// this: r31
void PhObj::AddTransform(const class Vector & dr /* r1+0xC */, const class Matrix & mat /* r1+0x10 */) {
    // Local variables
    class Matrix m; // r1+0x94
}

// Range: 0x800E562C -> 0x800E5678
// this: r30
void PhObj::GetTransform(class Matrix & mat /* r31 */) const {}

// Range: 0x800E5678 -> 0x800E576C
// this: r30
void PhObj::PushState(class PhBasicObjState * s /* r31 */) {
    // Local variables
    class PhObjState * state; // r1+0x8
}

// Range: 0x800E576C -> 0x800E5810
// this: r1+0x0
void PhObj::FillState(class PhBasicObjState * s /* r1+0x4 */) {
    // Local variables
    class PhObjState * state; // r1+0x0
}

// ERROR: Failed to emit tag 914CBA (GlobalSubroutine)
// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
};
static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013A9A8
// total size: 0x5C
class PhObjState : public PhBasicObjState {
    // Members
protected:
    class Vector fR; // offset 0xC, size 0xC
    class Matrix fRotMat; // offset 0x18, size 0x40
    float fScaleFact; // offset 0x58, size 0x4
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A9B8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A9C8
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013A9D0
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013A9D8
// Range: 0x800E588C -> 0x800E5908
// this: r31
unsigned char PhBasicObj::DoesNeedWakeUp(float in_dt /* r1+0xC */) {}

static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013A9E8
static // total size: 0x8
struct {} iPhSpeed::__RTTI; // size: 0x8, address: 0x8013A9F0
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



