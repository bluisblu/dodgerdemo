/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftraster.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80099614 -> 0x8009BC70
*/
// total size: 0x8
struct _TPoint {
    // Members
    long x; // offset 0x0, size 0x4
    long y; // offset 0x4, size 0x4
};
// total size: 0x8
struct FT_Vector_ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x14
struct FT_Outline_ {
    // Members
    signed short n_contours; // offset 0x0, size 0x2
    signed short n_points; // offset 0x2, size 0x2
    struct FT_Vector_ * points; // offset 0x4, size 0x4
    char * tags; // offset 0x8, size 0x4
    signed short * contours; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
// total size: 0x20
struct _TProfile {
    // Members
    long X; // offset 0x0, size 0x4
    struct _TProfile * link; // offset 0x4, size 0x4
    long * offset; // offset 0x8, size 0x4
    int flow; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int start; // offset 0x14, size 0x4
    int countL; // offset 0x18, size 0x4
    struct _TProfile * next; // offset 0x1C, size 0x4
};
// total size: 0x18
struct FT_Bitmap_ {
    // Members
    int rows; // offset 0x0, size 0x4
    int width; // offset 0x4, size 0x4
    int pitch; // offset 0x8, size 0x4
    void * buffer; // offset 0xC, size 0x4
    signed short num_grays; // offset 0x10, size 0x2
    char pixel_mode; // offset 0x12, size 0x1
    char palette_mode; // offset 0x13, size 0x1
    void * palette; // offset 0x14, size 0x4
};
// total size: 0x8
struct _TBand {
    // Members
    int y_min; // offset 0x0, size 0x4
    int y_max; // offset 0x4, size 0x4
};
// total size: 0x32C
struct FT_RasterRec_ {
    // Members
    long * cursor; // offset 0x0, size 0x4
    long * pool; // offset 0x4, size 0x4
    long * pool_size; // offset 0x8, size 0x4
    long * pool_limit; // offset 0xC, size 0x4
    int bit_width; // offset 0x10, size 0x4
    unsigned char * bit_buffer; // offset 0x14, size 0x4
    unsigned char * pix_buffer; // offset 0x18, size 0x4
    struct _TPoint last; // offset 0x1C, size 0x8
    long minY; // offset 0x24, size 0x4
    long maxY; // offset 0x28, size 0x4
    int error; // offset 0x2C, size 0x4
    struct FT_Outline_ * outline; // offset 0x30, size 0x4
    int n_points; // offset 0x34, size 0x4
    int n_contours; // offset 0x38, size 0x4
    int n_extrema; // offset 0x3C, size 0x4
    struct _TPoint * arc; // offset 0x40, size 0x4
    int num_profs; // offset 0x44, size 0x4
    char fresh; // offset 0x48, size 0x1
    char joint; // offset 0x49, size 0x1
    struct _TProfile * cur_prof; // offset 0x4C, size 0x4
    struct _TProfile * start_prof; // offset 0x50, size 0x4
    struct _TProfile * first_prof; // offset 0x54, size 0x4
    enum _TDirection state; // offset 0x58, size 0x4
    struct FT_Bitmap_ target; // offset 0x5C, size 0x18
    int trace_bit; // offset 0x74, size 0x4
    int trace_pix; // offset 0x78, size 0x4
    int trace_incr; // offset 0x7C, size 0x4
    struct Raster_Render_ render; // offset 0x80, size 0x14
    int scale_shift; // offset 0x94, size 0x4
    int scale_delta; // offset 0x98, size 0x4
    char dropout_mode; // offset 0x9C, size 0x1
    char second_pass; // offset 0x9D, size 0x1
    char flipped; // offset 0x9E, size 0x1
    struct _TBand band_stack[16]; // offset 0xA0, size 0x80
    int band_top; // offset 0x120, size 0x4
    struct _TPoint arcs[65]; // offset 0x124, size 0x208
};
enum _TDirection {
    Unknown = 0,
    Ascending = 1,
    Descending = 2,
    Flat = 3,
};
// Range: 0x80099614 -> 0x800996F4
static int New_Profile(struct FT_RasterRec_ * raster /* r1+0x0 */, enum _TDirection direction /* r1+0x4 */) {
    // Local variables
    struct _TProfile * cur; // r6
}

// Range: 0x800996F4 -> 0x8009978C
static int End_Profile(struct FT_RasterRec_ * raster /* r1+0x0 */) {
    // Local variables
    int h; // r1+0x0
    struct _TProfile * new; // r6
}

// Range: 0x8009978C -> 0x800998E8
static int Insert_Extrema(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r4 */) {
    // Local variables
    long * extrema; // r1+0x0
    int y2; // r7
    int n; // r8
}

// Range: 0x800998E8 -> 0x80099A20
static int Finalize_Profile_Table(struct FT_RasterRec_ * raster /* r29 */) {
    // Local variables
    int n; // r31
    int bottom; // r4
    int top; // r28
    struct _TProfile * p; // r30
}

// Range: 0x80099A20 -> 0x80099BD4
static int Line_Up(struct FT_RasterRec_ * raster /* r1+0x8 */, long x1 /* r4 */, long y1 /* r5 */, long x2 /* r6 */, long y2 /* r7 */, long miny /* r1+0x1C */, long maxy /* r1+0x20 */) {
    // Local variables
    long Dx; // r1+0x8
    long Dy; // r10
    int e1; // r7
    int e2; // r9
    int f1; // r5
    int f2; // r12
    int size; // r1+0x8
    long Ix; // r6
    long Rx; // r1+0x8
    long Ax; // r5
    long * top; // r7
    long x; // r31
    long y; // r11
}

// Range: 0x80099BD4 -> 0x80099D44
static long Dynamic_Bezier_Threshold(int degree /* r1+0x4 */, struct _TPoint * arc /* r1+0x8 */) {
    // Local variables
    long min_x; // r3
    long max_x; // r6
    long min_y; // r7
    long max_y; // r10
    long A; // r12
    long B; // r4
    long wide_x; // r3
    long wide_y; // r1+0x0
    long threshold; // r3
    struct _TPoint * cur; // r11
    struct _TPoint * limit; // r3
    long x; // r1+0x0
    long y; // r12
}

// Range: 0x80099D44 -> 0x80099F48
static int Bezier_Up(struct FT_RasterRec_ * raster /* r21 */, int degree /* r22 */, void (* splitter)(struct _TPoint *) /* r23 */, long miny /* r1+0x14 */, long maxy /* r1+0x18 */) {
    // Local variables
    long y1; // r3
    long y2; // r1+0x8
    long e; // r28
    long e2; // r27
    long e0; // r4
    long threshold; // r1+0x8
    struct _TPoint * arc; // r26
    struct _TPoint * start_arc; // r25
    long * top; // r24
}

// Range: 0x80099F48 -> 0x80099FCC
static void Split_Conic(struct _TPoint * base /* r1+0x0 */) {
    // Local variables
    long a; // r1+0x0
    long b; // r4
}

// Range: 0x80099FCC -> 0x8009A068
static void Push_Conic(struct FT_RasterRec_ * raster /* r1+0x0 */, struct FT_Vector_ * p2 /* r1+0x4 */, struct FT_Vector_ * p3 /* r1+0x8 */) {
    // Local variables
    struct _TPoint * arc; // r9
    long x; // r4
    long y; // r1+0x0
    long x; // r3
    long y; // r1+0x0
}

// Range: 0x8009A068 -> 0x8009A144
static void Split_Cubic(struct _TPoint * base /* r1+0x0 */) {
    // Local variables
    long a; // r6
    long b; // r7
    long c; // r5
    long d; // r7
}

// Range: 0x8009A144 -> 0x8009A220
static void Push_Cubic(struct FT_RasterRec_ * raster /* r1+0x0 */, struct FT_Vector_ * p2 /* r1+0x4 */, struct FT_Vector_ * p3 /* r1+0x8 */, struct FT_Vector_ * p4 /* r1+0xC */) {
    // Local variables
    struct _TPoint * arc; // r7
    long x; // r4
    long y; // r1+0x0
    long x; // r4
    long y; // r1+0x0
    long x; // r3
    long y; // r1+0x0
}

// Range: 0x8009A220 -> 0x8009A2C8
static int Check_Contour(struct FT_RasterRec_ * raster /* r30 */) {
    // Local variables
    struct _TProfile * lastProfile; // r31
}

// Range: 0x8009A2C8 -> 0x8009A3E8
static int Move_To(struct FT_Vector_ * to /* r30 */, struct FT_RasterRec_ * raster /* r31 */) {
    // Local variables
    long scaled_x; // r3
    long scaled_y; // r1+0x8
}

// Range: 0x8009A3E8 -> 0x8009A57C
static int Line_To(struct FT_Vector_ * to /* r1+0x8 */, struct FT_RasterRec_ * raster /* r31 */) {
    // Local variables
    long x; // r29
    long scaled_x; // r3
    long y; // r28
    long scaled_y; // r1+0x8
    enum _TDirection new_state; // r30
}

// Range: 0x8009A57C -> 0x8009A7D4
static int Conic_To(struct FT_Vector_ * control /* r6 */, struct FT_Vector_ * to /* r1+0xC */, struct FT_RasterRec_ * raster /* r27 */) {
    // Local variables
    long y1; // r4
    long y2; // r5
    long y3; // r29
    long x3; // r28
    long ymin; // r1+0x8
    long ymax; // r6
    enum _TDirection state_bez; // r25
}

// Range: 0x8009A7D4 -> 0x8009A9E0
static int Cubic_To(struct FT_Vector_ * control1 /* r8 */, struct FT_Vector_ * control2 /* r7 */, struct FT_Vector_ * to /* r1+0x10 */, struct FT_RasterRec_ * raster /* r27 */) {
    // Local variables
    long y1; // r4
    long y2; // r5
    long y3; // r6
    long y4; // r29
    long x4; // r28
    long ymin1; // r1+0x8
    long ymax1; // r7
    long ymin2; // r8
    long ymax2; // r5
    enum _TDirection state_bez; // r25
}

// total size: 0x10
struct FT_Outline_Funcs_ {
    // Members
    int (* move_to)(struct FT_Vector_ *, void *); // offset 0x0, size 0x4
    int (* line_to)(struct FT_Vector_ *, void *); // offset 0x4, size 0x4
    int (* conic_to)(struct FT_Vector_ *, struct FT_Vector_ *, void *); // offset 0x8, size 0x4
    int (* cubic_to)(struct FT_Vector_ *, struct FT_Vector_ *, struct FT_Vector_ *, void *); // offset 0xC, size 0x4
};
static struct FT_Outline_Funcs_ interface$432; // size: 0x10, address: 0x8010C760
// Range: 0x8009A9E0 -> 0x8009AA88
static void Sort(struct _TProfile * * list /* r3 */) {
    // Local variables
    struct _TProfile * * old; // r5
    struct _TProfile * current; // r6
    struct _TProfile * next; // r7
}

// Range: 0x8009AA88 -> 0x8009AAC8
static void Vertical_Sweep_Init(struct FT_RasterRec_ * raster /* r1+0x0 */, int * min /* r1+0x4 */, int * max /* r1+0x8 */) {
    // Local variables
    long pitch; // r6
}

// Range: 0x8009AAC8 -> 0x8009ABEC
static void Vertical_Sweep_Span(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, long x1 /* r1+0x8 */, long x2 /* r1+0xC */) {
    // Local variables
    long e1; // r5
    long e2; // r7
    int c1; // r8
    int c2; // r9
    unsigned char f1; // r4
    unsigned char f2; // r5
    unsigned char * target; // r10
}

// Range: 0x8009ABEC -> 0x8009AC48
static int Vertical_Test_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */) {
    // Local variables
    int c1; // r7
}

