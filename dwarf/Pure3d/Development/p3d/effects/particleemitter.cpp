/*
    Compile unit: D:\Pure3d\development\p3d\effects\particleemitter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80079060 -> 0x8007E018
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x801331B0
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B2A8
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x801331BC
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x801331C8
int colourClampTableMin[4]; // size: 0x10, address: 0x80108E90
int colourClampTableMax[4]; // size: 0x10, address: 0x80108EA0
// total size: 0xC
struct {} tEmitterBlendData::__vtable; // size: 0xC, address: 0x8010918C
// total size: 0xC
struct {} tPointEmitterBlendData::__vtable; // size: 0xC, address: 0x80109180
// total size: 0x10
class tParticleFloatChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// total size: 0x2C
class tPointEmitterBlendData : public tEmitterBlendData {
    // Functions
    tPointEmitterBlendData();

    tPointEmitterBlendData(class tPointEmitterBlendData * data);

    ~tPointEmitterBlendData();

    // Members
public:
    class tParticleFloatChannel * lifeChannel; // offset 0x4, size 0x4
    class tParticleFloatChannel * speedChannel; // offset 0x8, size 0x4
    class tParticleFloatChannel * weightChannel; // offset 0xC, size 0x4
    class tParticleFloatChannel * lifeVarChannel; // offset 0x10, size 0x4
    class tParticleFloatChannel * speedVarChannel; // offset 0x14, size 0x4
    class tParticleFloatChannel * weightVarChannel; // offset 0x18, size 0x4
    class tParticleFloatChannel * numParticlesChannel; // offset 0x1C, size 0x4
    class tParticleFloatChannel * emissionRateChannel; // offset 0x20, size 0x4
    class tParticleFloatChannel * gravityChannel; // offset 0x24, size 0x4
    class tParticleFloatChannel * dragChannel; // offset 0x28, size 0x4
};
// Range: 0x80079060 -> 0x800790A8
// this: r3
tPointEmitterBlendData::tPointEmitterBlendData() {
    // References
    // -> struct [anonymous] tPointEmitterBlendData::__vtable;
    // -> struct [anonymous] tEmitterBlendData::__vtable;
}

// total size: 0x4
class tEmitterBlendData {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x800790A8 -> 0x80079288
// this: r1+0x8
tPointEmitterBlendData::tPointEmitterBlendData(class tPointEmitterBlendData * data /* r31 */) {
    // References
    // -> struct [anonymous] tPointEmitterBlendData::__vtable;
    // -> struct [anonymous] tEmitterBlendData::__vtable;
}

// Range: 0x80079288 -> 0x8007936C
// this: r30
tPointEmitterBlendData::~tPointEmitterBlendData() {
    // References
    // -> struct [anonymous] tEmitterBlendData::__vtable;
    // -> struct [anonymous] tPointEmitterBlendData::__vtable;
}

// total size: 0xC
struct {} tSpriteEmitterBlendData::__vtable; // size: 0xC, address: 0x80109174
// total size: 0x3C
class tSpriteEmitterBlendData : public tPointEmitterBlendData {
    // Functions
    tSpriteEmitterBlendData();

    ~tSpriteEmitterBlendData();

    // Members
public:
    class tParticleFloatChannel * sizeChannel; // offset 0x2C, size 0x4
    class tParticleFloatChannel * spinChannel; // offset 0x30, size 0x4
    class tParticleFloatChannel * sizeVarChannel; // offset 0x34, size 0x4
    class tParticleFloatChannel * spinVarChannel; // offset 0x38, size 0x4
};
// Range: 0x8007936C -> 0x800793D0
// this: r3
tSpriteEmitterBlendData::tSpriteEmitterBlendData() {
    // References
    // -> struct [anonymous] tSpriteEmitterBlendData::__vtable;
    // -> struct [anonymous] tPointEmitterBlendData::__vtable;
    // -> struct [anonymous] tEmitterBlendData::__vtable;
}

// Range: 0x800793D0 -> 0x80079464
// this: r30
tSpriteEmitterBlendData::~tSpriteEmitterBlendData() {
    // References
    // -> struct [anonymous] tSpriteEmitterBlendData::__vtable;
}

