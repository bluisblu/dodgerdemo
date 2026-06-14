/*
    Compile unit: D:\Pure3d\development\lib\libpng\png.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800833C4 -> 0x8008377C
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
char png_libpng_ver[12]; // size: 0xC, address: 0x80109FA0
unsigned char png_sig[8]; // size: 0x8, address: 0x80139390
unsigned char png_IHDR[5]; // size: 0x5, address: 0x80139398
unsigned char png_IDAT[5]; // size: 0x5, address: 0x801393A0
unsigned char png_IEND[5]; // size: 0x5, address: 0x801393A8
unsigned char png_PLTE[5]; // size: 0x5, address: 0x801393B0
unsigned char png_bKGD[5]; // size: 0x5, address: 0x801393B8
unsigned char png_cHRM[5]; // size: 0x5, address: 0x801393C0
unsigned char png_gAMA[5]; // size: 0x5, address: 0x801393C8
unsigned char png_hIST[5]; // size: 0x5, address: 0x801393D0
unsigned char png_oFFs[5]; // size: 0x5, address: 0x801393D8
unsigned char png_pCAL[5]; // size: 0x5, address: 0x801393E0
unsigned char png_pHYs[5]; // size: 0x5, address: 0x801393E8
unsigned char png_sBIT[5]; // size: 0x5, address: 0x801393F0
unsigned char png_sRGB[5]; // size: 0x5, address: 0x801393F8
unsigned char png_tEXt[5]; // size: 0x5, address: 0x80139400
unsigned char png_tIME[5]; // size: 0x5, address: 0x80139408
unsigned char png_tRNS[5]; // size: 0x5, address: 0x80139410
unsigned char png_zTXt[5]; // size: 0x5, address: 0x80139418
int png_pass_start[7]; // size: 0x1C, address: 0x80109FAC
int png_pass_inc[7]; // size: 0x1C, address: 0x80109FC8
int png_pass_ystart[7]; // size: 0x1C, address: 0x80109FE4
int png_pass_yinc[7]; // size: 0x1C, address: 0x8010A000
int png_pass_mask[7]; // size: 0x1C, address: 0x8010A01C
int png_pass_dsp_mask[7]; // size: 0x1C, address: 0x8010A038
// Range: 0x800833C4 -> 0x80083434
int png_sig_cmp(unsigned char * sig /* r3 */, unsigned long start /* r6 */, unsigned long num_to_check /* r5 */) {
    // References
    // -> unsigned char png_sig[8];
}

// Range: 0x80083434 -> 0x800834B8
void * png_zalloc(void * png_ptr /* r3 */, unsigned int items /* r1+0xC */, unsigned int size /* r1+0x10 */) {
    // Local variables
    unsigned long num_bytes; // r31
    void * ptr; // r30
}

// Range: 0x800834B8 -> 0x800834D8
void png_zfree(void * png_ptr /* r3 */, void * ptr /* r4 */) {}

// Range: 0x800834D8 -> 0x80083514
void png_reset_crc(struct png_struct_def * png_ptr /* r31 */) {}

// Range: 0x80083514 -> 0x80083588
void png_calculate_crc(struct png_struct_def * png_ptr /* r31 */, unsigned char * ptr /* r4 */, unsigned long length /* r5 */) {
    // Local variables
    int need_crc; // r3
}

// Range: 0x80083588 -> 0x800835DC
struct png_info_struct * png_create_info_struct(struct png_struct_def * png_ptr /* r4 */) {
    // Local variables
    struct png_info_struct * info_ptr; // r31
}

// Range: 0x800835DC -> 0x8008364C
void png_destroy_info_struct(struct png_struct_def * png_ptr /* r29 */, struct png_info_struct * * info_ptr_ptr /* r30 */) {
    // Local variables
    struct png_info_struct * info_ptr; // r31
}

// Range: 0x8008364C -> 0x80083674
void png_info_init(struct png_info_struct * info_ptr /* r3 */) {}

// Range: 0x80083674 -> 0x80083774
void png_info_destroy(struct png_struct_def * png_ptr /* r28 */, struct png_info_struct * info_ptr /* r29 */) {
    // Local variables
    int i; // r30
    int i; // r30
}

// Range: 0x80083774 -> 0x8008377C
void * png_get_io_ptr(struct png_struct_def * png_ptr /* r3 */) {}

// total size: 0x48
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    // total size: 0x4
    struct {
        // Members
        unsigned int open_mode : 2; // offset 0x0, size 0x4
        unsigned int io_mode : 3; // offset 0x0, size 0x4
        unsigned int buffer_mode : 2; // offset 0x0, size 0x4
        unsigned int file_kind : 3; // offset 0x0, size 0x4
        unsigned int file_orientation : 2; // offset 0x0, size 0x4
        unsigned int binary_io : 1; // offset 0x0, size 0x4
    } mode; // offset 0x4, size 0x4
    // total size: 0x4
    struct {
        // Members
        unsigned int io_state : 3; // offset 0x0, size 0x4
        unsigned int free_buffer : 1; // offset 0x0, size 0x4
        unsigned char eof; // offset 0x1, size 0x1
        unsigned char error; // offset 0x2, size 0x1
    } state; // offset 0x8, size 0x4
    unsigned char char_buffer; // offset 0xC, size 0x1
    unsigned char char_buffer_overflow; // offset 0xD, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xE, size 0x2
    unsigned short ungetwc_buffer[2]; // offset 0x10, size 0x4
    unsigned long position; // offset 0x14, size 0x4
    unsigned char * buffer; // offset 0x18, size 0x4
    unsigned long buffer_size; // offset 0x1C, size 0x4
    unsigned char * buffer_ptr; // offset 0x20, size 0x4
    unsigned long buffer_len; // offset 0x24, size 0x4
    unsigned long buffer_alignment; // offset 0x28, size 0x4
    unsigned long saved_buffer_len; // offset 0x2C, size 0x4
    unsigned long buffer_pos; // offset 0x30, size 0x4
    int (* position_proc)(unsigned long, unsigned long *, int, void (*)()); // offset 0x34, size 0x4
    int (* read_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x38, size 0x4
    int (* write_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x3C, size 0x4
    int (* close_proc)(unsigned long); // offset 0x40, size 0x4
    void (* idle_proc)(); // offset 0x44, size 0x4
};



