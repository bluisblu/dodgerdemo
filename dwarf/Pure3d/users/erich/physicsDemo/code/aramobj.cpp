/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\aramobj.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80005840 -> 0x80005AFC
*/
// total size: 0xC
struct AllocInfo {
    // Members
    unsigned long start; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
    unsigned char released; // offset 0x8, size 0x1
};
struct AllocInfo mAllocInfo[257]; // size: 0xC0C, address: 0x80116AE0
int mAllocHead; // size: 0x4, address: 0x80137640
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
// total size: 0x2C
class ARAMObj {
    // Functions
    unsigned char SetData(void * data, unsigned long size, unsigned long destoffset);

    // Static members
    static int mAllocHead; // size: 0x4
    static struct AllocInfo mAllocInfo[257]; // size: 0xC0C

    // Members
    struct ARQRequest mTransferRequest; // offset 0x0, size 0x20
    struct AllocInfo * mAlloc; // offset 0x20, size 0x4
    unsigned char mTransferring; // offset 0x24, size 0x1
    unsigned long mAllocSize; // offset 0x28, size 0x4
};
// Range: 0x80005840 -> 0x800058A0
// this: r3
unsigned char ARAMObj::SetData(void * data /* r7 */, unsigned long size /* r5 */, unsigned long destoffset /* r6 */) {}

// Range: 0x800058A0 -> 0x800059C0
void ARAMObj::InitARAMHeap(unsigned long size /* r29 */, unsigned long start /* r30 */) {
    // Local variables
    int a; // r5

    // References
    // -> struct AllocInfo mAllocInfo[257];
    // -> int mAllocHead;
}

// Range: 0x800059C0 -> 0x80005AB8
class ARAMObj * ARAMObj::Allocate(unsigned long size /* r28 */) {
    // Local variables
    unsigned long asize; // r29
    struct AllocInfo * info; // r1+0x8
    unsigned long memremain; // r1+0x8
    struct AllocInfo * newhead; // r4

    // References
    // -> int mAllocHead;
    // -> struct AllocInfo mAllocInfo[257];
}

// Range: 0x80005AB8 -> 0x80005AE4
unsigned long ARAMObj::MemFree() {
    // References
    // -> struct AllocInfo mAllocInfo[257];
    // -> int mAllocHead;
}

// Range: 0x80005AE4 -> 0x80005AFC
void ARAMObj::TransferCompleteCallback(struct ARQRequest * xfer /* r1+0x0 */) {
    // Local variables
    class ARAMObj * obj; // r1+0x0
}




