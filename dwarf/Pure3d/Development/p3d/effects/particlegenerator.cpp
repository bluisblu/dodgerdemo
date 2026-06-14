/*
    Compile unit: D:\Pure3d\development\p3d\effects\particlegenerator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006FCD8 -> 0x80070B20
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x801330A8
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B260
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x801330B4
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x801330C0
// total size: 0x20
struct {} tGenerator::__vtable; // size: 0x20, address: 0x801082B0
// total size: 0x20
struct {} tPointGenerator::__vtable; // size: 0x20, address: 0x80108290
// total size: 0x10
class tParticleFloatChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// total size: 0x40
class tPointGenerator : public tGenerator {
    // Functions
    tPointGenerator();

    ~tPointGenerator();

    void SetFrame(float f);

    void Generate(class tParticle * particle);

    void GenerateLocal(class tEmitterInstance * emitter, class tParticle * particle);

    void GenerateWorld(class tEmitterInstance * emitter, class tParticle * particle);

    // Members
protected:
    float radius; // offset 0x18, size 0x4
    float theta; // offset 0x1C, size 0x4
    float phi; // offset 0x20, size 0x4
    float horizSpread; // offset 0x24, size 0x4
    float vertSpread; // offset 0x28, size 0x4
    float radialVar; // offset 0x2C, size 0x4
    class tParticleFloatChannel * horizSpreadChannel; // offset 0x30, size 0x4
    class tParticleFloatChannel * vertSpreadChannel; // offset 0x34, size 0x4
    class tParticleFloatChannel * radialVarChannel; // offset 0x38, size 0x4
};
// Range: 0x8006FCD8 -> 0x8006FD68
// this: r1+0x8
tPointGenerator::tPointGenerator() {
    // References
    // -> struct [anonymous] tPointGenerator::__vtable;
    // -> struct [anonymous] tGenerator::__vtable;
}

// total size: 0x8
class tParticleRenderModule : public tRefCounted {};
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
// total size: 0x4
class tEmitterBlendData {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum p3dParticleMode {
    NORMAL_PARTICLE = 0,
    ATTACHED_PARTICLE = 1,
    PHYSIC_PARTICLE = 2,
};
// total size: 0x0
class tParticleForce {};
// total size: 0x0
class tParticleCollision {};
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
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
// total size: 0x28
class tEffectController : public tAnimationFrameController {
    // Members
protected:
    class tEffect * effect; // offset 0x18, size 0x4
    float relativeSpeed; // offset 0x1C, size 0x4
    float accumulatedTime; // offset 0x20, size 0x4
};
// total size: 0x78
class tParticleSystem : public tEntity {
    // Members
protected:
    int numEmitters; // offset 0x10, size 0x4
    class tEmitter * * emitterArray; // offset 0x14, size 0x4
    float frameTime; // offset 0x18, size 0x4
    float numAnimFrames; // offset 0x1C, size 0x4
    float numOLFrames; // offset 0x20, size 0x4
    float preLoadFrame; // offset 0x24, size 0x4
    unsigned char cycleAnim; // offset 0x28, size 0x1
    unsigned char enableSorting; // offset 0x29, size 0x1
    class Matrix localMatrix; // offset 0x2C, size 0x40
    class tParticleRenderModule * renderModule; // offset 0x6C, size 0x4
    unsigned char zTest; // offset 0x70, size 0x1
    unsigned char zWrite; // offset 0x71, size 0x1
    unsigned char fog; // offset 0x72, size 0x1
};
enum p3dParticleBias {
    LIFE_BIAS = 0,
    SPEED_BIAS = 1,
    WEIGHT_BIAS = 2,
    GRAVITY_BIAS = 3,
    DRAG_BIAS = 4,
    EMISSION_BIAS = 5,
    SIZE_BIAS = 6,
    SPIN_BIAS = 7,
};
// total size: 0x80
class tParticleSystemInstance : public tEffect {
    // Members
protected:
    unsigned char update; // offset 0x10, size 0x1
    unsigned char visible; // offset 0x11, size 0x1
    class tParticleSystem * parentSystem; // offset 0x14, size 0x4
    int numEmitters; // offset 0x18, size 0x4
    class tEmitterInstance * * emitterArray; // offset 0x1C, size 0x4
    int * emitterDrawOrder; // offset 0x20, size 0x4
    class Matrix localMatrix; // offset 0x24, size 0x40
    float frameTime; // offset 0x64, size 0x4
    float numAnimFrames; // offset 0x68, size 0x4
    float numOLFrames; // offset 0x6C, size 0x4
    float preLoadFrame; // offset 0x70, size 0x4
    unsigned char cycleAnim; // offset 0x74, size 0x1
    unsigned char enableSorting; // offset 0x75, size 0x1
    float deltaFrame; // offset 0x78, size 0x4
    float frame; // offset 0x7C, size 0x4
};
// total size: 0x40
class tEmitter : public tRefCounted {
    // Members
protected:
    class tEmitterBlendData * * blendStates; // offset 0x8, size 0x4
    int numBlendStates; // offset 0xC, size 0x4
    enum p3dParticleMode particleMode; // offset 0x10, size 0x4
    enum p3dParticleType particleType; // offset 0x14, size 0x4
    class tParticleForce * * forces; // offset 0x18, size 0x4
    int numForces; // offset 0x1C, size 0x4
    class tParticleCollision * * collisions; // offset 0x20, size 0x4
    int numCollisions; // offset 0x24, size 0x4
    class tParticleRenderModule * renderModule; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    class tParticleSystem * mySystem; // offset 0x30, size 0x4
    unsigned long long uid; // offset 0x38, size 0x8
};
// total size: 0x13C
class tEmitterInstance : public tParticle {
    // Members
protected:
    class Matrix worldMatrix; // offset 0x64, size 0x40
    class Matrix animMatrix; // offset 0xA4, size 0x40
    class Matrix localMatrix; // offset 0xE4, size 0x40
    float blendRatio; // offset 0x124, size 0x4
    int blendState; // offset 0x128, size 0x4
    class tParticleArray * particles; // offset 0x12C, size 0x4
    class tEmitter * parentEmitter; // offset 0x130, size 0x4
    class tParticleSystemInstance * parentParticleSystemInstance; // offset 0x134, size 0x4
    unsigned int * flags; // offset 0x138, size 0x4
};
// total size: 0x18
class tGenerator : public tEntity {
    // Members
protected:
    float frame; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// Range: 0x8006FD68 -> 0x8006FE04
// this: r30
tPointGenerator::~tPointGenerator() {
    // References
    // -> struct [anonymous] tGenerator::__vtable;
    // -> struct [anonymous] tPointGenerator::__vtable;
}

// Range: 0x8006FE04 -> 0x8006FE60
// this: r31
void tPointGenerator::SetFrame(float f /* r1+0xC */) {}

