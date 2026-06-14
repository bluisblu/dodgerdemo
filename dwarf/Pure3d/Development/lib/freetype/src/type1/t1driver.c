/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1driver.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A8800 -> 0x800A8B80
*/
// Range: 0x800A8800 -> 0x800A8848
static void (* Get_Interface(const char * interface /* r4 */))() {}

// Range: 0x800A8848 -> 0x800A8888
static int Get_Kerning(struct T1_FaceRec_ * face /* r1+0x8 */, unsigned int left_glyph /* r4 */, unsigned int right_glyph /* r5 */, struct FT_Vector_ * kerning /* r6 */) {
    // Local variables
    struct T1_AFM_ * afm; // r3
}

// Range: 0x800A8888 -> 0x800A88B0
static int Set_Char_Sizes(struct T1_SizeRec_ * size /* r3 */, long char_width /* r1+0xC */, unsigned int horz_resolution /* r1+0x14 */, unsigned int vert_resolution /* r1+0x18 */) {}

// Range: 0x800A88B0 -> 0x800A88D8
static int Set_Pixel_Sizes(struct T1_SizeRec_ * size /* r3 */, int pixel_width /* r1+0xC */, int pixel_height /* r1+0x10 */) {}

// Range: 0x800A88D8 -> 0x800A8A30
static unsigned int Get_Char_Index(struct FT_CharMapRec_ * charmap /* r1+0x8 */, int charcode /* r4 */) {
    // Local variables
    struct T1_FaceRec_ * face; // r1+0x8
    unsigned int result; // r30
    struct PSNames_Interface_ * psnames; // r1+0x8
    struct T1_Encoding_ * encoding; // r3
    unsigned int code; // r3
    int n; // r28
    const char * glyph_name; // r27
    const char * gname; // r3
}

// Range: 0x800A8A30 -> 0x800A8B80
static int Init_Face(struct FT_StreamRec_ * stream /* r3 */, int face_index /* r4 */, struct T1_FaceRec_ * face /* r30 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_FaceRec_ * root; // r1+0x8
    struct FT_CharMapRec_ * charmap; // r31
    struct PSNames_Interface_ * psnames; // r1+0x8
}




