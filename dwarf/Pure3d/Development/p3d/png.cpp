/*
    Compile unit: D:\Pure3d\development\p3d\png.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80048C78 -> 0x80049B40
*/
// total size: 0xC
struct png_row_info_struct {
    // Members
    unsigned long width; // offset 0x0, size 0x4
    unsigned long rowbytes; // offset 0x4, size 0x4
    unsigned char color_type; // offset 0x8, size 0x1
    unsigned char bit_depth; // offset 0x9, size 0x1
    unsigned char channels; // offset 0xA, size 0x1
    unsigned char pixel_depth; // offset 0xB, size 0x1
};
// total size: 0x0
struct internal_state {};
// total size: 0x38
struct z_stream_s {
    // Members
    unsigned char * next_in; // offset 0x0, size 0x4
    unsigned int avail_in; // offset 0x4, size 0x4
    unsigned long total_in; // offset 0x8, size 0x4
    unsigned char * next_out; // offset 0xC, size 0x4
    unsigned int avail_out; // offset 0x10, size 0x4
    unsigned long total_out; // offset 0x14, size 0x4
    char * msg; // offset 0x18, size 0x4
    struct internal_state * state; // offset 0x1C, size 0x4
    void * (* zalloc)(void *, unsigned int, unsigned int); // offset 0x20, size 0x4
    void (* zfree)(void *, void *); // offset 0x24, size 0x4
    void * opaque; // offset 0x28, size 0x4
    int data_type; // offset 0x2C, size 0x4
    unsigned long adler; // offset 0x30, size 0x4
    unsigned long reserved; // offset 0x34, size 0x4
};
// total size: 0x3
struct png_color_struct {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
};
// total size: 0xA
struct png_color_16_struct {
    // Members
    unsigned char index; // offset 0x0, size 0x1
    unsigned short red; // offset 0x2, size 0x2
    unsigned short green; // offset 0x4, size 0x2
    unsigned short blue; // offset 0x6, size 0x2
    unsigned short gray; // offset 0x8, size 0x2
};
// total size: 0x5
struct png_color_8_struct {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char gray; // offset 0x3, size 0x1
    unsigned char alpha; // offset 0x4, size 0x1
};
// total size: 0x10
struct png_text_struct {
    // Members
    int compression; // offset 0x0, size 0x4
    char * key; // offset 0x4, size 0x4
    char * text; // offset 0x8, size 0x4
    unsigned long text_length; // offset 0xC, size 0x4
};
// total size: 0x8
struct png_time_struct {
    // Members
    unsigned short year; // offset 0x0, size 0x2
    unsigned char month; // offset 0x2, size 0x1
    unsigned char day; // offset 0x3, size 0x1
    unsigned char hour; // offset 0x4, size 0x1
    unsigned char minute; // offset 0x5, size 0x1
    unsigned char second; // offset 0x6, size 0x1
};
// total size: 0xB8
struct png_info_struct {
    // Members
    unsigned long width; // offset 0x0, size 0x4
    unsigned long height; // offset 0x4, size 0x4
    unsigned long valid; // offset 0x8, size 0x4
    unsigned long rowbytes; // offset 0xC, size 0x4
    struct png_color_struct * palette; // offset 0x10, size 0x4
    unsigned short num_palette; // offset 0x14, size 0x2
    unsigned short num_trans; // offset 0x16, size 0x2
    unsigned char bit_depth; // offset 0x18, size 0x1
    unsigned char color_type; // offset 0x19, size 0x1
    unsigned char compression_type; // offset 0x1A, size 0x1
    unsigned char filter_type; // offset 0x1B, size 0x1
    unsigned char interlace_type; // offset 0x1C, size 0x1
    unsigned char channels; // offset 0x1D, size 0x1
    unsigned char pixel_depth; // offset 0x1E, size 0x1
    unsigned char spare_byte; // offset 0x1F, size 0x1
    unsigned char signature[8]; // offset 0x20, size 0x8
    float gamma; // offset 0x28, size 0x4
    unsigned char srgb_intent; // offset 0x2C, size 0x1
    int num_text; // offset 0x30, size 0x4
    int max_text; // offset 0x34, size 0x4
    struct png_text_struct * text; // offset 0x38, size 0x4
    struct png_time_struct mod_time; // offset 0x3C, size 0x8
    struct png_color_8_struct sig_bit; // offset 0x44, size 0x5
    unsigned char * trans; // offset 0x4C, size 0x4
    struct png_color_16_struct trans_values; // offset 0x50, size 0xA
    struct png_color_16_struct background; // offset 0x5A, size 0xA
    unsigned long x_offset; // offset 0x64, size 0x4
    unsigned long y_offset; // offset 0x68, size 0x4
    unsigned char offset_unit_type; // offset 0x6C, size 0x1
    unsigned long x_pixels_per_unit; // offset 0x70, size 0x4
    unsigned long y_pixels_per_unit; // offset 0x74, size 0x4
    unsigned char phys_unit_type; // offset 0x78, size 0x1
    unsigned short * hist; // offset 0x7C, size 0x4
    float x_white; // offset 0x80, size 0x4
    float y_white; // offset 0x84, size 0x4
    float x_red; // offset 0x88, size 0x4
    float y_red; // offset 0x8C, size 0x4
    float x_green; // offset 0x90, size 0x4
    float y_green; // offset 0x94, size 0x4
    float x_blue; // offset 0x98, size 0x4
    float y_blue; // offset 0x9C, size 0x4
    char * pcal_purpose; // offset 0xA0, size 0x4
    long pcal_X0; // offset 0xA4, size 0x4
    long pcal_X1; // offset 0xA8, size 0x4
    char * pcal_units; // offset 0xAC, size 0x4
    char * * pcal_params; // offset 0xB0, size 0x4
    unsigned char pcal_type; // offset 0xB4, size 0x1
    unsigned char pcal_nparams; // offset 0xB5, size 0x1
};
// total size: 0x2F4
struct png_struct_def {
    // Members
    long * jmpbuf[70]; // offset 0x0, size 0x118
    void (* error_fn)(struct png_struct_def *, char *); // offset 0x118, size 0x4
    void (* warning_fn)(struct png_struct_def *, char *); // offset 0x11C, size 0x4
    void * error_ptr; // offset 0x120, size 0x4
    void (* write_data_fn)(struct png_struct_def *, unsigned char *, unsigned long); // offset 0x124, size 0x4
    void (* read_data_fn)(struct png_struct_def *, unsigned char *, unsigned long); // offset 0x128, size 0x4
    void (* read_user_transform_fn)(struct png_struct_def *, struct png_row_info_struct *, unsigned char *); // offset 0x12C, size 0x4
    void (* write_user_transform_fn)(struct png_struct_def *, struct png_row_info_struct *, unsigned char *); // offset 0x130, size 0x4
    void * io_ptr; // offset 0x134, size 0x4
    unsigned long mode; // offset 0x138, size 0x4
    unsigned long flags; // offset 0x13C, size 0x4
    unsigned long transformations; // offset 0x140, size 0x4
    struct z_stream_s zstream; // offset 0x144, size 0x38
    unsigned char * zbuf; // offset 0x17C, size 0x4
    unsigned long zbuf_size; // offset 0x180, size 0x4
    int zlib_level; // offset 0x184, size 0x4
    int zlib_method; // offset 0x188, size 0x4
    int zlib_window_bits; // offset 0x18C, size 0x4
    int zlib_mem_level; // offset 0x190, size 0x4
    int zlib_strategy; // offset 0x194, size 0x4
    unsigned long width; // offset 0x198, size 0x4
    unsigned long height; // offset 0x19C, size 0x4
    unsigned long num_rows; // offset 0x1A0, size 0x4
    unsigned long usr_width; // offset 0x1A4, size 0x4
    unsigned long rowbytes; // offset 0x1A8, size 0x4
    unsigned long irowbytes; // offset 0x1AC, size 0x4
    unsigned long iwidth; // offset 0x1B0, size 0x4
    unsigned long row_number; // offset 0x1B4, size 0x4
    unsigned char * prev_row; // offset 0x1B8, size 0x4
    unsigned char * row_buf; // offset 0x1BC, size 0x4
    unsigned char * sub_row; // offset 0x1C0, size 0x4
    unsigned char * up_row; // offset 0x1C4, size 0x4
    unsigned char * avg_row; // offset 0x1C8, size 0x4
    unsigned char * paeth_row; // offset 0x1CC, size 0x4
    struct png_row_info_struct row_info; // offset 0x1D0, size 0xC
    unsigned long idat_size; // offset 0x1DC, size 0x4
    unsigned long crc; // offset 0x1E0, size 0x4
    struct png_color_struct * palette; // offset 0x1E4, size 0x4
    unsigned short num_palette; // offset 0x1E8, size 0x2
    unsigned short num_trans; // offset 0x1EA, size 0x2
    unsigned char chunk_name[5]; // offset 0x1EC, size 0x5
    unsigned char compression; // offset 0x1F1, size 0x1
    unsigned char filter; // offset 0x1F2, size 0x1
    unsigned char interlaced; // offset 0x1F3, size 0x1
    unsigned char pass; // offset 0x1F4, size 0x1
    unsigned char do_filter; // offset 0x1F5, size 0x1
    unsigned char color_type; // offset 0x1F6, size 0x1
    unsigned char bit_depth; // offset 0x1F7, size 0x1
    unsigned char usr_bit_depth; // offset 0x1F8, size 0x1
    unsigned char pixel_depth; // offset 0x1F9, size 0x1
    unsigned char channels; // offset 0x1FA, size 0x1
    unsigned char usr_channels; // offset 0x1FB, size 0x1
    unsigned char sig_bytes; // offset 0x1FC, size 0x1
    unsigned short filler; // offset 0x1FE, size 0x2
    unsigned char background_gamma_type; // offset 0x200, size 0x1
    float background_gamma; // offset 0x204, size 0x4
    struct png_color_16_struct background; // offset 0x208, size 0xA
    struct png_color_16_struct background_1; // offset 0x212, size 0xA
    void (* output_flush_fn)(struct png_struct_def *); // offset 0x21C, size 0x4
    unsigned long flush_dist; // offset 0x220, size 0x4
    unsigned long flush_rows; // offset 0x224, size 0x4
    int gamma_shift; // offset 0x228, size 0x4
    float gamma; // offset 0x22C, size 0x4
    float screen_gamma; // offset 0x230, size 0x4
    unsigned char * gamma_table; // offset 0x234, size 0x4
    unsigned char * gamma_from_1; // offset 0x238, size 0x4
    unsigned char * gamma_to_1; // offset 0x23C, size 0x4
    unsigned short * * gamma_16_table; // offset 0x240, size 0x4
    unsigned short * * gamma_16_from_1; // offset 0x244, size 0x4
    unsigned short * * gamma_16_to_1; // offset 0x248, size 0x4
    struct png_color_8_struct sig_bit; // offset 0x24C, size 0x5
    struct png_color_8_struct shift; // offset 0x251, size 0x5
    unsigned char * trans; // offset 0x258, size 0x4
    struct png_color_16_struct trans_values; // offset 0x25C, size 0xA
    void (* read_row_fn)(struct png_struct_def *, unsigned long, int); // offset 0x268, size 0x4
    void (* write_row_fn)(struct png_struct_def *, unsigned long, int); // offset 0x26C, size 0x4
    void (* info_fn)(struct png_struct_def *, struct png_info_struct *); // offset 0x270, size 0x4
    void (* row_fn)(struct png_struct_def *, unsigned char *, unsigned long, int); // offset 0x274, size 0x4
    void (* end_fn)(struct png_struct_def *, struct png_info_struct *); // offset 0x278, size 0x4
    unsigned char * save_buffer_ptr; // offset 0x27C, size 0x4
    unsigned char * save_buffer; // offset 0x280, size 0x4
    unsigned char * current_buffer_ptr; // offset 0x284, size 0x4
    unsigned char * current_buffer; // offset 0x288, size 0x4
    unsigned long push_length; // offset 0x28C, size 0x4
    unsigned long skip_length; // offset 0x290, size 0x4
    unsigned long save_buffer_size; // offset 0x294, size 0x4
    unsigned long save_buffer_max; // offset 0x298, size 0x4
    unsigned long buffer_size; // offset 0x29C, size 0x4
    unsigned long current_buffer_size; // offset 0x2A0, size 0x4
    int process_mode; // offset 0x2A4, size 0x4
    int cur_palette; // offset 0x2A8, size 0x4
    unsigned long current_text_size; // offset 0x2AC, size 0x4
    unsigned long current_text_left; // offset 0x2B0, size 0x4
    char * current_text; // offset 0x2B4, size 0x4
    char * current_text_ptr; // offset 0x2B8, size 0x4
    unsigned char * palette_lookup; // offset 0x2BC, size 0x4
    unsigned char * dither_index; // offset 0x2C0, size 0x4
    unsigned short * hist; // offset 0x2C4, size 0x4
    unsigned char heuristic_method; // offset 0x2C8, size 0x1
    unsigned char num_prev_filters; // offset 0x2C9, size 0x1
    unsigned char * prev_filters; // offset 0x2CC, size 0x4
    unsigned short * filter_weights; // offset 0x2D0, size 0x4
    unsigned short * inv_filter_weights; // offset 0x2D4, size 0x4
    unsigned short * filter_costs; // offset 0x2D8, size 0x4
    unsigned short * inv_filter_costs; // offset 0x2DC, size 0x4
    char * time_buffer; // offset 0x2E0, size 0x4
    void * mem_ptr; // offset 0x2E4, size 0x4
    void * (* malloc_fn)(struct png_struct_def *, unsigned long); // offset 0x2E8, size 0x4
    void (* free_fn)(struct png_struct_def *, struct png_struct_def *); // offset 0x2EC, size 0x4
    unsigned char rgb_to_gray_status; // offset 0x2F0, size 0x1
    unsigned char rgb_to_gray_red_coeff; // offset 0x2F1, size 0x1
    unsigned char rgb_to_gray_green_coeff; // offset 0x2F2, size 0x1
    unsigned char rgb_to_gray_blue_coeff; // offset 0x2F3, size 0x1
};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
// Range: 0x80048C78 -> 0x80048CCC
static void pngRead(struct png_struct_def * png_ptr /* r3 */, unsigned char * data /* r30 */, unsigned long length /* r31 */) {
    // Local variables
    class tFile * read; // r3
}