// Range: 0x8009AC48 -> 0x8009AC8C
static void Vertical_Set_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */, int color /* r1+0xC */) {}

// Range: 0x8009AC8C -> 0x8009ACA0
static void Vertical_Sweep_Step(struct FT_RasterRec_ * raster /* r1+0x0 */) {}

// total size: 0x14
struct Raster_Render_ {
    // Members
    void (* init)(struct FT_RasterRec_ *, int *, int *); // offset 0x0, size 0x4
    void (* span)(struct FT_RasterRec_ *, int, long, long); // offset 0x4, size 0x4
    void (* step)(struct FT_RasterRec_ *); // offset 0x8, size 0x4
    int (* test_pixel)(struct FT_RasterRec_ *, int, int); // offset 0xC, size 0x4
    void (* set_pixel)(struct FT_RasterRec_ *, int, int, int); // offset 0x10, size 0x4
};
static struct Raster_Render_ vertical_render_mono; // size: 0x14, address: 0x800F9E90
// Range: 0x8009ACA0 -> 0x8009ACA4
static void Horizontal_Sweep_Init(struct FT_RasterRec_ * raster /* r1+0x0 */, int * min /* r1+0x4 */, int * max /* r1+0x8 */) {}

// Range: 0x8009ACA4 -> 0x8009AD24
static void Horizontal_Sweep_Span(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, long x1 /* r1+0x8 */, long x2 /* r1+0xC */) {
    // Local variables
    long e1; // r1+0x0
    unsigned char * bits; // r5
    unsigned char f1; // r6
    long pitch; // r3
    long offset; // r7
}

