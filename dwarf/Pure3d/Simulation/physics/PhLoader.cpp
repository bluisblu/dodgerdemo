/*
    Compile unit: D:\Pure3d\Simulation\physics\PhLoader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E1584 -> 0x800E3078
*/
// total size: 0xC
struct {} PhGenericObj::__vtable; // size: 0xC, address: 0x80114FFC
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
// total size: 0x148
class PhGenericObj : public tEntity {
    // Functions
    ~PhGenericObj();

    class PhBasicObj * FindObj(class tEntityStore * inventory, enum PhObjEnum type);

    // Members
    float fVolume; // offset 0x10, size 0x4
    float fDensity; // offset 0x14, size 0x4
    class Vector fCM; // offset 0x18, size 0xC
    class PhSymMat fI0; // offset 0x24, size 0x1C
    class PhCollEl * fCollEl; // offset 0x40, size 0x4
    char fStringData[256]; // offset 0x44, size 0x100
    unsigned char fIsDynamic; // offset 0x144, size 0x1
    unsigned char inventoryOwnership; // offset 0x145, size 0x1
};
// Range: 0x800E1584 -> 0x800E1614
// this: r30
PhGenericObj::~PhGenericObj() {
    // References
    // -> struct [anonymous] PhGenericObj::__vtable;
}

// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
enum PhObjEnum {
    phBasicObj = 0,
    phObj = 1,
    phMoving = 2,
    phParticle = 3,
    phRgdBody = 4,
    phLRgdBody = 5,
    phSTree = 6,
    MaxPhObjEnum = 7,
};
// Range: 0x800E1614 -> 0x800E1820
// this: r30
class PhBasicObj * PhGenericObj::FindObj(class tEntityStore * inventory /* r31 */, enum PhObjEnum type /* r5 */) {
    // Local variables
    class PhBasicObj * obj; // r29
}

unsigned char fUseGenericObject; // size: 0x1, address: 0x8013B400
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
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
class tSkeleton {};
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
// total size: 0x18
class PhDOFData {
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
// total size: 0x268
class PhLoader : public tSimpleChunkHandler {
    // Functions
    PhLoader();

    class tEntity * CreateObj(class tEntityStore * store);

    class tEntity * LoadObject(class tChunkFile * file, class tEntityStore * store);

    void Init(class tEntityStore * store);

    void LoadSubPhChunks(class tChunkFile * file);

    void ReadCollEl(class tChunkFile * file, class PhCollEl * & collEl);

    void ReadSelfColl(class tChunkFile * file);

    class PhCollEl * ReadSelfCollItem(class tChunkFile * file);

    void ReadJoint(class tChunkFile * file, class PhSubSTreeObj * sobj);

    // Static members
    static unsigned char fUseGenericObject; // size: 0x1

    // Members
protected:
    class PhGenericObj * fGObj; // offset 0x18, size 0x4
    char fName[256]; // offset 0x1C, size 0x100
    char fStringData[256]; // offset 0x11C, size 0x100
    unsigned char fIsDynamic; // offset 0x21C, size 0x1
    int fNbSubObj; // offset 0x220, size 0x4
    int fCollDepth; // offset 0x224, size 0x4
    float fVolume; // offset 0x228, size 0x4
    float fDensity; // offset 0x22C, size 0x4
    class Vector fCM; // offset 0x230, size 0xC
    class PhSymMat fI0; // offset 0x23C, size 0x1C
    class PhCollEl * fCollEl; // offset 0x258, size 0x4
    class PhSubSTreeObj * fSTreeSubObj; // offset 0x25C, size 0x4
    class PhPairElList * fSelfCollList; // offset 0x260, size 0x4
    unsigned char oldPhyChunk; // offset 0x264, size 0x1
};
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} PhLoader::__vtable; // size: 0x1C, address: 0x80114F54
// ERROR: Failed to emit tag 8D4968 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
struct Chunk {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int dataLength; // offset 0x4, size 0x4
    unsigned int chunkLength; // offset 0x8, size 0x4
    unsigned int startPosition; // offset 0xC, size 0x4
};
// total size: 0x210
class tChunkFile {
    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// total size: 0x10
class tChunkHandler : public tEntity {};
// total size: 0x1C
struct {} PhOldLoader::__vtable; // size: 0x1C, address: 0x80114FA8
// total size: 0x268
class PhOldLoader : public PhLoader {};
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// Range: 0x800E193C -> 0x800E1C34
// this: r31
class tEntity * PhLoader::CreateObj(class tEntityStore * store /* r29 */) {
    // Local variables
    class PhBasicObj * obj; // r30
    class PhComposite * comp; // r30
    class PhSTreeObj * tree; // r30

