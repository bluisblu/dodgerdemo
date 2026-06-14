/*
    Compile unit: D:\Pure3d\Simulation\physics\PhBasics.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CF034 -> 0x800CF68C
*/
// Range: 0x800CF034 -> 0x800CF224
void PhUpdateRotMatrixSafe(const class Vector & v /* r1+0x8 */, class Matrix & r /* r4 */, float safemax /* r1+0x10 */) {
    // Local variables
    int nj; // r1+0x8
    int j; // r1+0x8
}

// Range: 0x800CF224 -> 0x800CF2E4
void WFromRotMat(class Vector & w /* r1+0x0 */, const class Matrix & r0 /* r1+0x4 */, const class Matrix & r1 /* r1+0x8 */, float dt /* r1+0xC */) {}

// Range: 0x800CF2E4 -> 0x800CF354
void PhScaleMat(float f /* r1+0x0 */, const class Matrix & m /* r1+0x4 */, class Matrix & r /* r1+0x8 */) {}

static float small_angle$248; // size: 0x4, address: 0x8013B3C0
static signed char init$249; // size: 0x1, address: 0x8013B3C4
// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
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
// Range: 0x800CF354 -> 0x800CF44C
unsigned char PhWDtToQuat(const class Vector & wdt /* r1+0x8 */, class Quaternion & q /* r30 */) {
    // Local variables
    class Vector n; // r1+0x18
    unsigned char ret; // r31
    float nn; // f1

    // References
    // -> static float small_angle$248;
    // -> static signed char init$249;
}

// Range: 0x800CF44C -> 0x800CF4C8
void PhAngleToQuat(float angle /* r1+0x8 */, const class Vector & axis /* r30 */, class Quaternion & q /* r31 */) {}

// Range: 0x800CF4C8 -> 0x800CF5E8
int PhVectorGetIndexOfMaxComponent(const class Vector & in_v /* r1+0x8 */, unsigned char in_bInAbs /* r1+0xC */) {}

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
// Range: 0x800CF5E8 -> 0x800CF68C
void ComputePointMassInertia(class PhSymMat & inertia /* r3 */, class Vector & pos /* r1+0xC */, float mass /* f1 */) {}




