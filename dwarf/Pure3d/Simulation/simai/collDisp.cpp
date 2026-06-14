/*
    Compile unit: D:\Pure3d\Simulation\simai\collDisp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BE3C4 -> 0x800BEA58
*/
int MAXLEVEL; // size: 0x4, address: 0x8013B2E8
int ONLYLEVEL; // size: 0x4, address: 0x8013B2EC
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
// Range: 0x800BE3C4 -> 0x800BE4A8
void DrawCollEl(class PhCollEl * el /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x800BE4A8 -> 0x800BE544
void DrawBBox(class PhCollEl * el /* r6 */) {
    // References
    // -> int ONLYLEVEL;
    // -> int MAXLEVEL;
}

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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x800BE544 -> 0x800BE6C0
void DrawCyl(class PhCyl * el /* r31 */) {
    // Local variables
    class Vector p1; // r1+0x28
    class Vector p2; // r1+0x1C
    struct pddiColour colour; // r1+0x18
    class Vector p; // r1+0xC
}

// total size: 0x44
class PhSphere : public PhCollEl {
    // Members
protected:
    float fSRi; // offset 0x40, size 0x4
};
// Range: 0x800BE6C0 -> 0x800BE6FC
void DrawSphere(class PhSphere * el /* r4 */) {
    // Local variables
    struct pddiColour colour; // r1+0xC
}

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
// Range: 0x800BE6FC -> 0x800BE7C8
void DrawOBBox(class PhOBBox * el /* r30 */) {
    // Local variables
    class Vector a; // r1+0x28
    class Vector p1; // r1+0x1C
    class Vector p2; // r1+0x10
    struct pddiColour colour; // r1+0xC
    int i; // r31
}

// total size: 0x58
class PhWall : public PhCollEl {
    // Members
public:
    class Vector fN; // offset 0x40, size 0xC
protected:
    class Vector fNi; // offset 0x4C, size 0xC
};
// Range: 0x800BE7C8 -> 0x800BEA58
void DrawWall(class PhWall * el /* r31 */) {
    // Local variables
    class Vector a; // r1+0x44
    class Vector b; // r1+0x38
    class Vector p1; // r1+0x2C
    class Vector p2; // r1+0x20
    struct pddiColour colour; // r1+0x1C
}




