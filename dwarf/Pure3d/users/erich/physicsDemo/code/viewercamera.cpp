/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\viewercamera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000C730 -> 0x8000CF48
*/
// total size: 0x60
struct {} ViewerCamera::__vtable; // size: 0x60, address: 0x800FC844
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
    // Members
protected:
    class Vector position; // offset 0xF0, size 0xC
    class Vector target; // offset 0xFC, size 0xC
    class Vector vup; // offset 0x108, size 0xC
    float TwistAngle; // offset 0x114, size 0x4
};
// total size: 0x128
class ViewerCamera : public tPointCamera {
    // Functions
    ViewerCamera();

    ~ViewerCamera();

    void SetDefault(float x, float y, float z);

    void RotateX(float f);

    void RotateY(float f);

    void Zoom(float f);

    void MoveX(float f);

    void MoveY(float f);

    void Reset();

    void Update();

    // Members
    class Vector m_defaultPos; // offset 0x118, size 0xC
};
// Range: 0x8000C730 -> 0x8000C790
// this: r1+0x8
ViewerCamera::ViewerCamera() {
    // References
    // -> struct [anonymous] ViewerCamera::__vtable;
}

// Range: 0x8000C790 -> 0x8000C7F4
// this: r30
ViewerCamera::~ViewerCamera() {
    // References
    // -> struct [anonymous] ViewerCamera::__vtable;
}

// Range: 0x8000C7F4 -> 0x8000C804
// this: r1+0x0
void ViewerCamera::SetDefault(float x /* r1+0x4 */, float y /* r1+0x8 */, float z /* r1+0xC */) {}

// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
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
// Range: 0x8000C804 -> 0x8000C900
// this: r31
void ViewerCamera::RotateX(float f /* f31 */) {
    // Local variables
    class Matrix m; // r1+0x1C
    class Vector v; // r1+0x10
}

// Range: 0x8000C900 -> 0x8000CB3C
// this: r31
void ViewerCamera::RotateY(float f /* f31 */) {
    // Local variables
    class Matrix m; // r1+0x9C
    class Vector v; // r1+0x90
    class Matrix w2c; // r1+0x50
    class Matrix c2w; // r1+0x10
}

// Range: 0x8000CB3C -> 0x8000CC7C
// this: r31
void ViewerCamera::Zoom(float f /* f28 */) {}

// Range: 0x8000CC7C -> 0x8000CD4C
// this: r31
void ViewerCamera::MoveX(float f /* f31 */) {}

// Range: 0x8000CD4C -> 0x8000CE18
// this: r31
void ViewerCamera::MoveY(float f /* f31 */) {}

// Range: 0x8000CE18 -> 0x8000CE80
// this: r31
void ViewerCamera::Reset() {}

// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// Range: 0x8000CE80 -> 0x8000CF48
// this: r31
void ViewerCamera::Update() {
    // Local variables
    class Vector v; // r1+0x18
    class Vector v2; // r1+0xC
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137980
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137990
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x801379A0
static // total size: 0x8
struct {} tPointCamera::__RTTI; // size: 0x8, address: 0x801379A8
static // total size: 0x8
struct {} ViewerCamera::__RTTI; // size: 0x8, address: 0x801379B0



