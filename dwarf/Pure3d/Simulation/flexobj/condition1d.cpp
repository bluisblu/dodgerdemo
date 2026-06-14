/*
    Compile unit: D:\Pure3d\Simulation\flexobj\condition1d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F0180 -> 0x800F11F4
*/
static float VERY_SMALL_BEND; // size: 0x4, address: 0x8013ACC8
static float VERY_SMALL_STRETCH; // size: 0x4, address: 0x8013ACCC
float dp[3]; // size: 0xC, address: 0x801375F0
float ndp; // size: 0x4, address: 0x8013B468
float compFactor; // size: 0x4, address: 0x8013ACD0
// total size: 0x1C
struct {} Stretch1DCondition::__vtable; // size: 0x1C, address: 0x80116304
// total size: 0x34
class Stretch1DCondition : public Condition {
    // Functions
    Stretch1DCondition(class FlexParticle * pii, class FlexParticle * pjj, class ConditionParams * p, float ddl);

    float Cond();

    void BuildMatrix(class SparseBlockMatrix * A, float * b, float dt);

    // Static members
    static float ndp; // size: 0x4
    static float dp[3]; // size: 0xC

    // Members
    float bu; // offset 0x2C, size 0x4
    float dl; // offset 0x30, size 0x4
};
// Range: 0x800F0180 -> 0x800F01D4
// this: r31
Stretch1DCondition::Stretch1DCondition(class FlexParticle * pii /* r4 */, class FlexParticle * pjj /* r5 */, class ConditionParams * p /* r6 */, float ddl /* f31 */) {
    // References
    // -> struct [anonymous] Stretch1DCondition::__vtable;
}

// Range: 0x800F01D4 -> 0x800F01EC
// this: r1+0x0
float Stretch1DCondition::Cond() {
    // References
    // -> float ndp;
}

static unsigned char doInCol$214; // size: 0x1, address: 0x8013B46C
static signed char init$215; // size: 0x1, address: 0x8013B46D
// Range: 0x800F01EC -> 0x800F07A8
// this: r29
void Stretch1DCondition::BuildMatrix(class SparseBlockMatrix * A /* r30 */, float * b /* r31 */, float dt /* f29 */) {
    // Local variables
    float C0; // r1+0x8
    float dCi[3]; // r1+0x118
    float dCj[3]; // r1+0x10C
    float d2Cij[3][3]; // r1+0xE8
    float Cdot; // f30
    float v1[3]; // r1+0xDC
    float fi[3]; // r1+0xD0
    float fj[3]; // r1+0xC4
    float kkf; // f1
    float kkd; // f4
    float dCidCj[3][3]; // r1+0xA0
    float Kij[3][3]; // r1+0x7C
    float kvdt[3]; // r1+0x70
    float * locb; // r6
    float m1[3][3]; // r1+0x4C
    class pm * block; // r3

    // References
    // -> static unsigned char doInCol$214;
    // -> static signed char init$215;
    // -> float compFactor;
    // -> float dp[3];
    // -> float ndp;
    // -> static float VERY_SMALL_STRETCH;
}

// total size: 0x1C
struct {} Bend1DCondition::__vtable; // size: 0x1C, address: 0x801162C8
// total size: 0x38
class Bend1DCondition : public Condition {
    // Functions
    Bend1DCondition(class FlexParticle * pii, class FlexParticle * pjj, class FlexParticle * pkk, class ConditionParams * p, unsigned char calcRestAngle);

    float Cond(float * dCi, float * dCj, float * dCk);

    void BuildMatrix(float * b, float dt);

    // Members
    float angle0; // offset 0x2C, size 0x4
    float prevC0; // offset 0x30, size 0x4
public:
    class FlexParticle * pk; // offset 0x34, size 0x4
};
// Range: 0x800F07A8 -> 0x800F0990
// this: r1+0x8
Bend1DCondition::Bend1DCondition(class FlexParticle * pii /* r4 */, class FlexParticle * pjj /* r5 */, class FlexParticle * pkk /* r30 */, class ConditionParams * p /* r7 */, unsigned char calcRestAngle /* r31 */) {
    // Local variables
    float cosangle; // f1
    float nji[3]; // r1+0x4C
    float nkj[3]; // r1+0x40

    // References
    // -> struct [anonymous] Bend1DCondition::__vtable;
}

// Range: 0x800F0990 -> 0x800F0998
float Bend1DCondition::Cond() {}

// Range: 0x800F0998 -> 0x800F0C38
// this: r28
float Bend1DCondition::Cond(float * dCi /* r29 */, float * dCj /* r30 */, float * dCk /* r31 */) {
    // Local variables
    float C0; // f1
    float cosangle; // f31
    float nji[3]; // r1+0x54
    float nkj[3]; // r1+0x48

    // References
    // -> static float VERY_SMALL_BEND;
}

