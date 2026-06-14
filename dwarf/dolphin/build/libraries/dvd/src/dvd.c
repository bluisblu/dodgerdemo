/*
    Compile unit: i:\dolphin\build\libraries\dvd\src\dvd.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800175CC -> 0x80019604
*/
static struct DVDCommandBlock * executing; // size: 0x4, address: 0x8013B020
static unsigned char * tmpBuffer[32]; // size: 0x80, address: 0x801300E0
static struct DVDDiskID * currID; // size: 0x4, address: 0x8013B024
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
static struct OSBootInfo_s * bootInfo; // size: 0x4, address: 0x8013B028
static int autoInvalidation; // size: 0x4, address: 0x801379E8
static int PauseFlag; // size: 0x4, address: 0x8013B02C
static int PausingFlag; // size: 0x4, address: 0x8013B030
static int AutoFinishing; // size: 0x4, address: 0x8013B034
static int FatalErrorFlag; // size: 0x4, address: 0x8013B038
static unsigned long CurrCommand; // size: 0x4, address: 0x8013B03C
static unsigned long Canceling; // size: 0x4, address: 0x8013B040
static void (* CancelCallback)(long, struct DVDCommandBlock *); // size: 0x4, address: 0x8013B044
static unsigned long ResumeFromHere; // size: 0x4, address: 0x8013B048
static unsigned long CancelLastError; // size: 0x4, address: 0x8013B04C
static unsigned long LastError; // size: 0x4, address: 0x8013B050
static long NumInternalRetry; // size: 0x4, address: 0x8013B054
static int ResetRequired; // size: 0x4, address: 0x8013B058
static int FirstTimeInBootrom; // size: 0x4, address: 0x8013B05C
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
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
static struct DVDCommandBlock DummyCommandBlock; // size: 0x30, address: 0x80130160
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
static struct OSAlarm ResetAlarm; // size: 0x28, address: 0x80130190
static int DVDInitialized; // size: 0x4, address: 0x8013B060
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x310
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
struct OSThreadQueue __DVDThreadQueue; // size: 0x8, address: 0x8013B018
// Range: 0x800175CC -> 0x800176C8
void DVDInit() {
    // References
    // -> static int FirstTimeInBootrom;
    // -> static struct OSBootInfo_s * bootInfo;
    // -> struct OSThreadQueue __DVDThreadQueue;
    // -> static struct DVDDiskID * currID;
    // -> static int DVDInitialized;
}

void (* LastState)(struct DVDCommandBlock *); // size: 0x4, address: 0x8013B064
// Range: 0x800176C8 -> 0x8001771C
static void stateReadingFST() {
    // References
    // -> static unsigned char * tmpBuffer[32];
    // -> static struct OSBootInfo_s * bootInfo;
    // -> void (* LastState)(struct DVDCommandBlock *);
}

// Range: 0x8001771C -> 0x80017790
static void cbForStateReadingFST(unsigned long intType /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r4

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static long NumInternalRetry;
}

// Range: 0x80017790 -> 0x800177F0
static void cbForStateError(unsigned long intType /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r4

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static int FatalErrorFlag;
}

// Range: 0x800177F0 -> 0x80017850
static void stateTimeout() {
    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static int FatalErrorFlag;
}

// Range: 0x80017850 -> 0x80017878
static void stateGettingError() {}

// Range: 0x80017878 -> 0x80017908
static unsigned long CategorizeError(unsigned long error /* r4 */) {
    // References
    // -> static unsigned long LastError;
    // -> static long NumInternalRetry;
}

// Range: 0x80017908 -> 0x80017B90
static void cbForStateGettingError(unsigned long intType /* r1+0x8 */) {
    // Local variables
    unsigned long error; // r29
    unsigned long status; // r28
    unsigned long errorCategory; // r1+0x8
    unsigned long resume; // r4

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
}

// Range: 0x80017B90 -> 0x80017BEC
static void cbForUnrecoveredError(unsigned long intType /* r1+0x8 */) {}

// Range: 0x80017BEC -> 0x80017C78
static void cbForUnrecoveredErrorRetry(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
}

// Range: 0x80017C78 -> 0x80017CA0
static void stateGoToRetry() {}

// Range: 0x80017CA0 -> 0x80017DEC
static void cbForStateGoToRetry(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
    // -> static int ResetRequired;
    // -> static unsigned long CurrCommand;
    // -> static long NumInternalRetry;
}

// Range: 0x80017DEC -> 0x80017ED0
static void stateCheckID() {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static struct DVDDiskID * currID;
    // -> static unsigned char * tmpBuffer[32];
    // -> static unsigned long CurrCommand;
}

// Range: 0x80017ED0 -> 0x80017F04
static void stateCheckID3() {
    // References
    // -> static struct DVDDiskID * currID;
}

// Range: 0x80017F04 -> 0x80017F3C
static void stateCheckID2() {
    // References
    // -> static unsigned char * tmpBuffer[32];
}

// Range: 0x80017F3C -> 0x80018044
static void cbForStateCheckID1(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
    // -> static long NumInternalRetry;
}