// Range: 0x8009AD24 -> 0x8009AD84
static int Horizontal_Test_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */) {
    // Local variables
    char * bits; // r6
    int f1; // r1+0x0
}

// Range: 0x8009AD84 -> 0x8009ADE4
static void Horizontal_Set_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */, int color /* r1+0xC */) {
    // Local variables
    char * bits; // r7
    int f1; // r1+0x0
    long pitch; // r3
    long offset; // r5
}

// Range: 0x8009ADE4 -> 0x8009ADE8
static void Horizontal_Sweep_Step(struct FT_RasterRec_ * raster /* r1+0x0 */) {}

static struct Raster_Render_ horizontal_render_mono; // size: 0x14, address: 0x800F9EA4
// Range: 0x8009ADE8 -> 0x8009AE28
static void Vertical_Gray_Sweep_Init(struct FT_RasterRec_ * raster /* r1+0x0 */, int * min /* r1+0x4 */, int * max /* r1+0x8 */) {
    // Local variables
    long pitch; // r6
}

// Range: 0x8009AE28 -> 0x8009AF4C
static void Vertical_Gray_Sweep_Span(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, long x1 /* r4 */, long x2 /* r8 */) {
    // Local variables
    long e1; // r6
    long e2; // r7
    unsigned char * target; // r5
}