// Range: 0x800F0C38 -> 0x800F0DC0
// this: r30
void Bend1DCondition::BuildMatrix(float * b /* r31 */, float dt /* f31 */) {
    // Local variables
    float dCi[3]; // r1+0x68
    float dCj[3]; // r1+0x5C
    float dCk[3]; // r1+0x50
    float C0; // r1+0x8
    float kkf; // f12
    float * locb; // r3

    // References
    // -> static float VERY_SMALL_BEND;
}

// total size: 0x1C
struct {} Wind1DCondition::__vtable; // size: 0x1C, address: 0x80116290
// total size: 0x34
class Wind1DCondition : public Condition {
    // Functions
    Wind1DCondition(class FlexParticle * pii, class FlexParticle * pjj, class ConditionParams * p, float * w);

    void BuildMatrix(float * b, float dt);

    // Members
public:
    float * wind; // offset 0x2C, size 0x4
    float len; // offset 0x30, size 0x4
};
// Range: 0x800F0DC0 -> 0x800F0ED8
// this: r1+0x8
Wind1DCondition::Wind1DCondition(class FlexParticle * pii /* r29 */, class FlexParticle * pjj /* r30 */, class ConditionParams * p /* r6 */, float * w /* r31 */) {
    // References
    // -> struct [anonymous] Wind1DCondition::__vtable;
}

// Range: 0x800F0ED8 -> 0x800F0EE0
float Wind1DCondition::Cond() {}

// Range: 0x800F0EE0 -> 0x800F10C8
// this: r30
void Wind1DCondition::BuildMatrix(float * b /* r31 */, float dt /* f31 */) {
    // Local variables
    float * locb; // r3
}

static // total size: 0x8
struct {} Condition::__RTTI; // size: 0x8, address: 0x8013ACD4
static // total size: 0x8
struct {} Wind1DCondition::__RTTI; // size: 0x8, address: 0x8013ACDC
// total size: 0x44
class FlexParticle {
    // Members
public:
    int index; // offset 0x0, size 0x4
    float x[3]; // offset 0x4, size 0xC
    float v[3]; // offset 0x10, size 0xC
    float uv[2]; // offset 0x1C, size 0x8
    unsigned char free; // offset 0x24, size 0x1
    unsigned char broken; // offset 0x25, size 0x1
    float collConstrain[2][3]; // offset 0x28, size 0x18
    int inColl; // offset 0x40, size 0x4
};
// total size: 0x34
class ConditionParams {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float Stretch1Dkf; // offset 0x4, size 0x4
    float Stretch1Dkd; // offset 0x8, size 0x4
    float Bend1Dkf; // offset 0xC, size 0x4
    float Bend1Dkd; // offset 0x10, size 0x4
    float Wind1DKf; // offset 0x14, size 0x4
    float Stretch2Dkf; // offset 0x18, size 0x4
    float Stretch2Dkd; // offset 0x1C, size 0x4
    float Shear2Dkf; // offset 0x20, size 0x4
    float Shear2Dkd; // offset 0x24, size 0x4
    float Bend2Dkf; // offset 0x28, size 0x4
    float Bend2Dkd; // offset 0x2C, size 0x4
    float Wind2DKf; // offset 0x30, size 0x4
};
// total size: 0x28
class pm {
    // Members
public:
    float k[3][3]; // offset 0x0, size 0x24
    int column; // offset 0x24, size 0x4
};
// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    class pm * fArray; // offset 0x8, size 0x4
};
// total size: 0x30
class SparseBlockMatrix {
    // Members
protected:
    int nRows; // offset 0x0, size 0x4
    int vecSize; // offset 0x4, size 0x4
    float eps; // offset 0x8, size 0x4
    float eps2; // offset 0xC, size 0x4
    int maxiter; // offset 0x10, size 0x4
    class TArray * lrows; // offset 0x14, size 0x4
    float * vec_r; // offset 0x18, size 0x4
    float * vec_c; // offset 0x1C, size 0x4
    float * vec_t; // offset 0x20, size 0x4
    float * vec_q; // offset 0x24, size 0x4
    float * vec_s; // offset 0x28, size 0x4
    float * vec_b; // offset 0x2C, size 0x4
};
// total size: 0x2C
class Condition {
    // Members
    class Condition * nextCond; // offset 0x0, size 0x4
    float xi[3]; // offset 0x4, size 0xC
    float xj[3]; // offset 0x10, size 0xC
public:
    void * __vptr$; // offset 0x1C, size 0x4
    class FlexParticle * pi; // offset 0x20, size 0x4
    class FlexParticle * pj; // offset 0x24, size 0x4
    class ConditionParams * params; // offset 0x28, size 0x4
};
static // total size: 0x8
struct {} Bend1DCondition::__RTTI; // size: 0x8, address: 0x8013ACE4
static // total size: 0x8
struct {} Stretch1DCondition::__RTTI; // size: 0x8, address: 0x8013ACEC



