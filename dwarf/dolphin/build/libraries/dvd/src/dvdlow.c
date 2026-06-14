/*
    Compile unit: i:\dolphin\build\libraries\dvd\src\dvdlow.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001609C -> 0x80016E68
*/
static void (* Callback)(unsigned long); // size: 0x4, address: 0x8013AFC8
static void (* ResetCoverCallback)(unsigned long); // size: 0x4, address: 0x8013AFCC
static long long LastResetEnd; // size: 0x8, address: 0x8013AFD0
static unsigned long ResetOccurred; // size: 0x4, address: 0x8013AFD8
static int WaitingCoverClose; // size: 0x4, address: 0x8013AFDC
static int Breaking; // size: 0x4, address: 0x8013AFE0
static unsigned long WorkAroundType; // size: 0x4, address: 0x8013AFE4
static long WorkAroundSeekLocation; // size: 0x4, address: 0x8013AFE8
static long long LastReadFinished; // size: 0x8, address: 0x8013AFF0
static int LastCommandWasRead; // size: 0x4, address: 0x8013AFF8
static int FirstRead; // size: 0x4, address: 0x801379D8
static // total size: 0x14
struct {
    // Members
    long command; // offset 0x0, size 0x4
    void * address; // offset 0x4, size 0x4
    unsigned long length; // offset 0x8, size 0x4
    unsigned long offset; // offset 0xC, size 0x4
    void (* callback)(unsigned long); // offset 0x10, size 0x4
} CommandList[3]; // size: 0x3C, address: 0x80130020
static long NextCommandNumber; // size: 0x4, address: 0x8013AFFC
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
static struct OSAlarm AlarmForWA; // size: 0x28, address: 0x80130060
static struct OSAlarm AlarmForTimeout; // size: 0x28, address: 0x80130088
static // total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} Prev; // size: 0xC, address: 0x801300B0
static // total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} Curr; // size: 0xC, address: 0x801300BC
// Range: 0x8001609C -> 0x800160DC
void __DVDInitWA() {
    // References
    // -> static struct [anonymous] CommandList[3];
    // -> static long NextCommandNumber;
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
// Range: 0x800160DC -> 0x800163BC
void __DVDInterruptHandler(struct OSContext * context /* r28 */) {
    // Local variables
    void (* cb)(unsigned long); // r12
    struct OSContext exceptionContext; // r1+0x10
    unsigned long cause; // r29
    unsigned long reg; // r1+0x8
    unsigned long intr; // r1+0x8
    unsigned long mask; // r1+0x8

    // References
    // -> static int Breaking;
    // -> static void (* Callback)(unsigned long);
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
    // -> static int WaitingCoverClose;
    // -> static void (* ResetCoverCallback)(unsigned long);
    // -> static long long LastResetEnd;
    // -> static unsigned long ResetOccurred;
    // -> static int LastCommandWasRead;
    // -> static struct [anonymous] Curr;
    // -> static struct [anonymous] Prev;
    // -> static int FirstRead;
    // -> static long long LastReadFinished;
    // -> static struct OSAlarm AlarmForTimeout;
}

// Range: 0x800163BC -> 0x80016440
static void AlarmHandler() {
    // References
    // -> static struct [anonymous] CommandList[3];
    // -> static long NextCommandNumber;
}

// Range: 0x80016440 -> 0x800164B0
static void AlarmHandlerForTimeout(struct OSContext * context /* r31 */) {
    // Local variables
    void (* cb)(unsigned long); // r12
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x800164B0 -> 0x8001658C
static void Read(void * addr /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static int LastCommandWasRead;
    // -> static void (* Callback)(unsigned long);
}

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
// Range: 0x8001658C -> 0x8001660C
static void SeekTwiceBeforeRead(void * addr /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r6 */) {
    // Local variables
    unsigned long offsetToSeek; // r10

    // References
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
    // -> static long WorkAroundSeekLocation;
}

// Range: 0x8001660C -> 0x800168A4
int DVDLowRead(void * addr /* r24 */, unsigned long length /* r25 */, unsigned long offset /* r26 */, void (* callback)(unsigned long) /* r27 */) {
    // Local variables
    unsigned long blockNumOfPrevEnd; // r3
    unsigned long blockNumOfCurrStart; // r4
    long long diff; // r8

    // References
    // -> static struct OSAlarm AlarmForWA;
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
    // -> static long long LastReadFinished;
    // -> static struct [anonymous] Prev;
    // -> static int FirstRead;
    // -> static unsigned long WorkAroundType;
    // -> static struct [anonymous] Curr;
}

// Range: 0x800168A4 -> 0x8001692C
int DVDLowSeek(unsigned long offset /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x8001692C -> 0x8001694C
int DVDLowWaitCoverClose(void (* callback)(unsigned long) /* r1+0x0 */) {
    // References
    // -> static int WaitingCoverClose;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x8001694C -> 0x800169EC
int DVDLowReadDiskID(struct DVDDiskID * diskID /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x800169EC -> 0x80016A70
int DVDLowStopMotor(void (* callback)(unsigned long) /* r1+0x8 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016A70 -> 0x80016AF4
int DVDLowRequestError(void (* callback)(unsigned long) /* r1+0x8 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// total size: 0x20
struct DVDDriveInfo {
    // Members
    unsigned short revisionLevel; // offset 0x0, size 0x2
    unsigned short deviceCode; // offset 0x2, size 0x2
    unsigned long releaseDate; // offset 0x4, size 0x4
    unsigned char padding[24]; // offset 0x8, size 0x18
};
// Range: 0x80016AF4 -> 0x80016B88
int DVDLowInquiry(struct DVDDriveInfo * info /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016B88 -> 0x80016C14
int DVDLowAudioStream(unsigned long subcmd /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016C14 -> 0x80016C94
int DVDLowRequestAudioStatus(unsigned long subcmd /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016C94 -> 0x80016D30
int DVDLowAudioBufferConfig(int enable /* r1+0x8 */, unsigned long size /* r1+0xC */, void (* callback)(unsigned long) /* r1+0x10 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016D30 -> 0x80016DEC
void DVDLowReset() {
    // Local variables
    unsigned long reg; // r30
    long long resetStart; // r1+0x8

    // References
    // -> static long long LastResetEnd;
    // -> static unsigned long ResetOccurred;
}

// Range: 0x80016DEC -> 0x80016E0C
int DVDLowBreak() {
    // Local variables
    unsigned long statusReg; // r5

    // References
    // -> static int Breaking;
}

// Range: 0x80016E0C -> 0x80016E24
void (* DVDLowClearCallback())(unsigned long) {
    // Local variables
    void (* old)(unsigned long); // r3

    // References
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x80016E24 -> 0x80016E68
void __DVDLowSetWAType(unsigned long type /* r30 */, long seekLoc /* r31 */) {
    // Local variables
    int enabled; // r3

    // References
    // -> static long WorkAroundSeekLocation;
    // -> static unsigned long WorkAroundType;
}




