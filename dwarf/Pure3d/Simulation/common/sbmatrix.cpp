/*
    Compile unit: D:\Pure3d\Simulation\common\sbmatrix.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CD8D4 -> 0x800CEA24
*/
// total size: 0x28
class pm {
    // Functions
    pm();

    // Members
public:
    float k[3][3]; // offset 0x0, size 0x24
    int column; // offset 0x24, size 0x4
};
// Range: 0x800CD8D4 -> 0x800CD90C
// this: r31
pm::pm() {}

// Range: 0x800CD90C -> 0x800CD9A0
class pm * GetPMFromArray(class TArray * array /* r3 */, int col /* r30 */) {
    // Local variables
    class pm * block; // r31
    int i; // r6
}

// total size: 0x30
class SparseBlockMatrix {
    // Functions
    SparseBlockMatrix(int n);

    ~SparseBlockMatrix();

    void ClearMatrix();

    void SetBlockDiagonal(float * m);

    void modified_pcg(const float * b, class TArray * Sfilter, const float * z, float * dv);

    // Members
protected:
    int nRows; // offset 0x0, size 0x4
    int vecSize; // offset 0x4, size 0x4
    float eps; // offset 0x8, size 0x4
    float eps2; // offset 0xC, size 0x4
    int maxiter; // offset 0x10, size 0x4
    class TArray * lrows; // offset 0x14, size 0x4
    float * vec_r; // offset 0x18, size 0x4
    float * vec_c; // offset 0x1C, size 0x4
    float * vec_t; // offset 0x20, size 0x4
    float * vec_q; // offset 0x24, size 0x4
    float * vec_s; // offset 0x28, size 0x4
    float * vec_b; // offset 0x2C, size 0x4
};
// Range: 0x800CD9A0 -> 0x800CDB10
// this: r31
SparseBlockMatrix::SparseBlockMatrix(int n /* r1+0xC */) {}

// total size: 0xC
class TArray {
    // Members
    int fSize; // offset 0x0, size 0x4
    int fArraySize; // offset 0x4, size 0x4
    class pm * fArray; // offset 0x8, size 0x4
};
// Range: 0x800CDB80 -> 0x800CDC0C
// this: r30
SparseBlockMatrix::~SparseBlockMatrix() {}

// Range: 0x800CDC0C -> 0x800CDC3C
// this: r1+0x0
void SparseBlockMatrix::ClearMatrix() {
    // Local variables
    int i; // r7
}

// Range: 0x800CDC3C -> 0x800CDCE8
// this: r28
void SparseBlockMatrix::SetBlockDiagonal(float * m /* r4 */) {
    // Local variables
    int i; // r29
}

int modified_pcg_iter; // size: 0x4, address: 0x8013B3B8
// Range: 0x800CDCE8 -> 0x800CEA24
// this: r29
void SparseBlockMatrix::modified_pcg(const float * b /* r23 */, class TArray * Sfilter /* r30 */, const float * z /* r6 */, float * dv /* r31 */) {
    // Local variables
    int i; // r25
    float delta_0; // f29
    float delta_new; // f30
    float delta_old; // f28
    float alpha; // f2
    int iter; // r23
    float best_delta; // f29

    // References
    // -> int modified_pcg_iter;
}




