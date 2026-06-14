/*
    Compile unit: D:\Pure3d\Simulation\physics\PhWorld.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEB78 -> 0x800F0094
*/
float FactMaxDt; // size: 0x4, address: 0x8013AC38
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
class PhCollElList : public VoidPList {};
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
enum GEOM_CODE {
    NO_INTERSECTION = -1,
    ALL_INSIDE = 0,
    ONE_POINT = 1,
    TWO_POINTS = 2,
    THREE_POINTS = 3,
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
// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// total size: 0x48
class PhCollDetect : protected PhCollDetectSub, public AccessCounter {
    // Members
protected:
    unsigned char fQuickDetection; // offset 0x3C, size 0x1
    int fMaxStepNextTest; // offset 0x40, size 0x4
    float fSafeCollDistMultiple; // offset 0x44, size 0x4
};
class PhCollDetect * fCollDetector; // size: 0x4, address: 0x8013B458
// total size: 0x60
class PhCollSolver : public AccessCounter {
    // Members
protected:
    class PhCollisionList * fCollList; // offset 0x8, size 0x4
    class iPhEnv * fEnv; // offset 0xC, size 0x4
    class PhCollision * fCurrColl; // offset 0x10, size 0x4
    class Vector fPa; // offset 0x14, size 0xC
    class Vector fPb; // offset 0x20, size 0xC
    class Vector fVa; // offset 0x2C, size 0xC
    class Vector fVb; // offset 0x38, size 0xC
    class Vector fDV; // offset 0x44, size 0xC
    float fNDVN; // offset 0x50, size 0x4
    float fCollDist; // offset 0x54, size 0x4
    unsigned char fAllSolved; // offset 0x58, size 0x1
    unsigned char fFirst; // offset 0x59, size 0x1
    unsigned char fFullDynColl; // offset 0x5A, size 0x1
    unsigned char fSelfColl; // offset 0x5B, size 0x1
    unsigned char fQuickSolve; // offset 0x5C, size 0x1
};
class PhCollSolver * fCollSolver; // size: 0x4, address: 0x8013B45C
// total size: 0x14
class PhBasicObjList : public VoidPList {};
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
class Filter1D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
class SimpleFilter1D : public Filter1D {
    // Members
protected:
    float fDelta; // offset 0x4, size 0x4
    float fDeltaScl; // offset 0x8, size 0x4
    float fPrevMeasurement; // offset 0xC, size 0x4
    float fDt; // offset 0x10, size 0x4
};
// total size: 0x1E8
class PhRgdBody : public PhParticle {
    // Members
protected:
    class Vector fRcm; // offset 0x120, size 0xC
    class Vector fDRcm0; // offset 0x12C, size 0xC
    unsigned char fDRcmNot0; // offset 0x138, size 0x1
    class Vector fL; // offset 0x13C, size 0xC
    class Vector fW; // offset 0x148, size 0xC
    class PhSymMat fI0; // offset 0x154, size 0x1C
    class PhSymMat fI; // offset 0x170, size 0x1C
    class PhSymMat fIinv; // offset 0x18C, size 0x1C
    class Vector fT; // offset 0x1A8, size 0xC
    class Vector fCacheL; // offset 0x1B4, size 0xC
    class Quaternion fQ; // offset 0x1C0, size 0x10
    class SimpleFilter1D fAngRestCond1D_mag; // offset 0x1D0, size 0x14
};
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// total size: 0x0
class tPose {};
// total size: 0x14
class PhSubSTreeObjList : public VoidPList {};
// total size: 0x0
class PhDOFData {};
// total size: 0x150
class PhSubSTreeObj : public PhBasicObj {
    // Members
protected:
    int fIndex; // offset 0x70, size 0x4
    int fParentIndex; // offset 0x74, size 0x4
    class PhSubSTreeObj * fParentSubObj; // offset 0x78, size 0x4
    class PhSTreeObj * fParentObj; // offset 0x7C, size 0x4
    class PhSubSTreeObjList * fLChildSubObj; // offset 0x80, size 0x4
    unsigned char fSimulate; // offset 0x84, size 0x1
    class PhSymMat fI0; // offset 0x88, size 0x1C
    class Vector fCM0; // offset 0xA4, size 0xC
    class Vector fCM; // offset 0xB0, size 0xC
    float fVolume; // offset 0xBC, size 0x4
    float fCMn; // offset 0xC0, size 0x4
    float fInvStiff; // offset 0xC4, size 0x4
    float fLMax; // offset 0xC8, size 0x4
    float fReactScale; // offset 0xCC, size 0x4
    class PhDOFData * fDOFData; // offset 0xD0, size 0x4
    class Matrix fRotMat; // offset 0xD4, size 0x40
    class Vector fW; // offset 0x114, size 0xC
    class Vector fV; // offset 0x120, size 0xC
    class Vector fDV; // offset 0x12C, size 0xC
    float fCacheAbs; // offset 0x138, size 0x4
    unsigned char fSpeedProblem; // offset 0x13C, size 0x1
    float fFakeInvI; // offset 0x140, size 0x4
    float fWeightModifier; // offset 0x144, size 0x4
    unsigned char fMaxSpeedReached; // offset 0x148, size 0x1
    unsigned char fDone; // offset 0x149, size 0x1
};
// total size: 0xC
class iPhTime : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
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
// total size: 0x240
class PhSTreeObj : public PhRgdBody {
    // Members
protected:
    class iPhEnv * fEnv; // offset 0x1E8, size 0x4
    class tPose * fPose; // offset 0x1EC, size 0x4
    class PhSubSTreeObj * fSubObj; // offset 0x1F0, size 0x4
    int fNbSubObj; // offset 0x1F4, size 0x4
    float fDt; // offset 0x1F8, size 0x4
    unsigned char fSubObjUpToDate; // offset 0x1FC, size 0x1
    float fTimeSinceCalcI0; // offset 0x200, size 0x4
    float fTimeCalcI0; // offset 0x204, size 0x4
    float fTimeSinceLastColl; // offset 0x208, size 0x4
    float fMaxJSpeed; // offset 0x20C, size 0x4
    float fInvTWDTDissip; // offset 0x210, size 0x4
    float fInvTWNewDissip; // offset 0x214, size 0x4
    float fInvWDissip; // offset 0x218, size 0x4
    class PhSubSTreeObj * fCollidingJoint; // offset 0x21C, size 0x4
    class PhSubSTreeObj * fSelfCollisionCenter; // offset 0x220, size 0x4
    unsigned char fSelfCollInProcess; // offset 0x224, size 0x1
    class PhPairElList * fPairCollElList; // offset 0x228, size 0x4
private:
    class Vector fCacheW; // offset 0x22C, size 0xC
    int fStartJoint; // offset 0x238, size 0x4
};
// total size: 0x14
class PhSTreeObjList : public VoidPList {};
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
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x78
class PhWorld {
    // Functions
    PhWorld();

