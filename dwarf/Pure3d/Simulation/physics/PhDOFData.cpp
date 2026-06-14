/*
    Compile unit: D:\Pure3d\Simulation\physics\PhDOFData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DF050 -> 0x800E1198
*/
static float MaxDefSafe; // size: 0x4, address: 0x8013A7F8
static float minDefAngle1; // size: 0x4, address: 0x8013A7FC
static float MaxTorsionAngle; // size: 0x4, address: 0x8013A800
static float MAXPHWNEW; // size: 0x4, address: 0x8013A804
static float MAXPHWNEW2; // size: 0x4, address: 0x8013A808
static unsigned char LimitJointAngle; // size: 0x1, address: 0x8013A80C
static float AngleRecoveryRate; // size: 0x4, address: 0x8013A810
static float gamawdt; // size: 0x4, address: 0x8013A814
static float gamawnew; // size: 0x4, address: 0x8013A818
static float MIN_ANGLE_ACCURACY; // size: 0x4, address: 0x8013A81C
// total size: 0x70
struct {} PhDOFData::__vtable; // size: 0x70, address: 0x80114C3C
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
// total size: 0x0
class tPose {};
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
// total size: 0x14
class PhSubSTreeObjList : public VoidPList {};
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
// total size: 0x18
class PhDOFData {
    // Functions
    void SetMaxAngle(float r);

    void SetMinAngle(float r);

    void ResetAnimInfo();

    void SetIKDef(unsigned char b);

