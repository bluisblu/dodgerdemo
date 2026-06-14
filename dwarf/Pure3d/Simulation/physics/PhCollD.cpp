/*
    Compile unit: D:\Pure3d\Simulation\physics\PhCollD.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D0038 -> 0x800D2030
*/
static unsigned char FULLCYLTEST; // size: 0x1, address: 0x8013B3D0
// total size: 0x18
struct {} PhCollDetect::__vtable; // size: 0x18, address: 0x80114614
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
// total size: 0x48
class PhCollDetect : protected PhCollDetectSub, public AccessCounter {
    // Functions
    PhCollDetect();

    ~PhCollDetect();

    void DetectCollisions();

    void UpdateCollisions();

    void DetectCollision(class PhCollEl * Ela, class PhCollEl * Elb);

    void DetectColl(class PhCollEl * Ela, class PhCollEl * Elb);

    void DetectOnBBox(class PhCollEl * Ela, class PhCollEl * Elb);

    void DetectWallBBox(class PhWall * wall, class PhCollEl * Ela);

    void DetectColl(class PhWall * wall, class PhCollEl * Ela);

    void DetectColl(class PhOBBox * Ela, class PhOBBox * Elb);

    void DetectColl(class PhOBBox * Ela, class PhCyl * Elb);

    void DetectColl(class PhOBBox * Ela, class PhSphere * Elb);

    void DetectColl(class PhCyl * Ela, class PhCyl * Elb);

    void DetectColl(class PhCyl * Ela, class PhSphere * Elb);

    void DetectColl(class PhSphere * Ela, class PhSphere * Elb);

    void DetectOnSubElem(class PhCollEl * Ela, class PhCollEl * Elb);

    unsigned char CollTestInit(class PhCollEl * Ela, class PhCollEl * Elb);

    unsigned char DetectProximity(class PhPairEl * p);

    unsigned char EstimateStepNextTestForWall(class PhPairEl * p, class PhWall * wall, class PhCollEl * Ela);

    void EstimateStepNextTest(class PhPairEl * p);

    // Members
protected:
    unsigned char fQuickDetection; // offset 0x3C, size 0x1
    int fMaxStepNextTest; // offset 0x40, size 0x4
    float fSafeCollDistMultiple; // offset 0x44, size 0x4
};
// Range: 0x800D0038 -> 0x800D00A0
// this: r1+0x8
PhCollDetect::PhCollDetect() {
    // References
    // -> struct [anonymous] PhCollDetect::__vtable;
}

// Range: 0x800D00A0 -> 0x800D0118
// this: r30
PhCollDetect::~PhCollDetect() {
    // References
    // -> struct [anonymous] PhCollDetect::__vtable;
}

// Range: 0x800D0118 -> 0x800D01E8
// this: r28
void PhCollDetect::DetectCollisions() {
    // Local variables
    int i; // r30
    class PhPairEl * p; // r29
}

// Range: 0x800D01E8 -> 0x800D02AC
// this: r27
void PhCollDetect::UpdateCollisions() {
    // Local variables
    class PhCollEl * Ela; // r30
    class PhCollEl * Elb; // r29
    int i; // r28
    class PhCollision * c; // r1+0x8
}

// Range: 0x800D02AC -> 0x800D02F4
// this: r3
void PhCollDetect::DetectCollision(class PhCollEl * Ela /* r6 */, class PhCollEl * Elb /* r5 */) {}

// Range: 0x800D02F4 -> 0x800D0478
// this: r29
void PhCollDetect::DetectColl(class PhCollEl * Ela /* r30 */, class PhCollEl * Elb /* r31 */) {}

