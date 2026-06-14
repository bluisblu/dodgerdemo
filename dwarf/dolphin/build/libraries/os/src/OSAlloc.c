/*
    Compile unit: c:\dolphin\build\libraries\os\src\OSAlloc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8000E360 -> 0x8000E670
*/
int __OSCurrHeap; // size: 0x4, address: 0x801379B8
// total size: 0xC
struct Cell {
    // Members
    struct Cell * prev; // offset 0x0, size 0x4
    struct Cell * next; // offset 0x4, size 0x4
    long size; // offset 0x8, size 0x4
};
// total size: 0xC
struct HeapDesc {
    // Members
    long size; // offset 0x0, size 0x4
    struct Cell * free; // offset 0x4, size 0x4
    struct Cell * allocated; // offset 0x8, size 0x4
};
static struct HeapDesc * HeapArray; // size: 0x4, address: 0x8013AEC8
static int NumHeaps; // size: 0x4, address: 0x8013AECC
static void * ArenaStart; // size: 0x4, address: 0x8013AED0
static void * ArenaEnd; // size: 0x4, address: 0x8013AED4
// Range: 0x8000E360 -> 0x8000E40C
static struct Cell * DLInsert(struct Cell * list /* r3 */, struct Cell * cell /* r4 */) {
    // Local variables
    struct Cell * prev; // r6
    struct Cell * next; // r7
}

// Range: 0x8000E40C -> 0x8000E508
void * OSAllocFromHeap(int heap /* r1+0x0 */, unsigned long size /* r3 */) {
    // Local variables
    struct HeapDesc * hd; // r1+0x0
    struct Cell * cell; // r6
    struct Cell * newCell; // r4
    long leftoverSize; // r1+0x0

    // References
    // -> static struct HeapDesc * HeapArray;
}

// Range: 0x8000E508 -> 0x8000E584
void OSFreeToHeap(int heap /* r1+0x8 */, void * ptr /* r1+0xC */) {
    // Local variables
    struct HeapDesc * hd; // r1+0x8
    struct Cell * cell; // r4

    // References
    // -> static struct HeapDesc * HeapArray;
}

// Range: 0x8000E584 -> 0x8000E594
int OSSetCurrentHeap(int heap /* r1+0x0 */) {
    // Local variables
    int prev; // r1+0x0

    // References
    // -> int __OSCurrHeap;
}

// Range: 0x8000E594 -> 0x8000E604
void * OSInitAlloc(void * arenaStart /* r3 */, void * arenaEnd /* r1+0x4 */, int maxHeaps /* r1+0x8 */) {
    // Local variables
    unsigned long arraySize; // r7
    int i; // r8
    struct HeapDesc * hd; // r9

    // References
    // -> static void * ArenaEnd;
    // -> static void * ArenaStart;
    // -> static struct HeapDesc * HeapArray;
    // -> int __OSCurrHeap;
    // -> static int NumHeaps;
}

// Range: 0x8000E604 -> 0x8000E670
int OSCreateHeap(void * start /* r7 */, void * end /* r4 */) {
    // Local variables
    int heap; // r3
    struct Cell * cell; // r1+0x0

    // References
    // -> static int NumHeaps;
    // -> static struct HeapDesc * HeapArray;
}




