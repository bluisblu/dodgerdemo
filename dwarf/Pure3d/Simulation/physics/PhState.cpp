/*
    Compile unit: D:\Pure3d\Simulation\physics\PhState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EBC20 -> 0x800EBD04
*/
// total size: 0xC
struct {} PhWorldState::__vtable; // size: 0xC, address: 0x80115CAC
// total size: 0x10
class PhWorldState {
    // Functions
    PhWorldState();

    ~PhWorldState();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float fTotalTime; // offset 0x4, size 0x4
    int fNbSubObj; // offset 0x8, size 0x4
    class PhBasicObjState * * fSubObjState; // offset 0xC, size 0x4
};
// Range: 0x800EBC20 -> 0x800EBC44
// this: r3
PhWorldState::PhWorldState() {
    // References
    // -> struct [anonymous] PhWorldState::__vtable;
}

// Range: 0x800EBC44 -> 0x800EBD04
// this: r28
PhWorldState::~PhWorldState() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] PhWorldState::__vtable;
}

// total size: 0xC
class PhBasicObjState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short fType; // offset 0x4, size 0x2
    float fTime; // offset 0x8, size 0x4
};
static // total size: 0x8
struct {} PhWorldState::__RTTI; // size: 0x8, address: 0x8013AB70



