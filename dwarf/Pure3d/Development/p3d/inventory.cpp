/*
    Compile unit: D:\Pure3d\development\p3d\inventory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044634 -> 0x80044C68
*/
// total size: 0x14
struct {} tEntityStore::__vtable; // size: 0x14, address: 0x8010199C
// total size: 0x18
struct {} tInventory::__vtable; // size: 0x18, address: 0x80101984
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
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x30
class tEntityTable : public tEntity {
    // Members
    int tableSize; // offset 0x10, size 0x4
    class tEntity * * table; // offset 0x14, size 0x4
    int nElement; // offset 0x18, size 0x4
    int resizeThreshhold; // offset 0x1C, size 0x4
    int nDeleteMarker; // offset 0x20, size 0x4
    int repackThreshhold; // offset 0x24, size 0x4
    class tEntity * deleteMarker; // offset 0x28, size 0x4
};
// total size: 0x458
class tInventory : public tEntityStore {
    // Functions
    tInventory();

    ~tInventory();

    class tEntity * Find(class tSafeEntityCasterBase & caster, unsigned long long uid);

    void Store(class tEntity * obj);

    void Remove(class tEntity * obj);

    unsigned char TestCollision(class tEntity * obj);

    void AddSection(const char * name);

    int SelectSection(unsigned long long uid);

    unsigned long long GetSelectedSection();

    int FindSection(unsigned long long uid);

    class tEntity * SearchSection(int s, class tSafeEntityCasterBase & caster, unsigned long long uid);

    void DeleteAllSections();

    // Members
protected:
    int nSection; // offset 0x8, size 0x4
    int currentSection; // offset 0xC, size 0x4
    unsigned char currentSectionOnly; // offset 0x10, size 0x1
    int sectionStack[16]; // offset 0x14, size 0x40
    int stackPos; // offset 0x54, size 0x4
    class tEntityTable * section[256]; // offset 0x58, size 0x400
};
// Range: 0x80044634 -> 0x800446B8
// this: r1+0x8
tInventory::tInventory() {
    // References
    // -> struct [anonymous] tInventory::__vtable;
    // -> struct [anonymous] tEntityStore::__vtable;
}

// Range: 0x8004471C -> 0x800447A4
// this: r30
tInventory::~tInventory() {
    // References
    // -> struct [anonymous] tEntityStore::__vtable;
    // -> struct [anonymous] tInventory::__vtable;
}

// Range: 0x800447A4 -> 0x80044848
// this: r27
class tEntity * tInventory::Find(class tSafeEntityCasterBase & caster /* r28 */, unsigned long long uid /* r30 */) {
    // Local variables
    class tEntity * obj; // r3
    int i; // r31
}

// Range: 0x80044848 -> 0x80044878
// this: r1+0x8
void tInventory::Store(class tEntity * obj /* r4 */) {}

// Range: 0x80044878 -> 0x800448A8
// this: r1+0x8
void tInventory::Remove(class tEntity * obj /* r4 */) {}

// total size: 0xC
struct {} tSafeCasterObj::__vtable; // size: 0xC, address: 0x80101924
// total size: 0x8
class tSafeCasterObj : public tSafeEntityCasterBase {
    // Functions
    class tEntity * safe_cast(class tEntity * c);

    // Members
    class tEntity * obj; // offset 0x4, size 0x4
};
// ERROR: Failed to emit tag 241FE7 (GlobalSubroutine)
// Range: 0x80044900 -> 0x800449C4
// this: r31
void tInventory::AddSection(const char * name /* r30 */) {
    // Local variables
    int sectionIndex; // r1+0x8
}

// total size: 0xC
struct /* @class$192inventory_cpp */ {
    // Members
    char gpr; // offset 0x0, size 0x1
    char fpr; // offset 0x1, size 0x1
    char reserved[2]; // offset 0x2, size 0x2
    char * input_arg_area; // offset 0x4, size 0x4
    char * reg_save_area; // offset 0x8, size 0x4
};
// Range: 0x800449C4 -> 0x80044A44
// this: r31
int tInventory::SelectSection(unsigned long long uid /* r5 */) {
    // Local variables
    int sectionIndex; // r3
}

// Range: 0x80044A44 -> 0x80044A60
// this: r1+0x0
unsigned long long tInventory::GetSelectedSection() {}

// Range: 0x80044A60 -> 0x80044AAC
// this: r3
int tInventory::FindSection(unsigned long long uid /* r1+0x8 */) {
    // Local variables
    int i; // r7
}

// total size: 0x20
class Iterator {
    // Members
    class tEntityTable * table; // offset 0x0, size 0x4
    unsigned long long uid; // offset 0x8, size 0x8
    int hash; // offset 0x10, size 0x4
    int increment; // offset 0x14, size 0x4
    int nSearch; // offset 0x18, size 0x4
};
// Range: 0x80044AAC -> 0x80044B70
// this: r3
class tEntity * tInventory::SearchSection(int s /* r1+0xC */, class tSafeEntityCasterBase & caster /* r29 */, unsigned long long uid /* r31 */) {
    // Local variables
    class Iterator iterator; // r1+0x28
    class tEntity * obj; // r31
}

// Range: 0x80044B70 -> 0x80044BF4
// this: r28
void tInventory::DeleteAllSections() {
    // Local variables
    int i; // r29
}

static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80137ED8
static // total size: 0x8
struct {} tSafeCasterObj::__RTTI; // size: 0x8, address: 0x80137EE0
// Range: 0x80044BF4 -> 0x80044C68
// this: r3
class tEntity * tSafeCasterObj::safe_cast(class tEntity * c /* r30 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137EE8
static // total size: 0x8
struct {} tEntityStore::__RTTI; // size: 0x8, address: 0x80137EF0
static // total size: 0x8
struct {} tInventory::__RTTI; // size: 0x8, address: 0x80137EF8



