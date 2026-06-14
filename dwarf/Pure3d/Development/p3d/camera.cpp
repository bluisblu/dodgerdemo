/*
    Compile unit: D:\Pure3d\development\p3d\camera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80039468 -> 0x80039D44
*/
// total size: 0x60
struct {} tCamera::__vtable; // size: 0x60, address: 0x80100824
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
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xF0
class tCamera : public tEntity {
    // Functions
    tCamera();

    ~tCamera();

    void SetFOV(float newFov, float newAspect);

    void GetFOV(float * fovOut, float * aspectOut);

    void SetNearPlane(float newNear);

    void SetFarPlane(float newFar);

    float GetNearPlane();

    float GetFarPlane();

    class Matrix * GetWorldToCameraMatrix();

    class Matrix * GetCameraToWorldMatrix();

    void CameraToWorld(const class Vector & cam, class Vector * world);

    void WorldToCamera(const class Vector & world, class Vector * camera);

    unsigned char CameraToView(const class Vector & cam, class Vector * view);

    unsigned char WorldToView(const class Vector & world, class Vector * view);

    unsigned char PointVisibleCamera(const class Vector & camera);

    unsigned char SphereVisibleCamera(const class Vector & camera, float radius);

    unsigned char PointVisible(const class Vector & world);

    unsigned char SphereVisible(const class Vector & c, float radius);

    unsigned int PointClipCode(const class Vector & cameraSpacePoint);

    void GetWorldPosition(class Vector * v);

    void SetCameraMatrix(class Matrix * CameraMatrix);

    void SetState();

    void Update();

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
// Range: 0x80039468 -> 0x800394E4
// this: r1+0x8
tCamera::tCamera() {
    // References
    // -> struct [anonymous] tCamera::__vtable;
}

// Range: 0x800394E4 -> 0x80039548
// this: r30
tCamera::~tCamera() {
    // References
    // -> struct [anonymous] tCamera::__vtable;
}

// Range: 0x80039548 -> 0x80039648
// this: r31
void tCamera::SetFOV(float newFov /* r1+0xC */, float newAspect /* r1+0x10 */) {
    // Local variables
    float fovy; // f28
    float fovx; // f30
}

// Range: 0x80039648 -> 0x8003965C
// this: r1+0x0
void tCamera::GetFOV(float * fovOut /* r1+0x4 */, float * aspectOut /* r1+0x8 */) {}

// Range: 0x8003965C -> 0x80039664
// this: r1+0x0
void tCamera::SetNearPlane(float newNear /* r1+0x4 */) {}

// Range: 0x80039664 -> 0x8003966C
// this: r1+0x0
void tCamera::SetFarPlane(float newFar /* r1+0x4 */) {}

// Range: 0x8003966C -> 0x80039674
// this: r1+0x0
float tCamera::GetNearPlane() {}

// Range: 0x80039674 -> 0x8003967C
// this: r1+0x0
float tCamera::GetFarPlane() {}

// Range: 0x8003967C -> 0x800396C8
// this: r31
class Matrix * tCamera::GetWorldToCameraMatrix() {}

// Range: 0x800396C8 -> 0x80039714
// this: r31
class Matrix * tCamera::GetCameraToWorldMatrix() {}

// Range: 0x80039714 -> 0x80039784
// this: r29
void tCamera::CameraToWorld(const class Vector & cam /* r30 */, class Vector * world /* r31 */) {}

// Range: 0x80039784 -> 0x800397F4
// this: r29
void tCamera::WorldToCamera(const class Vector & world /* r30 */, class Vector * camera /* r31 */) {}

// Range: 0x800397F4 -> 0x80039858
// this: r1+0x0
unsigned char tCamera::CameraToView(const class Vector & cam /* r1+0x4 */, class Vector * view /* r1+0x8 */) {
    // Local variables
    float ooz; // f3
}

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
// Range: 0x80039858 -> 0x800398BC
// this: r30
unsigned char tCamera::WorldToView(const class Vector & world /* r4 */, class Vector * view /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x14
}

// Range: 0x800398BC -> 0x800398F4
// this: r3
unsigned char tCamera::PointVisibleCamera(const class Vector & camera /* r4 */) {}

// Range: 0x800398F4 -> 0x800399CC
// this: r1+0x0
unsigned char tCamera::SphereVisibleCamera(const class Vector & camera /* r1+0x4 */, float radius /* r1+0x8 */) {}

// Range: 0x800399CC -> 0x80039A20
// this: r31
unsigned char tCamera::PointVisible(const class Vector & world /* r4 */) {
    // Local variables
    class Vector camera; // r1+0x10
}

// Range: 0x80039A20 -> 0x80039A84
// this: r31
unsigned char tCamera::SphereVisible(const class Vector & c /* r4 */, float radius /* f31 */) {
    // Local variables
    class Vector centre; // r1+0x14
}

// Range: 0x80039A84 -> 0x80039B1C
// this: r1+0x0
unsigned int tCamera::PointClipCode(const class Vector & cameraSpacePoint /* r1+0x4 */) {
    // Local variables
    unsigned int clip; // r1+0x0
    float x; // f2
    float y; // f3
    float z; // r1+0x0
}

// Range: 0x80039B1C -> 0x80039B88
// this: r30
void tCamera::GetWorldPosition(class Vector * v /* r31 */) {}

// Range: 0x80039B88 -> 0x80039C28
// this: r3
void tCamera::SetCameraMatrix(class Matrix * CameraMatrix /* r1+0xC */) {}

// Range: 0x80039C28 -> 0x80039C9C
// this: r31
void tCamera::SetState() {}

// Range: 0x80039C9C -> 0x80039D44
// this: r5
void tCamera::Update() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137BD0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137BE0
static // total size: 0x8
struct {} tCamera::__RTTI; // size: 0x8, address: 0x80137BE8



