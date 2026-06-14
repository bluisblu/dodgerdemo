/*
    Compile unit: D:\Pure3d\development\lib\libpng\pngrtran.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800850F8 -> 0x8008D114
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
// Range: 0x800850F8 -> 0x80085108
void png_set_strip_16(struct png_struct_def * png_ptr /* r1+0x0 */) {}

// Range: 0x80085108 -> 0x80085118
void png_set_strip_alpha(struct png_struct_def * png_ptr /* r1+0x0 */) {}

// total size: 0x3
struct png_color_struct {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
};
// total size: 0x8
struct png_dsort_struct {
    // Members
    struct png_dsort_struct * next; // offset 0x0, size 0x4
    unsigned char left; // offset 0x4, size 0x1
    unsigned char right; // offset 0x5, size 0x1
};
// Range: 0x80085118 -> 0x80085128
void png_set_expand(struct png_struct_def * png_ptr /* r1+0x0 */) {}

// Range: 0x80085128 -> 0x800860D0
void png_init_read_transformations(struct png_struct_def * png_ptr /* r31 */) {
    // Local variables
    int color_type; // r30
    int i; // r6
    int istop; // r1+0x8
    struct png_color_struct back; // r1+0x20
    struct png_color_struct * palette; // r29
    int num_palette; // r28
    int i; // r6
    double g; // f31
    double gs; // f30
    unsigned char v; // r9
    unsigned char w; // r8
    unsigned short temp; // r8
    unsigned short temp; // r8
    unsigned short temp; // r7
    double m; // f30
    double g; // f31
    double gs; // f29
    struct png_color_struct * palette; // r1+0x8
    int num_palette; // r1+0x8
    int i; // r5
    int i; // r6
    int istop; // r3
    struct png_color_struct back; // r1+0x18
    struct png_color_struct * palette; // r4
    unsigned short temp; // r7
    unsigned short temp; // r7
    unsigned short temp; // r7
    unsigned short i; // r6
    unsigned short istop; // r7
    int sr; // r1+0x8
    int sg; // r8
    int sb; // r9
}

// Range: 0x800860D0 -> 0x80086304
void png_read_transform_info(struct png_struct_def * png_ptr /* r1+0x0 */, struct png_info_struct * info_ptr /* r1+0x4 */) {}

// Range: 0x80086304 -> 0x80086704
void png_do_read_transformations(struct png_struct_def * png_ptr /* r30 */) {
    // Local variables
    char msg[50]; // r1+0x1C
    int rgb_error; // r1+0x18
}

// Range: 0x80086704 -> 0x80086878
void png_do_unpack(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */) {
    // Local variables
    unsigned long i; // r1+0x0
    unsigned long row_width; // r5
    unsigned char * sp; // r6
    unsigned char * dp; // r4
    unsigned long shift; // r7
    unsigned char * sp; // r6
    unsigned char * dp; // r4
    unsigned long shift; // r7
    unsigned char * sp; // r6
    unsigned char * dp; // r4
    unsigned long shift; // r7
}

// Range: 0x80086878 -> 0x800870D0
void png_do_unshift(struct png_row_info_struct * row_info /* r1+0x8 */, unsigned char * row /* r4 */, struct png_color_8_struct * sig_bits /* r1+0x10 */) {
    // Local variables
    int shift[4]; // r1+0x24
    int channels; // r6
    int c; // r1+0x8
    unsigned short value; // r1+0x8
    unsigned long row_width; // r7
    unsigned char * bp; // r4
    unsigned long i; // r5
    unsigned long istop; // r1+0x8
    unsigned char * bp; // r4
    unsigned long i; // r5
    unsigned long istop; // r1+0x8
    unsigned char mask; // r1+0x8
    unsigned char * bp; // r4
    unsigned long i; // r7
    unsigned long istop; // r1+0x8
    unsigned char * bp; // r4
    unsigned long i; // r7
    unsigned long istop; // r1+0x8
}

// Range: 0x800870D0 -> 0x80087198
void png_do_chop(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r4 */) {
    // Local variables
    unsigned char * sp; // r4
    unsigned char * dp; // r6
    unsigned long i; // r1+0x0
    unsigned long istop; // r1+0x0
}

// Range: 0x80087198 -> 0x80087848
void png_do_read_swap_alpha(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */) {
    // Local variables
    unsigned long row_width; // r5
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned char save; // r7
    unsigned long i; // r6
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
    unsigned char * sp; // r4
    unsigned char * dp; // r6
    unsigned char save; // r3
    unsigned long i; // r7
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
}

