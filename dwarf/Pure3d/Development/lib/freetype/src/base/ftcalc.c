/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftcalc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80096168 -> 0x80096698
*/
// Range: 0x80096168 -> 0x80096198
int FT_Sqrt32(int x /* r3 */) {
    // Local variables
    unsigned int val; // r3
    unsigned int root; // r4
    unsigned int newroot; // r1+0x0
    unsigned int mask; // r5
}

// Range: 0x80096198 -> 0x8009628C
int FT_MulDiv(int a /* r3 */, int b /* r4 */, int c /* r31 */) {
    // Local variables
    long s; // r30
    struct FT_Int64_ temp; // r1+0x1C
    struct FT_Int64_ temp2; // r1+0x14
}

// Range: 0x8009628C -> 0x80096328
int FT_MulFix(int a /* r3 */, int b /* r4 */) {
    // Local variables
    int s; // r7
    int al; // r8
}

// Range: 0x80096328 -> 0x800963B4
int FT_DivFix(int a /* r3 */, int b /* r4 */) {
    // Local variables
    int s; // r6
    unsigned int q; // r3
    unsigned int c; // r5
}

// Range: 0x800963B4 -> 0x800963E8
void FT_Add64(struct FT_Int64_ * x /* r1+0x0 */, struct FT_Int64_ * y /* r1+0x4 */, struct FT_Int64_ * z /* r1+0x8 */) {
    // Local variables
    unsigned int lo; // r7
    unsigned int hi; // r1+0x0
}

// Range: 0x800963E8 -> 0x80096498
void FT_MulTo64(int x /* r3 */, int y /* r4 */, struct FT_Int64_ * z /* r1+0x8 */) {
    // Local variables
    int s; // r7
    unsigned int lo1; // r3
    unsigned int hi1; // r8
    unsigned int lo2; // r9
    unsigned int hi2; // r4
    unsigned int lo; // r6
    unsigned int hi; // r8
    unsigned int i1; // r10
    unsigned int i2; // r11
}

// Range: 0x80096498 -> 0x80096698
int FT_Div64by32(struct FT_Int64_ * x /* r1+0x0 */, int y /* r4 */) {
    // Local variables
    int s; // r5
    unsigned int q; // r1+0x0
    unsigned int r; // r6
    unsigned int i; // r7
    unsigned int lo; // r8
}




