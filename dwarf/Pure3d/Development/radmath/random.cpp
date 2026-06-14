/*
    Compile unit: D:\Pure3d\development\radmath\random.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B0F8C -> 0x800B1180
*/
// total size: 0x8
class Randomizer {
    // Functions
    Randomizer(unsigned int seed);

    ~Randomizer();

    void Seed(unsigned int seed);

    void Seed(unsigned int seed1, unsigned int seed2);

    unsigned int IntRanged(unsigned int range);

    float Float();

    float FloatSigned();

    // Members
    unsigned int upperBits; // offset 0x0, size 0x4
    unsigned int lowerBits; // offset 0x4, size 0x4
};
// Range: 0x800B0F8C -> 0x800B0FBC
// this: r31
Randomizer::Randomizer(unsigned int seed /* r4 */) {}

// Range: 0x800B0FBC -> 0x800B0FFC
// this: r31
Randomizer::~Randomizer() {}

// Range: 0x800B0FFC -> 0x800B1020
// this: r1+0x0
void Randomizer::Seed(unsigned int seed /* r4 */) {}

// Range: 0x800B1020 -> 0x800B104C
// this: r1+0x0
void Randomizer::Seed(unsigned int seed1 /* r4 */, unsigned int seed2 /* r5 */) {}

// Range: 0x800B104C -> 0x800B1098
// this: r3
unsigned int Randomizer::IntRanged(unsigned int range /* r31 */) {}

// Range: 0x800B1098 -> 0x800B1100
// this: r1+0x8
float Randomizer::Float() {
    // Local variables
    float result; // r1+0xC
}

// Range: 0x800B1100 -> 0x800B1180
// this: r1+0x8
float Randomizer::FloatSigned() {
    // Local variables
    float result; // r1+0x10
}