// Range: 0x80087848 -> 0x80087FD0
void png_do_read_invert_alpha(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */) {
    // Local variables
    unsigned long row_width; // r5
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
    unsigned char * sp; // r3
    unsigned char * dp; // r4
    unsigned long i; // r6
}

// Range: 0x80087FD0 -> 0x80088C5C
void png_do_read_filler(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */, unsigned long filler /* r1+0x8 */, unsigned long flags /* r1+0xC */) {
    // Local variables
    unsigned long i; // r6
    unsigned long row_width; // r7
    unsigned char hi_filler; // r1+0x0
    unsigned char lo_filler; // r5
    unsigned char * sp; // r8
    unsigned char * dp; // r9
    unsigned char * sp; // r8
    unsigned char * dp; // r9
    unsigned char * sp; // r4
    unsigned char * dp; // r6
    unsigned char * sp; // r9
    unsigned char * dp; // r10
    unsigned char * sp; // r6
    unsigned char * dp; // r8
    unsigned char * sp; // r6
    unsigned char * dp; // r8
    unsigned char * sp; // r6
    unsigned char * dp; // r8
    unsigned char * sp; // r6
    unsigned char * dp; // r8
}

// Range: 0x80088C5C -> 0x80089484
void png_do_gray_to_rgb(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */) {
    // Local variables
    unsigned long i; // r4
    unsigned long row_width; // r5
    unsigned char * sp; // r6
    unsigned char * dp; // r7
    unsigned char * sp; // r6
    unsigned char * dp; // r7
    unsigned char * sp; // r6
    unsigned char * dp; // r7
    unsigned char * sp; // r6
    unsigned char * dp; // r7
}

// Range: 0x80089484 -> 0x80089AA4
int png_do_rgb_to_gray(struct png_struct_def * png_ptr /* r1+0x8 */, struct png_row_info_struct * row_info /* r1+0xC */, unsigned char * row /* r5 */) {
    // Local variables
    unsigned long i; // r1+0x8
    unsigned long row_width; // r6
    int rgb_error; // r7
    unsigned char rc; // r8
    unsigned char gc; // r9
    unsigned char bc; // r10
    unsigned char * sp; // r24
    unsigned char * dp; // r25
    unsigned char red; // r26
    unsigned char green; // r11
    unsigned char blue; // r1+0x8
    unsigned char * sp; // r23
    unsigned char * dp; // r24
    unsigned char red; // r11
    unsigned char green; // r1+0x8
    unsigned char blue; // r12
    unsigned char * sp; // r11
    unsigned char * dp; // r12
    unsigned short red; // r31
    unsigned short green; // r30
    unsigned short blue; // r29
    unsigned short w; // r23
    unsigned short gray16; // r1+0x8
    unsigned char * sp; // r11
    unsigned char * dp; // r12
    unsigned short red; // r23
    unsigned short green; // r24
    unsigned short blue; // r26
    unsigned char * sp; // r5
    unsigned char * dp; // r23
    unsigned char red; // r24
    unsigned char green; // r11
    unsigned char blue; // r1+0x8
    unsigned char * sp; // r5
    unsigned char * dp; // r8
    unsigned char red; // r1+0x8
    unsigned char green; // r3
    unsigned char blue; // r11
    unsigned char * sp; // r5
    unsigned char * dp; // r11
    unsigned short red; // r12
    unsigned short green; // r29
    unsigned short blue; // r30
    unsigned short w; // r12
    unsigned short gray16; // r1+0x8
    unsigned char * sp; // r5
    unsigned char * dp; // r3
    unsigned short red; // r23
    unsigned short green; // r24
    unsigned short blue; // r12
}