    ~PhWorld();

    void CleanAll();

    void EmptyObjList();

    void EmptyPairCollElList();

    void RemoveObj(class PhBasicObj * obj);

    unsigned char AddObj(class PhBasicObj * newobj, unsigned char collideToAll);

    void SetObjFlag();

    void Collide(class PhCollEl * el1, class PhCollEl * el2);

    void NoCollide(class PhCollEl * el1, class PhCollEl * el2);

    void NoCollide(class PhBasicObj * obj);

    void NoCollide(class PhCollEl * el);

    void CollideToAll(class PhBasicObj * newobj);

    void SetPhEnv(class iPhEnv * env);

    class iPhEnv * GetPhEnv();

    void DetectCollisions();

    void SolveCollisions();

    void AddExternalForce(class PhParticle * obj);

    void IterateOneStep();

    void IterateSubStep();

    void SetTimeStep(float dt);

    void ComputeDtMax();

    void AddSelfCollisionObj(class PhSTreeObj * obj);

    void RemoveSelfCollisionObj(class PhSTreeObj * obj);

    void PushState(class PhWorldState * s);

    class PhWorldState * GetState();

    void FillState(class PhWorldState * s);

    // Static members
    static class PhCollSolver * fCollSolver; // size: 0x4
    static class PhCollDetect * fCollDetector; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhBasicObjList fObjList; // offset 0x4, size 0x14
    class PhPairElList fPairCollElList; // offset 0x18, size 0x14
    class PhSTreeObjList fSelfCollObjList; // offset 0x2C, size 0x14
    class PhCollData * fCollData; // offset 0x40, size 0x4
    class iPhEnv * fEnv; // offset 0x44, size 0x4
    class PhBBox * fBBox; // offset 0x48, size 0x4
    unsigned char fCollNonDynPair; // offset 0x4C, size 0x1
    unsigned char fSubIterate; // offset 0x4D, size 0x1
    float fMaxDt; // offset 0x50, size 0x4
    float fDt; // offset 0x54, size 0x4
    float fDDt; // offset 0x58, size 0x4
    int fNStep; // offset 0x5C, size 0x4
    float fTotalTime; // offset 0x60, size 0x4
    float fTimeDelta; // offset 0x64, size 0x4
    unsigned char fShowAllFrames; // offset 0x68, size 0x1
    int fUpdateCollisionFrequency; // offset 0x6C, size 0x4
    int fUpdateCollisionCall; // offset 0x70, size 0x4
    unsigned char fSelfCollision; // offset 0x74, size 0x1
};
// Range: 0x800EEB78 -> 0x800EEBCC
void PhWorld::RegisterCollSolver(class PhCollSolver * solver /* r31 */) {
    // References
    // -> class PhCollSolver * fCollSolver;
}

// Range: 0x800EEBCC -> 0x800EEBD4
class PhCollSolver * PhWorld::RegisteredCollSolver() {
    // References
    // -> class PhCollSolver * fCollSolver;
}

// Range: 0x800EEBD4 -> 0x800EEBDC
class PhCollDetect * PhWorld::CollDetector() {
    // References
    // -> class PhCollDetect * fCollDetector;
}

// total size: 0x28
struct {} PhWorld::__vtable; // size: 0x28, address: 0x80116194
// total size: 0xC
struct {} PhSTreeObjList::__vtable; // size: 0xC, address: 0x801161E4
// ERROR: Failed to emit tag 98D084 (GlobalSubroutine)
// ERROR: Failed to emit tag 98D114 (GlobalSubroutine)
// Range: 0x800EEED4 -> 0x800EEF18
// this: r31
void PhWorld::CleanAll() {}

// Range: 0x800EEF18 -> 0x800EEFA4
// this: r29
void PhWorld::EmptyObjList() {
    // Local variables
    int i; // r30
}

// Range: 0x800EEFA4 -> 0x800EF014
// this: r29
void PhWorld::EmptyPairCollElList() {
    // Local variables
    int i; // r30
}

// Range: 0x800EF014 -> 0x800EF0CC
// this: r30
void PhWorld::RemoveObj(class PhBasicObj * obj /* r31 */) {}

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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013AC3C
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013AC4C
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013AC54
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013AC64
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x8013AC6C
// Range: 0x800EF0CC -> 0x800EF230
// this: r28
unsigned char PhWorld::AddObj(class PhBasicObj * newobj /* r29 */, unsigned char collideToAll /* r30 */) {
    // Local variables
    unsigned char ret; // r31

    // References
    // -> static struct [anonymous] PhBasicObj::__RTTI;
    // -> static struct [anonymous] PhParticle::__RTTI;
}

// Range: 0x800EF230 -> 0x800EF2BC
// this: r29
void PhWorld::SetObjFlag() {
    // Local variables
    int i; // r30
}

// Range: 0x800EF2BC -> 0x800EF390
// this: r31
void PhWorld::Collide(class PhCollEl * el1 /* r4 */, class PhCollEl * el2 /* r5 */) {
    // Local variables
    class PhPairEl * newpair; // r3
}

// Range: 0x800EF390 -> 0x800EF450
// this: r27
void PhWorld::NoCollide(class PhCollEl * el1 /* r28 */, class PhCollEl * el2 /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EF450 -> 0x800EF474
// this: r3
void PhWorld::NoCollide(class PhBasicObj * obj /* r1+0xC */) {}

// Range: 0x800EF474 -> 0x800EF528
// this: r27
void PhWorld::NoCollide(class PhCollEl * el /* r28 */) {
    // Local variables
    int found; // r30
    int i; // r29
}

// Range: 0x800EF528 -> 0x800EF5CC
// this: r27
void PhWorld::CollideToAll(class PhBasicObj * newobj /* r28 */) {
    // Local variables
    class PhCollEl * newEl; // r30
    int i; // r29
    class PhCollEl * el; // r3
    class PhPairEl * newpair; // r3
}

// Range: 0x800EF5CC -> 0x800EF68C
// this: r29
void PhWorld::SetPhEnv(class iPhEnv * env /* r30 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EF68C -> 0x800EF694
// this: r3
class iPhEnv * PhWorld::GetPhEnv() {}

// total size: 0x4
class ListLocker {
    // Members
    class VoidPList * fList; // offset 0x0, size 0x4
};
// Range: 0x800EF694 -> 0x800EF7E4
// this: r31
void PhWorld::DetectCollisions() {
    // Local variables
    class ListLocker lock1; // r1+0x50
    class ListLocker lock2; // r1+0x4C
    int i; // r29

    // References
    // -> class PhCollDetect * fCollDetector;
}

// Range: 0x800EF7E4 -> 0x800EF818
// this: r4
void PhWorld::SolveCollisions() {
    // References
    // -> class PhCollSolver * fCollSolver;
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
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800EF818 -> 0x800EF8D4
// this: r30
void PhWorld::AddExternalForce(class PhParticle * obj /* r31 */) {
    // Local variables
    class Vector v; // r1+0x1C
}

// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
};
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
};
// total size: 0x14
class iPhDynObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fDensity; // offset 0xC, size 0x4
    float fDensityCGS; // offset 0x10, size 0x4
};
// total size: 0x4
class Filter3D {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x2C
class SimpleFilter3D : public Filter3D {
    // Members
protected:
    class Vector fDelta; // offset 0x4, size 0xC
    class Vector fDeltaScl; // offset 0x10, size 0xC
    class Vector fPrevMeasurement; // offset 0x1C, size 0xC
    float fDt; // offset 0x28, size 0x4
};
// total size: 0x2C
class SimpleFilterAbs3D : public SimpleFilter3D {};
// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
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
// total size: 0x120
class PhParticle : public PhObj {
    // Members
protected:
    float fInvMass; // offset 0xB8, size 0x4
    float fMass; // offset 0xBC, size 0x4
    float fVolumei; // offset 0xC0, size 0x4
    float fVolume; // offset 0xC4, size 0x4
    class Vector fV; // offset 0xC8, size 0xC
    class iPhDynObjParam * fDynParam; // offset 0xD4, size 0x4
    class Vector fCacheV; // offset 0xD8, size 0xC
    class Vector fF; // offset 0xE4, size 0xC
    signed short fTmpCtrl; // offset 0xF0, size 0x2
    class SimpleFilterAbs3D fLinRestCond; // offset 0xF4, size 0x2C
};
static unsigned char USEFIXDT; // size: 0x1, address: 0x8013B460
// Range: 0x800EF8D4 -> 0x800EF950
// this: r30
void PhWorld::IterateOneStep() {
    // Local variables
    int j; // r31
}

// Range: 0x800EF950 -> 0x800EF9F4
// this: r29
void PhWorld::IterateSubStep() {
    // Local variables
    int i; // r30

    // References
    // -> class PhCollSolver * fCollSolver;
}

// Range: 0x800EF9F4 -> 0x800EFB4C
// this: r1+0x8
void PhWorld::SetTimeStep(float dt /* f1 */) {
    // References
    // -> static unsigned char USEFIXDT;
}

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
class PhTime : public iPhTime {};
// ERROR: Failed to emit tag 9989FE (GlobalSubroutine)
// Range: 0x800EFE14 -> 0x800EFE78
// this: r30
void PhWorld::AddSelfCollisionObj(class PhSTreeObj * obj /* r31 */) {}

// Range: 0x800EFE78 -> 0x800EFE9C
// this: r3
void PhWorld::RemoveSelfCollisionObj(class PhSTreeObj * obj /* r4 */) {}

// Range: 0x800EFE9C -> 0x800EFF68
// this: r28
void PhWorld::PushState(class PhWorldState * s /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EFF68 -> 0x800EFFCC
// this: r31
class PhWorldState * PhWorld::GetState() {
    // Local variables
    class PhWorldState * state; // r4
}

// total size: 0x10
class PhWorldState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float fTotalTime; // offset 0x4, size 0x4
    int fNbSubObj; // offset 0x8, size 0x4
    class PhBasicObjState * * fSubObjState; // offset 0xC, size 0x4
};
// Range: 0x800EFFCC -> 0x800F0074
// this: r28
void PhWorld::FillState(class PhWorldState * s /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800F0074 -> 0x800F0094
void PhWorld::TryAbsorbCache(class Vector & v /* r1+0x8 */, class Vector & w /* r1+0xC */) {}

static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013AC7C
static // total size: 0x8
struct {} iPhLength::__RTTI; // size: 0x8, address: 0x8013AC84
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
struct {} iPhTime::__RTTI; // size: 0x8, address: 0x8013AC94
static // total size: 0x8
struct {} PhWorld::__RTTI; // size: 0x8, address: 0x8013ACA4
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013ACAC
static // total size: 0x8
struct {} PhSTreeObjList::__RTTI; // size: 0x8, address: 0x8013ACB4



