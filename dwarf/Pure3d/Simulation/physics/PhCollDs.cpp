/*
    Compile unit: D:\Pure3d\Simulation\physics\PhCollDs.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D2030 -> 0x800D98C0
*/
int FILTER_COLLISIONS; // size: 0x4, address: 0x8013A6E0
// total size: 0xC
struct {} PhCollDetectSub::__vtable; // size: 0xC, address: 0x8011468C
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
// total size: 0x34
class PhCollDetectSub {
    // Functions
    PhCollDetectSub();

    ~PhCollDetectSub();

    void OBBoxV(class PhOBBox * Ela, class PhOBBox * Elb);

    void OBBoxEE(class PhOBBox * Ela, class PhOBBox * Elb);

    unsigned char OBBoxSepPlane(class PhOBBox * Ela, class PhOBBox * Elb);

    unsigned char EdgeEdge(class Vector & pa, class Vector & oa, float la, class Vector & pb, class Vector & ob, float lb, class Vector & N, float nn, float dist, class PhCollEl * Ela, class PhCollEl * Elb);

    unsigned char PointBoxColl(class PhOBBox * El, class Vector & pp, float & dist, float radius, unsigned char getpos);

    void OBBoxCylF(class PhOBBox * Ela, class PhCyl * Elb);

    void OBBoxCylV(class PhOBBox * Ela, class PhCyl * Elb);

    void OBBoxCylEE(class PhOBBox * Ela, class PhCyl * Elb);

    void OBBoxCylEC(class PhOBBox * Ela, class PhCyl * Elb);

    unsigned char OBBoxCylSepPlane(class PhOBBox * Ela, class PhCyl * Elb);

    void CircleEdge(class PhCollEl * Ela, class Vector & pa, class Vector & oa, float la, class PhCyl * Elb, float nft, float no, unsigned char use_all_inside);

    void BoxSphereColl(class PhOBBox * Ela, class PhCollEl * Elb, class Vector & Pb, float rad);

    unsigned char CylCylSepPlane(class PhCyl * Ela, class PhCyl * Elb);

    unsigned char CylCylEnd(class PhCyl * Ela, class PhCyl * Elb, unsigned char testSphereA, unsigned char addColl);

    void CircleCyl(class PhCyl * Ela, class PhCyl * Elb);

    unsigned char CylSphereColl(class PhCyl * Ela, class Vector & Pb, float rb, class Vector & N, float & dist, class Vector * ppa, class Vector * ppb, unsigned char testSphereA);

    enum GEOM_CODE CircleCircleIntersection(const class Vector & in_c1, const class Vector & in_c2, const class Vector & in_n1, float in_r1, float in_r2, unsigned char in_all, class Vector & o_p1, class Vector & o_p2);

    void AddCollToList(class PhCollision * in_c);

