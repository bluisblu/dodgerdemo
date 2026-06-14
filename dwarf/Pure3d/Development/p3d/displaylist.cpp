/*
    Compile unit: D:\Pure3d\development\p3d\displaylist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003BB00 -> 0x8003C170
*/
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
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class DisplayList {
    // Functions
    DisplayList();

    ~DisplayList();

    void Display(const class Matrix & view);

    void Display();

    void Add(class DisplayListDrawable * object);

    void Purge();

    void SetSize(int size);

    void Sort();

    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
};
// Range: 0x8003BB00 -> 0x8003BB1C
// this: r3
DisplayList::DisplayList() {}

// Range: 0x8003BB1C -> 0x8003BB70
// this: r30
DisplayList::~DisplayList() {}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x8003BB70 -> 0x8003BCCC
// this: r30
void DisplayList::Display(const class Matrix & view /* r31 */) {
    // Local variables
    int i; // r28
    class Matrix tmp; // r1+0x20
    class tDrawable * obj; // r3
}

// Range: 0x8003BCCC -> 0x8003BE14
// this: r29
void DisplayList::Display() {
    // Local variables
    int i; // r30
    class tDrawable * obj; // r3
}

// Range: 0x8003BE14 -> 0x8003BE40
// this: r1+0x0
void DisplayList::Add(class DisplayListDrawable * object /* r1+0x4 */) {}

// Range: 0x8003BE40 -> 0x8003BE78
// this: r1+0x0
void DisplayList::Purge() {
    // Local variables
    int i; // r7
}

// Range: 0x8003BE78 -> 0x8003BED0
// this: r30
void DisplayList::SetSize(int size /* r31 */) {}

// Range: 0x8003BED0 -> 0x8003BF08
// this: r5
void DisplayList::Sort() {}

// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// Range: 0x8003BF08 -> 0x8003C170
int DisplayList::ZSortCompare(void * drawable1 /* r1+0x8 */, void * drawable2 /* r1+0xC */) {
    // Local variables
    class DisplayListDrawable * draw1; // r30
    class DisplayListDrawable * draw2; // r31
    float draw1Pos; // f31
    float draw2Pos; // f30
    const class Matrix * mat1; // r29
    const class Matrix * mat2; // r29
    struct tSphere sp1; // r1+0xD8
    class Matrix m1; // r1+0x98
    struct tSphere sp2; // r1+0x88
    class Matrix m2; // r1+0x48
}




