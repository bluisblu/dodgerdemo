/*
    Compile unit: D:\Pure3d\development\p3d\effects\particleforce.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80076A10 -> 0x80078B44
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80133148
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B280
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x80133154
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133160
float noFallOffTable[1]; // size: 0x4, address: 0x80139148
int noFallOffTableSize; // size: 0x4, address: 0x8013914C
float linearFallOffTable[32]; // size: 0x80, address: 0x80108B40
int linearFallOffTableSize; // size: 0x4, address: 0x80139150
float squaredFallOffTable[16]; // size: 0x40, address: 0x80108BC0
int squaredFallOffTableSize; // size: 0x4, address: 0x80139154
float cubicFallOffTable[16]; // size: 0x40, address: 0x80108C00
int cubicFallOffTableSize; // size: 0x4, address: 0x80139158
float quadricFallOffTable[16]; // size: 0x40, address: 0x80108C40
int quadricFallOffTableSize; // size: 0x4, address: 0x8013915C
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x44
struct {} tParticleForce::__vtable; // size: 0x44, address: 0x80108E18
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
// total size: 0x10
class tEffect : public tDrawable {};
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
// total size: 0xA8
class tParticleForce : public tEffect {
    // Functions
    tParticleForce();

    ~tParticleForce();

    void SetFrame(float f);

    float GetFrame();

    void Reset();

    void Advance(float deltaTime);

    void Update(const class Matrix * w);

    void Display();

    unsigned char LastFrameReached();

    // Members
protected:
    unsigned char update; // offset 0x10, size 0x1
    float frame; // offset 0x14, size 0x4
    float deltaFrame; // offset 0x18, size 0x4
    float frameTime; // offset 0x1C, size 0x4
    float numAnimFrames; // offset 0x20, size 0x4
    unsigned char cycleAnim; // offset 0x24, size 0x1
    unsigned char enabled; // offset 0x25, size 0x1
    class Matrix localMatrix; // offset 0x28, size 0x40
    class Matrix worldMatrix; // offset 0x68, size 0x40
};
// ERROR: Failed to emit tag 4D02C8 (GlobalSubroutine)
// ERROR: Failed to emit tag 4D034E (GlobalSubroutine)
// Range: 0x80076B28 -> 0x80076B2C
void tParticleForce::SetBias() {}

// Range: 0x80076B2C -> 0x80076B34
float tParticleForce::GetBias() {}

// Range: 0x80076B34 -> 0x80076B3C
// this: r1+0x0
void tParticleForce::SetFrame(float f /* r1+0x4 */) {}

// Range: 0x80076B3C -> 0x80076B44
// this: r1+0x0
float tParticleForce::GetFrame() {}

// Range: 0x80076B44 -> 0x80076B7C
// this: r3
void tParticleForce::Reset() {}

// Range: 0x80076B7C -> 0x80076B94
// this: r1+0x0
void tParticleForce::Advance(float deltaTime /* r1+0x4 */) {}

// Range: 0x80076B94 -> 0x80076D20
// this: r31
void tParticleForce::Update(const class Matrix * w /* r1+0xC */) {}

// Range: 0x80076D20 -> 0x80076D24
void tParticleForce::UpdateParticles() {}

// Range: 0x80076D24 -> 0x80076D78
// this: r31
void tParticleForce::Display() {}

// Range: 0x80076D78 -> 0x80076DA4
// this: r1+0x0
unsigned char tParticleForce::LastFrameReached() {}

// total size: 0x44
struct {} tParticlePointForce::__vtable; // size: 0x44, address: 0x80108DD4
// total size: 0x10
class tParticleFloatChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// total size: 0xD0
class tParticlePointForce : public tParticleForce {
    // Functions
    tParticlePointForce();

    ~tParticlePointForce();

    void SetBias(enum p3dParticleForceBias bias, float b);

    float GetBias(enum p3dParticleForceBias bias);

    void SetDistanceFallOffType(enum p3dParticleForceDistanceFallOffType type);

    void Update(const class Matrix * world);

    void UpdateParticles(class tParticleArray * particles, float deltaFrame);

    // Static members
    static int quadricFallOffTableSize; // size: 0x4
    static float quadricFallOffTable[16]; // size: 0x40
    static int cubicFallOffTableSize; // size: 0x4
    static float cubicFallOffTable[16]; // size: 0x40
    static int squaredFallOffTableSize; // size: 0x4
    static float squaredFallOffTable[16]; // size: 0x40
    static int linearFallOffTableSize; // size: 0x4
    static float linearFallOffTable[32]; // size: 0x80
    static int noFallOffTableSize; // size: 0x4
    static float noFallOffTable[1]; // size: 0x4

    // Members
protected:
    float magnitudeBias; // offset 0xA8, size 0x4
    float distanceFallOffBias; // offset 0xAC, size 0x4
    enum p3dParticleForceDistanceFallOffType distanceFallOffType; // offset 0xB0, size 0x4
    float * distanceFallOffTable; // offset 0xB4, size 0x4
    int distanceFallOffTableSize; // offset 0xB8, size 0x4
    float currDistFallOff; // offset 0xBC, size 0x4
    float currMagnitude; // offset 0xC0, size 0x4
    class tParticleFloatChannel * distanceFallOffChannel; // offset 0xC4, size 0x4
    class tParticleFloatChannel * magnitudeChannel; // offset 0xC8, size 0x4
};
// ERROR: Failed to emit tag 4D19BF (GlobalSubroutine)
// ERROR: Failed to emit tag 4D1A56 (GlobalSubroutine)
enum p3dParticleForceBias {
    MAGNITUDE_BIAS = 0,
    DISTANCE_FALLOFF_BIAS = 1,
};
// Range: 0x80076F38 -> 0x80076F6C
// this: r1+0x0
void tParticlePointForce::SetBias(enum p3dParticleForceBias bias /* r1+0x4 */, float b /* r1+0x8 */) {}

