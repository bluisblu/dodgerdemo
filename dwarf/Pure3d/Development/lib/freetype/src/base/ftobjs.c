/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftobjs.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80096698 -> 0x80098B20
*/
// Range: 0x80096698 -> 0x80096714
int FT_Alloc(struct FT_MemoryRec_ * memory /* r3 */, int size /* r30 */, void * P /* r31 */) {}

// Range: 0x80096714 -> 0x800967E4
int FT_Realloc(struct FT_MemoryRec_ * memory /* r3 */, int current /* r4 */, int size /* r30 */, void * P /* r31 */) {
    // Local variables
    void * Q; // r1+0x8
}

// Range: 0x800967E4 -> 0x8009682C
void FT_Free(struct FT_MemoryRec_ * memory /* r3 */, void * P /* r31 */) {}

// Range: 0x8009682C -> 0x800969A8
static int ft_new_input_stream(struct FT_LibraryRec_ * library /* r27 */, struct FT_Open_Args_ * args /* r28 */, struct FT_StreamRec_ * * astream /* r29 */) {
    // Local variables
    int error; // r31
    struct FT_MemoryRec_ * memory; // r30
    struct FT_StreamRec_ * stream; // r1+0x14
}

// Range: 0x800969A8 -> 0x80096A08
static void destroy_size(struct FT_MemoryRec_ * memory /* r31 */, struct FT_SizeRec_ * size /* r1+0xC */, struct FT_DriverRec_ * driver /* r1+0x10 */) {}

// Range: 0x80096A08 -> 0x80096B24
static void destroy_face(struct FT_MemoryRec_ * memory /* r31 */, struct FT_FaceRec_ * face /* r1+0xC */, struct FT_DriverRec_ * driver /* r29 */) {}

// Range: 0x80096B24 -> 0x80096B60
struct FT_Glyph_Format_ * FT_Get_Glyph_Format(struct FT_LibraryRec_ * library /* r1+0x0 */, enum FT_Glyph_Tag_ format_tag /* r1+0x4 */) {
    // Local variables
    struct FT_Glyph_Format_ * cur; // r3
    struct FT_Glyph_Format_ * limit; // r5
}

// Range: 0x80096B60 -> 0x80096D44
int FT_Set_Raster(struct FT_LibraryRec_ * library /* r28 */, struct FT_Raster_Interface_ * interface /* r29 */, struct FT_RasterRec_ * raster /* r1+0x10 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
    int error; // r27
    struct FT_Glyph_Format_ * format; // r1+0x8
}

// Range: 0x80096D44 -> 0x80096E90
int FT_New_Library(struct FT_MemoryRec_ * memory /* r29 */, struct FT_LibraryRec_ * * alibrary /* r31 */) {
    // Local variables
    struct FT_LibraryRec_ * library; // r1+0x24
    int error; // r1+0x8
    struct FT_Glyph_Format_ outline_format; // r1+0x14
}

// Range: 0x80096E90 -> 0x80097044
int FT_Done_Library(struct FT_LibraryRec_ * library /* r1+0x8 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
    int n; // r29
    struct FT_DriverRec_ * driver; // r1+0x8
    struct FT_Glyph_Format_ * cur; // r27
    struct FT_Glyph_Format_ * limit; // r28
}

// Range: 0x80097044 -> 0x800971B0
int FT_Add_Driver(struct FT_LibraryRec_ * library /* r28 */, const struct FT_DriverInterface_ * driver_interface /* r29 */) {
    // Local variables
    int error; // r31
    struct FT_DriverRec_ * driver; // r1+0x10
    struct FT_MemoryRec_ * memory; // r30
}

// Range: 0x800971B0 -> 0x80097248
struct FT_DriverRec_ * FT_Get_Driver(struct FT_LibraryRec_ * library /* r1+0x8 */, char * driver_name /* r29 */) {
    // Local variables
    struct FT_DriverRec_ * * cur; // r31
    struct FT_DriverRec_ * * limit; // r30
}

// Range: 0x80097248 -> 0x8009736C
static int open_face(struct FT_DriverRec_ * driver /* r25 */, struct FT_StreamRec_ * stream /* r26 */, int face_index /* r27 */, struct FT_FaceRec_ * * aface /* r28 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r30
    struct FT_DriverInterface_ * interface; // r29
    struct FT_FaceRec_ * face; // r1+0x18
    int error; // r31
}

// Range: 0x8009736C -> 0x80097514
int FT_Open_Face(struct FT_LibraryRec_ * library /* r25 */, struct FT_Open_Args_ * args /* r27 */, int face_index /* r26 */, struct FT_FaceRec_ * * aface /* r31 */) {
    // Local variables
    int error; // r30
    struct FT_DriverRec_ * driver; // r3
    struct FT_MemoryRec_ * memory; // r29
    struct FT_StreamRec_ * stream; // r1+0x28
    struct FT_FaceRec_ * face; // r1+0x24
    struct FT_ListNodeRec_ * node; // r1+0x20
    struct FT_DriverRec_ * * cur; // r28
    struct FT_DriverRec_ * * limit; // r27
    struct FT_GlyphSlotRec_ * slot; // r1+0x1C
    struct FT_SizeRec_ * size; // r1+0x18
}

// Range: 0x80097514 -> 0x800976A8
int FT_Done_Face(struct FT_FaceRec_ * face /* r28 */) {
    // Local variables
    int error; // r3
    struct FT_DriverRec_ * driver; // r29
    struct FT_MemoryRec_ * memory; // r31
    struct FT_ListNodeRec_ * node; // r1+0x14
}

