/*
    Compile unit: D:\Pure3d\development\pddi\base\basemath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BD37C -> 0x800BD8BC
*/
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
// Range: 0x800BD37C -> 0x800BD6A0
void pddiMultMatrix(const class pddiMatrix * a /* r1+0x0 */, const class pddiMatrix * b /* r1+0x4 */, class pddiMatrix * r /* r1+0x8 */) {}

// Range: 0x800BD6A0 -> 0x800BD74C
void pddiTransform(const class pddiVector * v /* r1+0x0 */, const class pddiMatrix * m /* r1+0x4 */, class pddiVector * r /* r1+0x8 */) {}

// Range: 0x800BD74C -> 0x800BD7E0
void pddiTransformRot(const class pddiVector * v /* r1+0x0 */, const class pddiMatrix * m /* r1+0x4 */, class pddiVector * r /* r1+0x8 */) {}

// total size: 0x10
class pddiVector4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// Range: 0x800BD7E0 -> 0x800BD8BC
void pddiNormalize(class pddiVector * v /* r1+0x8 */) {
    // Local variables
    float ooMag; // f1
}




