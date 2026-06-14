/*
    Compile unit: D:\Pure3d\Simulation\flexobj\particlesyst.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F2D34 -> 0x800F4804
*/
static float GRAVITY; // size: 0x4, address: 0x8013AD28
static float DVSTATIC2; // size: 0x4, address: 0x8013AD2C
static float MAXDV; // size: 0x4, address: 0x8013AD30
unsigned char cleanInCol; // size: 0x1, address: 0x8013B478
unsigned char moveInColl; // size: 0x1, address: 0x8013AD34
// total size: 0x38
struct {} ParticleSystem::__vtable; // size: 0x38, address: 0x801165B8
// total size: 0xC
struct {} FlexParticleList::__vtable; // size: 0xC, address: 0x80116770
// total size: 0x10
struct {} Wind::__vtable; // size: 0x10, address: 0x80116734
// total size: 0x10
struct {} WindSinus::__vtable; // size: 0x10, address: 0x80116724
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
// total size: 0x44
class FlexParticle {
    // Members
public:
    int index; // offset 0x0, size 0x4
    float x[3]; // offset 0x4, size 0xC
    float v[3]; // offset 0x10, size 0xC
    float uv[2]; // offset 0x1C, size 0x8
    unsigned char free; // offset 0x24, size 0x1
    unsigned char broken; // offset 0x25, size 0x1
    float collConstrain[2][3]; // offset 0x28, size 0x18
    int inColl; // offset 0x40, size 0x4
};
// total size: 0x14
class VoidPList {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char fLock; // offset 0x4, size 0x1
private:
    int fSize; // offset 0x8, size 0x4
    int fArraySize; // offset 0xC, size 0x4
    void * fArray; // offset 0x10, size 0x4
};
// total size: 0x14
class FlexParticleList : public VoidPList {};
// total size: 0x98
class ParticleSystem : public tEntity {
    // Functions
    ParticleSystem();

    void Init();

    void Scale(float f);

    void SetDt(float dt);

    ~ParticleSystem();

    void ApplyForces();

    void ApplyGravity();

    void AdvanceSystem();

    void MoveSystem(float x, float y, float z);

    void TransformSystem(const class Matrix & m);

    void SetSystemSpeed(const class Vector & speed);

    void SetPosParticle(int i, float x, float y, float z);

    void DynMoveParticle(int i, const class Vector & v, float idt);

    void SetSpeedParticle(int i, float x, float y, float z);

    void GetPosParticle(int i, float & x, float & y, float & z) const;

    void AddCollision(class FlexParticle * p, float dist, const float * n, const float * vc, unsigned char addconstrain);

    void FixParticle(int n);

    unsigned char TestExtension1D(class FlexParticle * a, class FlexParticle * b, float len, float mxdef);

