/*
    Compile unit: D:\Pure3d\Simulation\simai\simflexjoint.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C13D8 -> 0x800C5440
*/
static unsigned char doCollision; // size: 0x1, address: 0x8013A310
static float RadiusRatio; // size: 0x4, address: 0x8013A314
float scaleFactor; // size: 0x4, address: 0x8013A318
// total size: 0x40
struct {} SimFlexJoint::__vtable; // size: 0x40, address: 0x8011354C
// total size: 0xC
struct {} ConditionParams::__vtable; // size: 0xC, address: 0x8011359C
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
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// total size: 0x40
class PhBBox : public PhCollEl {};
// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// total size: 0x0
class PhPairEl {};
// total size: 0x14
class PhPairElList : public VoidPList {};
// total size: 0x0
class PhCollision {};
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
// total size: 0x1C4
class SimFlexJoint : public SimFlex {
    // Functions
    SimFlexJoint(class PhSTreeObj * obj, class tSkeleton * skel, class FlexJointDefItem * def);

    ~SimFlexJoint();

    int RestPIndex(int i) const;

    class Joint * GetPoseJoint(int i);

    void SetVirtualJointPos();

    void SetScale(float f);

    void SetPose(class tPose * p);

    void CreateCollEl();

    void SetRestStiff(float f, float d);

    void SetInternalParams(const class ConditionParams & p);

    void AddJointCollision(int j);

    void DetectAndSolveCollision();

    void UpdateJoints();

    unsigned char UpdateRestingPosition(float dt);

    void TestExtension1D();

    void ResetRoot(class Vector * newSpeed);

    void Update(float dt);

