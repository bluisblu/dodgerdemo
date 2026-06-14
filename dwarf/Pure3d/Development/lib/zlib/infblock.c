/*
    Compile unit: D:\Pure3d\development\lib\zlib\infblock.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80092D0C -> 0x80093E3C
*/
static unsigned int border[19]; // size: 0x4C, address: 0x800F9C00
enum /* @enum$1infblock_c */ {
    TYPE = 0,
    LENS = 1,
    STORED = 2,
    TABLE = 3,
    BTREE = 4,
    DTREE = 5,
    CODES = 6,
    DRY = 7,
    DONE = 8,
    BAD = 9,
};
// total size: 0x8
struct inflate_huft_s {
    // Members
    union {
        // total size: 0x2
        struct {
            // Members
            unsigned char Exop; // offset 0x0, size 0x1
            unsigned char Bits; // offset 0x1, size 0x1
        } what; // offset 0x0, size 0x2
        unsigned int pad; // offset 0x0, size 0x4
    } word; // offset 0x0, size 0x4
    unsigned int base; // offset 0x4, size 0x4
};
// total size: 0x4
struct inflate_codes_state {
    // Members
    int dummy; // offset 0x0, size 0x4
};
// total size: 0x40
struct inflate_blocks_state {
    // Members
    enum /* @enum$1infblock_c */ {
        TYPE = 0,
        LENS = 1,
        STORED = 2,
        TABLE = 3,
        BTREE = 4,
        DTREE = 5,
        CODES = 6,
        DRY = 7,
        DONE = 8,
        BAD = 9,
    } mode; // offset 0x0, size 0x4
    union {
        unsigned int left; // offset 0x0, size 0x4
        // total size: 0x14
        struct {
            // Members
            unsigned int table; // offset 0x0, size 0x4
            unsigned int index; // offset 0x4, size 0x4
            unsigned int * blens; // offset 0x8, size 0x4
            unsigned int bb; // offset 0xC, size 0x4
            struct inflate_huft_s * tb; // offset 0x10, size 0x4
        } trees; // offset 0x0, size 0x14
        // total size: 0x4
        struct {
            // Members
            struct inflate_codes_state * codes; // offset 0x0, size 0x4
        } decode; // offset 0x0, size 0x4
    } sub; // offset 0x4, size 0x14
    unsigned int last; // offset 0x18, size 0x4
    unsigned int bitk; // offset 0x1C, size 0x4
    unsigned long bitb; // offset 0x20, size 0x4
    struct inflate_huft_s * hufts; // offset 0x24, size 0x4
    unsigned char * window; // offset 0x28, size 0x4
    unsigned char * end; // offset 0x2C, size 0x4
    unsigned char * read; // offset 0x30, size 0x4
    unsigned char * write; // offset 0x34, size 0x4
    unsigned long (* checkfn)(unsigned long, unsigned char *, unsigned int); // offset 0x38, size 0x4
    unsigned long check; // offset 0x3C, size 0x4
};
// total size: 0x4
struct internal_state {
    // Members
    int dummy; // offset 0x0, size 0x4
};
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
// Range: 0x80092D0C -> 0x80092DD4
void inflate_blocks_reset(struct inflate_blocks_state * s /* r30 */, struct z_stream_s * z /* r31 */, unsigned long * c /* r1+0x10 */) {}

// Range: 0x80092DD4 -> 0x80092F78
struct inflate_blocks_state * inflate_blocks_new(struct z_stream_s * z /* r28 */, unsigned long (* c)(unsigned long, unsigned char *, unsigned int) /* r29 */, unsigned int w /* r30 */) {
    // Local variables
    struct inflate_blocks_state * s; // r31
}

unsigned int inflate_mask[17]; // size: 0x44, address: 0x8010C6B0
// Range: 0x80092F78 -> 0x80093D44
int inflate_blocks(struct inflate_blocks_state * s /* r30 */, struct z_stream_s * z /* r31 */, int r /* r20 */) {
    // Local variables
    unsigned int t; // r1+0x10
    unsigned long b; // r29
    unsigned int k; // r28
    unsigned char * p; // r27
    unsigned int n; // r26
    unsigned char * q; // r23
    unsigned int m; // r19
    unsigned int bl; // r1+0x3C
    unsigned int bd; // r1+0x38
    struct inflate_huft_s * tl; // r1+0x34
    struct inflate_huft_s * td; // r1+0x30
    struct inflate_huft_s * h; // r6
    unsigned int i; // r5
    unsigned int j; // r6
    unsigned int c; // r1+0x10
    unsigned int bl; // r1+0x2C
    unsigned int bd; // r1+0x28
    struct inflate_huft_s * tl; // r1+0x24
    struct inflate_huft_s * td; // r1+0x20
    struct inflate_codes_state * c; // r1+0x10

    // References
    // -> unsigned int inflate_mask[17];
    // -> static unsigned int border[19];
}

// Range: 0x80093D44 -> 0x80093E3C
int inflate_blocks_free(struct inflate_blocks_state * s /* r30 */, struct z_stream_s * z /* r31 */) {}




