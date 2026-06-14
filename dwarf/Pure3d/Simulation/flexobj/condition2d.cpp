/*
    Compile unit: D:\Pure3d\Simulation\flexobj\condition2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1258 -> 0x800F298C
*/
static float VERY_SMALL_BEND; // size: 0x4, address: 0x8013ACF8
static float parallelLimit; // size: 0x4, address: 0x8013ACFC
float dpji[3]; // size: 0xC, address: 0x80137600
float dpki[3]; // size: 0xC, address: 0x8013760C
float Lu; // size: 0x4, address: 0x8013B470
float Lv; // size: 0x4, address: 0x8013B474
// total size: 0x1C
struct {} Stretch2DCondition::__vtable; // size: 0x1C, address: 0x801163F8
// total size: 0x8
struct C2DVal {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4C
class Stretch2DCondition : public Condition {
    // Functions
    void Derivative(float c0, float L, float d1, float d2, float * dCi, float * dCj, float * dCk);

    void BuildMatrix(float * b, float dt);

    // Static members
    static float Lv; // size: 0x4
    static float Lu; // size: 0x4
    static float dpki[3]; // size: 0xC
    static float dpji[3]; // size: 0xC

    // Members
    class FlexParticle * pk; // offset 0x2C, size 0x4
    float du1; // offset 0x30, size 0x4
    float dv1; // offset 0x34, size 0x4
    float du2; // offset 0x38, size 0x4
    float dv2; // offset 0x3C, size 0x4
    float bu; // offset 0x40, size 0x4
    float bv; // offset 0x44, size 0x4
    float a; // offset 0x48, size 0x4
};
// Range: 0x800F1258 -> 0x800F1260
float Stretch2DCondition::Cond() {}

// Range: 0x800F1260 -> 0x800F13BC
// this: r1+0x0
void Stretch2DCondition::Derivative(float c0 /* r1+0x4 */, float L /* r1+0x8 */, float d1 /* r1+0xC */, float d2 /* r1+0x10 */, float * dCi /* r1+0x14 */, float * dCj /* r1+0x18 */, float * dCk /* r1+0x1C */) {
    // Local variables
    float aL; // f8
    float ji; // f9
    float ki; // f10

    // References
    // -> float dpki[3];
    // -> float dpji[3];
}

// total size: 0x18
struct C2DVect {
    // Members
    float u[3]; // offset 0x0, size 0xC
    float v[3]; // offset 0xC, size 0xC
};
// Range: 0x800F13BC -> 0x800F1924
// this: r30
void Stretch2DCondition::BuildMatrix(float * b /* r31 */, float dt /* f31 */) {
    // Local variables
    struct C2DVect dCi; // r1+0xE8
    struct C2DVect dCj; // r1+0xD0
    struct C2DVect dCk; // r1+0xB8
    float * locb; // r3

    // References
    // -> float Lv;
    // -> float Lu;
    // -> float dpki[3];
    // -> float dpji[3];
}

// total size: 0x1C
struct {} Shear2DCondition::__vtable; // size: 0x1C, address: 0x801163BC
// total size: 0x34
class Shear2DCondition : public Condition {
    // Functions
    Shear2DCondition(class FlexParticle * pii, class FlexParticle * pjj, class FlexParticle * pkk, class ConditionParams * p, float a0);

    float Cond(float * dCi, float * dCj, float * dCk);

    void BuildMatrix(float * b, float dt);

    // Members
    float angle0; // offset 0x2C, size 0x4
public:
    class FlexParticle * pk; // offset 0x30, size 0x4
};
// Range: 0x800F1924 -> 0x800F1984
// this: r30
Shear2DCondition::Shear2DCondition(class FlexParticle * pii /* r4 */, class FlexParticle * pjj /* r5 */, class FlexParticle * pkk /* r31 */, class ConditionParams * p /* r7 */, float a0 /* f31 */) {
    // References
    // -> struct [anonymous] Shear2DCondition::__vtable;
}

// Range: 0x800F1984 -> 0x800F198C
float Shear2DCondition::Cond() {}

// Range: 0x800F198C -> 0x800F1C2C
// this: r28
float Shear2DCondition::Cond(float * dCi /* r29 */, float * dCj /* r30 */, float * dCk /* r31 */) {
    // Local variables
    float C0; // f1
    float cosangle; // f31
    float nji[3]; // r1+0x54
    float nkj[3]; // r1+0x48

    // References
    // -> static float VERY_SMALL_BEND;
}

// Range: 0x800F1C2C -> 0x800F1E8C
// this: r30
void Shear2DCondition::BuildMatrix(float * b /* r31 */, float dt /* f21 */) {
    // Local variables
    float dCi[3]; // r1+0xC0
    float dCj[3]; // r1+0xB4
    float dCk[3]; // r1+0xA8
    float C0; // r1+0x8
    float Cdot; // f4
    float kkf; // f22
    float dCidCj[3][3]; // r1+0x5C
    float * locb; // r3

    // References
    // -> static float VERY_SMALL_BEND;
}

// total size: 0x1C
struct {} Bend2DCondition::__vtable; // size: 0x1C, address: 0x80116380
// total size: 0x38
class Bend2DCondition : public Condition {
    // Functions
    Bend2DCondition(class FlexParticle * pii, class FlexParticle * pjj, class FlexParticle * pkk, class FlexParticle * pll, class ConditionParams * p, float a0);

