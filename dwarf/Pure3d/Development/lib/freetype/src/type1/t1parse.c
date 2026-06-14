/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\t1parse.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800AD6AC -> 0x800AE1D4
*/
// Range: 0x800AD6AC -> 0x800AD760
static int T1_New_Table(struct T1_Table_ * table /* r28 */, int count /* r29 */, struct FT_MemoryRec_ * memory /* r30 */) {
    // Local variables
    int error; // r3
}

// Range: 0x800AD760 -> 0x800AD820
static int reallocate_t1_table(struct T1_Table_ * table /* r29 */, int new_size /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
    unsigned char * old_base; // r31
    int error; // r3
    int delta; // r1+0x8
    unsigned char * * offset; // r3
    unsigned char * * limit; // r5
}

// Range: 0x800AD820 -> 0x800AD918
static int T1_Add_Table(struct T1_Table_ * table /* r30 */, int index /* r28 */, void * object /* r29 */, int length /* r31 */) {
    // Local variables
    int error; // r3
    int new_size; // r4
}

// Range: 0x800AD918 -> 0x800AD9C4
static void T1_Done_Table(struct T1_Table_ * table /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3
    int error; // r1+0x8
    unsigned char * old_base; // r1+0x8
    int delta; // r4
    unsigned char * * element; // r3
    unsigned char * * limit; // r5
}

// Range: 0x800AD9C4 -> 0x800ADA90
static char * CopyString(struct T1_Parser_ * parser /* r28 */) {
    // Local variables
    char * string; // r1+0xC
    struct T1_Token_ * token; // r1+0x8
    struct FT_MemoryRec_ * memory; // r3
    int error; // r1+0x8
    int len; // r29
}

// Range: 0x800ADA90 -> 0x800ADB10
static int parse_int(unsigned char * base /* r3 */, unsigned char * limit /* r1+0x4 */, int * result /* r1+0x8 */) {
    // Local variables
    unsigned char sign; // r7
    int sum; // r6
}

// Range: 0x800ADB10 -> 0x800ADC50
static int parse_integer(unsigned char * base /* r3 */, unsigned char * limit /* r4 */, int * result /* r30 */) {
    // Local variables
    unsigned char * cur; // r6
    unsigned char c; // r1+0x8
}

// Range: 0x800ADC50 -> 0x800ADCDC
static int CopyInteger(struct T1_Parser_ * parser /* r31 */) {
    // Local variables
    int sum; // r1+0xC
    struct T1_Token_ * token; // r1+0x8
    unsigned char * base; // r3
    unsigned char * limit; // r4
}

// Range: 0x800ADCDC -> 0x800ADD30
static unsigned char CopyBoolean(struct T1_Parser_ * parser /* r1+0x0 */) {
    // Local variables
    int error; // r5
    unsigned char result; // r6
    struct T1_Token_ * token; // r1+0x0
}

// Range: 0x800ADD30 -> 0x800ADE1C
static int CopyFloat(struct T1_Parser_ * parser /* r31 */, int scale /* r27 */) {
    // Local variables
    int error; // r1+0x8
    int sum; // r28
    struct T1_Token_ * token; // r1+0x8
    unsigned char * base; // r4
}

// Range: 0x800ADE1C -> 0x800ADF3C
static void CopyBBox(struct T1_Parser_ * parser /* r31 */, struct FT_BBox_ * bbox /* r27 */) {
    // Local variables
    struct T1_Token_ * token; // r1+0x8
    int n; // r30
    int error; // r1+0x8
    unsigned char * base; // r4
    unsigned char * limit; // r29
    unsigned char * cur; // r28
    unsigned char * start; // r3
    int * result; // r5
}

// Range: 0x800ADF3C -> 0x800AE0B8
static void CopyMatrix(struct T1_Parser_ * parser /* r29 */, struct FT_Matrix_ * matrix /* r30 */) {
    // Local variables
    struct T1_Token_ * token; // r1+0x8
    unsigned char * base; // r4
    unsigned char * limit; // r25
    unsigned char * cur; // r24
    unsigned char * start; // r4
    int n; // r31
    int * result; // r23
}

// Range: 0x800AE0B8 -> 0x800AE1D4
static void CopyArray(struct T1_Parser_ * parser /* r27 */, unsigned char * num_elements /* r28 */, signed short * elements /* r29 */, int max_elements /* r30 */) {
    // Local variables
    struct T1_Token_ * token; // r1+0x8
    int error; // r1+0x8
    unsigned char * base; // r4
    unsigned char * limit; // r26
    unsigned char * cur; // r25
    unsigned char * start; // r3
    int n; // r31
    int result; // r1+0x18
}




