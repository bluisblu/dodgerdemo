/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\truetype\truetype.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8009F4F8 -> 0x8009F4F8
*/
// total size: 0xC
struct TEncoding {
    // Members
    int platform_id; // offset 0x0, size 0x4
    int encoding_id; // offset 0x4, size 0x4
    enum FT_Encoding_ encoding; // offset 0x8, size 0x4
};
static struct TEncoding tt_encodings$1[6]; // size: 0x48, address: 0x800FADC8
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
union FT_StreamDesc_ {
    long value; // offset 0x0, size 0x4
    void * pointer; // offset 0x0, size 0x4
};
// total size: 0x10
struct FT_MemoryRec_ {
    // Members
    void * user; // offset 0x0, size 0x4
    void * (* alloc)(struct FT_MemoryRec_ *, long); // offset 0x4, size 0x4
    void (* free)(struct FT_MemoryRec_ *, void *); // offset 0x8, size 0x4
    void * (* realloc)(struct FT_MemoryRec_ *, long, long, void *); // offset 0xC, size 0x4
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
// total size: 0x10
struct TTC_Header_ {
    // Members
    unsigned int Tag; // offset 0x0, size 0x4
    int version; // offset 0x4, size 0x4
    int DirCount; // offset 0x8, size 0x4
    unsigned int * TableDirectory; // offset 0xC, size 0x4
};
// total size: 0x10
struct TT_Table_ {
    // Members
    unsigned int Tag; // offset 0x0, size 0x4
    unsigned int CheckSum; // offset 0x4, size 0x4
    unsigned int Offset; // offset 0x8, size 0x4
    unsigned int Length; // offset 0xC, size 0x4
};
// total size: 0x38
struct TT_Header_ {
    // Members
    int Table_Version; // offset 0x0, size 0x4
    int Font_Revision; // offset 0x4, size 0x4
    int CheckSum_Adjust; // offset 0x8, size 0x4
    int Magic_Number; // offset 0xC, size 0x4
    unsigned short Flags; // offset 0x10, size 0x2
    unsigned short Units_Per_EM; // offset 0x12, size 0x2
    int Created[2]; // offset 0x14, size 0x8
    int Modified[2]; // offset 0x1C, size 0x8
    signed short xMin; // offset 0x24, size 0x2
    signed short yMin; // offset 0x26, size 0x2
    signed short xMax; // offset 0x28, size 0x2
    signed short yMax; // offset 0x2A, size 0x2
    unsigned short Mac_Style; // offset 0x2C, size 0x2
    unsigned short Lowest_Rec_PPEM; // offset 0x2E, size 0x2
    signed short Font_Direction; // offset 0x30, size 0x2
    signed short Index_To_Loc_Format; // offset 0x32, size 0x2
    signed short Glyph_Data_Format; // offset 0x34, size 0x2
};
// total size: 0x2C
struct TT_HoriHeader_ {
    // Members
    int Version; // offset 0x0, size 0x4
    signed short Ascender; // offset 0x4, size 0x2
    signed short Descender; // offset 0x6, size 0x2
    signed short Line_Gap; // offset 0x8, size 0x2
    unsigned short advance_Width_Max; // offset 0xA, size 0x2
    signed short min_Left_Side_Bearing; // offset 0xC, size 0x2
    signed short min_Right_Side_Bearing; // offset 0xE, size 0x2
    signed short xMax_Extent; // offset 0x10, size 0x2
    signed short caret_Slope_Rise; // offset 0x12, size 0x2
    signed short caret_Slope_Run; // offset 0x14, size 0x2
    signed short caret_Offset; // offset 0x16, size 0x2
    signed short Reserved[4]; // offset 0x18, size 0x8
    signed short metric_Data_Format; // offset 0x20, size 0x2
    unsigned short number_Of_HMetrics; // offset 0x22, size 0x2
    void * long_metrics; // offset 0x24, size 0x4
    void * short_metrics; // offset 0x28, size 0x4
};
// total size: 0x20
struct TT_MaxProfile_ {
    // Members
    int version; // offset 0x0, size 0x4
    unsigned short numGlyphs; // offset 0x4, size 0x2
    unsigned short maxPoints; // offset 0x6, size 0x2
    unsigned short maxContours; // offset 0x8, size 0x2
    unsigned short maxCompositePoints; // offset 0xA, size 0x2
    unsigned short maxCompositeContours; // offset 0xC, size 0x2
    unsigned short maxZones; // offset 0xE, size 0x2
    unsigned short maxTwilightPoints; // offset 0x10, size 0x2
    unsigned short maxStorage; // offset 0x12, size 0x2
    unsigned short maxFunctionDefs; // offset 0x14, size 0x2
    unsigned short maxInstructionDefs; // offset 0x16, size 0x2
    unsigned short maxStackElements; // offset 0x18, size 0x2
    unsigned short maxSizeOfInstructions; // offset 0x1A, size 0x2
    unsigned short maxComponentElements; // offset 0x1C, size 0x2
    unsigned short maxComponentDepth; // offset 0x1E, size 0x2
};
// total size: 0x2C
struct TT_VertHeader_ {
    // Members
    int Version; // offset 0x0, size 0x4
    signed short Ascender; // offset 0x4, size 0x2
    signed short Descender; // offset 0x6, size 0x2
    signed short Line_Gap; // offset 0x8, size 0x2
    unsigned short advance_Height_Max; // offset 0xA, size 0x2
    signed short min_Top_Side_Bearing; // offset 0xC, size 0x2
    signed short min_Bottom_Side_Bearing; // offset 0xE, size 0x2
    signed short yMax_Extent; // offset 0x10, size 0x2
    signed short caret_Slope_Rise; // offset 0x12, size 0x2
    signed short caret_Slope_Run; // offset 0x14, size 0x2
    signed short caret_Offset; // offset 0x16, size 0x2
    signed short Reserved[4]; // offset 0x18, size 0x8
    signed short metric_Data_Format; // offset 0x20, size 0x2
    unsigned short number_Of_VMetrics; // offset 0x22, size 0x2
    void * long_metrics; // offset 0x24, size 0x4
    void * short_metrics; // offset 0x28, size 0x4
};
// total size: 0x10
struct TT_NameRec_ {
    // Members
    unsigned short platformID; // offset 0x0, size 0x2
    unsigned short encodingID; // offset 0x2, size 0x2
    unsigned short languageID; // offset 0x4, size 0x2
    unsigned short nameID; // offset 0x6, size 0x2
    unsigned short stringLength; // offset 0x8, size 0x2
    unsigned short stringOffset; // offset 0xA, size 0x2
    unsigned char * string; // offset 0xC, size 0x4
};
// total size: 0x10
struct TT_NameTable_ {
    // Members
    unsigned short format; // offset 0x0, size 0x2
    unsigned short numNameRecords; // offset 0x2, size 0x2
    unsigned short storageOffset; // offset 0x4, size 0x2
    struct TT_NameRec_ * names; // offset 0x8, size 0x4
    unsigned char * storage; // offset 0xC, size 0x4
};
// total size: 0x58
struct TT_OS2_ {
    // Members
    unsigned short version; // offset 0x0, size 0x2
    signed short xAvgCharWidth; // offset 0x2, size 0x2
    unsigned short usWeightClass; // offset 0x4, size 0x2
    unsigned short usWidthClass; // offset 0x6, size 0x2
    signed short fsType; // offset 0x8, size 0x2
    signed short ySubscriptXSize; // offset 0xA, size 0x2
    signed short ySubscriptYSize; // offset 0xC, size 0x2
    signed short ySubscriptXOffset; // offset 0xE, size 0x2
    signed short ySubscriptYOffset; // offset 0x10, size 0x2
    signed short ySuperscriptXSize; // offset 0x12, size 0x2
    signed short ySuperscriptYSize; // offset 0x14, size 0x2
    signed short ySuperscriptXOffset; // offset 0x16, size 0x2
    signed short ySuperscriptYOffset; // offset 0x18, size 0x2
    signed short yStrikeoutSize; // offset 0x1A, size 0x2
    signed short yStrikeoutPosition; // offset 0x1C, size 0x2
    signed short sFamilyClass; // offset 0x1E, size 0x2
    unsigned char panose[10]; // offset 0x20, size 0xA
    unsigned int ulUnicodeRange1; // offset 0x2C, size 0x4
    unsigned int ulUnicodeRange2; // offset 0x30, size 0x4
    unsigned int ulUnicodeRange3; // offset 0x34, size 0x4
    unsigned int ulUnicodeRange4; // offset 0x38, size 0x4
    signed char achVendID[4]; // offset 0x3C, size 0x4
    unsigned short fsSelection; // offset 0x40, size 0x2
    unsigned short usFirstCharIndex; // offset 0x42, size 0x2
    unsigned short usLastCharIndex; // offset 0x44, size 0x2
    signed short sTypoAscender; // offset 0x46, size 0x2
    signed short sTypoDescender; // offset 0x48, size 0x2
    signed short sTypoLineGap; // offset 0x4A, size 0x2
    unsigned short usWinAscent; // offset 0x4C, size 0x2
    unsigned short usWinDescent; // offset 0x4E, size 0x2
    unsigned int ulCodePageRange1; // offset 0x50, size 0x4
    unsigned int ulCodePageRange2; // offset 0x54, size 0x4
};
// total size: 0x20
struct TT_Postscript_ {
    // Members
    int FormatType; // offset 0x0, size 0x4
    int italicAngle; // offset 0x4, size 0x4
    signed short underlinePosition; // offset 0x8, size 0x2
    signed short underlineThickness; // offset 0xA, size 0x2
    unsigned int isFixedPitch; // offset 0xC, size 0x4
    unsigned int minMemType42; // offset 0x10, size 0x4
    unsigned int maxMemType42; // offset 0x14, size 0x4
    unsigned int minMemType1; // offset 0x18, size 0x4
    unsigned int maxMemType1; // offset 0x1C, size 0x4
};
// total size: 0x4
struct TT_CMap0_ {
    // Members
    unsigned char * glyphIdArray; // offset 0x0, size 0x4
};
// total size: 0x8
struct TT_CMap2SubHeader_ {
    // Members
    unsigned short firstCode; // offset 0x0, size 0x2
    unsigned short entryCount; // offset 0x2, size 0x2
    signed short idDelta; // offset 0x4, size 0x2
    unsigned short idRangeOffset; // offset 0x6, size 0x2
};
// total size: 0x10
struct TT_CMap2_ {
    // Members
    unsigned short * subHeaderKeys; // offset 0x0, size 0x4
    struct TT_CMap2SubHeader_ * subHeaders; // offset 0x4, size 0x4
    unsigned short * glyphIdArray; // offset 0x8, size 0x4
    unsigned short numGlyphId; // offset 0xC, size 0x2
};
// total size: 0x8
struct TT_CMap4Segment_ {
    // Members
    unsigned short endCount; // offset 0x0, size 0x2
    unsigned short startCount; // offset 0x2, size 0x2
    signed short idDelta; // offset 0x4, size 0x2
    unsigned short idRangeOffset; // offset 0x6, size 0x2
};
// total size: 0x14
struct TT_CMap4_ {
    // Members
    unsigned short segCountX2; // offset 0x0, size 0x2
    unsigned short searchRange; // offset 0x2, size 0x2
    unsigned short entrySelector; // offset 0x4, size 0x2
    unsigned short rangeShift; // offset 0x6, size 0x2
    struct TT_CMap4Segment_ * segments; // offset 0x8, size 0x4
    unsigned short * glyphIdArray; // offset 0xC, size 0x4
    unsigned short numGlyphId; // offset 0x10, size 0x2
};
// total size: 0x8
struct TT_CMap6_ {
    // Members
    unsigned short firstCode; // offset 0x0, size 0x2
    unsigned short entryCount; // offset 0x2, size 0x2
    unsigned short * glyphIdArray; // offset 0x4, size 0x4
};
// total size: 0x28
struct TT_CMapTable_ {
    // Members
    unsigned short platformID; // offset 0x0, size 0x2
    unsigned short platformEncodingID; // offset 0x2, size 0x2
    unsigned short format; // offset 0x4, size 0x2
    unsigned short length; // offset 0x6, size 0x2
    unsigned short version; // offset 0x8, size 0x2
    unsigned char loaded; // offset 0xA, size 0x1
    unsigned int offset; // offset 0xC, size 0x4
    union {
        struct TT_CMap0_ cmap0; // offset 0x0, size 0x4
        struct TT_CMap2_ cmap2; // offset 0x0, size 0x10
        struct TT_CMap4_ cmap4; // offset 0x0, size 0x14
        struct TT_CMap6_ cmap6; // offset 0x0, size 0x8
    } c; // offset 0x10, size 0x14
    unsigned int (* get_index)(struct TT_CMapTable_ *, unsigned int); // offset 0x24, size 0x4
};
// total size: 0x34
struct TT_CharMapRec_ {
    // Members
    struct FT_CharMapRec_ root; // offset 0x0, size 0xC
    struct TT_CMapTable_ cmap; // offset 0xC, size 0x28
};
// total size: 0x8
struct TT_HdmxRec_ {
    // Members
    unsigned char ppem; // offset 0x0, size 0x1
    unsigned char max_width; // offset 0x1, size 0x1
    unsigned char * widths; // offset 0x4, size 0x4
};
// total size: 0x8
struct TT_Hdmx_ {
    // Members
    unsigned short version; // offset 0x0, size 0x2
    signed short num_records; // offset 0x2, size 0x2
    struct TT_HdmxRec_ * records; // offset 0x4, size 0x4
};
// total size: 0x4
struct TT_GaspRange_ {
    // Members
    unsigned short maxPPEM; // offset 0x0, size 0x2
    unsigned short gaspFlag; // offset 0x2, size 0x2
};
// total size: 0x8
struct TT_Gasp_ {
    // Members
    unsigned short version; // offset 0x0, size 0x2
    unsigned short numRanges; // offset 0x2, size 0x2
    struct TT_GaspRange_ * gaspRanges; // offset 0x4, size 0x4
};
// total size: 0x28
struct TT_SBit_Range {
    // Members
    unsigned short first_glyph; // offset 0x0, size 0x2
    unsigned short last_glyph; // offset 0x2, size 0x2
    unsigned short index_format; // offset 0x4, size 0x2
    unsigned short image_format; // offset 0x6, size 0x2
    unsigned int image_offset; // offset 0x8, size 0x4
    unsigned int image_size; // offset 0xC, size 0x4
    struct TT_SBit_Metrics_ metrics; // offset 0x10, size 0x8
    unsigned int num_glyphs; // offset 0x18, size 0x4
    unsigned int * glyph_offsets; // offset 0x1C, size 0x4
    unsigned short * glyph_codes; // offset 0x20, size 0x4
    unsigned int table_offset; // offset 0x24, size 0x4
};
// total size: 0xC
struct TT_SBit_Line_Metrics_ {
    // Members
    signed char ascender; // offset 0x0, size 0x1
    signed char descender; // offset 0x1, size 0x1
    unsigned char max_width; // offset 0x2, size 0x1
    signed char caret_slope_numerator; // offset 0x3, size 0x1
    signed char caret_slope_denominator; // offset 0x4, size 0x1
    signed char caret_offset; // offset 0x5, size 0x1
    signed char min_origin_SB; // offset 0x6, size 0x1
    signed char min_advance_SB; // offset 0x7, size 0x1
    signed char max_before_BL; // offset 0x8, size 0x1
    signed char min_after_BL; // offset 0x9, size 0x1
    signed char pads[2]; // offset 0xA, size 0x2
};
// total size: 0x30
struct TT_SBit_Strike_ {
    // Members
    int num_ranges; // offset 0x0, size 0x4
    struct TT_SBit_Range * sbit_ranges; // offset 0x4, size 0x4
    unsigned int ranges_offset; // offset 0x8, size 0x4
    unsigned int color_ref; // offset 0xC, size 0x4
    struct TT_SBit_Line_Metrics_ hori; // offset 0x10, size 0xC
    struct TT_SBit_Line_Metrics_ vert; // offset 0x1C, size 0xC
    unsigned short start_glyph; // offset 0x28, size 0x2
    unsigned short end_glyph; // offset 0x2A, size 0x2
    unsigned char x_ppem; // offset 0x2C, size 0x1
    unsigned char y_ppem; // offset 0x2D, size 0x1
    unsigned char bit_depth; // offset 0x2E, size 0x1
    signed char flags; // offset 0x2F, size 0x1
};
// total size: 0x1C
struct TT_SBit_Scale_ {
    // Members
    struct TT_SBit_Line_Metrics_ hori; // offset 0x0, size 0xC
    struct TT_SBit_Line_Metrics_ vert; // offset 0xC, size 0xC
    unsigned char x_ppem; // offset 0x18, size 0x1
    unsigned char y_ppem; // offset 0x19, size 0x1
    unsigned char x_ppem_substitute; // offset 0x1A, size 0x1
    unsigned char y_ppem_substitute; // offset 0x1B, size 0x1
};
// total size: 0xC
struct TT_Post_20_ {
    // Members
    unsigned short num_glyphs; // offset 0x0, size 0x2
    unsigned short num_names; // offset 0x2, size 0x2
    unsigned short * glyph_indices; // offset 0x4, size 0x4
    signed char * * glyph_names; // offset 0x8, size 0x4
};
// total size: 0x8
struct TT_Post_25_ {
    // Members
    unsigned short num_glyphs; // offset 0x0, size 0x2
    signed char * offsets; // offset 0x4, size 0x4
};
// total size: 0x10
struct TT_Post_Names_ {
    // Members
    unsigned char loaded; // offset 0x0, size 0x1
    union {
        struct TT_Post_20_ format_20; // offset 0x0, size 0xC
        struct TT_Post_25_ format_25; // offset 0x0, size 0x8
    } names; // offset 0x4, size 0xC
};
// total size: 0x6
struct TT_Kern_0_Pair_ {
    // Members
    unsigned short left; // offset 0x0, size 0x2
    unsigned short right; // offset 0x2, size 0x2
    signed short value; // offset 0x4, size 0x2
};
// total size: 0x24C
struct TT_FaceRec_ {
    // Members
    struct FT_FaceRec_ root; // offset 0x0, size 0x7C
    struct TTC_Header_ ttc_header; // offset 0x7C, size 0x10
    unsigned short num_tables; // offset 0x8C, size 0x2
    struct TT_Table_ * dir_tables; // offset 0x90, size 0x4
    struct TT_Header_ header; // offset 0x94, size 0x38
    struct TT_HoriHeader_ horizontal; // offset 0xCC, size 0x2C
    struct TT_MaxProfile_ max_profile; // offset 0xF8, size 0x20
    unsigned int max_components; // offset 0x118, size 0x4
    unsigned char vertical_info; // offset 0x11C, size 0x1
    struct TT_VertHeader_ vertical; // offset 0x120, size 0x2C
    int num_names; // offset 0x14C, size 0x4
    struct TT_NameTable_ name_table; // offset 0x150, size 0x10
    struct TT_OS2_ os2; // offset 0x160, size 0x58
    struct TT_Postscript_ postscript; // offset 0x1B8, size 0x20
    int num_charmaps; // offset 0x1D8, size 0x4
    struct TT_CharMapRec_ * charmaps; // offset 0x1DC, size 0x4
    int (* goto_table)(struct TT_FaceRec_ *, unsigned int, struct FT_StreamRec_ *, unsigned int *); // offset 0x1E0, size 0x4
    void * sfnt; // offset 0x1E4, size 0x4
    void * psnames; // offset 0x1E8, size 0x4
    struct TT_Hdmx_ hdmx; // offset 0x1EC, size 0x8
    struct TT_Gasp_ gasp; // offset 0x1F4, size 0x8
    int num_sbit_strikes; // offset 0x1FC, size 0x4
    struct TT_SBit_Strike_ * sbit_strikes; // offset 0x200, size 0x4
    int num_sbit_scales; // offset 0x204, size 0x4
    struct TT_SBit_Scale_ * sbit_scales; // offset 0x208, size 0x4
    struct TT_Post_Names_ postscript_names; // offset 0x20C, size 0x10
    unsigned short num_locations; // offset 0x21C, size 0x2
    int * glyph_locations; // offset 0x220, size 0x4
    unsigned int font_program_size; // offset 0x224, size 0x4
    unsigned char * font_program; // offset 0x228, size 0x4
    unsigned int cvt_program_size; // offset 0x22C, size 0x4
    unsigned char * cvt_program; // offset 0x230, size 0x4
    unsigned int cvt_size; // offset 0x234, size 0x4
    signed short * cvt; // offset 0x238, size 0x4
    int num_kern_pairs; // offset 0x23C, size 0x4
    int kern_table_index; // offset 0x240, size 0x4
    struct TT_Kern_0_Pair_ * kern_pairs; // offset 0x244, size 0x4
    int (* interpreter)(void *); // offset 0x248, size 0x4
};
// total size: 0x28
struct TT_Size_Metrics_ {
    // Members
    int x_ratio; // offset 0x0, size 0x4
    int y_ratio; // offset 0x4, size 0x4
    unsigned short ppem; // offset 0x8, size 0x2
    int ratio; // offset 0xC, size 0x4
    int scale; // offset 0x10, size 0x4
    long compensations[4]; // offset 0x14, size 0x10
    unsigned char valid; // offset 0x24, size 0x1
    unsigned char rotated; // offset 0x25, size 0x1
    unsigned char stretched; // offset 0x26, size 0x1
};
// total size: 0x10
struct TT_DefRecord_ {
    // Members
    int range; // offset 0x0, size 0x4
    int start; // offset 0x4, size 0x4
    unsigned int opc; // offset 0x8, size 0x4
    unsigned char active; // offset 0xC, size 0x1
};
// total size: 0x8
struct TT_CodeRange_ {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x10
struct TT_CallRec_ {
    // Members
    int Caller_Range; // offset 0x0, size 0x4
    int Caller_IP; // offset 0x4, size 0x4
    int Cur_Count; // offset 0x8, size 0x4
    int Cur_Restart; // offset 0xC, size 0x4
};
// total size: 0x18
struct TT_Transform_ {
    // Members
    int xx; // offset 0x0, size 0x4
    int xy; // offset 0x4, size 0x4
    int yx; // offset 0x8, size 0x4
    int yy; // offset 0xC, size 0x4
    long ox; // offset 0x10, size 0x4
    long oy; // offset 0x14, size 0x4
};
// total size: 0x74
struct TT_SubglyphRec_ {
    // Members
    int index; // offset 0x0, size 0x4
    unsigned char is_scaled; // offset 0x4, size 0x1
    unsigned char is_hinted; // offset 0x5, size 0x1
    unsigned char preserve_pps; // offset 0x6, size 0x1
    int file_offset; // offset 0x8, size 0x4
    struct FT_BBox_ bbox; // offset 0xC, size 0x10
    int left_bearing; // offset 0x1C, size 0x4
    int advance; // offset 0x20, size 0x4
    struct FT_GlyphZone_ zone; // offset 0x24, size 0x1C
    int arg1; // offset 0x40, size 0x4
    int arg2; // offset 0x44, size 0x4
    unsigned short element_flag; // offset 0x48, size 0x2
    struct TT_Transform_ transform; // offset 0x4C, size 0x18
    struct FT_Vector_ pp1; // offset 0x64, size 0x8
    struct FT_Vector_ pp2; // offset 0x6C, size 0x8
};
// total size: 0x238
struct TT_ExecContextRec_ {
    // Members
    struct TT_FaceRec_ * face; // offset 0x0, size 0x4
    struct TT_SizeRec_ * size; // offset 0x4, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x8, size 0x4
    int error; // offset 0xC, size 0x4
    int top; // offset 0x10, size 0x4
    unsigned int stackSize; // offset 0x14, size 0x4
    int * stack; // offset 0x18, size 0x4
    int args; // offset 0x1C, size 0x4
    unsigned int new_top; // offset 0x20, size 0x4
    struct FT_GlyphZone_ zp0; // offset 0x24, size 0x1C
    struct FT_GlyphZone_ zp1; // offset 0x40, size 0x1C
    struct FT_GlyphZone_ zp2; // offset 0x5C, size 0x1C
    struct FT_GlyphZone_ pts; // offset 0x78, size 0x1C
    struct FT_GlyphZone_ twilight; // offset 0x94, size 0x1C
    struct FT_Size_Metrics_ metrics; // offset 0xB0, size 0x1C
    struct TT_Size_Metrics_ tt_metrics; // offset 0xCC, size 0x28
    struct TT_GraphicsState_ GS; // offset 0xF4, size 0x44
    int curRange; // offset 0x138, size 0x4
    unsigned char * code; // offset 0x13C, size 0x4
    int IP; // offset 0x140, size 0x4
    int codeSize; // offset 0x144, size 0x4
    unsigned char opcode; // offset 0x148, size 0x1
    int length; // offset 0x14C, size 0x4
    unsigned char step_ins; // offset 0x150, size 0x1
    int cvtSize; // offset 0x154, size 0x4
    int * cvt; // offset 0x158, size 0x4
    unsigned int glyphSize; // offset 0x15C, size 0x4
    unsigned char * glyphIns; // offset 0x160, size 0x4
    unsigned int numFDefs; // offset 0x164, size 0x4
    unsigned int maxFDefs; // offset 0x168, size 0x4
    struct TT_DefRecord_ * FDefs; // offset 0x16C, size 0x4
    unsigned int numIDefs; // offset 0x170, size 0x4
    unsigned int maxIDefs; // offset 0x174, size 0x4
    struct TT_DefRecord_ * IDefs; // offset 0x178, size 0x4
    unsigned int maxFunc; // offset 0x17C, size 0x4
    unsigned int maxIns; // offset 0x180, size 0x4
    int callTop; // offset 0x184, size 0x4
    int callSize; // offset 0x188, size 0x4
    struct TT_CallRec_ * callStack; // offset 0x18C, size 0x4
    unsigned short maxPoints; // offset 0x190, size 0x2
    signed short maxContours; // offset 0x192, size 0x2
    struct TT_CodeRange_ codeRangeTable[3]; // offset 0x194, size 0x18
    unsigned short storeSize; // offset 0x1AC, size 0x2
    int * storage; // offset 0x1B0, size 0x4
    long period; // offset 0x1B4, size 0x4
    long phase; // offset 0x1B8, size 0x4
    long threshold; // offset 0x1BC, size 0x4
    unsigned char instruction_trap; // offset 0x1C0, size 0x1
    struct TT_GraphicsState_ default_GS; // offset 0x1C4, size 0x44
    unsigned char is_composite; // offset 0x208, size 0x1
    unsigned char pedantic_hinting; // offset 0x209, size 0x1
    int F_dot_P; // offset 0x20C, size 0x4
    long (* func_round)(struct TT_ExecContextRec_ *, long, long); // offset 0x210, size 0x4
    long (* func_project)(struct TT_ExecContextRec_ *, struct FT_Vector_ *, struct FT_Vector_ *); // offset 0x214, size 0x4
    long (* func_dualproj)(struct TT_ExecContextRec_ *, struct FT_Vector_ *, struct FT_Vector_ *); // offset 0x218, size 0x4
    long (* func_freeProj)(struct TT_ExecContextRec_ *, struct FT_Vector_ *, struct FT_Vector_ *); // offset 0x21C, size 0x4
    void (* func_move)(struct TT_ExecContextRec_ *, struct FT_GlyphZone_ *, unsigned int, long); // offset 0x220, size 0x4
    long (* func_read_cvt)(struct TT_ExecContextRec_ *, unsigned int); // offset 0x224, size 0x4
    void (* func_write_cvt)(struct TT_ExecContextRec_ *, unsigned int, long); // offset 0x228, size 0x4
    void (* func_move_cvt)(struct TT_ExecContextRec_ *, unsigned int, long); // offset 0x22C, size 0x4
    unsigned int loadSize; // offset 0x230, size 0x4
    struct TT_SubglyphRec_ * loadStack; // offset 0x234, size 0x4
};
// total size: 0x100
struct TT_SizeRec_ {
    // Members
    struct FT_SizeRec_ root; // offset 0x0, size 0x28
    struct TT_Size_Metrics_ ttmetrics; // offset 0x28, size 0x28
    unsigned int num_function_defs; // offset 0x50, size 0x4
    unsigned int max_function_defs; // offset 0x54, size 0x4
    struct TT_DefRecord_ * function_defs; // offset 0x58, size 0x4
    unsigned int num_instruction_defs; // offset 0x5C, size 0x4
    unsigned int max_instruction_defs; // offset 0x60, size 0x4
    struct TT_DefRecord_ * instruction_defs; // offset 0x64, size 0x4
    unsigned int max_func; // offset 0x68, size 0x4
    unsigned int max_ins; // offset 0x6C, size 0x4
    struct TT_CodeRange_ codeRangeTable[3]; // offset 0x70, size 0x18
    struct TT_GraphicsState_ GS; // offset 0x88, size 0x44
    unsigned int cvt_size; // offset 0xCC, size 0x4
    int * cvt; // offset 0xD0, size 0x4
    unsigned short storage_size; // offset 0xD4, size 0x2
    int * storage; // offset 0xD8, size 0x4
    struct FT_GlyphZone_ twilight; // offset 0xDC, size 0x1C
    unsigned char debug; // offset 0xF8, size 0x1
    struct TT_ExecContextRec_ * context; // offset 0xFC, size 0x4
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
struct FT_DriverInterface_ tt_driver_interface; // size: 0x58, address: 0x800FAE10
// total size: 0x4
struct TT_LongMetrics_ {
    // Members
    unsigned short advance; // offset 0x0, size 0x2
    signed short bearing; // offset 0x2, size 0x2
};
// total size: 0x8
struct FT_Vector_ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x10
struct FT_BBox_ {
    // Members
    int xMin; // offset 0x0, size 0x4
    int yMin; // offset 0x4, size 0x4
    int xMax; // offset 0x8, size 0x4
    int yMax; // offset 0xC, size 0x4
};
// total size: 0x4
struct FT_UnitVector_ {
    // Members
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
};
// total size: 0x44
struct TT_GraphicsState_ {
    // Members
    unsigned short rp0; // offset 0x0, size 0x2
    unsigned short rp1; // offset 0x2, size 0x2
    unsigned short rp2; // offset 0x4, size 0x2
    struct FT_UnitVector_ dualVector; // offset 0x6, size 0x4
    struct FT_UnitVector_ projVector; // offset 0xA, size 0x4
    struct FT_UnitVector_ freeVector; // offset 0xE, size 0x4
    int loop; // offset 0x14, size 0x4
    long minimum_distance; // offset 0x18, size 0x4
    int round_state; // offset 0x1C, size 0x4
    unsigned char auto_flip; // offset 0x20, size 0x1
    long control_value_cutin; // offset 0x24, size 0x4
    long single_width_cutin; // offset 0x28, size 0x4
    long single_width_value; // offset 0x2C, size 0x4
    signed short delta_base; // offset 0x30, size 0x2
    signed short delta_shift; // offset 0x32, size 0x2
    unsigned char instruct_control; // offset 0x34, size 0x1
    unsigned char scan_control; // offset 0x35, size 0x1
    int scan_type; // offset 0x38, size 0x4
    unsigned short gep0; // offset 0x3C, size 0x2
    unsigned short gep1; // offset 0x3E, size 0x2
    unsigned short gep2; // offset 0x40, size 0x2
};
static struct TT_GraphicsState_ tt_default_graphics_state; // size: 0x44, address: 0x800FAE68
// total size: 0x5C
struct SFNT_Interface_ {
    // Members
    int (* goto_table)(struct TT_FaceRec_ *, unsigned int, struct FT_StreamRec_ *, unsigned int *); // offset 0x0, size 0x4
    int (* load_any)(struct TT_FaceRec_ *, unsigned int, int, void *, int *); // offset 0x4, size 0x4
    int (* load_format_tag)(struct TT_FaceRec_ *, struct FT_StreamRec_ *, int, unsigned int *); // offset 0x8, size 0x4
    int (* load_directory)(struct TT_FaceRec_ *, struct FT_StreamRec_ *, int); // offset 0xC, size 0x4
    int (* load_header)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x10, size 0x4
    int (* load_metrics)(struct TT_FaceRec_ *, struct FT_StreamRec_ *, unsigned char); // offset 0x14, size 0x4
    int (* load_charmaps)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x18, size 0x4
    int (* load_max_profile)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x1C, size 0x4
    int (* load_os2)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x20, size 0x4
    int (* load_psnames)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x24, size 0x4
    int (* load_names)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x28, size 0x4
    void (* free_names)(struct TT_FaceRec_ *); // offset 0x2C, size 0x4
    int (* load_hdmx)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x30, size 0x4
    void (* free_hdmx)(struct TT_FaceRec_ *); // offset 0x34, size 0x4
    int (* load_kerning)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x38, size 0x4
    int (* load_gasp)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x3C, size 0x4
    int (* load_sbits)(struct TT_FaceRec_ *, struct FT_StreamRec_ *); // offset 0x40, size 0x4
    int (* load_sbit_image)(struct TT_FaceRec_ *, int, int, unsigned int, struct FT_StreamRec_ *, struct FT_Bitmap_ *, struct TT_SBit_Metrics_ *); // offset 0x44, size 0x4
    void (* free_sbits)(struct TT_FaceRec_ *); // offset 0x48, size 0x4
    int (* get_psname)(struct TT_FaceRec_ *, unsigned int, char * *); // offset 0x4C, size 0x4
    void (* free_psnames)(struct TT_FaceRec_ *); // offset 0x50, size 0x4
    int (* load_charmap)(struct TT_FaceRec_ *, struct TT_CMapTable_ *, struct FT_StreamRec_ *); // offset 0x54, size 0x4
    int (* free_charmap)(struct TT_FaceRec_ *, struct TT_CMapTable_ *); // offset 0x58, size 0x4
};
// total size: 0x94
struct TT_Loader_ {
    // Members
    struct TT_FaceRec_ * face; // offset 0x0, size 0x4
    struct TT_SizeRec_ * size; // offset 0x4, size 0x4
    struct FT_GlyphSlotRec_ * glyph; // offset 0x8, size 0x4
    unsigned int load_flags; // offset 0xC, size 0x4
    unsigned int glyph_index; // offset 0x10, size 0x4
    struct FT_StreamRec_ * stream; // offset 0x14, size 0x4
    int byte_len; // offset 0x18, size 0x4
    int left_points; // offset 0x1C, size 0x4
    int left_contours; // offset 0x20, size 0x4
    struct FT_BBox_ bbox; // offset 0x24, size 0x10
    int left_bearing; // offset 0x34, size 0x4
    int advance; // offset 0x38, size 0x4
    unsigned char preserve_pps; // offset 0x3C, size 0x1
    struct FT_Vector_ pp1; // offset 0x40, size 0x8
    struct FT_Vector_ pp2; // offset 0x48, size 0x8
    unsigned int glyf_offset; // offset 0x50, size 0x4
    struct FT_GlyphZone_ base; // offset 0x54, size 0x1C
    struct FT_GlyphZone_ zone; // offset 0x70, size 0x1C
    struct TT_ExecContextRec_ * exec; // offset 0x8C, size 0x4
    unsigned char * instructions; // offset 0x90, size 0x4
};
// total size: 0x8
struct TT_SBit_Metrics_ {
    // Members
    unsigned char height; // offset 0x0, size 0x1
    unsigned char width; // offset 0x1, size 0x1
    signed char horiBearingX; // offset 0x2, size 0x1
    signed char horiBearingY; // offset 0x3, size 0x1
    unsigned char horiAdvance; // offset 0x4, size 0x1
    signed char vertBearingX; // offset 0x5, size 0x1
    signed char vertBearingY; // offset 0x6, size 0x1
    unsigned char vertAdvance; // offset 0x7, size 0x1
};
// total size: 0xA4
struct TT_DriverRec_ {
    // Members
    struct FT_DriverRec_ root; // offset 0x0, size 0x80
    struct TT_ExecContextRec_ * context; // offset 0x80, size 0x4
    struct FT_GlyphZone_ zone; // offset 0x84, size 0x1C
    void * extension_component; // offset 0xA0, size 0x4
};
static unsigned char Pop_Push_Count[256]; // size: 0x100, address: 0x800FAEAC
static signed char opcode_length[256]; // size: 0x100, address: 0x800FAFAC
static struct FT_Vector_ Null_Vector; // size: 0x8, address: 0x8013BE08
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
// total size: 0x8
struct LOC_Ins_IUP {
    // Members
    struct FT_Vector_ * orgs; // offset 0x0, size 0x4
    struct FT_Vector_ * curs; // offset 0x4, size 0x4
};



