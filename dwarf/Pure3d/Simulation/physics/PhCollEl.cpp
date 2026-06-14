/*
    Compile unit: D:\Pure3d\Simulation\physics\PhCollEl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D98C0 -> 0x800DCCAC
*/
// total size: 0x34
struct {} PhCollEl::__vtable; // size: 0x34, address: 0x80114840
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
    // Functions
    PhCollEl();

    ~PhCollEl();

    void SetAIRef(int ref);

    class PhCollEl * SelfElem();

    class PhCollEl * Clone();

    void SetLevel(int level);

    void UpdateAll();

    void PreUpdate();

    void SetPos();

    void UpdatePos();

    void UpdateRot();

    void UpdateScale(float a);

    void AddSubElem(class PhCollEl * el);

    unsigned char RemoveSubElem(class PhCollEl * el);

    void SetAllObj(class PhBasicObjList & lo);

    void SetObj(class PhBasicObj * obj, unsigned char computeDP);

    void SetObjRef(int ref);

    void SetDP();

    unsigned char IsBBIn(class PhCollEl * el, float precision);

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
// Range: 0x800D98C0 -> 0x800D9918
// this: r3
PhCollEl::PhCollEl() {
    // References
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800D9918 -> 0x800D9A1C
// this: r30
PhCollEl::~PhCollEl() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800D9A1C -> 0x800D9ACC
// this: r25
void PhCollEl::SetAIRef(int ref /* r26 */) {
    // Local variables
    int i; // r27
}

// Range: 0x800D9ACC -> 0x800D9B28
// this: r3
class PhCollEl * PhCollEl::SelfElem() {
    // Local variables
    class PhCollEl * ret; // r8
    int i; // r1+0x0
}

// total size: 0x34
struct {} PhSphere::__vtable; // size: 0x34, address: 0x801147D8
// total size: 0x34
struct {} PhCyl::__vtable; // size: 0x34, address: 0x8011478C
// total size: 0x34
struct {} PhOBBox::__vtable; // size: 0x34, address: 0x8011474C
// ERROR: Failed to emit tag 86D36B (GlobalSubroutine)
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800DA048 -> 0x800DA100
// this: r26
void PhCollEl::SetLevel(int level /* r1+0xC */) {
    // Local variables
    int i; // r27
}

// Range: 0x800DA100 -> 0x800DA134
// this: r31
void PhCollEl::UpdateAll() {}

// Range: 0x800DA134 -> 0x800DA174
// this: r31
void PhCollEl::PreUpdate() {}

// Range: 0x800DA174 -> 0x800DA25C
// this: r31
void PhCollEl::SetPos() {
    // Local variables
    class Vector dp; // r1+0x20
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
// Range: 0x800DA25C -> 0x800DA354
// this: r31
void PhCollEl::UpdatePos() {
    // Local variables
    int i; // r26
}

// Range: 0x800DA354 -> 0x800DA434
// this: r26
void PhCollEl::UpdateRot() {
    // Local variables
    int i; // r27
}

// Range: 0x800DA434 -> 0x800DA584
// this: r29
void PhCollEl::UpdateScale(float a /* f31 */) {
    // Local variables
    int i; // r30
}

// ERROR: Failed to emit tag 871B12 (GlobalSubroutine)
// Range: 0x800DA6A8 -> 0x800DA7C8
// this: r27
unsigned char PhCollEl::RemoveSubElem(class PhCollEl * el /* r31 */) {
    // Local variables
    unsigned char ret; // r30
    int i; // r28
}

// total size: 0x14
class PhBasicObjList : public VoidPList {};
// Range: 0x800DA7C8 -> 0x800DA91C
// this: r28
void PhCollEl::SetAllObj(class PhBasicObjList & lo /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800DA91C -> 0x800DAA1C
// this: r28
void PhCollEl::SetObj(class PhBasicObj * obj /* r30 */, unsigned char computeDP /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800DAA1C -> 0x800DAACC
// this: r25
void PhCollEl::SetObjRef(int ref /* r26 */) {
    // Local variables
    int i; // r27
}

// Range: 0x800DAACC -> 0x800DABA8
// this: r31
void PhCollEl::SetDP() {}

// Range: 0x800DABA8 -> 0x800DAD3C
// this: r29
unsigned char PhCollEl::IsBBIn(class PhCollEl * el /* r30 */, float precision /* r1+0x10 */) {}

// total size: 0x44
class PhSphere : public PhCollEl {
    // Functions
    PhSphere(class Vector & pos, float rad);

    ~PhSphere();

    void UpdateScale(float a);

    float VolumeSelf() const;

    void InertiaSelf(class PhSymMat & m) const;

    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// Range: 0x800DAD3C -> 0x800DADDC
// this: r3
PhSphere::PhSphere(class Vector & pos /* r1+0x4 */, float rad /* f1 */) {
    // References
    // -> struct [anonymous] PhSphere::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DADDC -> 0x800DAE40
// this: r30
PhSphere::~PhSphere() {
    // References
    // -> struct [anonymous] PhSphere::__vtable;
}

// Range: 0x800DAE40 -> 0x800DAFB4
// this: r29
void PhSphere::UpdateScale(float a /* f31 */) {}

// total size: 0x6C
class PhCyl : public PhCollEl {
    // Functions
    PhCyl(class Vector & centre, const class Vector & o, float len, float r, unsigned char flatend);

    ~PhCyl();

    void CheatFlatEnd();

    void SetRot();

    void UpdateScale(float a);

    void ApproxBBox();

    void UpdateBBox();

    float VolumeSelf() const;

    void InertiaSelf(class PhSymMat & m) const;

    // Members
public:
    class Vector fO; // offset 0x40, size 0xC
    float fL; // offset 0x4C, size 0x4
    float fR; // offset 0x50, size 0x4
    unsigned char fFlatEnd; // offset 0x54, size 0x1
protected:
    class Vector fOi; // offset 0x58, size 0xC
    float fLi; // offset 0x64, size 0x4
    float fRi; // offset 0x68, size 0x4
};
// Range: 0x800DAFB4 -> 0x800DB110
// this: r1+0x8
PhCyl::PhCyl(class Vector & centre /* r30 */, const class Vector & o /* r1+0x10 */, float len /* r1+0x14 */, float r /* r1+0x18 */, unsigned char flatend /* r1+0x1C */) {
    // References
    // -> struct [anonymous] PhCyl::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DB110 -> 0x800DB174
// this: r30
PhCyl::~PhCyl() {
    // References
    // -> struct [anonymous] PhCyl::__vtable;
}

// Range: 0x800DB174 -> 0x800DB1EC
// this: r31
void PhCyl::CheatFlatEnd() {}

// Range: 0x800DB1EC -> 0x800DB23C
// this: r31
void PhCyl::SetRot() {}

// Range: 0x800DB23C -> 0x800DB3E0
// this: r29
void PhCyl::UpdateScale(float a /* f31 */) {}

// Range: 0x800DB3E0 -> 0x800DB404
// this: r1+0x0
void PhCyl::ApproxBBox() {}

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
// Range: 0x800DB404 -> 0x800DB694
// this: r31
void PhCyl::UpdateBBox() {
    // Local variables
    class Matrix mat; // r1+0xB8
}

// total size: 0xA0
class PhOBBox : public PhCollEl {
    // Functions
    PhOBBox(class Vector & center, class Vector & o0, class Vector & o1, class Vector & o2, float l0, float l1, float l2);

    ~PhOBBox();

    void SetRot();

    void UpdateScale(float a);

    void ApproxBBox();

    void UpdateBBox();

    float Projection(const class Vector & axe);

    float Projection(const class Vector & axe, int i);

    void Corner(class Vector & n, int i);

    void Side(class Vector & n, int i, int j);

    float VolumeSelf() const;

    void InertiaSelf(class PhSymMat & m) const;

    // Members
public:
    class Vector fO[3]; // offset 0x40, size 0x24
    float fL[3]; // offset 0x64, size 0xC
protected:
    class Vector fOi[3]; // offset 0x70, size 0x24
    float fLi[3]; // offset 0x94, size 0xC
};
// Range: 0x800DB694 -> 0x800DB874
// this: r1+0x8
PhOBBox::PhOBBox(class Vector & center /* r26 */, class Vector & o0 /* r27 */, class Vector & o1 /* r28 */, class Vector & o2 /* r29 */, float l0 /* f29 */, float l1 /* f30 */, float l2 /* f31 */) {
    // References
    // -> struct [anonymous] PhOBBox::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DB874 -> 0x800DB8D8
// this: r30
PhOBBox::~PhOBBox() {
    // References
    // -> struct [anonymous] PhOBBox::__vtable;
}

// Range: 0x800DB8D8 -> 0x800DB968
// this: r31
void PhOBBox::SetRot() {}

// Range: 0x800DB968 -> 0x800DBB04
// this: r29
void PhOBBox::UpdateScale(float a /* f31 */) {}

// Range: 0x800DBB04 -> 0x800DBB28
// this: r1+0x0
void PhOBBox::ApproxBBox() {}

// Range: 0x800DBB28 -> 0x800DBC80
// this: r1+0x8
void PhOBBox::UpdateBBox() {}

// Range: 0x800DBC80 -> 0x800DBD6C
// this: r1+0x8
float PhOBBox::Projection(const class Vector & axe /* r1+0xC */) {}

// Range: 0x800DBD6C -> 0x800DBE78
// this: r1+0x8
float PhOBBox::Projection(const class Vector & axe /* r1+0xC */, int i /* r1+0x10 */) {
    // Local variables
    float sum; // f1
}

// Range: 0x800DBE78 -> 0x800DBF3C
// this: r1+0x0
void PhOBBox::Corner(class Vector & n /* r1+0x4 */, int i /* r1+0x8 */) {}

// Range: 0x800DBF3C -> 0x800DBFFC
// this: r1+0x0
void PhOBBox::Side(class Vector & n /* r1+0x4 */, int i /* r1+0x8 */, int j /* r1+0xC */) {}

// total size: 0x34
struct {} PhWall::__vtable; // size: 0x34, address: 0x8011470C
// total size: 0x58
class PhWall : public PhCollEl {
    // Functions
    PhWall(const class Vector & p, const class Vector & n);

    PhWall();

    ~PhWall();

    void ApproxBBox();

    void UpdateBBox();

    void SetRot();

    // Members
public:
    class Vector fN; // offset 0x40, size 0xC
protected:
    class Vector fNi; // offset 0x4C, size 0xC
};
// Range: 0x800DBFFC -> 0x800DC0E4
// this: r1+0x8
PhWall::PhWall(const class Vector & p /* r1+0xC */, const class Vector & n /* r1+0x10 */) {
    // References
    // -> struct [anonymous] PhWall::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DC0E4 -> 0x800DC180
// this: r3
PhWall::PhWall() {
    // References
    // -> struct [anonymous] PhWall::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DC180 -> 0x800DC1E4
// this: r30
PhWall::~PhWall() {
    // References
    // -> struct [anonymous] PhWall::__vtable;
}

// Range: 0x800DC1E4 -> 0x800DC200
// this: r1+0x0
void PhWall::ApproxBBox() {}

// Range: 0x800DC200 -> 0x800DC2C8
// this: r1+0x8
void PhWall::UpdateBBox() {}

// Range: 0x800DC2C8 -> 0x800DC318
// this: r31
void PhWall::SetRot() {}

// total size: 0x34
struct {} PhBBox::__vtable; // size: 0x34, address: 0x801146CC
// total size: 0x40
class PhBBox : public PhCollEl {
    // Functions
    PhBBox();

    ~PhBBox();

    void ApproxBBox();

    void UpdateBBox();
};
// Range: 0x800DC318 -> 0x800DC398
// this: r3
PhBBox::PhBBox() {
    // References
    // -> struct [anonymous] PhBBox::__vtable;
    // -> struct [anonymous] PhCollEl::__vtable;
}

// Range: 0x800DC398 -> 0x800DC3FC
// this: r30
PhBBox::~PhBBox() {
    // References
    // -> struct [anonymous] PhBBox::__vtable;
}

// Range: 0x800DC3FC -> 0x800DC618
// this: r27
void PhBBox::ApproxBBox() {
    // Local variables
    class Vector vmax; // r1+0x40
    class Vector vmin; // r1+0x34
    class PhCollEl * el; // r29
    int i; // r28
}

// Range: 0x800DC618 -> 0x800DC838
// this: r28
void PhBBox::UpdateBBox() {
    // Local variables
    class Vector vmax; // r1+0x64
    class Vector vmin; // r1+0x58
    class PhCollEl * el; // r30
    int i; // r29
}

// Range: 0x800DC838 -> 0x800DC914
void PhBBox::AddBox(class Vector & vmax /* r1+0x4 */, class Vector & vmin /* r1+0x8 */, class PhCollEl * el /* r1+0xC */) {}

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
// Range: 0x800DC914 -> 0x800DC92C
// this: r1+0x0
float PhSphere::VolumeSelf() const {}

// Range: 0x800DC92C -> 0x800DC97C
// this: r1+0x0
float PhCyl::VolumeSelf() const {}

// Range: 0x800DC97C -> 0x800DC99C
// this: r1+0x0
float PhOBBox::VolumeSelf() const {}

// Range: 0x800DC99C -> 0x800DC9F4
// this: r30
void PhSphere::InertiaSelf(class PhSymMat & m /* r31 */) const {}

// Range: 0x800DC9F4 -> 0x800DCBBC
// this: r30
void PhCyl::InertiaSelf(class PhSymMat & m /* r31 */) const {
    // Local variables
    float h; // r1+0x8
    class Vector x; // r1+0x84
    class Vector O2; // r1+0x78
    class Vector O3; // r1+0x6C
    class Matrix r; // r1+0x2C
}

// Range: 0x800DCBBC -> 0x800DCCAC
// this: r30
void PhOBBox::InertiaSelf(class PhSymMat & m /* r31 */) const {
    // Local variables
    class Matrix r; // r1+0x40
}

static // total size: 0x8
struct {} PhCollEl::__RTTI; // size: 0x8, address: 0x8013A710
static // total size: 0x8
struct {} PhBBox::__RTTI; // size: 0x8, address: 0x8013A718
static // total size: 0x8
struct {} PhWall::__RTTI; // size: 0x8, address: 0x8013A728
static // total size: 0x8
struct {} PhOBBox::__RTTI; // size: 0x8, address: 0x8013A738
static // total size: 0x8
struct {} PhCyl::__RTTI; // size: 0x8, address: 0x8013A748
static // total size: 0x8
struct {} PhSphere::__RTTI; // size: 0x8, address: 0x8013A750
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A758



