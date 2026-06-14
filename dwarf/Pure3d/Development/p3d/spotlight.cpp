/*
    Compile unit: D:\Pure3d\development\p3d\spotlight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F2A8 -> 0x8004F5D0
*/
// total size: 0x18
struct {} tSpotLight::__vtable; // size: 0x18, address: 0x801029BC
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
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
// total size: 0x58
class tSpotLight : public tLight {
    // Functions
    tSpotLight();

    void SetDirection(float x, float y, float z);

    void SetPosition(float x, float y, float z);

    void SetRange(float r);

    void SetAttenuation(float A, float B, float C);

    void SetCone(float Phi, float Theta, float Falloff);

    void Update();

    // Members
protected:
    class Vector direction; // offset 0x20, size 0xC
    class Vector position; // offset 0x2C, size 0xC
    float a; // offset 0x38, size 0x4
    float b; // offset 0x3C, size 0x4
    float c; // offset 0x40, size 0x4
    float range; // offset 0x44, size 0x4
    float phi; // offset 0x48, size 0x4
    float theta; // offset 0x4C, size 0x4
    float falloff; // offset 0x50, size 0x4
};
// Range: 0x8004F2A8 -> 0x8004F348
// this: r1+0x8
tSpotLight::tSpotLight() {
    // References
    // -> struct [anonymous] tSpotLight::__vtable;
}

// Range: 0x8004F348 -> 0x8004F380
// this: r3
void tSpotLight::SetDirection(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {}

// Range: 0x8004F380 -> 0x8004F3B8
// this: r3
void tSpotLight::SetPosition(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {}

// Range: 0x8004F3B8 -> 0x8004F3E8
// this: r3
void tSpotLight::SetRange(float r /* r1+0xC */) {}

// Range: 0x8004F3E8 -> 0x8004F420
// this: r3
void tSpotLight::SetAttenuation(float A /* r1+0xC */, float B /* r1+0x10 */, float C /* r1+0x14 */) {}

// Range: 0x8004F420 -> 0x8004F458
// this: r3
void tSpotLight::SetCone(float Phi /* r1+0xC */, float Theta /* r1+0x10 */, float Falloff /* r1+0x14 */) {}

// Range: 0x8004F458 -> 0x8004F5D0
// this: r31
void tSpotLight::Update() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138210
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138220
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80138230
static // total size: 0x8
struct {} tSpotLight::__RTTI; // size: 0x8, address: 0x80138238



