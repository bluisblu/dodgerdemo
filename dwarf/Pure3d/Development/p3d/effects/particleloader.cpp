/*
    Compile unit: D:\Pure3d\development\p3d\effects\particleloader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80070C50 -> 0x800751F8
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x801330D0
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B268
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x801330DC
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x801330E8
// total size: 0x1
class tParticleChannelLoader {};
// total size: 0x10
class tParticleFloatChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// total size: 0x10
struct Chunk {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int dataLength; // offset 0x4, size 0x4
    unsigned int chunkLength; // offset 0x8, size 0x4
    unsigned int startPosition; // offset 0xC, size 0x4
};
// total size: 0x210
class tChunkFile {
    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// Range: 0x80070C50 -> 0x80070DC8
class tParticleFloatChannel * tParticleChannelLoader::LoadFloat(class tChunkFile * f /* r31 */, unsigned char temp_allocation /* r25 */) {
    // Local variables
    class tParticleFloatChannel * channel; // r27
    int numFrames; // r28
    int * frames; // r26
    float * data; // r25
    int i; // r28
}

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
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
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
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tParticleSystemLoader::__vtable; // size: 0x1C, address: 0x801089C4
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tParticleSystemLoader : public tSimpleChunkHandler {
    // Functions
    tParticleSystemLoader();
};
// ERROR: Failed to emit tag 4A3E14 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// total size: 0x14
struct {} tEmitterLoader::__vtable; // size: 0x14, address: 0x80108974
// total size: 0x14
struct {} tPointEmitterLoader::__vtable; // size: 0x14, address: 0x801088D8
// total size: 0x14
struct {} tSpriteEmitterLoader::__vtable; // size: 0x14, address: 0x80108878
// total size: 0x4
class tPointEmitterLoader : public tEmitterLoader {
    // Functions
    class tEmitter * LoadEmitter(class tChunkFile * f, class tEntityStore * store, class tParticleSystem * parent);

    void LoadEmitterData(class tChunkFile * f, class tEntityStore * store, class tParticleSystem * parent, class tEmitter * emitter);
};
// total size: 0x4
class tSpriteEmitterLoader : public tPointEmitterLoader {
    // Functions
    class tEmitter * LoadEmitter(class tChunkFile * f, class tEntityStore * store, class tParticleSystem * parent);

    void LoadEmitterData(class tChunkFile * f, class tEntityStore * store, class tParticleSystem * parent, class tEmitter * emitter);

    void LoadEmitterBlendStateData(class tChunkFile * f, class tEntityStore * store, class tParticleSystem * parent, class tEmitter * emitter, class tEmitterBlendData * blendState);
};
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
// Range: 0x80070E28 -> 0x800711D8
class tEntity * tParticleSystemLoader::LoadObject(class tChunkFile * f /* r21 */, class tEntityStore * store /* r22 */) {
    // Local variables
    class tParticleSystem * partSys; // r23
    char name[128]; // r1+0xE0
    int numEmitters; // r1+0x8
    int currEmitter; // r1+0x8
    class tEmitter * * emitters; // r1+0x8
    class tPointEmitterLoader emitterLoader; // r1+0xD8
    class tSpriteEmitterLoader emitterLoader; // r1+0xD4
    class Matrix m; // r1+0x94

    // References
    // -> struct [anonymous] tSpriteEmitterLoader::__vtable;
    // -> struct [anonymous] tPointEmitterLoader::__vtable;
    // -> struct [anonymous] tEmitterLoader::__vtable;
}

// total size: 0xC
struct {} tSafeEntityCaster<tParticleForce>::__vtable; // size: 0xC, address: 0x8010895C
// total size: 0xC
struct {} tSafeEntityCaster<tParticleCollision>::__vtable; // size: 0xC, address: 0x80108920
// total size: 0x4
class tEmitterLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// ERROR: Failed to emit tag 4A7D94 (GlobalSubroutine)
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
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
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// Range: 0x8007154C -> 0x800715C8
// this: r28
class tEmitter * tPointEmitterLoader::LoadEmitter(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */, class tParticleSystem * parent /* r31 */) {
    // Local variables
    class tPointEmitter * emitter; // r7
}

