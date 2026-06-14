/*
    Compile unit: s:\dolphin\build\libraries\pad\src\Padclamp.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001B1FC -> 0x8001B434
*/
// total size: 0x8
struct PADClampRegion {
    // Members
    unsigned char minTrigger; // offset 0x0, size 0x1
    unsigned char maxTrigger; // offset 0x1, size 0x1
    signed char minStick; // offset 0x2, size 0x1
    signed char maxStick; // offset 0x3, size 0x1
    signed char xyStick; // offset 0x4, size 0x1
    signed char minSubstick; // offset 0x5, size 0x1
    signed char maxSubstick; // offset 0x6, size 0x1
    signed char xySubstick; // offset 0x7, size 0x1
};
static struct PADClampRegion ClampRegion; // size: 0x8, address: 0x80137A00
// Range: 0x8001B1FC -> 0x8001B32C
static void ClampStick(signed char * px /* r1+0x0 */, signed char * py /* r1+0x4 */, signed char max /* r1+0x8 */, signed char xy /* r1+0x9 */, signed char min /* r1+0xA */) {
    // Local variables
    int x; // r11
    int y; // r12
    int signX; // r1+0x0
    int signY; // r8
    int d; // r1+0x0
}

// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
// Range: 0x8001B32C -> 0x8001B434
void PADClamp(struct PADStatus * status /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct PADClampRegion ClampRegion;
}




