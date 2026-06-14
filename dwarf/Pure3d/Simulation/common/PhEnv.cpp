/*
    Compile unit: D:\Pure3d\Simulation\common\PhEnv.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CCDC0 -> 0x800CD8D4
*/
unsigned char fUnitSet; // size: 0x1, address: 0x8013B3B0
float fM; // size: 0x4, address: 0x8013A638
float fL; // size: 0x4, address: 0x8013A63C
float fT; // size: 0x4, address: 0x8013A640
// total size: 0x4
class PhUnits {
    // Functions
    PhUnits();

    ~PhUnits();

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
class TList * fList; // size: 0x4, address: 0x8013B3B4
// total size: 0x10
struct {} PhUnits::__vtable; // size: 0x10, address: 0x80114520
// total size: 0xC
struct {} TList<PhUnits*>::__vtable; // size: 0xC, address: 0x8011455C
// Range: 0x800CCDC0 -> 0x800CCE44
// this: r31
PhUnits::PhUnits() {
    // References
    // -> class TList * fList;
    // -> struct [anonymous] TList<PhUnits*>::__vtable;
    // -> struct [anonymous] PhUnits::__vtable;
}

// Range: 0x800CCE44 -> 0x800CCEDC
// this: r30
PhUnits::~PhUnits() {
    // References
    // -> class TList * fList;
    // -> struct [anonymous] PhUnits::__vtable;
}

// total size: 0x4
class PhUnitsManager : protected PhUnits {};
// Range: 0x800CCF40 -> 0x800CCF44
void PhUnitsManager::Update() {}

// Range: 0x800CCF44 -> 0x800CCF5C
void PhUnitsManager::SetUnits(float l /* r1+0x4 */, float m /* r1+0x8 */, float t /* r1+0xC */) {
    // References
    // -> unsigned char fUnitSet;
    // -> float fT;
    // -> float fM;
    // -> float fL;
}

// total size: 0x20
struct {} iPhEnv::__vtable; // size: 0x20, address: 0x801144D4
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
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
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Functions
    iPhEnv();

    ~iPhEnv();

    void Update();

    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// Range: 0x800CCF5C -> 0x800CD024
// this: r1+0x8
iPhEnv::iPhEnv() {
    // References
    // -> struct [anonymous] iPhEnv::__vtable;
    // -> class TList * fList;
    // -> struct [anonymous] TList<PhUnits*>::__vtable;
    // -> struct [anonymous] PhUnits::__vtable;
}

// Range: 0x800CD024 -> 0x800CD0E4
// this: r30
iPhEnv::~iPhEnv() {
    // References
    // -> class TList * fList;
    // -> struct [anonymous] PhUnits::__vtable;
    // -> struct [anonymous] iPhEnv::__vtable;
}

// Range: 0x800CD0E4 -> 0x800CD190
// this: r31
void iPhEnv::Update() {
    // References
    // -> float fL;
    // -> float fT;
}

// total size: 0x28
class PhEnv : public iPhEnv {
    // Functions
    void SetGravity(float gx, float gy, float gz);
};
// Range: 0x800CD190 -> 0x800CD220
// this: r31
void PhEnv::SetGravity(float gx /* r1+0xC */, float gy /* r1+0x10 */, float gz /* r1+0x14 */) {
    // References
    // -> float fL;
    // -> float fT;
}

// total size: 0x20
struct {} iPhBasicObjParam::__vtable; // size: 0x20, address: 0x801144A0
// total size: 0x24
class iPhBasicObjParam : public AccessCounter, protected PhUnits {
    // Functions
    iPhBasicObjParam();

    ~iPhBasicObjParam();

    void Update();

    // Members
protected:
    float fRestCoeff; // offset 0xC, size 0x4
    float fTangRestCoeff; // offset 0x10, size 0x4
    float fFrictCoeff; // offset 0x14, size 0x4
    float fCollDist; // offset 0x18, size 0x4
    float fFrictCoeffCGS; // offset 0x1C, size 0x4
    float fCollDistCGS; // offset 0x20, size 0x4
};
// Range: 0x800CD220 -> 0x800CD2F0
// this: r1+0x8
iPhBasicObjParam::iPhBasicObjParam() {
    // References
    // -> struct [anonymous] iPhBasicObjParam::__vtable;
    // -> class TList * fList;
    // -> struct [anonymous] TList<PhUnits*>::__vtable;
    // -> struct [anonymous] PhUnits::__vtable;
}

// Range: 0x800CD2F0 -> 0x800CD3B0
// this: r30
iPhBasicObjParam::~iPhBasicObjParam() {
    // References
    // -> class TList * fList;
    // -> struct [anonymous] PhUnits::__vtable;
    // -> struct [anonymous] iPhBasicObjParam::__vtable;
}

// Range: 0x800CD3B0 -> 0x800CD3CC
// this: r1+0x0
void iPhBasicObjParam::Update() {
    // References
    // -> float fL;
}

// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {
    // Functions
    void SetFrictCoeff(float f);

