/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1hinter.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800AE1D4 -> 0x800AF324
*/
// Range: 0x800AE1D4 -> 0x800AE234
static void t1_sort_blues(int * blues /* r1+0x0 */, int count /* r1+0x4 */) {
    // Local variables
    int i; // r1+0x0
    int swap; // r1+0x0
    int * cur; // r6
}

// Range: 0x800AE234 -> 0x800AE618
static int t1_set_blue_zones(struct T1_SizeRec_ * size /* r31 */) {
    // Local variables
    struct T1_Font_ * priv; // r25
    int n; // r5
    int blues[24]; // r1+0x1C
    int num_bottom; // r24
    int num_top; // r26
    int num_blues; // r1+0x8
    struct T1_Size_Hints_ * hints; // r23
    struct T1_Snap_Zone_ * zone; // r22
    int pix; // r1+0x8
    int orus; // r21
    int min; // r20
    int max; // r3
    int scale; // r19
}

// Range: 0x800AE618 -> 0x800AE870
static int t1_set_snap_zones(struct T1_SizeRec_ * size /* r31 */) {
    // Local variables
    int n; // r29
    int direction; // r28
    int n_zones; // r27
    int num_zones; // r4
    struct T1_Snap_Zone_ * zone; // r26
    struct T1_Snap_Zone_ * base_zone; // r25
    signed short * orgs; // r24
    int standard_width; // r23
    int scale; // r22
    struct T1_Font_ * priv; // r21
    struct T1_Size_Hints_ * hints; // r1+0x8
    int prev; // r20
    int orus; // r18
    int pix; // r3
    int min; // r1+0x8
    int max; // r19
    struct T1_Snap_Zone_ * parent; // r8
    int std_pix; // r1+0x8
    int std_min; // r1+0x8
    int std_max; // r5
}

// Range: 0x800AE870 -> 0x800AE8A0
static int T1_New_Size_Hinter(struct T1_SizeRec_ * size /* r3 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
}

// Range: 0x800AE8A0 -> 0x800AE8CC
static void T1_Done_Size_Hinter(struct T1_SizeRec_ * size /* r3 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
}

// Range: 0x800AE8CC -> 0x800AE924
static int T1_Reset_Size_Hinter(struct T1_SizeRec_ * size /* r30 */) {}

// Range: 0x800AE924 -> 0x800AE954
static int T1_New_Glyph_Hinter(struct T1_GlyphSlotRec_ * glyph /* r3 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
}

// Range: 0x800AE954 -> 0x800AE980
static void T1_Done_Glyph_Hinter(struct T1_GlyphSlotRec_ * glyph /* r3 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
}

// Range: 0x800AE980 -> 0x800AE988
static int t1_hinter_ignore() {}

// Range: 0x800AE988 -> 0x800AEA9C
static int t1_hinter_stem(struct T1_Builder_ * builder /* r1+0x0 */, int pos /* r1+0x4 */, int width /* r1+0x8 */, unsigned char vertical /* r1+0xC */) {
    // Local variables
    struct T1_Stem_Hint_ * stems; // r6
    struct T1_Stem_Hint_ * cur_stem; // r5
    int min; // r8
    int max; // r9
    int n; // r1+0x0
    int num_stems; // r10
    unsigned char new_stem; // r4
    struct T1_Glyph_Hints_ * hinter; // r7
}

// Range: 0x800AEA9C -> 0x800AEB3C
static int t1_hinter_stem3(struct T1_Builder_ * builder /* r24 */, int pos0 /* r4 */, int width0 /* r5 */, int pos1 /* r25 */, int width1 /* r26 */, int pos2 /* r27 */, int width2 /* r28 */, unsigned char vertical /* r29 */) {}

