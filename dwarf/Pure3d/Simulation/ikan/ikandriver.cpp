/*
    Compile unit: D:\Pure3d\Simulation\ikan\ikandriver.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F64BC -> 0x800F7028
*/
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class Vector DEFAULTPROJ; // size: 0xC, address: 0x80137618
class Vector DEFAULTROT; // size: 0xC, address: 0x80137624
class Vector verticalAxis; // size: 0xC, address: 0x80137630
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
// total size: 0x1D0
class SRS {
    // Members
    signed short project_to_workspace; // offset 0x0, size 0x2
    float u[3]; // offset 0x4, size 0xC
    float v[3]; // offset 0x10, size 0xC
    float n[3]; // offset 0x1C, size 0xC
    float c[3]; // offset 0x28, size 0xC
    float radius; // offset 0x34, size 0x4
    float proj_axis[3]; // offset 0x38, size 0xC
    float pos_axis[3]; // offset 0x44, size 0xC
    float ee[3]; // offset 0x50, size 0xC
    float ee_r1[3]; // offset 0x5C, size 0xC
    float p_r1[3]; // offset 0x68, size 0xC
    float upper_len; // offset 0x74, size 0x4
    float lower_len; // offset 0x78, size 0x4
    float reciprocal_upper_len; // offset 0x7C, size 0x4
    float r_angle; // offset 0x80, size 0x4
    float G[4][4]; // offset 0x84, size 0x40
    float T[4][4]; // offset 0xC4, size 0x40
    float S[4][4]; // offset 0x104, size 0x40
    float SRT[4][4]; // offset 0x144, size 0x40
    float Ry[4][4]; // offset 0x184, size 0x40
    float axis[3]; // offset 0x1C4, size 0xC
};
enum IKLimbType {
    IKLimbStd = 0,
    IKLimbPreTorsion = 1,
    IKLimbPostTorsion = 2,
    IKLimbDualTorsion = 3,
};
// total size: 0x114
class IKanDriver {
    // Functions
    unsigned char SolveForGoal(const class Vector & goal);

    unsigned char SolveForGoal(const class Matrix & goal);

    void MakejMidRotation(class Matrix & m, float rangle);

    void CompleteJointTransform();

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
// Range: 0x800F64BC -> 0x800F6860
// this: r27
unsigned char IKanDriver::SolveForGoal(const class Vector & goal /* r1+0xC */) {
    // Local variables
    class Joint * jmid; // r28
    class Vector localGoal; // r1+0x1A0
    class Matrix invJ1; // r1+0x160
    float rangle; // r1+0x15C
    int success; // r1+0x8
    class Matrix R1; // r1+0x11C
    class Vector midPos; // r1+0x110
    class Matrix m; // r1+0xD0
}

// Range: 0x800F6860 -> 0x800F6E7C
// this: r27
unsigned char IKanDriver::SolveForGoal(const class Matrix & goal /* r1+0xC */) {
    // Local variables
    class Matrix localGoal; // r1+0x2AC
    class Joint * jmid; // r28
    class Matrix invJ1; // r1+0x264
    class Matrix m; // r1+0x224
    float rangle; // r1+0x220
    int success; // r1+0x8
    class Matrix R1; // r1+0x1E0
    class Matrix R2; // r1+0x1A0
    class Vector midPos; // r1+0x194
    class Matrix m; // r1+0x154
}

// Range: 0x800F6E7C -> 0x800F6EB8
// this: r5
void IKanDriver::MakejMidRotation(class Matrix & m /* r4 */, float rangle /* f2 */) {}

// Range: 0x800F6EB8 -> 0x800F6FF4
// this: r30
void IKanDriver::CompleteJointTransform() {
    // Local variables
    int i; // r31
    class Joint * j; // r4
}

// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    int * fArray; // offset 0x8, size 0x4
};



