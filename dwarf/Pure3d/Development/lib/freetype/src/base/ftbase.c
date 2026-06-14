/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftbase.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80096168 -> 0x80096168
*/
// total size: 0x8
struct FT_Int64_ {
    // Members
    unsigned int lo; // offset 0x0, size 0x4
    unsigned int hi; // offset 0x4, size 0x4
};
// total size: 0x10
struct FT_MemoryRec_ {
    // Members
    void * user; // offset 0x0, size 0x4
    void * (* alloc)(struct FT_MemoryRec_ *, long); // offset 0x4, size 0x4
    void (* free)(struct FT_MemoryRec_ *, void *); // offset 0x8, size 0x4
    void * (* realloc)(struct FT_MemoryRec_ *, long, long, void *); // offset 0xC, size 0x4
};
// total size: 0x8
struct FT_Generic_ {
    // Members
    void * data; // offset 0x0, size 0x4
    void (* finalizer)(void *); // offset 0x4, size 0x4
};
union FT_StreamDesc_ {
    long value; // offset 0x0, size 0x4
    void * pointer; // offset 0x0, size 0x4
};
// total size: 0x28
struct FT_StreamRec_ {
    // Members
    char * base; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
    unsigned long pos; // offset 0x8, size 0x4
    union FT_StreamDesc_ descriptor; // offset 0xC, size 0x4
    union FT_StreamDesc_ pathname; // offset 0x10, size 0x4
    unsigned long (* read)(struct FT_StreamRec_ *, unsigned long, char *, unsigned long); // offset 0x14, size 0x4
    void (* close)(struct FT_StreamRec_ *); // offset 0x18, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x1C, size 0x4
    char * cursor; // offset 0x20, size 0x4
    char * limit; // offset 0x24, size 0x4
};
// total size: 0x20
struct FT_Glyph_Metrics_ {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int horiBearingX; // offset 0x8, size 0x4
    int horiBearingY; // offset 0xC, size 0x4
    int horiAdvance; // offset 0x10, size 0x4
    int vertBearingX; // offset 0x14, size 0x4
    int vertBearingY; // offset 0x18, size 0x4
    int vertAdvance; // offset 0x1C, size 0x4
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
// total size: 0x10
struct FT_Matrix_ {
    // Members
    int xx; // offset 0x0, size 0x4
    int xy; // offset 0x4, size 0x4
    int yx; // offset 0x8, size 0x4
    int yy; // offset 0xC, size 0x4
};
// total size: 0x20
struct FT_SubGlyph_ {
    // Members
    int index; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    int arg1; // offset 0x8, size 0x4
    int arg2; // offset 0xC, size 0x4
    struct FT_Matrix_ transform; // offset 0x10, size 0x10
};
// total size: 0x90
struct FT_GlyphSlotRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    struct FT_GlyphSlotRec_ * next; // offset 0x4, size 0x4
    struct FT_Glyph_Metrics_ metrics; // offset 0x8, size 0x20
    struct FT_Glyph_Metrics_ metrics2; // offset 0x28, size 0x20
    enum FT_Glyph_Tag_ format; // offset 0x48, size 0x4
    struct FT_Bitmap_ bitmap; // offset 0x4C, size 0x18
    struct FT_Outline_ outline; // offset 0x64, size 0x14
    int num_subglyphs; // offset 0x78, size 0x4
    int max_subglyphs; // offset 0x7C, size 0x4
    struct FT_SubGlyph_ * subglyphs; // offset 0x80, size 0x4
    void * control_data; // offset 0x84, size 0x4
    void * control_len; // offset 0x88, size 0x4
    void * other; // offset 0x8C, size 0x4
};
// total size: 0x1C
struct FT_Size_Metrics_ {
    // Members
    unsigned short x_ppem; // offset 0x0, size 0x2
    unsigned short y_ppem; // offset 0x2, size 0x2
    int x_scale; // offset 0x4, size 0x4
    int y_scale; // offset 0x8, size 0x4
    int ascender; // offset 0xC, size 0x4
    int descender; // offset 0x10, size 0x4
    int height; // offset 0x14, size 0x4
    int max_advance; // offset 0x18, size 0x4
};
// total size: 0x28
struct FT_SizeRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    struct FT_Generic_ generic; // offset 0x4, size 0x8
    struct FT_Size_Metrics_ metrics; // offset 0xC, size 0x1C
};
enum FT_Encoding_ {
    ft_encoding_none = 0,
    ft_encoding_symbol = 0,
    ft_encoding_unicode = 1970170211,
    ft_encoding_latin_2 = 1818326066,
    ft_encoding_sjis = 1936353651,
    ft_encoding_big5 = 1651074869,
    ft_encoding_adobe_standard = 1633972066,
    ft_encoding_adobe_expert = 1633968741,
    ft_encoding_adobe_custom = 1633968739,
    ft_encoding_apple_roman = 1634889070,
};
// total size: 0xC
struct FT_CharMapRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    enum FT_Encoding_ encoding; // offset 0x4, size 0x4
    unsigned short platform_id; // offset 0x8, size 0x2
    unsigned short encoding_id; // offset 0xA, size 0x2
};
// total size: 0xC
struct FT_ListNodeRec_ {
    // Members
    struct FT_ListNodeRec_ * prev; // offset 0x0, size 0x4
    struct FT_ListNodeRec_ * next; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x8
struct FT_ListRec_ {
    // Members
    struct FT_ListNodeRec_ * head; // offset 0x0, size 0x4
    struct FT_ListNodeRec_ * tail; // offset 0x4, size 0x4
};
// total size: 0x4
struct FT_Bitmap_Size_ {
    // Members
    signed short height; // offset 0x0, size 0x2
    signed short width; // offset 0x2, size 0x2
};
// total size: 0x7C
struct FT_FaceRec_ {
    // Members
    struct FT_DriverRec_ * driver; // offset 0x0, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x4, size 0x4
    struct FT_StreamRec_ * stream; // offset 0x8, size 0x4
    int num_faces; // offset 0xC, size 0x4
    int face_index; // offset 0x10, size 0x4
    struct FT_Generic_ generic; // offset 0x14, size 0x8
    struct FT_GlyphSlotRec_ * glyph; // offset 0x1C, size 0x4
    struct FT_SizeRec_ * size; // offset 0x20, size 0x4
    struct FT_CharMapRec_ * charmap; // offset 0x24, size 0x4
    int num_charmaps; // offset 0x28, size 0x4
    struct FT_CharMapRec_ * * charmaps; // offset 0x2C, size 0x4
    struct FT_ListRec_ sizes_list; // offset 0x30, size 0x8
    void * extensions; // offset 0x38, size 0x4
    int face_flags; // offset 0x3C, size 0x4
    int style_flags; // offset 0x40, size 0x4
    int num_glyphs; // offset 0x44, size 0x4
    char * family_name; // offset 0x48, size 0x4
    char * style_name; // offset 0x4C, size 0x4
    int num_fixed_sizes; // offset 0x50, size 0x4
    struct FT_Bitmap_Size_ * available_sizes; // offset 0x54, size 0x4
    struct FT_BBox_ bbox; // offset 0x58, size 0x10
    unsigned short units_per_EM; // offset 0x68, size 0x2
    signed short ascender; // offset 0x6A, size 0x2
    signed short descender; // offset 0x6C, size 0x2
    signed short height; // offset 0x6E, size 0x2
    signed short max_advance_width; // offset 0x70, size 0x2
    signed short max_advance_height; // offset 0x72, size 0x2
    signed short underline_position; // offset 0x74, size 0x2
    signed short underline_thickness; // offset 0x76, size 0x2
    unsigned short max_points; // offset 0x78, size 0x2
    signed short max_contours; // offset 0x7A, size 0x2
};
// total size: 0x58
struct FT_DriverInterface_ {
    // Members
    int driver_object_size; // offset 0x0, size 0x4
    int face_object_size; // offset 0x4, size 0x4
    int size_object_size; // offset 0x8, size 0x4
    int slot_object_size; // offset 0xC, size 0x4
    char * driver_name; // offset 0x10, size 0x4
    int driver_version; // offset 0x14, size 0x4
    int driver_requires; // offset 0x18, size 0x4
    void * format_interface; // offset 0x1C, size 0x4
    int (* init_driver)(struct FT_DriverRec_ *); // offset 0x20, size 0x4
    int (* done_driver)(struct FT_DriverRec_ *); // offset 0x24, size 0x4
    void (* (* get_interface)(struct FT_DriverRec_ *, char *))(); // offset 0x28, size 0x4
    int (* init_face)(struct FT_StreamRec_ *, int, struct FT_FaceRec_ *); // offset 0x2C, size 0x4
    void (* done_face)(struct FT_FaceRec_ *); // offset 0x30, size 0x4
    int (* get_kerning)(struct FT_FaceRec_ *, unsigned int, unsigned int, struct FT_Vector_ *); // offset 0x34, size 0x4
    int (* init_size)(struct FT_SizeRec_ *); // offset 0x38, size 0x4
    void (* done_size)(struct FT_SizeRec_ *); // offset 0x3C, size 0x4
    int (* set_char_sizes)(struct FT_SizeRec_ *, long, long, unsigned int, unsigned int); // offset 0x40, size 0x4
    int (* set_pixel_sizes)(struct FT_SizeRec_ *, unsigned int, unsigned int); // offset 0x44, size 0x4
    int (* init_glyph_slot)(struct FT_GlyphSlotRec_ *); // offset 0x48, size 0x4
    void (* done_glyph_slot)(struct FT_GlyphSlotRec_ *); // offset 0x4C, size 0x4
    int (* load_glyph)(struct FT_GlyphSlotRec_ *, struct FT_SizeRec_ *, unsigned int, int); // offset 0x50, size 0x4
    unsigned int (* get_char_index)(struct FT_CharMapRec_ *, int); // offset 0x54, size 0x4
};
// total size: 0x80
struct FT_DriverRec_ {
    // Members
    struct FT_LibraryRec_ * library; // offset 0x0, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x4, size 0x4
    struct FT_Generic_ generic; // offset 0x8, size 0x8
    struct FT_DriverInterface_ interface; // offset 0x10, size 0x58
    void * format; // offset 0x68, size 0x4
    int version; // offset 0x6C, size 0x4
    char * description; // offset 0x70, size 0x4
    struct FT_ListRec_ faces_list; // offset 0x74, size 0x8
    void * extensions; // offset 0x7C, size 0x4
};
// total size: 0xC4
struct FT_LibraryRec_ {
    // Members
    struct FT_MemoryRec_ * memory; // offset 0x0, size 0x4
    struct FT_Generic_ generic; // offset 0x4, size 0x8
    int num_drivers; // offset 0xC, size 0x4
    struct FT_DriverRec_ * drivers[8]; // offset 0x10, size 0x20
    struct FT_Glyph_Format_ glyph_formats[8]; // offset 0x30, size 0x80
    void * raster_pool; // offset 0xB0, size 0x4
    void (* debug_hooks[4])(void *); // offset 0xB4, size 0x10
};
enum FT_Glyph_Tag_ {
    ft_glyph_format_none = 0,
    ft_glyph_format_composite = 1668246896,
    ft_glyph_format_bitmap = 1651078259,
    ft_glyph_format_outline = 1869968492,
    ft_glyph_format_plotter = 1886154612,
};
// total size: 0x0
struct FT_RasterRec_ {};
// total size: 0x14
struct FT_Raster_Interface_ {
    // Members
    long size; // offset 0x0, size 0x4
    enum FT_Glyph_Tag_ format_tag; // offset 0x4, size 0x4
    int (* init)(struct FT_RasterRec_ *, char *, long); // offset 0x8, size 0x4
    int (* set_mode)(struct FT_RasterRec_ *, char *, char *); // offset 0xC, size 0x4
    int (* render)(struct FT_RasterRec_ *, void *, struct FT_Bitmap_ *); // offset 0x10, size 0x4
};
// total size: 0x10
struct FT_Glyph_Format_ {
    // Members
    enum FT_Glyph_Tag_ format_tag; // offset 0x0, size 0x4
    struct FT_Raster_Interface_ * raster_interface; // offset 0x4, size 0x4
    struct FT_RasterRec_ * raster; // offset 0x8, size 0x4
    unsigned char raster_allocated; // offset 0xC, size 0x1
};
// total size: 0x14
struct FT_Open_Args_ {
    // Members
    unsigned char * memory_base; // offset 0x0, size 0x4
    int memory_size; // offset 0x4, size 0x4
    char * pathname; // offset 0x8, size 0x4
    struct FT_StreamRec_ * stream; // offset 0xC, size 0x4
    struct FT_DriverRec_ * driver; // offset 0x10, size 0x4
};
// total size: 0x10
struct FT_BBox_ {
    // Members
    int xMin; // offset 0x0, size 0x4
    int yMin; // offset 0x4, size 0x4
    int xMax; // offset 0x8, size 0x4
    int yMax; // offset 0xC, size 0x4
};
// total size: 0x10
struct FT_Outline_Funcs_ {
    // Members
    int (* move_to)(struct FT_Vector_ *, void *); // offset 0x0, size 0x4
    int (* line_to)(struct FT_Vector_ *, void *); // offset 0x4, size 0x4
    int (* conic_to)(struct FT_Vector_ *, struct FT_Vector_ *, void *); // offset 0x8, size 0x4
    int (* cubic_to)(struct FT_Vector_ *, struct FT_Vector_ *, struct FT_Vector_ *, void *); // offset 0xC, size 0x4
};
// total size: 0x8
struct FT_Vector_ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
enum _phases$1260ftbase_c {
    phase_point = 0,
    phase_conic = 1,
    phase_cubic = 2,
    phase_cubic2 = 3,
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
static struct FT_Outline_ null_outline; // size: 0x14, address: 0x800F9E78
// total size: 0x1C
struct FT_GlyphZone_ {
    // Members
    struct FT_MemoryRec_ * memory; // offset 0x0, size 0x4
    unsigned short max_points; // offset 0x4, size 0x2
    unsigned short max_contours; // offset 0x6, size 0x2
    unsigned short n_points; // offset 0x8, size 0x2
    signed short n_contours; // offset 0xA, size 0x2
    struct FT_Vector_ * org; // offset 0xC, size 0x4
    struct FT_Vector_ * cur; // offset 0x10, size 0x4
    unsigned char * tags; // offset 0x14, size 0x4
    unsigned short * contours; // offset 0x18, size 0x4
};
enum FT_Frame_Op_ {
    ft_frame_end = 0,
    ft_frame_start = 4,
    ft_frame_byte = 8,
    ft_frame_schar = 9,
    ft_frame_ushort_be = 12,
    ft_frame_short_be = 13,
    ft_frame_ushort_le = 14,
    ft_frame_short_le = 15,
    ft_frame_ulong_be = 16,
    ft_frame_ulong_le = 17,
    ft_frame_long_be = 18,
    ft_frame_long_le = 19,
    ft_frame_uoff3_be = 20,
    ft_frame_uoff3_le = 21,
    ft_frame_off3_be = 22,
    ft_frame_off3_le = 23,
};
// total size: 0x8
struct FT_Frame_Field_ {
    // Members
    enum FT_Frame_Op_ value; // offset 0x0, size 0x4
    char size; // offset 0x4, size 0x1
    unsigned short offset; // offset 0x6, size 0x2
};
// total size: 0x18
struct FT_Extension_Class_ {
    // Members
    const char * id; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    int (* init)(void *, struct FT_FaceRec_ *); // offset 0x8, size 0x4
    void (* finalize)(void *, struct FT_FaceRec_ *); // offset 0xC, size 0x4
    void * interface; // offset 0x10, size 0x4
    unsigned int offset; // offset 0x14, size 0x4
};
// total size: 0xC8
struct FT_Extension_Registry_ {
    // Members
    int num_extensions; // offset 0x0, size 0x4
    int cur_offset; // offset 0x4, size 0x4
    struct FT_Extension_Class_ classes[8]; // offset 0x8, size 0xC0
};



