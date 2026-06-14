/*
    Compile unit: D:\Pure3d\Simulation\flexobj\condition.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F0094 -> 0x800F0154
*/
// total size: 0x1C
struct {} Condition::__vtable; // size: 0x1C, address: 0x8011624C
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
// total size: 0x0
class SparseBlockMatrix {};
// total size: 0x2C
class Condition {
    // Functions
    Condition(class FlexParticle * pii, class FlexParticle * pjj, class ConditionParams * par);

    ~Condition();

    void RemoveNext();

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
// Range: 0x800F0094 -> 0x800F00B8
// this: r3
Condition::Condition(class FlexParticle * pii /* r1+0x4 */, class FlexParticle * pjj /* r1+0x8 */, class ConditionParams * par /* r1+0xC */) {
    // References
    // -> struct [anonymous] Condition::__vtable;
}

// Range: 0x800F00B8 -> 0x800F0104
// this: r31
Condition::~Condition() {
    // References
    // -> struct [anonymous] Condition::__vtable;
}

// Range: 0x800F0104 -> 0x800F0154
// this: r1+0x8
void Condition::RemoveNext() {
    // Local variables
    class Condition * c; // r5
}

static // total size: 0x8
struct {} Condition::__RTTI; // size: 0x8, address: 0x8013ACC0



