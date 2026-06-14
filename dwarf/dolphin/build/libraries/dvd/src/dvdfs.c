/*
    Compile unit: i:\dolphin\build\libraries\dvd\src\dvdfs.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80016E68 -> 0x800175CC
*/
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
// total size: 0x40
struct OSBootInfo_s {
    // Members
    struct DVDDiskID DVDDiskID; // offset 0x0, size 0x20
    unsigned long magic; // offset 0x20, size 0x4
    unsigned long version; // offset 0x24, size 0x4
    unsigned long memorySize; // offset 0x28, size 0x4
    unsigned long consoleType; // offset 0x2C, size 0x4
    void * arenaLo; // offset 0x30, size 0x4
    void * arenaHi; // offset 0x34, size 0x4
    void * FSTLocation; // offset 0x38, size 0x4
    unsigned long FSTMaxLength; // offset 0x3C, size 0x4
};
static struct OSBootInfo_s * BootInfo; // size: 0x4, address: 0x8013B000
// total size: 0xC
struct FSTEntry {
    // Members
    unsigned int isDirAndStringOff; // offset 0x0, size 0x4
    unsigned int parentOrPosition; // offset 0x4, size 0x4
    unsigned int nextEntryOrLength; // offset 0x8, size 0x4
};
static struct FSTEntry * FstStart; // size: 0x4, address: 0x8013B004
static char * FstStringStart; // size: 0x4, address: 0x8013B008
static unsigned long MaxEntryNum; // size: 0x4, address: 0x8013B00C
static unsigned long currentDirectory; // size: 0x4, address: 0x8013B010
// Range: 0x80016E68 -> 0x80016EA0
void __DVDFSInit() {
    // References
    // -> static unsigned long MaxEntryNum;
    // -> static char * FstStringStart;
    // -> static struct FSTEntry * FstStart;
    // -> static struct OSBootInfo_s * BootInfo;
}

unsigned long __DVDLongFileNameFlag; // size: 0x4, address: 0x8013B014
// Range: 0x80016EA0 -> 0x80017180
long DVDConvertPathToEntrynum(char * pathPtr /* r23 */) {
    // Local variables
    char * ptr; // r20
    unsigned long length; // r27
    unsigned long dirLookAt; // r28
    unsigned long i; // r26
    char * origPathPtr; // r25
    char * extentionStart; // r24
    int illegal; // r3
    int extention; // r4

    // References
    // -> static struct FSTEntry * FstStart;
    // -> static char * FstStringStart;
    // -> unsigned long __DVDLongFileNameFlag;
    // -> static unsigned long currentDirectory;
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
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// Range: 0x80017180 -> 0x80017248
int DVDOpen(char * fileName /* r30 */, struct DVDFileInfo * fileInfo /* r31 */) {
    // Local variables
    long entry; // r1+0x8
    char currentDir[128]; // r1+0x10

    // References
    // -> static struct FSTEntry * FstStart;
}

// Range: 0x80017248 -> 0x8001726C
int DVDClose(struct DVDFileInfo * fileInfo /* r3 */) {}

// Range: 0x8001726C -> 0x800173CC
static unsigned long entryToPath(unsigned long entry /* r1+0x8 */, char * path /* r29 */, unsigned long maxlen /* r30 */) {
    // Local variables
    char * name; // r31
    unsigned long loc; // r3

    // References
    // -> static struct FSTEntry * FstStart;
    // -> static char * FstStringStart;
}

// Range: 0x800173CC -> 0x80017490
int DVDGetCurrentDir(char * path /* r29 */, unsigned long maxlen /* r30 */) {
    // References
    // -> static struct FSTEntry * FstStart;
    // -> static unsigned long currentDirectory;
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
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x310
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
struct OSThreadQueue __DVDThreadQueue; // size: 0x8, address: 0x8013B018
// Range: 0x80017490 -> 0x800175A8
long DVDReadPrio(struct DVDFileInfo * fileInfo /* r31 */, void * addr /* r27 */, long length /* r28 */, long offset /* r29 */, long prio /* r30 */) {
    // Local variables
    int result; // r1+0x8
    struct DVDCommandBlock * block; // r3
    long state; // r1+0x8
    int enabled; // r30
    long retVal; // r31

    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}

// Range: 0x800175A8 -> 0x800175CC
static void cbForReadSync() {
    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}




