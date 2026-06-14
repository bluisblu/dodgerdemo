/*
    Compile unit: D:\Pure3d\development\p3d\pointcamera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80049B58 -> 0x80049E48
*/
// total size: 0x60
struct {} tPointCamera::__vtable; // size: 0x60, address: 0x80102238
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
// total size: 0x118
class tPointCamera : public tCamera {
    // Functions
    tPointCamera();

    ~tPointCamera();

    void SetTarget(const class Vector & InTarget);

    void SetPosition(const class Vector & InPos);

    void Update();

    // Members
protected:
    class Vector position; // offset 0xF0, size 0xC
    class Vector target; // offset 0xFC, size 0xC
    class Vector vup; // offset 0x108, size 0xC
    float TwistAngle; // offset 0x114, size 0x4
};
// Range: 0x80049B58 -> 0x80049BC4
// this: r31
tPointCamera::tPointCamera() {
    // References
    // -> struct [anonymous] tPointCamera::__vtable;
}

// Range: 0x80049BC4 -> 0x80049C28
// this: r30
tPointCamera::~tPointCamera() {
    // References
    // -> struct [anonymous] tPointCamera::__vtable;
}

// Range: 0x80049C28 -> 0x80049C4C
// this: r1+0x0
void tPointCamera::SetTarget(const class Vector & InTarget /* r1+0x4 */) {}

// Range: 0x80049C4C -> 0x80049C70
// this: r1+0x0
void tPointCamera::SetPosition(const class Vector & InPos /* r1+0x4 */) {}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
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
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x80049C70 -> 0x80049E48
// this: r31
void tPointCamera::Update() {
    // Local variables
    class Vector heading; // r1+0xAC
    class Matrix matrix; // r1+0x6C
    class Matrix twistm; // r1+0x2C
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801380B0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801380C0
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x801380D0
static // total size: 0x8
struct {} tPointCamera::__RTTI; // size: 0x8, address: 0x801380D8