// Range: 0x800976A8 -> 0x80097840
int FT_New_Size(struct FT_FaceRec_ * face /* r30 */, struct FT_SizeRec_ * * asize /* r27 */) {
    // Local variables
    int error; // r28
    struct FT_MemoryRec_ * memory; // r31
    struct FT_DriverInterface_ * interface; // r1+0x8
    struct FT_SizeRec_ * size; // r1+0x14
    struct FT_ListNodeRec_ * node; // r1+0x10
}

// Range: 0x80097840 -> 0x80097908
int FT_Set_Pixel_Sizes(struct FT_FaceRec_ * face /* r27 */, unsigned int pixel_width /* r28 */, unsigned int pixel_height /* r29 */) {
    // Local variables
    int error; // r3
    struct FT_DriverInterface_ * interface; // r31
    struct FT_Size_Metrics_ * metrics; // r30
}

// Range: 0x80097908 -> 0x80097A3C
int FT_New_GlyphSlot(struct FT_FaceRec_ * face /* r29 */, struct FT_GlyphSlotRec_ * * aslot /* r30 */) {
    // Local variables
    int error; // r28
    struct FT_DriverInterface_ * interface; // r27
    struct FT_MemoryRec_ * memory; // r31
    struct FT_GlyphSlotRec_ * slot; // r1+0x10
}

// Range: 0x80097A3C -> 0x80097AD8
void FT_Done_GlyphSlot(struct FT_GlyphSlotRec_ * slot /* r1+0x8 */) {
    // Local variables
    struct FT_DriverRec_ * driver; // r1+0x8
    struct FT_MemoryRec_ * memory; // r31
    struct FT_GlyphSlotRec_ * * parent; // r1+0x8
    struct FT_GlyphSlotRec_ * cur; // r6
}

// Range: 0x80097AD8 -> 0x80097D20
int FT_Get_Glyph_Bitmap(struct FT_FaceRec_ * face /* r29 */, unsigned int glyph_index /* r5 */, unsigned int load_flags /* r7 */, int grays /* r30 */) {
    // Local variables
    int error; // r31
    struct FT_BBox_ cbox; // r1+0x20
    int width; // r28
    int height; // r27
    int pitch; // r26
    int size; // r25
}

// Range: 0x80097D20 -> 0x80097D70
unsigned int FT_Get_Char_Index(struct FT_FaceRec_ * face /* r3 */, unsigned int charcode /* r4 */) {
    // Local variables
    unsigned int result; // r5
}

// Range: 0x80097D70 -> 0x80098158
int FT_Outline_Decompose(struct FT_Outline_ * outline /* r27 */, struct FT_Outline_Funcs_ * interface /* r28 */, void * user /* r29 */) {
    // Local variables
    struct FT_Vector_ v_first; // r1+0x3C
    struct FT_Vector_ v_last; // r1+0x34
    struct FT_Vector_ v_control; // r1+0x2C
    struct FT_Vector_ v_control2; // r1+0x24
    struct FT_Vector_ v_start; // r1+0x1C
    struct FT_Vector_ * point; // r25
    char * tags; // r24
    int n; // r31
    int first; // r23
    int index; // r22
    int error; // r3
    char tag; // r1+0x8
    enum _phases$1260ftbase_c phase; // r21
    int last; // r30
    struct FT_Vector_ v_middle; // r1+0x14
}

// Range: 0x80098158 -> 0x80098310
int FT_Outline_New(struct FT_LibraryRec_ * library /* r28 */, unsigned int numPoints /* r29 */, int numContours /* r30 */, struct FT_Outline_ * outline /* r31 */) {
    // Local variables
    int error; // r27
    struct FT_MemoryRec_ * memory; // r26

    // References
    // -> static struct FT_Outline_ null_outline;
}

// Range: 0x80098310 -> 0x800983FC
int FT_Outline_Done(struct FT_LibraryRec_ * library /* r1+0x8 */, struct FT_Outline_ * outline /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31

    // References
    // -> static struct FT_Outline_ null_outline;
}

// Range: 0x800983FC -> 0x800984C4
int FT_Outline_Get_CBox(struct FT_Outline_ * outline /* r1+0x0 */, struct FT_BBox_ * cbox /* r1+0x4 */) {
    // Local variables
    int xMin; // r3
    int yMin; // r5
    int xMax; // r6
    int yMax; // r7
    struct FT_Vector_ * vec; // r8
    struct FT_Vector_ * limit; // r3
    int x; // r1+0x0
    int y; // r1+0x0
}

// Range: 0x800984C4 -> 0x80098504
void FT_Outline_Translate(struct FT_Outline_ * outline /* r1+0x0 */, int xOffset /* r1+0x4 */, int yOffset /* r1+0x8 */) {
    // Local variables
    unsigned short n; // r7
    struct FT_Vector_ * vec; // r8
}

// Range: 0x80098504 -> 0x800985DC
void FT_Done_GlyphZone(struct FT_GlyphZone_ * zone /* r30 */) {
    // Local variables
    struct FT_MemoryRec_ * memory; // r31
}

// Range: 0x800985DC -> 0x80098844
int FT_New_GlyphZone(struct FT_MemoryRec_ * memory /* r26 */, unsigned short maxPoints /* r29 */, signed short maxContours /* r27 */, struct FT_GlyphZone_ * zone /* r30 */) {
    // Local variables
    int error; // r31
}

// Range: 0x80098844 -> 0x80098AFC
int FT_Update_GlyphZone(struct FT_GlyphZone_ * zone /* r31 */, unsigned short newPoints /* r29 */, signed short newContours /* r28 */) {
    // Local variables
    int error; // r3
    struct FT_MemoryRec_ * memory; // r30
}

// Range: 0x80098AFC -> 0x80098B20
int FT_Done_FreeType(struct FT_LibraryRec_ * library /* r3 */) {}




