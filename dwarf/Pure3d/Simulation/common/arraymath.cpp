/*
    Compile unit: D:\Pure3d\Simulation\common\arraymath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CAF34 -> 0x800CB84C
*/
// Range: 0x800CAF34 -> 0x800CAFC8
float NormalizeVector(float * f /* r31 */) {}

// Range: 0x800CAFC8 -> 0x800CB014
void CrossVector(const float * v1 /* r1+0x0 */, const float * v2 /* r1+0x4 */, float * r /* r1+0x8 */) {}

// Range: 0x800CB014 -> 0x800CB0A8
void MultVectorVectorT(const float * v /* r1+0x0 */, const float * vt /* r1+0x4 */, float (* m)[3] /* r1+0x8 */) {}

// Range: 0x800CB0A8 -> 0x800CB1A8
void ComputeTriNormal(const float * v1 /* r1+0x8 */, const float * v2 /* r1+0xC */, const float * v3 /* r1+0x10 */, float * n /* r31 */) {}

// Range: 0x800CB1A8 -> 0x800CB23C
void AddMatrix(const float (* m1)[3] /* r3 */, const float (* m2)[3] /* r4 */, float (* mt)[3] /* r5 */) {
    // Local variables
    int ind1; // r1+0x0
}

// Range: 0x800CB23C -> 0x800CB31C
void AddLinearMatrix(const float (* m1)[3] /* r3 */, float s1 /* r1+0x4 */, const float (* m2)[3] /* r4 */, float s2 /* r1+0xC */, float (* mt)[3] /* r5 */) {
    // Local variables
    int ind1; // r1+0x0
}

// Range: 0x800CB31C -> 0x800CB38C
void ScaleMatrix(const float (* m1)[3] /* r3 */, float s /* r1+0x4 */, float (* mt)[3] /* r4 */) {
    // Local variables
    int ind1; // r1+0x0
}

// Range: 0x800CB38C -> 0x800CB420
void TransformVector(const float (* k)[3] /* r1+0x0 */, const float * a /* r1+0x4 */, float * res /* r1+0x8 */) {}

// Range: 0x800CB420 -> 0x800CB4CC
void TransformVectorAdd(const float (* k)[3] /* r1+0x0 */, const float * a /* r1+0x4 */, float * res /* r1+0x8 */) {}

// Range: 0x800CB4CC -> 0x800CB4F8
void ZeroMatrix(float (* k)[3] /* r1+0x0 */) {}

// Range: 0x800CB4F8 -> 0x800CB56C
void RemoveComponent(const float * dir /* r1+0x0 */, float * v /* r1+0x4 */) {}

// Range: 0x800CB56C -> 0x800CB69C
float TriangleArea(const float * p1 /* r1+0x8 */, const float * p2 /* r1+0xC */, const float * p3 /* r1+0x10 */) {}

// Range: 0x800CB69C -> 0x800CB6C4
void MakeMultipleOf4(int & vecSize /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x800CB6C4 -> 0x800CB84C
float DotVectorN(const float * a /* r3 */, const float * b /* r4 */, int size /* r1+0x8 */) {
    // Local variables
    float r; // f1
    int i; // r1+0x0
}