// Range: 0x80089AA4 -> 0x8008ABDC
void png_do_background(struct png_row_info_struct * row_info /* r29 */, unsigned char * row /* r4 */, struct png_color_16_struct * trans_values /* r1+0x10 */, struct png_color_16_struct * background /* r31 */, struct png_color_16_struct * background_1 /* r28 */, unsigned char * gamma_table /* r1+0x1C */, unsigned char * gamma_from_1 /* r1+0x20 */, unsigned char * gamma_to_1 /* r1+0x24 */, unsigned short * * gamma_16 /* r6 */, unsigned short * * gamma_16_from_1 /* r25 */, unsigned short * * gamma_16_to_1 /* r12 */, int gamma_shift /* r11 */) {
    // Local variables
    unsigned char * sp; // r4
    unsigned char * dp; // r7
    unsigned long i; // r1+0x8
    unsigned long row_width; // r30
    int shift; // r8
    unsigned char g; // r1+0x8
    unsigned char g; // r1+0x8
    unsigned short g; // r7
    unsigned short b; // r8
    unsigned short v; // r3
    unsigned short g; // r6
    unsigned short b; // r7
    unsigned short a; // r1+0x8
    unsigned short temp; // r5
    unsigned char a; // r1+0x8
    unsigned short temp; // r5
    unsigned short a; // r10
    unsigned short w; // r5
    unsigned long temp; // r5
    unsigned short a; // r6
    unsigned long temp; // r3
    unsigned char a; // r1+0x8
    unsigned char v; // r7
    unsigned char w; // r6
    unsigned short temp; // r6
    unsigned char a; // r1+0x8
    unsigned short temp; // r6
    unsigned short a; // r7
    unsigned short v; // r7
    unsigned short v; // r9
    unsigned short w; // r1+0x8
    unsigned short x; // r9
    unsigned long temp; // r10
    unsigned long temp; // r10
    unsigned long temp; // r9
    unsigned short a; // r3
    unsigned short v; // r1+0x8
    unsigned short g; // r4
    unsigned short b; // r4
    unsigned long temp; // r6
    unsigned long temp; // r6
    unsigned long temp; // r3
}

// Range: 0x8008ABDC -> 0x8008BA68
void png_do_gamma(struct png_row_info_struct * row_info /* r1+0x8 */, unsigned char * row /* r4 */, unsigned char * gamma_table /* r1+0x10 */, unsigned short * * gamma_16_table /* r1+0x14 */, int gamma_shift /* r1+0x18 */) {
    // Local variables
    unsigned char * sp; // r4
    unsigned long i; // r3
    unsigned long row_width; // r8
    unsigned short v; // r5
    unsigned short v; // r5
    unsigned short v; // r5
    int a; // r1+0x8
    int b; // r1+0x8
    int c; // r1+0x8
    int d; // r1+0x8
    int msb; // r1+0x8
    int lsb; // r1+0x8
    unsigned short v; // r5
}

// Range: 0x8008BA68 -> 0x8008BF4C
void png_do_expand_palette(struct png_row_info_struct * row_info /* r1+0x8 */, unsigned char * row /* r1+0xC */, struct png_color_struct * palette /* r1+0x10 */, unsigned char * trans /* r1+0x14 */, int num_trans /* r1+0x18 */) {
    // Local variables
    int shift; // r11
    unsigned char * sp; // r12
    unsigned char * dp; // r31
    unsigned long i; // r1+0x8
    unsigned long row_width; // r9
}

// Range: 0x8008BF4C -> 0x8008C3E4
void png_do_expand(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r1+0x4 */, struct png_color_16_struct * trans_value /* r1+0x8 */) {
    // Local variables
    int shift; // r10
    int value; // r12
    unsigned char * sp; // r11
    unsigned char * dp; // r12
    unsigned long i; // r1+0x0
    unsigned long row_width; // r6
    unsigned short gray; // r1+0x0
}

// Range: 0x8008C3E4 -> 0x8008C83C
void png_do_dither(struct png_row_info_struct * row_info /* r1+0x0 */, unsigned char * row /* r4 */, unsigned char * palette_lookup /* r1+0x8 */, unsigned char * dither_lookup /* r1+0xC */) {
    // Local variables
    unsigned char * sp; // r4
    unsigned char * dp; // r6
    unsigned long i; // r8
    unsigned long row_width; // r7
    int r; // r1+0x0
    int g; // r1+0x0
    int b; // r1+0x0
    int r; // r1+0x0
    int g; // r1+0x0
    int b; // r1+0x0
}

static int png_gamma_shift[8]; // size: 0x20, address: 0x8010A550
// Range: 0x8008C83C -> 0x8008D114
void png_build_gamma_table(struct png_struct_def * png_ptr /* r22 */) {
    // Local variables
    int i; // r21
    double g; // f27
    double g; // f27
    int i; // r21
    int j; // r21
    int shift; // r25
    int num; // r24
    int sig_bit; // r4
    unsigned long ig; // r20
    double fin; // r1+0x8
    double fout; // f1
    unsigned long last; // r23
    unsigned long max; // r1+0x8

    // References
    // -> static int png_gamma_shift[8];
}




