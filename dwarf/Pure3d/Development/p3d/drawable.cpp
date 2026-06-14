/*
    Compile unit: D:\Pure3d\development\p3d\drawable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003AF64 -> 0x8003BB00
*/
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
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
static struct tBox3D dummyBox; // size: 0x18, address: 0x80132F50
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
static struct tSphere dummySphere; // size: 0x10, address: 0x80132F68
static unsigned char isFirst$229; // size: 0x1, address: 0x8013B230
static signed char init$230; // size: 0x1, address: 0x8013B231
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
// total size: 0x10
class tDrawable : public tEntity {
    // Functions
    void DisplayBoundingBox(struct pddiColour & colour);
};
// Range: 0x8003AF64 -> 0x8003AFEC
void tDrawable::GetBoundingBox(struct tBox3D * box /* r1+0x4 */) {
    // References
    // -> static struct tBox3D dummyBox;
    // -> static unsigned char isFirst$229;
    // -> static signed char init$230;
}

static unsigned char isFirst$244; // size: 0x1, address: 0x8013B232
static signed char init$245; // size: 0x1, address: 0x8013B233
// Range: 0x8003AFEC -> 0x8003B05C
void tDrawable::GetBoundingSphere(struct tSphere * sphere /* r1+0x4 */) {
    // References
    // -> static struct tSphere dummySphere;
    // -> static unsigned char isFirst$244;
    // -> static signed char init$245;
}

// ERROR: Failed to emit tag 1E3214 (GlobalSubroutine)
// total size: 0x0
class gcContext {};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x3C
struct gcStreamVertex {
    // Members
    class pddiVector pos; // offset 0x0, size 0xC
    class pddiVector norm; // offset 0xC, size 0xC
    class pddiVector2 uv[4]; // offset 0x18, size 0x20
    struct pddiColour col; // offset 0x38, size 0x4
};
// total size: 0x90
class gcPrimStream {
    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
// Range: 0x8003BAF8 -> 0x8003BAFC
void tDrawable::DisplayBoundingSphere() {}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80137C58
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137C60
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137C70
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80137C78
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



