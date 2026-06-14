/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\truetype\ttgload.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009FDC8 -> 0x800A1BD4
*/
// Range: 0x8009FDC8 -> 0x8009FE20
static void TT_Get_Metrics(struct TT_HoriHeader_ * header /* r1+0x0 */, unsigned int index /* r1+0x4 */, signed short * bearing /* r1+0x8 */, unsigned short * advance /* r1+0xC */) {
    // Local variables
    struct TT_LongMetrics_ * longs_m; // r3
    unsigned short k; // r1+0x0
}

// Range: 0x8009FE20 -> 0x800A04EC
static int Load_Simple(struct TT_Loader_ * load /* r31 */, unsigned int byte_count /* r4 */, int n_contours /* r26 */, unsigned char debug /* r27 */) {
    // Local variables
    int error; // r3
    struct FT_StreamRec_ * stream; // r30
    struct FT_GlyphZone_ * zone; // r29
    struct TT_FaceRec_ * face; // r24
    unsigned short n_ins; // r1+0x8
    int n; // r23
    int n_points; // r28
    unsigned char * flag; // r23
    unsigned char * limit; // r22
    unsigned char c; // r1+0x8
    unsigned char count; // r3
    struct FT_Vector_ * vec; // r22
    struct FT_Vector_ * limit; // r23
    unsigned char * flag; // r21
    int x; // r20
    int y; // r4
    struct FT_Vector_ * vec; // r20
    struct FT_Vector_ * limit; // r21
    unsigned char * flag; // r22
    int x; // r23
    int y; // r4
    struct FT_Vector_ * pp1; // r5
    struct FT_Vector_ * pp2; // r6
    struct FT_Vector_ * vec; // r20
    struct FT_Vector_ * limit; // r21
    int x_scale; // r22
    int y_scale; // r23
    int x; // r4
}

// Range: 0x800A04EC -> 0x800A1100
static int load_truetype_glyph(struct TT_Loader_ * loader /* r31 */, unsigned int glyph_index /* r4 */) {
    // Local variables
    struct FT_StreamRec_ * stream; // r26
    int error; // r1+0x438
    struct TT_FaceRec_ * face; // r1+0x8
    unsigned int offset; // r6
    struct FT_SubGlyph_ subglyphs[32]; // r1+0x38
    int num_subglyphs; // r25
    int contours_count; // r14
    unsigned int index; // r14
    unsigned int num_points; // r1+0x8
    unsigned int num_contours; // r1+0x8
    unsigned int count; // r15
    int x_scale; // r24
    int y_scale; // r23
    unsigned int ins_offset; // r14
    signed short left_bearing; // r1+0x36
    unsigned short advance_width; // r1+0x34
    unsigned int num_base_points; // r5
    unsigned int k; // r6
    struct FT_SubGlyph_ * subglyph; // r14
    int xx; // r15
    int xy; // r16
    int yy; // r4
    int yx; // r17
    int n; // r22
    int num_base_points; // r21
    int num_new_points; // r20
    struct FT_Vector_ pp1; // r1+0x2C
    struct FT_Vector_ pp2; // r1+0x24
    int x; // r15
    int y; // r16
    struct FT_Vector_ * cur; // r19
    struct FT_Vector_ * org; // r18
    struct FT_Vector_ * limit; // r17
    int nx; // r15
    int ny; // r1+0x8
    int k; // r1+0x8
    unsigned int l; // r1+0x8
    unsigned short n_ins; // r1+0x8
    struct TT_ExecContextRec_ * exec; // r15
    unsigned int n_points; // r16
    struct FT_GlyphZone_ * pts; // r4
    struct FT_Vector_ * pp1; // r17
    unsigned int k; // r3
}

// Range: 0x800A1100 -> 0x800A18AC
static void compute_glyph_metrics(struct TT_Loader_ * loader /* r25 */, unsigned int glyph_index /* r26 */) {
    // Local variables
    unsigned int num_points; // r6
    unsigned int num_contours; // r5
    struct FT_BBox_ bbox; // r1+0x24
    struct TT_FaceRec_ * face; // r31
    int x_scale; // r30
    int y_scale; // r29
    struct FT_GlyphSlotRec_ * glyph; // r28
    struct TT_SizeRec_ * size; // r27
    unsigned int u; // r4
    int left_bearing; // r18
    int advance; // r19
    signed short top_bearing; // r6
    unsigned short advance_height; // r30
    int left; // r5
    int Top; // r19
    int top; // r18
    int advance; // r3
}

// Range: 0x800A18AC -> 0x800A1BD4
static int TT_Load_Glyph(struct TT_SizeRec_ * size /* r26 */, struct FT_GlyphSlotRec_ * glyph /* r27 */, unsigned short glyph_index /* r28 */, unsigned int load_flags /* r29 */) {
    // Local variables
    struct SFNT_Interface_ * sfnt; // r4
    struct TT_FaceRec_ * face; // r31
    struct FT_StreamRec_ * stream; // r30
    int error; // r3
    struct TT_Loader_ loader; // r1+0x20
    struct FT_GlyphZone_ * zone; // r24
    struct TT_SBit_Metrics_ metrics; // r1+0x18

    // References
    // -> static struct TT_GraphicsState_ tt_default_graphics_state;
}




