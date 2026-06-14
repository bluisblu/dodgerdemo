/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftstream.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80098B20 -> 0x80099460
*/
// Range: 0x80098B20 -> 0x80098B48
void FT_New_Memory_Stream(struct FT_LibraryRec_ * library /* r1+0x0 */, void * base /* r1+0x4 */, unsigned long size /* r1+0x8 */, struct FT_StreamRec_ * stream /* r1+0xC */) {}

// Range: 0x80098B48 -> 0x80098BB4
int FT_Seek_Stream(struct FT_StreamRec_ * stream /* r3 */, unsigned int pos /* r4 */) {
    // Local variables
    int error; // r3
}

// Range: 0x80098BB4 -> 0x80098BDC
int FT_Skip_Stream(struct FT_StreamRec_ * stream /* r3 */, int distance /* r4 */) {}

// Range: 0x80098BDC -> 0x80098BE4
int FT_Stream_Pos(struct FT_StreamRec_ * stream /* r3 */) {}

// Range: 0x80098BE4 -> 0x80098C14
int FT_Read_Stream(struct FT_StreamRec_ * stream /* r3 */, void * buffer /* r1+0xC */, unsigned int count /* r6 */) {}

// Range: 0x80098C14 -> 0x80098CC4
int FT_Read_Stream_At(struct FT_StreamRec_ * stream /* r27 */, unsigned int pos /* r28 */, void * buffer /* r5 */, unsigned int count /* r29 */) {
    // Local variables
    int error; // r31
    unsigned int read_bytes; // r30
}

// Range: 0x80098CC4 -> 0x80098DD8
int FT_Access_Frame(struct FT_StreamRec_ * stream /* r31 */, unsigned int count /* r27 */) {
    // Local variables
    int error; // r29
    unsigned int read_bytes; // r1+0x8
    struct FT_MemoryRec_ * memory; // r28
}

// Range: 0x80098DD8 -> 0x80098E20
void FT_Forget_Frame(struct FT_StreamRec_ * stream /* r31 */) {}

// Range: 0x80098E20 -> 0x80098E48
signed char FT_Get_Char(struct FT_StreamRec_ * stream /* r1+0x0 */) {
    // Local variables
    signed char result; // r5
}

// Range: 0x80098E48 -> 0x80098E88
signed short FT_Get_Short(struct FT_StreamRec_ * stream /* r1+0x0 */) {
    // Local variables
    char * p; // r5
    signed short result; // r6
}

// Range: 0x80098E88 -> 0x80098ED8
int FT_Get_Long(struct FT_StreamRec_ * stream /* r1+0x0 */) {
    // Local variables
    char * p; // r7
    int result; // r6
}

// Range: 0x80098ED8 -> 0x80098F84
signed char FT_Read_Char(struct FT_StreamRec_ * stream /* r30 */, int * error /* r31 */) {
    // Local variables
    char result; // r1+0x10
}

// Range: 0x80098F84 -> 0x80099058
signed short FT_Read_Short(struct FT_StreamRec_ * stream /* r29 */, int * error /* r30 */) {
    // Local variables
    char reads[2]; // r1+0x14
    char * p; // r4
    signed short result; // r31
}

// Range: 0x80099058 -> 0x80099138
int FT_Read_Long(struct FT_StreamRec_ * stream /* r31 */, int * error /* r29 */) {
    // Local variables
    char reads[4]; // r1+0x14
    char * p; // r5
    int result; // r30
}

// Range: 0x80099138 -> 0x80099460
int FT_Read_Fields(struct FT_StreamRec_ * stream /* r26 */, const struct FT_Frame_Field_ * fields /* r27 */, void * structure /* r28 */) {
    // Local variables
    int error; // r30
    unsigned char frame_accessed; // r29
    unsigned int value; // r5
    int sign_shift; // r3
    unsigned char * p; // r3
    char * p; // r1+0x8
    char * p; // r1+0x8
    char * p; // r1+0x8
}