    void DebugDisplay();

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
// Range: 0x800C13D8 -> 0x800C1B98
// this: r1+0x8
SimFlexJoint::SimFlexJoint(class PhSTreeObj * obj /* r26 */, class tSkeleton * skel /* r29 */, class FlexJointDefItem * def /* r30 */) {
    // Local variables
    int i; // r1+0x8
    int nbp; // r31
    class Vector ppos[20]; // r1+0x70

    // References
    // -> struct [anonymous] ConditionParams::__vtable;
    // -> struct [anonymous] SimFlexJoint::__vtable;
}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// Range: 0x800C1B98 -> 0x800C1CA8
// this: r30
SimFlexJoint::~SimFlexJoint() {
    // Local variables
    int i; // r28
    class PhCollEl * el; // r27

    // References
    // -> struct [anonymous] ConditionParams::__vtable;
    // -> struct [anonymous] SimFlexJoint::__vtable;
}

// Range: 0x800C1D0C -> 0x800C1D1C
// this: r1+0x0
int SimFlexJoint::RestPIndex(int i /* r1+0x4 */) const {}

// Range: 0x800C1D1C -> 0x800C1D60
// this: r3
class Joint * SimFlexJoint::GetPoseJoint(int i /* r1+0x4 */) {}

// Range: 0x800C1D60 -> 0x800C1DB4
// this: r7
void SimFlexJoint::SetVirtualJointPos() {}

// Range: 0x800C1DB4 -> 0x800C1E30
// this: r31
void SimFlexJoint::SetScale(float f /* f1 */) {
    // Local variables
    float ratio; // f31
    int i; // r5
}

// Range: 0x800C1E30 -> 0x800C1E88
// this: r30
void SimFlexJoint::SetPose(class tPose * p /* r31 */) {}

// Range: 0x800C1E88 -> 0x800C1FAC
// this: r28
void SimFlexJoint::CreateCollEl() {
    // Local variables
    int i; // r30
    class Vector pos; // r1+0x10
    float rad; // f30
    class PhSphere * s; // r29

    // References
    // -> static float RadiusRatio;
}

// Range: 0x800C1FAC -> 0x800C1FB8
// this: r1+0x0
void SimFlexJoint::SetRestStiff(float f /* r1+0x4 */, float d /* r1+0x8 */) {}

// Range: 0x800C1FB8 -> 0x800C2050
// this: r30
void SimFlexJoint::SetInternalParams(const class ConditionParams & p /* r31 */) {}

// total size: 0xC
struct {} PhCollElList::__vtable; // size: 0xC, address: 0x80113504
// Range: 0x800C2050 -> 0x800C21A4
// this: r30
void SimFlexJoint::AddJointCollision(int j /* r31 */) {
    // Local variables
    int i; // r4
    class PhCollEl * jointel; // r27
    int i; // r26

    // References
    // -> struct [anonymous] PhCollElList::__vtable;
}

// Range: 0x800C21A4 -> 0x800C2408
// this: r31
void SimFlexJoint::DetectAndSolveCollision() {
    // Local variables
    int i; // r6
    class PhCollEl * s; // r4
    class FlexParticle * p; // r3
    class PhCollEl * jointel; // r27
    int j; // r26
    class PhCollEl * curEl; // r25
    class PhCollEl * objCollEl; // r25
    int j; // r26
    class PhCollEl * curEl; // r27
}

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
static float scale$813; // size: 0x4, address: 0x8013B320
static signed char init$814; // size: 0x1, address: 0x8013B324
static float scale$826; // size: 0x4, address: 0x8013B328
static signed char init$827; // size: 0x1, address: 0x8013B32C
static float scale$840; // size: 0x4, address: 0x8013B330
static signed char init$841; // size: 0x1, address: 0x8013B334
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800C2408 -> 0x800C2E40
// this: r31
void SimFlexJoint::UpdateJoints() {
    // Local variables
    int i; // r26
    class Joint * j; // r30
    float inv_system_scale; // f27
    class Matrix parentwm; // r1+0x338
    class Vector dp; // r1+0x320
    class Vector jAxe; // r1+0x314
    class Vector da; // r1+0x308
    class Vector dp; // r1+0x2FC
    class Vector jAxe; // r1+0x2F0
    class Vector da; // r1+0x2E4
    class Matrix cum; // r1+0x2A4
    class Matrix pM; // r1+0x264
    class Matrix jM; // r1+0x224
    class Joint * j1; // r1+0x8
    class Joint * j2; // r26
    class Joint * j3; // r25
    class Joint * j; // r1+0x8
    class Vector axe1; // r1+0x1EC
    class Vector axe2; // r1+0x1E0
    class Vector da; // r1+0x1D4
    float a; // f1

    // References
    // -> static signed char init$841;
    // -> static float scale$840;
    // -> static float scale$826;
    // -> static signed char init$827;
    // -> static float scale$813;
    // -> static signed char init$814;
}

// Range: 0x800C2E40 -> 0x800C2F2C
void SimFlexJoint::ComputeM(const class Vector & p1 /* r1+0xC */, const class Vector & p2 /* r1+0x10 */, const class Vector & p3 /* r1+0x14 */, class Matrix & m /* r29 */) {}

static float weigthrelative$1116; // size: 0x4, address: 0x8013B338
static signed char init$1117; // size: 0x1, address: 0x8013B33C
// Range: 0x800C2F2C -> 0x800C4388
// this: r31
unsigned char SimFlexJoint::UpdateRestingPosition(float dt /* r1+0xC */) {
    // Local variables
    float idt; // f30
    class Vector rootpos; // r1+0x408
    class Vector deltarootpos; // r1+0x3FC
    class Vector p; // r1+0x3EC
    int i; // r1+0x8
    class Vector trans; // r1+0x3E0
    class Vector p1; // r1+0x3D4
    class Vector p11; // r1+0x3C8
    class Vector p2; // r1+0x3BC
    class Vector p22; // r1+0x3B0
    class Vector temp; // r1+0x3A4
    int i; // r1+0x8
    float scalefact; // r1+0x8
    float scalefact; // r1+0x8
    class Vector trans1; // r1+0x394
    class Vector trans2; // r1+0x388
    class Vector p1; // r1+0x370
    class Vector p11; // r1+0x364
    class Vector p2; // r1+0x358
    class Vector p22; // r1+0x34C
    class Vector temp; // r1+0x340
    int i; // r1+0x8
    float scalefact; // r1+0x8
    float scalefact; // r1+0x8
    float scalefact; // r1+0x8
    int i; // r18

    // References
    // -> static float weigthrelative$1116;
    // -> static signed char init$1117;
}

static int maxiter$1717; // size: 0x4, address: 0x8013B340
static signed char init$1718; // size: 0x1, address: 0x8013B344
static float maxdef$1720; // size: 0x4, address: 0x8013B348
static signed char init$1721; // size: 0x1, address: 0x8013B34C
// Range: 0x800C4388 -> 0x800C4464
// this: r31
void SimFlexJoint::TestExtension1D() {
    // Local variables
    int n; // r29
    unsigned char moved; // r28
    int i; // r27

    // References
    // -> static int maxiter$1717;
    // -> static float maxdef$1720;
    // -> static signed char init$1721;
    // -> static signed char init$1718;
}

// Range: 0x800C4464 -> 0x800C4558
// this: r30
void SimFlexJoint::ResetRoot(class Vector * newSpeed /* r31 */) {
    // Local variables
    class Matrix m; // r1+0x38
    class Vector v; // r1+0x2C
}

// Range: 0x800C4558 -> 0x800C46FC
// this: r31
void SimFlexJoint::Update(float dt /* f31 */) {
    // Local variables
    class Vector v; // r1+0x78

    // References
    // -> static unsigned char doCollision;
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x800C46FC -> 0x800C4898
// this: r31
void SimFlexJoint::DebugDisplay() {
    // Local variables
    struct pddiColour c; // r1+0x38
    struct pddiColour c2; // r1+0x34
    struct pddiColour c3; // r1+0x30
    class Vector v1; // r1+0x24
    class Vector v2; // r1+0x18
    int i; // r26
}

// total size: 0xC
struct {} SimFlexJointMgr::__vtable; // size: 0xC, address: 0x801134DC
// total size: 0xC
struct {} TList<SimFlexJoint*>::__vtable; // size: 0xC, address: 0x801134C0
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class SimFlexJointMgr {
    // Functions
    ~SimFlexJointMgr();

    void RemoveAll();

    void Add(class SimFlexJoint * lnk);

    void DebugDisplay();

    void Update(float dt);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// Range: 0x800C4898 -> 0x800C4918
// this: r30
SimFlexJointMgr::~SimFlexJointMgr() {
    // References
    // -> struct [anonymous] TList<SimFlexJoint*>::__vtable;
    // -> struct [anonymous] SimFlexJointMgr::__vtable;
}

// Range: 0x800C4918 -> 0x800C499C
// this: r29
void SimFlexJointMgr::RemoveAll() {
    // Local variables
    int i; // r30
}

// Range: 0x800C499C -> 0x800C49C0
// this: r3
void SimFlexJointMgr::Add(class SimFlexJoint * lnk /* r4 */) {}

// Range: 0x800C49C0 -> 0x800C4A34
// this: r29
void SimFlexJointMgr::DebugDisplay() {
    // Local variables
    int i; // r30
}

// Range: 0x800C4A34 -> 0x800C4AB8
// this: r29
void SimFlexJointMgr::Update(float dt /* f31 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800C4AB8 -> 0x800C4DD0
float CalScaleFac(class Vector & ab /* r28 */, class Vector & bc /* r29 */, class Vector & de /* r30 */, class Vector & ef /* r31 */) {
    // Local variables
    float cosangle1; // f1
    float cosangle2; // f29
    float cosangle3; // f28

    // References
    // -> float scaleFactor;
}

// Range: 0x800C4DD0 -> 0x800C50A4
float CalScaleFac2(class Vector & ab /* r28 */, class Vector & bc /* r29 */, class Vector & de /* r30 */, class Vector & ef /* r31 */) {
    // Local variables
    float cosangle1; // f1
    float cosangle2; // f29

    // References
    // -> float scaleFactor;
}

// Range: 0x800C50A4 -> 0x800C5218
float CalScaleFac3(class Vector & bc /* r30 */, class Vector & ef /* r31 */) {
    // Local variables
    float cosangle3; // f1

    // References
    // -> float scaleFactor;
}

// Range: 0x800C5218 -> 0x800C53DC
void ComputeDaFromArc(class Vector & da /* r29 */, class Vector & dp /* r30 */, class Vector & jAxe /* r31 */) {
    // Local variables
    float f; // f1
}

static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A31C
static // total size: 0x8
struct {} TList<SimFlexJoint*>::__RTTI; // size: 0x8, address: 0x8013A324
static // total size: 0x8
struct {} SimFlexJointMgr::__RTTI; // size: 0x8, address: 0x8013A32C
static // total size: 0x8
struct {} PhCollElList::__RTTI; // size: 0x8, address: 0x8013A334
static // total size: 0x8
struct {} SimNodeBase::__RTTI; // size: 0x8, address: 0x8013A33C
static // total size: 0x8
struct {} SimFlex::__RTTI; // size: 0x8, address: 0x8013A34C
static // total size: 0x8
struct {} SimFlexJoint::__RTTI; // size: 0x8, address: 0x8013A354
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
static // total size: 0x8
struct {} ConditionParams::__RTTI; // size: 0x8, address: 0x8013A35C



