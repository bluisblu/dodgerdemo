/*
    Compile unit: D:\Pure3d\development\p3d\locator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80047C28 -> 0x80047E28
*/
// total size: 0xC
struct {} tLocator::__vtable; // size: 0xC, address: 0x80101FC8
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
// total size: 0x20
class tLocator : public tEntity {
    // Functions
    ~tLocator();

    // Members
protected:
    class pddiVector position; // offset 0x10, size 0xC
    unsigned long version; // offset 0x1C, size 0x4
};
// Range: 0x80047C28 -> 0x80047C8C
// this: r30
tLocator::~tLocator() {
    // References
    // -> struct [anonymous] tLocator::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tLocatorLoader::__vtable; // size: 0x1C, address: 0x80101F78
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tLocatorLoader : public tSimpleChunkHandler {
    // Functions
    tLocatorLoader();
};
// ERROR: Failed to emit tag 2715B0 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
struct Chunk {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int dataLength; // offset 0x4, size 0x4
    unsigned int chunkLength; // offset 0x8, size 0x4
    unsigned int startPosition; // offset 0xC, size 0x4
};
// total size: 0x210
class tChunkFile {
    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// total size: 0x0
class tEntityStore {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x80047CEC -> 0x80047E28
class tEntity * tLocatorLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[256]; // r1+0x50
    unsigned long version; // r1+0x8
    class pddiVector pos; // r1+0x44
    class tLocator * locator; // r3

    // References
    // -> struct [anonymous] tLocator::__vtable;
}

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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138030
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138040
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138048
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138050
static // total size: 0x8
struct {} tLocatorLoader::__RTTI; // size: 0x8, address: 0x80138058
static // total size: 0x8
struct {} tLocator::__RTTI; // size: 0x8, address: 0x80138060



