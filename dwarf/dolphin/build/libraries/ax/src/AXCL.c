/*
    Compile unit: C:\dolphin\build\libraries\ax\src\AXCL.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80013DB4 -> 0x800142B4
*/
static unsigned short __AXHRTFHistory[128]; // size: 0x100, address: 0x8011B2C0
static unsigned short __AXCommandList[2][384]; // size: 0x600, address: 0x8011B3C0
static unsigned long __AXCommandListPosition; // size: 0x4, address: 0x8013AF48
static unsigned short * __AXClWrite; // size: 0x4, address: 0x8013AF4C
static unsigned long __AXCommandListCycles; // size: 0x4, address: 0x8013AF50
// Range: 0x80013DB4 -> 0x80013DBC
unsigned long __AXGetCommandListCycles() {
    // References
    // -> static unsigned long __AXCommandListCycles;
}

// Range: 0x80013DBC -> 0x80013DF8
unsigned long __AXGetCommandListAddress() {
    // Local variables
    unsigned long address; // r3

    // References
    // -> static unsigned long __AXCommandListPosition;
    // -> static unsigned short __AXCommandList[2][384];
    // -> static unsigned short * __AXClWrite;
}

unsigned long __AXClMode; // size: 0x4, address: 0x8013AF54
// Range: 0x80013DF8 -> 0x80014298
void __AXNextFrame(void * sbuffer /* r29 */, void * buffer /* r30 */) {
    // Local variables
    unsigned long data; // r1+0x28
    unsigned short * pCommandList; // r31

    // References
    // -> static unsigned long __AXCommandListCycles;
    // -> static unsigned short * __AXClWrite;
    // -> unsigned long __AXClMode;
    // -> static unsigned short __AXHRTFHistory[128];
}

// Range: 0x80014298 -> 0x800142B4
void __AXClInit() {
    // References
    // -> static unsigned short __AXCommandList[2][384];
    // -> static unsigned short * __AXClWrite;
    // -> static unsigned long __AXCommandListPosition;
    // -> unsigned long __AXClMode;
}




