/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1objs.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A8B80 -> 0x800A8F7C
*/
// Range: 0x800A8B80 -> 0x800A8BBC
static void T1_Done_Size(struct T1_SizeRec_ * size /* r31 */) {}

// Range: 0x800A8BBC -> 0x800A8BE4
static int T1_Init_Size(struct T1_SizeRec_ * size /* r3 */) {
    // Local variables
    int error; // r3
}

// Range: 0x800A8BE4 -> 0x800A8C04
static int T1_Reset_Size(struct T1_SizeRec_ * size /* r3 */) {}

// Range: 0x800A8C04 -> 0x800A8C08
static void T1_Done_Face() {}

// Range: 0x800A8C08 -> 0x800A8E78
static int T1_Init_Face(struct FT_StreamRec_ * stream /* r30 */, int face_index /* r28 */, struct T1_FaceRec_ * face /* r29 */) {
    // Local variables
    struct T1_TokenParser_ * tokenizer; // r1+0x18C
    int error; // r31
    struct FT_DriverRec_ * psnames_driver; // r1+0x8
    struct T1_Parser_ parser; // r1+0x18
    struct FT_FaceRec_ * root; // r1+0x8
    struct T1_Font_ * type1; // r30
    char * full; // r5
    char * family; // r6
    int max_advance; // r1+0x14
}

// Range: 0x800A8E78 -> 0x800A8EDC
static void T1_Done_GlyphSlot(struct T1_GlyphSlotRec_ * glyph /* r29 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    struct FT_LibraryRec_ * library; // r30
}

// Range: 0x800A8EDC -> 0x800A8F70
static int T1_Init_GlyphSlot(struct T1_GlyphSlotRec_ * glyph /* r29 */) {
    // Local variables
    struct FT_LibraryRec_ * library; // r30
    int error; // r3
}

// Range: 0x800A8F70 -> 0x800A8F78
static int T1_Init_Driver(struct T1_DriverRec_ * driver /* r1+0x0 */) {}

// Range: 0x800A8F78 -> 0x800A8F7C
static void T1_Done_Driver(struct T1_DriverRec_ * driver /* r1+0x0 */) {}




