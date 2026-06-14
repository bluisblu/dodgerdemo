/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1gload.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800AA7E0 -> 0x800AC468
*/
// Range: 0x800AA7E0 -> 0x800AA8E4
void T1_Init_Builder(struct T1_Builder_ * builder /* r1+0x0 */, struct T1_FaceRec_ * face /* r1+0x4 */, struct T1_SizeRec_ * size /* r1+0x8 */, struct T1_GlyphSlotRec_ * glyph /* r1+0xC */, const struct T1_Builder_Funcs_ * funcs /* r1+0x10 */) {}

// Range: 0x800AA8E4 -> 0x800AABBC
static int t1operator_seac(struct T1_Decoder_ * decoder /* r29 */, int asb /* r30 */, int adx /* r31 */, int ady /* r25 */, int bchar /* r1+0x18 */, int achar /* r23 */) {
    // Local variables
    int error; // r3
    struct T1_FaceRec_ * face; // r22
    int bchar_index; // r1+0x8
    int achar_index; // r1+0x8
    int n_base_points; // r24
    struct FT_Outline_ * cur; // r28
    struct FT_Outline_ * base; // r27
    struct FT_Vector_ left_bearing; // r1+0x28
    struct FT_Vector_ advance; // r1+0x20
    struct T1_Font_ * type1; // r26
    int n; // r4
}

// Range: 0x800AABBC -> 0x800AB5D4
int T1_Parse_CharStrings(struct T1_Decoder_ * decoder /* r29 */, unsigned char * charstring_base /* r1+0xC */, int charstring_len /* r1+0x10 */, int num_subrs /* r16 */, unsigned char * * subrs_base /* r15 */, int * subrs_len /* r14 */) {
    // Local variables
    int error; // r1+0x8
    struct T1_Decoder_Zone_ * zone; // r28
    unsigned char * ip; // r30
    unsigned char * limit; // r25
    struct T1_Builder_ * builder; // r29
    struct T1_Builder_Funcs_ * builds; // r26
    struct T1_Hinter_Func_ * hints; // r24
    int * top; // r31
    enum T1_Operator_ op; // r5
    int value; // r4
    int index; // r1+0x8
    struct FT_Vector_ * flex; // r4
    int num_args; // r1+0x8
    int index; // r1+0x8

    // References
    // -> static int args_count$796[26];
}

// Range: 0x800AB5D4 -> 0x800AB6C4
static int T1_Add_Points(struct T1_Builder_ * builder /* r31 */, int num_points /* r1+0xC */) {
    // Local variables
    int new_points; // r1+0x8
    struct FT_MemoryRec_ * memory; // r30
    int error; // r3
    int increment; // r29
    int current; // r28
}

// Range: 0x800AB6C4 -> 0x800AB6DC
static int maxadv_sbw(struct T1_Decoder_ * decoder /* r1+0x0 */, int sbx /* r1+0x4 */, int sby /* r1+0x8 */, int wx /* r1+0xC */, int wy /* r1+0x10 */) {}

// Range: 0x800AB6DC -> 0x800AB6E4
static int maxadv_error() {}

// Range: 0x800AB6E4 -> 0x800AB7E8
static int T1_Compute_Max_Advance(struct T1_FaceRec_ * face /* r30 */, int * max_advance /* r28 */) {
    // Local variables
    int error; // r1+0x8
    struct T1_Decoder_ decoder; // r1+0x10
    int glyph_index; // r30
    struct T1_Font_ * type1; // r29

    // References
    // -> static struct T1_Builder_Funcs_ maxadv_builder_interface;
    // -> static struct T1_Hinter_Func_ maxadv_hinter_interface;
}

// Range: 0x800AB7E8 -> 0x800AB984
static int close_open_path(struct T1_Builder_ * builder /* r29 */) {
    // Local variables
    struct FT_Outline_ * cur; // r31
    int num_points; // r30
    int first_point; // r3
    struct FT_Vector_ * source_point; // r5
    char * source_tags; // r6
    struct FT_Vector_ * point; // r4
    char * tags; // r7
}

// Range: 0x800AB984 -> 0x800AB9F8
static int gload_closepath(struct T1_Builder_ * builder /* r31 */) {
    // Local variables
    struct FT_Outline_ * cur; // r3
}

// Range: 0x800AB9F8 -> 0x800ABAB8
static int gload_endchar(struct T1_Builder_ * builder /* r30 */) {
    // Local variables
    struct FT_Outline_ * cur; // r31
    int error; // r3
}

// Range: 0x800ABAB8 -> 0x800ABAE8
static int gload_sbw(struct T1_Builder_ * builder /* r1+0x0 */, int sbx /* r1+0x4 */, int sby /* r1+0x8 */, int wx /* r1+0xC */, int wy /* r1+0x10 */) {}

// Range: 0x800ABAE8 -> 0x800ABC50
static int gload_rlineto(struct T1_Builder_ * builder /* r28 */, int dx /* r29 */, int dy /* r30 */) {
    // Local variables
    struct FT_Outline_ * cur; // r31
    struct FT_Vector_ vec; // r1+0x14
}

// Range: 0x800ABC50 -> 0x800ABE1C
static int gload_rmoveto(struct T1_Builder_ * builder /* r28 */, int dx /* r29 */, int dy /* r30 */) {
    // Local variables
    int error; // r3
    struct FT_Outline_ * cur; // r31
    struct FT_Vector_ vec; // r1+0x14
}

// Range: 0x800ABE1C -> 0x800ABFF0
static int gload_rrcurveto(struct T1_Builder_ * builder /* r21 */, int dx1 /* r22 */, int dy1 /* r23 */, int dx2 /* r24 */, int dy2 /* r25 */, int dx3 /* r26 */, int dy3 /* r27 */) {
    // Local variables
    struct FT_Outline_ * cur; // r28
    struct FT_Vector_ vec; // r1+0x24
    struct FT_Vector_ * points; // r3
    char * tags; // r7
}

// Range: 0x800ABFF0 -> 0x800ABFF8
static int gload_ignore() {}

// Range: 0x800ABFF8 -> 0x800AC468
static int T1_Load_Glyph(struct T1_GlyphSlotRec_ * glyph /* r22 */, struct T1_SizeRec_ * size /* r23 */, int glyph_index /* r28 */, int load_flags /* r24 */) {
    // Local variables
    int error; // r28
    struct T1_Decoder_ decoder; // r1+0x28
    struct T1_FaceRec_ * face; // r27
    unsigned char hinting; // r26
    struct T1_Font_ * type1; // r25
    struct FT_BBox_ cbox; // r1+0x18
    struct FT_Glyph_Metrics_ * metrics; // r25
    int n; // r22
    struct FT_Outline_ * cur; // r1+0x8
    struct FT_Vector_ * vec; // r23
    int x_scale; // r24
    int y_scale; // r26

    // References
    // -> static struct T1_Builder_Funcs_ gload_builder_interface;
    // -> static struct T1_Hinter_Func_ gload_hinter_interface;
    // -> static struct T1_Hinter_Func_ t1_hinter_funcs;
    // -> static struct T1_Builder_Funcs_ gload_builder_interface_null;
}




