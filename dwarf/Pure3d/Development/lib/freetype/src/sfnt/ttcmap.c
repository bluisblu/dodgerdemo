/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\sfnt\ttcmap.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009D6F8 -> 0x8009DEE8
*/
// Range: 0x8009D6F8 -> 0x8009DC44
static int TT_CharMap_Load(struct TT_FaceRec_ * face /* r29 */, struct TT_CMapTable_ * cmap /* r30 */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r3
    struct FT_MemoryRec_ * memory; // r27
    unsigned short num_SH; // r22
    unsigned short num_Seg; // r28
    unsigned short i; // r23
    unsigned short u; // r5
    unsigned short l; // r26
    struct TT_CMap0_ * cmap0; // r22
    struct TT_CMap2_ * cmap2; // r25
    struct TT_CMap4_ * cmap4; // r25
    struct TT_CMap6_ * cmap6; // r22
    struct TT_CMap2SubHeader_ * cmap2sub; // r22
    struct TT_CMap4Segment_ * segments; // r22
}

// Range: 0x8009DC44 -> 0x8009DD28
static int TT_CharMap_Free(struct TT_FaceRec_ * face /* r1+0x8 */, struct TT_CMapTable_ * cmap /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
}

// Range: 0x8009DD28 -> 0x8009DD48
static unsigned int code_to_index0(struct TT_CMapTable_ * cmap /* r1+0x0 */, unsigned int charCode /* r1+0x4 */) {
    // Local variables
    struct TT_CMap0_ * cmap0; // r3
}

// Range: 0x8009DD48 -> 0x8009DDF4
static unsigned int code_to_index2(struct TT_CMapTable_ * cmap /* r1+0x0 */, unsigned int charCode /* r1+0x4 */) {
    // Local variables
    unsigned int result; // r3
    unsigned int index1; // r1+0x0
    unsigned int offset; // r1+0x0
    unsigned int char_lo; // r5
    unsigned int char_hi; // r1+0x0
    struct TT_CMap2SubHeader_ * sh2; // r6
    struct TT_CMap2_ * cmap2; // r7
}

// Range: 0x8009DDF4 -> 0x8009DEBC
static unsigned int code_to_index4(struct TT_CMapTable_ * cmap /* r1+0x0 */, unsigned int charCode /* r1+0x4 */) {
    // Local variables
    unsigned int result; // r3
    unsigned int index1; // r1+0x0
    unsigned int segCount; // r7
    struct TT_CMap4_ * cmap4; // r8
    struct TT_CMap4Segment_ * seg4; // r9
    struct TT_CMap4Segment_ * limit; // r7
}

// Range: 0x8009DEBC -> 0x8009DEE8
static unsigned int code_to_index6(struct TT_CMapTable_ * cmap /* r1+0x0 */, unsigned int charCode /* r4 */) {
    // Local variables
    struct TT_CMap6_ * cmap6; // r6
    unsigned int result; // r3
}




