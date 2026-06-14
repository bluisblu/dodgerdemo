/*
    Compile unit: D:\Pure3d\Simulation\simai\ikanlink.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEA58 -> 0x800BEBE8
*/
// total size: 0x0
class tPose {};
// total size: 0x0
class SRS {};
// total size: 0x0
class TArray {};
// total size: 0x0
class tSkeleton {};
enum IKLimbType {
    IKLimbStd = 0,
    IKLimbPreTorsion = 1,
    IKLimbPostTorsion = 2,
    IKLimbDualTorsion = 3,
};
// total size: 0x114
class IKanDriver {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class tPose * pose; // offset 0x4, size 0x4
    class SRS * iksolver; // offset 0x8, size 0x4
    class Matrix T; // offset 0xC, size 0x40
    class Matrix S; // offset 0x4C, size 0x40
    int j1Index; // offset 0x8C, size 0x4
    int jmidIndex; // offset 0x90, size 0x4
    int j2Index; // offset 0x94, size 0x4
    float swivelangle; // offset 0x98, size 0x4
    float ax; // offset 0x9C, size 0x4
    float say; // offset 0xA0, size 0x4
    float az; // offset 0xA4, size 0x4
    class Matrix E; // offset 0xA8, size 0x40
    class TArray * jointDep; // offset 0xE8, size 0x4
    class Vector projAxis; // offset 0xEC, size 0xC
    class Vector rotAxis; // offset 0xF8, size 0xC
    unsigned char swivelFromPose; // offset 0x104, size 0x1
    unsigned char fixR1Rot; // offset 0x105, size 0x1
    float fixR1Rotx; // offset 0x108, size 0x4
    float fixR1Roty; // offset 0x10C, size 0x4
    float fixR1Rotz; // offset 0x110, size 0x4
};
// total size: 0x20
class IKanLink {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class IKanDriver * ikanDriver; // offset 0x4, size 0x4
    class SimTarget * target; // offset 0x8, size 0x4
    unsigned char solveForPos; // offset 0xC, size 0x1
    char name[16]; // offset 0xD, size 0x10
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
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x0
class PhBasicObj {};
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
class SimTarget : public tRefCounted {
    // Members
protected:
    class Vector offset; // offset 0x8, size 0xC
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
class TList : public VoidPList {};
// total size: 0x18
class IKanLinkMgr {
    // Functions
    void DebugDisplay();

    void Update();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TList lst; // offset 0x4, size 0x14
};
// Range: 0x800BEA58 -> 0x800BEB28
// this: r28
void IKanLinkMgr::DebugDisplay() {
    // Local variables
    int i; // r29
}

// Range: 0x800BEB28 -> 0x800BEBE8
// this: r28
void IKanLinkMgr::Update() {
    // Local variables
    int i; // r29
}