    // Members
public:
    class FlexParticle * * lp; // offset 0x10, size 0x4
    class Condition * Conditions; // offset 0x14, size 0x4
    class ConditionParams * cparams; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    int nbp; // offset 0x20, size 0x4
    float deli; // offset 0x24, size 0x4
    class SparseBlockMatrix * A; // offset 0x28, size 0x4
    float * mass; // offset 0x2C, size 0x4
    float * b; // offset 0x30, size 0x4
    float * z; // offset 0x34, size 0x4
    float * dv; // offset 0x38, size 0x4
    class TArray * Sfilter; // offset 0x3C, size 0x4
    float extDensity; // offset 0x40, size 0x4
    float gravity[3]; // offset 0x44, size 0xC
    float wind[3]; // offset 0x50, size 0xC
    class FlexParticleList interplist; // offset 0x5C, size 0x14
    unsigned char drawparticle; // offset 0x70, size 0x1
    float maxDv; // offset 0x74, size 0x4
    float maxdef; // offset 0x78, size 0x4
    float rest; // offset 0x7C, size 0x4
    float frict; // offset 0x80, size 0x4
    float dvtstatic2; // offset 0x84, size 0x4
protected:
    int vecSize; // offset 0x88, size 0x4
    float invTimeStep; // offset 0x8C, size 0x4
    float timeStep; // offset 0x90, size 0x4
private:
    class Wind * windFunction; // offset 0x94, size 0x4
};
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
};
// total size: 0x20
class Wind : public AccessCounter {
    // Members
protected:
    class Vector windseed; // offset 0x8, size 0xC
    class Vector wind; // offset 0x14, size 0xC
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
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800F2D98 -> 0x800F2EE4
// this: r1+0x8
ParticleSystem::ParticleSystem() {
    // References
    // -> struct [anonymous] WindSinus::__vtable;
    // -> struct [anonymous] Wind::__vtable;
    // -> static float DVSTATIC2;
    // -> static float MAXDV;
    // -> struct [anonymous] FlexParticleList::__vtable;
    // -> struct [anonymous] ParticleSystem::__vtable;
}

// total size: 0x1C
struct {} NullCondition::__vtable; // size: 0x1C, address: 0x8011665C
// total size: 0xC
class iPhLength : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhLength : public iPhLength {};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhTime : public iPhTime {};
// ERROR: Failed to emit tag 9AEF28 (GlobalSubroutine)
// Range: 0x800F3240 -> 0x800F32AC
// this: r1+0x8
void ParticleSystem::Scale(float f /* f31 */) {
    // Local variables
    class Condition * C; // r31
}

// total size: 0x30
class SparseBlockMatrix {
    // Members
protected:
    int nRows; // offset 0x0, size 0x4
    int vecSize; // offset 0x4, size 0x4
    float eps; // offset 0x8, size 0x4
    float eps2; // offset 0xC, size 0x4
    int maxiter; // offset 0x10, size 0x4
    class TArray * lrows; // offset 0x14, size 0x4
    float * vec_r; // offset 0x18, size 0x4
    float * vec_c; // offset 0x1C, size 0x4
    float * vec_t; // offset 0x20, size 0x4
    float * vec_q; // offset 0x24, size 0x4
    float * vec_s; // offset 0x28, size 0x4
    float * vec_b; // offset 0x2C, size 0x4
};
// total size: 0x2C
class Condition {
    // Members
    class Condition * nextCond; // offset 0x0, size 0x4
    float xi[3]; // offset 0x4, size 0xC
    float xj[3]; // offset 0x10, size 0xC
public:
    void * __vptr$; // offset 0x1C, size 0x4
    class FlexParticle * pi; // offset 0x20, size 0x4
    class FlexParticle * pj; // offset 0x24, size 0x4
    class ConditionParams * params; // offset 0x28, size 0x4
};
// Range: 0x800F32AC -> 0x800F32C4
// this: r1+0x0
void ParticleSystem::SetDt(float dt /* r1+0x4 */) {}

// Range: 0x800F32C4 -> 0x800F3444
// this: r30
ParticleSystem::~ParticleSystem() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] FlexParticleList::__vtable;
    // -> struct [anonymous] ParticleSystem::__vtable;
}

// total size: 0x34
class ConditionParams {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float Stretch1Dkf; // offset 0x4, size 0x4
    float Stretch1Dkd; // offset 0x8, size 0x4
    float Bend1Dkf; // offset 0xC, size 0x4
    float Bend1Dkd; // offset 0x10, size 0x4
    float Wind1DKf; // offset 0x14, size 0x4
    float Stretch2Dkf; // offset 0x18, size 0x4
    float Stretch2Dkd; // offset 0x1C, size 0x4
    float Shear2Dkf; // offset 0x20, size 0x4
    float Shear2Dkd; // offset 0x24, size 0x4
    float Bend2Dkf; // offset 0x28, size 0x4
    float Bend2Dkd; // offset 0x2C, size 0x4
    float Wind2DKf; // offset 0x30, size 0x4
};
// Range: 0x800F3444 -> 0x800F3448
void ParticleSystem::DrawForce() {}

// Range: 0x800F3448 -> 0x800F344C
void ParticleSystem::DrawSpeed() {}

// Range: 0x800F344C -> 0x800F351C
// this: r30
void ParticleSystem::ApplyForces() {
    // Local variables
    class Condition * C; // r31
}

// Range: 0x800F351C -> 0x800F3580
// this: r1+0x0
void ParticleSystem::ApplyGravity() {
    // Local variables
    float * pb; // r4
    int i; // r5
}

