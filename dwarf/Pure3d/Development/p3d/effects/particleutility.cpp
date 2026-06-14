/*
    Compile unit: D:\Pure3d\development\p3d\effects\particleutility.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80078B58 -> 0x80079060
*/
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
static class Vector DEFAULT_VELOCITY; // size: 0xC, address: 0x80133170
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
static struct pddiColour DEFAULT_COLOUR; // size: 0x4, address: 0x8013B288
static class Vector DEFAULT_POSITION; // size: 0xC, address: 0x8013317C
static class Vector DEFAULT_ROTATION; // size: 0xC, address: 0x80133188
static signed char init$179; // size: 0x1, address: 0x8013B28C
// total size: 0x8
class Randomizer {
    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
static class Randomizer randomGen$177; // size: 0x8, address: 0x8013B290
// Range: 0x80078B58 -> 0x80078BD0
float p3dRandomSampleFloat(float mean /* f30 */, float variance /* f31 */) {
    // References
    // -> static class Randomizer randomGen$177;
    // -> static signed char init$179;
}

static signed char init$184; // size: 0x1, address: 0x8013B298
static class Randomizer randomGen$182; // size: 0x8, address: 0x8013B29C
// Range: 0x80078BD0 -> 0x80078C5C
int p3dRandomSampleInt(int mean /* r30 */, int variance /* r31 */) {
    // Local variables
    unsigned int temp; // r1+0x8

    // References
    // -> static class Randomizer randomGen$182;
    // -> static signed char init$184;
}

// total size: 0x10
class tParticleFloatChannel {
    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// Range: 0x80078C5C -> 0x80078D98
void p3dCalcFloatLookUpTable(class tParticleFloatChannel * channel /* r28 */, float * lookUpTable /* r4 */, int lookUpSize /* r29 */, float numFrames /* r1+0x14 */, float defaultValue /* r1+0x18 */) {
    // Local variables
    float currentFrame; // f31
    float frameInc; // f30
    int i; // r30
    int i; // r5
}

// total size: 0xC
class tTimeIndex {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
};
// total size: 0x14
class tColourChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    int nKey; // offset 0x8, size 0x4
    class tTimeIndex * timeIndex; // offset 0xC, size 0x4
    struct pddiColour * key; // offset 0x10, size 0x4
};
// Range: 0x80078D98 -> 0x80078F0C
void p3dCalcColourLookUpTable(class tColourChannel * channel /* r28 */, struct pddiColour * lookUpTable /* r4 */, int lookUpSize /* r31 */, float numFrames /* r1+0x14 */, struct pddiColour & defaultColour /* r1+0x18 */) {
    // Local variables
    float frameInc; // f31
    float currentFrame; // f30
    int i; // r29
    struct pddiColour temp; // r1+0x24
    int i; // r5
}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// Range: 0x80078F0C -> 0x80079024
class Vector4 p3dCalcPlaneEqn(class Matrix & transform /* r28 */, class Vector & v1 /* r29 */, class Vector & v2 /* r30 */, class Vector & v3 /* r31 */) {
    // Local variables
    class Vector normal; // r1+0x30
}




