/*
    Compile unit: D:\Pure3d\development\p3d\lightloader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80045420 -> 0x80045E2C
*/
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tNewLightLoader::__vtable; // size: 0x1C, address: 0x80101C84
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tNewLightLoader : public tSimpleChunkHandler {
    // Functions
    tNewLightLoader();
};
// ERROR: Failed to emit tag 24F21F (GlobalSubroutine)
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
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
// total size: 0x40
class tPointLight : public tLight {
    // Members
protected:
    class Vector position; // offset 0x20, size 0xC
    float a; // offset 0x2C, size 0x4
    float b; // offset 0x30, size 0x4
    float c; // offset 0x34, size 0x4
    float range; // offset 0x38, size 0x4
};
// total size: 0x30
class tDirectionalLight : public tLight {
    // Members
protected:
    class Vector direction; // offset 0x20, size 0xC
};
// total size: 0x58
class tSpotLight : public tLight {
    // Members
protected:
    class Vector direction; // offset 0x20, size 0xC
    class Vector position; // offset 0x2C, size 0xC
    float a; // offset 0x38, size 0x4
    float b; // offset 0x3C, size 0x4
    float c; // offset 0x40, size 0x4
    float range; // offset 0x44, size 0x4
    float phi; // offset 0x48, size 0x4
    float theta; // offset 0x4C, size 0x4
    float falloff; // offset 0x50, size 0x4
};
// Range: 0x80045480 -> 0x80045950
class tEntity * tNewLightLoader::LoadObject(class tChunkFile * f /* r25 */) {
    // Local variables
    char name[256]; // r1+0xE4
    unsigned long type; // r1+0x8
    struct pddiColour colour; // r1+0xDC
    float constant; // f25
    float linear; // f24
    float squared; // f23
    unsigned char enabled; // r27
    class tLight * light; // r26
    float theta; // f22
    float phi; // f21
    float range; // f20
    float falloff; // f19
    class tPointLight * pl; // r26
    class tDirectionalLight * dl; // r26
    class tSpotLight * sl; // r26
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
// total size: 0x1C
struct {} tLightLoader::__vtable; // size: 0x1C, address: 0x80101C34
// total size: 0x18
class tLightLoader : public tSimpleChunkHandler {
    // Functions
    tLightLoader();
};
// ERROR: Failed to emit tag 257100 (GlobalSubroutine)
// Range: 0x800459AC -> 0x80045C4C
class tEntity * tLightLoader::LoadObject(class tChunkFile * f /* r30 */) {
    // Local variables
    char name[256]; // r1+0x78
    float x; // f31
    float y; // f30
    float z; // f29
    struct pddiColour colour; // r1+0x6C
    float constant; // f28
    float linear; // f27
    float squared; // f26
    unsigned char enabled; // r30
    class tLight * light; // r3
    class tPointLight * pl; // r31
    class tDirectionalLight * dl; // r31
}

// total size: 0x1C
struct {} tLightGroupLoader::__vtable; // size: 0x1C, address: 0x80101BE4
// total size: 0x18
class tLightGroupLoader : public tSimpleChunkHandler {
    // Functions
    tLightGroupLoader();
};
// ERROR: Failed to emit tag 2576DE (GlobalSubroutine)
// total size: 0xC
struct {} tSafeEntityCaster<tLight>::__vtable; // size: 0xC, address: 0x80101B28
// total size: 0x0
class tView {};
// total size: 0x18
class tLightGroup : public tEntity {
    // Members
    int mNumLights; // offset 0x10, size 0x4
    class tLight * * mLights; // offset 0x14, size 0x4
};
// ERROR: Failed to emit tag 257C16 (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80137F58
static // total size: 0x8
struct {} tSafeEntityCaster<tLight>::__RTTI; // size: 0x8, address: 0x80137F60
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137F68
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137F78
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137F80
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80137F88
static // total size: 0x8
struct {} tLightGroupLoader::__RTTI; // size: 0x8, address: 0x80137F90
static // total size: 0x8
struct {} tLightLoader::__RTTI; // size: 0x8, address: 0x80137F98
static // total size: 0x8
struct {} tNewLightLoader::__RTTI; // size: 0x8, address: 0x80137FA0
static // total size: 0x8
struct {} tLight::__RTTI; // size: 0x8, address: 0x80137FB0
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