static int copyInitialVector$539; // size: 0x4, address: 0x8013B47C
static signed char init$540; // size: 0x1, address: 0x8013B480
// Range: 0x800F3580 -> 0x800F37D0
// this: r29
void ParticleSystem::AdvanceSystem() {
    // Local variables
    int i; // r30
    class FlexParticle * pp; // r26
    int i3; // r1+0x8

    // References
    // -> static int copyInitialVector$539;
    // -> static signed char init$540;
    // -> unsigned char cleanInCol;
}

// Range: 0x800F37D0 -> 0x800F37D4
void ParticleSystem::Display() {}

// Range: 0x800F37D4 -> 0x800F3834
// this: r1+0x0
void ParticleSystem::MoveSystem(float x /* r1+0x4 */, float y /* r1+0x8 */, float z /* r1+0xC */) {
    // Local variables
    int i; // r6
}

// Range: 0x800F3834 -> 0x800F38E8
// this: r28
void ParticleSystem::TransformSystem(const class Matrix & m /* r29 */) {
    // Local variables
    class Vector tmp; // r1+0x24
    class Vector tmp2; // r1+0x18
    int i; // r30
}

// Range: 0x800F38E8 -> 0x800F392C
// this: r1+0x0
void ParticleSystem::SetSystemSpeed(const class Vector & speed /* r1+0x4 */) {
    // Local variables
    int i; // r7
}

// Range: 0x800F392C -> 0x800F3958
// this: r1+0x0
void ParticleSystem::SetPosParticle(int i /* r1+0x4 */, float x /* r1+0x8 */, float y /* r1+0xC */, float z /* r1+0x10 */) {}

// Range: 0x800F3958 -> 0x800F39E8
// this: r1+0x0
void ParticleSystem::DynMoveParticle(int i /* r1+0x4 */, const class Vector & v /* r1+0x8 */, float idt /* r1+0xC */) {}

// Range: 0x800F39E8 -> 0x800F3A14
// this: r1+0x0
void ParticleSystem::SetSpeedParticle(int i /* r1+0x4 */, float x /* r1+0x8 */, float y /* r1+0xC */, float z /* r1+0x10 */) {}

// Range: 0x800F3A14 -> 0x800F3A4C
// this: r1+0x0
void ParticleSystem::GetPosParticle(int i /* r1+0x4 */, float & x /* r1+0x8 */, float & y /* r1+0xC */, float & z /* r1+0x10 */) const {}

static float sdist$682; // size: 0x4, address: 0x8013B484
static signed char init$683; // size: 0x1, address: 0x8013B488
// Range: 0x800F3A4C -> 0x800F3CAC
// this: r1+0x8
void ParticleSystem::AddCollision(class FlexParticle * p /* r30 */, float dist /* r1+0x10 */, const float * n /* r31 */, const float * vc /* r1+0x18 */, unsigned char addconstrain /* r1+0x1C */) {
    // Local variables
    float dd; // f4
    float ndv; // r1+0x8
    float nfrict; // f4

    // References
    // -> static float sdist$682;
    // -> static signed char init$683;
}

// Range: 0x800F3CAC -> 0x800F3D1C
// this: r30
void ParticleSystem::FixParticle(int n /* r31 */) {
    // Local variables
    class pm * block; // r3
}

static float tolerance$765; // size: 0x4, address: 0x8013B48C
static signed char init$766; // size: 0x1, address: 0x8013B490
static float compFactor$768; // size: 0x4, address: 0x8013B494
static signed char init$769; // size: 0x1, address: 0x8013B498
// Range: 0x800F3D1C -> 0x800F4094
// this: r29
unsigned char ParticleSystem::TestExtension1D(class FlexParticle * a /* r30 */, class FlexParticle * b /* r31 */, float len /* f30 */, float mxdef /* f31 */) {
    // Local variables
    float dp[3]; // r1+0x3C
    float ndp; // f2
    float def; // r1+0x8

    // References
    // -> unsigned char moveInColl;
    // -> static float tolerance$765;
    // -> static float compFactor$768;
    // -> static signed char init$769;
    // -> static signed char init$766;
}

// total size: 0xC
struct {} FlexJointDef::__vtable; // size: 0xC, address: 0x80116510
// total size: 0x18
class FlexJointDef : public tEntity {
    // Functions
    ~FlexJointDef();

