/*
    Compile unit: D:\Pure3d\development\p3d\effects\optic.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006C3A4 -> 0x8006C9BC
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x34
struct {} tEffect::__vtable; // size: 0x34, address: 0x80107A80
// total size: 0x38
struct {} tOpticEffect::__vtable; // size: 0x38, address: 0x80107A48
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
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x10
class tEffect : public tDrawable {};
// total size: 0x40
class tOpticEffect : public tEffect {
    // Functions
    tOpticEffect();

    ~tOpticEffect();

    void SetFrame(float f);

    float GetFrame();

    void Advance(float deltaTime);

    void Reset();

    void Display();

    // Members
protected:
    float intensity; // offset 0x10, size 0x4
    float intensityRate; // offset 0x14, size 0x4
    float sqDistanceCutOff; // offset 0x18, size 0x4
    float sourceRadius; // offset 0x1C, size 0x4
    class Vector sourceCentre; // offset 0x20, size 0xC
    unsigned char sourceOccluded; // offset 0x2C, size 0x1
    float frame; // offset 0x30, size 0x4
    float frameTime; // offset 0x34, size 0x4
    float deltaFrame; // offset 0x38, size 0x4
    unsigned char zTest; // offset 0x3C, size 0x1
    unsigned char zWrite; // offset 0x3D, size 0x1
    unsigned char fog; // offset 0x3E, size 0x1
};
// Range: 0x8006C3A4 -> 0x8006C444
// this: r31
tOpticEffect::tOpticEffect() {
    // References
    // -> struct [anonymous] tOpticEffect::__vtable;
    // -> struct [anonymous] tEffect::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// Range: 0x8006C4B8 -> 0x8006C53C
// this: r30
tOpticEffect::~tOpticEffect() {
    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] tEffect::__vtable;
    // -> struct [anonymous] tOpticEffect::__vtable;
}

// Range: 0x8006C53C -> 0x8006C57C
// this: r3
void tOpticEffect::SetFrame(float f /* r1+0xC */) {}

// Range: 0x8006C57C -> 0x8006C584
// this: r1+0x0
float tOpticEffect::GetFrame() {}

// Range: 0x8006C584 -> 0x8006C5A8
// this: r1+0x0
void tOpticEffect::Advance(float deltaTime /* r1+0x4 */) {
    // Local variables
    float frameAdvance; // f1
}

// Range: 0x8006C5A8 -> 0x8006C5B8
// this: r1+0x0
void tOpticEffect::Reset() {}

// total size: 0xF0
class tCamera : public tEntity {
    // Members
protected:
    float fov; // offset 0x10, size 0x4
    float aspect; // offset 0x14, size 0x4
    float nearPlane; // offset 0x18, size 0x4
    float farPlane; // offset 0x1C, size 0x4
    float fovScaleX; // offset 0x20, size 0x4
    float fovScaleY; // offset 0x24, size 0x4
    float leftPlane[4]; // offset 0x28, size 0x10
    float rightPlane[4]; // offset 0x38, size 0x10
    float upPlane[4]; // offset 0x48, size 0x10
    float downPlane[4]; // offset 0x58, size 0x10
    class Matrix worldToCamera; // offset 0x68, size 0x40
    class Matrix cameraToWorld; // offset 0xA8, size 0x40
    unsigned char updated; // offset 0xE8, size 0x1
};
// total size: 0x0
class tLight {};
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
// Range: 0x8006C5B8 -> 0x8006C9BC
// this: r30
void tOpticEffect::Display() {
    // Local variables
    class tView * view; // r1+0x8
    class tCamera * camera; // r31
    class Vector sourceCameraPos; // r1+0xFC
    class Vector sourceWorldPos; // r1+0xF0
    class Vector sourceViewPos; // r1+0xE4
    unsigned char sourceVisible; // r29
    float displayIntensity; // f31
    float tmpMag; // r1+0x8
    unsigned char origFog; // r31
    unsigned char origZWrite; // r29
    unsigned char origZTest; // r28
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138E88
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138E98
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138EA0
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x80138EB0
static // total size: 0x8
struct {} tOpticEffect::__RTTI; // size: 0x8, address: 0x80138EB8



