/*
    Compile unit: D:\Pure3d\Simulation\simai\simflex.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BFF10 -> 0x800C1304
*/
static unsigned char SET_FIX_SPEED; // size: 0x1, address: 0x8013B310
static float RadiusRatio; // size: 0x4, address: 0x8013A298
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
class Vector ZEROVECTOR; // size: 0xC, address: 0x80137358
class Vector XVECTOR; // size: 0xC, address: 0x80137364
// total size: 0x34
struct {} FlexCylinder::__vtable; // size: 0x34, address: 0x80113458
enum CollElEnum {
    CollEl = 0,
    SphereEl = 1,
    CylEl = 2,
    ConeEl = 3,
    OBBoxEl = 4,
    WallEl = 5,
    BBoxEl = 6,
    MaxCollElEnum = 7,
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
class PhCollElList : public VoidPList {};
// total size: 0x14
class PhBasicObjList : public VoidPList {};
// total size: 0x40
class PhCollEl {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class Vector fP; // offset 0x4, size 0xC
    class Vector fBSize; // offset 0x10, size 0xC
    float fSR; // offset 0x1C, size 0x4
protected:
    enum CollElEnum fType; // offset 0x20, size 0x4
    int fObjRef; // offset 0x24, size 0x4
    class PhBasicObj * fObj; // offset 0x28, size 0x4
    class PhCollElList * fSubElemList; // offset 0x2C, size 0x4
    int fLevel; // offset 0x30, size 0x4
    unsigned char fUpdated; // offset 0x34, size 0x1
    unsigned char fApproxBSize; // offset 0x35, size 0x1
private:
    class Vector * fDP; // offset 0x38, size 0x4
    int fAIRef; // offset 0x3C, size 0x4
};
// total size: 0x6C
class PhCyl : public PhCollEl {
    // Members
public:
    class Vector fO; // offset 0x40, size 0xC
    float fL; // offset 0x4C, size 0x4
    float fR; // offset 0x50, size 0x4
    unsigned char fFlatEnd; // offset 0x54, size 0x1
protected:
    class Vector fOi; // offset 0x58, size 0xC
    float fLi; // offset 0x64, size 0x4
    float fRi; // offset 0x68, size 0x4
};
// total size: 0x6C
class FlexCylinder : public PhCyl {};
// total size: 0x1C
struct {} SimNodeBase::__vtable; // size: 0x1C, address: 0x80113400
int gRefIndex; // size: 0x4, address: 0x8013B368
class SimNodeBase * gNodeList[100]; // size: 0x190, address: 0x801373C0
// total size: 0x40
struct {} SimFlex::__vtable; // size: 0x40, address: 0x8011338C
// total size: 0xC
struct {} TList<PhObj*>::__vtable; // size: 0xC, address: 0x801133F4
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// total size: 0x18
class PhPairEl {
    // Static members
    static unsigned char fUseAtRest; // size: 0x1
    static class PhPairElList * fBuffList; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhCollEl * fEla; // offset 0x4, size 0x4
    class PhCollEl * fElb; // offset 0x8, size 0x4
    int fCollide; // offset 0xC, size 0x4
    unsigned char fAtRest; // offset 0x10, size 0x1
    int fStepNextTest; // offset 0x14, size 0x4
};
// total size: 0x14
class PhPairElList : public VoidPList {};
// total size: 0x94
class PhCollision {
    // Members
public:
    class PhCollEl * fEla; // offset 0x0, size 0x4
    class PhCollEl * fElb; // offset 0x4, size 0x4
    class Vector fN; // offset 0x8, size 0xC
    float fDist; // offset 0x14, size 0x4
    unsigned char fDyn; // offset 0x18, size 0x1
    unsigned char fFixRest; // offset 0x19, size 0x1
    unsigned char fValid; // offset 0x1A, size 0x1
    class PhBasicObj * fObja; // offset 0x1C, size 0x4
    class PhBasicObj * fObjb; // offset 0x20, size 0x4
    unsigned char fQuickSolve; // offset 0x24, size 0x1
    class PhSymMat fMx; // offset 0x28, size 0x1C
    class PhSymMat fMa; // offset 0x44, size 0x1C
    class PhSymMat fMb; // offset 0x60, size 0x1C
protected:
    class Vector fPa; // offset 0x7C, size 0xC
    class Vector fPb; // offset 0x88, size 0xC
};
// total size: 0x14
class PhCollisionList : public VoidPList {};
// total size: 0x2C
class PhCollData {
    // Static members
    static class PhCollisionList * fBuffList; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhCollisionList fCollList; // offset 0x4, size 0x14
    class PhCollisionList fUpdateCollList; // offset 0x18, size 0x14
};
enum GEOM_CODE {
    NO_INTERSECTION = -1,
    ALL_INSIDE = 0,
    ONE_POINT = 1,
    TWO_POINTS = 2,
    THREE_POINTS = 3,
};
// total size: 0xA0
class PhOBBox : public PhCollEl {
    // Members
public:
    class Vector fO[3]; // offset 0x40, size 0x24
    float fL[3]; // offset 0x64, size 0xC
protected:
    class Vector fOi[3]; // offset 0x70, size 0x24
    float fLi[3]; // offset 0x94, size 0xC
};
// total size: 0x34
class PhCollDetectSub {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhPairElList * fPairList; // offset 0x4, size 0x4
    class PhCollData * fCollData; // offset 0x8, size 0x4
    int fLevel; // offset 0xC, size 0x4
    float fCollDist; // offset 0x10, size 0x4
    class Vector fT; // offset 0x14, size 0xC
    class Vector fN; // offset 0x20, size 0xC
    float fNt; // offset 0x2C, size 0x4
    int fNewColl; // offset 0x30, size 0x4
};
// total size: 0x58
class PhWall : public PhCollEl {
    // Members
public:
    class Vector fN; // offset 0x40, size 0xC
protected:
    class Vector fNi; // offset 0x4C, size 0xC
};
// total size: 0x48
class PhCollDetect : protected PhCollDetectSub, public AccessCounter {
    // Members
protected:
    unsigned char fQuickDetection; // offset 0x3C, size 0x1
    int fMaxStepNextTest; // offset 0x40, size 0x4
    float fSafeCollDistMultiple; // offset 0x44, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0xD0
class SimFlex : public SimNodeBase {
    // Functions
    SimFlex();