// Range: 0x800AEB3C -> 0x800AEC58
static int t1_hinter_changehints(struct T1_Builder_ * builder /* r3 */) {
    // Local variables
    int dimension; // r5
    struct T1_Stem_Table_ * stem_table; // r6
    struct T1_Glyph_Hints_ * hinter; // r31
    struct T1_Stem_Hint_ * cur; // r7
    struct T1_Stem_Hint_ * limit; // r8
}

// Range: 0x800AEC58 -> 0x800AED24
static void t1_sort_hints(struct T1_Stem_Table_ * table /* r1+0x8 */) {
    // Local variables
    int num_stems; // r1+0x8
    int num_active; // r9
    int * sort; // r10
    struct T1_Stem_Hint_ * stems; // r11
    int n; // r5
    int p; // r12
    struct T1_Stem_Hint_ * cur; // r31
}

// Range: 0x800AED24 -> 0x800AEFBC
static void t1_hint_horizontal_stems(struct T1_Stem_Table_ * table /* r1+0x8 */, struct T1_Size_Hints_ * hints /* r23 */, int blueShift /* r5 */, int scale /* r24 */) {
    // Local variables
    struct T1_Stem_Hint_ * stem; // r30
    struct T1_Stem_Hint_ * limit; // r29
    int bottom_orus; // r28
    int top_orus; // r27
    int top_pix; // r26
    int bottom_pix; // r3
    int width_pix; // r25
    int bottom; // r1+0x8
    int top; // r4
    int align; // r5
    struct T1_Snap_Zone_ * zone; // r7
    struct T1_Snap_Zone_ * zone_limit; // r4
    struct T1_Snap_Zone_ * blue; // r9
    struct T1_Snap_Zone_ * blue_limit; // r10
    int delta; // r1+0x8
    struct T1_Snap_Zone_ * blue; // r7
    struct T1_Snap_Zone_ * blue_limit; // r8
    int delta; // r1+0x8
}

// Range: 0x800AEFBC -> 0x800AF0CC
static void t1_hint_vertical_stems(struct T1_Stem_Table_ * table /* r1+0x8 */, struct T1_Size_Hints_ * hints /* r30 */, int scale /* r31 */) {
    // Local variables
    struct T1_Stem_Hint_ * stem; // r29
    struct T1_Stem_Hint_ * limit; // r28
    int stem_left; // r27
    int stem_right; // r26
    int width_pix; // r25
    int left; // r3
    struct T1_Snap_Zone_ * zone; // r4
    struct T1_Snap_Zone_ * zone_limit; // r5
}

// Range: 0x800AF0CC -> 0x800AF1EC
static int t1_hint_point(struct T1_Stem_Table_ * table /* r3 */, int coord /* r8 */, int scale /* r5 */) {
    // Local variables
    int num_active; // r1+0x8
    int n; // r1+0x8
    struct T1_Stem_Hint_ * prev; // r7
    struct T1_Stem_Hint_ * cur; // r31
    struct T1_Edge_ * min; // r31
    struct T1_Edge_ * max; // r4
    int delta; // r1+0x8
}

// Range: 0x800AF1EC -> 0x800AF2AC
static void T1_Hint_Points(struct T1_Builder_ * builder /* r31 */) {
    // Local variables
    int first; // r1+0x8
    struct T1_SizeRec_ * size; // r6
    int scale_x; // r30
    int scale_y; // r29
    struct T1_Glyph_Hints_ * hints; // r5
    struct T1_Stem_Table_ * hori_stems; // r28
    struct T1_Stem_Table_ * vert_stems; // r27
    struct FT_Vector_ * cur; // r26
    struct FT_Vector_ * limit; // r25
}

// Range: 0x800AF2AC -> 0x800AF324
static void T1_Hint_Stems(struct T1_Builder_ * builder /* r29 */) {
    // Local variables
    struct T1_Glyph_Hints_ * hints; // r31
    struct T1_Font_ * priv; // r7
    struct T1_SizeRec_ * size; // r1+0x8
    int scale_x; // r30
    int scale_y; // r6
}




