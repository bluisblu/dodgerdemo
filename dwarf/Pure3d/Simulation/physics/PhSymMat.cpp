/*
    Compile unit: D:\Pure3d\Simulation\physics\PhSymMat.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EE340 -> 0x800EEB78
*/
// total size: 0xC
struct {} PhSymMat::__vtable; // size: 0xC, address: 0x8011606C
// total size: 0x1C
class PhSymMat {
    // Functions
    PhSymMat();

    ~PhSymMat();

    void Add(const class PhSymMat & b);

    void Sum(const class PhSymMat & a, const class PhSymMat & b);

    void Scale(float b);

    void Scale(const class PhSymMat & a, float b);

    void TransformSelf(const class Matrix & m);

    void TransformSelf(const class Vector & v);

    void TransformVector(const class Vector & v, class Vector & r) const;

    void Invert(const class PhSymMat & a);

    void Identity();

    void Zero();

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
// Range: 0x800EE340 -> 0x800EE350
// this: r3
PhSymMat::PhSymMat() {
    // References
    // -> struct [anonymous] PhSymMat::__vtable;
}

// Range: 0x800EE350 -> 0x800EE39C
// this: r31
PhSymMat::~PhSymMat() {
    // References
    // -> struct [anonymous] PhSymMat::__vtable;
}

// Range: 0x800EE39C -> 0x800EE400
// this: r1+0x0
void PhSymMat::Add(const class PhSymMat & b /* r1+0x4 */) {}

// Range: 0x800EE400 -> 0x800EE464
// this: r1+0x0
void PhSymMat::Sum(const class PhSymMat & a /* r1+0x4 */, const class PhSymMat & b /* r1+0x8 */) {}

// Range: 0x800EE464 -> 0x800EE4B0
// this: r1+0x0
void PhSymMat::Scale(float b /* r1+0x4 */) {}

// Range: 0x800EE4B0 -> 0x800EE4FC
// this: r1+0x0
void PhSymMat::Scale(const class PhSymMat & a /* r1+0x4 */, float b /* r1+0x8 */) {}

// Range: 0x800EE4FC -> 0x800EE704
// this: r1+0x8
void PhSymMat::TransformSelf(const class Matrix & m /* r1+0xC */) {
    // Local variables
    float a; // f5
    float b; // f4
    float c; // f6
    float e1; // f9
    float e2; // f10
    float e3; // f11
    class PhSymMat p; // r1+0x10

    // References
    // -> struct [anonymous] PhSymMat::__vtable;
}

// Range: 0x800EE704 -> 0x800EE878
// this: r1+0x8
void PhSymMat::TransformSelf(const class Vector & v /* r1+0xC */) {
    // Local variables
    float a; // f3
    float b; // f7
    float c; // f4
    class PhSymMat p; // r1+0x10

    // References
    // -> struct [anonymous] PhSymMat::__vtable;
}

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
// Range: 0x800EE878 -> 0x800EE90C
// this: r1+0x0
void PhSymMat::TransformVector(const class Vector & v /* r1+0x4 */, class Vector & r /* r1+0x8 */) const {}

// Range: 0x800EE90C -> 0x800EEB34
// this: r3
void PhSymMat::Invert(const class PhSymMat & a /* r1+0xC */) {
    // Local variables
    float scaleFactor; // r1+0x8
    class PhSymMat p; // r1+0x50
    float det; // f5
    float idet; // r1+0x8

    // References
    // -> struct [anonymous] PhSymMat::__vtable;
}

// Range: 0x800EEB34 -> 0x800EEB58
// this: r1+0x0
void PhSymMat::Identity() {}

// Range: 0x800EEB58 -> 0x800EEB78
// this: r1+0x0
void PhSymMat::Zero() {}

static // total size: 0x8
struct {} PhSymMat::__RTTI; // size: 0x8, address: 0x8013AC30