// Range: 0x800D0478 -> 0x800D060C
// this: r29
void PhCollDetect::DetectOnBBox(class PhCollEl * Ela /* r30 */, class PhCollEl * Elb /* r31 */) {
    // Local variables
    class PhCollision * coll; // r4
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
// Range: 0x800D060C -> 0x800D07AC
// this: r31
void PhCollDetect::DetectWallBBox(class PhWall * wall /* r6 */, class PhCollEl * Ela /* r9 */) {
    // Local variables
    float d; // r1+0x8
    class Vector pwall; // r1+0x38
    class Vector pa; // r1+0x2C
    class PhCollision * coll; // r4
}

// Range: 0x800D07AC -> 0x800D1074
// this: r29
void PhCollDetect::DetectColl(class PhWall * wall /* r30 */, class PhCollEl * Ela /* r31 */) {
    // Local variables
    float dist; // f1
    class Vector p; // r1+0xD0
    class Vector pa; // r1+0xC4
    int i; // r28
    class PhCollision * coll; // r4
    class PhCyl * el; // r1+0x8
    float f1; // r1+0x8
    float f2; // f6
    class PhCollision * coll; // r4
    float dist; // f1
    class PhCollision * coll; // r4
    class PhCollision * coll; // r4
    class PhCollision * coll; // r4
    unsigned char collide; // r28
    class PhCyl * el; // r1+0x8
    class Vector p; // r1+0xA8
    int i; // r27
}

// Range: 0x800D1074 -> 0x800D1164
// this: r29
void PhCollDetect::DetectColl(class PhOBBox * Ela /* r30 */, class PhOBBox * Elb /* r31 */) {}

// Range: 0x800D1164 -> 0x800D1328
// this: r29
void PhCollDetect::DetectColl(class PhOBBox * Ela /* r30 */, class PhCyl * Elb /* r31 */) {
    // Local variables
    class Vector pb; // r1+0x1C
}

// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// Range: 0x800D1328 -> 0x800D140C
// this: r29
void PhCollDetect::DetectColl(class PhOBBox * Ela /* r30 */, class PhSphere * Elb /* r31 */) {}

// Range: 0x800D140C -> 0x800D1784
// this: r29
void PhCollDetect::DetectColl(class PhCyl * Ela /* r30 */, class PhCyl * Elb /* r31 */) {
    // Local variables
    float dist; // f4
    float nn; // r1+0x8
    class Vector N; // r1+0x68
    class Vector pa; // r1+0x5C
    class Vector pb; // r1+0x50
    float nt; // f4
    float r; // f6
    float rr; // f7

    // References
    // -> static unsigned char FULLCYLTEST;
}

// Range: 0x800D1784 -> 0x800D18B8
// this: r29
void PhCollDetect::DetectColl(class PhCyl * Ela /* r30 */, class PhSphere * Elb /* r31 */) {
    // Local variables
    class Vector N; // r1+0x34
    class Vector pb; // r1+0x28
    class Vector pa; // r1+0x1C
    class PhCollision * coll; // r4
}

// Range: 0x800D18B8 -> 0x800D1A5C
// this: r29
void PhCollDetect::DetectColl(class PhSphere * Ela /* r30 */, class PhSphere * Elb /* r31 */) {
    // Local variables
    class Vector pa; // r1+0x2C
    class Vector pb; // r1+0x20
    class PhCollision * coll; // r4
}

// Range: 0x800D1A5C -> 0x800D1C94
// this: r23
void PhCollDetect::DetectOnSubElem(class PhCollEl * Ela /* r24 */, class PhCollEl * Elb /* r25 */) {
    // Local variables
    int i; // r27
    int j; // r26
    int i; // r26
    int i; // r26
}

// Range: 0x800D1C94 -> 0x800D1D44
// this: r1+0x0
unsigned char PhCollDetect::CollTestInit(class PhCollEl * Ela /* r1+0x4 */, class PhCollEl * Elb /* r1+0x8 */) {}

// Range: 0x800D1D44 -> 0x800D1E70
// this: r29
unsigned char PhCollDetect::DetectProximity(class PhPairEl * p /* r30 */) {
    // Local variables
    unsigned char prox; // r31
}

// total size: 0x58
class PhWall : public PhCollEl {
    // Members
public:
    class Vector fN; // offset 0x40, size 0xC
protected:
    class Vector fNi; // offset 0x4C, size 0xC
};
// Range: 0x800D1E70 -> 0x800D1F40
// this: r1+0x8
unsigned char PhCollDetect::EstimateStepNextTestForWall(class PhPairEl * p /* r1+0xC */, class PhWall * wall /* r1+0x10 */, class PhCollEl * Ela /* r1+0x14 */) {
    // Local variables
    unsigned char prox; // r7
    float nt; // r1+0x8
}

// Range: 0x800D1F40 -> 0x800D2028
// this: r30
void PhCollDetect::EstimateStepNextTest(class PhPairEl * p /* r31 */) {
    // Local variables
    float d; // r1+0x8
    float safeCollDist; // r1+0x8
}

static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013A6C8
static // total size: 0x8
struct {} PhCollDetectSub::__RTTI; // size: 0x8, address: 0x8013A6D0
static // total size: 0x8
struct {} PhCollDetect::__RTTI; // size: 0x8, address: 0x8013A6D8



