/*
    Compile unit: D:\Pure3d\Simulation\physics\PhMovObj.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E3CCC -> 0x800E458C
*/
// total size: 0xA4
struct {} PhMovObj::__vtable; // size: 0xA4, address: 0x801153A4
// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xD8
class PhMovObj : public PhObj {
    // Functions
    PhMovObj();

    PhMovObj(class PhObj * obj);

    ~PhMovObj();

    class PhBasicObj * Clone();

    void SetClone(class PhMovObj * clone);

    void AddTransform(const class Vector & dr);

    void AddTransform(const class Vector & dr, const class Matrix & mat);

    void AddTransform(const class Vector & dr, const class Matrix & mat, float dt);

    void SetTransform(const class Vector & pos, const class Matrix & mat);

    void SetTransform(const class Vector & pos, const class Matrix & mat, float dt);

    void GetLocalSpeed(const class Vector & pos, class Vector & v) const;

    void PushState(class PhBasicObjState * s);

    void FillState(class PhBasicObjState * s);

    class PhBasicObjState * GetState();

    // Static members
    static float fMaxSpeed; // size: 0x4

    // Members
protected:
    float fDt; // offset 0xB8, size 0x4
    class Vector fV; // offset 0xBC, size 0xC
    class Vector fW; // offset 0xC8, size 0xC
    unsigned char fFixOrientation; // offset 0xD4, size 0x1
};
// Range: 0x800E3CCC -> 0x800E3D38
// this: r31
PhMovObj::PhMovObj() {
    // References
    // -> struct [anonymous] PhMovObj::__vtable;
}

// Range: 0x800E3D38 -> 0x800E3EC4
// this: r1+0x8
PhMovObj::PhMovObj(class PhObj * obj /* r29 */) {
    // References
    // -> struct [anonymous] PhMovObj::__vtable;
}

// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
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
// Range: 0x800E3EC4 -> 0x800E3F28
// this: r30
PhMovObj::~PhMovObj() {
    // References
    // -> struct [anonymous] PhMovObj::__vtable;
}

// Range: 0x800E3F28 -> 0x800E40C8
// this: r29
class PhBasicObj * PhMovObj::Clone() {
    // Local variables
    class PhMovObj * clone; // r28
    int t; // r31
    int i; // r30

    // References
    // -> struct [anonymous] PhMovObj::__vtable;
}

// Range: 0x800E40C8 -> 0x800E40E8
// this: r3
void PhMovObj::SetClone(class PhMovObj * clone /* r4 */) {}

// Range: 0x800E40E8 -> 0x800E4110
// this: r3
void PhMovObj::AddTransform(const class Vector & dr /* r4 */) {}

// Range: 0x800E4110 -> 0x800E4138
// this: r3
void PhMovObj::AddTransform(const class Vector & dr /* r4 */, const class Matrix & mat /* r5 */) {}

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
// Range: 0x800E4138 -> 0x800E425C
// this: r31
void PhMovObj::AddTransform(const class Vector & dr /* r4 */, const class Matrix & mat /* r5 */, float dt /* f31 */) {
    // Local variables
    class Matrix m; // r1+0x18
}

// Range: 0x800E425C -> 0x800E4284
// this: r3
void PhMovObj::SetTransform(const class Vector & pos /* r4 */, const class Matrix & mat /* r5 */) {}

// Range: 0x800E4284 -> 0x800E43D8
// this: r31
void PhMovObj::SetTransform(const class Vector & pos /* r4 */, const class Matrix & mat /* r5 */, float dt /* f31 */) {
    // Local variables
    class Matrix m; // r1+0x18
}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800E43D8 -> 0x800E44C4
// this: r30
void PhMovObj::GetLocalSpeed(const class Vector & pos /* r1+0xC */, class Vector & v /* r31 */) const {
    // Local variables
    class Vector r; // r1+0x14
}

// Range: 0x800E44C4 -> 0x800E44E4
// this: r3
void PhMovObj::PushState(class PhBasicObjState * s /* r4 */) {}

// Range: 0x800E44E4 -> 0x800E4504
// this: r3
void PhMovObj::FillState(class PhBasicObjState * s /* r4 */) {}

// total size: 0xC
struct {} PhBasicObjState::__vtable; // size: 0xC, address: 0x80115314
// total size: 0xC
struct {} PhObjState::__vtable; // size: 0xC, address: 0x80115308
// total size: 0xC
struct {} PhMovObjState::__vtable; // size: 0xC, address: 0x801152FC
// Range: 0x800E4504 -> 0x800E458C
// this: r31
class PhBasicObjState * PhMovObj::GetState() {
    // Local variables
    class PhMovObjState * state; // r4

    // References
    // -> struct [anonymous] PhMovObjState::__vtable;
    // -> struct [anonymous] PhObjState::__vtable;
    // -> struct [anonymous] PhBasicObjState::__vtable;
}

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
static // total size: 0x8
struct {} PhBasicObjState::__RTTI; // size: 0x8, address: 0x8013A958
static // total size: 0x8
struct {} PhObjState::__RTTI; // size: 0x8, address: 0x8013A960
static // total size: 0x8
struct {} PhMovObjState::__RTTI; // size: 0x8, address: 0x8013A968
// total size: 0xAC
class PhMovObjState : public PhObjState {
    // Members
protected:
    float fDt; // offset 0x5C, size 0x4
    class Vector fDR; // offset 0x60, size 0xC
    class Matrix fDRotMat; // offset 0x6C, size 0x40
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A970
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A980
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013A988
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013A998
static // total size: 0x8
struct {} PhMovObj::__RTTI; // size: 0x8, address: 0x8013A9A0



