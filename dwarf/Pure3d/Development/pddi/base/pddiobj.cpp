/*
    Compile unit: D:\Pure3d\development\pddi\base\pddiobj.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BE26C -> 0x800BE340
*/
// total size: 0x18
struct {} pddiObject::__vtable; // size: 0x18, address: 0x8011315C
// total size: 0xC
class pddiObject {
    // Functions
    pddiObject();

    ~pddiObject();

    void AddRef();

    void Release();

    int GetLastError();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
// Range: 0x800BE26C -> 0x800BE28C
// this: r3
pddiObject::pddiObject() {
    // References
    // -> struct [anonymous] pddiObject::__vtable;
}

// Range: 0x800BE28C -> 0x800BE2D8
// this: r31
pddiObject::~pddiObject() {
    // References
    // -> struct [anonymous] pddiObject::__vtable;
}

// Range: 0x800BE2D8 -> 0x800BE2E8
// this: r1+0x0
void pddiObject::AddRef() {}

// Range: 0x800BE2E8 -> 0x800BE338
// this: r3
void pddiObject::Release() {}

// Range: 0x800BE338 -> 0x800BE340
// this: r3
int pddiObject::GetLastError() {}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A240



