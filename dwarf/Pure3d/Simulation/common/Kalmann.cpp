/*
    Compile unit: D:\Pure3d\Simulation\common\Kalmann.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CC738 -> 0x800CCDA8
*/
// total size: 0x14
struct {} Filter1D::__vtable; // size: 0x14, address: 0x801143A4
// total size: 0x14
struct {} SimpleFilter1D::__vtable; // size: 0x14, address: 0x80114390
// total size: 0x4
class Filter1D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
class SimpleFilter1D : public Filter1D {
    // Functions
    SimpleFilter1D();

    unsigned char Init(float frstGuess, float measUncert);

    float Estimate(float newMeasurement, float in_dt);

    // Members
protected:
    float fDelta; // offset 0x4, size 0x4
    float fDeltaScl; // offset 0x8, size 0x4
    float fPrevMeasurement; // offset 0xC, size 0x4
    float fDt; // offset 0x10, size 0x4
};
// Range: 0x800CC738 -> 0x800CC764
// this: r3
SimpleFilter1D::SimpleFilter1D() {
    // References
    // -> struct [anonymous] SimpleFilter1D::__vtable;
    // -> struct [anonymous] Filter1D::__vtable;
}

// Range: 0x800CC764 -> 0x800CC794
// this: r1+0x0
unsigned char SimpleFilter1D::Init(float frstGuess /* r1+0x4 */, float measUncert /* r1+0x8 */) {}

// Range: 0x800CC794 -> 0x800CC808
// this: r1+0x0
float SimpleFilter1D::Estimate(float newMeasurement /* r1+0x4 */, float in_dt /* r1+0x8 */) {}

// total size: 0x14
struct {} Filter3D::__vtable; // size: 0x14, address: 0x80114360
// total size: 0x14
struct {} SimpleFilter3D::__vtable; // size: 0x14, address: 0x8011434C
// total size: 0x4
class Filter3D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x2C
class SimpleFilter3D : public Filter3D {
    // Functions
    SimpleFilter3D();

    unsigned char Init(const class Vector * frstGuess, const class Vector * measUncert);

    void Estimate(const class Vector * newMeasurement, float in_dt);

    void GetEstimate(class Vector * out_values) const;

    // Members
protected:
    class Vector fDelta; // offset 0x4, size 0xC
    class Vector fDeltaScl; // offset 0x10, size 0xC
    class Vector fPrevMeasurement; // offset 0x1C, size 0xC
    float fDt; // offset 0x28, size 0x4
};
// Range: 0x800CC808 -> 0x800CC848
// this: r3
SimpleFilter3D::SimpleFilter3D() {
    // References
    // -> struct [anonymous] SimpleFilter3D::__vtable;
    // -> struct [anonymous] Filter3D::__vtable;
}

// Range: 0x800CC848 -> 0x800CC8C0
// this: r1+0x0
unsigned char SimpleFilter3D::Init(const class Vector * frstGuess /* r1+0x4 */, const class Vector * measUncert /* r1+0x8 */) {}

// Range: 0x800CC8C0 -> 0x800CC9D4
// this: r1+0x0
void SimpleFilter3D::Estimate(const class Vector * newMeasurement /* r1+0x4 */, float in_dt /* r1+0x8 */) {}

// Range: 0x800CC9D4 -> 0x800CC9F0
// this: r1+0x0
void SimpleFilter3D::GetEstimate(class Vector * out_values /* r1+0x4 */) const {}

// total size: 0x2C
class SimpleFilterAbs3D : public SimpleFilter3D {
    // Functions
    unsigned char Init(const class Vector * frstGuess, const class Vector * measUncert);

    void Estimate(const class Vector * newMeasurement, float in_dt);
};
// Range: 0x800CC9F0 -> 0x800CCAD8
// this: r1+0x8
unsigned char SimpleFilterAbs3D::Init(const class Vector * frstGuess /* r1+0xC */, const class Vector * measUncert /* r1+0x10 */) {}

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
// Range: 0x800CCAD8 -> 0x800CCB68
// this: r3
void SimpleFilterAbs3D::Estimate(const class Vector * newMeasurement /* r1+0xC */, float in_dt /* f1 */) {
    // Local variables
    class Vector l_v; // r1+0x44
}

// total size: 0x14
struct {} Kalmann1D::__vtable; // size: 0x14, address: 0x801142D4
// total size: 0x1C
class Kalmann1D : public Filter1D {
    // Functions
    unsigned char Init(float frstGuess, float measUncert, float valueUncert);

    float Estimate(float newMeasurement, float dt);

    void UpdateP();

    // Members
protected:
    float fSpeed; // offset 0x4, size 0x4
private:
    float fK; // offset 0x8, size 0x4
    float fP; // offset 0xC, size 0x4
    float fR; // offset 0x10, size 0x4
    float fQ; // offset 0x14, size 0x4
    float fEstimate; // offset 0x18, size 0x4
};
// Range: 0x800CCB68 -> 0x800CCBA8
// this: r1+0x0
unsigned char Kalmann1D::Init(float frstGuess /* r1+0x4 */, float measUncert /* r1+0x8 */, float valueUncert /* r1+0xC */) {}

// Range: 0x800CCBA8 -> 0x800CCC28
// this: r31
float Kalmann1D::Estimate(float newMeasurement /* f30 */, float dt /* f31 */) {}

// Range: 0x800CCC28 -> 0x800CCC4C
// this: r1+0x0
void Kalmann1D::UpdateP() {}

// total size: 0x14
struct {} DoubleKalmann1D::__vtable; // size: 0x14, address: 0x801142C0
// total size: 0x3C
class DoubleKalmann1D : public Kalmann1D {
    // Functions
    unsigned char Init(float frstGuess, float measUncert, float valueUncert);

    float Estimate(float newMeasurement, float dt);

    // Members
    class Kalmann1D fSpeedFilter; // offset 0x1C, size 0x1C
    float fPrevMeasurement; // offset 0x38, size 0x4
};
// Range: 0x800CCC4C -> 0x800CCCD8
// this: r31
unsigned char DoubleKalmann1D::Init(float frstGuess /* f31 */, float measUncert /* f2 */, float valueUncert /* f3 */) {}

// Range: 0x800CCCD8 -> 0x800CCDA8
// this: r31
float DoubleKalmann1D::Estimate(float newMeasurement /* f30 */, float dt /* f31 */) {}

static // total size: 0x8
struct {} Filter1D::__RTTI; // size: 0x8, address: 0x8013A600
static // total size: 0x8
struct {} Kalmann1D::__RTTI; // size: 0x8, address: 0x8013A608
static // total size: 0x8
struct {} DoubleKalmann1D::__RTTI; // size: 0x8, address: 0x8013A610
static // total size: 0x8
struct {} Filter3D::__RTTI; // size: 0x8, address: 0x8013A618
static // total size: 0x8
struct {} SimpleFilter3D::__RTTI; // size: 0x8, address: 0x8013A620
static // total size: 0x8
struct {} SimpleFilterAbs3D::__RTTI; // size: 0x8, address: 0x8013A628
// total size: 0x14
struct {} SimpleFilterAbs3D::__vtable; // size: 0x14, address: 0x80114338
static // total size: 0x8
struct {} SimpleFilter1D::__RTTI; // size: 0x8, address: 0x8013A630



