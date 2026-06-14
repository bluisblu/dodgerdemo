/*
    Compile unit: D:\Pure3d\Simulation\simai\simgroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C5568 -> 0x800C6BF0
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80137370
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B350
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8013737C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80137388
float LSCALE; // size: 0x4, address: 0x8013A368
float MSCALE; // size: 0x4, address: 0x8013A36C
float TSCALE; // size: 0x4, address: 0x8013A370
int simGroupCounter; // size: 0x4, address: 0x8013B354
// total size: 0x38
struct {} SimGroup::__vtable; // size: 0x38, address: 0x80113680
// total size: 0xC
struct {} TList<SimNode*>::__vtable; // size: 0xC, address: 0x80113888
// total size: 0xC
struct {} TList<SimNodeArticulated*>::__vtable; // size: 0xC, address: 0x8011385C
// total size: 0xC
struct {} TList<SimFlex*>::__vtable; // size: 0xC, address: 0x80113828
unsigned char fUnitSet; // size: 0x1, address: 0x8013B3B0
// total size: 0x10
struct {} PhUnitsManager::__vtable; // size: 0x10, address: 0x80114510
// total size: 0x20
struct {} PhEnv::__vtable; // size: 0x20, address: 0x801137DC
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
class PhBasicObjList : public VoidPList {};
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
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
enum Axis {
    AXIS_X = 1,
    AXIS_Y = 2,
    AXIS_Z = 4,
};
// total size: 0x108
class Joint {
    // Members
public:
    unsigned long long uid; // offset 0x0, size 0x8
    int parentIndex; // offset 0x8, size 0x4
    int dof; // offset 0xC, size 0x4
    class Matrix restPose; // offset 0x10, size 0x40
    class Matrix worldMatrix; // offset 0x50, size 0x40
    class Matrix inverseWorldMatrix; // offset 0x90, size 0x40
    enum Axis freeAxes; // offset 0xD0, size 0x4
    enum Axis primaryAxis; // offset 0xD4, size 0x4
    enum Axis secondaryAxis; // offset 0xD8, size 0x4
    enum Axis twistAxis; // offset 0xDC, size 0x4
    long mappedJointIndex; // offset 0xE0, size 0x4
    float xAxisMap; // offset 0xE4, size 0x4
    float yAxisMap; // offset 0xE8, size 0x4
    float zAxisMap; // offset 0xEC, size 0x4
    class Vector restPoseYZXEuler; // offset 0xF0, size 0xC
    unsigned char preserveBoneLengths; // offset 0xFC, size 0x1
    int pad1; // offset 0x100, size 0x4
    int pad2; // offset 0x104, size 0x4
};
// total size: 0x18
class tSkeleton : public tEntity {
    // Members
protected:
    int nJoint; // offset 0x10, size 0x4
    class Joint * joint; // offset 0x14, size 0x4
};
// total size: 0x90
class Joint {
    // Members
public:
    class Matrix objectMatrix; // offset 0x0, size 0x40
    class Matrix worldMatrix; // offset 0x40, size 0x40
    class Joint * parent; // offset 0x80, size 0x4
    unsigned int pad[3]; // offset 0x84, size 0xC
};
// total size: 0x18
class tPose : public tRefCounted {
    // Members
protected:
    int nJoint; // offset 0x8, size 0x4
    class tSkeleton * skeleton; // offset 0xC, size 0x4
    class Joint * joint; // offset 0x10, size 0x4
    unsigned char poseReady; // offset 0x14, size 0x1
};
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
// total size: 0x0
class PhCollData {};
// total size: 0x40
class PhBBox : public PhCollEl {};
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
// total size: 0x0
class PhCollDetect {};
// total size: 0x10
class PhWorldState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float fTotalTime; // offset 0x4, size 0x4
    int fNbSubObj; // offset 0x8, size 0x4
    class PhBasicObjState * * fSubObjState; // offset 0xC, size 0x4
};
// total size: 0xC
class PhTime : public iPhTime {};
// total size: 0x78
class PhWorld {
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
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
enum SimStateLinkEnum {
    LinkLost = 0,
    LinkCaught = 1,
    LinkPull = 2,
    LinkPullP = 3,
    LinkContact = 4,
};
// total size: 0x54
class ImpulseLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhSubSTreeObj * fJoint; // offset 0x4, size 0x4
    class SimTarget * fTarget; // offset 0x8, size 0x4
    float fIntensity; // offset 0xC, size 0x4
    float fMinDist; // offset 0x10, size 0x4
    class Vector fObjPos; // offset 0x14, size 0xC
    class Vector fImpulse; // offset 0x20, size 0xC
    class Vector fImpulsePos; // offset 0x2C, size 0xC
    class Vector fN; // offset 0x38, size 0xC
    enum SimStateLinkEnum fState; // offset 0x44, size 0x4
protected:
    float fMindIKOffset; // offset 0x48, size 0x4
    float fDissipDist; // offset 0x4C, size 0x4
    float fFilteredDist; // offset 0x50, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class ImpulseLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// total size: 0x0
class IKanDriver {};
// total size: 0x20
class IKanLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class IKanDriver * ikanDriver; // offset 0x4, size 0x4
    class SimTarget * target; // offset 0x8, size 0x4
    unsigned char solveForPos; // offset 0xC, size 0x1
    char name[16]; // offset 0xD, size 0x10
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class IKanLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
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
// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
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
// total size: 0xD0
class SimFlex : public SimNodeBase {
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
enum RestPositionMethodEnum {
    RELATIVE1 = 1,
    RELATIVE2 = 2,
    RELATIVE3 = 3,
    RELATIVE4 = 4,
    RELATIVE5 = 5,
    RELATIVE6 = 6,
};
enum UpdateJointsMethodEnum {
    SIMPLEDEF1 = 1,
    SIMPLEDEF2 = 2,
    SIMPLEDEF3 = 3,
};
enum SimMethodEnum {
    SIMMETHOD1 = 1,
};
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
// total size: 0x1C4
class SimFlexJoint : public SimFlex {
    // Members
protected:
    class PhSTreeObj * hookPhObj; // offset 0xD0, size 0x4
    class Joint virtualJoint; // offset 0xD4, size 0x90
private:
    class tPose * pose; // offset 0x164, size 0x4
    int njoints; // offset 0x168, size 0x4
    int * jointIndex; // offset 0x16C, size 0x4
    class ConditionParams restCP; // offset 0x170, size 0x34
    float * len; // offset 0x1A4, size 0x4
    class PhCollElList * collJointElList; // offset 0x1A8, size 0x4
    unsigned char absorbPop; // offset 0x1AC, size 0x1
    float aveLen; // offset 0x1B0, size 0x4
    enum RestPositionMethodEnum RestPositionMethod; // offset 0x1B4, size 0x4
    enum UpdateJointsMethodEnum UpdateJointsMethod; // offset 0x1B8, size 0x4
    enum SimMethodEnum SimMethod; // offset 0x1BC, size 0x4
    unsigned char useRestingPose; // offset 0x1C0, size 0x1
    unsigned char useVirtualJoint; // offset 0x1C1, size 0x1
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class SimFlexJointMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
enum LookAtControlEnum {
    LookAtEmpty = 0,
    LookAtDissipating = 1,
    LookAtActivated = 2,
};
// total size: 0x0
class TArray {};
// total size: 0x94
class TrackerLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class tPose * pose; // offset 0x4, size 0x4
    class SimTarget * lookAt; // offset 0x8, size 0x4
    int trackerJoint; // offset 0xC, size 0x4
    float trackerJointDef; // offset 0x10, size 0x4
    enum LookAtControlEnum lookAtControl; // offset 0x14, size 0x4
    class Vector lookAtDir0; // offset 0x18, size 0xC
    class Vector axis0; // offset 0x24, size 0xC
    unsigned char trackVertical; // offset 0x30, size 0x1
    float trackerJointDefVertical; // offset 0x34, size 0x4
    float speedH; // offset 0x38, size 0x4
    float speedV; // offset 0x3C, size 0x4
    float maxangleH; // offset 0x40, size 0x4
    float maxangleV; // offset 0x44, size 0x4
    float goodEnough; // offset 0x48, size 0x4
    class TArray * jointDep; // offset 0x4C, size 0x4
    unsigned char seeTarget; // offset 0x50, size 0x1
    unsigned char useAnimJointLocalMat; // offset 0x51, size 0x1
    class Matrix jointLocalMat; // offset 0x54, size 0x40
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
// total size: 0x4
class tPosable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tDrawablePose : public tDrawable, public tPosable {
    // Members
protected:
    class tSkeleton * skeleton; // offset 0x14, size 0x4
    class tPose * pose; // offset 0x18, size 0x4
};
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xC
class DrawableElement : public DisplayListDrawable {
    // Members
protected:
    unsigned char visible; // offset 0x4, size 0x1
    unsigned char isTranslucent; // offset 0x5, size 0x1
    class tPose * pose; // offset 0x8, size 0x4
};
// total size: 0x10
class DisplayList {
    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
};
// total size: 0x68
class tCompositeDrawable : public tDrawablePose {
    // Members
    struct tBox3D boundingBox; // offset 0x20, size 0x18
    struct tSphere boundingSphere; // offset 0x38, size 0x10
    int elementArraySize; // offset 0x48, size 0x4
    int nElements; // offset 0x4C, size 0x4
    class DrawableElement * * elements; // offset 0x50, size 0x4
    class DisplayList translucentObjects; // offset 0x54, size 0x10
};
// total size: 0x10
class PhCompositeElement {
    // Members
public:
    class DrawableElement * fDE; // offset 0x0, size 0x4
    class PhCollEl * fEl; // offset 0x4, size 0x4
    int fJointIndex; // offset 0x8, size 0x4
    unsigned char fVisible; // offset 0xC, size 0x1
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x40
class PhComposite : public tEntity {
    // Members
protected:
    class tCompositeDrawable * fCompositeDrawable; // offset 0x10, size 0x4
    class PhSubSTreeObj * fSubObj; // offset 0x14, size 0x4
    class PhSTreeObj * fCompositePhObj; // offset 0x18, size 0x4
    class TList fPhCompositeElementList; // offset 0x1C, size 0x14
    float fTotVol; // offset 0x30, size 0x4
    int * fJointOccupation; // offset 0x34, size 0x4
    unsigned char fVisible; // offset 0x38, size 0x1
};
// total size: 0x40
class VirtualCM {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class Vector vP; // offset 0x4, size 0xC
    class Vector vS; // offset 0x10, size 0xC
    class Vector vA; // offset 0x1C, size 0xC
    float invTP; // offset 0x28, size 0x4
    float invTS; // offset 0x2C, size 0x4
    float invTA; // offset 0x30, size 0x4
    float restP; // offset 0x34, size 0x4
    float restS; // offset 0x38, size 0x4
    unsigned char verticalVcm; // offset 0x3C, size 0x1
};
// total size: 0xA0
class SimNodeArticulated : public SimNode {
    // Members
protected:
    float wdtDissipHybrid; // offset 0x20, size 0x4
    float wdtDissipFullPhysics; // offset 0x24, size 0x4
    class ImpulseLinkMgr * impulseLinkMgr; // offset 0x28, size 0x4
    class IKanLinkMgr * ikanLinkMgr; // offset 0x2C, size 0x4
    class SimFlexJointMgr * simFlexJointMgr; // offset 0x30, size 0x4
    class TrackerLink * trackerLink; // offset 0x34, size 0x4
    class PhComposite * phcomp; // offset 0x38, size 0x4
    class Vector bbVect; // offset 0x3C, size 0xC
    class VirtualCM virtualCM; // offset 0x48, size 0x40
    float height; // offset 0x88, size 0x4
    float frontDev; // offset 0x8C, size 0x4
    float sideDev; // offset 0x90, size 0x4
    float strength; // offset 0x94, size 0x4
    float strength_up; // offset 0x98, size 0x4
    float updateTime; // offset 0x9C, size 0x4
};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class TrackerLinkMgr {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {};
// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {};
// total size: 0x6C
class SimGroup {
    // Functions
    SimGroup();

    void CleanAll();

    void AddSimNodeArticulated(class SimNodeArticulated * ch);

    void AddSimNode(class SimNode * node);

    void AddSimFlex(class SimFlex * f);

    void UpdateNodeVisibility(class SimNodeArticulated * n);

    void Update(float dt);

    class SimNode * FindSimNode(unsigned long long name);

    class SimNode * NewSimNode(class PhObj * obj, class Matrix * rm);

    class SimNodeArticulated * NewSimNodeArticulated(class PhSTreeObj * obj, class tPose * pose, class Matrix * rm);

    class SimNodeArticulated * AddSkin(class PhSTreeObj * ph, class Matrix * transform, class tPose * pose, class PhComposite * phc);

    class SimNode * AddGeom(class PhObj * ph, class Matrix * transform, unsigned char moving);

    unsigned char RemoveSimNode(class SimNode * node);

    void SwitchSimNodeArticulatedControl(class SimNodeArticulated * n, signed short ctrl);

    unsigned char RequestNewSimNodeArticulatedControl(class SimNodeArticulated * n, signed short c);

    void AddFlexJoint(class FlexJointDef * fjdef, class tSkeleton * skel);

    void AddLookAt(unsigned long long name, int jnt, unsigned long long objname);

    void SetFloorObj(unsigned long long name);

    void CollideToFloor(class SimNode * node);

    void NoCollideToFloor(class SimNode * node);

    void UpdatePoseModifier(float dt);

    void ResetSimNodeArticulatedRootMatrix();

    // Static members
    static int simGroupCounter; // size: 0x4
    static float MSCALE; // size: 0x4
    static float TSCALE; // size: 0x4
    static float LSCALE; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class PhWorld * phworld; // offset 0x4, size 0x4
    class TList simNodes; // offset 0x8, size 0x14
    class TList simNodeArticulateds; // offset 0x1C, size 0x14
    class TList simFlexs; // offset 0x30, size 0x14
    class SimFlexJointMgr * simFlexJointMgr; // offset 0x44, size 0x4
    class IKanLinkMgr * ikanLinkMgr; // offset 0x48, size 0x4
    class TrackerLinkMgr * trackerLinkMgr; // offset 0x4C, size 0x4
    class SimNodeBase * selObj; // offset 0x50, size 0x4
    float simTime; // offset 0x54, size 0x4
    class SimNode * floorNode; // offset 0x58, size 0x4
    class PhDynObjParam * treedynparam; // offset 0x5C, size 0x4
    class PhDynObjParam * dynparam; // offset 0x60, size 0x4
    class PhBasicObjParam * bparam; // offset 0x64, size 0x4
    class PhBasicObjParam * treebparam; // offset 0x68, size 0x4
};
// total size: 0x4
class PhUnitsManager : protected PhUnits {};
// total size: 0x28
class PhEnv : public iPhEnv {};
// ERROR: Failed to emit tag 76CC23 (GlobalSubroutine)
// Range: 0x800C5A2C -> 0x800C5B68
// this: r31
void SimGroup::CleanAll() {
    // Local variables
    int i; // r29
}

// Range: 0x800C5B68 -> 0x800C5C10
// this: r30
void SimGroup::AddSimNodeArticulated(class SimNodeArticulated * ch /* r31 */) {}

