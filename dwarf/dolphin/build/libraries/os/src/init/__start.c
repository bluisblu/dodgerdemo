/*
    Compile unit: c:\dolphin\build\libraries\os\src\init\__start.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800135D4 -> 0x800135D4
*/
// total size: 0xC
struct __rom_copy_info {
    // Members
    char * rom; // offset 0x0, size 0x4
    char * addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
};
struct __rom_copy_info _rom_copy_info[]; // size: 0x0, address: 0x800053DC
// total size: 0x8
struct __bss_init_info {
    // Members
    char * addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
struct __bss_init_info _bss_init_info[]; // size: 0x0, address: 0x80005460



/*
    Compile unit: c:\dolphin\build\libraries\os\src\init\__start.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80003100 -> 0x800032CC
*/
// Range: 0x80003100 -> 0x800031F0
void __start() {}

// Range: 0x800031F0 -> 0x8000320C
static void __init_registers() {}

// Range: 0x8000320C -> 0x800032CC
static void __init_data() {
    // Local variables
    struct __rom_copy_info * dci; // r29
    struct __bss_init_info * bii; // r29

    // References
    // -> struct __bss_init_info _bss_init_info[];
    // -> struct __rom_copy_info _rom_copy_info[];
}




