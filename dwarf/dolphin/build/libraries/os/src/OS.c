/*
    Compile unit: c:\dolphin\build\libraries\os\src\OS.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000D570 -> 0x8000DC74
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
static struct OSBootInfo_s * BootInfo; // size: 0x4, address: 0x8013AEB0
static unsigned long * BI2DebugFlag; // size: 0x4, address: 0x8013AEB4
// Range: 0x8000D570 -> 0x8000D598
unsigned long OSGetConsoleType() {
    // References
    // -> static struct OSBootInfo_s * BootInfo;
}

static int AreWeInitialized; // size: 0x4, address: 0x8013AEB8
unsigned long __DVDLongFileNameFlag; // size: 0x4, address: 0x8013B014
unsigned long __PADSpec; // size: 0x4, address: 0x8013B0D8
unsigned char __ArenaLo[]; // size: 0x0, address: 0x8014E5A0
char _stack_addr[]; // size: 0x0, address: 0x8014C5A0
unsigned char __ArenaHi[]; // size: 0x0, address: 0x81700000
// Range: 0x8000D598 -> 0x8000D874
void OSInit() {
    // Local variables
    unsigned long consoleType; // r4
    void * bi2StartAddr; // r1+0x8

    // References
    // -> static unsigned long * BI2DebugFlag;
    // -> static struct OSBootInfo_s * BootInfo;
    // -> unsigned char __ArenaHi[];
    // -> char _stack_addr[];
    // -> unsigned char __ArenaLo[];
    // -> unsigned long __PADSpec;
    // -> unsigned long __DVDLongFileNameFlag;
    // -> static int AreWeInitialized;
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
static void (* * OSExceptionTable)(unsigned char, struct OSContext *); // size: 0x4, address: 0x8013AEBC
static unsigned long __OSExceptionLocations[15]; // size: 0x3C, address: 0x800FC9A0
// Range: 0x8000D874 -> 0x8000DAF4
static void OSExceptionInit() {
    // Local variables
    unsigned char exception; // r26
    void * destAddr; // r20
    unsigned long * opCodeAddr; // r1+0x8
    unsigned long oldOpCode; // r25
    unsigned char * handlerStart; // r24
    unsigned long handlerSize; // r23
    unsigned long * ops; // r4
    int cb; // r1+0x8

    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
    // -> static unsigned long * BI2DebugFlag;
    // -> static unsigned long __OSExceptionLocations[15];
}

// Range: 0x8000DAF4 -> 0x8000DB18
static void __OSDBIntegrator() {}

// Range: 0x8000DB18 -> 0x8000DB1C
static void __OSDBJump() {}

// Range: 0x8000DB1C -> 0x8000DB38
void (* __OSSetExceptionHandler(unsigned char exception /* r1+0x0 */, void (* handler)(unsigned char, struct OSContext *) /* r1+0x4 */))(unsigned char, struct OSContext *) {
    // Local variables
    void (* oldHandler)(unsigned char, struct OSContext *); // r3

    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
}

// Range: 0x8000DB38 -> 0x8000DB4C
void (* __OSGetExceptionHandler(unsigned char exception /* r1+0x0 */))(unsigned char, struct OSContext *) {
    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
}

// Range: 0x8000DB4C -> 0x8000DBE8
static void OSExceptionVector() {}

// Range: 0x8000DBE8 -> 0x8000DC3C
static void OSDefaultExceptionHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}

// Range: 0x8000DC3C -> 0x8000DC74
void __OSPSInit() {}




