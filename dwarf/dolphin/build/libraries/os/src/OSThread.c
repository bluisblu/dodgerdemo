/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSThread.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80012430 -> 0x80013300
*/
static unsigned long RunQueueBits; // size: 0x4, address: 0x8013AEF8
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
static struct OSThreadQueue RunQueue[32]; // size: 0x100, address: 0x80117AD8
static int RunQueueHint; // size: 0x4, address: 0x8013AEFC
static long Reschedule; // size: 0x4, address: 0x8013AF00
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
static struct OSThread IdleThread; // size: 0x310, address: 0x80117BD8
static struct OSThread DefaultThread; // size: 0x310, address: 0x80117EE8
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
static struct OSContext IdleContext; // size: 0x2C8, address: 0x801181F8
unsigned char _stack_addr[]; // size: 0x0, address: 0x8014C5A0
unsigned char _stack_end[]; // size: 0x0, address: 0x8013C5A0
// Range: 0x80012430 -> 0x80012558
void __OSThreadInit() {
    // Local variables
    struct OSThread * thread; // r31
    int prio; // r26
    struct OSThread * __prev; // r3

    // References
    // -> static long Reschedule;
    // -> static struct OSContext IdleContext;
    // -> static struct OSThreadQueue RunQueue[32];
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThread DefaultThread;
    // -> unsigned char _stack_end[];
    // -> unsigned char _stack_addr[];
}

// Range: 0x80012558 -> 0x80012568
void OSInitThreadQueue(struct OSThreadQueue * queue /* r1+0x0 */) {}

// Range: 0x80012568 -> 0x80012574
struct OSThread * OSGetCurrentThread() {}

// Range: 0x80012574 -> 0x800125B4
long OSDisableScheduler() {
    // Local variables
    int enabled; // r3
    long count; // r31

    // References
    // -> static long Reschedule;
}

// Range: 0x800125B4 -> 0x800125F4
long OSEnableScheduler() {
    // Local variables
    int enabled; // r3
    long count; // r31

    // References
    // -> static long Reschedule;
}

// Range: 0x800125F4 -> 0x8001265C
static void UnsetRun(struct OSThread * thread /* r1+0x0 */) {
    // Local variables
    struct OSThreadQueue * queue; // r5
    struct OSThread * __next; // r1+0x0
    struct OSThread * __prev; // r6

    // References
    // -> static unsigned long RunQueueBits;
}

// Range: 0x8001265C -> 0x80012698
long __OSGetEffectivePriority(struct OSThread * thread /* r1+0x0 */) {
    // Local variables
    long priority; // r4
    struct OSMutex * mutex; // r5
    struct OSThread * blocked; // r1+0x0
}

// Range: 0x80012698 -> 0x80012858
static struct OSThread * SetEffectivePriority(struct OSThread * thread /* r31 */, long priority /* r30 */) {
    // Local variables
    struct OSThread * __next; // r1+0x8
    struct OSThread * __prev; // r5
    struct OSThread * __prev; // r3
    struct OSThread * __next; // r5
    struct OSThread * __prev; // r1+0x8

    // References
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
}

// Range: 0x80012858 -> 0x800128A8
void __OSPromoteThread(struct OSThread * thread /* r3 */, long priority /* r31 */) {}

// Range: 0x800128A8 -> 0x80012AA8
static struct OSThread * SelectThread(int yield /* r30 */) {
    // Local variables
    struct OSContext * currentContext; // r1+0x8
    struct OSThread * currentThread; // r3
    struct OSThread * nextThread; // r31
    long priority; // r4
    struct OSThreadQueue * queue; // r1+0x8
    struct OSThread * __next; // r1+0x8

    // References
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
    // -> static int RunQueueHint;
    // -> static struct OSContext IdleContext;
    // -> static long Reschedule;
}

// Range: 0x80012AA8 -> 0x80012AD8
void __OSReschedule() {
    // References
    // -> static int RunQueueHint;
}

// Range: 0x80012AD8 -> 0x80012B14
void OSYieldThread() {
    // Local variables
    int enabled; // r31
}

// Range: 0x80012B14 -> 0x80012C34
int OSCreateThread(struct OSThread * thread /* r31 */, void * (* func)(void *) /* r4 */, void * param /* r28 */, void * stack /* r29 */, unsigned long stackSize /* r30 */, long priority /* r1+0x1C */, unsigned short attr /* r1+0x20 */) {
    // Local variables
    int enabled; // r3
    unsigned long sp; // r1+0x8
    struct OSThread * __prev; // r6
}

// Range: 0x80012C34 -> 0x80012D18
void OSExitThread(void * val /* r28 */) {
    // Local variables
    int enabled; // r29
    struct OSThread * currentThread; // r30
    struct OSThread * __next; // r1+0x8
    struct OSThread * __prev; // r5

    // References
    // -> static int RunQueueHint;
}

// Range: 0x80012D18 -> 0x80012FA0
long OSResumeThread(struct OSThread * thread /* r29 */) {
    // Local variables
    int enabled; // r31
    long suspendCount; // r30
    struct OSThread * __next; // r1+0x8
    struct OSThread * __prev; // r5
    struct OSThread * __prev; // r3
    struct OSThread * __next; // r5
    struct OSThread * __prev; // r1+0x8

    // References
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
}

// Range: 0x80012FA0 -> 0x80013110
long OSSuspendThread(struct OSThread * thread /* r29 */) {
    // Local variables
    int enabled; // r31
    long suspendCount; // r30
    struct OSThread * __next; // r1+0x8
    struct OSThread * __prev; // r5
    struct OSThread * __prev; // r1+0x8

    // References
    // -> static int RunQueueHint;
}

// Range: 0x80013110 -> 0x800131FC
void OSSleepThread(struct OSThreadQueue * queue /* r30 */) {
    // Local variables
    int enabled; // r31
    struct OSThread * __prev; // r3
    struct OSThread * __next; // r5
    struct OSThread * __prev; // r1+0x8

    // References
    // -> static int RunQueueHint;
}

// Range: 0x800131FC -> 0x80013300
void OSWakeupThread(struct OSThreadQueue * queue /* r30 */) {
    // Local variables
    int enabled; // r31
    struct OSThread * __next; // r1+0x8

    // References
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
}




