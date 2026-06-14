/*
    Compile unit: D:\Pure3d\Simulation\ikan\myvec.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F7028 -> 0x800F77A0
*/
float idmat[4][4]; // size: 0x40, address: 0x80116A88
// Range: 0x800F7028 -> 0x800F719C
void hmatmult(float (* A)[4] /* r27 */, float (* B)[4] /* r4 */, float (* C)[4] /* r28 */) {
    // Local variables
    float * a; // r6
    float * b; // r31
    float * c; // r3
    float * bp; // r4
    float * cp; // r5
    float * bmax; // r30
    float * cpmax; // r1+0x8
    float * b32; // r29
    float * c00; // r7
    float * c03; // r8
    float Bt[4][4]; // r1+0x54
    float Ct[4][4]; // r1+0x14
}

// Range: 0x800F719C -> 0x800F7240
void project_plane(float * p /* r30 */, float * u /* r31 */, float * n /* r5 */) {}

// Range: 0x800F7240 -> 0x800F73AC
float angle_between_vectors(float * u /* r29 */, float * v /* r30 */, float * n /* r31 */) {}

// Range: 0x800F73AC -> 0x800F759C
void rmatmult(float (* A)[4] /* r29 */, float (* B)[4] /* r4 */, float (* C)[4] /* r30 */) {
    // Local variables
    float Temp1[4][4]; // r1+0x54
    float Temp2[4][4]; // r1+0x14
    float * a; // r3
    float * b; // r31
    float * c; // r3
    float c11; // f1
    float c12; // f2
    float c13; // f3
    float c21; // f4
    float c22; // f5
    float c23; // f6
    float c31; // f7
    float c32; // f8
    float c33; // f9
    float v1; // f27
    float v2; // f28
    float v3; // f29
}

// Range: 0x800F759C -> 0x800F75F0
void invertrmatrix(float (* N)[4] /* r3 */, float (* M)[4] /* r4 */) {
    // Local variables
    float * n; // r3
    float * nmax; // r1+0x0
    float * C; // r4
}

// Range: 0x800F75F0 -> 0x800F76D8
void rotation_principal_axis_to_matrix(char axis /* r30 */, float angle /* f30 */, float (* m)[4] /* r31 */) {
    // Local variables
    float cos_a; // r1+0x8
    float sin_a; // r1+0x8

    // References
    // -> float idmat[4][4];
}

// Range: 0x800F76D8 -> 0x800F7768
float norm(float * v /* r1+0x8 */) {}

// Range: 0x800F7768 -> 0x800F7784
void get_translation(const float (* M)[4] /* r1+0x0 */, float * p /* r1+0x4 */) {}

// Range: 0x800F7784 -> 0x800F77A0
void set_translation(float (* M)[4] /* r1+0x0 */, const float * p /* r1+0x4 */) {}