// total size: 0x14
struct {} tEmitter::__vtable; // size: 0x14, address: 0x801090FC
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
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum p3dParticleMode {
    NORMAL_PARTICLE = 0,
    ATTACHED_PARTICLE = 1,
    PHYSIC_PARTICLE = 2,
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
enum p3dParticleForceBias {
    MAGNITUDE_BIAS = 0,
    DISTANCE_FALLOFF_BIAS = 1,
};
// total size: 0xA8
class tParticleForce : public tEffect {
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
enum p3dParticleCollisionMode {
    KILL_PARTICLE = 0,
    REFLECT_PARTICLE = 1,
};
// total size: 0x98
class tParticleCollision : public tDrawable {
    // Members
protected:
    unsigned char update; // offset 0x10, size 0x1
    unsigned char enabled; // offset 0x11, size 0x1
    enum p3dParticleCollisionMode collisionMode; // offset 0x14, size 0x4
    class Matrix localMatrix; // offset 0x18, size 0x40
    class Matrix worldMatrix; // offset 0x58, size 0x40
};
// total size: 0x8
class tParticleRenderModule : public tRefCounted {};
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
// total size: 0x40
class tEmitter : public tRefCounted {
    // Functions
    tEmitter(class tParticleSystem * partSys, const char * name, class tEmitter * emitter);

    ~tEmitter();

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
// Range: 0x80079464 -> 0x80079650
// this: r1+0x8
tEmitter::tEmitter(class tParticleSystem * partSys /* r28 */, const char * name /* r29 */, class tEmitter * emitter /* r31 */) {
    // Local variables
    int i; // r6

    // References
    // -> struct [anonymous] tEmitter::__vtable;
}

// Range: 0x80079650 -> 0x80079768
// this: r31
tEmitter::~tEmitter() {
    // Local variables
    int i; // r29

    // References
    // -> struct [anonymous] tEmitter::__vtable;
}

// Range: 0x80079768 -> 0x80079970
void tEmitter::CopyBlendData(class tEmitter * src /* r27 */, class tEmitter * dest /* r28 */) {
    // Local variables
    int i; // r26

    // References
    // -> struct [anonymous] tSpriteEmitterBlendData::__vtable;
}

// total size: 0x14
struct {} tPointEmitter::__vtable; // size: 0x14, address: 0x8010909C
// total size: 0xC
class tTimeIndex {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
};
// total size: 0x14
class tColourChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    int nKey; // offset 0x8, size 0x4
    class tTimeIndex * timeIndex; // offset 0xC, size 0x4
    struct pddiColour * key; // offset 0x10, size 0x4
};
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
enum pddiPixelFormat {
    PDDI_PIXEL_UNKNOWN = 0,
    PDDI_PIXEL_RGB565 = 1,
    PDDI_PIXEL_ARGB1555 = 2,
    PDDI_PIXEL_RGB555 = 3,
    PDDI_PIXEL_ARGB4444 = 4,
    PDDI_PIXEL_RGB888 = 5,
    PDDI_PIXEL_ARGB8888 = 6,
    PDDI_PIXEL_PAL8 = 7,
    PDDI_PIXEL_PAL4 = 8,
    PDDI_PIXEL_LUM8 = 9,
    PDDI_PIXEL_DUDV88 = 10,
    PDDI_PIXEL_DXT1 = 11,
    PDDI_PIXEL_DXT2 = 12,
    PDDI_PIXEL_DXT3 = 13,
    PDDI_PIXEL_DXT4 = 14,
    PDDI_PIXEL_DXT5 = 15,
    PDDI_PIXEL_Z32 = 16,
    PDDI_PIXEL_Z24 = 17,
    PDDI_PIXEL_Z16 = 18,
    PDDI_PIXEL_Z8 = 19,
    PDDI_PIXEL_PS2_4BIT = 20,
    PDDI_PIXEL_PS2_8BIT = 21,
    PDDI_PIXEL_PS2_16BIT = 22,
    PDDI_PIXEL_PS2_32BIT = 23,
};
// total size: 0x50
struct pddiLockInfo {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum pddiPixelFormat format; // offset 0xC, size 0x4
    unsigned char native; // offset 0x10, size 0x1
    int rgbaLShift[4]; // offset 0x14, size 0x10
    int rgbaRShift[4]; // offset 0x24, size 0x10
    unsigned int rgbaMask[4]; // offset 0x34, size 0x10
    int pitch; // offset 0x44, size 0x4
    void * bits; // offset 0x48, size 0x4
    void * palette; // offset 0x4C, size 0x4
};
// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
enum pddiTextureType {
    PDDI_TEXTYPE_RGB = 0,
    PDDI_TEXTYPE_PALETTIZED = 1,
    PDDI_TEXTYPE_LUMINANCE = 2,
    PDDI_TEXTYPE_BUMPMAP = 3,
    PDDI_TEXTYPE_DXT1 = 4,
    PDDI_TEXTYPE_DXT2 = 5,
    PDDI_TEXTYPE_DXT3 = 6,
    PDDI_TEXTYPE_DXT4 = 7,
    PDDI_TEXTYPE_DXT5 = 8,
    PDDI_TEXTYPE_IPU = 9,
    PDDI_TEXTYPE_Z = 10,
    PDDI_TEXTURE_LINEAR = 11,
    PDDI_TEXTYPE_RENDERTARGET = 12,
    PDDI_TEXTYPE_PS2_4BIT = 13,
    PDDI_TEXTYPE_PS2_8BIT = 14,
    PDDI_TEXTYPE_PS2_16BIT = 15,
    PDDI_TEXTYPE_PS2_32BIT = 16,
};
enum pddiTextureUsageHint {
    PDDI_USAGE_STATIC = 0,
    PDDI_USAGE_DYNAMIC = 1,
    PDDI_USAGE_NOCACHE = 2,
};
// total size: 0xC
class pddiTexture : public pddiObject {};
// total size: 0xC
class pddiShader : public pddiObject {};
// total size: 0x18
class tTexture : public tEntity {
    // Members
protected:
    class pddiTexture * texture; // offset 0x10, size 0x4
};
// total size: 0x18
class tShader : public tEntity {
    // Members
protected:
    class pddiShader * shader; // offset 0x10, size 0x4
};
// total size: 0x388
class tPointEmitter : public tEmitter {
    // Functions
    tPointEmitter(class tParticleSystem * partSys, const char * name);

    tPointEmitter(class tParticleSystem * partSys, const char * name, class tPointEmitter * emitter);

    ~tPointEmitter();

    class tEmitterInstance * CreateEmitterInstance(class tParticleSystemInstance * partSysInst);

    class tEmitter * CloneEmitter(class tParticleSystem * partSys, const char * newName);

    void SetShader(class tShader * s);

    void SetGenerator(class tGenerator * gen);

    // Members
protected:
    class tColourChannel * colourChannel; // offset 0x40, size 0x4
    class tParticleFloatChannel * transparencyChannel; // offset 0x44, size 0x4
    class tParticleFloatChannel * colourVarChannel; // offset 0x48, size 0x4
    class tParticleFloatChannel * transparencyVarChannel; // offset 0x4C, size 0x4
    class tVectorChannel * positionChannel; // offset 0x50, size 0x4
    class tRotationChannel * rotationChannel; // offset 0x54, size 0x4
    float speedLookUp[50]; // offset 0x58, size 0xC8
    float weightLookUp[50]; // offset 0x120, size 0xC8
    struct pddiColour colourLookUp[50]; // offset 0x1E8, size 0xC8
    float transparencyLookUp[50]; // offset 0x2B0, size 0xC8
    int maxNumParticles; // offset 0x378, size 0x4
    class tShader * shader; // offset 0x37C, size 0x4
    class tGenerator * generator; // offset 0x380, size 0x4
};
// Range: 0x80079970 -> 0x80079BD0
// this: r1+0x8
tPointEmitter::tPointEmitter(class tParticleSystem * partSys /* r26 */, const char * name /* r25 */) {
    // Local variables
    int i; // r4

    // References
    // -> struct [anonymous] tPointEmitter::__vtable;
    // -> struct [anonymous] tEmitter::__vtable;
}

// Range: 0x80079BD0 -> 0x80079E08
// this: r1+0x8
tPointEmitter::tPointEmitter(class tParticleSystem * partSys /* r4 */, const char * name /* r5 */, class tPointEmitter * emitter /* r31 */) {
    // References
    // -> struct [anonymous] tPointEmitter::__vtable;
}

// Range: 0x80079E08 -> 0x80079F20
// this: r30
tPointEmitter::~tPointEmitter() {
    // References
    // -> struct [anonymous] tPointEmitter::__vtable;
}

// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x4
class tRotationChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x80079F20 -> 0x80079F80
// this: r30
class tEmitterInstance * tPointEmitter::CreateEmitterInstance(class tParticleSystemInstance * partSysInst /* r31 */) {}

// Range: 0x80079F80 -> 0x80079FF0
// this: r29
class tEmitter * tPointEmitter::CloneEmitter(class tParticleSystem * partSys /* r30 */, const char * newName /* r31 */) {}

// Range: 0x80079FF0 -> 0x8007A04C
// this: r30
void tPointEmitter::SetShader(class tShader * s /* r31 */) {}

// Range: 0x8007A04C -> 0x8007A0A8
// this: r30
void tPointEmitter::SetGenerator(class tGenerator * gen /* r31 */) {}

// total size: 0x14
struct {} tSpriteEmitter::__vtable; // size: 0x14, address: 0x80109088
enum p3dParticleAngleType {
    SPECIFIED_ANGLE = 0,
    RANDOM_ANGLE = 1,
    ALIGNED_TO_MOTION = 2,
};
// total size: 0x530
class tSpriteEmitter : public tPointEmitter {
    // Functions
    tSpriteEmitter(class tParticleSystem * partSys, const char * name);

    ~tSpriteEmitter();

    class tEmitterInstance * CreateEmitterInstance(class tParticleSystemInstance * partSysInst);

    class tEmitter * CloneEmitter(class tParticleSystem * partSys, const char * newName);

    void SetNumTexFrames(int num);

    // Members
protected:
    float sizeLookUp[50]; // offset 0x388, size 0xC8
    float spinLookUp[50]; // offset 0x450, size 0xC8
    float * texAnimLookUp; // offset 0x518, size 0x4
    int numTexFrames; // offset 0x51C, size 0x4
    int texFrameRate; // offset 0x520, size 0x4
    enum p3dParticleAngleType particleAngleType; // offset 0x524, size 0x4
    float particleAngleOffset; // offset 0x528, size 0x4
};
// Range: 0x8007A0A8 -> 0x8007A220
// this: r31
tSpriteEmitter::tSpriteEmitter(class tParticleSystem * partSys /* r4 */, const char * name /* r5 */) {
    // Local variables
    int i; // r6

    // References
    // -> struct [anonymous] tSpriteEmitter::__vtable;
}

// Range: 0x8007A220 -> 0x8007A354
// this: r30
tSpriteEmitter::~tSpriteEmitter() {
    // References
    // -> struct [anonymous] tPointEmitter::__vtable;
    // -> struct [anonymous] tSpriteEmitter::__vtable;
}

// Range: 0x8007A354 -> 0x8007A3B4
// this: r30
class tEmitterInstance * tSpriteEmitter::CreateEmitterInstance(class tParticleSystemInstance * partSysInst /* r31 */) {}

// Range: 0x8007A3B4 -> 0x8007A4AC
// this: r29
class tEmitter * tSpriteEmitter::CloneEmitter(class tParticleSystem * partSys /* r30 */, const char * newName /* r31 */) {
    // References
    // -> struct [anonymous] tSpriteEmitter::__vtable;
}

// Range: 0x8007A4AC -> 0x8007A554
// this: r31
void tSpriteEmitter::SetNumTexFrames(int num /* r1+0xC */) {
    // Local variables
    float u; // f3
    float uInc; // r1+0x8
    int i; // r5
}

// total size: 0x3C
struct {} tEmitterInstance::__vtable; // size: 0x3C, address: 0x80108FC4
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
// total size: 0x13C
class tEmitterInstance : public tParticle {
    // Functions
    tEmitterInstance(class tEmitter * parent, class tParticleSystemInstance * partSysInst);

    ~tEmitterInstance();

    void ResetAnimation();

    void PreLoad(float frameNum);

    void Update(float deltaFrame, const class Matrix * matrix);

    void Display();

    void SetBlendRatio(float ratio);

    void UpdateParticleForces(float deltaFrame);

    void UpdateParticleCollisions(float deltaFrame);

    void UpdateParticlePositions(float deltaFrame);

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
// Range: 0x8007A554 -> 0x8007A630
// this: r1+0x8
tEmitterInstance::tEmitterInstance(class tEmitter * parent /* r30 */, class tParticleSystemInstance * partSysInst /* r31 */) {
    // References
    // -> struct [anonymous] tEmitterInstance::__vtable;
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
// ERROR: Failed to emit tag 4EF272 (GlobalSubroutine)
// Range: 0x8007A6CC -> 0x8007A718
// this: r3
void tEmitterInstance::ResetAnimation() {}

// Range: 0x8007A718 -> 0x8007A7C4
// this: r31
void tEmitterInstance::PreLoad(float frameNum /* f31 */) {}

// Range: 0x8007A7C4 -> 0x8007A9F0
// this: r31
void tEmitterInstance::Update(float deltaFrame /* f31 */, const class Matrix * matrix /* r1+0x10 */) {}

// Range: 0x8007A9F0 -> 0x8007AB14
// this: r30
void tEmitterInstance::Display() {
    // Local variables
    class tParticleRenderModule * renderModule; // r31
}

// Range: 0x8007AB14 -> 0x8007AB18
void tEmitterInstance::SetBias() {}

// Range: 0x8007AB18 -> 0x8007AB20
float tEmitterInstance::GetBias() {}

// Range: 0x8007AB20 -> 0x8007AC14
// this: r30
void tEmitterInstance::SetBlendRatio(float ratio /* f1 */) {
    // Local variables
    float temp; // f31
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
// Range: 0x8007AC14 -> 0x8007ACAC
// this: r28
void tEmitterInstance::UpdateParticleForces(float deltaFrame /* f31 */) {
    // Local variables
    const int & numForces; // r30
    int i; // r29
}

// Range: 0x8007ACAC -> 0x8007AD44
// this: r28
void tEmitterInstance::UpdateParticleCollisions(float deltaFrame /* f31 */) {
    // Local variables
    const int & numCollisions; // r30
    int i; // r29
}

// Range: 0x8007AD44 -> 0x8007ADD0
// this: r1+0x0
void tEmitterInstance::UpdateParticlePositions(float deltaFrame /* r1+0x4 */) {
    // Local variables
    const int & numLiveParticles; // r6
    int i; // r7
    class tParticle * current; // r4
}

// total size: 0x44
struct {} tPointEmitterInstance::__vtable; // size: 0x44, address: 0x80108F80
// total size: 0x1A8
class tPointEmitterInstance : public tEmitterInstance {
    // Functions
    tPointEmitterInstance(class tPointEmitter * parent, class tParticleSystemInstance * partSysInst);

    ~tPointEmitterInstance();

    void SetBias(enum p3dParticleBias bias, float b);

    float GetBias(enum p3dParticleBias bias);

    void UpdateEmitter(float deltaFrame);

    void InitParticle(class tParticle * particle);

    void CalcParticle(class tParticle * particle, int lifePercent);

    void UpdateParticles(float deltaFrame);

    void UpdateParticlePositions(float deltaFrame);

    void UpdateParticleForces(float deltaFrame);

    void DisplayParticles();

    void AddParticles();

    // Members
protected:
    float lifeBias; // offset 0x13C, size 0x4
    float speedBias; // offset 0x140, size 0x4
    float weightBias; // offset 0x144, size 0x4
    float gravityBias; // offset 0x148, size 0x4
    float dragBias; // offset 0x14C, size 0x4
    float emissionBias; // offset 0x150, size 0x4
    float accParticlesToEmit; // offset 0x154, size 0x4
    float currEmissionRate; // offset 0x158, size 0x4
    int currNumParticles; // offset 0x15C, size 0x4
    float currLife; // offset 0x160, size 0x4
    float currLifeVar; // offset 0x164, size 0x4
    float currSpeed; // offset 0x168, size 0x4
    float currSpeedVar; // offset 0x16C, size 0x4
    float currWeight; // offset 0x170, size 0x4
    float currWeightVar; // offset 0x174, size 0x4
    struct pddiColour currColour; // offset 0x178, size 0x4
    float currTransparency; // offset 0x17C, size 0x4
    int currColourVar; // offset 0x180, size 0x4
    float currTransparencyVar; // offset 0x184, size 0x4
    float currGravity; // offset 0x188, size 0x4
    float currDrag; // offset 0x18C, size 0x4
    float * speedLookUp; // offset 0x190, size 0x4
    float * weightLookUp; // offset 0x194, size 0x4
    struct pddiColour * colourLookUp; // offset 0x198, size 0x4
    float * transparencyLookUp; // offset 0x19C, size 0x4
    class tShader * * shader; // offset 0x1A0, size 0x4
    class tGenerator * * generator; // offset 0x1A4, size 0x4
};
// Range: 0x8007ADD0 -> 0x8007AF4C
// this: r1+0x8
tPointEmitterInstance::tPointEmitterInstance(class tPointEmitter * parent /* r30 */, class tParticleSystemInstance * partSysInst /* r5 */) {
    // References
    // -> static struct pddiColour DEFAULT_COLOUR;
    // -> struct [anonymous] tPointEmitterInstance::__vtable;
}

// ERROR: Failed to emit tag 4F2DDA (GlobalSubroutine)
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
// Range: 0x8007AFF8 -> 0x8007B098
// this: r1+0x0
void tPointEmitterInstance::SetBias(enum p3dParticleBias bias /* r1+0x4 */, float b /* r1+0x8 */) {}

// Range: 0x8007B098 -> 0x8007B104
// this: r1+0x0
float tPointEmitterInstance::GetBias(enum p3dParticleBias bias /* r1+0x4 */) {}

// Range: 0x8007B104 -> 0x8007B7C4
// this: r30
void tPointEmitterInstance::UpdateEmitter(float deltaFrame /* f31 */) {
    // Local variables
    class tPointEmitter * pEmitter; // r31
    class tPointEmitterBlendData * data1; // r29
    class tPointEmitterBlendData * data1; // r29
    class tPointEmitterBlendData * data2; // r28
    float temp1; // r1+0x8
    float temp2; // r1+0x8
    class Matrix transform; // r1+0xE0
}

// total size: 0x74
class tPointParticle : public tParticle {
    // Members
public:
    struct pddiColour colour; // offset 0x64, size 0x4
    struct pddiColour colourInit; // offset 0x68, size 0x4
    int colourVar; // offset 0x6C, size 0x4
    float transparencyInit; // offset 0x70, size 0x4
};
// Range: 0x8007B7C4 -> 0x8007B928
// this: r30
void tPointEmitterInstance::InitParticle(class tParticle * particle /* r31 */) {
    // Local variables
    class tPointParticle * pointParticle; // r1+0x8
}

// Range: 0x8007B928 -> 0x8007BA70
// this: r1+0x8
void tPointEmitterInstance::CalcParticle(class tParticle * particle /* r1+0xC */, int lifePercent /* r1+0x10 */) {
    // Local variables
    class tPointParticle * pointParticle; // r1+0x8
    int idx; // r1+0x8
    int r; // r10
    int g; // r11
    int b; // r12

    // References
    // -> int colourClampTableMax[4];
    // -> int colourClampTableMin[4];
}

// Range: 0x8007BA70 -> 0x8007BB88
// this: r28
void tPointEmitterInstance::UpdateParticles(float deltaFrame /* f28 */) {
    // Local variables
    const int & numLiveParticles; // r30
    int i; // r29
    class tPointParticle * current; // r4
    int lifePercent; // r5
}

// Range: 0x8007BB88 -> 0x8007C014
// this: r1+0x8
void tPointEmitterInstance::UpdateParticlePositions(float deltaFrame /* r1+0xC */) {
    // Local variables
    const int & numLiveParticles; // r4
    int i; // r7
    class tPointParticle * current; // r8
    int i; // r7
    class tPointParticle * current; // r8
    int i; // r7
    class tPointParticle * current; // r8
}

// Range: 0x8007C014 -> 0x8007C0F8
// this: r28
void tPointEmitterInstance::UpdateParticleForces(float deltaFrame /* f31 */) {
    // Local variables
    const int & numLiveParticles; // r5
    int i; // r6
    class tParticle * current; // r3
}

// Range: 0x8007C0F8 -> 0x8007CB3C
// this: r31
void tPointEmitterInstance::DisplayParticles() {
    // Local variables
    const int & numLiveParticles; // r30
    class Matrix transform; // r1+0x344
    class gcPrimStream * stream; // r28
    int i; // r27
    class tPointParticle * current; // r26
    class Vector currPos; // r1+0x338
    class Vector oldPos; // r1+0x32C
    const class Vector & tempCurr; // r4
    const class Vector & tempOld; // r5
    class Matrix transform; // r1+0x2EC
    class gcPrimStream * stream; // r26
    int i; // r27
    class tPointParticle * current; // r4
    class Vector currPos; // r1+0x2E0
    const class Vector & temp; // r5
}

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
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x30
class tEntityTable : public tEntity {
    // Members
    int tableSize; // offset 0x10, size 0x4
    class tEntity * * table; // offset 0x14, size 0x4
    int nElement; // offset 0x18, size 0x4
    int resizeThreshhold; // offset 0x1C, size 0x4
    int nDeleteMarker; // offset 0x20, size 0x4
    int repackThreshhold; // offset 0x24, size 0x4
    class tEntity * deleteMarker; // offset 0x28, size 0x4
};
// total size: 0x458
class tInventory : public tEntityStore {
    // Members
protected:
    int nSection; // offset 0x8, size 0x4
    int currentSection; // offset 0xC, size 0x4
    unsigned char currentSectionOnly; // offset 0x10, size 0x1
    int sectionStack[16]; // offset 0x14, size 0x40
    int stackPos; // offset 0x54, size 0x4
    class tEntityTable * section[256]; // offset 0x58, size 0x400
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
// total size: 0x8
class tFileHandler : public tRefCounted {};
// total size: 0x4
class MemoryManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x0
class LoadTask {};
// total size: 0x0
class tChunkFile {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// total size: 0x58
class tP3DFileHandler : public tFileHandler {
    // Members
protected:
    int nLoadSlots; // offset 0x8, size 0x4
    int nLoaders; // offset 0xC, size 0x4
    class tChunkHandler * * loaders; // offset 0x10, size 0x4
    int nExtensions; // offset 0x14, size 0x4
    char extensions[8][8]; // offset 0x18, size 0x40
};
// total size: 0x4
class AsyncDone {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tLoadManager : public tRefCounted {
    // Members
protected:
    class tEntityStore * store; // offset 0x8, size 0x4
    int nLoadSlots; // offset 0xC, size 0x4
    int nLoaders; // offset 0x10, size 0x4
    class tFileHandler * * loaders; // offset 0x14, size 0x4
    class MemoryManager * memManager; // offset 0x18, size 0x4
    class LoadTask * async; // offset 0x1C, size 0x4
};
// total size: 0x4
class tMatrixStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
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
// total size: 0x0
class tLight {};
// total size: 0xC0
class tView : public tRefCounted {
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
enum pddiStateMask {
    PDDI_STATE_RENDER = 1,
    PDDI_STATE_VIEW = 2,
    PDDI_STATE_LIGHTING = 4,
    PDDI_STATE_FOG = 8,
    PDDI_STATE_STENCIL = 16,
    PDDI_STATE_ALL = -1,
};
enum pddiStatType {
    PDDI_STAT_CURRENT_FRAME = 0,
    PDDI_STAT_FRAME_TIME = 1,
    PDDI_STAT_BUFFERED_PRIM = 2,
    PDDI_STAT_BUFFERED_PRIM_VERT = 3,
    PDDI_STAT_BUFFERED_INDEXED_PRIM = 4,
    PDDI_STAT_BUFFERED_INDEXED_PRIM_VERT = 5,
    PDDI_STAT_BUFFERED_PRIM_CALLS = 6,
    PDDI_STAT_BUFFERED_PRIM_AVG = 7,
    PDDI_STAT_BUFFERED_COUNT = 8,
    PDDI_STAT_BUFFERED_ALLOC = 9,
    PDDI_STAT_STREAMED_PRIM = 10,
    PDDI_STAT_STREAMED_PRIM_VERT = 11,
    PDDI_STAT_STREAMED_PRIM_CALLS = 12,
    PDDI_STAT_STREAMED_PRIM_AVG = 13,
    PDDI_STAT_SKINNED_BONES = 14,
    PDDI_STAT_SKINNED_XFORM_VERT = 15,
    PDDI_STAT_SKINNED_XFORM_MS = 16,
    PDDI_STAT_SKINNED_WAIT_MS = 17,
    PDDI_STAT_MATRIX_OPS = 18,
    PDDI_STAT_LIGHT_OPS = 19,
    PDDI_STAT_MATERIAL_OPS = 20,
    PDDI_STAT_TEXTURE_HITS = 21,
    PDDI_STAT_TEXTURE_MISSES = 22,
    PDDI_STAT_TEXTURE_UPLOADED = 23,
    PDDI_STAT_TEXTURE_ALLOCATED = 24,
    PDDI_STAT_TEXTURE_SLOP = 25,
    PDDI_STAT_TEXTURE_COUNT_4BIT = 26,
    PDDI_STAT_TEXTURE_ALLOC_4BIT = 27,
    PDDI_STAT_TEXTURE_COUNT_8BIT = 28,
    PDDI_STAT_TEXTURE_ALLOC_8BIT = 29,
    PDDI_STAT_TEXTURE_COUNT_16BIT = 30,
    PDDI_STAT_TEXTURE_ALLOC_16BIT = 31,
    PDDI_STAT_TEXTURE_COUNT_32BIT = 32,
    PDDI_STAT_TEXTURE_ALLOC_32BIT = 33,
    PDDI_STAT_TEXTURE_COUNT_DXTN = 34,
    PDDI_STAT_TEXTURE_ALLOC_DXTN = 35,
};
enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
enum pddiCompareMode {
    PDDI_COMPARE_NONE = 0,
    PDDI_COMPARE_ALWAYS = 1,
    PDDI_COMPARE_LESS = 2,
    PDDI_COMPARE_LESSEQUAL = 3,
    PDDI_COMPARE_GREATER = 4,
    PDDI_COMPARE_GREATEREQUAL = 5,
    PDDI_COMPARE_EQUAL = 6,
    PDDI_COMPARE_NOTEQUAL = 7,
};
enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// total size: 0xC
class pddiRenderContext : public pddiObject {};
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
enum pddiDisplayMode {
    PDDI_DISPLAY_FULLSCREEN = 0,
    PDDI_DISPLAY_WINDOW = 1,
    PDDI_DISPLAY_FULLSCREEN_PAL = 2,
};
// total size: 0xC
class pddiDisplay : public pddiObject {};
// total size: 0x110
struct pddiLibInfo {
    // Members
    int versionMajor; // offset 0x0, size 0x4
    int versionMinor; // offset 0x4, size 0x4
    int versionBuild; // offset 0x8, size 0x4
    int libID; // offset 0xC, size 0x4
    char description[256]; // offset 0x10, size 0x100
};
// total size: 0xC
class pddiDevice : public pddiObject {};
// total size: 0x0
class pddiExtHardwareSkinning {};
enum p3dMatrixType {
    P3D_MATRIX_MODELVIEW = 0,
};
// total size: 0xF8
class tContext {
    // Members
    class tInventory * Inventory; // offset 0x0, size 0x4
    class tLoadManager * loadManager; // offset 0x4, size 0x4
    unsigned int FrameCount; // offset 0x8, size 0x4
    class tMatrixStack * stack; // offset 0xC, size 0x4
    class tView * View; // offset 0x10, size 0x4
    class Matrix CVM; // offset 0x14, size 0x40
    class Matrix CVMI; // offset 0x54, size 0x40
    class Matrix CWM; // offset 0x94, size 0x40
    struct pddiColour clearColour; // offset 0xD4, size 0x4
    float clearDepth; // offset 0xD8, size 0x4
    unsigned int clearStencil; // offset 0xDC, size 0x4
    unsigned int clearMask; // offset 0xE0, size 0x4
    int nLights; // offset 0xE4, size 0x4
    class pddiDevice * RenderDevice; // offset 0xE8, size 0x4
    class pddiRenderContext * RenderContext; // offset 0xEC, size 0x4
    class pddiDisplay * RenderDisplay; // offset 0xF0, size 0x4
    class pddiExtHardwareSkinning * skinning; // offset 0xF4, size 0x4
};
// total size: 0x0
class tTask {};
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    double psf[32]; // offset 0x1C8, size 0x100
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x310
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
};
// total size: 0x328
struct GCTask {
    // Members
    class tTask * mTask; // offset 0x0, size 0x4
    struct OSThread mThread; // offset 0x8, size 0x310
    char * mStack; // offset 0x318, size 0x4
    int mStackSize; // offset 0x31C, size 0x4
    unsigned char mInUse; // offset 0x320, size 0x1
};
// total size: 0x18
class tContextInitData {
    // Members
public:
    int xsize; // offset 0x0, size 0x4
    int ysize; // offset 0x4, size 0x4
    int bpp; // offset 0x8, size 0x4
    int nColourBuffer; // offset 0xC, size 0x4
    unsigned int bufferMask; // offset 0x10, size 0x4
    unsigned char pal; // offset 0x14, size 0x1
};
// total size: 0xCC0
class tPlatform {
    // Members
    class tContext * mContext; // offset 0x0, size 0x4
    struct GCTask mTasks[4]; // offset 0x8, size 0xCA0
    struct OSMutex mRunLock; // offset 0xCA8, size 0x18
};
// Range: 0x8007CB3C -> 0x8007CD38
// this: r29
void tPointEmitterInstance::AddParticles() {
    // Local variables
    int nAdd; // r31
    int index; // r30
    int i; // r27
    class tParticle * current; // r26
    int i; // r26
    class tParticle * current; // r27
}

// total size: 0x18
class tGenerator : public tEntity {
    // Members
protected:
    float frame; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0x44
struct {} tSpriteEmitterInstance::__vtable; // size: 0x44, address: 0x80108F3C
// total size: 0x1DC
class tSpriteEmitterInstance : public tPointEmitterInstance {
    // Functions
    tSpriteEmitterInstance(class tSpriteEmitter * parent, class tParticleSystemInstance * partSysInst);

    ~tSpriteEmitterInstance();

    void SetBias(enum p3dParticleBias bias, float b);

    float GetBias(enum p3dParticleBias bias);

    void UpdateEmitter(float deltaFrame);

    void InitParticle(class tParticle * particle);

    void CalcParticle(class tParticle * particle, int lifePercent, float deltaFrame);

    void UpdateParticles(float deltaFrame);

    void DisplayParticles();

    // Members
protected:
    float sizeBias; // offset 0x1A8, size 0x4
    float spinBias; // offset 0x1AC, size 0x4
    float currSize; // offset 0x1B0, size 0x4
    float currSizeVar; // offset 0x1B4, size 0x4
    float currSpin; // offset 0x1B8, size 0x4
    float currSpinVar; // offset 0x1BC, size 0x4
    float * sizeLookUp; // offset 0x1C0, size 0x4
    float * spinLookUp; // offset 0x1C4, size 0x4
    float * texAnimLookUp; // offset 0x1C8, size 0x4
    int * numTexFrames; // offset 0x1CC, size 0x4
    int * texFrameRate; // offset 0x1D0, size 0x4
    enum p3dParticleAngleType * particleAngleType; // offset 0x1D4, size 0x4
    float * particleAngleOffset; // offset 0x1D8, size 0x4
};
// Range: 0x8007CD38 -> 0x8007CE68
// this: r1+0x8
tSpriteEmitterInstance::tSpriteEmitterInstance(class tSpriteEmitter * parent /* r30 */, class tParticleSystemInstance * partSysInst /* r5 */) {
    // References
    // -> struct [anonymous] tSpriteEmitterInstance::__vtable;
}

// ERROR: Failed to emit tag 50564D (GlobalSubroutine)
// Range: 0x8007CF24 -> 0x8007CF84
// this: r3
void tSpriteEmitterInstance::SetBias(enum p3dParticleBias bias /* r4 */, float b /* f1 */) {}

// Range: 0x8007CF84 -> 0x8007D018
// this: r1+0x0
float tSpriteEmitterInstance::GetBias(enum p3dParticleBias bias /* r1+0x4 */) {}

// Range: 0x8007D018 -> 0x8007D1DC
// this: r29
void tSpriteEmitterInstance::UpdateEmitter(float deltaFrame /* f1 */) {
    // Local variables
    class tSpriteEmitter * sEmitter; // r3
    class tSpriteEmitterBlendData * data1; // r31
    class tSpriteEmitterBlendData * data1; // r31
    class tSpriteEmitterBlendData * data2; // r30
    float temp1; // r1+0x8
    float temp2; // r1+0x8
}

// total size: 0x80
class tSpriteParticle : public tPointParticle {
    // Members
public:
    int texFrame; // offset 0x74, size 0x4
    float spin; // offset 0x78, size 0x4
    float spinInit; // offset 0x7C, size 0x4
};
// Range: 0x8007D1DC -> 0x8007D404
// this: r30
void tSpriteEmitterInstance::InitParticle(class tParticle * particle /* r31 */) {
    // Local variables
    class tSpriteParticle * current; // r1+0x8
}

// Range: 0x8007D404 -> 0x8007D4C4
// this: r29
void tSpriteEmitterInstance::CalcParticle(class tParticle * particle /* r30 */, int lifePercent /* r31 */, float deltaFrame /* f1 */) {
    // Local variables
    class tSpriteParticle * current; // r1+0x8
}

// Range: 0x8007D4C4 -> 0x8007D69C
// this: r30
void tSpriteEmitterInstance::UpdateParticles(float deltaFrame /* f31 */) {
    // Local variables
    const int & numLiveParticles; // r31
    int i; // r28
    class tSpriteParticle * current; // r4
    int i; // r28
    class tSpriteParticle * current; // r27
}

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
// Range: 0x8007D69C -> 0x8007DFDC
// this: r29
void tSpriteEmitterInstance::DisplayParticles() {
    // Local variables
    const int & numLiveParticles; // r26
    int i; // r28
    class tSpriteParticle * current; // r30
    class Vector currPos; // r1+0x2CC
    class Vector oldPos; // r1+0x2C0
    class Matrix transform; // r1+0x274
    class gcPrimStream * stream; // r31
    int i; // r28
    class tSpriteParticle * current; // r30
    float spin; // f16
    float x; // f1
    float y; // f2
    float uL; // f11
    float uR; // f12
    const class Vector & temp; // r4
    class pddiVector vertex0; // r1+0x25C
    class pddiVector vertex1; // r1+0x250
    class pddiVector vertex2; // r1+0x244
    class pddiVector vertex3; // r1+0x238
    class pddiVector2 uv0; // r1+0x230
    class pddiVector2 uv1; // r1+0x228
    class pddiVector2 uv2; // r1+0x220
    class pddiVector2 uv3; // r1+0x218
}

static // total size: 0x8
struct {} tParticle::__RTTI; // size: 0x8, address: 0x801391A8
static // total size: 0x8
struct {} tEmitterInstance::__RTTI; // size: 0x8, address: 0x801391B0
static // total size: 0x8
struct {} tPointEmitterInstance::__RTTI; // size: 0x8, address: 0x801391B8
static // total size: 0x8
struct {} tSpriteEmitterInstance::__RTTI; // size: 0x8, address: 0x801391C0
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801391C8
static // total size: 0x8
struct {} tEmitter::__RTTI; // size: 0x8, address: 0x801391D0
static // total size: 0x8
struct {} tPointEmitter::__RTTI; // size: 0x8, address: 0x801391D8
static // total size: 0x8
struct {} tSpriteEmitter::__RTTI; // size: 0x8, address: 0x801391E0
static // total size: 0x8
struct {} tEmitterBlendData::__RTTI; // size: 0x8, address: 0x801391E8
static // total size: 0x8
struct {} tPointEmitterBlendData::__RTTI; // size: 0x8, address: 0x801391F0
static // total size: 0x8
struct {} tSpriteEmitterBlendData::__RTTI; // size: 0x8, address: 0x801391F8



