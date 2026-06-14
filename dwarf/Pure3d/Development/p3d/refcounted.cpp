/*
    Compile unit: D:\Pure3d\development\p3d\refcounted.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004DDCC -> 0x8004DE80
*/
// total size: 0xC
struct {} tRefCounted::__vtable; // size: 0xC, address: 0x8010273C
// total size: 0x8
class tRefCounted {
    // Functions
    tRefCounted();

    ~tRefCounted();

    void Release();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// Range: 0x8004DDCC -> 0x8004DDE4
// this: r3
tRefCounted::tRefCounted() {
    // References
    // -> struct [anonymous] tRefCounted::__vtable;
}

// Range: 0x8004DDE4 -> 0x8004DE30
// this: r31
tRefCounted::~tRefCounted() {
    // References
    // -> struct [anonymous] tRefCounted::__vtable;
}

// Range: 0x8004DE30 -> 0x8004DE80
// this: r3
void tRefCounted::Release() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138198