// total size: 0xC
struct {} tRotationChannelLoader::__vtable; // size: 0xC, address: 0x80104060
// total size: 0x2C
class tPointEmitterBlendData : public tEmitterBlendData {
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
// total size: 0x1
class tColourChannelLoader {};
// total size: 0x4
class tVectorChannelLoader {
    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// total size: 0x8
class tRotationChannelLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int poseIndex; // offset 0x4, size 0x4
};
// ERROR: Failed to emit tag 4ADD4A (GlobalSubroutine)
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
// Range: 0x80071C34 -> 0x80071EAC
void tPointEmitterLoader::LoadEmitterBlendStateData(class tChunkFile * f /* r29 */, class tEmitter * emitter /* r30 */, class tEmitterBlendData * blendState /* r31 */) {
    // Local variables
    class tPointEmitterBlendData * pBlendState; // r1+0x8
    class tPointEmitter * pointEmitter; // r1+0x8
    char name[128]; // r1+0x2C
}

// total size: 0x530
class tSpriteEmitter : public tPointEmitter {
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
// Range: 0x80071EAC -> 0x80071F28
// this: r28
class tEmitter * tSpriteEmitterLoader::LoadEmitter(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */, class tParticleSystem * parent /* r31 */) {
    // Local variables
    class tSpriteEmitter * emitter; // r7
}

// total size: 0x3C
class tSpriteEmitterBlendData : public tPointEmitterBlendData {
    // Members
public:
    class tParticleFloatChannel * sizeChannel; // offset 0x2C, size 0x4
    class tParticleFloatChannel * spinChannel; // offset 0x30, size 0x4
    class tParticleFloatChannel * sizeVarChannel; // offset 0x34, size 0x4
    class tParticleFloatChannel * spinVarChannel; // offset 0x38, size 0x4
};
// Range: 0x80071F28 -> 0x800721DC
// this: r27
void tSpriteEmitterLoader::LoadEmitterData(class tChunkFile * f /* r28 */, class tEntityStore * store /* r29 */, class tParticleSystem * parent /* r30 */, class tEmitter * emitter /* r31 */) {
    // Local variables
    class tSpriteEmitter * spriteEmitter; // r31
    char name[128]; // r1+0x34
    int numBlendStates; // r1+0x8
    class tParticleFloatChannel * sizeOLChannel; // r22
    class tParticleFloatChannel * spinOLChannel; // r21
    class tSpriteEmitterBlendData * blendState; // r8
}

// Range: 0x800721DC -> 0x80072354
// this: r21
void tSpriteEmitterLoader::LoadEmitterBlendStateData(class tChunkFile * f /* r22 */, class tEntityStore * store /* r23 */, class tParticleSystem * parent /* r24 */, class tEmitter * emitter /* r25 */, class tEmitterBlendData * blendState /* r26 */) {
    // Local variables
    class tSpriteEmitterBlendData * sBlendState; // r26
    char name[128]; // r1+0x24
}

// total size: 0x1
class tGeneratorLoader {};
// total size: 0x40
class tPointGenerator : public tGenerator {
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
// Range: 0x80072354 -> 0x80072480
class tGenerator * tGeneratorLoader::LoadPointGenerator(class tChunkFile * f /* r28 */) {
    // Local variables
    class tPointGenerator * pointGen; // r1+0x8
}

// total size: 0x8
class Randomizer {
    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
// total size: 0x70
class tPlaneGenerator : public tGenerator {
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
// Range: 0x80072480 -> 0x80072720
class tGenerator * tGeneratorLoader::LoadPlaneGenerator(class tChunkFile * f /* r28 */) {
    // Local variables
    class tPlaneGenerator * planeGen; // r1+0x8
}

// total size: 0x28
class tSphereGenerator : public tGenerator {
    // Members
protected:
    float radius; // offset 0x18, size 0x4
    float radialVar; // offset 0x1C, size 0x4
    class tParticleFloatChannel * radiusChannel; // offset 0x20, size 0x4
    class tParticleFloatChannel * radialVarChannel; // offset 0x24, size 0x4
};
// Range: 0x80072720 -> 0x800728A4
class tGenerator * tGeneratorLoader::LoadSphereGenerator(class tChunkFile * f /* r29 */) {
    // Local variables
    class tSphereGenerator * sphereGen; // r1+0x8
}

// total size: 0x20
struct {} tParticleForceLoader::__vtable; // size: 0x20, address: 0x801087FC
// total size: 0x18
class tParticleForceLoader : public tSimpleChunkHandler {
    // Functions
    tParticleForceLoader();

    class tEntity * LoadObject(class tChunkFile * f);
};
// ERROR: Failed to emit tag 4B2242 (GlobalSubroutine)
// Range: 0x80072904 -> 0x80072990
// this: r31
class tEntity * tParticleForceLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    class tParticleForce * force; // r31
}

// Range: 0x80072990 -> 0x80072B8C
void tParticleForceLoader::LoadForce(class tChunkFile * f /* r29 */, class tParticleForce * force /* r30 */) {
    // Local variables
    char name[128]; // r1+0xB4
    class Matrix m; // r1+0x74
}

// total size: 0x20
struct {} tParticlePointForceLoader::__vtable; // size: 0x20, address: 0x801087DC
// total size: 0x18
class tParticlePointForceLoader : public tParticleForceLoader {
    // Functions
    tParticlePointForceLoader();

