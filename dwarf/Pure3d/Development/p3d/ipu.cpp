/*
    Compile unit: D:\Pure3d\development\p3d\ipu.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044D28 -> 0x800450C4
*/
// total size: 0x10
struct IpuHeader {
    // Members
    int m_Crap1; // offset 0x0, size 0x4
    int m_Crap2; // offset 0x4, size 0x4
    signed short m_Width; // offset 0x8, size 0x2
    signed short m_Height; // offset 0xA, size 0x2
    int m_NumFrames; // offset 0xC, size 0x4
};
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
// Range: 0x80044D28 -> 0x80044EC8
unsigned char LoadIpuFile(class tFile * inputFile /* r26 */, class Builder * builder /* r27 */, int expectedSize /* r28 */) {
    // Local variables
    unsigned int originalPosition; // r29
    unsigned int totalFileSize; // r1+0x8
    unsigned int currentPosition; // r1+0x8
    unsigned int dataSize; // r29
    char * data; // r30
}

enum pddiTextureType {
    PDDI_TEXTYPE_RGB = 0,
    PDDI_TEXTYPE_PALETTIZED = 1,
    PDDI_TEXTYPE_LUMINANCE = 2,
    PDDI_TEXTYPE_BUMPMAP = 3,
    PDDI_TEXTYPE_DXT1 = 4,
    PDDI_TEXTYPE_DXT2 = 5,
    PDDI_TEXTYPE_DXT3 = 6,
    PDDI_TEXTYPE_DXT4 = 7,
    PDDI_TEXTYPE_DXT5 = 8,
    PDDI_TEXTYPE_IPU = 9,
    PDDI_TEXTYPE_Z = 10,
    PDDI_TEXTURE_LINEAR = 11,
    PDDI_TEXTYPE_RENDERTARGET = 12,
    PDDI_TEXTYPE_PS2_4BIT = 13,
    PDDI_TEXTYPE_PS2_8BIT = 14,
    PDDI_TEXTYPE_PS2_16BIT = 15,
    PDDI_TEXTYPE_PS2_32BIT = 16,
};
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x3C
struct {} tIPUHandler::__vtable; // size: 0x3C, address: 0x80101A24
// total size: 0x18
class tIPUHandler : public tImageHandler {
    // Functions
    tIPUHandler();

    void CreateImage(class tFile * file, class Builder * builder);
};
// Range: 0x80044EC8 -> 0x80044F04
// this: r31
tIPUHandler::tIPUHandler() {
    // References
    // -> struct [anonymous] tIPUHandler::__vtable;
}

// Range: 0x80044F04 -> 0x80044F0C
unsigned char tIPUHandler::CanLoad() {}

// Range: 0x80044F0C -> 0x80044F88
unsigned char tIPUHandler::CheckHeader(class tFile * file /* r4 */) {
    // Local variables
    char threeChars[3]; // r1+0x10
}

// Range: 0x80044F88 -> 0x80045038
// this: r3
void tIPUHandler::CreateImage(class tFile * file /* r29 */, class Builder * builder /* r30 */) {
    // Local variables
    int size; // r31
}

// Range: 0x80045038 -> 0x80045040
unsigned char tIPUHandler::SaveImage() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137F00
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80137F08
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x80137F10
static // total size: 0x8
struct {} tIPUHandler::__RTTI; // size: 0x8, address: 0x80137F18
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
};
// total size: 0x0
struct pddiLockInfo {};
// total size: 0x30
class tImage : public tEntity {
    // Members
protected:
    unsigned char permanent; // offset 0x10, size 0x1
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
    unsigned int key; // offset 0x20, size 0x4
    int alphaDepth; // offset 0x24, size 0x4
    unsigned char * image; // offset 0x28, size 0x4
    unsigned char hasAlpha; // offset 0x2C, size 0x1
    unsigned char keyEnabled; // offset 0x2D, size 0x1
};
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x0
class tEntityStore {};
// total size: 0x8
class tFileHandler : public tRefCounted {};



