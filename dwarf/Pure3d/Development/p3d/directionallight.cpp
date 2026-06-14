/*
    Compile unit: D:\Pure3d\development\p3d\directionallight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003AD88 -> 0x8003AF00
*/
// total size: 0x18
struct {} tDirectionalLight::__vtable; // size: 0x18, address: 0x80100A24
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
// total size: 0x30
class tDirectionalLight : public tLight {
    // Functions
    tDirectionalLight();

    void SetDirection(float x, float y, float z);

    void Update();

    // Members
protected:
    class Vector direction; // offset 0x20, size 0xC
};
// Range: 0x8003AD88 -> 0x8003ADD8
// this: r31
tDirectionalLight::tDirectionalLight() {
    // References
    // -> struct [anonymous] tDirectionalLight::__vtable;
}

// Range: 0x8003ADD8 -> 0x8003AE28
// this: r31
void tDirectionalLight::SetDirection(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {}

// Range: 0x8003AE28 -> 0x8003AF00
// this: r30
void tDirectionalLight::Update() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137C28
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137C38
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80137C48
static // total size: 0x8
struct {} tDirectionalLight::__RTTI; // size: 0x8, address: 0x80137C50



