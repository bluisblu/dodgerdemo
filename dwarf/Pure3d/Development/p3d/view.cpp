/*
    Compile unit: D:\Pure3d\development\p3d\view.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800558FC -> 0x80055FB0
*/
// total size: 0xC
struct {} tView::__vtable; // size: 0xC, address: 0x801032A8
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
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0xC0
class tView : public tRefCounted {
    // Functions
    tView();

    ~tView();

    void SetCamera(class tCamera * newCamera);

    void SetAmbientLight(struct pddiColour & colour);

    unsigned int AddLight(class tLight * light);

    void RemoveAllLights();

    void BeginRender();

    void EndRender();

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
// Range: 0x800558FC -> 0x80055A10
// this: r31
tView::tView() {
    // Local variables
    int i; // r1+0x8

    // References
    // -> struct [anonymous] tView::__vtable;
}

// Range: 0x80055A10 -> 0x80055A8C
// this: r30
tView::~tView() {
    // References
    // -> struct [anonymous] tView::__vtable;
}

// Range: 0x80055A8C -> 0x80055AE4
// this: r30
void tView::SetCamera(class tCamera * newCamera /* r31 */) {}

// Range: 0x80055AE4 -> 0x80055AF0
// this: r1+0x0
void tView::SetAmbientLight(struct pddiColour & colour /* r1+0x4 */) {}

// Range: 0x80055AF0 -> 0x80055B40
// this: r3
unsigned int tView::AddLight(class tLight * light /* r1+0x4 */) {
    // Local variables
    int i; // r7
}

// Range: 0x80055B40 -> 0x80055BA4
// this: r3
void tView::RemoveAllLights() {
    // Local variables
    int i; // r29
}

// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
// Range: 0x80055BA4 -> 0x80055F40
// this: r31
void tView::BeginRender() {
    // Local variables
    class pddiRect viewRect; // r1+0x140
    class Matrix * w2c; // r27
    class Matrix * c2w; // r28
    int lightHandle; // r28
    int i; // r29
}

// Range: 0x80055F40 -> 0x80055FB0
// this: r31
void tView::EndRender() {
    // Local variables
    int i; // r30
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138418
static // total size: 0x8
struct {} tView::__RTTI; // size: 0x8, address: 0x80138420



