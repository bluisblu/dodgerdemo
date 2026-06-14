/*
    Compile unit: D:\Pure3d\development\p3d\effects\particlecollision.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007E06C -> 0x8007FA7C
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x801331D8
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B2B0
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x801331E4
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x801331F0
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x28
struct {} tParticleCollision::__vtable; // size: 0x28, address: 0x80109264
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
// total size: 0x10
class tDrawable : public tEntity {};
enum p3dParticleCollisionMode {
    KILL_PARTICLE = 0,
    REFLECT_PARTICLE = 1,
};
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
enum p3dParticleType {
    POINT_PARTICLE = 0,
    LINE_PARTICLE = 1,
    SPRITE_PARTICLE = 2,
    NO_PARTICLE = 3,
};
// total size: 0x20
class tParticleArray : public tRefCounted {
    // Members
protected:
    int maxNumParticles; // offset 0x8, size 0x4
    int numLiveParticles; // offset 0xC, size 0x4
    int numDeadParticles; // offset 0x10, size 0x4
    class tParticle * * liveParticles; // offset 0x14, size 0x4
    class tParticle * * deadParticles; // offset 0x18, size 0x4
    enum p3dParticleType particleType; // offset 0x1C, size 0x4
};
// total size: 0x98
class tParticleCollision : public tDrawable {
    // Functions
    tParticleCollision();

    ~tParticleCollision();

    void Update(const class Matrix * w);

    void Display();

    // Members
protected:
    unsigned char update; // offset 0x10, size 0x1
    unsigned char enabled; // offset 0x11, size 0x1
    enum p3dParticleCollisionMode collisionMode; // offset 0x14, size 0x4
    class Matrix localMatrix; // offset 0x18, size 0x40
    class Matrix worldMatrix; // offset 0x58, size 0x40
};
// Range: 0x8007E06C -> 0x8007E0E0
// this: r1+0x8
tParticleCollision::tParticleCollision() {
    // References
    // -> struct [anonymous] tParticleCollision::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// Range: 0x8007E0E0 -> 0x8007E154
// this: r30
tParticleCollision::~tParticleCollision() {
    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] tParticleCollision::__vtable;
}

// Range: 0x8007E154 -> 0x8007E29C
// this: r31
void tParticleCollision::Update(const class Matrix * w /* r1+0xC */) {}

// Range: 0x8007E29C -> 0x8007E2A0
void tParticleCollision::UpdateParticles() {}

// Range: 0x8007E2A0 -> 0x8007E2F4
// this: r31
void tParticleCollision::Display() {}

// total size: 0x28
struct {} tParticlePlaneCollision::__vtable; // size: 0x28, address: 0x8010923C
// total size: 0x100
class tParticlePlaneCollision : public tParticleCollision {
    // Functions
    tParticlePlaneCollision();

    ~tParticlePlaneCollision();

    void UpdateFinite(const class Matrix * world);

    void Update(const class Matrix * world);

    void UpdateParticlesInfinite(class tParticleArray * particles);

    void UpdateParticlesFinite(class tParticleArray * particles);

    void UpdateParticles(class tParticleArray * particles, float deltaFrame);

    // Members
protected:
    unsigned char infinitePlane; // offset 0x98, size 0x1
    float halfWidth; // offset 0x9C, size 0x4
    float halfHeight; // offset 0xA0, size 0x4
    float reflectCoeff; // offset 0xA4, size 0x4
    float frictionCoeff; // offset 0xA8, size 0x4
    class Vector4 sideEqn[4]; // offset 0xAC, size 0x40
    class Vector4 planeEqn; // offset 0xEC, size 0x10
};
// Range: 0x8007E2F4 -> 0x8007E428
// this: r1+0x8
tParticlePlaneCollision::tParticlePlaneCollision() {
    // References
    // -> struct [anonymous] tParticlePlaneCollision::__vtable;
    // -> struct [anonymous] tParticleCollision::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// Range: 0x8007E428 -> 0x8007E4AC
// this: r30
tParticlePlaneCollision::~tParticlePlaneCollision() {
    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] tParticleCollision::__vtable;
    // -> struct [anonymous] tParticlePlaneCollision::__vtable;
}

// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x8007E4AC -> 0x8007ED2C
// this: r31
void tParticlePlaneCollision::UpdateFinite(const class Matrix * world /* r1+0xC */) {
    // Local variables
    class Vector v1; // r1+0x478
    class Vector v2; // r1+0x46C
    class Vector v3; // r1+0x460
    class Matrix transform; // r1+0x420
}

// Range: 0x8007ED2C -> 0x8007F04C
// this: r31
void tParticlePlaneCollision::Update(const class Matrix * world /* r4 */) {}

// Range: 0x8007F04C -> 0x8007F42C
// this: r31
void tParticlePlaneCollision::UpdateParticlesInfinite(class tParticleArray * particles /* r4 */) {
    // Local variables
    int i; // r1+0x8
    const class Vector & positionOld; // r6
    const class Vector & position; // r7
    const float & size; // r1+0x8
    float particleDistanceOld; // f2
    class Vector normal; // r1+0x54
    int i; // r27
    class Vector & position; // r26
    class Vector & positionOld; // r25
    class Vector & velocity; // r24
    float & size; // r1+0x8
    float particleDistanceOld; // f28
    float particleDistance; // r1+0x8
    float dotNI; // r1+0x8
    float scale; // f6
    float scale1; // f9
    float scale2; // f10
}

// Range: 0x8007F42C -> 0x8007FA00
// this: r31
void tParticlePlaneCollision::UpdateParticlesFinite(class tParticleArray * particles /* r4 */) {
    // Local variables
    int i; // r1+0x8
    const class Vector & position; // r6
    const class Vector & positionOld; // r7
    const float & size; // r1+0x8
    float particleDistanceOld; // f6
    unsigned char valid; // r1+0x8
    int j; // r1+0x8
    class Vector normal; // r1+0x54
    int i; // r27
    class Vector & position; // r26
    class Vector & positionOld; // r25
    class Vector & velocity; // r24
    float & size; // r1+0x8
    float particleDistanceOld; // f28
    float particleDistance; // r1+0x8
    unsigned char valid; // r1+0x8
    int j; // r1+0x8
    float dotNI; // r1+0x8
    float scale; // f6
    float scale1; // f9
    float scale2; // f10
}

// Range: 0x8007FA00 -> 0x8007FA40
// this: r3
void tParticlePlaneCollision::UpdateParticles(class tParticleArray * particles /* r4 */, float deltaFrame /* f1 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139200
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139210
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80139218
static // total size: 0x8
struct {} tParticleCollision::__RTTI; // size: 0x8, address: 0x80139220
static // total size: 0x8
struct {} tParticlePlaneCollision::__RTTI; // size: 0x8, address: 0x80139228



