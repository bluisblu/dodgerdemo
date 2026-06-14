/*
    Compile unit: D:\Pure3d\development\p3d\effects\particlesystem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80075630 -> 0x800766D4
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x801330F8
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B270
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x80133104
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133110
// total size: 0x14
struct {} tParticleSystem::__vtable; // size: 0x14, address: 0x80108B2C
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
enum p3dParticleType {
    POINT_PARTICLE = 0,
    LINE_PARTICLE = 1,
    SPRITE_PARTICLE = 2,
    NO_PARTICLE = 3,
};
// total size: 0x0
class tParticleForce {};
// total size: 0x0
class tParticleCollision {};
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
// total size: 0x78
class tParticleSystem : public tEntity {
    // Functions
    tParticleSystem();

    ~tParticleSystem();

    class tEffectController * CreateParticleSystemInstance(const char * newName);

    class tParticleSystem * CloneParticleSystem(const char * newName);

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
// Range: 0x80075630 -> 0x800756BC
// this: r1+0x8
tParticleSystem::tParticleSystem() {
    // References
    // -> struct [anonymous] tParticleSystem::__vtable;
}

// Range: 0x800756BC -> 0x80075778
// this: r26
tParticleSystem::~tParticleSystem() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] tParticleSystem::__vtable;
}

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
// total size: 0x28
class tEffectController : public tAnimationFrameController {
    // Members
protected:
    class tEffect * effect; // offset 0x18, size 0x4
    float relativeSpeed; // offset 0x1C, size 0x4
    float accumulatedTime; // offset 0x20, size 0x4
};
// Range: 0x80075778 -> 0x8007582C
// this: r30
class tEffectController * tParticleSystem::CreateParticleSystemInstance(const char * newName /* r29 */) {
    // Local variables
    class tEffectController * instanceFC; // r31
    class tParticleSystemInstance * instancePS; // r30
}

// Range: 0x8007582C -> 0x80075990
// this: r30
class tParticleSystem * tParticleSystem::CloneParticleSystem(const char * newName /* r28 */) {
    // Local variables
    class tParticleSystem * clone; // r31
    int i; // r28
}

// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x3C
struct {} tParticleSystemInstance::__vtable; // size: 0x3C, address: 0x80108A98
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
// total size: 0x80
class tParticleSystemInstance : public tEffect {
    // Functions
    tParticleSystemInstance(class tParticleSystem * partSys, const char * newName);

    ~tParticleSystemInstance();

    int GetNumLiveParticles();

    void SetFrame(float f);

    float GetFrame();

    void Advance(float deltaTime);

    void Update(const class Matrix * worldMatrix);

    void Display();

    void SortEmitters();

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
// ERROR: Failed to emit tag 4C31CD (GlobalSubroutine)
// ERROR: Failed to emit tag 4C32DC (GlobalSubroutine)
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
// Range: 0x80075C98 -> 0x80075DA8
// this: r1+0x0
int tParticleSystemInstance::GetNumLiveParticles() {
    // Local variables
    int totalParticles; // r1+0x0
    int i; // r4
}

// Range: 0x80075DA8 -> 0x80075E2C
// this: r29
void tParticleSystemInstance::SetFrame(float f /* f31 */) {
    // Local variables
    int i; // r30
}

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
// Range: 0x80075E2C -> 0x80075E34
// this: r1+0x0
float tParticleSystemInstance::GetFrame() {}

// Range: 0x80075E34 -> 0x80075E64
// this: r1+0x0
void tParticleSystemInstance::Advance(float deltaTime /* r1+0x4 */) {
    // Local variables
    float frameAdvance; // f1
}

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
// Range: 0x80075E64 -> 0x800761D4
// this: r29
void tParticleSystemInstance::Update(const class Matrix * worldMatrix /* r30 */) {
    // Local variables
    int i; // r28
    class Matrix temp; // r1+0x60
    int i; // r30
    int i; // r28
    int i; // r28
}

// Range: 0x800761D4 -> 0x800763E8
// this: r28
void tParticleSystemInstance::Display() {
    // Local variables
    unsigned char origFog; // r31
    unsigned char origZWrite; // r30
    unsigned char origZTest; // r29
    class tParticleRenderModule * renderModule; // r26
    int i; // r25
}

// Range: 0x800763E8 -> 0x80076698
// this: r31
void tParticleSystemInstance::SortEmitters() {
    // Local variables
    class Matrix worldToCamera; // r1+0x38
    class Vector * cameraPos; // r9
    int i; // r8
    unsigned char done; // r10
    int tempDrawOrder; // r11
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139108
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139118
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80139120
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x80139130
static // total size: 0x8
struct {} tParticleSystemInstance::__RTTI; // size: 0x8, address: 0x80139138
static // total size: 0x8
struct {} tParticleSystem::__RTTI; // size: 0x8, address: 0x80139140