// Range: 0x8009AF4C -> 0x8009AF54
static int Vertical_Gray_Test_Pixel(int y /* r1+0x4 */, int x /* r1+0x8 */) {}

// Range: 0x8009AF54 -> 0x8009AFA8
static void Vertical_Gray_Set_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */, int color /* r1+0xC */) {
    // Local variables
    unsigned char * pixel; // r1+0x0
}

// Range: 0x8009AFA8 -> 0x8009AFBC
static void Vertical_Gray_Sweep_Step(struct FT_RasterRec_ * raster /* r1+0x0 */) {}

static struct Raster_Render_ vertical_render_gray; // size: 0x14, address: 0x800F9EB8
// Range: 0x8009AFBC -> 0x8009AFC0
static void Horizontal_Gray_Sweep_Init(struct FT_RasterRec_ * raster /* r1+0x0 */, int * min /* r1+0x4 */, int * max /* r1+0x8 */) {}

// Range: 0x8009AFC0 -> 0x8009B104
static void Horizontal_Gray_Sweep_Span(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, long x1 /* r10 */, long x2 /* r1+0xC */) {
    // Local variables
    long e1; // r7
    long e2; // r8
    int incr; // r9
    unsigned char * bits; // r4
    unsigned char b; // r3
}

// Range: 0x8009B104 -> 0x8009B10C
static int Horizontal_Gray_Test_Pixel(int y /* r1+0x4 */, int x /* r1+0x8 */) {}

