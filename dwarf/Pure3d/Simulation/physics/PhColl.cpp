/*
    Compile unit: D:\Pure3d\Simulation\physics\PhColl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CF68C -> 0x800CFFEC
*/
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
// total size: 0x94
class PhCollision {
    // Functions
    PhCollision(class PhCollEl * a, const class Vector & pa, class PhCollEl * b, const class Vector & pb, float dist, const class Vector & N);

    void Set(class PhCollEl * a, const class Vector & pa, class PhCollEl * b, const class Vector & pb, float dist, const class Vector & N);

    void SetObj(class PhBasicObj * obj, class Vector & pos);

    class Vector GetPa();

    class Vector GetPb();

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
// Range: 0x800CF68C -> 0x800CF71C
// this: r1+0x8
PhCollision::PhCollision(class PhCollEl * a /* r26 */, const class Vector & pa /* r27 */, class PhCollEl * b /* r28 */, const class Vector & pb /* r29 */, float dist /* f31 */, const class Vector & N /* r30 */) {}

// Range: 0x800CF71C -> 0x800CF89C
// this: r30
void PhCollision::Set(class PhCollEl * a /* r1+0xC */, const class Vector & pa /* r1+0x10 */, class PhCollEl * b /* r1+0x14 */, const class Vector & pb /* r1+0x18 */, float dist /* r1+0x1C */, const class Vector & N /* r1+0x20 */) {}

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
// Range: 0x800CF89C -> 0x800CF998
// this: r28
void PhCollision::SetObj(class PhBasicObj * obj /* r29 */, class Vector & pos /* r30 */) {}

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
// Range: 0x800CF998 -> 0x800CFA58
// this: r31
class Vector PhCollision::GetPa() {}

// Range: 0x800CFA58 -> 0x800CFB18
// this: r31
class Vector PhCollision::GetPb() {}

unsigned char fUseAtRest; // size: 0x1, address: 0x8013B3C8
// total size: 0x14
class PhPairElList : public VoidPList {};
class PhPairElList * fBuffList; // size: 0x4, address: 0x8013B3CC
// total size: 0xC
struct {} PhPairEl::__vtable; // size: 0xC, address: 0x801145C0
// total size: 0x18
class PhPairEl {
    // Functions
    PhPairEl(class PhCollEl * a, class PhCollEl * b);

    void Set(class PhCollEl * a, class PhCollEl * b);

    unsigned char AtRest() const;

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
// Range: 0x800CFB18 -> 0x800CFB54
// this: r31
PhPairEl::PhPairEl(class PhCollEl * a /* r4 */, class PhCollEl * b /* r5 */) {
    // References
    // -> struct [anonymous] PhPairEl::__vtable;
}

// Range: 0x800CFB54 -> 0x800CFBE8
// this: r3
void PhPairEl::Set(class PhCollEl * a /* r6 */, class PhCollEl * b /* r5 */) {}

// Range: 0x800CFBE8 -> 0x800CFD58
// this: r30
unsigned char PhPairEl::AtRest() const {
    // Local variables
    unsigned char rest; // r3

    // References
    // -> unsigned char fUseAtRest;
}

// total size: 0xC
struct {} PhPairElList::__vtable; // size: 0xC, address: 0x801145A8
// Range: 0x800CFD58 -> 0x800CFEA4
class PhPairEl * PhPairEl::NewPair(class PhCollEl * a /* r30 */, class PhCollEl * b /* r31 */) {
    // Local variables
    class PhPairEl * pair; // r29

    // References
    // -> struct [anonymous] PhPairEl::__vtable;
    // -> class PhPairElList * fBuffList;
    // -> struct [anonymous] PhPairElList::__vtable;
}

// Range: 0x800CFEA4 -> 0x800CFED0
void PhPairEl::DeletePair(class PhPairEl * el /* r3 */) {
    // References
    // -> class PhPairElList * fBuffList;
}

// Range: 0x800CFED0 -> 0x800CFF88
void PhPairEl::EmptyBuffer() {
    // Local variables
    int i; // r30

    // References
    // -> class PhPairElList * fBuffList;
}

static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A6B0
static // total size: 0x8
struct {} PhPairElList::__RTTI; // size: 0x8, address: 0x8013A6B8
static // total size: 0x8
struct {} PhPairEl::__RTTI; // size: 0x8, address: 0x8013A6C0