    void SetRestCoeff(float f);

    void SetCollDist(float f);
};
// Range: 0x800CD3CC -> 0x800CD3DC
// this: r1+0x0
void PhBasicObjParam::SetFrictCoeff(float f /* r1+0x4 */) {}

// Range: 0x800CD3DC -> 0x800CD3E4
// this: r1+0x0
void PhBasicObjParam::SetRestCoeff(float f /* r1+0x4 */) {}

// Range: 0x800CD3E4 -> 0x800CD3FC
// this: r1+0x0
void PhBasicObjParam::SetCollDist(float f /* r1+0x4 */) {
    // References
    // -> float fL;
}

// total size: 0x20
struct {} iPhDynObjParam::__vtable; // size: 0x20, address: 0x80114458
// total size: 0x14
class iPhDynObjParam : public AccessCounter, protected PhUnits {
    // Functions
    iPhDynObjParam(float d);

    ~iPhDynObjParam();

    void Update();

    // Members
protected:
    float fDensity; // offset 0xC, size 0x4
    float fDensityCGS; // offset 0x10, size 0x4
};
// Range: 0x800CD3FC -> 0x800CD4C0
// this: r1+0x8
iPhDynObjParam::iPhDynObjParam(float d /* f31 */) {
    // References
    // -> struct [anonymous] iPhDynObjParam::__vtable;
    // -> class TList * fList;
    // -> struct [anonymous] TList<PhUnits*>::__vtable;
    // -> struct [anonymous] PhUnits::__vtable;
}

// Range: 0x800CD4C0 -> 0x800CD580
// this: r30
iPhDynObjParam::~iPhDynObjParam() {
    // References
    // -> class TList * fList;
    // -> struct [anonymous] PhUnits::__vtable;
    // -> struct [anonymous] iPhDynObjParam::__vtable;
}

// Range: 0x800CD580 -> 0x800CD594
// this: r1+0x0
void iPhDynObjParam::Update() {
    // References
    // -> float fM;
}

// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {
    // Functions
    void SetDensity(float f);
};
// Range: 0x800CD594 -> 0x800CD5C4
// this: r3
void PhDynObjParam::SetDensity(float f /* r1+0xC */) {}

// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Functions
    iPhSpeed(float r);

    void SetValue(float r);

    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 83198B (GlobalSubroutine)
// Range: 0x800CD66C -> 0x800CD694
// this: r1+0x0
void iPhSpeed::SetValue(float r /* r1+0x4 */) {
    // References
    // -> float fT;
    // -> float fL;
}

// total size: 0xC
class iPhLength : protected PhUnits {
    // Functions
    iPhLength(float r);

    void SetValue(float r);

    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 831DD5 (GlobalSubroutine)
// Range: 0x800CD73C -> 0x800CD754
// this: r1+0x0
void iPhLength::SetValue(float r /* r1+0x4 */) {
    // References
    // -> float fL;
}

// total size: 0x10
struct {} iPhTime::__vtable; // size: 0x10, address: 0x801143C4
// total size: 0xC
class iPhTime : protected PhUnits {
    // Functions
    iPhTime(float r);

    void SetValue(float r);

    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// Range: 0x800CD754 -> 0x800CD7FC
// this: r1+0x8
iPhTime::iPhTime(float r /* f31 */) {
    // References
    // -> struct [anonymous] iPhTime::__vtable;
    // -> class TList * fList;
    // -> struct [anonymous] TList<PhUnits*>::__vtable;
    // -> struct [anonymous] PhUnits::__vtable;
}

// Range: 0x800CD7FC -> 0x800CD814
// this: r1+0x0
void iPhTime::SetValue(float r /* r1+0x4 */) {
    // References
    // -> float fT;
}

static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013A654
static // total size: 0x8
struct {} iPhTime::__RTTI; // size: 0x8, address: 0x8013A65C
static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013A664
static // total size: 0x8
struct {} iPhDynObjParam::__RTTI; // size: 0x8, address: 0x8013A66C
static // total size: 0x8
struct {} iPhBasicObjParam::__RTTI; // size: 0x8, address: 0x8013A674
static // total size: 0x8
struct {} iPhEnv::__RTTI; // size: 0x8, address: 0x8013A684
static // total size: 0x8
struct {} PhUnitsManager::__RTTI; // size: 0x8, address: 0x8013A68C
// total size: 0x10
struct {} PhUnitsManager::__vtable; // size: 0x10, address: 0x80114510
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A694
static // total size: 0x8
struct {} TList<PhUnits*>::__RTTI; // size: 0x8, address: 0x8013A69C



