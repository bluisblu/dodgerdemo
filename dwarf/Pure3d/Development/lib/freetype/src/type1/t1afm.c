/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1afm.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800AF324 -> 0x800AF7AC
*/
// Range: 0x800AF324 -> 0x800AF47C
static unsigned int afm_atoindex(unsigned char * * start /* r28 */, unsigned char * limit /* r1+0xC */, struct T1_Font_ * type1 /* r29 */) {
    // Local variables
    unsigned char * p; // r31
    int len; // r26
    unsigned int result; // r30
    char temp[64]; // r1+0x14
    int n; // r26
    char * gname; // r3
}

// Range: 0x800AF47C -> 0x800AF4F8
static int afm_atoi(unsigned char * * start /* r1+0x0 */, unsigned char * limit /* r1+0x4 */) {
    // Local variables
    unsigned char * p; // r6
    int sum; // r7
    int sign; // r8
}

// Range: 0x800AF4F8 -> 0x800AF53C
static int compare_kern_pairs(void * a /* r1+0x0 */, void * b /* r1+0x4 */) {
    // Local variables
    struct T1_Kern_Pair_ * pair1; // r1+0x0
    struct T1_Kern_Pair_ * pair2; // r1+0x0
    unsigned int index1; // r1+0x0
    unsigned int index2; // r1+0x0
}

// Range: 0x800AF53C -> 0x800AF718
static int T1_Read_AFM(struct FT_FaceRec_ * t1_face /* r23 */, struct FT_StreamRec_ * stream /* r24 */) {
    // Local variables
    int error; // r30
    struct FT_MemoryRec_ * memory; // r29
    unsigned char * start; // r22
    unsigned char * limit; // r28
    unsigned char * p; // r4
    int count; // r27
    struct T1_Kern_Pair_ * pair; // r26
    struct T1_Font_ * type1; // r25
    struct T1_AFM_ * afm; // r1+0x14
    unsigned char * q; // r1+0x10
}

// Range: 0x800AF718 -> 0x800AF7AC
static void T1_Get_Kerning(struct T1_AFM_ * afm /* r1+0x0 */, unsigned int glyph1 /* r1+0x4 */, unsigned int glyph2 /* r1+0x8 */, struct FT_Vector_ * kerning /* r1+0xC */) {
    // Local variables
    struct T1_Kern_Pair_ * min; // r4
    struct T1_Kern_Pair_ * mid; // r5
    struct T1_Kern_Pair_ * max; // r8
    unsigned int index; // r9
    unsigned int midi; // r1+0x0
}




