/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\truetype\ttinterp.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A2B14 -> 0x800A8800
*/
// Range: 0x800A2B14 -> 0x800A2B44
static int TT_Goto_CodeRange(struct TT_ExecContextRec_ * exec /* r1+0x0 */, int range /* r1+0x4 */, int IP /* r1+0x8 */) {
    // Local variables
    struct TT_CodeRange_ * coderange; // r6
}

// Range: 0x800A2B44 -> 0x800A2B5C
static int TT_Set_CodeRange(struct TT_ExecContextRec_ * exec /* r1+0x0 */, int range /* r1+0x4 */, void * base /* r1+0x8 */, int length /* r1+0xC */) {}

// Range: 0x800A2B5C -> 0x800A2B78
static int TT_Clear_CodeRange(struct TT_ExecContextRec_ * exec /* r1+0x0 */, int range /* r1+0x4 */) {}

// Range: 0x800A2B78 -> 0x800A2C48
static int TT_Destroy_Context(struct TT_ExecContextRec_ * exec /* r1+0x8 */, struct FT_MemoryRec_ * memory /* r30 */) {}

// Range: 0x800A2C48 -> 0x800A2D8C
static int Init_Context(struct TT_ExecContextRec_ * exec /* r28 */, struct TT_FaceRec_ * face /* r31 */, struct FT_MemoryRec_ * memory /* r29 */) {
    // Local variables
    int error; // r30
}

// Range: 0x800A2D8C -> 0x800A3064
int TT_Load_Context(struct TT_ExecContextRec_ * exec /* r30 */, struct TT_FaceRec_ * face /* r1+0xC */, struct TT_SizeRec_ * size /* r1+0x10 */) {
    // Local variables
    unsigned int tmp; // r27
    struct TT_MaxProfile_ * maxp; // r31
}

// Range: 0x800A3064 -> 0x800A30BC
static int TT_Save_Context(struct TT_ExecContextRec_ * exec /* r1+0x0 */, struct TT_SizeRec_ * size /* r1+0x4 */) {}

// Range: 0x800A30BC -> 0x800A3200
static int TT_Run_Context(struct TT_ExecContextRec_ * exec /* r3 */) {
    // Local variables
    int error; // r5
}

// Range: 0x800A3200 -> 0x800A32A4
struct TT_ExecContextRec_ * TT_New_Context(struct TT_FaceRec_ * face /* r29 */) {
    // Local variables
    struct TT_DriverRec_ * driver; // r31
    struct TT_ExecContextRec_ * exec; // r1+0xC
    struct FT_MemoryRec_ * memory; // r30
    int error; // r1+0x8
}

// Range: 0x800A32A4 -> 0x800A32AC
int TT_Done_Context(struct TT_ExecContextRec_ * exec /* r1+0x0 */) {}

// Range: 0x800A32AC -> 0x800A3364
static int Current_Ratio(struct TT_ExecContextRec_ * exc /* r29 */) {
    // Local variables
    int x; // r1+0x8
    int y; // r1+0x8
}

// Range: 0x800A3364 -> 0x800A3374
static long Read_CVT(struct TT_ExecContextRec_ * exc /* r1+0x0 */, unsigned int index /* r1+0x4 */) {}

// Range: 0x800A3374 -> 0x800A344C
static long Read_CVT_Stretched(struct TT_ExecContextRec_ * exc /* r28 */, unsigned int index /* r29 */) {}

// Range: 0x800A344C -> 0x800A345C
static void Write_CVT(struct TT_ExecContextRec_ * exc /* r1+0x0 */, unsigned int index /* r1+0x4 */, long value /* r1+0x8 */) {}

// Range: 0x800A345C -> 0x800A3524
static void Write_CVT_Stretched(struct TT_ExecContextRec_ * exc /* r27 */, unsigned int index /* r28 */, long value /* r29 */) {}

// Range: 0x800A3524 -> 0x800A353C
static void Move_CVT(struct TT_ExecContextRec_ * exc /* r1+0x0 */, unsigned int index /* r1+0x4 */, long value /* r1+0x8 */) {}

// Range: 0x800A353C -> 0x800A360C
static void Move_CVT_Stretched(struct TT_ExecContextRec_ * exc /* r27 */, unsigned int index /* r28 */, long value /* r29 */) {}

// Range: 0x800A360C -> 0x800A3690
static unsigned char Ins_Goto_CodeRange(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int aRange /* r1+0x4 */, unsigned int aIP /* r1+0x8 */) {
    // Local variables
    struct TT_CodeRange_ * range; // r1+0x0
}

