/*
    Compile unit: D:\Pure3d\development\p3d\entitytable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003C838 -> 0x8003D1C0
*/
// total size: 0x20
class Iterator {
    // Functions
    Iterator(class tEntityTable * t);

    ~Iterator();

    class tEntity * First(unsigned long long u);

    class tEntity * Next();

    // Members
    class tEntityTable * table; // offset 0x0, size 0x4
    unsigned long long uid; // offset 0x8, size 0x8
    int hash; // offset 0x10, size 0x4
    int increment; // offset 0x14, size 0x4
    int nSearch; // offset 0x18, size 0x4
};
// Range: 0x8003C838 -> 0x8003C864
// this: r3
Iterator::Iterator(class tEntityTable * t /* r1+0x4 */) {}

// Range: 0x8003C864 -> 0x8003C8B8
// this: r30
Iterator::~Iterator() {}

// Range: 0x8003C8B8 -> 0x8003C9DC
// this: r31
class tEntity * Iterator::First(unsigned long long u /* r1+0x10 */) {}

// Range: 0x8003C9DC -> 0x8003CA98
// this: r1+0x0
class tEntity * Iterator::Next() {}

// total size: 0x8
class RawIterator {
    // Functions
    RawIterator(class tEntityTable * t);

    ~RawIterator();

    class tEntity * First();

    class tEntity * Next();

    // Members
    class tEntityTable * table; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
};
// Range: 0x8003CA98 -> 0x8003CAB8
// this: r3
RawIterator::RawIterator(class tEntityTable * t /* r1+0x4 */) {}

// Range: 0x8003CAB8 -> 0x8003CB0C
// this: r30
RawIterator::~RawIterator() {}

// Range: 0x8003CB0C -> 0x8003CB34
// this: r3
class tEntity * RawIterator::First() {}

// Range: 0x8003CB34 -> 0x8003CBB4
// this: r1+0x0
class tEntity * RawIterator::Next() {}

// total size: 0xC
struct {} tEntityTable::__vtable; // size: 0xC, address: 0x80100C3C
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
// total size: 0x30
class tEntityTable : public tEntity {
    // Functions
    tEntityTable();

    ~tEntityTable();

    void RemoveAll();

    void Grow();

    void Rehash(class tEntity * * elements, int count);

    void Store(class tEntity * obj);

    void Remove(class tEntity * obj);

    // Members
    int tableSize; // offset 0x10, size 0x4
    class tEntity * * table; // offset 0x14, size 0x4
    int nElement; // offset 0x18, size 0x4
    int resizeThreshhold; // offset 0x1C, size 0x4
    int nDeleteMarker; // offset 0x20, size 0x4
    int repackThreshhold; // offset 0x24, size 0x4
    class tEntity * deleteMarker; // offset 0x28, size 0x4
};
// Range: 0x8003CBB4 -> 0x8003CC68
// this: r1+0x8
tEntityTable::tEntityTable() {
    // References
    // -> struct [anonymous] tEntityTable::__vtable;
}

// Range: 0x8003CC68 -> 0x8003CCE4
// this: r30
tEntityTable::~tEntityTable() {
    // References
    // -> struct [anonymous] tEntityTable::__vtable;
}

// Range: 0x8003CCE4 -> 0x8003CD88
// this: r28
void tEntityTable::RemoveAll() {
    // Local variables
    int i; // r29
}

// Range: 0x8003CD88 -> 0x8003CE8C
// this: r31
void tEntityTable::Grow() {
    // Local variables
    class tEntity * * oldTable; // r30
    int oldSize; // r29
}

// Range: 0x8003CE8C -> 0x8003CF7C
// this: r28
void tEntityTable::Rehash(class tEntity * * elements /* r4 */, int count /* r29 */) {
    // Local variables
    class Iterator iterator; // r1+0x38
    int i; // r30
    unsigned long long uid; // r5
}

// Range: 0x8003CF7C -> 0x8003D068
// this: r30
void tEntityTable::Store(class tEntity * obj /* r31 */) {
    // Local variables
    unsigned long long uid; // r5
    class Iterator iterator; // r1+0x28
}

// Range: 0x8003D068 -> 0x8003D1C0
// this: r31
void tEntityTable::Remove(class tEntity * obj /* r29 */) {
    // Local variables
    class Iterator iterator; // r1+0x30
    int where; // r1+0x8
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137CC0
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137CD0
static // total size: 0x8
struct {} tEntityTable::__RTTI; // size: 0x8, address: 0x80137CD8



