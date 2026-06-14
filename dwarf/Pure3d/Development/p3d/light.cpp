/*
    Compile unit: D:\Pure3d\development\p3d\light.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800450D4 -> 0x80045420
*/
// total size: 0x18
struct {} tLight::__vtable; // size: 0x18, address: 0x80101AD0
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
// total size: 0x20
class tLight : public tEntity {
    // Functions
    tLight();

    ~tLight();

    void Activate(unsigned int s);

    void Deactivate();

    void SetColour(struct pddiColour & col);

    void Enable(unsigned char e);

    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
};
// Range: 0x800450D4 -> 0x8004512C
// this: r31
tLight::tLight() {
    // References
    // -> struct [anonymous] tLight::__vtable;
}

// Range: 0x8004512C -> 0x80045190
// this: r30
tLight::~tLight() {
    // References
    // -> struct [anonymous] tLight::__vtable;
}

// Range: 0x80045190 -> 0x800451C8
// this: r3
void tLight::Activate(unsigned int s /* r1+0xC */) {}

// Range: 0x800451C8 -> 0x80045234
// this: r31
void tLight::Deactivate() {}

// Range: 0x80045234 -> 0x80045268
// this: r3
void tLight::SetColour(struct pddiColour & col /* r1+0xC */) {}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x80045268 -> 0x80045298
// this: r3
void tLight::Enable(unsigned char e /* r1+0xC */) {}

// total size: 0xC
struct {} tLightGroup::__vtable; // size: 0xC, address: 0x80101AB0
// total size: 0x18
class tLightGroup : public tEntity {
    // Functions
    tLightGroup();

    ~tLightGroup();

    void SetViewLights(class tView * view);

    // Members
    int mNumLights; // offset 0x10, size 0x4
    class tLight * * mLights; // offset 0x14, size 0x4
};
// Range: 0x80045298 -> 0x800452E0
// this: r31
tLightGroup::tLightGroup() {
    // References
    // -> struct [anonymous] tLightGroup::__vtable;
}

// Range: 0x800452E0 -> 0x8004539C
// this: r28
tLightGroup::~tLightGroup() {
    // Local variables
    int a; // r30

    // References
    // -> struct [anonymous] tLightGroup::__vtable;
}

// total size: 0x0
class tCamera {};
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
// total size: 0xC0
class tView : public tRefCounted {
    // Members
protected:
    float l; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
    float r; // offset 0x10, size 0x4
    float b; // offset 0x14, size 0x4
    class tCamera * camera; // offset 0x18, size 0x4
    struct pddiColour ambientColour; // offset 0x1C, size 0x4
    struct pddiColour clearColour; // offset 0x20, size 0x4
    float clearDepth; // offset 0x24, size 0x4
    unsigned int clearStencil; // offset 0x28, size 0x4
    unsigned int clearMask; // offset 0x2C, size 0x4
    struct pddiColour fogColour; // offset 0x30, size 0x4
    float fogNear; // offset 0x34, size 0x4
    float fogFar; // offset 0x38, size 0x4
    class tLight * activeLightList[32]; // offset 0x3C, size 0x80
    unsigned char fogEnabled; // offset 0xBC, size 0x1
};
// Range: 0x8004539C -> 0x80045420
// this: r28
void tLightGroup::SetViewLights(class tView * view /* r29 */) {
    // Local variables
    int a; // r30
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137F28
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137F38
static // total size: 0x8
struct {} tLightGroup::__RTTI; // size: 0x8, address: 0x80137F40
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80137F50



