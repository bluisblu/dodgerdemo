/*
    Compile unit: D:\Pure3d\Simulation\simai\simnodearticulated.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C7D9C -> 0x800C8EB0
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80137550
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B370
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8013755C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80137568
float maxvirtualCMdist; // size: 0x4, address: 0x8013B374
float default_strength; // size: 0x4, address: 0x8013A4C0
float default_strength_up; // size: 0x4, address: 0x8013A4C4
static float WDTDISSIP_HYBRID; // size: 0x4, address: 0x8013A4C8
static float WDTDISSIP_FULLPHYSICS; // size: 0x4, address: 0x8013A4CC
// total size: 0x40
struct {} SimNodeArticulated::__vtable; // size: 0x40, address: 0x80113F98
// total size: 0x10
struct {} PhLength::__vtable; // size: 0x10, address: 0x80114038
// total size: 0x10
struct {} iPhLength::__vtable; // size: 0x10, address: 0x80114008
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
// total size: 0xA0
class SimNodeArticulated : public SimNode {
    // Functions
    SimNodeArticulated(class PhSTreeObj * obj, class tPose * p, class Matrix * rm, class SimGroup * sg);

    ~SimNodeArticulated();

    void SetPhComposite(class PhComposite * pc);

    void SetPose(class tPose * p);

    class tPose * GetPose();

    signed short SetControl(signed short ctrl);

    void SaveAnimState();

    void Update(float dt);

    void UpdatePhCompVis();

    unsigned char IsVisible() const;

    unsigned char IsPoseSimulating();

    void DebugDisplay(int in_things);

    unsigned char TestCache();

    void AbsorbCache();

    void TestVirtualState(float dt);

    unsigned char IsInFrontOf(const class SimNode * n) const;

    void PushRootMatrix();

    void AddSimFlexJoint(class SimFlexJoint * sfg);

    void UpdatePoseModifier(float dt);

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
// total size: 0xC
class iPhLength : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhLength : public iPhLength {};
// Range: 0x800C7D9C -> 0x800C7F28
// this: r1+0x8
SimNodeArticulated::SimNodeArticulated(class PhSTreeObj * obj /* r4 */, class tPose * p /* r29 */, class Matrix * rm /* r6 */, class SimGroup * sg /* r7 */) {
    // Local variables
    class PhLength humanHeight; // r1+0x40
    class PhLength humanWidth; // r1+0x34
    class Vector v0; // r1+0x28

    // References
    // -> struct [anonymous] iPhLength::__vtable;
    // -> struct [anonymous] PhLength::__vtable;
    // -> float maxvirtualCMdist;
    // -> float default_strength_up;
    // -> float default_strength;
    // -> static float WDTDISSIP_FULLPHYSICS;
    // -> static float WDTDISSIP_HYBRID;
    // -> struct [anonymous] SimNodeArticulated::__vtable;
}

// total size: 0xC
struct {} VirtualCM::__vtable; // size: 0xC, address: 0x80113FE4
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
// Range: 0x800C8000 -> 0x800C8108
// this: r30
SimNodeArticulated::~SimNodeArticulated() {
    // References
    // -> struct [anonymous] VirtualCM::__vtable;
    // -> struct [anonymous] SimNodeArticulated::__vtable;
}

// Range: 0x800C8108 -> 0x800C8168
// this: r30
void SimNodeArticulated::SetPhComposite(class PhComposite * pc /* r31 */) {}

// Range: 0x800C8168 -> 0x800C81A0
// this: r3
void SimNodeArticulated::SetPose(class tPose * p /* r31 */) {}

// Range: 0x800C81A0 -> 0x800C81AC
// this: r1+0x0
class tPose * SimNodeArticulated::GetPose() {}