// Range: 0x80018044 -> 0x800180DC
static void cbForStateCheckID2(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static unsigned char * tmpBuffer[32];
    // -> static struct OSBootInfo_s * bootInfo;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static long NumInternalRetry;
}

// Range: 0x800180DC -> 0x800181CC
static void cbForStateCheckID3(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
    // -> static long NumInternalRetry;
}

// Range: 0x800181CC -> 0x80018210
static void AlarmHandler() {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static unsigned char * tmpBuffer[32];
}

// Range: 0x80018210 -> 0x800182DC
static void stateCoverClosed() {
    // Local variables
    struct DVDCommandBlock * finished; // r4

    // References
    // -> static struct OSAlarm ResetAlarm;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long CurrCommand;
}

// Range: 0x800182DC -> 0x8001830C
static void stateCoverClosed_CMD() {
    // References
    // -> static unsigned char * tmpBuffer[32];
}

// Range: 0x8001830C -> 0x80018370
static void cbForStateCoverClosed(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static long NumInternalRetry;
}

// Range: 0x80018370 -> 0x80018398
static void stateMotorStopped() {}

// Range: 0x80018398 -> 0x8001847C
static void cbForStateMotorStopped() {
    // References
    // -> static struct OSAlarm ResetAlarm;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long CurrCommand;
}

// Range: 0x8001847C -> 0x800186C4
static void stateReady() {
    // Local variables
    struct DVDCommandBlock * finished; // r4

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long ResumeFromHere;
    // -> static unsigned long CancelLastError;
    // -> static struct OSAlarm ResetAlarm;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static unsigned long CurrCommand;
    // -> static int FatalErrorFlag;
    // -> static int PausingFlag;
    // -> static int PauseFlag;
}

// Range: 0x800186C4 -> 0x80018984
static void stateBusy(struct DVDCommandBlock * block /* r7 */) {
    // References
    // -> static int AutoFinishing;
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
}

// Range: 0x80018984 -> 0x80018F4C
static void cbForStateBusy(unsigned long intType /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r30
    long result; // r3

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
    // -> static unsigned long CurrCommand;
    // -> static int AutoFinishing;
    // -> static long NumInternalRetry;
    // -> static int ResetRequired;
}

// Range: 0x80018F4C -> 0x80019028
int DVDReadAbsAsyncPrio(struct DVDCommandBlock * block /* r29 */, void * addr /* r1+0xC */, long length /* r1+0x10 */, long offset /* r1+0x14 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x18 */, long prio /* r31 */) {
    // References
    // -> static int PauseFlag;
    // -> static struct DVDCommandBlock * executing;
    // -> static int autoInvalidation;
}

// Range: 0x80019028 -> 0x800190F8
int DVDReadAbsAsyncForBS(struct DVDCommandBlock * block /* r31 */, void * addr /* r1+0xC */, long length /* r1+0x10 */, long offset /* r1+0x14 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x18 */) {
    // References
    // -> static int PauseFlag;
    // -> static struct DVDCommandBlock * executing;
    // -> static int autoInvalidation;
}

// Range: 0x800190F8 -> 0x800191CC
int DVDReadDiskID(struct DVDCommandBlock * block /* r31 */, struct DVDDiskID * diskID /* r1+0xC */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x10 */) {
    // References
    // -> static int PauseFlag;
    // -> static struct DVDCommandBlock * executing;
    // -> static int autoInvalidation;
}

// total size: 0x20
struct DVDDriveInfo {
    // Members
    unsigned short revisionLevel; // offset 0x0, size 0x2
    unsigned short deviceCode; // offset 0x2, size 0x2
    unsigned long releaseDate; // offset 0x4, size 0x4
    unsigned char padding[24]; // offset 0x8, size 0x18
};
// Range: 0x800191CC -> 0x80019210
void DVDReset() {
    // References
    // -> static unsigned long ResumeFromHere;
    // -> static int ResetRequired;
}

// Range: 0x80019210 -> 0x800192BC
long DVDGetDriveStatus() {
    // Local variables
    int enabled; // r30
    long retVal; // r31

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static int PausingFlag;
    // -> static int FatalErrorFlag;
}

// Range: 0x800192BC -> 0x8001952C
int DVDCancelAsync(struct DVDCommandBlock * block /* r29 */, void (* callback)(long, struct DVDCommandBlock *) /* r30 */) {
    // Local variables
    int enabled; // r31
    void (* old)(unsigned long); // r1+0x8

    // References
    // -> static unsigned long ResumeFromHere;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
}

// Range: 0x8001952C -> 0x800195D8
long DVDCancel(struct DVDCommandBlock * block /* r30 */) {
    // Local variables
    int result; // r1+0x8
    long state; // r3
    unsigned long command; // r3
    int enabled; // r31

    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}

// Range: 0x800195D8 -> 0x800195FC
static void cbForCancelSync() {
    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}

// Range: 0x800195FC -> 0x80019604
struct DVDDiskID * DVDGetCurrentDiskID() {}