// Range: 0x8006FE60 -> 0x8006FEDC
// this: r30
void tPointGenerator::Generate(class tParticle * particle /* r31 */) {
    // Local variables
    float newTheta; // f31
    float newPhi; // f3
}

// Range: 0x8006FEDC -> 0x8006FF70
// this: r30
void tPointGenerator::GenerateLocal(class tEmitterInstance * emitter /* r4 */, class tParticle * particle /* r31 */) {}

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
// Range: 0x8006FF70 -> 0x800700D0
// this: r30
void tPointGenerator::GenerateWorld(class tEmitterInstance * emitter /* r29 */, class tParticle * particle /* r31 */) {
    // Local variables
    class Matrix transform; // r1+0xA0
}

// total size: 0x20
struct {} tPlaneGenerator::__vtable; // size: 0x20, address: 0x80108244
// total size: 0x8
class Randomizer {
    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
// total size: 0x70
class tPlaneGenerator : public tGenerator {
    // Functions
    tPlaneGenerator();

    ~tPlaneGenerator();

    void SetFrame(float f);

    void Generate(class tParticle * particle);

    void GenerateLocal(class tEmitterInstance * emitter, class tParticle * particle);

    void GenerateWorld(class tEmitterInstance * emitter, class tParticle * particle);

    // Members
protected:
    float radius; // offset 0x18, size 0x4
    float theta; // offset 0x1C, size 0x4
    float phi; // offset 0x20, size 0x4
    float horizSpread; // offset 0x24, size 0x4
    float vertSpread; // offset 0x28, size 0x4
    float radialVar; // offset 0x2C, size 0x4
    class Vector planeU; // offset 0x30, size 0xC
    class Vector planeV; // offset 0x3C, size 0xC
    class Vector offset; // offset 0x48, size 0xC
    class tParticleFloatChannel * widthChannel; // offset 0x54, size 0x4
    class tParticleFloatChannel * heightChannel; // offset 0x58, size 0x4
    class tParticleFloatChannel * horizSpreadChannel; // offset 0x5C, size 0x4
    class tParticleFloatChannel * vertSpreadChannel; // offset 0x60, size 0x4
    class tParticleFloatChannel * radialVarChannel; // offset 0x64, size 0x4
    class Randomizer * randomGenerator; // offset 0x68, size 0x4
};
// Range: 0x800700D0 -> 0x800701B4
// this: r1+0x8
tPlaneGenerator::tPlaneGenerator() {
    // References
    // -> struct [anonymous] tPlaneGenerator::__vtable;
    // -> struct [anonymous] tGenerator::__vtable;
}

// Range: 0x800701B4 -> 0x80070274
// this: r30
tPlaneGenerator::~tPlaneGenerator() {
    // References
    // -> struct [anonymous] tGenerator::__vtable;
    // -> struct [anonymous] tPlaneGenerator::__vtable;
}

// Range: 0x80070274 -> 0x80070348
// this: r31
void tPlaneGenerator::SetFrame(float f /* r1+0xC */) {}

// Range: 0x80070348 -> 0x8007045C
// this: r30
void tPlaneGenerator::Generate(class tParticle * particle /* r31 */) {
    // Local variables
    float scale; // r1+0x8
    float newTheta; // f29
    float newPhi; // f3
}

// Range: 0x8007045C -> 0x80070508
// this: r30
void tPlaneGenerator::GenerateLocal(class tEmitterInstance * emitter /* r4 */, class tParticle * particle /* r31 */) {}

// Range: 0x80070508 -> 0x800706F8
// this: r30
void tPlaneGenerator::GenerateWorld(class tEmitterInstance * emitter /* r29 */, class tParticle * particle /* r31 */) {
    // Local variables
    class Matrix transform; // r1+0xAC
}

// total size: 0x20
struct {} tSphereGenerator::__vtable; // size: 0x20, address: 0x801081F8
// total size: 0x28
class tSphereGenerator : public tGenerator {
    // Functions
    tSphereGenerator();