    void ComputeJointAngle(class PhSubSTreeObj * jnt);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    float fMaxAngle; // offset 0x4, size 0x4
    float fMinAngle; // offset 0x8, size 0x4
    float fCurAngle; // offset 0xC, size 0x4
    int fDOF; // offset 0x10, size 0x4
    unsigned char fEmptyDynW; // offset 0x14, size 0x1
    unsigned char fParentRelative; // offset 0x15, size 0x1
    unsigned char fSaveIKDef; // offset 0x16, size 0x1
};
// Range: 0x800DF050 -> 0x800DF0A8
// this: r1+0x8
void PhDOFData::SetMaxAngle(float r /* f1 */) {
    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// Range: 0x800DF0A8 -> 0x800DF100
// this: r1+0x8
void PhDOFData::SetMinAngle(float r /* f1 */) {
    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// total size: 0x7C
class PhThreeDOFData : public PhDOFData {
    // Functions
    void SetMinAngle(float r);

    PhThreeDOFData();

    class PhDOFData * Clone();

    void ResetAnimInfo();

    void SetIKDef(unsigned char b);

    void AddToWNew(class Vector & w);

    void IncludeCache();

    void DissipateJointImpulse(float factor, float factor2);

    float TryAddW(class Vector & w, float dt);

    void UpdateOrientation(const class Matrix & dm);

    void UpdateMat(class Matrix & mat, float dt, class PhSubSTreeObj * jnt);

    void ComputeJointAngle(class PhSubSTreeObj * jnt);

    void TestJointAngle(class PhSubSTreeObj * jnt, float dt);

    unsigned char OutOfAngleDomain(float angle, float torsionAngle, class Vector & w);

    void SaveDef(float * * def) const;

    // Members
protected:
    class Vector fWDTImpulse; // offset 0x18, size 0xC
    class Vector fWDTImpulse0; // offset 0x24, size 0xC
    class Vector fWDTImpulseIK; // offset 0x30, size 0xC
    class Vector fWImpulseNew; // offset 0x3C, size 0xC
    class Vector fWImpulseNew0; // offset 0x48, size 0xC
    class Vector fCacheW; // offset 0x54, size 0xC
    float fCurTorsionAngle; // offset 0x60, size 0x4
    class Vector fAxis; // offset 0x64, size 0xC
    class Vector fTAxis; // offset 0x70, size 0xC
};
// Range: 0x800DF100 -> 0x800DF1D8
// this: r1+0x8
void PhThreeDOFData::SetMinAngle(float r /* f1 */) {
    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// total size: 0x48
class PhOneDOFData : public PhDOFData {
    // Functions
    void SetMinAngle(float r);

    PhOneDOFData(const class Vector & rotAxis);

    class PhDOFData * Clone();

    void ResetAnimInfo();

    void SetIKDef(unsigned char b);

    void AddToWNew(class Vector & w);

    void IncludeCache();

    void DissipateJointImpulse(float factor, float factor2);

    void ComputeAbsImp(class Vector & imp, class Vector & absimp, float absfact);

    float TryAddW(class Vector & w, float dt);

    float TryAddW(float nw, float dt);

    void UpdateMat(class Matrix & mat, float dt, class PhSubSTreeObj * jnt);

    void SetRotAxis(const class Vector & v);

    void ComputeJointAngle(class PhSubSTreeObj * jnt);

    void TestJointAngle(class PhSubSTreeObj * jnt, float dt);

    unsigned char OutOfAngleDomain(float angle, float & nw);

    void SaveDef(float * * def) const;

    void UpdateMatrixFromSavedDef(const class Matrix & parentm, class Matrix & m, float * * def) const;

    // Members
protected:
    float fWDTImpulse; // offset 0x18, size 0x4
    float fWDTImpulse0; // offset 0x1C, size 0x4
    float fWDTImpulseIK; // offset 0x20, size 0x4
    float fWImpulseNew; // offset 0x24, size 0x4
    float fWImpulseNew0; // offset 0x28, size 0x4
    float fCacheW; // offset 0x2C, size 0x4
    class Vector fAxis; // offset 0x30, size 0xC
    class Vector fAxis0; // offset 0x3C, size 0xC
};
// Range: 0x800DF1D8 -> 0x800DF298
// this: r31
void PhOneDOFData::SetMinAngle(float r /* f1 */) {
    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// Range: 0x800DF298 -> 0x800DF2B4
// this: r1+0x0
void PhDOFData::ResetAnimInfo() {}

// Range: 0x800DF2B4 -> 0x800DF2BC
// this: r1+0x0
void PhDOFData::SetIKDef(unsigned char b /* r1+0x4 */) {}

// Range: 0x800DF2BC -> 0x800DF388
// this: r31
void PhDOFData::ComputeJointAngle(class PhSubSTreeObj * jnt /* r1+0xC */) {
    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// total size: 0x70
struct {} PhOneDOFData::__vtable; // size: 0x70, address: 0x80114BCC
// Range: 0x800DF388 -> 0x800DF418
// this: r1+0x8
PhOneDOFData::PhOneDOFData(const class Vector & rotAxis /* r30 */) {
    // References
    // -> struct [anonymous] PhOneDOFData::__vtable;
    // -> struct [anonymous] PhDOFData::__vtable;
}

// Range: 0x800DF418 -> 0x800DF558
// this: r30
class PhDOFData * PhOneDOFData::Clone() {
    // References
    // -> struct [anonymous] PhOneDOFData::__vtable;
    // -> struct [anonymous] PhDOFData::__vtable;
}

// Range: 0x800DF558 -> 0x800DF588
// this: r1+0x0
void PhOneDOFData::ResetAnimInfo() {}

// Range: 0x800DF588 -> 0x800DF5E8
// this: r31
void PhOneDOFData::SetIKDef(unsigned char b /* r1+0xC */) {}

// Range: 0x800DF5E8 -> 0x800DF62C
// this: r1+0x0
void PhOneDOFData::AddToWNew(class Vector & w /* r1+0x4 */) {}

// Range: 0x800DF62C -> 0x800DF648
// this: r1+0x0
void PhOneDOFData::IncludeCache() {}

static float MaxDA$366; // size: 0x4, address: 0x8013B3E8
static signed char init$367; // size: 0x1, address: 0x8013B3EC
// Range: 0x800DF648 -> 0x800DF750
// this: r1+0x8
void PhOneDOFData::DissipateJointImpulse(float factor /* r1+0xC */, float factor2 /* r1+0x10 */) {
    // References
    // -> static float MaxDA$366;
    // -> static signed char init$367;
    // -> static float gamawdt;
    // -> static float gamawnew;
}

// Range: 0x800DF750 -> 0x800DF7B8
// this: r3
void PhOneDOFData::ComputeAbsImp(class Vector & imp /* r4 */, class Vector & absimp /* r31 */, float absfact /* f31 */) {}

// Range: 0x800DF7B8 -> 0x800DF81C
// this: r3
float PhOneDOFData::TryAddW(class Vector & w /* r1+0xC */, float dt /* f2 */) {
    // Local variables
    float nw; // f1
}

// Range: 0x800DF81C -> 0x800DF8FC
// this: r3
float PhOneDOFData::TryAddW(float nw /* r1+0xC */, float dt /* r1+0x10 */) {
    // Local variables
    float tot; // f30
    float f; // f1
    float maxw; // f2

    // References
    // -> static float MAXPHWNEW;
}

// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800DF8FC -> 0x800DFB08
// this: r29
void PhOneDOFData::UpdateMat(class Matrix & mat /* r30 */, float dt /* f31 */, class PhSubSTreeObj * jnt /* r31 */) {
    // Local variables
    float da; // r1+0x8
    class Vector v; // r1+0x68

    // References
    // -> static float MaxDefSafe;
    // -> static float AngleRecoveryRate;
    // -> static float minDefAngle1;
}

// Range: 0x800DFB08 -> 0x800DFB3C
// this: r1+0x0
void PhOneDOFData::SetRotAxis(const class Vector & v /* r1+0x4 */) {}

// Range: 0x800DFB3C -> 0x800DFC90
// this: r30
void PhOneDOFData::ComputeJointAngle(class PhSubSTreeObj * jnt /* r31 */) {
    // Local variables
    class Vector v; // r1+0x30

    // References
    // -> static float MIN_ANGLE_ACCURACY;
}

// Range: 0x800DFC90 -> 0x800DFD68
// this: r31
void PhOneDOFData::TestJointAngle(class PhSubSTreeObj * jnt /* r4 */, float dt /* f31 */) {
    // Local variables
    float res; // r1+0x8

    // References
    // -> static float AngleRecoveryRate;
    // -> static unsigned char LimitJointAngle;
}

// Range: 0x800DFD68 -> 0x800DFDC0
// this: r1+0x0
unsigned char PhOneDOFData::OutOfAngleDomain(float angle /* r1+0x4 */, float & nw /* r1+0x8 */) {
    // Local variables
    unsigned char ret; // r1+0x0
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
// total size: 0x70
struct {} PhThreeDOFData::__vtable; // size: 0x70, address: 0x80114B40
// Range: 0x800DFDC0 -> 0x800DFE40
// this: r1+0x8
PhThreeDOFData::PhThreeDOFData() {
    // References
    // -> struct [anonymous] PhThreeDOFData::__vtable;
    // -> struct [anonymous] PhDOFData::__vtable;
}

// Range: 0x800DFE40 -> 0x800DFFD8
// this: r31
class PhDOFData * PhThreeDOFData::Clone() {
    // References
    // -> struct [anonymous] PhThreeDOFData::__vtable;
    // -> struct [anonymous] PhDOFData::__vtable;
}

// Range: 0x800DFFD8 -> 0x800E004C
// this: r1+0x0
void PhThreeDOFData::ResetAnimInfo() {}

// Range: 0x800E004C -> 0x800E00B4
// this: r3
void PhThreeDOFData::SetIKDef(unsigned char b /* r1+0xC */) {}

// Range: 0x800E00B4 -> 0x800E00F0
// this: r1+0x0
void PhThreeDOFData::AddToWNew(class Vector & w /* r1+0x4 */) {}

// Range: 0x800E00F0 -> 0x800E0130
void PhThreeDOFData::GetRotAxis(class Vector & axis /* r31 */, class Vector & dv /* r5 */, const class PhSubSTreeObj * jnt /* r1+0x14 */) {}

// Range: 0x800E0130 -> 0x800E016C
// this: r1+0x0
void PhThreeDOFData::IncludeCache() {}

static float MaxDA2$613; // size: 0x4, address: 0x8013B3F0
static signed char init$614; // size: 0x1, address: 0x8013B3F4
// Range: 0x800E016C -> 0x800E03A4
// this: r31
void PhThreeDOFData::DissipateJointImpulse(float factor /* r1+0xC */, float factor2 /* r1+0x10 */) {
    // Local variables
    float r; // f1

    // References
    // -> static float MaxDA2$613;
    // -> static signed char init$614;
    // -> static float gamawdt;
    // -> static float gamawnew;
}

// Range: 0x800E03A4 -> 0x800E0580
// this: r30
float PhThreeDOFData::TryAddW(class Vector & w /* r31 */, float dt /* r1+0x10 */) {
    // Local variables
    float totTorsion; // f2
    float totAngle; // f4
    float f; // r1+0x28
    float maxw; // f3
    float C; // f2
    float B; // f1

    // References
    // -> static float MAXPHWNEW2;
}

// Range: 0x800E0580 -> 0x800E069C
void PhThreeDOFData::SubTryAddW(class Vector & w /* r1+0xC */, float B /* f30 */, float C /* f5 */, float maxw /* r1+0x18 */, float & f /* r31 */) {}

// Range: 0x800E069C -> 0x800E0718
// this: r30
void PhThreeDOFData::UpdateOrientation(const class Matrix & dm /* r31 */) {}

// Range: 0x800E0718 -> 0x800E08F4
// this: r29
void PhThreeDOFData::UpdateMat(class Matrix & mat /* r30 */, float dt /* f31 */, class PhSubSTreeObj * jnt /* r31 */) {
    // References
    // -> static float MaxDefSafe;
    // -> static float AngleRecoveryRate;
    // -> static float minDefAngle1;
}

static signed char init$773; // size: 0x1, address: 0x8013B3F5
static class Vector refPerp0$772; // size: 0xC, address: 0x801375A0
// Range: 0x800E08F4 -> 0x800E0BF8
// this: r31
void PhThreeDOFData::ComputeJointAngle(class PhSubSTreeObj * jnt /* r29 */) {
    // Local variables
    class Vector ref; // r1+0x3C

    // References
    // -> static class Vector refPerp0$772;
    // -> static signed char init$773;
    // -> static float MIN_ANGLE_ACCURACY;
}

// Range: 0x800E0BF8 -> 0x800E0DCC
// this: r31
void PhThreeDOFData::TestJointAngle(class PhSubSTreeObj * jnt /* r4 */, float dt /* f31 */) {
    // Local variables
    class Vector tv; // r1+0x34
    float res; // r1+0x8
    float delta; // f3
    float delta; // f3

    // References
    // -> static float AngleRecoveryRate;
    // -> static float MaxTorsionAngle;
    // -> static unsigned char LimitJointAngle;
}

static float cleaningFact$860; // size: 0x4, address: 0x8013B3F8
static signed char init$861; // size: 0x1, address: 0x8013B3FC
// Range: 0x800E0DCC -> 0x800E0FE4
// this: r1+0x8
unsigned char PhThreeDOFData::OutOfAngleDomain(float angle /* r1+0xC */, float torsionAngle /* r1+0x10 */, class Vector & w /* r1+0x14 */) {
    // Local variables
    unsigned char ret; // r5
    unsigned char cleanTorsion; // r6
    unsigned char cleanAngle; // r7

    // References
    // -> static float cleaningFact$860;
    // -> static signed char init$861;
    // -> static float MaxTorsionAngle;
}

// Range: 0x800E0FE4 -> 0x800E1000
// this: r1+0x0
void PhOneDOFData::SaveDef(float * * def /* r1+0x4 */) const {}

// Range: 0x800E1000 -> 0x800E10A8
// this: r8
void PhOneDOFData::UpdateMatrixFromSavedDef(const class Matrix & parentm /* r4 */, class Matrix & m /* r31 */, float * * def /* r1+0x14 */) const {
    // Local variables
    float wdt; // f31
    class Vector axis; // r1+0x24

    // References
    // -> static float MaxDefSafe;
    // -> static float minDefAngle1;
}

// Range: 0x800E10A8 -> 0x800E10F4
// this: r1+0x0
void PhThreeDOFData::SaveDef(float * * def /* r1+0x4 */) const {}

// Range: 0x800E10F4 -> 0x800E1198
void PhThreeDOFData::UpdateMatrixFromSavedDef(class Matrix & m /* r5 */, float * * def /* r1+0x14 */) {
    // Local variables
    class Vector wdt; // r1+0x24

    // References
    // -> static float MaxDefSafe;
    // -> static float minDefAngle1;
}

static // total size: 0x8
struct {} PhDOFData::__RTTI; // size: 0x8, address: 0x8013A820
static // total size: 0x8
struct {} PhThreeDOFData::__RTTI; // size: 0x8, address: 0x8013A828
static // total size: 0x8
struct {} PhOneDOFData::__RTTI; // size: 0x8, address: 0x8013A830



