/*
    Compile unit: D:\Pure3d\development\p3d\effects\particlearray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006EE1C -> 0x8006F774
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80133080
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B258
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8013308C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133098
// total size: 0x18
struct {} tParticleArray::__vtable; // size: 0x18, address: 0x80108174
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum p3dParticleType {
    POINT_PARTICLE = 0,
    LINE_PARTICLE = 1,
    SPRITE_PARTICLE = 2,
    NO_PARTICLE = 3,
};
// total size: 0x20
class tParticleArray : public tRefCounted {
    // Functions
    ~tParticleArray();

    void UpdateParticleLife(float deltaFrame);

    void RefreshParticleArray();

    // Members
protected:
    int maxNumParticles; // offset 0x8, size 0x4
    int numLiveParticles; // offset 0xC, size 0x4
    int numDeadParticles; // offset 0x10, size 0x4
    class tParticle * * liveParticles; // offset 0x14, size 0x4
    class tParticle * * deadParticles; // offset 0x18, size 0x4
    enum p3dParticleType particleType; // offset 0x1C, size 0x4
};
// Range: 0x8006EE1C -> 0x8006EE90
// this: r30
tParticleArray::~tParticleArray() {
    // References
    // -> struct [anonymous] tParticleArray::__vtable;
}

// Range: 0x8006EE90 -> 0x8006EEE4
// this: r3
void tParticleArray::UpdateParticleLife(float deltaFrame /* r1+0xC */) {
    // Local variables
    int i; // r6
}

// Range: 0x8006EEE4 -> 0x8006EF5C
// this: r1+0x0
void tParticleArray::RefreshParticleArray() {
    // Local variables
    int curr; // r8
    int prev; // r9
}

// total size: 0x18
struct {} tPointParticleArray::__vtable; // size: 0x18, address: 0x8010815C
// total size: 0x24
class tPointParticleArray : public tParticleArray {
    // Functions
    tPointParticleArray();

    ~tPointParticleArray();

    void CreateParticles(int n);

    void KillAllParticles();

    class tParticle * operator[](int i) const;

    // Members
protected:
    class tPointParticle * particles; // offset 0x20, size 0x4
};
// Range: 0x8006EF5C -> 0x8006EFCC
// this: r31
tPointParticleArray::tPointParticleArray() {
    // References
    // -> struct [anonymous] tPointParticleArray::__vtable;
    // -> struct [anonymous] tParticleArray::__vtable;
}

// Range: 0x8006EFCC -> 0x8006F064
// this: r30
tPointParticleArray::~tPointParticleArray() {
    // References
    // -> struct [anonymous] tParticleArray::__vtable;
    // -> struct [anonymous] tPointParticleArray::__vtable;
}

// total size: 0x14
struct {} tPointParticle::__vtable; // size: 0x14, address: 0x80108120
// total size: 0x14
struct {} tParticle::__vtable; // size: 0x14, address: 0x8010810C
// total size: 0x74
class tPointParticle : public tParticle {
    // Members
public:
    struct pddiColour colour; // offset 0x64, size 0x4
    struct pddiColour colourInit; // offset 0x68, size 0x4
    int colourVar; // offset 0x6C, size 0x4
    float transparencyInit; // offset 0x70, size 0x4
};
// Range: 0x8006F064 -> 0x8006F2BC
// this: r29
void tPointParticleArray::CreateParticles(int n /* r30 */) {
    // Local variables
    int i; // r3
}

// Range: 0x8006F2BC -> 0x8006F338
// this: r1+0x0
void tPointParticleArray::KillAllParticles() {
    // Local variables
    int i; // r6
}

// Range: 0x8006F338 -> 0x8006F348
// this: r1+0x0
class tParticle * tPointParticleArray::operator[](int i /* r1+0x4 */) const {}

// total size: 0x18
struct {} tSpriteParticleArray::__vtable; // size: 0x18, address: 0x801080F4
// total size: 0x24
class tSpriteParticleArray : public tParticleArray {
    // Functions
    tSpriteParticleArray();

    ~tSpriteParticleArray();

    void CreateParticles(int n);

    void KillAllParticles();

    class tParticle * operator[](int i) const;

    // Members
protected:
    class tSpriteParticle * particles; // offset 0x20, size 0x4
};
// Range: 0x8006F348 -> 0x8006F3BC
// this: r31
tSpriteParticleArray::tSpriteParticleArray() {
    // References
    // -> struct [anonymous] tSpriteParticleArray::__vtable;
    // -> struct [anonymous] tParticleArray::__vtable;
}

// Range: 0x8006F3BC -> 0x8006F454
// this: r30
tSpriteParticleArray::~tSpriteParticleArray() {
    // References
    // -> struct [anonymous] tParticleArray::__vtable;
    // -> struct [anonymous] tSpriteParticleArray::__vtable;
}

// total size: 0x14
struct {} tSpriteParticle::__vtable; // size: 0x14, address: 0x8010808C
// total size: 0x80
class tSpriteParticle : public tPointParticle {
    // Members
public:
    int texFrame; // offset 0x74, size 0x4
    float spin; // offset 0x78, size 0x4
    float spinInit; // offset 0x7C, size 0x4
};
// Range: 0x8006F454 -> 0x8006F6AC
// this: r29
void tSpriteParticleArray::CreateParticles(int n /* r30 */) {
    // Local variables
    int i; // r3
}

// Range: 0x8006F6AC -> 0x8006F728
// this: r1+0x0
void tSpriteParticleArray::KillAllParticles() {
    // Local variables
    int i; // r6
}

// Range: 0x8006F728 -> 0x8006F738
// this: r1+0x0
class tParticle * tSpriteParticleArray::operator[](int i /* r1+0x4 */) const {}

static // total size: 0x8
struct {} tParticle::__RTTI; // size: 0x8, address: 0x80138FC8
static // total size: 0x8
struct {} tPointParticle::__RTTI; // size: 0x8, address: 0x80138FD0
static // total size: 0x8
struct {} tSpriteParticle::__RTTI; // size: 0x8, address: 0x80138FD8
// total size: 0x64
class tParticle {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float life; // offset 0x4, size 0x4
    float lifeInit; // offset 0x8, size 0x4
    float weight; // offset 0xC, size 0x4
    float weightInit; // offset 0x10, size 0x4
    float size; // offset 0x14, size 0x4
    float sizeInit; // offset 0x18, size 0x4
    class Vector velocity; // offset 0x1C, size 0xC
    class Vector velocityInit; // offset 0x28, size 0xC
    class Vector acceleration; // offset 0x34, size 0xC
    class Vector position; // offset 0x40, size 0xC
    class Vector positionOld; // offset 0x4C, size 0xC
    class Vector rotation; // offset 0x58, size 0xC
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138FE0
static // total size: 0x8
struct {} tParticleArray::__RTTI; // size: 0x8, address: 0x80138FE8
static // total size: 0x8
struct {} tSpriteParticleArray::__RTTI; // size: 0x8, address: 0x80138FF0
static // total size: 0x8
struct {} tPointParticleArray::__RTTI; // size: 0x8, address: 0x80138FF8



