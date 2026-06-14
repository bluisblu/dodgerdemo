/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1tokens.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800AC468 -> 0x800AD6AC
*/
// Range: 0x800AC468 -> 0x800AC5B4
static int Find_Name(char * base /* r3 */, int length /* r4 */, const char * * table /* r1+0x8 */, int table_len /* r1+0xC */) {
    // Local variables
    int left; // r1+0x0
    int right; // r6
    int middle; // r11
}

// Range: 0x800AC5B4 -> 0x800AC660
static int grow(struct T1_TokenParser_ * tokzer /* r29 */) {
    // Local variables
    int error; // r3
    int left_bytes; // r31
    struct FT_MemoryRec_ * memory; // r3
    struct FT_StreamRec_ * stream; // r30
}

// Range: 0x800AC660 -> 0x800AC7BC
static void t1_decrypt(unsigned char * buffer /* r3 */, int length /* r4 */, unsigned short seed /* r5 */) {
    // Local variables
    unsigned char plain; // r1+0x0
}

// Range: 0x800AC7BC -> 0x800ACA24
static int New_Tokenizer(struct FT_StreamRec_ * stream /* r29 */, struct T1_TokenParser_ * * tokenizer /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
    struct T1_TokenParser_ * tokzer; // r1+0x14
    int error; // r3
    unsigned short tag; // r27
    unsigned int size; // r26
    unsigned char * tok_base; // r1+0x10
    unsigned int tok_limit; // r25
    unsigned int tok_max; // r24
}

// Range: 0x800ACA24 -> 0x800ACA8C
static int Done_Tokenizer(struct T1_TokenParser_ * tokenizer /* r1+0x8 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
}

// Range: 0x800ACA8C -> 0x800AD170
static int Open_PrivateDict(struct T1_TokenParser_ * tokenizer /* r31 */) {
    // Local variables
    struct T1_TokenParser_ * tokzer; // r31
    struct FT_StreamRec_ * stream; // r30
    struct FT_MemoryRec_ * memory; // r26
    int error; // r29
    unsigned short tag; // r27
    unsigned int size; // r28
    unsigned char * private; // r1+0x10
    int start_pos; // r25
    unsigned int private_size; // r24
    char * base; // r1+0x8
    unsigned char * write; // r24
    unsigned char * cur; // r4
    unsigned char * limit; // r6
    int count; // r27
    int cursor; // r28
}

// Range: 0x800AD170 -> 0x800AD6AC
static int Read_Token(struct T1_TokenParser_ * tokenizer /* r31 */) {
    // Local variables
    struct T1_TokenParser_ * tok; // r31
    int cur; // r30
    int limit; // r1+0x8
    unsigned char * base; // r3
    char c; // r5
    char starter; // r1+0x8
    char ender; // r6
    unsigned char token_started; // r29
    enum T1_TokenType_ kind; // r27
    int left; // r4
    int nest_level; // r26
    int left; // r1+0x8
    int left; // r1+0x8
    int index; // r1+0x8

    // References
    // -> char * t1_keywords[27];
    // -> char * t1_immediates[49];
}