    void AddCollision(class PhCollEl * Ela, class Vector & pa, class PhCollEl * Elb, class Vector & pb, float dist, class Vector & N);

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
// Range: 0x800D2030 -> 0x800D205C
// this: r3
PhCollDetectSub::PhCollDetectSub() {
    // References
    // -> struct [anonymous] PhCollDetectSub::__vtable;
}

// Range: 0x800D205C -> 0x800D20A8
// this: r31
PhCollDetectSub::~PhCollDetectSub() {
    // References
    // -> struct [anonymous] PhCollDetectSub::__vtable;
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
// Range: 0x800D20A8 -> 0x800D2794
// this: r24
void PhCollDetectSub::OBBoxV(class PhOBBox * Ela /* r25 */, class PhOBBox * Elb /* r26 */) {
    // Local variables
    class Vector p; // r1+0x128
    class Vector pa; // r1+0x11C
    float np[4][3]; // r1+0xEC
    float nt[3]; // r1+0xE0
    float dist; // f23
    float dist2; // f20
    float dist3; // f19
    float dst[4][3]; // r1+0xAC
    int i; // r1+0x8
    int j; // r27
    int i; // r1+0x8
    int order[3]; // r1+0xA0
    int ii; // r1+0x8
    class Vector N; // r1+0x90
}

// Range: 0x800D2794 -> 0x800D2798
void PhCollDetectSub::OBBoxBorderCollMove() {}

// Range: 0x800D2798 -> 0x800D2BB4
// this: r18
void PhCollDetectSub::OBBoxEE(class PhOBBox * Ela /* r19 */, class PhOBBox * Elb /* r20 */) {
    // Local variables
    class Vector pa; // r1+0xDC
    class Vector pb; // r1+0xD0
    class Vector N; // r1+0xC4
    float npa; // f6
    float npb; // r1+0x8
    float nt; // f22
    float nn; // r1+0x8
    float dist; // f4
    int i; // r24
    int j; // r23
    float invn; // r1+0x8
    int k; // r22
    int l; // r21
}

// Range: 0x800D2BB4 -> 0x800D2DE8
// this: r29
unsigned char PhCollDetectSub::OBBoxSepPlane(class PhOBBox * Ela /* r30 */, class PhOBBox * Elb /* r31 */) {
    // Local variables
    float projection; // f3
    int i; // r24
    class Vector axe; // r1+0x50
    int j; // r24
}

// Range: 0x800D2DE8 -> 0x800D3184
// this: r25
unsigned char PhCollDetectSub::EdgeEdge(class Vector & pa /* r26 */, class Vector & oa /* r27 */, float la /* f28 */, class Vector & pb /* r28 */, class Vector & ob /* r29 */, float lb /* f29 */, class Vector & N /* r8 */, float nn /* f30 */, float dist /* f31 */, class PhCollEl * Ela /* r30 */, class PhCollEl * Elb /* r31 */) {
    // Local variables
    class Vector dp; // r1+0x7C
    float kb; // r1+0x8
    class Vector tmp; // r1+0x70
    float ka; // r1+0x8
    float dd; // f1
}

// Range: 0x800D3184 -> 0x800D34FC
// this: r23
unsigned char PhCollDetectSub::PointBoxColl(class PhOBBox * El /* r24 */, class Vector & pp /* r25 */, float & dist /* r26 */, float radius /* f28 */, unsigned char getpos /* r27 */) {
    // Local variables
    float ndp[3]; // r1+0xB0
    float borderDist; // f29
    float dst[3]; // r1+0xA4
    int i; // r1+0x8
    int order[3]; // r1+0x98
    int ii; // r28
}

// Range: 0x800D34FC -> 0x800D3650
void PhCollDetectSub::FindFaceIndexOrder(int * i /* r1+0x4 */, float d0 /* r1+0x8 */, float d1 /* r1+0xC */, float d2 /* r1+0x10 */) {}

// Range: 0x800D3650 -> 0x800D3B08
// this: r24
void PhCollDetectSub::OBBoxCylF(class PhOBBox * Ela /* r25 */, class PhCyl * Elb /* r26 */) {
    // Local variables
    class Vector pb; // r1+0xD4
    class Vector pa; // r1+0xC8
    class Vector tmp1; // r1+0xBC
    class Vector tmp2; // r1+0xB0
    float dist; // f1
    float nt[3]; // r1+0x9C
    int i; // r1+0x8
    class Vector N; // r1+0x8C
}

// Range: 0x800D3B08 -> 0x800D41E4
// this: r27
void PhCollDetectSub::OBBoxCylV(class PhOBBox * Ela /* r28 */, class PhCyl * Elb /* r29 */) {
    // Local variables
    class Vector pa; // r1+0x8C
    class Vector pb; // r1+0x80
    float dist; // f1
    float dist3; // f22
    unsigned char collide; // r31
    int j; // r30
}

// Range: 0x800D41E4 -> 0x800D4554
// this: r27
void PhCollDetectSub::OBBoxCylEE(class PhOBBox * Ela /* r28 */, class PhCyl * Elb /* r29 */) {
    // Local variables
    class Vector pa; // r1+0x94
    class Vector pb; // r1+0x88
    class Vector N; // r1+0x7C
    float npa; // f7
    float npb; // f23
    float nt; // f22
    float nn; // r1+0x8
    float dist; // f4
    int i; // r30
    float invn; // r1+0x8
    int k; // r24
}

// Range: 0x800D4554 -> 0x800D4664
// this: r24
void PhCollDetectSub::OBBoxCylEC(class PhOBBox * Ela /* r25 */, class PhCyl * Elb /* r26 */) {
    // Local variables
    float nft; // f31
    class Vector pa; // r1+0x1C
    float no; // f30
    int i; // r28
    int k; // r27
}

// Range: 0x800D4664 -> 0x800D49C4
// this: r29
unsigned char PhCollDetectSub::OBBoxCylSepPlane(class PhOBBox * Ela /* r30 */, class PhCyl * Elb /* r31 */) {
    // Local variables
    class Vector pb; // r1+0x7C
    float dist; // r1+0x78
    float projection; // f2
    float p; // f3
    int i; // r26
    class Vector axe; // r1+0x68
}

// Range: 0x800D49C4 -> 0x800D6458
// this: r27
void PhCollDetectSub::CircleEdge(class PhCollEl * Ela /* r28 */, class Vector & pa /* r29 */, class Vector & oa /* r30 */, float la /* f29 */, class PhCyl * Elb /* r31 */, float nft /* r1+0x20 */, float no /* r1+0x24 */, unsigned char use_all_inside /* r1+0x28 */) {
    // Local variables
    class Vector pb; // r1+0x35C
    unsigned char all_inside; // r1+0x8
    float dn; // f1
    float depth; // r1+0x8
    float nr; // r1+0x8
    float dn; // f25
    float dr; // r1+0x8
    float da; // f3
    float t1oa; // r1+0x8
    float t2oa; // r1+0x8
    float ds; // r1+0x8
    class Vector pbc; // r1+0x320
    int i; // r26
    float tp; // f1
    float dn; // r1+0x8
    float dp; // f26
    float a; // r1+0x8
    float s2; // f1
    float p; // r1+0x8
    int i; // r26
    float sign; // f30
    float dr; // r1+0x8
    float depth; // r1+0x8
    class Vector l_pb; // r1+0x2F4
    class Vector e1; // r1+0x2E8
    class Vector e2; // r1+0x2DC
    float mpt1; // f2
    float mpt2; // f1
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
// Range: 0x800D6458 -> 0x800D65F0
// this: r28
void PhCollDetectSub::BoxSphereColl(class PhOBBox * Ela /* r29 */, class PhCollEl * Elb /* r30 */, class Vector & Pb /* r31 */, float rad /* f31 */) {
    // Local variables
    class Vector pa; // r1+0x40
    float dist; // r1+0x3C
    class Vector N; // r1+0x30
    class Vector pb; // r1+0x24
    class PhCollision * coll; // r4
}

// Range: 0x800D65F0 -> 0x800D6850
// this: r29
unsigned char PhCollDetectSub::CylCylSepPlane(class PhCyl * Ela /* r30 */, class PhCyl * Elb /* r31 */) {
    // Local variables
    float projection; // f3
    class Vector axe; // r1+0x70
}

enum GEOM_CODE {
    NO_INTERSECTION = -1,
    ALL_INSIDE = 0,
    ONE_POINT = 1,
    TWO_POINTS = 2,
    THREE_POINTS = 3,
};
// Range: 0x800D6850 -> 0x800D7DA0
// this: r21
unsigned char PhCollDetectSub::CylCylEnd(class PhCyl * Ela /* r22 */, class PhCyl * Elb /* r23 */, unsigned char testSphereA /* r25 */, unsigned char addColl /* r24 */) {
    // Local variables
    class Vector pb; // r1+0x27C
    class Vector pa; // r1+0x270
    class Vector psb; // r1+0x264
    class Vector * ppa; // r20
    class Vector * ppb; // r26
    unsigned char collide; // r31
    int i; // r19
    int j; // r20
    float dist; // r1+0x8
    float la; // f30
    float lb; // f29
    class PhCollision * coll; // r4
    int i; // r30
    int j; // r29
    float la; // f23
    float lb; // f30
    class Vector ca; // r1+0x238
    class Vector cb; // r1+0x22C
    class Vector e1_e1; // r1+0x220
    class Vector e1; // r1+0x214
    float depth; // r1+0x288
    enum GEOM_CODE res; // r19
    class Vector pa2; // r1+0x208
    float intr_a; // r1+0x8
    float intr_b; // r1+0x8
    unsigned char a_collide; // r19
    class Vector pt; // r1+0x1F4
    float b1; // f2
    float b2; // f1
    float dp; // r1+0x8
    float da1; // f2
    float da2; // f1
    float depth; // r1+0x8
    class Vector pa2; // r1+0x1C4
    enum GEOM_CODE res; // r1+0x8
    class Vector * cap; // r28
    class Vector * cbp; // r27
    class PhCyl * Elap; // r26
    class PhCyl * Elbp; // r25
    class Vector e1p; // r1+0x1B8
    float f1; // f15
    float f2; // f14
    float delta; // r1+0x8
    float a; // f3
    float b; // f5
    float c; // f7
    float q; // f1
    class PhCyl * l_Ela; // r27
    class PhCyl * l_Elb; // r28
    float dist; // r1+0x1A8
    float length; // f23
    int i; // r24
}

// Range: 0x800D7DA0 -> 0x800D82C0
// this: r26
void PhCollDetectSub::CircleCyl(class PhCyl * Ela /* r27 */, class PhCyl * Elb /* r28 */) {
    // Local variables
    class PhCyl * l_Ela; // r31
    class PhCyl * l_Elb; // r30
    int i; // r29
    class Vector l_N; // r1+0xEC
    class Vector pa; // r1+0xE0
    unsigned char perpendicular; // r25
    float nft; // f2
    float no; // f3
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
// Range: 0x800D82C0 -> 0x800D8A0C
// this: r25
unsigned char PhCollDetectSub::CylSphereColl(class PhCyl * Ela /* r26 */, class Vector & Pb /* r1+0x10 */, float rb /* f31 */, class Vector & N /* r27 */, float & dist /* r28 */, class Vector * ppa /* r29 */, class Vector * ppb /* r30 */, unsigned char testSphereA /* r1+0x28 */) {
    // Local variables
    float dr; // f1
    unsigned char collide; // r31
}

// Range: 0x800D8A0C -> 0x800D8BB4
unsigned char PhCollDetectSub::PlanePlaneIntersection(class Vector & in_c1 /* r24 */, class Vector & in_c2 /* r25 */, class Vector & in_n1 /* r26 */, class Vector & in_n2 /* r27 */, class Vector * o_pt /* r28 */, class Vector * io_ns /* r29 */, unsigned char in_computeDirection /* r1+0x24 */) {
    // Local variables
    float A1; // f31
    float A2; // f30
    int u; // r31
    int v; // r30
    int w; // r1+0x8
    float pu; // f3
    float pv; // r1+0x8
}

// Range: 0x800D8BB4 -> 0x800D8F20
// this: r1+0x8
enum GEOM_CODE PhCollDetectSub::CircleCircleIntersection(const class Vector & in_c1 /* r1+0xC */, const class Vector & in_c2 /* r1+0x10 */, const class Vector & in_n1 /* r6 */, float in_r1 /* r1+0x18 */, float in_r2 /* r1+0x1C */, unsigned char in_all /* r1+0x20 */, class Vector & o_p1 /* r30 */, class Vector & o_p2 /* r31 */) {
    // Local variables
    float d; // r1+0x8
    class Vector c1_c2; // r1+0x70
    float a; // f4
    float h; // f31
    class Vector e1; // r1+0x60
}

// Range: 0x800D8F20 -> 0x800D935C
// this: r24
void PhCollDetectSub::AddCollToList(class PhCollision * in_c /* r25 */) {
    // Local variables
    unsigned char l_bAdd; // r30
    class PhBasicObj * obja; // r1+0x8
    class PhBasicObj * objb; // r4
    class PhBasicObj * new_obja; // r29
    class PhBasicObj * new_objb; // r28
    class PhCollision * pColl; // r27
    int i; // r26
    int identity; // r5
    class Vector * vPa; // r3
    class Vector * vPb; // r23
    class Vector vtmp; // r1+0x68

    // References
    // -> int FILTER_COLLISIONS;
}

// Range: 0x800D935C -> 0x800D9398
// this: r31
void PhCollDetectSub::AddCollision(class PhCollEl * Ela /* r4 */, class Vector & pa /* r5 */, class PhCollEl * Elb /* r6 */, class Vector & pb /* r7 */, float dist /* f1 */, class Vector & N /* r8 */) {
    // Local variables
    class PhCollision * coll; // r4
}

class PhCollisionList * fBuffList; // size: 0x4, address: 0x8013B3D8
// total size: 0xC
struct {} PhCollData::__vtable; // size: 0xC, address: 0x8011463C
// total size: 0xC
struct {} PhCollisionList::__vtable; // size: 0xC, address: 0x80114670
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
    // Functions
    PhCollData();

    ~PhCollData();

    void MergeList();

    void EmptyUpdateList();

    void EmptyList();

    // Static members
    static class PhCollisionList * fBuffList; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class PhCollisionList fCollList; // offset 0x4, size 0x14
    class PhCollisionList fUpdateCollList; // offset 0x18, size 0x14
};
// Range: 0x800D9398 -> 0x800D941C
// this: r1+0x8
PhCollData::PhCollData() {
    // References
    // -> struct [anonymous] PhCollisionList::__vtable;
    // -> struct [anonymous] PhCollData::__vtable;
}

// Range: 0x800D9480 -> 0x800D9688
// this: r30
PhCollData::~PhCollData() {
    // Local variables
    int i; // r27
    int i; // r27
    int i; // r27

    // References
    // -> struct [anonymous] PhCollisionList::__vtable;
    // -> class PhCollisionList * fBuffList;
    // -> struct [anonymous] PhCollData::__vtable;
}

// Range: 0x800D9688 -> 0x800D96C4
// this: r31
void PhCollData::MergeList() {}

// Range: 0x800D96C4 -> 0x800D970C
// this: r31
void PhCollData::EmptyUpdateList() {
    // References
    // -> class PhCollisionList * fBuffList;
}

// Range: 0x800D970C -> 0x800D9754
// this: r31
void PhCollData::EmptyList() {
    // References
    // -> class PhCollisionList * fBuffList;
}

// Range: 0x800D9754 -> 0x800D984C
class PhCollision * PhCollData::NewColl(class PhCollEl * a /* r26 */, const class Vector & pa /* r27 */, class PhCollEl * b /* r28 */, const class Vector & pb /* r29 */, float dist /* f31 */, const class Vector & n /* r30 */) {
    // Local variables
    class PhCollision * coll; // r31

    // References
    // -> class PhCollisionList * fBuffList;
    // -> struct [anonymous] PhCollisionList::__vtable;
}

// Range: 0x800D984C -> 0x800D98C0
void PhCollData::OldColl(class PhCollision * in_c /* r31 */) {
    // References
    // -> class PhCollisionList * fBuffList;
}

static // total size: 0x8
struct {} PhCollData::__RTTI; // size: 0x8, address: 0x8013A6E4
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A6EC
static // total size: 0x8
struct {} PhCollisionList::__RTTI; // size: 0x8, address: 0x8013A6F4
static // total size: 0x8
struct {} PhCollDetectSub::__RTTI; // size: 0x8, address: 0x8013A6FC