    ~SimFlex();

    void SetScale(float f);

    void SetInternalParams(const class ConditionParams & p);

    void SynchronizeParticleSystem();

    void CreateCollEl();

    void DetectAndSolveCollision();

    void SolveCollision(class PhCollEl * curEl, unsigned char addImpToObj);

    void SolveCylCollision(class PhCyl * cyl, int i);

    void SolveInterCollision(class PhCollEl * curEl);

    void AddImpulseToObj(float * vc, class Vector & pc, class FlexParticle * fp, class Vector & n);

    void UpdateAttachedParticles(float dt);

    void Update(float dt);

    void DebugDisplay();

    // Members
public:
    class ParticleSystem * psyst; // offset 0x10, size 0x4
    class PhObj * currentPhObj; // offset 0x14, size 0x4
    class SimTarget * * target; // offset 0x18, size 0x4
    int pindex[10]; // offset 0x1C, size 0x28
    int nbFixParticle; // offset 0x44, size 0x4
    class PhBBox localCollel; // offset 0x48, size 0x40
    class PhSphere * interCollel; // offset 0x88, size 0x4
    float radius; // offset 0x8C, size 0x4
    class PhCollDetect * collDetector; // offset 0x90, size 0x4
    class PhCollData * collData; // offset 0x94, size 0x4
    class TList collideObjList; // offset 0x98, size 0x14
    class TList intercollideObjList; // offset 0xAC, size 0x14
protected:
    float system_scale; // offset 0xC0, size 0x4
    float impScale; // offset 0xC4, size 0x4
    class Matrix * extTransform; // offset 0xC8, size 0x4
    unsigned char isActivated; // offset 0xCC, size 0x1
};
// Range: 0x800BFF10 -> 0x800C000C
// this: r1+0x8
SimFlex::SimFlex() {
    // References
    // -> struct [anonymous] TList<PhObj*>::__vtable;
    // -> struct [anonymous] SimFlex::__vtable;
    // -> class SimNodeBase * gNodeList[100];
    // -> int gRefIndex;
    // -> struct [anonymous] SimNodeBase::__vtable;
}

// total size: 0x18
class SimMatrixTarget : public SimTarget {
    // Members
protected:
    class Matrix * target; // offset 0x14, size 0x4
};
// Range: 0x800C0070 -> 0x800C0180
// this: r28
SimFlex::~SimFlex() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] TList<PhObj*>::__vtable;
    // -> struct [anonymous] SimFlex::__vtable;
}

// Range: 0x800C0180 -> 0x800C026C
// this: r31
void SimFlex::SetScale(float f /* f30 */) {
    // Local variables
    float ratio; // f31
    int i; // r6

    // References
    // -> static float RadiusRatio;
}

