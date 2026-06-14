/*
    Compile unit: D:\Pure3d\Simulation\physics\PhCollS.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DCCC8 -> 0x800DDC68
*/
static int MAX_ITER; // size: 0x4, address: 0x8013A760
float FACTMINV; // size: 0x4, address: 0x8013A764
float MAXREST; // size: 0x4, address: 0x8013A768
float MINREST; // size: 0x4, address: 0x8013A76C
float maxFactRest; // size: 0x4, address: 0x8013A770
float minFactRest; // size: 0x4, address: 0x8013A774
// total size: 0x1C
struct {} PhCollSolver::__vtable; // size: 0x1C, address: 0x801148A4
// total size: 0x8
class AccessCounter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
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
// total size: 0x28
class iPhEnv : public AccessCounter, protected PhUnits {
    // Members
protected:
    class Vector fGravityCGS; // offset 0xC, size 0xC
    class Vector fGravity; // offset 0x18, size 0xC
    float fGravityNorm; // offset 0x24, size 0x4
};
// total size: 0x60
class PhCollSolver : public AccessCounter {
    // Functions
    PhCollSolver();

    ~PhCollSolver();

    void SolveCollisions(class iPhEnv * env, class PhCollisionList * list);

    void SolveCollisionImpulse();

    void StartObj(class PhBasicObj * a, class PhBasicObj * b, class Vector & pos, class PhSymMat & m);

    void ComputeImpulse(class Vector & imp, float & dist);

    float RestCoeff(float dist, float vn);

    float FrictCoeff();

    float TangRestCoeff();

    float CollDist();

    void MassMatrix();

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
// Range: 0x800DCCC8 -> 0x800DCD10
// this: r31
PhCollSolver::PhCollSolver() {
    // References
    // -> struct [anonymous] PhCollSolver::__vtable;
}

// Range: 0x800DCD10 -> 0x800DCD74
// this: r30
PhCollSolver::~PhCollSolver() {
    // References
    // -> struct [anonymous] PhCollSolver::__vtable;
}

// total size: 0x4
class ListLocker {
    // Members
    class VoidPList * fList; // offset 0x0, size 0x4
};
// Range: 0x800DCD74 -> 0x800DCE84
// this: r31
void PhCollSolver::SolveCollisions(class iPhEnv * env /* r29 */, class PhCollisionList * list /* r28 */) {
    // Local variables
    class ListLocker lock; // r1+0x3C
    int nbiter; // r29
    int i; // r28

    // References
    // -> static int MAX_ITER;
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
// Range: 0x800DCE84 -> 0x800DD1D0
// this: r31
void PhCollSolver::SolveCollisionImpulse() {
    // Local variables
    class Vector imp; // r1+0x44
    unsigned char oka; // r1+0x8
    unsigned char okb; // r29
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
// Range: 0x800DD1D0 -> 0x800DD270
unsigned char PhCollSolver::AddImpulse(class PhBasicObj * a /* r27 */, class PhBasicObj * b /* r28 */, class Vector & p /* r29 */, class PhSymMat & m /* r30 */, class Vector & imp /* r8 */) {
    // Local variables
    unsigned char ret; // r31
}

// Range: 0x800DD270 -> 0x800DD304
// this: r4
void PhCollSolver::StartObj(class PhBasicObj * a /* r28 */, class PhBasicObj * b /* r29 */, class Vector & pos /* r30 */, class PhSymMat & m /* r31 */) {}

// Range: 0x800DD304 -> 0x800DD338
void PhCollSolver::EndObj(class PhBasicObj * a /* r4 */, unsigned char fdyn /* r5 */) {}

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
// Range: 0x800DD338 -> 0x800DD870
// this: r29
void PhCollSolver::ComputeImpulse(class Vector & imp /* r30 */, float & dist /* r31 */) {
    // Local variables
    float e; // f24
    float mu; // r1+0x8
    float e_t; // r1+0x8
    class Vector l_Normal; // r1+0x84
    class Vector l_v; // r1+0x78
    class Vector P_2; // r1+0x60
    class PhSymMat invMx; // r1+0x44
    float kappa; // f4
}

static unsigned char dynrest$413; // size: 0x1, address: 0x8013B3E0
static signed char init$414; // size: 0x1, address: 0x8013B3E1
// Range: 0x800DD870 -> 0x800DD9E0
// this: r1+0x8
float PhCollSolver::RestCoeff(float dist /* f3 */, float vn /* f30 */) {
    // Local variables
    float rest; // r1+0x8
    float factRest; // f29

    // References
    // -> float MAXREST;
    // -> float maxFactRest;
    // -> float minFactRest;
    // -> static unsigned char dynrest$413;
    // -> float FACTMINV;
    // -> float MINREST;
    // -> static signed char init$414;
}

// Range: 0x800DD9E0 -> 0x800DDAF8
// this: r31
float PhCollSolver::FrictCoeff() {}

// Range: 0x800DDAF8 -> 0x800DDB9C
// this: r31
float PhCollSolver::TangRestCoeff() {}

// Range: 0x800DDB9C -> 0x800DDBC0
// this: r1+0x0
float PhCollSolver::CollDist() {}

// Range: 0x800DDBC0 -> 0x800DDC38
class Vector PhCollSolver::GetObjSpeed(class PhBasicObj * obj /* r5 */, class Vector & pos /* r6 */) {
    // Local variables
    class Vector v; // r1+0x20
}

// Range: 0x800DDC38 -> 0x800DDC68
// this: r1+0x8
void PhCollSolver::MassMatrix() {}

static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013A778
static // total size: 0x8
struct {} PhCollSolver::__RTTI; // size: 0x8, address: 0x8013A780



