/*
    Compile unit: D:\Pure3d\development\p3d\effects\particletype.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800767D0 -> 0x80076A10
*/
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80133120
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B278
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8013312C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133138
// total size: 0x64
class tParticle {
    // Functions
    tParticle();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float life; // offset 0x4, size 0x4
    float lifeInit; // offset 0x8, size 0x4
    float weight; // offset 0xC, size 0x4
    float weightInit; // offset 0x10, size 0x4
    float size; // offset 0x14, size 0x4
    float sizeInit; // offset 0x18, size 0x4
    class Vector velocity; // offset 0x1C, size 0xC
    class Vector velocityInit; // offset 0x28, size 0xC
    class Vector acceleration; // offset 0x34, size 0xC
    class Vector position; // offset 0x40, size 0xC
    class Vector positionOld; // offset 0x4C, size 0xC
    class Vector rotation; // offset 0x58, size 0xC
};
// ERROR: Failed to emit tag 4CADEF (GlobalSubroutine)
// total size: 0x74
class tPointParticle : public tParticle {
    // Functions
    tPointParticle();

    // Members
public:
    struct pddiColour colour; // offset 0x64, size 0x4
    struct pddiColour colourInit; // offset 0x68, size 0x4
    int colourVar; // offset 0x6C, size 0x4
    float transparencyInit; // offset 0x70, size 0x4
};
// ERROR: Failed to emit tag 4CB14F (GlobalSubroutine)
// total size: 0x80
class tSpriteParticle : public tPointParticle {
    // Functions
    tSpriteParticle();

    // Members
public:
    int texFrame; // offset 0x74, size 0x4
    float spin; // offset 0x78, size 0x4
    float spinInit; // offset 0x7C, size 0x4
};
// ERROR: Failed to emit tag 4CB495 (GlobalSubroutine)