// Range: 0x800C026C -> 0x800C02D8
// this: r1+0x0
void SimFlex::SetInternalParams(const class ConditionParams & p /* r1+0x4 */) {}

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
// total size: 0x0
class SparseBlockMatrix {};
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
// total size: 0x0
class TArray {};
// total size: 0x14
class FlexParticleList : public VoidPList {};
// total size: 0x0
class Wind {};
// total size: 0x98
class ParticleSystem : public tEntity {
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
// Range: 0x800C02D8 -> 0x800C0398
// this: r31
void SimFlex::SynchronizeParticleSystem() {
    // Local variables
    class Vector p; // r1+0x58
    class Vector pos; // r1+0x4C
}

// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// Range: 0x800C0398 -> 0x800C0488
// this: r28
void SimFlex::CreateCollEl() {
    // Local variables
    int i; // r30
    class Vector pos; // r1+0x10
    class PhSphere * s; // r29

    // References
    // -> class Vector ZEROVECTOR;
}

static unsigned char USE_FLEXCYL$448; // size: 0x1, address: 0x8013B311
static signed char init$449; // size: 0x1, address: 0x8013B312
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A29C
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A2AC
static // total size: 0x8
struct {} ParticleSystem::__RTTI; // size: 0x8, address: 0x8013A2B4
static // total size: 0x8
struct {} ParticleSystem1D::__RTTI; // size: 0x8, address: 0x8013A2BC
// Range: 0x800C0488 -> 0x800C08F8
// this: r25
void SimFlex::DetectAndSolveCollision() {
    // Local variables
    int i; // r6
    class PhCollEl * s; // r4
    class FlexParticle * p; // r3
    class PhCollEl * objCollEl; // r26
    class FlexCylinder cyl; // r1+0xF0
    int j; // r22
    float pos[3]; // r1+0xCC
    int j; // r22
    class PhCollEl * curEl; // r21

    // References
    // -> struct [anonymous] FlexCylinder::__vtable;
    // -> class Vector XVECTOR;
    // -> class Vector ZEROVECTOR;
    // -> static unsigned char USE_FLEXCYL$448;
    // -> static struct [anonymous] ParticleSystem::__RTTI;
    // -> static struct [anonymous] ParticleSystem1D::__RTTI;
    // -> static signed char init$449;
}

// Range: 0x800C08F8 -> 0x800C09E8
// this: r30
void SimFlex::SolveCollision(class PhCollEl * curEl /* r31 */, unsigned char addImpToObj /* r1+0x10 */) {
    // Local variables
    int k; // r27
    float vc[3]; // r1+0x64
    float n[3]; // r1+0x58
    class Vector pc; // r1+0x4C
    class FlexParticle * fp; // r26
    class Vector v; // r1+0x40
}

static unsigned char collconst$673; // size: 0x1, address: 0x8013B313
static signed char init$674; // size: 0x1, address: 0x8013B314
// Range: 0x800C09E8 -> 0x800C0BCC
// this: r27
void SimFlex::SolveCylCollision(class PhCyl * cyl /* r28 */, int i /* r1+0x10 */) {
    // Local variables
    int k; // r29
    float vc[3]; // r1+0x70
    float n[3]; // r1+0x64
    float ll; // f29
    class Vector pc; // r1+0x58
    class Vector v; // r1+0x4C

    // References
    // -> static unsigned char collconst$673;
    // -> static signed char init$674;
}

static unsigned char collconst$720; // size: 0x1, address: 0x8013B315
static signed char init$721; // size: 0x1, address: 0x8013B316
// Range: 0x800C0BCC -> 0x800C0CE8
// this: r26
void SimFlex::SolveInterCollision(class PhCollEl * curEl /* r27 */) {
    // Local variables
    int k; // r29
    float vc[3]; // r1+0x74
    float n[3]; // r1+0x68
    class Vector pc; // r1+0x5C
    int j; // r28
    class Vector v; // r1+0x50

    // References
    // -> static unsigned char collconst$720;
    // -> static signed char init$721;
}

// total size: 0x1C
class PhSymMat {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float xx; // offset 0x4, size 0x4
    float xy; // offset 0x8, size 0x4
    float xz; // offset 0xC, size 0x4
    float yy; // offset 0x10, size 0x4
    float yz; // offset 0x14, size 0x4
    float zz; // offset 0x18, size 0x4
};
// Range: 0x800C0CE8 -> 0x800C0EBC
// this: r31
void SimFlex::AddImpulseToObj(float * vc /* r26 */, class Vector & pc /* r27 */, class FlexParticle * fp /* r28 */, class Vector & n /* r29 */) {
    // Local variables
    unsigned char ok; // r30
    class PhSymMat m; // r1+0x58
    float particleMass; // f4
    class Vector v; // r1+0x40
    class SimNodeBase * node; // r29
}

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
// total size: 0x0
class PhWorld {};
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
};
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
// total size: 0x24
class iPhBasicObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fRestCoeff; // offset 0xC, size 0x4
    float fTangRestCoeff; // offset 0x10, size 0x4
    float fFrictCoeff; // offset 0x14, size 0x4
    float fCollDist; // offset 0x18, size 0x4
    float fFrictCoeffCGS; // offset 0x1C, size 0x4
    float fCollDistCGS; // offset 0x20, size 0x4
};
// total size: 0x0
class PhBasicObjState {};
// total size: 0x70
class PhBasicObj : public tEntity {
    // Static members
    static int sPhBasicObjRefIndex; // size: 0x4
    static float Small_Speed; // size: 0x4

