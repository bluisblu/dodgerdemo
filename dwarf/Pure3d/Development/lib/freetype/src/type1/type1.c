/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\type1\type1.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800A8800 -> 0x800A8800
*/
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
enum FT_Glyph_Tag_ {
    ft_glyph_format_none = 0,
    ft_glyph_format_composite = 1668246896,
    ft_glyph_format_bitmap = 1651078259,
    ft_glyph_format_outline = 1869968492,
    ft_glyph_format_plotter = 1886154612,
};
// total size: 0x0
struct FT_RasterRec_ {};
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
enum T1_EncodingType_ {
    t1_encoding_none = 0,
    t1_encoding_array = 1,
    t1_encoding_standard = 2,
    t1_encoding_expert = 3,
};
// total size: 0x14
struct T1_Encoding_ {
    // Members
    int num_chars; // offset 0x0, size 0x4
    int code_first; // offset 0x4, size 0x4
    int code_last; // offset 0x8, size 0x4
    unsigned short * char_index; // offset 0xC, size 0x4
    char * * char_name; // offset 0x10, size 0x4
};
// total size: 0x150
struct T1_Font_ {
    // Members
    char * version; // offset 0x0, size 0x4
    char * notice; // offset 0x4, size 0x4
    char * full_name; // offset 0x8, size 0x4
    char * family_name; // offset 0xC, size 0x4
    char * weight; // offset 0x10, size 0x4
    int italic_angle; // offset 0x14, size 0x4
    unsigned char is_fixed_pitch; // offset 0x18, size 0x1
    signed short underline_position; // offset 0x1A, size 0x2
    unsigned short underline_thickness; // offset 0x1C, size 0x2
    int unique_id; // offset 0x20, size 0x4
    int lenIV; // offset 0x24, size 0x4
    unsigned char num_blues; // offset 0x28, size 0x1
    unsigned char num_other_blues; // offset 0x29, size 0x1
    unsigned char num_family_blues; // offset 0x2A, size 0x1
    unsigned char num_family_other_blues; // offset 0x2B, size 0x1
    signed short blue_values[14]; // offset 0x2C, size 0x1C
    signed short other_blues[10]; // offset 0x48, size 0x14
    signed short family_blues[14]; // offset 0x5C, size 0x1C
    signed short family_other_blues[10]; // offset 0x78, size 0x14
    int blue_scale; // offset 0x8C, size 0x4
    int blue_shift; // offset 0x90, size 0x4
    int blue_fuzz; // offset 0x94, size 0x4
    unsigned short standard_width; // offset 0x98, size 0x2
    unsigned short standard_height; // offset 0x9A, size 0x2
    unsigned char num_snap_widths; // offset 0x9C, size 0x1
    unsigned char num_snap_heights; // offset 0x9D, size 0x1
    unsigned char force_bold; // offset 0x9E, size 0x1
    unsigned char round_stem_up; // offset 0x9F, size 0x1
    signed short stem_snap_widths[13]; // offset 0xA0, size 0x1A
    signed short stem_snap_heights[13]; // offset 0xBA, size 0x1A
    int language_group; // offset 0xD4, size 0x4
    int password; // offset 0xD8, size 0x4
    signed short min_feature[2]; // offset 0xDC, size 0x4
    char * font_name; // offset 0xE0, size 0x4
    enum T1_EncodingType_ encoding_type; // offset 0xE4, size 0x4
    struct T1_Encoding_ encoding; // offset 0xE8, size 0x14
    unsigned char * subrs_block; // offset 0xFC, size 0x4
    unsigned char * charstrings_block; // offset 0x100, size 0x4
    unsigned char * glyph_names_block; // offset 0x104, size 0x4
    int num_subrs; // offset 0x108, size 0x4
    unsigned char * * subrs; // offset 0x10C, size 0x4
    int * subrs_len; // offset 0x110, size 0x4
    int num_glyphs; // offset 0x114, size 0x4
    char * * glyph_names; // offset 0x118, size 0x4
    unsigned char * * charstrings; // offset 0x11C, size 0x4
    int * charstrings_len; // offset 0x120, size 0x4
    unsigned char paint_type; // offset 0x124, size 0x1
    unsigned char font_type; // offset 0x125, size 0x1
    struct FT_Matrix_ font_matrix; // offset 0x128, size 0x10
    struct FT_BBox_ font_bbox; // offset 0x138, size 0x10
    int font_id; // offset 0x148, size 0x4
    int stroke_width; // offset 0x14C, size 0x4
};
// total size: 0x8
struct PS_UniMap_ {
    // Members
    unsigned int unicode; // offset 0x0, size 0x4
    unsigned int glyph_index; // offset 0x4, size 0x4
};
// total size: 0x8
struct PS_Unicodes_ {
    // Members
    unsigned int num_maps; // offset 0x0, size 0x4
    struct PS_UniMap_ * maps; // offset 0x4, size 0x4
};
// total size: 0x1FC
struct T1_FaceRec_ {
    // Members
    struct FT_FaceRec_ root; // offset 0x0, size 0x7C
    struct T1_Font_ type1; // offset 0x7C, size 0x150
    void * psnames; // offset 0x1CC, size 0x4
    void * afm_data; // offset 0x1D0, size 0x4
    struct FT_CharMapRec_ charmaprecs[2]; // offset 0x1D4, size 0x18
    struct FT_CharMapRec_ * charmaps[2]; // offset 0x1EC, size 0x8
    struct PS_Unicodes_ unicode_map; // offset 0x1F4, size 0x8
};
// total size: 0x10
struct T1_Kern_Pair_ {
    // Members
    unsigned int glyph1; // offset 0x0, size 0x4
    unsigned int glyph2; // offset 0x4, size 0x4
    struct FT_Vector_ kerning; // offset 0x8, size 0x8
};
// total size: 0x8
struct T1_AFM_ {
    // Members
    int num_pairs; // offset 0x0, size 0x4
    struct T1_Kern_Pair_ * kern_pairs; // offset 0x4, size 0x4
};
// total size: 0x10
struct T1_Snap_Zone_ {
    // Members
    int orus; // offset 0x0, size 0x4
    int pix; // offset 0x4, size 0x4
    int min; // offset 0x8, size 0x4
    int max; // offset 0xC, size 0x4
};
// total size: 0x394
struct T1_Size_Hints_ {
    // Members
    unsigned char supress_overshoots; // offset 0x0, size 0x1
    int num_blue_zones; // offset 0x4, size 0x4
    int num_bottom_zones; // offset 0x8, size 0x4
    struct T1_Snap_Zone_ blue_zones[24]; // offset 0xC, size 0x180
    int num_snap_widths; // offset 0x18C, size 0x4
    struct T1_Snap_Zone_ snap_widths[16]; // offset 0x190, size 0x100
    int num_snap_heights; // offset 0x290, size 0x4
    struct T1_Snap_Zone_ snap_heights[16]; // offset 0x294, size 0x100
};
// total size: 0x30
struct T1_SizeRec_ {
    // Members
    struct FT_SizeRec_ root; // offset 0x0, size 0x28
    unsigned char valid; // offset 0x28, size 0x1
    struct T1_Size_Hints_ * hints; // offset 0x2C, size 0x4
};
// total size: 0x1C
struct PSNames_Interface_ {
    // Members
    unsigned int (* unicode_value)(char *); // offset 0x0, size 0x4
    int (* build_unicodes)(struct FT_MemoryRec_ *, unsigned int, char * *, struct PS_Unicodes_ *); // offset 0x4, size 0x4
    unsigned int (* lookup_unicode)(struct PS_Unicodes_ *, unsigned int); // offset 0x8, size 0x4
    const char * (* macintosh_name)(unsigned int); // offset 0xC, size 0x4
    const char * (* adobe_std_strings)(unsigned int); // offset 0x10, size 0x4
    const unsigned short * adobe_std_encoding; // offset 0x14, size 0x4
    const unsigned short * adobe_expert_encoding; // offset 0x18, size 0x4
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
struct FT_DriverInterface_ t1_driver_interface; // size: 0x58, address: 0x800FB0B0
// total size: 0x30
struct T1_TokenParser_ {
    // Members
    struct FT_MemoryRec_ * memory; // offset 0x0, size 0x4
    struct FT_StreamRec_ * stream; // offset 0x4, size 0x4
    unsigned char in_pfb; // offset 0x8, size 0x1
    unsigned char in_private; // offset 0x9, size 0x1
    unsigned char * base; // offset 0xC, size 0x4
    int cursor; // offset 0x10, size 0x4
    int limit; // offset 0x14, size 0x4
    int max; // offset 0x18, size 0x4
    int error; // offset 0x1C, size 0x4
    struct T1_Token_ token; // offset 0x20, size 0x10
};
// total size: 0x20
struct T1_Table_ {
    // Members
    unsigned char * block; // offset 0x0, size 0x4
    int cursor; // offset 0x4, size 0x4
    int capacity; // offset 0x8, size 0x4
    int max_elems; // offset 0xC, size 0x4
    int num_elems; // offset 0x10, size 0x4
    unsigned char * * elements; // offset 0x14, size 0x4
    int * lengths; // offset 0x18, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x1C, size 0x4
};
// total size: 0x170
struct T1_Parser_ {
    // Members
    int error; // offset 0x0, size 0x4
    struct T1_FaceRec_ * face; // offset 0x4, size 0x4
    struct T1_TokenParser_ * tokenizer; // offset 0x8, size 0x4
    unsigned char dump_tokens; // offset 0xC, size 0x1
    struct T1_Token_ stack[16]; // offset 0x10, size 0x100
    struct T1_Token_ * top; // offset 0x110, size 0x4
    struct T1_Token_ * limit; // offset 0x114, size 0x4
    struct T1_Token_ * args; // offset 0x118, size 0x4
    int state_index; // offset 0x11C, size 0x4
    enum T1_DictState_ state_stack[5]; // offset 0x120, size 0x14
    struct T1_Table_ table; // offset 0x134, size 0x20
    int cur_name; // offset 0x154, size 0x4
    enum T1_EncodingType_ encoding_type; // offset 0x158, size 0x4
    unsigned char * encoding_names; // offset 0x15C, size 0x4
    int * encoding_lengths; // offset 0x160, size 0x4
    unsigned char * * encoding_offsets; // offset 0x164, size 0x4
    unsigned char * subrs; // offset 0x168, size 0x4
    unsigned char * charstrings; // offset 0x16C, size 0x4
};
// total size: 0x8
struct T1_Edge_ {
    // Members
    int orus; // offset 0x0, size 0x4
    int pix; // offset 0x4, size 0x4
};
// total size: 0x14
struct T1_Stem_Hint_ {
    // Members
    struct T1_Edge_ min_edge; // offset 0x0, size 0x8
    struct T1_Edge_ max_edge; // offset 0x8, size 0x8
    int hint_flags; // offset 0x10, size 0x4
};
// total size: 0x608
struct T1_Stem_Table_ {
    // Members
    int num_stems; // offset 0x0, size 0x4
    int num_active; // offset 0x4, size 0x4
    struct T1_Stem_Hint_ stems[64]; // offset 0x8, size 0x500
    int sort[64]; // offset 0x508, size 0x100
};
// total size: 0xC10
struct T1_Glyph_Hints_ {
    // Members
    struct T1_Stem_Table_ hori_stems; // offset 0x0, size 0x608
    struct T1_Stem_Table_ vert_stems; // offset 0x608, size 0x608
};
// total size: 0xA8
struct T1_GlyphSlotRec_ {
    // Members
    struct FT_GlyphSlotRec_ root; // offset 0x0, size 0x90
    unsigned char hint; // offset 0x90, size 0x1
    unsigned char scaled; // offset 0x91, size 0x1
    int max_points; // offset 0x94, size 0x4
    int max_contours; // offset 0x98, size 0x4
    int x_scale; // offset 0x9C, size 0x4
    int y_scale; // offset 0xA0, size 0x4
    struct T1_Glyph_Hints_ * hints; // offset 0xA4, size 0x4
};
// total size: 0x0
struct T1_DriverRec_ {};
enum T1_TokenType_ {
    tok_error = 0,
    tok_eof = 1,
    tok_keyword = 2,
    tok_number = 3,
    tok_string = 4,
    tok_program = 5,
    tok_immediate = 6,
    tok_array = 7,
    tok_hexarray = 8,
    tok_any = 9,
    key_RD_alternate = 100,
    key_ExpertEncoding = 101,
    key_ND = 102,
    key_NP = 103,
    key_RD = 104,
    key_StandardEncoding = 105,
    key_array = 106,
    key_begin = 107,
    key_closefile = 108,
    key_currentdict = 109,
    key_currentfile = 110,
    key_def = 111,
    key_dict = 112,
    key_dup = 113,
    key_eexec = 114,
    key_end = 115,
    key_execonly = 116,
    key_false = 117,
    key_for = 118,
    key_index = 119,
    key_noaccess = 120,
    key_put = 121,
    key_readonly = 122,
    key_true = 123,
    key_userdict = 124,
    key_NP_alternate = 125,
    key_ND_alternate = 126,
    key_max = 127,
    imm_RD_alternate = 200,
    imm_notdef = 201,
    imm_BlueFuzz = 202,
    imm_BlueScale = 203,
    imm_BlueShift = 204,
    imm_BlueValues = 205,
    imm_CharStrings = 206,
    imm_Encoding = 207,
    imm_FamilyBlues = 208,
    imm_FamilyName = 209,
    imm_FamilyOtherBlues = 210,
    imm_FID = 211,
    imm_FontBBox = 212,
    imm_FontID = 213,
    imm_FontInfo = 214,
    imm_FontMatrix = 215,
    imm_FontName = 216,
    imm_FontType = 217,
    imm_ForceBold = 218,
    imm_FullName = 219,
    imm_ItalicAngle = 220,
    imm_LanguageGroup = 221,
    imm_Metrics = 222,
    imm_MinFeature = 223,
    imm_ND = 224,
    imm_NP = 225,
    imm_Notice = 226,
    imm_OtherBlues = 227,
    imm_OtherSubrs = 228,
    imm_PaintType = 229,
    imm_Private = 230,
    imm_RD = 231,
    imm_RndStemUp = 232,
    imm_StdHW = 233,
    imm_StdVW = 234,
    imm_StemSnapH = 235,
    imm_StemSnapV = 236,
    imm_StrokeWidth = 237,
    imm_Subrs = 238,
    imm_UnderlinePosition = 239,
    imm_UnderlineThickness = 240,
    imm_UniqueID = 241,
    imm_Weight = 242,
    imm_isFixedPitch = 243,
    imm_lenIV = 244,
    imm_password = 245,
    imm_version = 246,
    imm_NP_alternate = 247,
    imm_ND_alternate = 248,
    imm_max = 249,
};
// total size: 0x10
struct T1_Token_ {
    // Members
    enum T1_TokenType_ kind; // offset 0x0, size 0x4
    enum T1_TokenType_ kind2; // offset 0x4, size 0x4
    int start; // offset 0x8, size 0x4
    int len; // offset 0xC, size 0x4
};
static int (* def_funcs[11])(struct T1_Parser_ *); // size: 0x2C, address: 0x80110050
enum T1_DictState_ {
    dict_none = 0,
    dict_font = 1,
    dict_fontinfo = 2,
    dict_none2 = 3,
    dict_private = 4,
    dict_encoding = 5,
    dict_subrs = 6,
    dict_othersubrs = 7,
    dict_charstrings = 8,
    dict_unknown_array = 9,
    dict_unknown_dict = 10,
    dict_max = 11,
};
// total size: 0x9C
struct T1_Builder_ {
    // Members
    struct FT_MemoryRec_ * memory; // offset 0x0, size 0x4
    struct T1_FaceRec_ * face; // offset 0x4, size 0x4
    struct T1_SizeRec_ * size; // offset 0x8, size 0x4
    struct T1_GlyphSlotRec_ * glyph; // offset 0xC, size 0x4
    struct FT_Outline_ current; // offset 0x10, size 0x14
    struct FT_Outline_ base; // offset 0x24, size 0x14
    int max_points; // offset 0x38, size 0x4
    int max_contours; // offset 0x3C, size 0x4
    struct FT_Vector_ last; // offset 0x40, size 0x8
    int scale_x; // offset 0x48, size 0x4
    int scale_y; // offset 0x4C, size 0x4
    int pos_x; // offset 0x50, size 0x4
    int pos_y; // offset 0x54, size 0x4
    struct FT_Vector_ left_bearing; // offset 0x58, size 0x8
    struct FT_Vector_ advance; // offset 0x60, size 0x8
    struct FT_BBox_ bbox; // offset 0x68, size 0x10
    unsigned char path_begun; // offset 0x78, size 0x1
    unsigned char load_points; // offset 0x79, size 0x1
    int pass; // offset 0x7C, size 0x4
    int hint_point; // offset 0x80, size 0x4
    struct T1_Builder_Funcs_ funcs; // offset 0x84, size 0x18
};
// total size: 0x8
struct FT_Vector_ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
static int args_count$796[26]; // size: 0x68, address: 0x800FB108
enum T1_Operator_ {
    op_none = 0,
    op_endchar = 1,
    op_hsbw = 2,
    op_seac = 3,
    op_sbw = 4,
    op_closepath = 5,
    op_hlineto = 6,
    op_hmoveto = 7,
    op_hvcurveto = 8,
    op_rlineto = 9,
    op_rmoveto = 10,
    op_rrcurveto = 11,
    op_vhcurveto = 12,
    op_vlineto = 13,
    op_vmoveto = 14,
    op_dotsection = 15,
    op_hstem = 16,
    op_hstem3 = 17,
    op_vstem = 18,
    op_vstem3 = 19,
    op_div = 20,
    op_callothersubr = 21,
    op_callsubr = 22,
    op_pop = 23,
    op_return = 24,
    op_setcurrentpoint = 25,
    op_max = 26,
};
// total size: 0x18
struct T1_Builder_Funcs_ {
    // Members
    int (* end_char)(struct T1_Builder_ *); // offset 0x0, size 0x4
    int (* set_bearing_point)(struct T1_Builder_ *, int, int, int, int); // offset 0x4, size 0x4
    int (* close_path)(struct T1_Builder_ *); // offset 0x8, size 0x4
    int (* rline_to)(struct T1_Builder_ *, int, int); // offset 0xC, size 0x4
    int (* rmove_to)(struct T1_Builder_ *, int, int); // offset 0x10, size 0x4
    int (* rcurve_to)(struct T1_Builder_ *, int, int, int, int, int, int); // offset 0x14, size 0x4
};
static struct T1_Builder_Funcs_ maxadv_builder_interface; // size: 0x18, address: 0x800FB170
// total size: 0x10
struct T1_Hinter_Func_ {
    // Members
    int (* change_hints)(struct T1_Builder_ *); // offset 0x0, size 0x4
    int (* dot_section)(struct T1_Builder_ *); // offset 0x4, size 0x4
    int (* stem)(struct T1_Builder_ *, int, int, unsigned char); // offset 0x8, size 0x4
    int (* stem3)(struct T1_Builder_ *, int, int, int, int, int, int, unsigned char); // offset 0xC, size 0x4
};
static struct T1_Hinter_Func_ maxadv_hinter_interface; // size: 0x10, address: 0x800FB188
// total size: 0xC
struct T1_Decoder_Zone_ {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned char * limit; // offset 0x4, size 0x4
    unsigned char * cursor; // offset 0x8, size 0x4
};
// total size: 0x1E0
struct T1_Decoder_ {
    // Members
    struct T1_Builder_ builder; // offset 0x0, size 0x9C
    struct T1_Hinter_Func_ hinter; // offset 0x9C, size 0x10
    int stack[32]; // offset 0xAC, size 0x80
    int * top; // offset 0x12C, size 0x4
    struct T1_Decoder_Zone_ zones[9]; // offset 0x130, size 0x6C
    struct T1_Decoder_Zone_ * zone; // offset 0x19C, size 0x4
    int flex_state; // offset 0x1A0, size 0x4
    int num_flex_vectors; // offset 0x1A4, size 0x4
    struct FT_Vector_ flex_vectors[7]; // offset 0x1A8, size 0x38
};
static struct T1_Builder_Funcs_ gload_builder_interface; // size: 0x18, address: 0x800FB198
static struct T1_Builder_Funcs_ gload_builder_interface_null; // size: 0x18, address: 0x800FB1B0
static struct T1_Hinter_Func_ gload_hinter_interface; // size: 0x10, address: 0x800FB1C8
static struct T1_Hinter_Func_ t1_hinter_funcs; // size: 0x10, address: 0x800FB308
// total size: 0x10
struct FT_BBox_ {
    // Members
    int xMin; // offset 0x0, size 0x4
    int yMin; // offset 0x4, size 0x4
    int xMax; // offset 0x8, size 0x4
    int yMax; // offset 0xC, size 0x4
};
char * t1_keywords[27]; // size: 0x6C, address: 0x800FB1D8
char * t1_immediates[49]; // size: 0xC4, address: 0x800FB244



