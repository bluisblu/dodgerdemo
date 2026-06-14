/*
    Compile unit: D:\Pure3d\development\lib\zlib\inflate.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80094DE4 -> 0x80095734
*/
enum /* @enum$1inflate_c */ {
    METHOD = 0,
    FLAG = 1,
    DICT4 = 2,
    DICT3 = 3,
    DICT2 = 4,
    DICT1 = 5,
    DICT0 = 6,
    BLOCKS = 7,
    CHECK4 = 8,
    CHECK3 = 9,
    CHECK2 = 10,
    CHECK1 = 11,
    DONE = 12,
    BAD = 13,
};
// total size: 0x4
struct inflate_blocks_state {
    // Members
    int dummy; // offset 0x0, size 0x4
};
// total size: 0x18
struct internal_state {
    // Members
    enum /* @enum$1inflate_c */ {
        METHOD = 0,
        FLAG = 1,
        DICT4 = 2,
        DICT3 = 3,
        DICT2 = 4,
        DICT1 = 5,
        DICT0 = 6,
        BLOCKS = 7,
        CHECK4 = 8,
        CHECK3 = 9,
        CHECK2 = 10,
        CHECK1 = 11,
        DONE = 12,
        BAD = 13,
    } mode; // offset 0x0, size 0x4
    union {
        unsigned int method; // offset 0x0, size 0x4
        // total size: 0x8
        struct {
            // Members
            unsigned long was; // offset 0x0, size 0x4
            unsigned long need; // offset 0x4, size 0x4
        } check; // offset 0x0, size 0x8
        unsigned int marker; // offset 0x0, size 0x4
    } sub; // offset 0x4, size 0x8
    int nowrap; // offset 0xC, size 0x4
    unsigned int wbits; // offset 0x10, size 0x4
    struct inflate_blocks_state * blocks; // offset 0x14, size 0x4
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
// Range: 0x80094DE4 -> 0x80094E5C
int inflateReset(struct z_stream_s * z /* r3 */) {}

// Range: 0x80094E5C -> 0x80094EDC
int inflateEnd(struct z_stream_s * z /* r31 */) {}

// Range: 0x80094EDC -> 0x80095140
int inflateInit2_(struct z_stream_s * z /* r30 */, int w /* r31 */, const char * version /* r1+0x10 */, int stream_size /* r1+0x14 */) {}

// Range: 0x80095140 -> 0x8009516C
int inflateInit_(struct z_stream_s * z /* r3 */, const char * version /* r4 */, int stream_size /* r6 */) {}

// Range: 0x8009516C -> 0x80095734
int inflate(struct z_stream_s * z /* r24 */, int f /* r1+0xC */) {
    // Local variables
    int r; // r25
    unsigned int b; // r1+0x8
}




