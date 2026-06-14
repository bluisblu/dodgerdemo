/*
    Compile unit: D:\Pure3d\Simulation\common\tlist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CEBA0 -> 0x800CF034
*/
// total size: 0xC
struct {} VoidPList::__vtable; // size: 0xC, address: 0x80114574
// total size: 0x14
class VoidPList {
    // Functions
    VoidPList(int arraysize);

    ~VoidPList();

    void Remove(void * el);

    unsigned char Contains(void * el) const;

    void Add(void * el);

    void Grow();

    void ResizeArray(int newarraysize);

    void RemoveAll();

    void RemoveAt(int nIndex);

    void SetAt(int nIndex, void * newElement);

    void Compact();

    void Add(const class VoidPList & list);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char fLock; // offset 0x4, size 0x1
private:
    int fSize; // offset 0x8, size 0x4
    int fArraySize; // offset 0xC, size 0x4
    void * fArray; // offset 0x10, size 0x4
};
// Range: 0x800CEBA0 -> 0x800CEBF8
// this: r31
VoidPList::VoidPList(int arraysize /* r1+0xC */) {
    // References
    // -> struct [anonymous] VoidPList::__vtable;
}

// Range: 0x800CEBF8 -> 0x800CEC58
// this: r30
VoidPList::~VoidPList() {
    // References
    // -> struct [anonymous] VoidPList::__vtable;
}

// Range: 0x800CEC58 -> 0x800CECDC
// this: r28
void VoidPList::Remove(void * el /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800CECDC -> 0x800CED18
// this: r1+0x0
unsigned char VoidPList::Contains(void * el /* r1+0x4 */) const {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x800CED18 -> 0x800CED80
// this: r30
void VoidPList::Add(void * el /* r31 */) {}

// Range: 0x800CED80 -> 0x800CEDA8
// this: r3
void VoidPList::Grow() {}

// Range: 0x800CEDA8 -> 0x800CEE28
// this: r29
void VoidPList::ResizeArray(int newarraysize /* r30 */) {
    // Local variables
    void * array; // r31
}

// Range: 0x800CEE28 -> 0x800CEE34
// this: r1+0x0
void VoidPList::RemoveAll() {}

// Range: 0x800CEE34 -> 0x800CEE78
// this: r1+0x0
void VoidPList::RemoveAt(int nIndex /* r4 */) {
    // Local variables
    int i; // r4
}

// Range: 0x800CEE78 -> 0x800CEE88
// this: r1+0x0
void VoidPList::SetAt(int nIndex /* r1+0x4 */, void * newElement /* r1+0x8 */) {}

// Range: 0x800CEE88 -> 0x800CEEFC
// this: r1+0x0
void VoidPList::Compact() {
    // Local variables
    int hole; // r7
    int i; // r8
}

// Range: 0x800CEEFC -> 0x800CEFD4
// this: r28
void VoidPList::Add(const class VoidPList & list /* r29 */) {}

// total size: 0x4
class ListLocker {
    // Functions
    ListLocker(class VoidPList * list);

    ~ListLocker();

    // Members
    class VoidPList * fList; // offset 0x0, size 0x4
};
// Range: 0x800CEFD4 -> 0x800CEFE8
// this: r3
ListLocker::ListLocker(class VoidPList * list /* r1+0x4 */) {}

// Range: 0x800CEFE8 -> 0x800CF034
// this: r31
ListLocker::~ListLocker() {}

static // total size: 0x8
struct {} VoidPList::__RTTI; // size: 0x8, address: 0x8013A6A8