    // References
    // -> struct [anonymous] PhGenericObj::__vtable;
    // -> unsigned char fUseGenericObject;
}

// Range: 0x800E1C34 -> 0x800E1E0C
// this: r29
class tEntity * PhLoader::LoadObject(class tChunkFile * file /* r30 */, class tEntityStore * store /* r31 */) {}

enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
unsigned char fUnitSet; // size: 0x1, address: 0x8013B3B0
// total size: 0xC
struct {} tSafeEntityCaster<tExportInfo>::__vtable; // size: 0xC, address: 0x80114F0C
// total size: 0x10
struct {} PhUnitsManager::__vtable; // size: 0x10, address: 0x80114510
// total size: 0x4
class PhUnitsManager : protected PhUnits {};
// ERROR: Failed to emit tag 8DADAB (GlobalSubroutine)
// Range: 0x800E201C -> 0x800E212C
// this: r24
void PhLoader::LoadSubPhChunks(class tChunkFile * file /* r25 */) {
    // Local variables
    int curJoint; // r1+0x8
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
// Range: 0x800E212C -> 0x800E244C
// this: r27
void PhLoader::ReadCollEl(class tChunkFile * file /* r28 */, class PhCollEl * & collEl /* r29 */) {
    // Local variables
    int objref; // r30
    float radius; // f31
    class Vector p; // r1+0xC8
    float radius; // f31
    float length; // f30
    class Vector p; // r1+0xBC
    class Vector o; // r1+0xB0
    float l0; // f30
    float l1; // f31
    float l2; // f29
    class Vector p; // r1+0xA4
    class Vector o0; // r1+0x98
    class Vector o1; // r1+0x8C
    class Vector o2; // r1+0x80
    class Vector p; // r1+0x74
    class Vector n; // r1+0x68
    int i; // r30
    class PhCollEl * subEl; // r1+0x60
}

// ERROR: Failed to emit tag 8DE86A (GlobalSubroutine)
// Range: 0x800E2514 -> 0x800E25D8
// this: r28
class PhCollEl * PhLoader::ReadSelfCollItem(class tChunkFile * file /* r29 */) {}

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
// Range: 0x800E25D8 -> 0x800E2910
// this: r24
void PhLoader::ReadJoint(class tChunkFile * file /* r25 */, class PhSubSTreeObj * sobj /* r26 */) {
    // Local variables
    float stiff; // f31
    float maxAngle; // f30
    float minAngle; // f29
    int dof; // r27
    class Vector cm; // r1+0x78
    class Vector axis; // r1+0x6C
    class PhSymMat m; // r1+0x50
    class PhCollEl * collEl; // r1+0x4C
    class PhDOFData * data; // r28
}

// Range: 0x800E2910 -> 0x800E295C
void LoadVector(class tChunkFile * file /* r30 */, class Vector & v /* r31 */) {}

// Range: 0x800E295C -> 0x800E29F0
void ReadVector(class tChunkFile * file /* r30 */, class Vector & v /* r31 */) {}

// Range: 0x800E29F0 -> 0x800E2AE4
void ReadIMat(class tChunkFile * file /* r30 */, class PhSymMat & m /* r31 */) {}

// total size: 0xC
struct {} tSafeEntityCaster<PhSTreeObj>::__vtable; // size: 0xC, address: 0x80114EA0
// total size: 0xC
struct {} tSafeEntityCaster<PhGenericObj>::__vtable; // size: 0xC, address: 0x80114E68
// ERROR: Failed to emit tag 8DF858 (GlobalSubroutine)
// total size: 0x1C
struct {} tExportInfoLoader::__vtable; // size: 0x1C, address: 0x80114DD4
// total size: 0x18
class tExportInfoLoader : public tSimpleChunkHandler {
    // Functions
    tExportInfoLoader();
};
// ERROR: Failed to emit tag 8DFC76 (GlobalSubroutine)
// total size: 0xC
struct {} tExportInfo::__vtable; // size: 0xC, address: 0x80114D3C
// ERROR: Failed to emit tag 8DFD7C (GlobalSubroutine)
// total size: 0x38
class tExportInfo : public tEntity {
    // Members
public:
    char geomUnits[32]; // offset 0x10, size 0x20
    unsigned char NIS; // offset 0x30, size 0x1
    unsigned char autoBoundingVolume; // offset 0x31, size 0x1
};
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013A868
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013A878
static // total size: 0x8
struct {} tExportInfo::__RTTI; // size: 0x8, address: 0x8013A880
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x8013A888
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x8013A890
static // total size: 0x8
struct {} tExportInfoLoader::__RTTI; // size: 0x8, address: 0x8013A898
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x8013A8A0
static // total size: 0x8
struct {} tSafeEntityCaster<PhGenericObj>::__RTTI; // size: 0x8, address: 0x8013A8A8
static // total size: 0x8
struct {} tSafeEntityCaster<PhSTreeObj>::__RTTI; // size: 0x8, address: 0x8013A8B0
static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A8B8
static // total size: 0x8
struct {} tSafeEntityCaster<tExportInfo>::__RTTI; // size: 0x8, address: 0x8013A8C0
static // total size: 0x8
struct {} PhLoader::__RTTI; // size: 0x8, address: 0x8013A8C8
static // total size: 0x8
struct {} PhOldLoader::__RTTI; // size: 0x8, address: 0x8013A8D0
static // total size: 0x8
struct {} PhGenericObj::__RTTI; // size: 0x8, address: 0x8013A8D8
static // total size: 0x8
struct {} PhBasicObj::__RTTI; // size: 0x8, address: 0x8013A8E8
static // total size: 0x8
struct {} PhObj::__RTTI; // size: 0x8, address: 0x8013A8F0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} PhParticle::__RTTI; // size: 0x8, address: 0x8013A8F8
static // total size: 0x8
struct {} PhRgdBody::__RTTI; // size: 0x8, address: 0x8013A900
static // total size: 0x8
struct {} PhSTreeObj::__RTTI; // size: 0x8, address: 0x8013A908
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



