/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\truetype\ttdriver.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009F4F8 -> 0x8009FA3C
*/
// Range: 0x8009F4F8 -> 0x8009F784
static int Init_Face(struct FT_StreamRec_ * stream /* r3 */, int typeface_index /* r31 */, struct TT_FaceRec_ * face /* r30 */) {
    // Local variables
    int error; // r3
    struct FT_FaceRec_ * root; // r1+0x8
    int flags; // r4
    struct TT_CharMapRec_ * charmap; // r31
    int n; // r9
    struct FT_MemoryRec_ * memory; // r3
    int platform; // r10
    int encoding; // r11

    // References
    // -> static struct TEncoding tt_encodings$1[6];
}

// Range: 0x8009F784 -> 0x8009F81C
static int Get_Kerning(struct TT_FaceRec_ * face /* r1+0x0 */, unsigned int left_glyph /* r1+0x4 */, unsigned int right_glyph /* r1+0x8 */, struct FT_Vector_ * kerning /* r1+0xC */) {
    // Local variables
    struct TT_Kern_0_Pair_ * pair; // r5
    unsigned int search_tag; // r8
    int left; // r9
    int right; // r10
    int middle; // r1+0x0
    unsigned int cur_pair; // r1+0x0
}

// Range: 0x8009F81C -> 0x8009F8B8
static int Set_Char_Sizes(struct TT_SizeRec_ * size /* r27 */, long char_width /* r1+0xC */, long char_height /* r1+0x10 */, unsigned int horz_resolution /* r1+0x14 */, unsigned int vert_resolution /* r1+0x18 */) {
    // Local variables
    struct FT_Size_Metrics_ * metrics; // r30
    struct TT_FaceRec_ * face; // r1+0x8
    int dim_x; // r29
    int dim_y; // r28
}

// Range: 0x8009F8B8 -> 0x8009F8E0
static int Set_Pixel_Sizes(struct TT_SizeRec_ * size /* r3 */, unsigned int pixel_width /* r1+0xC */, unsigned int pixel_height /* r1+0x10 */) {}

// Range: 0x8009F8E0 -> 0x8009F9A4
static int Load_Glyph(struct FT_GlyphSlotRec_ * slot /* r28 */, struct TT_SizeRec_ * size /* r29 */, unsigned short glyph_index /* r30 */, unsigned int load_flags /* r31 */) {
    // Local variables
    int error; // r3
}

// Range: 0x8009F9A4 -> 0x8009FA3C
static unsigned int Get_Char_Index(struct TT_CharMapRec_ * charmap /* r1+0x8 */, int charcode /* r30 */) {
    // Local variables
    int error; // r3
    struct TT_FaceRec_ * face; // r4
    struct TT_CMapTable_ * cmap; // r31
}




