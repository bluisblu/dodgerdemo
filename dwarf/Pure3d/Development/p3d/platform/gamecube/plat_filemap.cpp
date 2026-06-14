/*
    Compile unit: D:\Pure3d\development\p3d\platform\gamecube\plat_filemap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80037390 -> 0x800376DC
*/
// total size: 0x38
struct {} tGCFileMap::__vtable; // size: 0x38, address: 0x801004E0
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
// total size: 0x28
class tFileMem : public tFile {
    // Members
protected:
    unsigned char destroy; // offset 0x18, size 0x1
    unsigned char * memory; // offset 0x1C, size 0x4
    unsigned char * position; // offset 0x20, size 0x4
    unsigned int length; // offset 0x24, size 0x4
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0x6C
class tGCFileMap : public tFileMem {
    // Functions
    tGCFileMap(const char * filename);

    ~tGCFileMap();

    void Open(const char * filename);

    void Close();

    // Members
protected:
    struct DVDFileInfo mFile; // offset 0x28, size 0x3C
    char * mFilename; // offset 0x64, size 0x4
    unsigned char mOK; // offset 0x68, size 0x1
};
// Range: 0x80037390 -> 0x8003740C
// this: r1+0x8
tGCFileMap::tGCFileMap(const char * filename /* r30 */) {
    // References
    // -> struct [anonymous] tGCFileMap::__vtable;
}

// Range: 0x8003740C -> 0x80037478
// this: r30
tGCFileMap::~tGCFileMap() {
    // References
    // -> struct [anonymous] tGCFileMap::__vtable;
}

// Range: 0x80037478 -> 0x80037528
// this: r30
void tGCFileMap::Open(const char * filename /* r31 */) {
    // Local variables
    int aligned_len; // r31
}

// Range: 0x80037528 -> 0x80037590
// this: r31
void tGCFileMap::Close() {}

// Range: 0x80037590 -> 0x800376DC
unsigned char tGCFileMap::FilenameLenghtCheck(const char * fname /* r4 */) {
    // Local variables
    int len; // r6
    int extpos; // r7
    int fnamelen; // r5
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137B18
static // total size: 0x8
struct {} tFile::__RTTI; // size: 0x8, address: 0x80137B28
static // total size: 0x8
struct {} tFileMem::__RTTI; // size: 0x8, address: 0x80137B30
static // total size: 0x8
struct {} tGCFileMap::__RTTI; // size: 0x8, address: 0x80137B38