    // Members
public:
    void * userData; // offset 0x10, size 0x4
    char fStringData[24]; // offset 0x14, size 0x18
protected:
    class Vector fR; // offset 0x2C, size 0xC
    signed short fType; // offset 0x38, size 0x2
    signed short fControl; // offset 0x3A, size 0x2
    class PhCollEl * fCollEl; // offset 0x3C, size 0x4
    unsigned char fCollElPreUpdated; // offset 0x40, size 0x1
    class PhWorld * fWorld; // offset 0x44, size 0x4
    class iPhBasicObjParam * fBasicParam; // offset 0x48, size 0x4
    unsigned char fCacheEmpty; // offset 0x4C, size 0x1
    unsigned char fHollow; // offset 0x4D, size 0x1
    int fRefIndex; // offset 0x50, size 0x4
    float fSleepTime; // offset 0x54, size 0x4
private:
    unsigned char justCollide; // offset 0x58, size 0x1
    float fTypicalLinVel; // offset 0x5C, size 0x4
    float fTypicalAngVel; // offset 0x60, size 0x4
    float fTypicalLength; // offset 0x64, size 0x4
    float fTypicalPeriod; // offset 0x68, size 0x4
};
// total size: 0x0
class SimGroup {};
// total size: 0x10
class SimNodeBase {
    // Static members
    static int gRefIndex; // size: 0x4
    static class SimNodeBase * gNodeList[100]; // size: 0x190

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class Matrix * rootMatrix; // offset 0x4, size 0x4
    class SimGroup * simGroup; // offset 0x8, size 0x4
    int refIndex; // offset 0xC, size 0x4
};
// Range: 0x800C0EBC -> 0x800C0FF8
void SimFlex::PrepareColl(class PhCollision * c /* r28 */, class PhCollEl * curEl /* r1+0x10 */, class Vector & p /* r29 */, float * vc /* r30 */, float * n /* r31 */) {
    // Local variables
    class Vector v; // r1+0x44
}

// Range: 0x800C0FF8 -> 0x800C1118
// this: r26
void SimFlex::UpdateAttachedParticles(float dt /* r1+0xC */) {
    // Local variables
    int i; // r27
    class Vector pos; // r1+0x28
    class Vector v; // r1+0x1C

    // References
    // -> static unsigned char SET_FIX_SPEED;
}

static unsigned char doCollision$844; // size: 0x1, address: 0x8013B317
static signed char init$845; // size: 0x1, address: 0x8013B318
// Range: 0x800C1118 -> 0x800C11EC
// this: r31
void SimFlex::Update(float dt /* f31 */) {
    // References
    // -> static unsigned char doCollision$844;
    // -> static signed char init$845;
}

unsigned char drawforce; // size: 0x1, address: 0x8013B319
unsigned char drawspeed; // size: 0x1, address: 0x8013B31A
static unsigned char dcollel; // size: 0x1, address: 0x8013B31B
static unsigned char drawintercollel; // size: 0x1, address: 0x8013B31C
// Range: 0x800C11EC -> 0x800C12D8
// this: r31
void SimFlex::DebugDisplay() {
    // Local variables
    float pos[3]; // r1+0xC

    // References
    // -> static unsigned char drawintercollel;
    // -> static unsigned char dcollel;
    // -> unsigned char drawspeed;
    // -> unsigned char drawforce;
}

// Range: 0x800C12D8 -> 0x800C12DC
void SimFlex::PushRootMatrix() {}

static // total size: 0x8
struct {} SimNodeBase::__RTTI; // size: 0x8, address: 0x8013A2CC
static // total size: 0x8
struct {} SimFlex::__RTTI; // size: 0x8, address: 0x8013A2D4
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A2DC
static // total size: 0x8
struct {} TList<PhObj*>::__RTTI; // size: 0x8, address: 0x8013A2E4
static // total size: 0x8
struct {} PhCollEl::__RTTI; // size: 0x8, address: 0x8013A2EC
static // total size: 0x8
struct {} PhCyl::__RTTI; // size: 0x8, address: 0x8013A2FC
static // total size: 0x8
struct {} FlexCylinder::__RTTI; // size: 0x8, address: 0x8013A304



