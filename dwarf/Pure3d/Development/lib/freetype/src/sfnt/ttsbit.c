/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\sfnt\ttsbit.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009DEE8 -> 0x8009EE58
*/
// Range: 0x8009DEE8 -> 0x8009E094
static void blit_sbit(struct FT_Bitmap_ * target /* r1+0x8 */, char * source /* r4 */, int line_bits /* r5 */, unsigned char byte_padded /* r1+0x14 */, int x_offset /* r1+0x18 */, int y_offset /* r1+0x1C */) {
    // Local variables
    unsigned char * line_buff; // r10
    int line_incr; // r1+0x8
    int height; // r1+0x8
    unsigned short acc; // r3
    unsigned char loaded; // r6
    unsigned char * cur; // r7
    int count; // r8
    unsigned char shift; // r1+0x8
    unsigned char space; // r11
    unsigned char val; // r29
    unsigned char val; // r29
}

// Range: 0x8009E094 -> 0x8009E0D0
static int TT_Load_SBit_Strikes(struct TT_FaceRec_ * face /* r3 */, struct FT_StreamRec_ * stream /* r4 */) {}

// Range: 0x8009E0D0 -> 0x8009E18C
static void TT_Free_SBit_Strikes(struct TT_FaceRec_ * face /* r25 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
    struct TT_SBit_Strike_ * strike; // r29
    struct TT_SBit_Strike_ * strike_limit; // r28
    struct TT_SBit_Range * range; // r27
    struct TT_SBit_Range * range_limit; // r26
}

// Range: 0x8009E18C -> 0x8009E2E4
static int Find_SBit_Range(unsigned int glyph_index /* r1+0x0 */, struct TT_SBit_Strike_ * strike /* r1+0x4 */, struct TT_SBit_Range * * arange /* r1+0x8 */, unsigned int * aglyph_offset /* r1+0xC */) {
    // Local variables
    struct TT_SBit_Range * range; // r9
    struct TT_SBit_Range * range_limit; // r7
    unsigned short delta; // r1+0x0
    unsigned int n; // r10
}

// Range: 0x8009E2E4 -> 0x8009E3BC
static int Find_SBit_Image(struct TT_FaceRec_ * face /* r1+0x8 */, unsigned int glyph_index /* r4 */, int x_ppem /* r1+0x10 */, int y_ppem /* r1+0x14 */, struct TT_SBit_Range * * arange /* r28 */, struct TT_SBit_Strike_ * * astrike /* r29 */, unsigned int * aglyph_offset /* r30 */) {
    // Local variables
    struct TT_SBit_Strike_ * strike; // r31
    struct TT_SBit_Strike_ * strike_limit; // r7
    int error; // r1+0x8
}

// Range: 0x8009E3BC -> 0x8009E548
static int Load_SBit_Metrics(struct FT_StreamRec_ * stream /* r24 */, struct TT_SBit_Range * range /* r1+0xC */, struct TT_SBit_Metrics_ * metrics /* r25 */) {
    // Local variables
    int error; // r26
}

// Range: 0x8009E548 -> 0x8009E894
static void Crop_Bitmap(struct FT_Bitmap_ * map /* r28 */, struct TT_SBit_Metrics_ * metrics /* r29 */) {
    // Local variables
    int rows; // r31
    int count; // r27
    int line_len; // r30
    unsigned char * line; // r1+0x8
    unsigned char * cur; // r4
    unsigned char * limit; // r5
    unsigned char * cur; // r5
    unsigned char * limit; // r6
    unsigned char * limit; // r1+0x8
    int n; // r1+0x8
    int width; // r4
    unsigned char old; // r9
    unsigned char * cur; // r10
    int right; // r6
    unsigned char * limit; // r6
}

// Range: 0x8009E894 -> 0x8009E9F8
static int Load_SBit_Single(struct FT_Bitmap_ * map /* r27 */, int x_offset /* r28 */, int y_offset /* r29 */, int pix_bits /* r30 */, unsigned short image_format /* r1+0x18 */, struct TT_SBit_Metrics_ * metrics /* r1+0x1C */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r26
    int glyph_size; // r4
    int line_bits; // r25
    unsigned char pad_bytes; // r24
    int line_length; // r1+0x8
}

// Range: 0x8009E9F8 -> 0x8009ECF0
static int Load_SBit_Image(struct TT_SBit_Strike_ * strike /* r23 */, struct TT_SBit_Range * range /* r24 */, unsigned int ebdt_pos /* r25 */, unsigned int glyph_offset /* r1+0x1C */, struct FT_Bitmap_ * map /* r26 */, int x_offset /* r27 */, int y_offset /* r28 */, struct FT_StreamRec_ * stream /* r29 */, struct TT_SBit_Metrics_ * metrics /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    int error; // r1+0x44
    int size; // r4
    struct TT_SBit_Component_ * components; // r1+0x40
    struct TT_SBit_Component_ * comp; // r22
    unsigned short num_components; // r30
    unsigned short count; // r21
    struct TT_SBit_Range * elem_range; // r1+0x3C
    struct TT_SBit_Metrics_ elem_metrics; // r1+0x34
    unsigned int elem_offset; // r1+0x30
}

// Range: 0x8009ECF0 -> 0x8009EE58
static int TT_Load_SBit_Image(struct TT_FaceRec_ * face /* r26 */, int x_ppem /* r7 */, int y_ppem /* r1+0x18 */, unsigned int glyph_index /* r6 */, struct FT_StreamRec_ * stream /* r27 */, struct FT_Bitmap_ * map /* r29 */, struct TT_SBit_Metrics_ * metrics /* r30 */) {
    // Local variables
    int error; // r31
    struct FT_MemoryRec_ * memory; // r28
    unsigned int ebdt_pos; // r31
    unsigned int glyph_offset; // r1+0x38
    struct TT_SBit_Strike_ * strike; // r1+0x34
    struct TT_SBit_Range * range; // r1+0x30
    int advance; // r6
}




