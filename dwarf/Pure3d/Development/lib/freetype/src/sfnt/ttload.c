/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\sfnt\ttload.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009C108 -> 0x8009D6F8
*/
// Range: 0x8009C108 -> 0x8009C194
static int TT_Goto_Table(struct TT_FaceRec_ * face /* r1+0x8 */, unsigned int tag /* r1+0xC */, struct FT_StreamRec_ * stream /* r5 */, unsigned int * length /* r1+0x14 */) {
    // Local variables
    struct TT_Table_ * table; // r1+0x8
    int error; // r3
}

// Range: 0x8009C194 -> 0x8009C330
static int TT_Load_Format_Tag(struct TT_FaceRec_ * face /* r26 */, struct FT_StreamRec_ * stream /* r27 */, int faceIndex /* r28 */, unsigned int * format_tag /* r29 */) {
    // Local variables
    int error; // r1+0x38
    struct FT_MemoryRec_ * memory; // r30
    struct FT_Frame_Field_ ttc_header_fields[4]; // r1+0x18
    int n; // r30
}

// Range: 0x8009C330 -> 0x8009C494
static int TT_Load_Directory(struct TT_FaceRec_ * face /* r29 */, struct FT_StreamRec_ * stream /* r30 */) {
    // Local variables
    int error; // r28
    struct FT_MemoryRec_ * memory; // r31
    struct FT_Frame_Field_ table_dir_fields[6]; // r1+0x20
    struct TT_TableDir_ tableDir; // r1+0x14
    struct TT_Table_ * entry; // r29
    struct TT_Table_ * limit; // r31
}

// Range: 0x8009C494 -> 0x8009C564
static int TT_Load_Any(struct TT_FaceRec_ * face /* r1+0x8 */, unsigned int tag /* r1+0xC */, int offset /* r5 */, void * buffer /* r6 */, int * length /* r1+0x18 */) {
    // Local variables
    int error; // r3
    struct FT_StreamRec_ * stream; // r3
    unsigned int size; // r8
}

// Range: 0x8009C564 -> 0x8009C5FC
static int TT_Load_Header(struct TT_FaceRec_ * face /* r30 */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r3
    struct TT_Header_ * header; // r5
    struct FT_Frame_Field_ header_fields[21]; // r1+0x10
}

// Range: 0x8009C5FC -> 0x8009C738
static int TT_Load_MaxProfile(struct TT_FaceRec_ * face /* r30 */, struct FT_StreamRec_ * stream /* r29 */) {
    // Local variables
    int error; // r3
    struct TT_MaxProfile_ * maxProfile; // r31
    struct FT_Frame_Field_ maxp_fields[17]; // r1+0x10
}

// Range: 0x8009C738 -> 0x8009C978
static int TT_Load_Metrics(struct TT_FaceRec_ * face /* r25 */, struct FT_StreamRec_ * stream /* r30 */, unsigned char vertical /* r28 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_MemoryRec_ * memory; // r27
    unsigned int table_len; // r1+0x14
    int num_shorts; // r26
    int num_longs; // r4
    int num_shorts_checked; // r25
    struct TT_LongMetrics_ * * longs; // r24
    signed short * * shorts; // r31
    struct TT_LongMetrics_ * cur; // r24
    struct TT_LongMetrics_ * limit; // r27
    signed short * cur; // r24
    signed short * limit; // r27
    signed short val; // r4
}

// Range: 0x8009C978 -> 0x8009CA90
static int TT_Load_Metrics_Header(struct TT_FaceRec_ * face /* r27 */, struct FT_StreamRec_ * stream /* r28 */, unsigned char vertical /* r29 */) {
    // Local variables
    int error; // r1+0x8
    struct TT_HoriHeader_ * header; // r30
    struct FT_Frame_Field_ metrics_header_fields[19]; // r1+0x14
}

