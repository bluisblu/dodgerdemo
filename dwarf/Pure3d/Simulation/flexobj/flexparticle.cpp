/*
    Compile unit: D:\Pure3d\Simulation\flexobj\flexparticle.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F29B4 -> 0x800F2D34
*/
// total size: 0x44
class FlexParticle {
    // Functions
    FlexParticle(int i);

    ~FlexParticle();

    void MoveSelf(const float * d, float invTimeStep);

    void UnMoveSelf(const float * d, float invTimeStep);

    void FullCleanConstrain(float * d) const;

    void CleanConstrain(float * d) const;

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
// Range: 0x800F29B4 -> 0x800F29E0
// this: r3
FlexParticle::FlexParticle(int i /* r1+0x4 */) {}

// Range: 0x800F29E0 -> 0x800F2A20
// this: r31
FlexParticle::~FlexParticle() {}

// Range: 0x800F2A20 -> 0x800F2B00
// this: r31
void FlexParticle::MoveSelf(const float * d /* r1+0xC */, float invTimeStep /* f31 */) {
    // Local variables
    float tmp[3]; // r1+0x14
}

// Range: 0x800F2B00 -> 0x800F2BEC
// this: r31
void FlexParticle::UnMoveSelf(const float * d /* r1+0xC */, float invTimeStep /* f31 */) {
    // Local variables
    float tmp[3]; // r1+0x14
}

// Range: 0x800F2BEC -> 0x800F2CD0
// this: r1+0x0
void FlexParticle::FullCleanConstrain(float * d /* r1+0x4 */) const {}

// Range: 0x800F2CD0 -> 0x800F2D34
// this: r30
void FlexParticle::CleanConstrain(float * d /* r31 */) const {}




