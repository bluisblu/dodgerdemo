/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1load.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A8F7C -> 0x800AA7E0
*/
// Range: 0x800A8F7C -> 0x800A8FC4
static void Init_T1_Parser(struct T1_Parser_ * parser /* r1+0x0 */, struct T1_FaceRec_ * face /* r1+0x4 */, struct T1_TokenParser_ * tokenizer /* r1+0x8 */) {}

// Range: 0x800A8FC4 -> 0x800A908C
static int Next_T1_Token(struct T1_Parser_ * parser /* r1+0x8 */, struct T1_Token_ * token /* r29 */) {
    // Local variables
    int error; // r3
    struct T1_TokenParser_ * tokzer; // r30
}

// Range: 0x800A908C -> 0x800A9178
static int Expect_Keyword(struct T1_Parser_ * parser /* r1+0x8 */, enum T1_TokenType_ keyword /* r31 */) {
    // Local variables
    struct T1_Token_ token; // r1+0x10
    int error; // r3
}

// Range: 0x800A9178 -> 0x800A9278
static int Expect_Keyword2(struct T1_Parser_ * parser /* r1+0x8 */, enum T1_TokenType_ keyword1 /* r30 */, enum T1_TokenType_ keyword2 /* r31 */) {
    // Local variables
    struct T1_Token_ token; // r1+0x14
    int error; // r3
}

// Range: 0x800A9278 -> 0x800A9344
static void Parse_Encoding(struct T1_Parser_ * parser /* r29 */) {
    // Local variables
    struct T1_Token_ * token; // r1+0x8
    struct FT_MemoryRec_ * memory; // r3
    struct T1_Encoding_ * encode; // r30
    int error; // r3
}

// Range: 0x800A9344 -> 0x800A94B0
static int Do_Def_Font(struct T1_Parser_ * parser /* r31 */) {
    // Local variables
    struct T1_Token_ * top; // r1+0x8
    struct T1_Font_ * type1; // r29
    struct FT_MemoryRec_ * memory; // r3
    int error; // r3
    int len; // r28
}

// Range: 0x800A94B0 -> 0x800A95B8
static int Do_Def_FontInfo(struct T1_Parser_ * parser /* r30 */) {
    // Local variables
    struct T1_Font_ * info; // r31
}

// Range: 0x800A95B8 -> 0x800A9790
static int Do_Def_Private(struct T1_Parser_ * parser /* r30 */) {
    // Local variables
    struct T1_Font_ * priv; // r31
}

// Range: 0x800A9790 -> 0x800A97A0
static int Do_Def_Error(struct T1_Parser_ * parser /* r3 */) {}

// Range: 0x800A97A0 -> 0x800A97A8
static int Do_Def_Ignore(struct T1_Parser_ * parser /* r1+0x0 */) {}

// Range: 0x800A97A8 -> 0x800A98E0
static int Do_Put_Encoding(struct T1_Parser_ * parser /* r29 */) {
    // Local variables
    int error; // r27
    struct T1_Token_ * top; // r1+0x8
    struct T1_Encoding_ * encode; // r31
    int index; // r30
    char temp_name[128]; // r1+0xC
    struct T1_Token_ * token; // r4
    int len; // r27
}

// Range: 0x800A98E0 -> 0x800A9A00
static int Do_RD_Subrs(struct T1_Parser_ * parser /* r31 */) {
    // Local variables
    int error; // r3
    struct T1_FaceRec_ * face; // r30
    struct T1_Token_ * top; // r1+0x8
    struct T1_TokenParser_ * tokzer; // r29
    int index; // r28
    int count; // r27
    unsigned char * base; // r26
}

// Range: 0x800A9A00 -> 0x800A9B80
static int Do_RD_Charstrings(struct T1_Parser_ * parser /* r28 */) {
    // Local variables
    int error; // r3
    struct T1_FaceRec_ * face; // r31
    struct T1_Token_ * top; // r1+0x8
    struct T1_TokenParser_ * tokzer; // r30
    int index; // r27
    int count; // r29
    char temp_name[128]; // r1+0x20
    struct T1_Token_ * token; // r1+0x8
    int len; // r26
    unsigned char * base; // r26
}

// Range: 0x800A9B80 -> 0x800A9CA4
static int Expect_Dict_Arguments(struct T1_Parser_ * parser /* r31 */, int num_args /* r28 */, enum T1_TokenType_ immediate /* r1+0x10 */, enum T1_DictState_ new_state /* r29 */, int * count /* r30 */) {}

// Range: 0x800A9CA4 -> 0x800A9E00
static int Expect_Array_Arguments(struct T1_Parser_ * parser /* r31 */) {
    // Local variables
    struct T1_Token_ * top; // r1+0x8
    int error; // r3
    enum T1_DictState_ new_state; // r29
    int count; // r27
    struct T1_FaceRec_ * face; // r1+0x8
    struct FT_MemoryRec_ * memory; // r26
    struct T1_Encoding_ * encode; // r6
}

// Range: 0x800A9E00 -> 0x800AA2B0
static int Finalise_Parsing(struct T1_Parser_ * parser /* r31 */) {
    // Local variables
    struct T1_FaceRec_ * face; // r3
    struct T1_Font_ * type1; // r28
    struct FT_MemoryRec_ * memory; // r27
    struct T1_Table_ * strings; // r29
    struct PSNames_Interface_ * psnames; // r26
    int num_glyphs; // r1+0x8
    int n; // r5
    int error; // r3
    int n; // r25
    struct T1_Encoding_ * encode; // r24
    char * * names; // r5
    int index; // r3
    int m; // r18
    char * name; // r19
    int len; // r20
}

// Range: 0x800AA2B0 -> 0x800AA7E0
static int Parse_T1_FontProgram(struct T1_Parser_ * parser /* r30 */) {
    // Local variables
    int error; // r24
    struct T1_Font_ * type1; // r28
    struct T1_Token_ token; // r1+0x24
    struct T1_Token_ * top; // r5
    enum T1_DictState_ dict_state; // r6
    int dict_index; // r1+0x8
    struct T1_FaceRec_ * face; // r23
    int count; // r1+0x20

    // References
    // -> static int (* def_funcs[11])(struct T1_Parser_ *);
}