    float Cond(float * dCi, float * dCj, float * dCk, float * dCl);

    void BuildMatrix(float * b, float dt);

    // Members
    float angle0; // offset 0x2C, size 0x4
public:
    class FlexParticle * pk; // offset 0x30, size 0x4
    class FlexParticle * pl; // offset 0x34, size 0x4
};
// Range: 0x800F1E8C -> 0x800F1EFC
// this: r29
Bend2DCondition::Bend2DCondition(class FlexParticle * pii /* r4 */, class FlexParticle * pjj /* r5 */, class FlexParticle * pkk /* r30 */, class FlexParticle * pll /* r31 */, class ConditionParams * p /* r8 */, float a0 /* f31 */) {
    // References
    // -> struct [anonymous] Bend2DCondition::__vtable;
}

// Range: 0x800F1EFC -> 0x800F1F04
float Bend2DCondition::Cond() {}

// Range: 0x800F1F04 -> 0x800F2278
// this: r27
float Bend2DCondition::Cond(float * dCi /* r28 */, float * dCj /* r29 */, float * dCk /* r30 */, float * dCl /* r31 */) {
    // Local variables
    float dpa[3]; // r1+0x64
    float dpb[3]; // r1+0x58
    float n1[3]; // r1+0x4C
    float n2[3]; // r1+0x40
    float C0; // f31
    float cosangle; // f30
    float nn1; // r1+0x8
    float nn2; // r1+0x8

    // References
    // -> static float VERY_SMALL_BEND;
    // -> static float parallelLimit;
}

// Range: 0x800F2278 -> 0x800F2534
// this: r30
void Bend2DCondition::BuildMatrix(float * b /* r31 */, float dt /* f31 */) {
    // Local variables
    float dCi[3]; // r1+0xC8
    float dCj[3]; // r1+0xBC
    float dCk[3]; // r1+0xB0
    float dCl[3]; // r1+0xA4
    float C0; // r1+0x8
    float Cdot; // f23
    float kkf; // f1
    float * locb; // r3

    // References
    // -> static float VERY_SMALL_BEND;
}

// total size: 0x1C
struct {} Wind2DCondition::__vtable; // size: 0x1C, address: 0x80116348
// total size: 0x38
class Wind2DCondition : public Condition {
    // Functions
    Wind2DCondition(class FlexParticle * pii, class FlexParticle * pjj, class FlexParticle * pkk, class ConditionParams * p, float * w, float inarea);

    void BuildMatrix(float * b, float dt);

    // Members
public:
    class FlexParticle * pk; // offset 0x2C, size 0x4
    float * wind; // offset 0x30, size 0x4
    float area; // offset 0x34, size 0x4
};
// Range: 0x800F2534 -> 0x800F25A4
// this: r29
Wind2DCondition::Wind2DCondition(class FlexParticle * pii /* r4 */, class FlexParticle * pjj /* r5 */, class FlexParticle * pkk /* r30 */, class ConditionParams * p /* r7 */, float * w /* r31 */, float inarea /* f31 */) {
    // References
    // -> struct [anonymous] Wind2DCondition::__vtable;
}

// Range: 0x800F25A4 -> 0x800F25AC
float Wind2DCondition::Cond() {}

// Range: 0x800F25AC -> 0x800F27FC
// this: r30
void Wind2DCondition::BuildMatrix(float * b /* r31 */, float dt /* f28 */) {
    // Local variables
    float * locb; // r3
}

static // total size: 0x8
struct {} Condition::__RTTI; // size: 0x8, address: 0x8013AD00
static // total size: 0x8
struct {} Wind2DCondition::__RTTI; // size: 0x8, address: 0x8013AD08
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
struct {} Bend2DCondition::__RTTI; // size: 0x8, address: 0x8013AD10
static // total size: 0x8
struct {} Shear2DCondition::__RTTI; // size: 0x8, address: 0x8013AD18
static // total size: 0x8
struct {} Stretch2DCondition::__RTTI; // size: 0x8, address: 0x8013AD20



