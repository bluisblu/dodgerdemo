/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\sfnt\ttpost.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009EE58 -> 0x8009F4F8
*/
// Range: 0x8009EE58 -> 0x8009F070
static int Load_Format_20(struct TT_FaceRec_ * face /* r28 */, struct FT_StreamRec_ * stream /* r29 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    int error; // r1+0x18
    int num_glyphs; // r30
    int num_names; // r26
    unsigned short * glyph_indices; // r1+0x14
    signed char * * name_strings; // r1+0x10
    int n; // r26
    int n; // r1+0x8
    int index; // r1+0x8
    int n; // r25
    unsigned int len; // r24
    struct TT_Post_20_ * table; // r4
    int n; // r24
}

// Range: 0x8009F070 -> 0x8009F19C
static int Load_Format_25(struct TT_FaceRec_ * face /* r28 */, struct FT_StreamRec_ * stream /* r29 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    int error; // r1+0x14
    int num_glyphs; // r30
    signed char * offset_table; // r1+0x10
    int n; // r4
    int index; // r1+0x8
    struct TT_Post_25_ * table; // r4
}

// Range: 0x8009F19C -> 0x8009F27C
static void TT_Free_Post_Names(struct TT_FaceRec_ * face /* r1+0x8 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
    struct TT_Post_Names_ * names; // r29
    struct TT_Post_20_ * table; // r28
    unsigned int n; // r27
    struct TT_Post_25_ * table; // r27
}

// Range: 0x8009F27C -> 0x8009F4F8
int TT_Get_PS_Name(struct TT_FaceRec_ * face /* r27 */, unsigned int index /* r28 */, char * * PSname /* r29 */) {
    // Local variables
    struct TT_Post_Names_ * names; // r24
    struct PSNames_Interface_ * psnames; // r1+0x8
    struct TT_Post_20_ * table; // r30
    unsigned short name_index; // r1+0x8
    struct TT_Post_25_ * table; // r26
}




