/*
    Compile unit: D:\Pure3d\Simulation\simai\vcm.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CAB68 -> 0x800CAE80
*/
float default_invTP; // size: 0x4, address: 0x8013A5D8
float default_invTS; // size: 0x4, address: 0x8013A5DC
float default_invTA; // size: 0x4, address: 0x8013A5E0
float default_restP; // size: 0x4, address: 0x8013A5E4
float default_restS; // size: 0x4, address: 0x8013A5E8
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
// total size: 0x40
class VirtualCM {
    // Functions
    VirtualCM();

    void Init(const class Vector & pos, const class Vector & speed);

    void Update(const class Vector & pos, const class Vector & speed, float dt);

    void AddCacheToVirtualState(const class Vector & v, const class Vector & w, float dt);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class Vector vP; // offset 0x4, size 0xC
    class Vector vS; // offset 0x10, size 0xC
    class Vector vA; // offset 0x1C, size 0xC
    float invTP; // offset 0x28, size 0x4
    float invTS; // offset 0x2C, size 0x4
    float invTA; // offset 0x30, size 0x4
    float restP; // offset 0x34, size 0x4
    float restS; // offset 0x38, size 0x4
    unsigned char verticalVcm; // offset 0x3C, size 0x1
};
// ERROR: Failed to emit tag 81A906 (GlobalSubroutine)
// Range: 0x800CABD0 -> 0x800CAC14
// this: r1+0x0
void VirtualCM::Init(const class Vector & pos /* r1+0x4 */, const class Vector & speed /* r1+0x8 */) {}

// Range: 0x800CAC14 -> 0x800CADB4
// this: r1+0x0
void VirtualCM::Update(const class Vector & pos /* r1+0x4 */, const class Vector & speed /* r1+0x8 */, float dt /* r1+0xC */) {
    // Local variables
    float hdt; // r1+0x0
    float dampingFactor; // f1
}

// Range: 0x800CADB4 -> 0x800CAE80
// this: r1+0x0
void VirtualCM::AddCacheToVirtualState(const class Vector & v /* r1+0x4 */, const class Vector & w /* r1+0x8 */, float dt /* r1+0xC */) {}




