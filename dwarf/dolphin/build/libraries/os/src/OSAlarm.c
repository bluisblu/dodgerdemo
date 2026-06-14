/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSAlarm.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000DC74 -> 0x8000E360
*/
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
// total size: 0x28
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, struct OSContext *); // offset 0x0, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
};
// total size: 0x8
struct OSAlarmQueue {
    // Members
    struct OSAlarm * head; // offset 0x0, size 0x4
    struct OSAlarm * tail; // offset 0x4, size 0x4
};
static struct OSAlarmQueue AlarmQueue; // size: 0x8, address: 0x8013AEC0
// Range: 0x8000DC74 -> 0x8000DCC0
void OSInitAlarm() {
    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x8000DCC0 -> 0x8000DCCC
void OSCreateAlarm(struct OSAlarm * alarm /* r1+0x0 */) {}

// Range: 0x8000DCCC -> 0x8000DF1C
static void InsertAlarm(struct OSAlarm * alarm /* r29 */, long long fire /* r25 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r31 */) {
    // Local variables
    struct OSAlarm * next; // r6
    struct OSAlarm * prev; // r1+0x8
    long long time; // r1+0x8

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x8000DF1C -> 0x8000DF84
void OSSetAlarm(struct OSAlarm * alarm /* r27 */, long long tick /* r29 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r30 */) {
    // Local variables
    int enabled; // r31
}

// Range: 0x8000DF84 -> 0x8000DFE8
void OSSetAbsAlarm(struct OSAlarm * alarm /* r27 */, long long time /* r29 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r30 */) {
    // Local variables
    int enabled; // r31
}

// Range: 0x8000DFE8 -> 0x8000E104
void OSCancelAlarm(struct OSAlarm * alarm /* r30 */) {
    // Local variables
    struct OSAlarm * next; // r1+0x8
    int enabled; // r31

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x8000E104 -> 0x8000E314
static void DecrementerExceptionCallback(struct OSContext * context /* r29 */) {
    // Local variables
    struct OSAlarm * alarm; // r31
    struct OSAlarm * next; // r3
    void (* handler)(struct OSAlarm *, struct OSContext *); // r30
    long long time; // r1+0x8

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x8000E314 -> 0x8000E360
static void DecrementerExceptionHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}




