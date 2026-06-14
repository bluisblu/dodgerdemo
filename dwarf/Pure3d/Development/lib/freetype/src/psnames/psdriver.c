/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\psnames\psdriver.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009BC70 -> 0x8009C108
*/
// Range: 0x8009BC70 -> 0x8009BEE8
static unsigned int PS_Unicode_Value(const char * glyph_name /* r31 */) {
    // Local variables
    int n; // r28
    char first; // r1+0x8
    char temp[64]; // r1+0xC
    int count; // r5
    unsigned int value; // r3
    const char * p; // r6
    char c; // r1+0x8
    unsigned char d; // r7
    const char * p; // r4
    int len; // r28
    const char * name; // r4

    // References
    // -> static unsigned short names_to_unicode[392];
    // -> static const char * * t1_standard_glyphs;
}

// Range: 0x8009BEE8 -> 0x8009BF14
static int compare_uni_maps(void * a /* r1+0x0 */, void * b /* r1+0x4 */) {
    // Local variables
    struct PS_UniMap_ * map1; // r1+0x0
    struct PS_UniMap_ * map2; // r1+0x0
}

// Range: 0x8009BF14 -> 0x8009C038
static int PS_Build_Unicode_Table(struct FT_MemoryRec_ * memory /* r24 */, unsigned int num_glyphs /* r25 */, const char * * glyph_names /* r28 */, struct PS_Unicodes_ * table /* r26 */) {
    // Local variables
    int error; // r29
    unsigned int n; // r28
    unsigned int count; // r28
    struct PS_UniMap_ * map; // r27
    unsigned int uni_char; // r1+0x8
    const char * gname; // r3
}

// Range: 0x8009C038 -> 0x8009C0B0
static unsigned int PS_Lookup_Unicode(struct PS_Unicodes_ * table /* r1+0x0 */, unsigned int unicode /* r1+0x4 */) {
    // Local variables
    struct PS_UniMap_ * min; // r5
    struct PS_UniMap_ * max; // r6
    struct PS_UniMap_ * mid; // r1+0x0
}

// Range: 0x8009C0B0 -> 0x8009C0E8
static char * PS_Macintosh_Name(unsigned int name_index /* r3 */) {
    // References
    // -> static unsigned short mac_standard_names[259];
    // -> static char * standard_glyph_names[1067];
}

// Range: 0x8009C0E8 -> 0x8009C108
static char * PS_Standard_Strings(unsigned int sid /* r1+0x0 */) {
    // References
    // -> static const char * * t1_standard_glyphs;
}