// Range: 0x800C81AC -> 0x800C82E4
// this: r29
signed short SimNodeArticulated::SetControl(signed short ctrl /* r30 */) {
    // Local variables
    signed short currentControl; // r31
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
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
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
// Range: 0x800C82E4 -> 0x800C831C
// this: r1+0x8
void SimNodeArticulated::SaveAnimState() {}

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
// Range: 0x800C831C -> 0x800C850C
// this: r31
void SimNodeArticulated::Update(float dt /* f31 */) {
    // Local variables
    class Matrix m; // r1+0x70
    class Vector v; // r1+0x64
}

// Range: 0x800C850C -> 0x800C8570
// this: r30
void SimNodeArticulated::UpdatePhCompVis() {}

// Range: 0x800C8570 -> 0x800C858C
// this: r1+0x0
unsigned char SimNodeArticulated::IsVisible() const {}

// Range: 0x800C858C -> 0x800C85D0
// this: r3
unsigned char SimNodeArticulated::IsPoseSimulating() {}

// Range: 0x800C85D0 -> 0x800C8660
// this: r31
void SimNodeArticulated::DebugDisplay(int in_things /* r4 */) {}

static float refTime2$632; // size: 0x4, address: 0x8013B378
static signed char init$633; // size: 0x1, address: 0x8013B37C
// ERROR: Failed to emit tag 7C99F6 (GlobalSubroutine)
static float refTime2$652; // size: 0x4, address: 0x8013B380
static signed char init$653; // size: 0x1, address: 0x8013B384
// ERROR: Failed to emit tag 7C9B39 (GlobalSubroutine)
// ERROR: Failed to emit tag 7C9C11 (GlobalSubroutine)
// total size: 0x0
class PhWorld {};
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
class TList : public VoidPList {};
// total size: 0x14
class TList : public VoidPList {};
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
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
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
class PhCollDetect {};
// total size: 0x0
class PhCollData {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class PhCollision {};
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
// total size: 0x14
class TList : public VoidPList {};
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
// total size: 0x0
class PhPairEl {};
// total size: 0x14
class PhPairElList : public VoidPList {};
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
// total size: 0x18
class FlexJointDef : public tEntity {
    // Members
public:
    unsigned int nbDef; // offset 0x10, size 0x4
    class FlexJointDefItem * def; // offset 0x14, size 0x4
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
// total size: 0x6C
class SimGroup {
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
// Range: 0x800C89EC -> 0x800C8A8C
// this: r30
unsigned char SimNodeArticulated::IsInFrontOf(const class SimNode * n /* r31 */) const {
    // Local variables
    class Vector bb; // r1+0x4C
}

// Range: 0x800C8A8C -> 0x800C8B04
// this: r31
void SimNodeArticulated::PushRootMatrix() {
    // Local variables
    class Vector pos; // r1+0x38
    class Vector speed; // r1+0x2C
}

// total size: 0xC
struct {} SimFlexJointMgr::__vtable; // size: 0xC, address: 0x801134DC
// ERROR: Failed to emit tag 7E9525 (GlobalSubroutine)
// Range: 0x800C8B9C -> 0x800C8C40
// this: r31
void SimNodeArticulated::UpdatePoseModifier(float dt /* f31 */) {}

// total size: 0x24
struct {} SimTarget::__vtable; // size: 0x24, address: 0x801141C4
// total size: 0x24
struct {} SimNodeArticulatedTarget::__vtable; // size: 0x24, address: 0x80113E9C
// total size: 0x20
class SimNodeArticulatedTarget : public SimTarget {
    // Functions
    void GetPos(class Vector & v) const;

    void GetMassMatrix(class PhSymMat & mat) const;

    float GetMass() const;

    void GetSpeed(class Vector & v) const;

    class PhBasicObj * GetPhObj();

    void GetTransform(class Matrix & m) const;

    // Members
protected:
    class SimNodeArticulated * target; // offset 0x14, size 0x4
    int joint; // offset 0x18, size 0x4
    class PhSubSTreeObj * phjoint; // offset 0x1C, size 0x4
};
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// Range: 0x800C8C40 -> 0x800C8C88
// this: r3
void SimNodeArticulatedTarget::GetPos(class Vector & v /* r4 */) const {}

// Range: 0x800C8C88 -> 0x800C8CF0
// this: r30
void SimNodeArticulatedTarget::GetMassMatrix(class PhSymMat & mat /* r31 */) const {
    // Local variables
    class Vector p; // r1+0x10
}

// Range: 0x800C8CF0 -> 0x800C8D20
// this: r3
float SimNodeArticulatedTarget::GetMass() const {}

// Range: 0x800C8D20 -> 0x800C8DB0
// this: r30
void SimNodeArticulatedTarget::GetSpeed(class Vector & v /* r31 */) const {}

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
// total size: 0x4
class SimRestBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
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
// Range: 0x800C8DB0 -> 0x800C8DB8
// this: r3
class PhBasicObj * SimNodeArticulatedTarget::GetPhObj() {}

// Range: 0x800C8DB8 -> 0x800C8E74
// this: r3
void SimNodeArticulatedTarget::GetTransform(class Matrix & m /* r1+0xC */) const {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A4D0
static // total size: 0x8
struct {} SimTarget::__RTTI; // size: 0x8, address: 0x8013A4D8
static // total size: 0x8
struct {} SimNodeArticulatedTarget::__RTTI; // size: 0x8, address: 0x8013A4E0
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A4E8
static // total size: 0x8
struct {} SimNodeBase::__RTTI; // size: 0x8, address: 0x8013A4F0
static // total size: 0x8
struct {} SimNode::__RTTI; // size: 0x8, address: 0x8013A500
static // total size: 0x8
struct {} SimNodeArticulated::__RTTI; // size: 0x8, address: 0x8013A508
static // total size: 0x8
struct {} VirtualCM::__RTTI; // size: 0x8, address: 0x8013A510
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013A520
static // total size: 0x8
struct {} iPhLength::__RTTI; // size: 0x8, address: 0x8013A528
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
struct {} PhLength::__RTTI; // size: 0x8, address: 0x8013A530



