/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\truetype\ttobjs.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A1BD4 -> 0x800A2B14
*/
// Range: 0x800A1BD4 -> 0x800A1E54
static char * Get_Name(struct TT_FaceRec_ * face /* r1+0x8 */, unsigned short nameid /* r1+0xC */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r6
    unsigned short n; // r7
    struct TT_NameRec_ * rec; // r31
    unsigned char wide_chars; // r8
    unsigned char found; // r9
    char * string; // r1+0x14
    unsigned int len; // r30
    unsigned int m; // r4
}

// Range: 0x800A1E54 -> 0x800A216C
static int TT_Init_Face(struct FT_StreamRec_ * stream /* r29 */, int face_index /* r28 */, struct TT_FaceRec_ * face /* r31 */) {
    // Local variables
    int error; // r27
    unsigned int format_tag; // r1+0x18
    struct SFNT_Interface_ * sfnt; // r30
    struct FT_DriverRec_ * sfnt_driver; // r1+0x8
    struct FT_DriverRec_ * psnames_driver; // r1+0x8
}

// Range: 0x800A216C -> 0x800A2354
static void TT_Done_Face(struct TT_FaceRec_ * face /* r27 */) {
    // Local variables
    unsigned short n; // r29
    struct FT_MemoryRec_ * memory; // r28
    struct SFNT_Interface_ * sfnt; // r1+0x8
}

// Range: 0x800A2354 -> 0x800A2624
static int TT_Init_Size(struct TT_SizeRec_ * size /* r29 */) {
    // Local variables
    int error; // r28
    struct TT_FaceRec_ * face; // r31
    struct FT_MemoryRec_ * memory; // r30
    struct TT_ExecContextRec_ * exec; // r30
    unsigned short n_twilight; // r27
    struct TT_MaxProfile_ * maxp; // r27
    struct FT_Size_Metrics_ * metrics; // r6
    struct TT_Size_Metrics_ * metrics2; // r7
    struct FT_Size_Metrics_ * metrics; // r7
    struct TT_Size_Metrics_ * tt_metrics; // r8

    // References
    // -> static struct TT_GraphicsState_ tt_default_graphics_state;
}

// Range: 0x800A2624 -> 0x800A26DC
static void TT_Done_Size(struct TT_SizeRec_ * size /* r29 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
}

// Range: 0x800A26DC -> 0x800A2A18
static int TT_Reset_Size(struct TT_SizeRec_ * size /* r29 */) {
    // Local variables
    struct TT_FaceRec_ * face; // r31
    int error; // r28
    struct FT_Size_Metrics_ * metrics; // r30
    struct TT_ExecContextRec_ * exec; // r30
    unsigned int i; // r27
    unsigned int j; // r9

    // References
    // -> static struct TT_GraphicsState_ tt_default_graphics_state;
}

// Range: 0x800A2A18 -> 0x800A2A54
static int TT_Init_GlyphSlot(struct FT_GlyphSlotRec_ * slot /* r3 */) {
    // Local variables
    struct FT_FaceRec_ * face; // r5
    struct FT_LibraryRec_ * library; // r3
}

// Range: 0x800A2A54 -> 0x800A2A84
static void TT_Done_GlyphSlot(struct FT_GlyphSlotRec_ * slot /* r3 */) {
    // Local variables
    struct FT_LibraryRec_ * library; // r3
}

// Range: 0x800A2A84 -> 0x800A2AC8
static int TT_Init_Driver(struct TT_DriverRec_ * driver /* r3 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r1+0x8
    int error; // r3
}

// Range: 0x800A2AC8 -> 0x800A2B14
static void TT_Done_Driver(struct TT_DriverRec_ * driver /* r31 */) {}




