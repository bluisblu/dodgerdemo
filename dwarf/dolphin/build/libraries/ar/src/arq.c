/*
    Compile unit: c:\dolphin\build\libraries\ar\src\arq.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001ED94 -> 0x8001F128
*/
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned long owner; // offset 0x4, size 0x4
    unsigned long type; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    unsigned long source; // offset 0x10, size 0x4
    unsigned long dest; // offset 0x14, size 0x4
    unsigned long length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
static struct ARQRequest * __ARQRequestQueueHi; // size: 0x4, address: 0x8013B138
static struct ARQRequest * __ARQRequestTailHi; // size: 0x4, address: 0x8013B13C
static struct ARQRequest * __ARQRequestQueueLo; // size: 0x4, address: 0x8013B140
static struct ARQRequest * __ARQRequestTailLo; // size: 0x4, address: 0x8013B144
static struct ARQRequest * __ARQRequestPendingHi; // size: 0x4, address: 0x8013B148
static struct ARQRequest * __ARQRequestPendingLo; // size: 0x4, address: 0x8013B14C
static void (* __ARQCallbackHi)(unsigned long); // size: 0x4, address: 0x8013B150
static void (* __ARQCallbackLo)(unsigned long); // size: 0x4, address: 0x8013B154
static unsigned long __ARQChunkSize; // size: 0x4, address: 0x8013B158
static int __ARQ_init_flag; // size: 0x4, address: 0x8013B15C
// Range: 0x8001ED94 -> 0x8001EE94
void __ARQServiceQueueLo() {
    // References
    // -> static unsigned long __ARQChunkSize;
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestQueueLo;
}

// Range: 0x8001EE94 -> 0x8001EE98
void __ARQCallbackHack() {}

// Range: 0x8001EE98 -> 0x8001EF64
void __ARQInterruptServiceRoutine() {
    // References
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static struct ARQRequest * __ARQRequestQueueHi;
    // -> static void (* __ARQCallbackHi)(unsigned long);
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestPendingLo;
}

// Range: 0x8001EF64 -> 0x8001EFCC
void ARQInit() {
    // References
    // -> static int __ARQ_init_flag;
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static void (* __ARQCallbackHi)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static unsigned long __ARQChunkSize;
    // -> static struct ARQRequest * __ARQRequestQueueLo;
    // -> static struct ARQRequest * __ARQRequestQueueHi;
}

// Range: 0x8001EFCC -> 0x8001F128
void ARQPostRequest(struct ARQRequest * request /* r29 */, unsigned long owner /* r1+0xC */, unsigned long type /* r1+0x10 */, unsigned long priority /* r30 */, unsigned long source /* r1+0x18 */, unsigned long dest /* r1+0x1C */, unsigned long length /* r1+0x20 */, void (* callback)(unsigned long) /* r1+0x24 */) {
    // Local variables
    int level; // r31

    // References
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static struct ARQRequest * __ARQRequestQueueHi;
    // -> static void (* __ARQCallbackHi)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static struct ARQRequest * __ARQRequestTailHi;
    // -> static struct ARQRequest * __ARQRequestTailLo;
    // -> static struct ARQRequest * __ARQRequestQueueLo;
}