    class tEntity * LoadObject(class tChunkFile * f);

    void LoadForce(class tChunkFile * f, class tParticleForce * force);
};
// ERROR: Failed to emit tag 4B28E3 (GlobalSubroutine)
// Range: 0x80072C00 -> 0x80072C8C
// this: r31
class tEntity * tParticlePointForceLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    class tParticleForce * force; // r31
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139038
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139048
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80139050
static // total size: 0x8
struct {} tEffect::__RTTI; // size: 0x8, address: 0x80139060
static // total size: 0x8
struct {} tParticleForce::__RTTI; // size: 0x8, address: 0x80139068
static // total size: 0x8
struct {} tParticlePointForce::__RTTI; // size: 0x8, address: 0x80139070
enum p3dParticleForceDistanceFallOffType {
    NO_FALLOFF = 0,
    LINEAR_FALLOFF = 1,
    SQUARED_FALLOFF = 2,
    CUBIC_FALLOFF = 3,
    QUADRIC_FALLOFF = 4,
};
// total size: 0xD0
class tParticlePointForce : public tParticleForce {
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
// Range: 0x80072C8C -> 0x80072DE8
// this: r26
void tParticlePointForceLoader::LoadForce(class tChunkFile * f /* r27 */, class tParticleForce * force /* r5 */) {
    // Local variables
    class tParticlePointForce * pointForce; // r28
    char name[128]; // r1+0x18

    // References
    // -> static struct [anonymous] tParticleForce::__RTTI;
    // -> static struct [anonymous] tParticlePointForce::__RTTI;
}

// total size: 0x20
struct {} tParticlePlaneForceLoader::__vtable; // size: 0x20, address: 0x801087BC
// total size: 0x18
class tParticlePlaneForceLoader : public tParticlePointForceLoader {
    // Functions
    tParticlePlaneForceLoader();

    class tEntity * LoadObject(class tChunkFile * f);

    void LoadForce(class tChunkFile * f, class tParticleForce * force);
};
// ERROR: Failed to emit tag 4B3C27 (GlobalSubroutine)
// Range: 0x80072E70 -> 0x80072EFC
// this: r31
class tEntity * tParticlePlaneForceLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    class tParticleForce * force; // r31
}

static // total size: 0x8
struct {} tParticlePlaneForce::__RTTI; // size: 0x8, address: 0x80139078
// total size: 0x138
class tParticlePlaneForce : public tParticlePointForce {
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
// Range: 0x80072EFC -> 0x80073060
// this: r26
void tParticlePlaneForceLoader::LoadForce(class tChunkFile * f /* r27 */, class tParticleForce * force /* r5 */) {
    // Local variables
    class tParticlePlaneForce * planeForce; // r28
    char name[128]; // r1+0x1C

    // References
    // -> static struct [anonymous] tParticleForce::__RTTI;
    // -> static struct [anonymous] tParticlePlaneForce::__RTTI;
}

// total size: 0x20
struct {} tParticleCollisionLoader::__vtable; // size: 0x20, address: 0x801086C8
// total size: 0x18
class tParticleCollisionLoader : public tSimpleChunkHandler {
    // Functions
    tParticleCollisionLoader();

    class tEntity * LoadObject(class tChunkFile * f);
};
// ERROR: Failed to emit tag 4B4BFE (GlobalSubroutine)
// Range: 0x800730C0 -> 0x80073134
// this: r30
class tEntity * tParticleCollisionLoader::LoadObject(class tChunkFile * f /* r31 */) {
    // Local variables
    class tParticleCollision * collision; // r5
}

// Range: 0x80073134 -> 0x800732C4
void tParticleCollisionLoader::LoadCollision(class tChunkFile * f /* r29 */, class tParticleCollision * collision /* r30 */) {
    // Local variables
    char name[128]; // r1+0x98
    class Matrix m; // r1+0x58
}

// total size: 0x20
struct {} tParticlePlaneCollisionLoader::__vtable; // size: 0x20, address: 0x801086A8
// total size: 0x18
class tParticlePlaneCollisionLoader : public tParticleCollisionLoader {
    // Functions
    tParticlePlaneCollisionLoader();

