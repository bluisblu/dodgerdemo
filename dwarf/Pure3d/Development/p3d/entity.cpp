/*
    Compile unit: D:\Pure3d\development\p3d\entity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003C6D4 -> 0x8003C838
*/
// total size: 0xC
struct {} tEntity::__vtable; // size: 0xC, address: 0x80100BF0
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Functions
    tEntity();

    ~tEntity();

    void SetName(const char * n);

    void CopyName(class tEntity * ent);

    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// Range: 0x8003C6D4 -> 0x8003C71C
// this: r31
tEntity::tEntity() {
    // References
    // -> struct [anonymous] tEntity::__vtable;
}

// Range: 0x8003C71C -> 0x8003C780
// this: r30
tEntity::~tEntity() {
    // References
    // -> struct [anonymous] tEntity::__vtable;
}

// Range: 0x8003C780 -> 0x8003C7B8
// this: r31
void tEntity::SetName(const char * n /* r4 */) {}

// Range: 0x8003C7B8 -> 0x8003C7CC
// this: r1+0x0
void tEntity::CopyName(class tEntity * ent /* r1+0x4 */) {}

// Range: 0x8003C7CC -> 0x8003C838
unsigned long long tEntity::MakeUID(const char * x /* r3 */) {
    // Local variables
    unsigned long long h; // r6
    char * s; // r3
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137CB0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137CB8



