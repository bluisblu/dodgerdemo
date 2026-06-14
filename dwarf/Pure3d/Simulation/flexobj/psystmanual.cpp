/*
    Compile unit: D:\Pure3d\Simulation\flexobj\psystmanual.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4ADC -> 0x800F4DB4
*/
// total size: 0x38
struct {} ParticleSystemManual::__vtable; // size: 0x38, address: 0x801167F0
// total size: 0x98
class ParticleSystemManual : public ParticleSystem {
    // Functions
    ParticleSystemManual(int nbparticle, class Vector * ppos);

    ~ParticleSystemManual();

    void AddLine(int pa, int pb, class ConditionParams * c);

    void AddBending1D(int pa, int pb, int pc, unsigned char calcRestAngle, class ConditionParams * c);
};
// Range: 0x800F4ADC -> 0x800F4BA0
// this: r1+0x8
ParticleSystemManual::ParticleSystemManual(int nbparticle /* r29 */, class Vector * ppos /* r30 */) {
    // Local variables
    int i; // r6

    // References
    // -> struct [anonymous] ParticleSystemManual::__vtable;
}

// Range: 0x800F4BA0 -> 0x800F4C04
// this: r30
ParticleSystemManual::~ParticleSystemManual() {
    // References
    // -> struct [anonymous] ParticleSystemManual::__vtable;
}

// Range: 0x800F4C04 -> 0x800F4D1C
// this: r28
void ParticleSystemManual::AddLine(int pa /* r1+0xC */, int pb /* r1+0x10 */, class ConditionParams * c /* r29 */) {
    // Local variables
    float len; // f31
    class ConditionParams * cp; // r29
}

// Range: 0x800F4D1C -> 0x800F4DB0
// this: r26
void ParticleSystemManual::AddBending1D(int pa /* r27 */, int pb /* r28 */, int pc /* r29 */, unsigned char calcRestAngle /* r30 */, class ConditionParams * c /* r8 */) {
    // Local variables
    class ConditionParams * cp; // r31
}

// Range: 0x800F4DB0 -> 0x800F4DB4
void ParticleSystemManual::Display() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013ADF0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AE00
static // total size: 0x8
struct {} ParticleSystem::__RTTI; // size: 0x8, address: 0x8013AE08
static // total size: 0x8
struct {} ParticleSystemManual::__RTTI; // size: 0x8, address: 0x8013AE10
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
// total size: 0x0
class TArray {};
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
class FlexParticleList : public VoidPList {};
// total size: 0x0
class Wind {};
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
// total size: 0x98
class ParticleSystem : public tEntity {
    // Members
public:
    class FlexParticle * * lp; // offset 0x10, size 0x4
    class Condition * Conditions; // offset 0x14, size 0x4
    class ConditionParams * cparams; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    int nbp; // offset 0x20, size 0x4
    float deli; // offset 0x24, size 0x4
    class SparseBlockMatrix * A; // offset 0x28, size 0x4
    float * mass; // offset 0x2C, size 0x4
    float * b; // offset 0x30, size 0x4
    float * z; // offset 0x34, size 0x4
    float * dv; // offset 0x38, size 0x4
    class TArray * Sfilter; // offset 0x3C, size 0x4
    float extDensity; // offset 0x40, size 0x4
    float gravity[3]; // offset 0x44, size 0xC
    float wind[3]; // offset 0x50, size 0xC
    class FlexParticleList interplist; // offset 0x5C, size 0x14
    unsigned char drawparticle; // offset 0x70, size 0x1
    float maxDv; // offset 0x74, size 0x4
    float maxdef; // offset 0x78, size 0x4
    float rest; // offset 0x7C, size 0x4
    float frict; // offset 0x80, size 0x4
    float dvtstatic2; // offset 0x84, size 0x4
protected:
    int vecSize; // offset 0x88, size 0x4
    float invTimeStep; // offset 0x8C, size 0x4
    float timeStep; // offset 0x90, size 0x4
private:
    class Wind * windFunction; // offset 0x94, size 0x4
};



