/*
    Compile unit: D:\Pure3d\Simulation\simai\simrest.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8F74 -> 0x800C9454
*/
static float InitCumVy; // size: 0x4, address: 0x8013A538
static float MinSimSpeed; // size: 0x4, address: 0x8013A53C
static float unRestMinSimSpeedScale; // size: 0x4, address: 0x8013A540
static float iInitCumVy; // size: 0x4, address: 0x8013B388
static float iMinSimSpeed; // size: 0x4, address: 0x8013B38C
static float iunRestMinSimSpeedScale; // size: 0x4, address: 0x8013B390
static float iwCumVy; // size: 0x4, address: 0x8013A544
static float iMinRotSpeed; // size: 0x4, address: 0x8013A548
// total size: 0x18
struct {} SimRestBase::__vtable; // size: 0x18, address: 0x801140F8
// total size: 0x18
struct {} SimRest::__vtable; // size: 0x18, address: 0x80114094
// total size: 0x10
struct {} PhSpeed::__vtable; // size: 0x10, address: 0x801140E8
// total size: 0x10
struct {} iPhSpeed::__vtable; // size: 0x10, address: 0x801140C4
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
// total size: 0xC
class SimRest : public SimRestBase {
    // Functions
    SimRest(class PhRgdBody * obj);

    ~SimRest();

    void Reset();

    unsigned char UpdateTestRest(float dt);

    // Members
protected:
    class PhRgdBody * rb; // offset 0x4, size 0x4
    float cumVy; // offset 0x8, size 0x4
};
// total size: 0xC
class iPhSpeed : protected PhUnits {
    // Members
protected:
    float fValue; // offset 0x4, size 0x4
    float fValueCGS; // offset 0x8, size 0x4
};
// total size: 0xC
class PhSpeed : public iPhSpeed {};
// Range: 0x800C8F74 -> 0x800C905C
// this: r1+0x8
SimRest::SimRest(class PhRgdBody * obj /* r1+0xC */) {
    // Local variables
    class PhSpeed s; // r1+0x1C

    // References
    // -> struct [anonymous] iPhSpeed::__vtable;
    // -> struct [anonymous] PhSpeed::__vtable;
    // -> static float iunRestMinSimSpeedScale;
    // -> static float unRestMinSimSpeedScale;
    // -> static float iMinSimSpeed;
    // -> static float MinSimSpeed;
    // -> static float iInitCumVy;
    // -> static float InitCumVy;
    // -> struct [anonymous] SimRest::__vtable;
    // -> struct [anonymous] SimRestBase::__vtable;
}

// total size: 0x4
class SimRestBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x800C9134 -> 0x800C9190
// this: r31
SimRest::~SimRest() {
    // References
    // -> struct [anonymous] SimRestBase::__vtable;
    // -> struct [anonymous] SimRest::__vtable;
}

// Range: 0x800C9190 -> 0x800C919C
// this: r1+0x0
void SimRest::Reset() {
    // References
    // -> static float iInitCumVy;
}

// Range: 0x800C919C -> 0x800C92C4
// this: r1+0x8
unsigned char SimRest::UpdateTestRest(float dt /* r1+0xC */) {
    // Local variables
    unsigned char ret; // r4

    // References
    // -> static float iMinRotSpeed;
    // -> static float iMinSimSpeed;
    // -> static float iInitCumVy;
    // -> static float iwCumVy;
}

// Range: 0x800C92C4 -> 0x800C92D4
float SimRest::UnRestSpeed() {
    // References
    // -> static float iunRestMinSimSpeedScale;
    // -> static float iMinSimSpeed;
}

// total size: 0x18
struct {} SimRestFilter::__vtable; // size: 0x18, address: 0x80114070
// total size: 0x8
class SimRestFilter : public SimRestBase {
    // Functions
    SimRestFilter(class PhRgdBody * obj);

    ~SimRestFilter();

    void Reset();

    unsigned char UpdateTestRest(float dt);

    float UnRestSpeed() const;

    // Members
protected:
    class PhRgdBody * rb; // offset 0x4, size 0x4
};
// Range: 0x800C92D4 -> 0x800C9338
// this: r1+0x8
SimRestFilter::SimRestFilter(class PhRgdBody * obj /* r1+0xC */) {
    // References
    // -> struct [anonymous] SimRestFilter::__vtable;
    // -> struct [anonymous] SimRestBase::__vtable;
}

// Range: 0x800C9338 -> 0x800C9394
// this: r31
SimRestFilter::~SimRestFilter() {
    // References
    // -> struct [anonymous] SimRestBase::__vtable;
    // -> struct [anonymous] SimRestFilter::__vtable;
}

static // total size: 0x8
struct {} SimRestBase::__RTTI; // size: 0x8, address: 0x8013A54C
static // total size: 0x8
struct {} SimRestFilter::__RTTI; // size: 0x8, address: 0x8013A554
// Range: 0x800C9394 -> 0x800C93C8
// this: r3
void SimRestFilter::Reset() {}

// Range: 0x800C93C8 -> 0x800C9448
// this: r31
unsigned char SimRestFilter::UpdateTestRest(float dt /* f1 */) {}

// Range: 0x800C9448 -> 0x800C9454
// this: r1+0x0
float SimRestFilter::UnRestSpeed() const {}

static // total size: 0x8
struct {} SimRest::__RTTI; // size: 0x8, address: 0x8013A564
static // total size: 0x8
struct {} PhUnits::__RTTI; // size: 0x8, address: 0x8013A574
static // total size: 0x8
struct {} iPhSpeed::__RTTI; // size: 0x8, address: 0x8013A57C
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
struct {} PhSpeed::__RTTI; // size: 0x8, address: 0x8013A58C



