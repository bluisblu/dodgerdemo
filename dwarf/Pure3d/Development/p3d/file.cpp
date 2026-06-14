/*
    Compile unit: D:\Pure3d\development\p3d\file.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003D1C0 -> 0x8003D99C
*/
// total size: 0x38
struct {} tFile::__vtable; // size: 0x38, address: 0x80100CC4
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x18
class tFile : public tRefCounted {
    // Functions
    ~tFile();

    void SetFilename(const char * n);

    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
// Range: 0x8003D1C0 -> 0x8003D22C
// this: r30
tFile::~tFile() {
    // References
    // -> struct [anonymous] tFile::__vtable;
}

// Range: 0x8003D22C -> 0x8003D344
// this: r31
void tFile::SetFilename(const char * n /* r30 */) {
    // Local variables
    int i; // r3
}

// total size: 0x38
struct {} tFileMem::__vtable; // size: 0x38, address: 0x80100C8C
// total size: 0x28
class tFileMem : public tFile {
    // Functions
    tFileMem();

    ~tFileMem();

    unsigned char GetData(void * buf, unsigned int count, enum DataType type);

    unsigned char PeekData(void * buf, unsigned int count, enum DataType type);

    unsigned char EndOfFile();

    unsigned int GetSize();

    void SetPosition(int offset);

    void Advance(unsigned int offset);

    unsigned int GetPosition();

    unsigned char GetByte();

    unsigned short GetWord();

    unsigned int GetDWord();

    unsigned long long GetQWord();

    // Members
protected:
    unsigned char destroy; // offset 0x18, size 0x1
    unsigned char * memory; // offset 0x1C, size 0x4
    unsigned char * position; // offset 0x20, size 0x4
    unsigned int length; // offset 0x24, size 0x4
};
// Range: 0x8003D344 -> 0x8003D3B0
// this: r31
tFileMem::tFileMem() {
    // References
    // -> struct [anonymous] tFileMem::__vtable;
    // -> struct [anonymous] tFile::__vtable;
}

// Range: 0x8003D3B0 -> 0x8003D444
// this: r30
tFileMem::~tFileMem() {
    // References
    // -> struct [anonymous] tFile::__vtable;
    // -> struct [anonymous] tFileMem::__vtable;
}

enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// Range: 0x8003D444 -> 0x8003D638
// this: r31
unsigned char tFileMem::GetData(void * buf /* r3 */, unsigned int count /* r1+0x10 */, enum DataType type /* r1+0x14 */) {
    // Local variables
    char * out; // r3
    unsigned int i; // r12
}

// Range: 0x8003D638 -> 0x8003D818
// this: r3
unsigned char tFileMem::PeekData(void * buf /* r8 */, unsigned int count /* r5 */, enum DataType type /* r1+0x14 */) {
    // Local variables
    char * out; // r10
    char * in; // r11
    unsigned int i; // r12
}

// Range: 0x8003D818 -> 0x8003D838
// this: r1+0x0
unsigned char tFileMem::EndOfFile() {}

// Range: 0x8003D838 -> 0x8003D840
// this: r3
unsigned int tFileMem::GetSize() {}

// Range: 0x8003D840 -> 0x8003D850
// this: r1+0x0
void tFileMem::SetPosition(int offset /* r1+0x4 */) {}

// Range: 0x8003D850 -> 0x8003D860
// this: r1+0x0
void tFileMem::Advance(unsigned int offset /* r1+0x4 */) {}

// Range: 0x8003D860 -> 0x8003D870
// this: r1+0x0
unsigned int tFileMem::GetPosition() {}

// Range: 0x8003D870 -> 0x8003D884
// this: r1+0x0
unsigned char tFileMem::GetByte() {}

// Range: 0x8003D884 -> 0x8003D8C8
// this: r1+0x8
unsigned short tFileMem::GetWord() {
    // Local variables
    signed short tmp; // r1+0x1C
}

// Range: 0x8003D8C8 -> 0x8003D91C
// this: r1+0x8
unsigned int tFileMem::GetDWord() {
    // Local variables
    int tmp; // r1+0x1C
}

// Range: 0x8003D91C -> 0x8003D99C
// this: r1+0x8
unsigned long long tFileMem::GetQWord() {
    // Local variables
    unsigned long long tmp; // r1+0x20
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137CE0
static // total size: 0x8
struct {} tFile::__RTTI; // size: 0x8, address: 0x80137CF0
static // total size: 0x8
struct {} tFileMem::__RTTI; // size: 0x8, address: 0x80137CF8



