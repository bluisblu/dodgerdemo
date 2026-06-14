/*
    Compile unit: i:\dolphin\build\libraries\dvd\src\emu_level2\fstload.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80019974 -> 0x80019B9C
*/
static unsigned long status; // size: 0x4, address: 0x8013B068
static unsigned char bb2Buf[63]; // size: 0x3F, address: 0x801301D8
// total size: 0x20
struct DVDBB2 {
    // Members
    unsigned long bootFilePosition; // offset 0x0, size 0x4
    unsigned long FSTPosition; // offset 0x4, size 0x4
    unsigned long FSTLength; // offset 0x8, size 0x4
    unsigned long FSTMaxLength; // offset 0xC, size 0x4
    void * FSTAddress; // offset 0x10, size 0x4
    unsigned long userPosition; // offset 0x14, size 0x4
    unsigned long userLength; // offset 0x18, size 0x4
    unsigned long padding0; // offset 0x1C, size 0x4
};
static struct DVDBB2 * bb2; // size: 0x4, address: 0x8013B06C
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
static struct DVDDiskID * idTmp; // size: 0x4, address: 0x8013B070
// Range: 0x80019974 -> 0x80019A4C
static void cb(long result /* r1+0x8 */, struct DVDCommandBlock * block /* r31 */) {
    // References
    // -> static struct DVDDiskID * idTmp;
    // -> static unsigned long status;
    // -> static struct DVDBB2 * bb2;
}

// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
static struct DVDCommandBlock block$16; // size: 0x30, address: 0x80130218
// Range: 0x80019A4C -> 0x80019B9C
void __fstLoad() {
    // Local variables
    struct DVDDiskID * id; // r29
    unsigned char idTmpBuf[63]; // r1+0xC
    long state; // r1+0x8

    // References
    // -> static struct DVDBB2 * bb2;
    // -> static struct DVDDiskID * idTmp;
    // -> static struct DVDCommandBlock block$16;
    // -> static unsigned char bb2Buf[63];
}




