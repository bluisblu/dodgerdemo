/*
    Compile unit: D:\Pure3d\development\p3d\gameattr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003ED1C -> 0x8003F6E8
*/
// total size: 0xC
struct {} tGameAttr::__vtable; // size: 0xC, address: 0x80100F70
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
class tGameAttr : public tEntity {
    // Functions
    ~tGameAttr();

    // Members
public:
    class BaseMap * IntParams; // offset 0x10, size 0x4
    class BaseMap * FloatParams; // offset 0x14, size 0x4
    class BaseMap * ColourParams; // offset 0x18, size 0x4
    class BaseMap * VectorParams; // offset 0x1C, size 0x4
    class BaseMap * MatrixParams; // offset 0x20, size 0x4
protected:
    int version; // offset 0x24, size 0x4
    int numParams; // offset 0x28, size 0x4
};
// Range: 0x8003ED1C -> 0x8003EDF8
// this: r30
tGameAttr::~tGameAttr() {
    // References
    // -> struct [anonymous] tGameAttr::__vtable;
}

// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tGameAttrLoader::__vtable; // size: 0x1C, address: 0x80100F20
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tGameAttrLoader : public tSimpleChunkHandler {
    // Functions
    tGameAttrLoader();
};
// ERROR: Failed to emit tag 2006C8 (GlobalSubroutine)
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
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// Range: 0x8003EE58 -> 0x8003F5C8
class tEntity * tGameAttrLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[128]; // r1+0x174
    char paramName[128]; // r1+0xF4
    class tGameAttr * GameAttr; // r31
    char * param; // r21
    char * param; // r20
    char * param; // r16
    char * param; // r1+0x1F4
    class pddiVector v; // r1+0xD4
    char * param; // r19
    class pddiMatrix m; // r1+0x94

    // References
    // -> struct [anonymous] tGameAttr::__vtable;
}

// total size: 0x8
class BaseMap {
    // Functions
    ~BaseMap();

    void SetName(char * name);

    void SetParam(void * param, int size);

    // Members
public:
    void * ParamVal; // offset 0x0, size 0x4
    char * ParamName; // offset 0x4, size 0x4
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
// Range: 0x8003F5C8 -> 0x8003F634
// this: r30
BaseMap::~BaseMap() {}

// Range: 0x8003F634 -> 0x8003F68C
// this: r30
void BaseMap::SetName(char * name /* r31 */) {}

// Range: 0x8003F68C -> 0x8003F6E8
// this: r29
void BaseMap::SetParam(void * param /* r30 */, int size /* r31 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137D50
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137D60
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137D68
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137D70
static // total size: 0x8
struct {} tGameAttrLoader::__RTTI; // size: 0x8, address: 0x80137D78
static // total size: 0x8
struct {} tGameAttr::__RTTI; // size: 0x8, address: 0x80137D80



