/*
    Compile unit: D:\Pure3d\Simulation\common\AccCount.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CAE80 -> 0x800CAF34
*/
// total size: 0xC
struct {} AccessCounter::__vtable; // size: 0xC, address: 0x80114268
// total size: 0x8
class AccessCounter {
    // Functions
    AccessCounter();

    ~AccessCounter();

    void Release();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int fCount; // offset 0x4, size 0x4
};
// Range: 0x800CAE80 -> 0x800CAE98
// this: r3
AccessCounter::AccessCounter() {
    // References
    // -> struct [anonymous] AccessCounter::__vtable;
}

// Range: 0x800CAE98 -> 0x800CAEE4
// this: r31
AccessCounter::~AccessCounter() {
    // References
    // -> struct [anonymous] AccessCounter::__vtable;
}

// Range: 0x800CAEE4 -> 0x800CAF34
// this: r3
void AccessCounter::Release() {}

static // total size: 0x8
struct {} AccessCounter::__RTTI; // size: 0x8, address: 0x8013A5F0