// Range: 0x800A3690 -> 0x800A3768
static void Direct_Move(struct TT_ExecContextRec_ * exc /* r28 */, struct FT_GlyphZone_ * zone /* r31 */, unsigned short point /* r29 */, long distance /* r30 */) {
    // Local variables
    long v; // r1+0x8
}

// Range: 0x800A3768 -> 0x800A3794
static void Direct_Move_X(struct TT_ExecContextRec_ * exc /* r1+0x0 */, struct FT_GlyphZone_ * zone /* r1+0x4 */, unsigned short point /* r1+0x8 */, long distance /* r1+0xC */) {}

// Range: 0x800A3794 -> 0x800A37C4
static void Direct_Move_Y(struct TT_ExecContextRec_ * exc /* r1+0x0 */, struct FT_GlyphZone_ * zone /* r1+0x4 */, unsigned short point /* r1+0x8 */, long distance /* r1+0xC */) {}

// Range: 0x800A37C4 -> 0x800A37EC
static long Round_None(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A37EC -> 0x800A382C
static long Round_To_Grid(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A382C -> 0x800A3868
static long Round_To_Half_Grid(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A3868 -> 0x800A38A0
static long Round_Down_To_Grid(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A38A0 -> 0x800A38E0
static long Round_Up_To_Grid(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A38E0 -> 0x800A3920
static long Round_To_Double_Grid(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A3920 -> 0x800A398C
static long Round_Super(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A398C -> 0x800A39F8
static long Round_Super_45(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long distance /* r1+0x4 */, long compensation /* r1+0x8 */) {
    // Local variables
    long val; // r3
}

// Range: 0x800A39F8 -> 0x800A3A9C
static void Compute_Round(struct TT_ExecContextRec_ * exc /* r1+0x0 */, unsigned char round_mode /* r1+0x4 */) {}

// Range: 0x800A3A9C -> 0x800A3BD4
static void SetSuperRound(struct TT_ExecContextRec_ * exc /* r1+0x0 */, long GridPeriod /* r1+0x4 */, int selector /* r1+0x8 */) {}

// Range: 0x800A3BD4 -> 0x800A3C4C
static long Project(struct TT_ExecContextRec_ * exc /* r29 */, struct FT_Vector_ * v1 /* r30 */, struct FT_Vector_ * v2 /* r31 */) {}

// Range: 0x800A3C4C -> 0x800A3CC4
static long Dual_Project(struct TT_ExecContextRec_ * exc /* r29 */, struct FT_Vector_ * v1 /* r30 */, struct FT_Vector_ * v2 /* r31 */) {}

// Range: 0x800A3CC4 -> 0x800A3D3C
static long Free_Project(struct TT_ExecContextRec_ * exc /* r29 */, struct FT_Vector_ * v1 /* r30 */, struct FT_Vector_ * v2 /* r31 */) {}

// Range: 0x800A3D3C -> 0x800A3D4C
static long Project_x(struct TT_ExecContextRec_ * exc /* r1+0x0 */, struct FT_Vector_ * v1 /* r1+0x4 */, struct FT_Vector_ * v2 /* r1+0x8 */) {}

// Range: 0x800A3D4C -> 0x800A3D5C
static long Project_y(struct TT_ExecContextRec_ * exc /* r1+0x0 */, struct FT_Vector_ * v1 /* r1+0x4 */, struct FT_Vector_ * v2 /* r1+0x8 */) {}

// Range: 0x800A3D5C -> 0x800A3EE4
static void Compute_Funcs(struct TT_ExecContextRec_ * exc /* r1+0x0 */) {}

// Range: 0x800A3EE4 -> 0x800A4098
static unsigned char Normalize(long Vx /* r29 */, long Vy /* r30 */, struct FT_UnitVector_ * R /* r31 */) {
    // Local variables
    long u; // r4
    long v; // r6
    long d; // r27
    int shift; // r28
    unsigned int H; // r7
    unsigned int L; // r3
    unsigned int L2; // r1+0x8
    unsigned int hi; // r1+0x8
    unsigned int lo; // r5
    unsigned int med; // r7
}

// Range: 0x800A4098 -> 0x800A4144
static unsigned char SkipCode(struct TT_ExecContextRec_ * exc /* r1+0x0 */) {
    // References
    // -> static signed char opcode_length[256];
}

// Range: 0x800A4144 -> 0x800A4264
static void Ins_IF(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int * args /* r1+0x4 */) {
    // Local variables
    int nIfs; // r4
    unsigned char Out; // r1+0x0

    // References
    // -> static signed char opcode_length[256];
}

// Range: 0x800A4264 -> 0x800A43E0
static void Ins_FDEF(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int * args /* r1+0x4 */) {
    // Local variables
    unsigned int n; // r7
    struct TT_DefRecord_ * rec; // r5
    struct TT_DefRecord_ * limit; // r4

    // References
    // -> static signed char opcode_length[256];
}

// Range: 0x800A43E0 -> 0x800A44F8
static void Ins_CALL(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned int F; // r1+0x8
    struct TT_CallRec_ * pCrec; // r5
    struct TT_DefRecord_ * def; // r7
    struct TT_DefRecord_ * limit; // r3
}

// Range: 0x800A44F8 -> 0x800A461C
static void Ins_LOOPCALL(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned int F; // r1+0x8
    struct TT_CallRec_ * pCrec; // r6
    struct TT_DefRecord_ * def; // r8
    struct TT_DefRecord_ * limit; // r3
}

// Range: 0x800A461C -> 0x800A47A4
static void Ins_IDEF(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int * args /* r1+0x4 */) {
    // Local variables
    struct TT_DefRecord_ * def; // r7
    struct TT_DefRecord_ * limit; // r8

    // References
    // -> static signed char opcode_length[256];
}

// Range: 0x800A47A4 -> 0x800A48C4
static void Ins_SDPVTL(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    int A; // r4
    int B; // r5
    int C; // r1+0x8
    unsigned short p1; // r3
    unsigned short p2; // r5
    struct FT_Vector_ * v1; // r6
    struct FT_Vector_ * v2; // r3
    struct FT_Vector_ * v1; // r6
    struct FT_Vector_ * v2; // r3
}

// Range: 0x800A48C4 -> 0x800A4974
static void Ins_SCANCTRL(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int * args /* r1+0x4 */) {
    // Local variables
    int A; // r1+0x0
}

// Range: 0x800A4974 -> 0x800A4A14
static void Ins_FLIPPT(struct TT_ExecContextRec_ * exc /* r1+0x0 */, int * args /* r1+0x4 */) {
    // Local variables
    unsigned short point; // r5
}

// Range: 0x800A4A14 -> 0x800A4BA4
static unsigned char Compute_Point_Displacement(struct TT_ExecContextRec_ * exc /* r29 */, long * x /* r30 */, long * y /* r31 */, struct FT_GlyphZone_ * zone /* r1+0x14 */, unsigned short * refp /* r1+0x18 */) {
    // Local variables
    struct FT_GlyphZone_ zp; // r1+0x1C
    unsigned short p; // r8
    long d; // r28
}

// Range: 0x800A4BA4 -> 0x800A4CE8
static void Ins_SHP(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    struct FT_GlyphZone_ zp; // r1+0x1C
    unsigned short refp; // r1+0x18
    long dx; // r1+0x14
    long dy; // r1+0x10
    unsigned short point; // r7
}

// Range: 0x800A4CE8 -> 0x800A4E48
static void Ins_SHC(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    struct FT_GlyphZone_ zp; // r1+0x1C
    unsigned short refp; // r1+0x18
    long dx; // r1+0x14
    long dy; // r1+0x10
    signed short contour; // r29
    unsigned short first_point; // r5
    unsigned short last_point; // r1+0x8
    unsigned short i; // r9
}

// Range: 0x800A4E48 -> 0x800A4F50
static void Ins_SHZ(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    struct FT_GlyphZone_ zp; // r1+0x1C
    unsigned short refp; // r1+0x18
    long dx; // r1+0x14
    long dy; // r1+0x10
    unsigned short last_point; // r1+0x8
    unsigned short i; // r9
}

// Range: 0x800A4F50 -> 0x800A50A4
static void Ins_SHPIX(struct TT_ExecContextRec_ * exc /* r30 */, int * args /* r29 */) {
    // Local variables
    long dx; // r1+0x8
    long dy; // r1+0x8
    unsigned short point; // r6
}

// Range: 0x800A50A4 -> 0x800A51DC
static void Ins_MSIRP(struct TT_ExecContextRec_ * exc /* r29 */, int * args /* r30 */) {
    // Local variables
    unsigned short point; // r31
    long distance; // r1+0x8
}

// Range: 0x800A51DC -> 0x800A5368
static void Ins_MIAP(struct TT_ExecContextRec_ * exc /* r29 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned int cvtEntry; // r4
    unsigned short point; // r31
    long distance; // r30
    long org_dist; // r28

    // References
    // -> static struct FT_Vector_ Null_Vector;
}

// Range: 0x800A5368 -> 0x800A5534
static void Ins_MDRP(struct TT_ExecContextRec_ * exc /* r29 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned short point; // r30
    long org_dist; // r28
    long distance; // r27
}

// Range: 0x800A5534 -> 0x800A5828
static void Ins_MIRP(struct TT_ExecContextRec_ * exc /* r27 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned short point; // r30
    unsigned int cvtEntry; // r4
    long cvt_dist; // r29
    long distance; // r6
    long cur_dist; // r1+0x8
    long org_dist; // r28
}

// Range: 0x800A5828 -> 0x800A5950
static void Ins_ALIGNRP(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned short point; // r3
    long distance; // r1+0x8
}

// Range: 0x800A5950 -> 0x800A5B94
static void Ins_ISECT(struct TT_ExecContextRec_ * exc /* r22 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned short point; // r27
    unsigned short a0; // r5
    unsigned short a1; // r8
    unsigned short b0; // r7
    unsigned short b1; // r3
    long discriminant; // r20
    long dx; // r19
    long dy; // r18
    long dax; // r26
    long day; // r25
    long dbx; // r24
    long dby; // r23
    long val; // r18
}

// Range: 0x800A5B94 -> 0x800A5DF0
static void Ins_IP(struct TT_ExecContextRec_ * exc /* r23 */, int * args /* r1+0xC */) {
    // Local variables
    long org_a; // r27
    long org_b; // r26
    long org_x; // r1+0x8
    long cur_a; // r25
    long cur_b; // r3
    long cur_x; // r1+0x8
    long distance; // r6
    unsigned short point; // r24

    // References
    // -> static struct FT_Vector_ Null_Vector;
}

// Range: 0x800A5DF0 -> 0x800A5F94
static void Interp(unsigned int p1 /* r3 */, unsigned int p2 /* r23 */, unsigned int ref1 /* r1+0x10 */, unsigned int ref2 /* r1+0x14 */, struct LOC_Ins_IUP * LINK /* r24 */) {
    // Local variables
    unsigned int i; // r1+0x8
    long x; // r1+0x8
    long x1; // r1+0x8
    long x2; // r1+0x8
    long d1; // r26
    long d2; // r25
}

// Range: 0x800A5F94 -> 0x800A633C
static void Ins_IUP(struct TT_ExecContextRec_ * exc /* r24 */, int * args /* r1+0xC */) {
    // Local variables
    struct LOC_Ins_IUP V; // r1+0x18
    unsigned char mask; // r4
    unsigned int first_point; // r29
    unsigned int end_point; // r28
    unsigned int first_touched; // r23
    unsigned int cur_touched; // r27
    unsigned int point; // r26
    signed short contour; // r25
}

// Range: 0x800A633C -> 0x800A647C
static void Ins_DELTAP(struct TT_ExecContextRec_ * exc /* r29 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned int k; // r31
    unsigned int nump; // r30
    unsigned short A; // r28
    unsigned int C; // r27
    int B; // r26
}

// Range: 0x800A647C -> 0x800A65B0
static void Ins_DELTAC(struct TT_ExecContextRec_ * exc /* r29 */, int * args /* r1+0xC */) {
    // Local variables
    unsigned int nump; // r31
    unsigned int k; // r30
    unsigned int A; // r28
    unsigned int C; // r27
    int B; // r26
}

// Range: 0x800A65B0 -> 0x800A66A0
static void Ins_UNKNOWN(struct TT_ExecContextRec_ * exc /* r31 */, int * args /* r1+0xC */) {
    // Local variables
    struct TT_DefRecord_ * def; // r6
    struct TT_DefRecord_ * limit; // r4
    struct TT_CallRec_ * call; // r5
}

// Range: 0x800A66A0 -> 0x800A8800
int TT_RunIns(struct TT_ExecContextRec_ * exc /* r31 */) {
    // Local variables
    int ins_counter; // r28
    int * args; // r30
    unsigned char opcode; // r1+0x8
    signed short AA; // r3
    signed short BB; // r4
    int X; // r4
    int Y; // r5
    int X; // r4
    int Y; // r5
    int L; // r3
    int L; // r1+0x8
    unsigned int I; // r1+0x8
    unsigned int I; // r1+0x8
    unsigned int I; // r4
    unsigned int I; // r4
    unsigned int I; // r1+0x8
    struct TT_DefRecord_ * def; // r5
    struct TT_DefRecord_ * limit; // r4
    struct TT_CallRec_ * callrec; // r6

    // References
    // -> static struct FT_Vector_ Null_Vector;
    // -> static unsigned char Pop_Push_Count[256];
    // -> static signed char opcode_length[256];
}