// Range: 0x80048CCC -> 0x80048D04
static void p3d_png_err(const char * message /* r31 */) {}

// Range: 0x80048D04 -> 0x80048D3C
static void p3d_png_warn(const char * message /* r31 */) {}

// Range: 0x80048D3C -> 0x80048D60
static void * p3d_png_malloc(unsigned long size /* r4 */) {}

// Range: 0x80048D60 -> 0x80048D84
static void p3d_png_free(struct png_struct_def * data /* r4 */) {}

// total size: 0x18
class tPNGHandler : public tImageHandler {
    // Functions
    void CreateImage(class tFile * file, class Builder * builder);
};
// Range: 0x80048D84 -> 0x80048E08
unsigned char tPNGHandler::CheckHeader(class tFile * file /* r31 */) {
    // Local variables
    char tmp[8]; // r1+0x10
}

// Range: 0x80048E08 -> 0x8004905C
// this: r3
void tPNGHandler::CreateImage(class tFile * file /* r29 */, class Builder * builder /* r31 */) {
    // Local variables
    struct png_struct_def * pPNG; // r1+0x18
    struct png_info_struct * pngInfo; // r1+0x14
    int channelDepth; // r30
    unsigned int colourType; // r29
    unsigned int interlaceType; // r1+0x8
}

