/*
    Compile unit: D:\Pure3d\Simulation\simai\simnode.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C71E0 -> 0x800C7CC4
*/
int gRefIndex; // size: 0x4, address: 0x8013B368
class SimNodeBase * gNodeList[100]; // size: 0x190, address: 0x801373C0
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
// total size: 0x0
class SimNodeArticulated {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class SimFlex {};
// total size: 0x14
class TList : public VoidPList {};
// total size: 0x0
class SimFlexJointMgr {};
// total size: 0x0
class IKanLinkMgr {};
// total size: 0x0
class TrackerLinkMgr {};
// total size: 0x14
class iPhDynObjParam : public AccessCounter, protected PhUnits {
    // Members
protected:
    float fDensity; // offset 0xC, size 0x4
    float fDensityCGS; // offset 0x10, size 0x4
};
// total size: 0x14
class PhDynObjParam : public iPhDynObjParam {};
// total size: 0x24
class PhBasicObjParam : public iPhBasicObjParam {};
// total size: 0x0
class PhSTreeObj {};
// total size: 0x0
class tPose {};
// total size: 0x0
class FlexJointDef {};
// total size: 0x0
class tSkeleton {};
// total size: 0x0
class ParticleSystem {};
// total size: 0x0
class PhComposite {};
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
// Range: 0x800C71E0 -> 0x800C71EC
void SimNodeBase::ResetRefIndex() {
    // References
    // -> int gRefIndex;
}

// Range: 0x800C71EC -> 0x800C7234
class SimNodeBase * SimNodeBase::GetSimNode(class PhCollEl * el /* r1+0x0 */) {
    // References
    // -> class SimNodeBase * gNodeList[100];
    // -> int gRefIndex;
}

// total size: 0x34
struct {} SimNode::__vtable; // size: 0x34, address: 0x80113DF4
// total size: 0xB8
class PhObj : public PhBasicObj {
    // Members
protected:
    class Matrix fRotMat; // offset 0x70, size 0x40
    float fScaleFact; // offset 0xB0, size 0x4
};
// total size: 0x4
class SimRestBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class SimNode : public SimNodeBase {
    // Functions
    SimNode(class PhObj * obj, class Matrix * rm, class SimGroup * sg);

    ~SimNode();

    void MovingObj();

    void DebugDisplay(int in_things);

    void PushRootMatrix();

    void ResetSpeed();

    unsigned char IsRootSimulating();

    signed short SetControl(signed short ctrl);

    unsigned char TestCache();

    void ResetSimRest();

    void Update(float dt);

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
// ERROR: Failed to emit tag 7B207C (GlobalSubroutine)
// Range: 0x800C732C -> 0x800C73A8
// this: r30
SimNode::~SimNode() {
    // References
    // -> class SimNodeBase * gNodeList[100];
    // -> struct [anonymous] SimNode::__vtable;
}

// Range: 0x800C73A8 -> 0x800C7424
// this: r31
void SimNode::MovingObj() {}

// Range: 0x800C7424 -> 0x800C74B4
// this: r30
void SimNode::DebugDisplay(int in_things /* r31 */) {}

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
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800C74B4 -> 0x800C75EC
// this: r31
void SimNode::PushRootMatrix() {
    // Local variables
    class Matrix m; // r1+0x24
}

// Range: 0x800C75EC -> 0x800C763C
// this: r1+0x8
void SimNode::ResetSpeed() {}

// Range: 0x800C763C -> 0x800C767C
// this: r3
unsigned char SimNode::IsRootSimulating() {}

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
// Range: 0x800C767C -> 0x800C7770
// this: r28
signed short SimNode::SetControl(signed short ctrl /* r29 */) {
    // Local variables
    signed short currentCtrl; // r30
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
// Range: 0x800C7770 -> 0x800C7844
// this: r30
unsigned char SimNode::TestCache() {
    // Local variables
    class Vector v; // r1+0x24
    class Vector w; // r1+0x18
    unsigned char ret; // r31
}

// Range: 0x800C7844 -> 0x800C7848
void SimNode::AbsorbCache() {}

// Range: 0x800C7848 -> 0x800C7880
// this: r1+0x8
void SimNode::ResetSimRest() {}

// total size: 0x24
struct {} SimTarget::__vtable; // size: 0x24, address: 0x801141C4
// total size: 0x24
struct {} SimNodeTarget::__vtable; // size: 0x24, address: 0x80113DB8
// total size: 0x18
class SimNodeTarget : public SimTarget {
    // Functions
    SimNodeTarget(class SimNode * t);

    void ReplaceTarget(class SimNode * t);

    void GetPos(class Vector & v) const;

    void GetMassMatrix(class PhSymMat & mat) const;

    float GetMass() const;

    void GetSpeed(class Vector & v) const;

    class PhBasicObj * GetPhObj();

    void GetTransform(class Matrix & m) const;

    // Members
protected:
    class SimNode * target; // offset 0x14, size 0x4
};
// Range: 0x800C7880 -> 0x800C78E8
// this: r30
SimNodeTarget::SimNodeTarget(class SimNode * t /* r31 */) {
    // References
    // -> struct [anonymous] SimNodeTarget::__vtable;
    // -> struct [anonymous] SimTarget::__vtable;
}

// total size: 0x14
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
};
// Range: 0x800C78E8 -> 0x800C78F0
// this: r1+0x0
void SimNodeTarget::ReplaceTarget(class SimNode * t /* r1+0x4 */) {}

// Range: 0x800C78F0 -> 0x800C7924
// this: r3
void SimNodeTarget::GetPos(class Vector & v /* r4 */) const {}

// Range: 0x800C7924 -> 0x800C799C
// this: r30
void SimNodeTarget::GetMassMatrix(class PhSymMat & mat /* r31 */) const {
    // Local variables
    class Vector p; // r1+0x10
}

// Range: 0x800C799C -> 0x800C79DC
// this: r3
float SimNodeTarget::GetMass() const {}

// Range: 0x800C79DC -> 0x800C7A7C
// this: r30
void SimNodeTarget::GetSpeed(class Vector & v /* r31 */) const {}

// Range: 0x800C7A7C -> 0x800C7AAC
// this: r3
class PhBasicObj * SimNodeTarget::GetPhObj() {}

// Range: 0x800C7AAC -> 0x800C7B68
// this: r3
void SimNodeTarget::GetTransform(class Matrix & m /* r1+0xC */) const {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A490
static // total size: 0x8
struct {} SimTarget::__RTTI; // size: 0x8, address: 0x8013A498
static // total size: 0x8
struct {} SimNodeTarget::__RTTI; // size: 0x8, address: 0x8013A4A0
static // total size: 0x8
struct {} SimNodeBase::__RTTI; // size: 0x8, address: 0x8013A4B0
static // total size: 0x8
struct {} SimNode::__RTTI; // size: 0x8, address: 0x8013A4B8
// Range: 0x800C7B68 -> 0x800C7CC4
// this: r31
void SimNode::Update(float dt /* f31 */) {}




