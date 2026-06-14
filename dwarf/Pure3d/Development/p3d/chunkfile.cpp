/*
    Compile unit: D:\Pure3d\development\p3d\chunkfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003A0F4 -> 0x8003A5DC
*/
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
    // Functions
    tChunkFile(class tFile * file);

    ~tChunkFile();

    unsigned char ChunksRemaining();

    unsigned int BeginChunk();

    void EndChunk();

    unsigned int GetCurrentID();

    class tFile * BeginInset();

    void BeginPeek();

    void EndPeek();

    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// Range: 0x8003A0F4 -> 0x8003A240
// this: r31
tChunkFile::tChunkFile(class tFile * file /* r30 */) {
    // Local variables
    unsigned short dummy; // r1+0x28
    unsigned int endian; // r1+0x24
}

// Range: 0x8003A240 -> 0x8003A2A4
// this: r30
tChunkFile::~tChunkFile() {}

// Range: 0x8003A2A4 -> 0x8003A320
// this: r3
unsigned char tChunkFile::ChunksRemaining() {
    // Local variables
    struct Chunk * chunk; // r30
}

// Range: 0x8003A320 -> 0x8003A4D8
// this: r31
unsigned int tChunkFile::BeginChunk() {
    // Local variables
    unsigned int start; // r30
}

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
// Range: 0x8003A4D8 -> 0x8003A538
// this: r31
void tChunkFile::EndChunk() {
    // Local variables
    unsigned int start; // r1+0x8
    unsigned int chLength; // r4
}

// Range: 0x8003A538 -> 0x8003A548
// this: r3
unsigned int tChunkFile::GetCurrentID() {}

// Range: 0x8003A548 -> 0x8003A550
// this: r3
class tFile * tChunkFile::BeginInset() {}

// Range: 0x8003A550 -> 0x8003A554
void tChunkFile::EndInset() {}

// Range: 0x8003A554 -> 0x8003A594
// this: r31
void tChunkFile::BeginPeek() {}

// Range: 0x8003A594 -> 0x8003A5DC
// this: r31
void tChunkFile::EndPeek() {}




