/*
    Compile unit: c:\dolphin\build\libraries\db\src\db.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80015F18 -> 0x80016004
*/
// total size: 0x10
struct DBInterface {
    // Members
    unsigned long bPresent; // offset 0x0, size 0x4
    unsigned long exceptionMask; // offset 0x4, size 0x4
    void (* ExceptionDestination)(); // offset 0x8, size 0x4
    void * exceptionReturn; // offset 0xC, size 0x4
};
struct DBInterface * __DBInterface; // size: 0x4, address: 0x8013AFC0
int DBVerbose; // size: 0x4, address: 0x8013AFC4
// Range: 0x80015F18 -> 0x80015F40
void DBInit() {
    // References
    // -> int DBVerbose;
    // -> struct DBInterface * __DBInterface;
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
// Range: 0x80015F40 -> 0x80015F88
void __DBExceptionDestinationAux() {
    // Local variables
    struct OSContext * context; // r31
}

// Range: 0x80015F88 -> 0x80015F98
void __DBExceptionDestination() {}

// Range: 0x80015F98 -> 0x80015FB4
int __DBIsExceptionMarked(unsigned char exception /* r1+0x0 */) {
    // References
    // -> struct DBInterface * __DBInterface;
}

// Range: 0x80015FB4 -> 0x80016004
void DBPrintf() {}




