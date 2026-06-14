/*
    Compile unit: D:\Pure3d\Simulation\simai\trackerlink.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C9720 -> 0x800CAA54
*/
// total size: 0xC
struct {} TrackerLink::__vtable; // size: 0xC, address: 0x8011424C
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
// total size: 0x94
class TrackerLink {
    // Functions
    TrackerLink(int trackerJointJnt, class tPose * p, class SimTarget * t);

    ~TrackerLink();

    void SetUseAnimJointLocalMat(unsigned char b);

    void LookAt(class SimTarget * t, unsigned char resetdef);

    void SetLookAtControl(enum LookAtControlEnum c);

    void SetAnimJointLocalMat();

    void TurnTrackerJoint(float dt);

    void DebugDisplay();

    void BuildjointDep();

    void CompleteJointTransform();

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
// Range: 0x800C9720 -> 0x800C97FC
// this: r31
TrackerLink::TrackerLink(int trackerJointJnt /* r1+0xC */, class tPose * p /* r1+0x10 */, class SimTarget * t /* r1+0x14 */) {
    // References
    // -> struct [anonymous] TrackerLink::__vtable;
}

// Range: 0x800C97FC -> 0x800C9888
// this: r29
TrackerLink::~TrackerLink() {
    // References
    // -> struct [anonymous] TrackerLink::__vtable;
}

// Range: 0x800C9888 -> 0x800C9938
// this: r1+0x0
void TrackerLink::SetUseAnimJointLocalMat(unsigned char b /* r1+0x4 */) {}

// Range: 0x800C9938 -> 0x800C99C0
// this: r29
void TrackerLink::LookAt(class SimTarget * t /* r30 */, unsigned char resetdef /* r31 */) {}

enum LookAtControlEnum {
    LookAtEmpty = 0,
    LookAtDissipating = 1,
    LookAtActivated = 2,
};
// Range: 0x800C99C0 -> 0x800C99C8
// this: r1+0x0
void TrackerLink::SetLookAtControl(enum LookAtControlEnum c /* r1+0x4 */) {}

// Range: 0x800C99C8 -> 0x800C9A6C
// this: r1+0x0
void TrackerLink::SetAnimJointLocalMat() {}

// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
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
// Range: 0x800C9A6C -> 0x800CA448
// this: r30
void TrackerLink::TurnTrackerJoint(float dt /* r1+0xC */) {
    // Local variables
    class Joint * h; // r31
    float speedHdt; // f31
    float speedVdt; // f30
    class Matrix m; // r1+0x210
    class Vector axis1; // r1+0x204
    class Matrix tmp; // r1+0x1C4
    class Vector dr; // r1+0x1B8
    float dot; // f29
    float drDotAxis0; // f28
    class Vector drh; // r1+0x1A0
    float ang; // f29
    class Vector tmp; // r1+0x190
    float dot; // f1
    float ang; // f1
    class Joint * h; // r4
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
// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
static float scale$434; // size: 0x4, address: 0x8013B398
static signed char init$435; // size: 0x1, address: 0x8013B39C
// Range: 0x800CA448 -> 0x800CA630
// this: r31
void TrackerLink::DebugDisplay() {
    // Local variables
    class Vector p; // r1+0x74
    class Vector v; // r1+0x68
    class Matrix m; // r1+0x28

    // References
    // -> static float scale$434;
    // -> static signed char init$435;
}

// Range: 0x800CA630 -> 0x800CA738
// this: r31
void TrackerLink::BuildjointDep() {
    // Local variables
    int i; // r1+0x3C
    class Joint * j; // r3
}

// Range: 0x800CA738 -> 0x800CA874
// this: r30
void TrackerLink::CompleteJointTransform() {
    // Local variables
    int i; // r31
    class Joint * j; // r4
}

// total size: 0xC
struct {} TrackerLinkMgr::__vtable; // size: 0xC, address: 0x80114234
// total size: 0xC
struct {} TList<TrackerLink*>::__vtable; // size: 0xC, address: 0x80114218
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x18
class TrackerLinkMgr {
    // Functions
    ~TrackerLinkMgr();

    void RemoveAll();

    void Update(float dt);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// Range: 0x800CA874 -> 0x800CA8F4
// this: r30
TrackerLinkMgr::~TrackerLinkMgr() {
    // References
    // -> struct [anonymous] TList<TrackerLink*>::__vtable;
    // -> struct [anonymous] TrackerLinkMgr::__vtable;
}

// Range: 0x800CA8F4 -> 0x800CA978
// this: r29
void TrackerLinkMgr::RemoveAll() {
    // Local variables
    int i; // r30
}

// Range: 0x800CA978 -> 0x800CA9F0
// this: r29
void TrackerLinkMgr::Update(float dt /* f31 */) {
    // Local variables
    int i; // r30
}

static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A5B8
static // total size: 0x8
struct {} TList<TrackerLink*>::__RTTI; // size: 0x8, address: 0x8013A5C0
static // total size: 0x8
struct {} TrackerLinkMgr::__RTTI; // size: 0x8, address: 0x8013A5C8
static // total size: 0x8
struct {} TrackerLink::__RTTI; // size: 0x8, address: 0x8013A5D0
// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    int * fArray; // offset 0x8, size 0x4
};