// Range: 0x8004905C -> 0x80049064
unsigned char tPNGHandler::SaveImage() {}

// Range: 0x80049064 -> 0x80049598
static void LoadPNG4(struct png_struct_def * pPNG /* r30 */, struct png_info_struct * pngInfo /* r27 */, class Builder * builder /* r29 */) {
    // Local variables
    int width; // r26
    int height; // r28
    int numPalette; // r1+0x454
    struct png_color_struct * srcPalette; // r1+0x450
    struct pddiColour dstPalette[256]; // r1+0x50
    int i; // r1+0x8
    int numAlpha; // r1+0x4C
    unsigned char * srcAlpha; // r1+0x48
    int i; // r4
    unsigned char * srcRow; // r31
    unsigned char * dstRow; // r25
    int y; // r24
    int i; // r9
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x80049598 -> 0x80049910
static void LoadPNG8(struct png_struct_def * pPNG /* r30 */, struct png_info_struct * pngInfo /* r27 */, class Builder * builder /* r29 */) {
    // Local variables
    int width; // r26
    int height; // r28
    int numPalette; // r1+0x440
    struct png_color_struct * srcPalette; // r1+0x43C
    struct pddiColour dstPalette[256]; // r1+0x3C
    int i; // r1+0x8
    int numAlpha; // r1+0x38
    unsigned char * srcAlpha; // r1+0x34
    int i; // r4
    unsigned char * row; // r26
    int y; // r27
}

// Range: 0x80049910 -> 0x80049ABC
static void LoadPNG32(struct png_struct_def * pPNG /* r30 */, struct png_info_struct * pngInfo /* r26 */, class Builder * builder /* r31 */) {
    // Local variables
    int bpp; // r29
    int width; // r28
    int height; // r27
    unsigned int * row; // r29
    int y; // r26
    int a; // r1+0x8
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138088
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80138090
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x80138098
static // total size: 0x8
struct {} tPNGHandler::__RTTI; // size: 0x8, address: 0x801380A0
// total size: 0x3C
struct {} tPNGHandler::__vtable; // size: 0x3C, address: 0x8010218C
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
};
enum pddiPixelFormat {
    PDDI_PIXEL_UNKNOWN = 0,
    PDDI_PIXEL_RGB565 = 1,
    PDDI_PIXEL_ARGB1555 = 2,
    PDDI_PIXEL_RGB555 = 3,
    PDDI_PIXEL_ARGB4444 = 4,
    PDDI_PIXEL_RGB888 = 5,
    PDDI_PIXEL_ARGB8888 = 6,
    PDDI_PIXEL_PAL8 = 7,
    PDDI_PIXEL_PAL4 = 8,
    PDDI_PIXEL_LUM8 = 9,
    PDDI_PIXEL_DUDV88 = 10,
    PDDI_PIXEL_DXT1 = 11,
    PDDI_PIXEL_DXT2 = 12,
    PDDI_PIXEL_DXT3 = 13,
    PDDI_PIXEL_DXT4 = 14,
    PDDI_PIXEL_DXT5 = 15,
    PDDI_PIXEL_Z32 = 16,
    PDDI_PIXEL_Z24 = 17,
    PDDI_PIXEL_Z16 = 18,
    PDDI_PIXEL_Z8 = 19,
    PDDI_PIXEL_PS2_4BIT = 20,
    PDDI_PIXEL_PS2_8BIT = 21,
    PDDI_PIXEL_PS2_16BIT = 22,
    PDDI_PIXEL_PS2_32BIT = 23,
};
// total size: 0x50
struct pddiLockInfo {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum pddiPixelFormat format; // offset 0xC, size 0x4
    unsigned char native; // offset 0x10, size 0x1
    int rgbaLShift[4]; // offset 0x14, size 0x10
    int rgbaRShift[4]; // offset 0x24, size 0x10
    unsigned int rgbaMask[4]; // offset 0x34, size 0x10
    int pitch; // offset 0x44, size 0x4
    void * bits; // offset 0x48, size 0x4
    void * palette; // offset 0x4C, size 0x4
};
// total size: 0x30
class tImage : public tEntity {
    // Members
protected:
    unsigned char permanent; // offset 0x10, size 0x1
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
    unsigned int key; // offset 0x20, size 0x4
    int alphaDepth; // offset 0x24, size 0x4
    unsigned char * image; // offset 0x28, size 0x4
    unsigned char hasAlpha; // offset 0x2C, size 0x1
    unsigned char keyEnabled; // offset 0x2D, size 0x1
};
enum pddiTextureType {
    PDDI_TEXTYPE_RGB = 0,
    PDDI_TEXTYPE_PALETTIZED = 1,
    PDDI_TEXTYPE_LUMINANCE = 2,
    PDDI_TEXTYPE_BUMPMAP = 3,
    PDDI_TEXTYPE_DXT1 = 4,
    PDDI_TEXTYPE_DXT2 = 5,
    PDDI_TEXTYPE_DXT3 = 6,
    PDDI_TEXTYPE_DXT4 = 7,
    PDDI_TEXTYPE_DXT5 = 8,
    PDDI_TEXTYPE_IPU = 9,
    PDDI_TEXTYPE_Z = 10,
    PDDI_TEXTURE_LINEAR = 11,
    PDDI_TEXTYPE_RENDERTARGET = 12,
    PDDI_TEXTYPE_PS2_4BIT = 13,
    PDDI_TEXTYPE_PS2_8BIT = 14,
    PDDI_TEXTYPE_PS2_16BIT = 15,
    PDDI_TEXTYPE_PS2_32BIT = 16,
};
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x8
class tFileHandler : public tRefCounted {};