    class tEntity * LoadObject(class tChunkFile * f);
};
// ERROR: Failed to emit tag 4B52F7 (GlobalSubroutine)
// Range: 0x80073338 -> 0x800733AC
// this: r30
class tEntity * tParticlePlaneCollisionLoader::LoadObject(class tChunkFile * f /* r31 */) {
    // Local variables
    class tParticleCollision * collision; // r5
}

static // total size: 0x8
struct {} tParticleCollision::__RTTI; // size: 0x8, address: 0x80139080
static // total size: 0x8
struct {} tParticlePlaneCollision::__RTTI; // size: 0x8, address: 0x80139088
// total size: 0x100
class tParticlePlaneCollision : public tParticleCollision {
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
// Range: 0x800733AC -> 0x800736BC
void tParticlePlaneCollisionLoader::LoadCollision(class tChunkFile * f /* r27 */, class tParticleCollision * collision /* r5 */) {
    // Local variables
    class tParticlePlaneCollision * planeCollision; // r28
    char name[128]; // r1+0x154

    // References
    // -> static struct [anonymous] tParticleCollision::__RTTI;
    // -> static struct [anonymous] tParticlePlaneCollision::__RTTI;
}

// total size: 0x1C
struct {} tParticleSystemLoaderV13::__vtable; // size: 0x1C, address: 0x80108600
// total size: 0x18
class tParticleSystemLoaderV13 : public tSimpleChunkHandler {
    // Functions
    tParticleSystemLoaderV13();
};
// ERROR: Failed to emit tag 4B660F (GlobalSubroutine)
// Range: 0x80073718 -> 0x800739CC
class tEntity * tParticleSystemLoaderV13::LoadObject(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */) {
    // Local variables
    class tParticleSystem * partSys; // r31
    char name[128]; // r1+0x54
    int numEmitters; // r1+0x8
    int currEmitter; // r1+0x8
    class tEmitter * * emitters; // r26
}

// total size: 0x1
class tEmitterLoaderV13 {};
enum p3dParticleType {
    POINT_PARTICLE = 0,
    LINE_PARTICLE = 1,
    SPRITE_PARTICLE = 2,
    NO_PARTICLE = 3,
};
enum p3dParticleMode {
    NORMAL_PARTICLE = 0,
    ATTACHED_PARTICLE = 1,
    PHYSIC_PARTICLE = 2,
};
enum p3dParticleAngleType {
    SPECIFIED_ANGLE = 0,
    RANDOM_ANGLE = 1,
    ALIGNED_TO_MOTION = 2,
};
// ERROR: Failed to emit tag 4B6B7B (GlobalSubroutine)
// total size: 0x1
class tGeneratorLoaderV13 {};
// Range: 0x80074D64 -> 0x80074E68
class tGenerator * tGeneratorLoaderV13::LoadPointGenerator(class tChunkFile * f /* r31 */) {
    // Local variables
    class tPointGenerator * pointGen; // r1+0x8
}

// Range: 0x80074E68 -> 0x800750B4
class tGenerator * tGeneratorLoaderV13::LoadPlaneGenerator(class tChunkFile * f /* r31 */) {
    // Local variables
    class tPlaneGenerator * planeGen; // r1+0x8
}

// Range: 0x800750B4 -> 0x800751BC
class tGenerator * tGeneratorLoaderV13::LoadSphereGenerator(class tChunkFile * f /* r31 */) {
    // Local variables
    class tSphereGenerator * sphereGen; // r1+0x8
}

static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80139090
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80139098
static // total size: 0x8
struct {} tParticleSystemLoaderV13::__RTTI; // size: 0x8, address: 0x801390A0
static // total size: 0x8
struct {} tParticleCollisionLoader::__RTTI; // size: 0x8, address: 0x801390A8
static // total size: 0x8
struct {} tParticlePlaneCollisionLoader::__RTTI; // size: 0x8, address: 0x801390B0
static // total size: 0x8
struct {} tParticleForceLoader::__RTTI; // size: 0x8, address: 0x801390B8
static // total size: 0x8
struct {} tParticlePointForceLoader::__RTTI; // size: 0x8, address: 0x801390C0
static // total size: 0x8
struct {} tParticlePlaneForceLoader::__RTTI; // size: 0x8, address: 0x801390C8
static // total size: 0x8
struct {} tEmitterLoader::__RTTI; // size: 0x8, address: 0x801390D0
static // total size: 0x8
struct {} tPointEmitterLoader::__RTTI; // size: 0x8, address: 0x801390D8
static // total size: 0x8
struct {} tSpriteEmitterLoader::__RTTI; // size: 0x8, address: 0x801390E0
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801390E8
static // total size: 0x8
struct {} tSafeEntityCaster<tParticleCollision>::__RTTI; // size: 0x8, address: 0x801390F0
static // total size: 0x8
struct {} tSafeEntityCaster<tParticleForce>::__RTTI; // size: 0x8, address: 0x801390F8
static // total size: 0x8
struct {} tParticleSystemLoader::__RTTI; // size: 0x8, address: 0x80139100
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



