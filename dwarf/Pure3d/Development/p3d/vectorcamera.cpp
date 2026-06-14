/*
    Compile unit: D:\Pure3d\development\p3d\vectorcamera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800549F4 -> 0x80054C1C
*/
// total size: 0x60
struct {} tVectorCamera::__vtable; // size: 0x60, address: 0x801031E0
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
class tVectorCamera : public tCamera {
    // Functions
    tVectorCamera();

    ~tVectorCamera();

    void SetDirection(const class Vector & dir);

    void SetUpVector(const class Vector & vup);

    void SetPosition(const class Vector & pos);

    void Update();

    // Members
protected:
    class Vector position; // offset 0xF0, size 0xC
    class Vector direction; // offset 0xFC, size 0xC
    class Vector up; // offset 0x108, size 0xC
};
// Range: 0x800549F4 -> 0x80054A5C
// this: r31
tVectorCamera::tVectorCamera() {
    // References
    // -> struct [anonymous] tVectorCamera::__vtable;
}

// Range: 0x80054A5C -> 0x80054AC0
// this: r30
tVectorCamera::~tVectorCamera() {
    // References
    // -> struct [anonymous] tVectorCamera::__vtable;
}

// Range: 0x80054AC0 -> 0x80054AE4
// this: r1+0x0
void tVectorCamera::SetDirection(const class Vector & dir /* r1+0x4 */) {}

// Range: 0x80054AE4 -> 0x80054B08
// this: r1+0x0
void tVectorCamera::SetUpVector(const class Vector & vup /* r1+0x4 */) {}

// Range: 0x80054B08 -> 0x80054B2C
// this: r1+0x0
void tVectorCamera::SetPosition(const class Vector & pos /* r1+0x4 */) {}

// Range: 0x80054B2C -> 0x80054C1C
// this: r31
void tVectorCamera::Update() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801383C8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801383D8
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x801383E8
static // total size: 0x8
struct {} tVectorCamera::__RTTI; // size: 0x8, address: 0x801383F0



