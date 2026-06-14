/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSTime.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80013300 -> 0x80013384
*/
// Range: 0x80013300 -> 0x80013318
long long OSGetTime() {}

// Range: 0x80013318 -> 0x80013320
unsigned long OSGetTick() {}

// Range: 0x80013320 -> 0x80013384
long long __OSGetSystemTime() {
    // Local variables
    int enabled; // r31
    long long result; // r30
}

// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};