// Range: 0x8009CA90 -> 0x8009CD98
static int TT_Load_Names(struct TT_FaceRec_ * face /* r27 */, struct FT_StreamRec_ * stream /* r26 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_MemoryRec_ * memory; // r29
    unsigned int table_pos; // r1+0x8
    unsigned int table_len; // r1+0x70
    unsigned int storageSize; // r28
    struct TT_NameTable_ * names; // r27
    struct FT_Frame_Field_ name_table_fields[5]; // r1+0x48
    struct FT_Frame_Field_ name_record_fields[7]; // r1+0x10
    struct TT_NameRec_ * cur; // r25
    struct TT_NameRec_ * limit; // r24
    unsigned int upper; // r4
    struct TT_NameRec_ * cur; // r5
    struct TT_NameRec_ * limit; // r4
}

// Range: 0x8009CD98 -> 0x8009CDF8
static void TT_Free_Names(struct TT_FaceRec_ * face /* r1+0x8 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    struct TT_NameTable_ * names; // r30
}

// Range: 0x8009CDF8 -> 0x8009D008
static int TT_Load_CMap(struct TT_FaceRec_ * face /* r29 */, struct FT_StreamRec_ * stream /* r30 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_MemoryRec_ * memory; // r31
    int table_start; // r1+0x8
    struct TT_CMapDir_ cmap_dir; // r1+0x58
    struct FT_Frame_Field_ cmap_fields[4]; // r1+0x38
    struct FT_Frame_Field_ cmap_rec_fields[5]; // r1+0x10
    struct TT_CharMapRec_ * charmap; // r26
    struct TT_CharMapRec_ * limit; // r25
    struct TT_CMapTable_ * cmap; // r24
    struct TT_CMapTable_ * cmap; // r24
}

// Range: 0x8009D008 -> 0x8009D130
static int TT_Load_OS2(struct TT_FaceRec_ * face /* r30 */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r1+0x8
    struct TT_OS2_ * os2; // r30
    struct FT_Frame_Field_ os2_fields[44]; // r1+0x30
    struct FT_Frame_Field_ os2_fields_extra[4]; // r1+0x10
}

// Range: 0x8009D130 -> 0x8009D1DC
static int TT_Load_PostScript(struct TT_FaceRec_ * face /* r3 */, struct FT_StreamRec_ * stream /* r30 */) {
    // Local variables
    int error; // r1+0x8
    struct TT_Postscript_ * post; // r31
    struct FT_Frame_Field_ post_fields[11]; // r1+0x10
}

// Range: 0x8009D1DC -> 0x8009D2F4
static int TT_Load_Gasp(struct TT_FaceRec_ * face /* r26 */, struct FT_StreamRec_ * stream /* r27 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_MemoryRec_ * memory; // r31
    unsigned int j; // r29
    unsigned int num_ranges; // r28
    struct TT_GaspRange_ * gaspranges; // r1+0x10
}

// Range: 0x8009D2F4 -> 0x8009D4B4
static int TT_Load_Kern(struct TT_FaceRec_ * face /* r30 */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r1+0x8
    struct FT_MemoryRec_ * memory; // r27
    unsigned int n; // r26
    unsigned int num_tables; // r29
    unsigned int coverage; // r28
    unsigned int length; // r25
    unsigned int num_pairs; // r25
    struct TT_Kern_0_Pair_ * pair; // r27
    struct TT_Kern_0_Pair_ * limit; // r29
}

// Range: 0x8009D4B4 -> 0x8009D664
static int TT_Load_Hdmx(struct TT_FaceRec_ * face /* r26 */, struct FT_StreamRec_ * stream /* r31 */) {
    // Local variables
    int error; // r1+0x10
    struct FT_MemoryRec_ * memory; // r29
    struct TT_Hdmx_ * hdmx; // r28
    int num_glyphs; // r28
    int record_size; // r30
    struct TT_HdmxRec_ * cur; // r27
    struct TT_HdmxRec_ * limit; // r26
}

// Range: 0x8009D664 -> 0x8009D6F8
static void TT_Free_Hdmx(struct TT_FaceRec_ * face /* r28 */) {
    // Local variables
    int n; // r30
    struct FT_MemoryRec_ * memory; // r29
}




