/*
    Compile unit: D:\Pure3d\development\lib\zlib\inftrees.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80095734 -> 0x80095F84
*/
char inflate_copyright[47]; // size: 0x2F, address: 0x800F9C50
static unsigned int cplens[31]; // size: 0x7C, address: 0x800F9C80
static unsigned int cplext[31]; // size: 0x7C, address: 0x800F9CFC
static unsigned int cpdist[30]; // size: 0x78, address: 0x800F9D78
static unsigned int cpdext[30]; // size: 0x78, address: 0x800F9DF0
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
// Range: 0x80095734 -> 0x80095C94
static int huft_build(unsigned int * b /* r3 */, unsigned int n /* r4 */, unsigned int s /* r1+0x10 */, const unsigned int * d /* r1+0x14 */, const unsigned int * e /* r1+0x18 */, struct inflate_huft_s * * t /* r1+0x1C */, unsigned int * m /* r1+0x20 */, struct inflate_huft_s * hp /* r1+0x24 */, unsigned int * hn /* r27 */, unsigned int * v /* r15 */) {
    // Local variables
    unsigned int a; // r9
    unsigned int c[16]; // r1+0xAC
    unsigned int f; // r17
    int g; // r11
    int h; // r12
    unsigned int i; // r17
    unsigned int j; // r14
    int k; // r31
    int l; // r30
    unsigned int mask; // r18
    unsigned int * p; // r11
    struct inflate_huft_s * q; // r29
    struct inflate_huft_s r; // r1+0xA4
    struct inflate_huft_s * u[15]; // r1+0x68
    int w; // r28
    unsigned int x[16]; // r1+0x28
    unsigned int * xp; // r17
    int y; // r14
    unsigned int z; // r4
}

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
// Range: 0x80095C94 -> 0x80095D84
int inflate_trees_bits(unsigned int * c /* r26 */, unsigned int * bb /* r27 */, struct inflate_huft_s * * tb /* r28 */, struct inflate_huft_s * hp /* r31 */, struct z_stream_s * z /* r29 */) {
    // Local variables
    int r; // r31
    unsigned int hn; // r1+0x24
    unsigned int * v; // r30
}

// Range: 0x80095D84 -> 0x80095F54
int inflate_trees_dynamic(unsigned int nl /* r22 */, unsigned int nd /* r23 */, unsigned int * c /* r24 */, unsigned int * bl /* r25 */, unsigned int * bd /* r26 */, struct inflate_huft_s * * tl /* r19 */, struct inflate_huft_s * * td /* r27 */, struct inflate_huft_s * hp /* r28 */, struct z_stream_s * z /* r29 */) {
    // Local variables
    int r; // r19
    unsigned int hn; // r1+0x30
    unsigned int * v; // r30

    // References
    // -> static unsigned int cpdext[30];
    // -> static unsigned int cpdist[30];
    // -> static unsigned int cplext[31];
    // -> static unsigned int cplens[31];
}

static unsigned int fixed_bl; // size: 0x4, address: 0x80139438
static unsigned int fixed_bd; // size: 0x4, address: 0x8013943C
static struct inflate_huft_s fixed_tl[512]; // size: 0x1000, address: 0x8010B5B0
static struct inflate_huft_s fixed_td[32]; // size: 0x100, address: 0x8010C5B0
// Range: 0x80095F54 -> 0x80095F84
int inflate_trees_fixed(unsigned int * bl /* r1+0x0 */, unsigned int * bd /* r1+0x4 */, struct inflate_huft_s * * tl /* r1+0x8 */, struct inflate_huft_s * * td /* r1+0xC */) {
    // References
    // -> static struct inflate_huft_s fixed_td[32];
    // -> static struct inflate_huft_s fixed_tl[512];
    // -> static unsigned int fixed_bd;
    // -> static unsigned int fixed_bl;
}




