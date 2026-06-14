/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSSerial.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80011A3C -> 0x800123AC
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
// total size: 0x14
struct SIControl {
    // Members
    long chan; // offset 0x0, size 0x4
    unsigned long poll; // offset 0x4, size 0x4
    unsigned long inputBytes; // offset 0x8, size 0x4
    void * input; // offset 0xC, size 0x4
    void (* callback)(long, unsigned long, struct OSContext *); // offset 0x10, size 0x4
};
static struct SIControl Si; // size: 0x14, address: 0x800FD1D0
// total size: 0x20
struct SIPacket {
    // Members
    long chan; // offset 0x0, size 0x4
    void * output; // offset 0x4, size 0x4
    unsigned long outputBytes; // offset 0x8, size 0x4
    void * input; // offset 0xC, size 0x4
    unsigned long inputBytes; // offset 0x10, size 0x4
    void (* callback)(long, unsigned long, struct OSContext *); // offset 0x14, size 0x4
    long long time; // offset 0x18, size 0x8
};
static struct SIPacket Packet[4]; // size: 0x80, address: 0x801179B8
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
static struct OSAlarm Alarm[4]; // size: 0xA0, address: 0x80117A38
// Range: 0x80011A3C -> 0x80011A5C
int SIBusy() {
    // References
    // -> static struct SIControl Si;
}

// Range: 0x80011A5C -> 0x80011CA0
static unsigned long CompleteTransfer() {
    // Local variables
    unsigned long sr; // r3
    unsigned long i; // r9
    unsigned long rLen; // r10
    unsigned char * input; // r7
    unsigned long temp; // r8

    // References
    // -> static struct SIControl Si;
}

// Range: 0x80011CA0 -> 0x80011DB8
static void SIIntrruptHandler(struct OSContext * context /* r28 */) {
    // Local variables
    long chan; // r31
    unsigned long sr; // r30
    void (* callback)(long, unsigned long, struct OSContext *); // r29

    // References
    // -> static struct OSAlarm Alarm[4];
    // -> static struct SIPacket Packet[4];
    // -> static struct SIControl Si;
}

// Range: 0x80011DB8 -> 0x80011E2C
void SIInit() {
    // References
    // -> static struct SIPacket Packet[4];
}

// Range: 0x80011E2C -> 0x80012034
static int __SITransfer(long chan /* r26 */, void * output /* r27 */, unsigned long outputBytes /* r28 */, void * input /* r29 */, unsigned long inputBytes /* r30 */, void (* callback)(long, unsigned long, struct OSContext *) /* r31 */) {
    // Local variables
    int enabled; // r3
    unsigned long rLen; // r1+0x8
    unsigned long i; // r5
    unsigned long sr; // r7
    union {
        unsigned long val; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned long tcint : 1; // offset 0x0, size 0x4
            unsigned long tcintmsk : 1; // offset 0x0, size 0x4
            unsigned long comerr : 1; // offset 0x0, size 0x4
            unsigned long rdstint : 1; // offset 0x0, size 0x4
            unsigned long rdstintmsk : 1; // offset 0x0, size 0x4
            unsigned long pad2 : 4; // offset 0x0, size 0x4
            unsigned long outlngth : 7; // offset 0x0, size 0x4
            unsigned long pad1 : 1; // offset 0x0, size 0x4
            unsigned long inlngth : 7; // offset 0x0, size 0x4
            unsigned long pad0 : 5; // offset 0x0, size 0x4
            unsigned long channel : 2; // offset 0x0, size 0x4
            unsigned long tstart : 1; // offset 0x0, size 0x4
        } f; // offset 0x0, size 0x4
    } comcsr; // r1+0x24

    // References
    // -> static struct SIControl Si;
}

// Range: 0x80012034 -> 0x80012044
unsigned long SIGetStatus() {}

// Range: 0x80012044 -> 0x80012058
void SISetCommand(long chan /* r1+0x0 */, unsigned long command /* r1+0x4 */) {}

// Range: 0x80012058 -> 0x800120B8
unsigned long SISetXY(unsigned long x /* r1+0x8 */, unsigned long y /* r1+0xC */) {
    // Local variables
    unsigned long poll; // r31
    int enabled; // r3

    // References
    // -> static struct SIControl Si;
}

// Range: 0x800120B8 -> 0x80012154
unsigned long SIEnablePolling(unsigned long poll /* r31 */) {
    // Local variables
    int enabled; // r3

    // References
    // -> static struct SIControl Si;
}

// Range: 0x80012154 -> 0x800121C0
unsigned long SIDisablePolling(unsigned long poll /* r31 */) {
    // Local variables
    int enabled; // r3

    // References
    // -> static struct SIControl Si;
}

// Range: 0x800121C0 -> 0x800121E4
void SIGetResponse(long chan /* r1+0x0 */, void * data /* r1+0x4 */) {}

// Range: 0x800121E4 -> 0x80012270
static void AlarmHandler(struct OSAlarm * alarm /* r1+0x8 */) {
    // Local variables
    struct SIPacket * packet; // r1+0x8

    // References
    // -> static struct OSAlarm Alarm[4];
    // -> static struct SIPacket Packet[4];
}

// Range: 0x80012270 -> 0x800123AC
int SITransfer(long chan /* r22 */, void * output /* r23 */, unsigned long outputBytes /* r24 */, void * input /* r25 */, unsigned long inputBytes /* r26 */, void (* callback)(long, unsigned long, struct OSContext *) /* r27 */, long long time /* r29 */) {
    // Local variables
    int enabled; // r30
    struct SIPacket * packet; // r1+0x8
    long long now; // r3

    // References
    // -> static struct OSAlarm Alarm[4];
    // -> static struct SIPacket Packet[4];
}




