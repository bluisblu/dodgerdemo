/*
    Compile unit: D:\Pure3d\Simulation\ikan\srs.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F7874 -> 0x800F8A04
*/
// total size: 0x1D0
class SRS {
    // Functions
    int SetGoalPos(const float * eee, const float (* E)[4], float & rangle);

    int SetGoal(const float (* GG)[4], float & rangle);

    void SolveR1(float angle, float (* R1)[4]);

    void SolveR1R2(float angle, float (* R1)[4], float (* R2)[4]);

    void SolveR1(const float * p, float (* R1)[4]);

    void SolveR1R2(const float * pos, float (* R1)[4], float (* R2)[4]);

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
float small_neg_angle_; // size: 0x4, address: 0x8013AE78
// Range: 0x800F7874 -> 0x800F7AC0
static int solve_R_angle(const float * g /* r1+0x8 */, const float * s /* r1+0xC */, const float * t /* r1+0x10 */, const float (* T)[4] /* r1+0x14 */, float & r_angle /* r31 */) {
    // Local variables
    float rhs; // f8
    float alpha[3]; // r1+0x30
    int j; // r1+0x8
    float a; // f1
    float b; // f2
    float c; // r1+0x8
    int n; // r3
    float temp[2]; // r1+0x24

    // References
    // -> float small_neg_angle_;
}

// Range: 0x800F7AC0 -> 0x800F7E94
// this: r28
int SRS::SetGoalPos(const float * eee /* r29 */, const float (* E)[4] /* r30 */, float & rangle /* r31 */) {
    // Local variables
    float Temp[4][4]; // r1+0xB0
    float RY[4][4]; // r1+0x70
    float s[3]; // r1+0x64
}

// Range: 0x800F7E94 -> 0x800F8260
// this: r30
int SRS::SetGoal(const float (* GG)[4] /* r4 */, float & rangle /* r31 */) {
    // Local variables
    float RY[4][4]; // r1+0x6C
    float s[3]; // r1+0x60
}

// Range: 0x800F8260 -> 0x800F8410
void make_frame(const float * p /* r1+0x8 */, float p_scale /* r1+0xC */, const float * q /* r1+0x10 */, float (* R)[4] /* r30 */, int invert /* r31 */) {}

// Range: 0x800F8410 -> 0x800F854C
// this: r30
void SRS::SolveR1(float angle /* f31 */, float (* R1)[4] /* r31 */) {
    // Local variables
    float p[3]; // r1+0xA4
}

// Range: 0x800F854C -> 0x800F8680
// this: r29
void SRS::SolveR1R2(float angle /* f31 */, float (* R1)[4] /* r30 */, float (* R2)[4] /* r31 */) {
    // Local variables
    float Temp[4][4]; // r1+0xB0
}

// Range: 0x800F8680 -> 0x800F87CC
// this: r30
void SRS::SolveR1(const float * p /* r1+0xC */, float (* R1)[4] /* r31 */) {}

// Range: 0x800F87CC -> 0x800F88F0
// this: r29
void SRS::SolveR1R2(const float * pos /* r1+0xC */, float (* R1)[4] /* r30 */, float (* R2)[4] /* r31 */) {}

// Range: 0x800F88F0 -> 0x800F8A04
void evalcircle(const float * c /* r28 */, const float * u /* r29 */, const float * v /* r30 */, float radius /* f29 */, float angle /* f31 */, float * p /* r31 */) {
    // Local variables
    float sa; // r1+0x8
    float ca; // r1+0x8
}




