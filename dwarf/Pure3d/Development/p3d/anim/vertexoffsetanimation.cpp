/*
    Compile unit: D:\Pure3d\development\p3d\anim\vertexoffsetanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A360 -> 0x8006A644
*/
// total size: 0xC
struct {} tVertexOffsetAnimation::__vtable; // size: 0xC, address: 0x8010736C
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
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
struct tVertexOffset {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    class Vector offset; // offset 0x4, size 0xC
};
// total size: 0x28
class tVertexOffsetAnimation : public tAnimation {
    // Functions
    ~tVertexOffsetAnimation();

    // Members
protected:
    unsigned int nVertices; // offset 0x20, size 0x4
    struct tVertexOffset * vertices; // offset 0x24, size 0x4
};
// ERROR: Failed to emit tag 426604 (GlobalSubroutine)
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tVertexOffsetAnimationLoader::__vtable; // size: 0x1C, address: 0x801072E8
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tVertexOffsetAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tVertexOffsetAnimationLoader();
};
// ERROR: Failed to emit tag 426F71 (GlobalSubroutine)
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
// ERROR: Failed to emit tag 428516 (GlobalSubroutine)
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
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138D50
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138D60
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138D68
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138D70
static // total size: 0x8
struct {} tVertexOffsetAnimationLoader::__RTTI; // size: 0x8, address: 0x80138D78
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138D80
static // total size: 0x8
struct {} tVertexOffsetAnimation::__RTTI; // size: 0x8, address: 0x80138D88



