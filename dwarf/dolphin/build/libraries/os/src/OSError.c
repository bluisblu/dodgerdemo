/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSError.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000F47C -> 0x8000F7B8
*/
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    double psf[32]; // offset 0x1C8, size 0x100
};
static void (* OSErrorTable[15])(unsigned short, struct OSContext *); // size: 0x3C, address: 0x80117868
// Range: 0x8000F47C -> 0x8000F4FC
void OSReport(char * msg /* r3 */) {
    // Local variables
    // total size: 0xC
    struct {
        // Members
        char gpr; // offset 0x0, size 0x1
        char fpr; // offset 0x1, size 0x1
        char reserved[2]; // offset 0x2, size 0x2
        char * input_arg_area; // offset 0x4, size 0x4
        char * reg_save_area; // offset 0x8, size 0x4
    } marker[1]; // r1+0x6C
}

// Range: 0x8000F4FC -> 0x8000F628
void OSPanic(char * file /* r28 */, int line /* r30 */, char * msg /* r29 */) {
    // Local variables
    // total size: 0xC
    struct {
        // Members
        char gpr; // offset 0x0, size 0x1
        char fpr; // offset 0x1, size 0x1
        char reserved[2]; // offset 0x2, size 0x2
        char * input_arg_area; // offset 0x4, size 0x4
        char * reg_save_area; // offset 0x8, size 0x4
    } marker[1]; // r1+0x74
    unsigned long i; // r30
    unsigned long * p; // r29
}

// Range: 0x8000F628 -> 0x8000F644
void (* OSSetErrorHandler(unsigned short error /* r1+0x0 */, void (* handler)(unsigned short, struct OSContext *) /* r1+0x4 */))(unsigned short, struct OSContext *) {
    // Local variables
    void (* oldHandler)(unsigned short, struct OSContext *); // r3

    // References
    // -> static void (* OSErrorTable[15])(unsigned short, struct OSContext *);
}

// Range: 0x8000F644 -> 0x8000F7B8
void __OSUnhandledException(unsigned char exception /* r27 */, struct OSContext * context /* r28 */, unsigned long dsisr /* r29 */, unsigned long dar /* r30 */) {
    // References
    // -> static void (* OSErrorTable[15])(unsigned short, struct OSContext *);
}