    ~tSphereGenerator();

    void SetFrame(float f);

    void Generate(class tParticle * particle);

    void GenerateLocal(class tEmitterInstance * emitter, class tParticle * particle);

    void GenerateWorld(class tEmitterInstance * emitter, class tParticle * particle);

    // Members
protected:
    float radius; // offset 0x18, size 0x4
    float radialVar; // offset 0x1C, size 0x4
    class tParticleFloatChannel * radiusChannel; // offset 0x20, size 0x4
    class tParticleFloatChannel * radialVarChannel; // offset 0x24, size 0x4
};
// Range: 0x800706F8 -> 0x80070764
// this: r31
tSphereGenerator::tSphereGenerator() {
    // References
    // -> struct [anonymous] tSphereGenerator::__vtable;
    // -> struct [anonymous] tGenerator::__vtable;
}

// Range: 0x80070764 -> 0x800707F4
// this: r30
tSphereGenerator::~tSphereGenerator() {
    // References
    // -> struct [anonymous] tGenerator::__vtable;
    // -> struct [anonymous] tSphereGenerator::__vtable;
}

// Range: 0x800707F4 -> 0x80070840
// this: r31
void tSphereGenerator::SetFrame(float f /* r1+0xC */) {}

// Range: 0x80070840 -> 0x800708DC
// this: r30
void tSphereGenerator::Generate(class tParticle * particle /* r31 */) {
    // Local variables
    float theta; // f31
    float phi; // f3
}

// Range: 0x800708DC -> 0x80070980
// this: r30
void tSphereGenerator::GenerateLocal(class tEmitterInstance * emitter /* r4 */, class tParticle * particle /* r31 */) {}

// Range: 0x80070980 -> 0x80070AE4
// this: r30
void tSphereGenerator::GenerateWorld(class tEmitterInstance * emitter /* r29 */, class tParticle * particle /* r31 */) {
    // Local variables
    class Matrix transform; // r1+0xA0
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139000
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139010
static // total size: 0x8
struct {} tGenerator::__RTTI; // size: 0x8, address: 0x80139018
static // total size: 0x8
struct {} tSphereGenerator::__RTTI; // size: 0x8, address: 0x80139020
static // total size: 0x8
struct {} tPlaneGenerator::__RTTI; // size: 0x8, address: 0x80139028
static // total size: 0x8
struct {} tPointGenerator::__RTTI; // size: 0x8, address: 0x80139030