// total size: 0x0
class SimRestBase {};
// total size: 0x20
class SimNode : public SimNodeBase {
    // Members
protected:
    class PhObj * phObj; // offset 0x10, size 0x4
    class PhCollEl * collEl; // offset 0x14, size 0x4
    class SimRestBase * simRest; // offset 0x18, size 0x4
    unsigned char wasSimulating; // offset 0x1C, size 0x1
    unsigned char useWasSimulating; // offset 0x1D, size 0x1
    unsigned char useTestRest; // offset 0x1E, size 0x1
    unsigned char movingObj; // offset 0x1F, size 0x1
};
// Range: 0x800C5C10 -> 0x800C5C84
// this: r30
void SimGroup::AddSimNode(class SimNode * node /* r31 */) {}

// Range: 0x800C5C84 -> 0x800C5D04
// this: r30
void SimGroup::AddSimFlex(class SimFlex * f /* r31 */) {}

// Range: 0x800C5D04 -> 0x800C5DAC
// this: r30
void SimGroup::UpdateNodeVisibility(class SimNodeArticulated * n /* r31 */) {}

static unsigned char updatevis$706; // size: 0x1, address: 0x8013B358
static signed char init$707; // size: 0x1, address: 0x8013B359
// Range: 0x800C5DAC -> 0x800C5FA4
// this: r30
void SimGroup::Update(float dt /* f31 */) {
    // Local variables
    int i; // r27
    int substep; // r31
    unsigned char firststep; // r1+0x8

    // References
    // -> static unsigned char updatevis$706;
    // -> static signed char init$707;
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
// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
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
// Range: 0x800C5FA4 -> 0x800C60AC
// this: r26
class SimNode * SimGroup::FindSimNode(unsigned long long name /* r28 */) {
    // Local variables
    class SimNode * n; // r30
    int i; // r29
}

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
// Range: 0x800C60AC -> 0x800C611C
// this: r29
class SimNode * SimGroup::NewSimNode(class PhObj * obj /* r30 */, class Matrix * rm /* r31 */) {}

// Range: 0x800C611C -> 0x800C617C
// this: r28
class SimNodeArticulated * SimGroup::NewSimNodeArticulated(class PhSTreeObj * obj /* r29 */, class tPose * pose /* r30 */, class Matrix * rm /* r31 */) {}

// Range: 0x800C617C -> 0x800C6244
// this: r27
class SimNodeArticulated * SimGroup::AddSkin(class PhSTreeObj * ph /* r28 */, class Matrix * transform /* r29 */, class tPose * pose /* r31 */, class PhComposite * phc /* r30 */) {
    // Local variables
    class SimNodeArticulated * c; // r31
}

// Range: 0x800C6244 -> 0x800C6388
// this: r28
class SimNode * SimGroup::AddGeom(class PhObj * ph /* r29 */, class Matrix * transform /* r31 */, unsigned char moving /* r30 */) {
    // Local variables
    class SimNode * n; // r31
}

// Range: 0x800C6388 -> 0x800C63F4
// this: r30
unsigned char SimGroup::RemoveSimNode(class SimNode * node /* r31 */) {}

// Range: 0x800C63F4 -> 0x800C6554
// this: r28
void SimGroup::SwitchSimNodeArticulatedControl(class SimNodeArticulated * n /* r29 */, signed short ctrl /* r30 */) {
    // Local variables
    signed short prevctrl; // r1+0x8
}

// Range: 0x800C6554 -> 0x800C6598
unsigned char SimGroup::RequestNewSimNodeControl(class SimNode * n /* r4 */, signed short c /* r5 */) {}

// Range: 0x800C6598 -> 0x800C65BC
// this: r3
unsigned char SimGroup::RequestNewSimNodeArticulatedControl(class SimNodeArticulated * n /* r4 */, signed short c /* r5 */) {}

// total size: 0x18
class FlexJointDef : public tEntity {
    // Members
public:
    unsigned int nbDef; // offset 0x10, size 0x4
    class FlexJointDefItem * def; // offset 0x14, size 0x4
};
// Range: 0x800C65BC -> 0x800C673C
// this: r26
void SimGroup::AddFlexJoint(class FlexJointDef * fjdef /* r27 */, class tSkeleton * skel /* r28 */) {
    // Local variables
    class SimNodeArticulated * c; // r24
    unsigned int i; // r29
    class SimFlexJoint * sfj; // r25
}

// Range: 0x800C673C -> 0x800C68CC
// this: r25
void SimGroup::AddLookAt(unsigned long long name /* r27 */, int jnt /* r28 */, unsigned long long objname /* r30 */) {
    // Local variables
    class SimNodeArticulated * c; // r23
    class SimNode * n; // r24
    class TrackerLink * ht; // r25
    unsigned char resetCurrentDef; // r1+0x8
}

// Range: 0x800C68CC -> 0x800C6964
// this: r29
void SimGroup::SetFloorObj(unsigned long long name /* r5 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800C6964 -> 0x800C69E4
// this: r29
void SimGroup::CollideToFloor(class SimNode * node /* r30 */) {}

// Range: 0x800C69E4 -> 0x800C6A64
// this: r29
void SimGroup::NoCollideToFloor(class SimNode * node /* r30 */) {}

// Range: 0x800C6A64 -> 0x800C6AD0
// this: r31
void SimGroup::UpdatePoseModifier(float dt /* f31 */) {}

// Range: 0x800C6AD0 -> 0x800C6B38
// this: r29
void SimGroup::ResetSimNodeArticulatedRootMatrix() {
    // Local variables
    int i; // r30
}

static // total size: 0x8
struct {} SimGroup::__RTTI; // size: 0x8, address: 0x8013A374
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013A384
static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013A38C
static // total size: 0x8
struct {} iPhBasicObjParam::__RTTI; // size: 0x8, address: 0x8013A394
static // total size: 0x8
struct {} iPhDynObjParam::__RTTI; // size: 0x8, address: 0x8013A39C
static // total size: 0x8
struct {} iPhEnv::__RTTI; // size: 0x8, address: 0x8013A3B4
static // total size: 0x8
struct {} PhEnv::__RTTI; // size: 0x8, address: 0x8013A3BC
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A3C4
static // total size: 0x8
struct {} TList<SimFlex*>::__RTTI; // size: 0x8, address: 0x8013A3CC
static // total size: 0x8
struct {} TList<SimNodeArticulated*>::__RTTI; // size: 0x8, address: 0x8013A3D4
static // total size: 0x8
struct {} TList<SimNode*>::__RTTI; // size: 0x8, address: 0x8013A3DC