// Range: 0x80076F6C -> 0x8007702C
// this: r3
float tParticlePointForce::GetBias(enum p3dParticleForceBias bias /* r4 */) {}

enum p3dParticleForceDistanceFallOffType {
    NO_FALLOFF = 0,
    LINEAR_FALLOFF = 1,
    SQUARED_FALLOFF = 2,
    CUBIC_FALLOFF = 3,
    QUADRIC_FALLOFF = 4,
};
// Range: 0x8007702C -> 0x800770C8
// this: r1+0x0
void tParticlePointForce::SetDistanceFallOffType(enum p3dParticleForceDistanceFallOffType type /* r1+0x4 */) {
    // References
    // -> int quadricFallOffTableSize;
    // -> float quadricFallOffTable[16];
    // -> int cubicFallOffTableSize;
    // -> float cubicFallOffTable[16];
    // -> int squaredFallOffTableSize;
    // -> float squaredFallOffTable[16];
    // -> int linearFallOffTableSize;
    // -> float linearFallOffTable[32];
    // -> int noFallOffTableSize;
    // -> float noFallOffTable[1];
}

// Range: 0x800770C8 -> 0x80077284
// this: r31
void tParticlePointForce::Update(const class Matrix * world /* r1+0xC */) {}

// Range: 0x80077284 -> 0x800775FC
// this: r29
void tParticlePointForce::UpdateParticles(class tParticleArray * particles /* r1+0xC */, float deltaFrame /* f31 */) {
    // Local variables
    int i; // r1+0x8
    float scale; // f8
    float maxDistanceSq; // f3
    float tableSize; // f4
    int i; // r1+0x8
    float particleDistanceSq; // r1+0x8
    float scale; // f8
}

// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x44
struct {} tParticlePlaneForce::__vtable; // size: 0x44, address: 0x80108D90
// total size: 0x138
class tParticlePlaneForce : public tParticlePointForce {
    // Functions
    tParticlePlaneForce();

    ~tParticlePlaneForce();

    void UpdateFinite(const class Matrix * world);

    void Update(const class Matrix * world);

    void UpdateParticlesInfinite(class tParticleArray * particles, float deltaFrame);

    void UpdateParticlesFinite(class tParticleArray * particles, float deltaFrame);

    void UpdateParticles(class tParticleArray * particles, float deltaFrame);

    // Members
protected:
    unsigned char infinitePlane; // offset 0xD0, size 0x1
    float currHalfWidth; // offset 0xD4, size 0x4
    float currHalfHeight; // offset 0xD8, size 0x4
    class Vector4 sideEqn[4]; // offset 0xDC, size 0x40
    class Vector4 planeEqn; // offset 0x11C, size 0x10
    class tParticleFloatChannel * widthChannel; // offset 0x12C, size 0x4
    class tParticleFloatChannel * heightChannel; // offset 0x130, size 0x4
};
// Range: 0x80077680 -> 0x800777A8
// this: r1+0x8
tParticlePlaneForce::tParticlePlaneForce() {
    // References
    // -> struct [anonymous] tParticlePlaneForce::__vtable;
    // -> int noFallOffTableSize;
    // -> float noFallOffTable[1];
    // -> struct [anonymous] tParticlePointForce::__vtable;
}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// ERROR: Failed to emit tag 4D4E09 (GlobalSubroutine)
// Range: 0x80077874 -> 0x80078028
// this: r31
void tParticlePlaneForce::UpdateFinite(const class Matrix * world /* r4 */) {
    // Local variables
    class Vector v1; // r1+0x480
    class Vector v2; // r1+0x474
    class Vector v3; // r1+0x468
    class Matrix transform; // r1+0x428
}

// Range: 0x80078028 -> 0x80078260
// this: r31
void tParticlePlaneForce::Update(const class Matrix * world /* r4 */) {}

// Range: 0x80078260 -> 0x80078738
// this: r1+0x8
void tParticlePlaneForce::UpdateParticlesInfinite(class tParticleArray * particles /* r1+0xC */, float deltaFrame /* r1+0x10 */) {
    // Local variables
    int i; // r6
    float scale; // f3
    float tableSize; // f2
    int i; // r1+0x8
    float particleDistance; // r1+0x8
    float scale; // f5
}

// Range: 0x80078738 -> 0x80078AC8
// this: r1+0x8
void tParticlePlaneForce::UpdateParticlesFinite(class tParticleArray * particles /* r1+0xC */, float deltaFrame /* r1+0x10 */) {
    // Local variables
    int i; // r1+0x8
    class Vector & pos; // r4
    unsigned char valid; // r1+0x8
    int j; // r1+0x8
    float scale; // f4
    float tableSize; // f3
    int i; // r1+0x8
    class Vector & pos; // r4
    float particleDistance; // r1+0x8
    unsigned char valid; // r1+0x8
    int j; // r1+0x8
    float scale; // f5
}

// Range: 0x80078AC8 -> 0x80078B08
// this: r3
void tParticlePlaneForce::UpdateParticles(class tParticleArray * particles /* r4 */, float deltaFrame /* f1 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139160
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139170
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80139178
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x80139188
static // total size: 0x8
struct {} tParticleForce::__RTTI; // size: 0x8, address: 0x80139190
static // total size: 0x8
struct {} tParticlePointForce::__RTTI; // size: 0x8, address: 0x80139198
static // total size: 0x8
struct {} tParticlePlaneForce::__RTTI; // size: 0x8, address: 0x801391A0



