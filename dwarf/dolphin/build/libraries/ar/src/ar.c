/*
    Compile unit: c:\dolphin\build\libraries\ar\src\ar.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001DC28 -> 0x8001ED94
*/
static void (* __AR_Callback)(); // size: 0x4, address: 0x8013B120
static unsigned long __AR_Size; // size: 0x4, address: 0x8013B124
static unsigned long __AR_StackPointer; // size: 0x4, address: 0x8013B128
static unsigned long __AR_FreeBlocks; // size: 0x4, address: 0x8013B12C
static unsigned long * __AR_BlockLength; // size: 0x4, address: 0x8013B130
static int __AR_init_flag; // size: 0x4, address: 0x8013B134
// Range: 0x8001DC28 -> 0x8001DC6C
void (* ARRegisterDMACallback(void (* callback)() /* r30 */))() {
    // Local variables
    void (* old_callback)(); // r31
    int old; // r3

    // References
    // -> static void (* __AR_Callback)();
}

// Range: 0x8001DC6C -> 0x8001DD5C
void ARStartDMA(unsigned long type /* r29 */, unsigned long mainmem_addr /* r28 */, unsigned long aram_addr /* r30 */, unsigned long length /* r31 */) {
    // Local variables
    int old; // r3
}

// Range: 0x8001DD5C -> 0x8001DE50
unsigned long ARInit(unsigned long * stack_index_addr /* r29 */, unsigned long num_entries /* r30 */) {
    // Local variables
    int old; // r31
    unsigned short refresh; // r1+0x8

    // References
    // -> static unsigned long __AR_StackPointer;
    // -> static int __AR_init_flag;
    // -> static unsigned long * __AR_BlockLength;
    // -> static unsigned long __AR_FreeBlocks;
    // -> static void (* __AR_Callback)();
}

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
// Range: 0x8001DE50 -> 0x8001DEC8
static void __ARHandler(struct OSContext * context /* r31 */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10
    unsigned short tmp; // r5

    // References
    // -> static void (* __AR_Callback)();
}

// Range: 0x8001DEC8 -> 0x8001ED94
static void __ARChecksize() {
    // Local variables
    unsigned char test_data_pad[63]; // r1+0x94
    unsigned char dummy_data_pad[63]; // r1+0x54
    unsigned char buffer_pad[63]; // r1+0x14
    unsigned long * test_data; // r23
    unsigned long * dummy_data; // r31
    unsigned long * buffer; // r24
    unsigned short ARAM_mode; // r17
    unsigned long ARAM_size; // r22

    // References
    // -> static unsigned long __AR_Size;
}




