/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSUartExi.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80013384 -> 0x800135D4
*/
static unsigned long serEnabled; // size: 0x4, address: 0x8013AF08
// Range: 0x80013384 -> 0x800133CC
int InitializeUART() {
    // References
    // -> static unsigned long serEnabled;
}

// Range: 0x800133CC -> 0x800133D4
int ReadUARTN() {}

// Range: 0x800133D4 -> 0x800135D4
int WriteUARTN(void * buf /* r30 */, unsigned long len /* r31 */) {
    // Local variables
    unsigned long cmd; // r1+0x14
    int qLen; // r27
    long xLen; // r5
    char * ptr; // r4
    int locked; // r1+0x8
    int error; // r26

    // References
    // -> static unsigned long serEnabled;
}