// Range: 0x8009B10C -> 0x8009B178
static void Horizontal_Gray_Set_Pixel(struct FT_RasterRec_ * raster /* r1+0x0 */, int y /* r1+0x4 */, int x /* r1+0x8 */, int color /* r1+0xC */) {
    // Local variables
    unsigned char * pixel; // r7
    long pitch; // r3
}

// Range: 0x8009B178 -> 0x8009B17C
static void Gray_Ignore() {}

static struct Raster_Render_ horizontal_render_gray; // size: 0x14, address: 0x800F9ECC
// Range: 0x8009B17C -> 0x8009B6D0
static int Draw_Sweep(struct FT_RasterRec_ * raster /* r23 */) {
    // Local variables
    int y; // r29
    int y_change; // r28
    int y_height; // r27
    struct _TProfile * P; // r6
    struct _TProfile * Q; // r7
    struct _TProfile * P_Left; // r26
    struct _TProfile * P_Right; // r5
    int min_Y; // r1+0x20
    int max_Y; // r1+0x1C
    int top; // r3
    int bottom; // r1+0x8
    int dropouts; // r25
    long x1; // r5
    long x2; // r6
    long e1; // r1+0x8
    long e2; // r1+0x8
    struct _TProfile * wait; // r1+0x18
    struct _TProfile * draw; // r1+0x14
    struct _TProfile * prof; // r6
    struct _TProfile * next; // r7
    int window; // r26
    struct _TProfile * left; // r8
    struct _TProfile * next; // r30
    long xs; // r1+0x8
    struct _TProfile * prof; // r5
    struct _TProfile * next; // r6
    long e1; // r5
    long e2; // r24
}

// Range: 0x8009B6D0 -> 0x8009B860
static int Render_Single_Pass(struct FT_RasterRec_ * raster /* r30 */, int flipped /* r1+0xC */) {
    // Local variables
    struct _TBand * band; // r31
    int bottom; // r1+0x8
    int top; // r1+0x8
    int half; // r1+0x8

    // References
    // -> static struct FT_Outline_Funcs_ interface$432;
}

// Range: 0x8009B860 -> 0x8009B9A8
static int Raster_Render1(struct FT_RasterRec_ * raster /* r30 */) {
    // Local variables
    int error; // r3

    // References
    // -> static struct Raster_Render_ horizontal_render_mono;
    // -> static struct Raster_Render_ vertical_render_mono;
}

// Range: 0x8009B9A8 -> 0x8009BAD8
static int Raster_Render8(struct FT_RasterRec_ * raster /* r30 */) {
    // Local variables
    int error; // r3

    // References
    // -> static struct Raster_Render_ horizontal_render_gray;
    // -> static struct Raster_Render_ vertical_render_gray;
}

// Range: 0x8009BAD8 -> 0x8009BC2C
int FT_Raster_Render(struct FT_RasterRec_ * raster /* r3 */, struct FT_Outline_ * outline /* r1+0xC */, struct FT_Bitmap_ * target_map /* r1+0x10 */) {}

// Range: 0x8009BC2C -> 0x8009BC70
int FT_Raster_Init(struct FT_RasterRec_ * raster /* r1+0x0 */, const char * pool_base /* r1+0x4 */, long pool_size /* r1+0x8 */) {}

enum FT_Glyph_Tag_ {
    ft_glyph_format_none = 0,
    ft_glyph_format_composite = 1668246896,
    ft_glyph_format_bitmap = 1651078259,
    ft_glyph_format_outline = 1869968492,
    ft_glyph_format_plotter = 1886154612,
};
// total size: 0x14
struct FT_Raster_Interface_ {
    // Members
    long size; // offset 0x0, size 0x4
    enum FT_Glyph_Tag_ format_tag; // offset 0x4, size 0x4
    int (* init)(struct FT_RasterRec_ *, char *, long); // offset 0x8, size 0x4
    int (* set_mode)(struct FT_RasterRec_ *, char *, char *); // offset 0xC, size 0x4
    int (* render)(struct FT_RasterRec_ *, void *, struct FT_Bitmap_ *); // offset 0x10, size 0x4
};
struct FT_Raster_Interface_ ft_default_raster; // size: 0x14, address: 0x8010C770