    // Members
public:
    unsigned int nbDef; // offset 0x10, size 0x4
    class FlexJointDefItem * def; // offset 0x14, size 0x4
};
// total size: 0xC
struct {} FlexJointDef::FlexJointDefItem::__vtable; // size: 0xC, address: 0x8011653C
// total size: 0x5C
class FlexJointDefItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned short nbParticle; // offset 0x4, size 0x2
    unsigned short startJoint; // offset 0x6, size 0x2
    unsigned short endJoint; // offset 0x8, size 0x2
    float restStiff; // offset 0xC, size 0x4
    float restStiffd; // offset 0x10, size 0x4
    unsigned char gravity; // offset 0x14, size 0x1
    unsigned short simMethod; // offset 0x16, size 0x2
    unsigned char useRestingPose; // offset 0x18, size 0x1
    unsigned short restMethod; // offset 0x1A, size 0x2
    unsigned short updateMethod; // offset 0x1C, size 0x2
    unsigned char useVirtualJoint; // offset 0x1E, size 0x1
    class ConditionParams flexObjParam; // offset 0x20, size 0x34
    signed short nbCollJoint; // offset 0x54, size 0x2
    signed short * collJoint; // offset 0x58, size 0x4
};
// Range: 0x800F4094 -> 0x800F4108
// this: r30
FlexJointDef::~FlexJointDef() {
    // References
    // -> struct [anonymous] FlexJointDef::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} FlexJointDefLoader::__vtable; // size: 0x1C, address: 0x801164BC
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class FlexJointDefLoader : public tSimpleChunkHandler {
    // Functions
    FlexJointDefLoader();
};
// ERROR: Failed to emit tag 9B3218 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
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
// total size: 0x0
class tEntityStore {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// Range: 0x800F4168 -> 0x800F471C
class tEntity * FlexJointDefLoader::LoadObject(class tChunkFile * f /* r27 */) {
    // Local variables
    char name[128]; // r1+0xD0
    unsigned int nbDef; // r26
    unsigned int redDef; // r1+0x8
    class FlexJointDef * jdef; // r28
    int i; // r25

    // References
    // -> struct [anonymous] FlexJointDef::__vtable;
}

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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AD38
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AD48
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x8013AD50
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x8013AD58
static // total size: 0x8
struct {} FlexJointDefLoader::__RTTI; // size: 0x8, address: 0x8013AD60
static // total size: 0x8
struct {} FlexJointDef::__RTTI; // size: 0x8, address: 0x8013AD68
static // total size: 0x8
struct {} FlexJointDef::FlexJointDefItem::__RTTI; // size: 0x8, address: 0x8013AD70
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013AD80
static // total size: 0x8
struct {} iPhSpeed::__RTTI; // size: 0x8, address: 0x8013AD88
// total size: 0x0
class TList {};
// total size: 0x4
class PhUnits {
    // Static members
    static class TList * fList; // size: 0x4
    static float fT; // size: 0x4
    static float fM; // size: 0x4
    static float fL; // size: 0x4
    static unsigned char fUnitSet; // size: 0x1

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static // total size: 0x8
struct {} ParticleSystem::__RTTI; // size: 0x8, address: 0x8013AD90
static // total size: 0x8
struct {} iPhLength::__RTTI; // size: 0x8, address: 0x8013AD98
static // total size: 0x8
struct {} iPhTime::__RTTI; // size: 0x8, address: 0x8013ADA8
static // total size: 0x8
struct {} Condition::__RTTI; // size: 0x8, address: 0x8013ADB0
static // total size: 0x8
struct {} NullCondition::__RTTI; // size: 0x8, address: 0x8013ADB8
// total size: 0x2C
class NullCondition : public Condition {};
static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013ADC0
static // total size: 0x8
struct {} Wind::__RTTI; // size: 0x8, address: 0x8013ADD0
static // total size: 0x8
struct {} WindSinus::__RTTI; // size: 0x8, address: 0x8013ADD8
// total size: 0x28
class WindSinus : public Wind {
    // Members
protected:
    float freq0; // offset 0x20, size 0x4
    float freq1; // offset 0x24, size 0x4
};
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013ADE0
static // total size: 0x8
struct {} FlexParticleList::__RTTI; // size: 0x8, address: 0x8013ADE8
// total size: 0x28
class pm {
    // Members
public:
    float k[3][3]; // offset 0x0, size 0x24
    int column; // offset 0x24, size 0x4
};
// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    class pm * fArray; // offset 0x8, size 0x4
};



