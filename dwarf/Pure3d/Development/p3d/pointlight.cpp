/*
    Compile unit: D:\Pure3d\development\p3d\pointlight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80049E48 -> 0x8004A044
*/
// total size: 0x18
struct {} tPointLight::__vtable; // size: 0x18, address: 0x801022EC
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
// total size: 0x40
class tPointLight : public tLight {
    // Functions
    tPointLight();

    void SetPosition(float x, float y, float z);

    void SetAttenuation(float A, float B, float C);

    void Update();

    // Members
protected:
    class Vector position; // offset 0x20, size 0xC
    float a; // offset 0x2C, size 0x4
    float b; // offset 0x30, size 0x4
    float c; // offset 0x34, size 0x4
    float range; // offset 0x38, size 0x4
};
// Range: 0x80049E48 -> 0x80049EAC
// this: r31
tPointLight::tPointLight() {
    // References
    // -> struct [anonymous] tPointLight::__vtable;
}

// Range: 0x80049EAC -> 0x80049EE4
// this: r3
void tPointLight::SetPosition(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {}

// Range: 0x80049EE4 -> 0x80049F1C
// this: r3
void tPointLight::SetAttenuation(float A /* r1+0xC */, float B /* r1+0x10 */, float C /* r1+0x14 */) {}

// Range: 0x80049F1C -> 0x8004A044
// this: r30
void tPointLight::Update() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801380E0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801380F0
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80138100
static // total size: 0x8
struct {} tPointLight::__RTTI; // size: 0x8, address: 0x80138108



