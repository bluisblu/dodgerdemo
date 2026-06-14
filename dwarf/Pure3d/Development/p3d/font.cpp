/*
    Compile unit: D:\Pure3d\development\p3d\font.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003D9DC -> 0x8003DCCC
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
// total size: 0x0
class tShader {};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tFont : public tEntity {
    // Functions
    void DisplayTextCentred(char * text, int formatting);

    void DisplayTextCentred(unsigned short * text, int formatting);
};
// Range: 0x8003D9DC -> 0x8003DA3C
// this: r30
void tFont::DisplayTextCentred(char * text /* r4 */, int formatting /* r31 */) {
    // Local variables
    unsigned short str[512]; // r1+0x14
}

// Range: 0x8003DA3C -> 0x8003DC68
// this: r30
void tFont::DisplayTextCentred(unsigned short * text /* r31 */, int formatting /* r29 */) {
    // Local variables
    float lineHeight; // r1+0x8
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137D08
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137D18
static // total size: 0x8
struct {} tFont::__RTTI; // size: 0x8, address: 0x80137D20
// total size: 0x54
struct {} tFont::__vtable; // size: 0x54, address: 0x80100D2C



