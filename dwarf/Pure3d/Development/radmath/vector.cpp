/*
    Compile unit: D:\Pure3d\development\radmath\vector.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B1464 -> 0x800B17BC
*/
// total size: 0xC
class Vector {
    // Functions
    class Vector & CrossProduct(const class Vector & vect);

    class Vector & CrossProduct(const class Vector & vect1, const class Vector & vect2);

    class Vector & Normalize();

    class Vector & Normalize(const class Vector & vect);

    class Vector & Transform(const class Matrix & m);

    class Vector & Transform(const class Vector & v, const class Matrix & m);

    class Vector & Rotate(const class Matrix & m);

    class Vector & ConvertToEulerYZX(const class Matrix & matrix);

    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x800B1464 -> 0x800B14B0
// this: r3
class Vector & Vector::CrossProduct(const class Vector & vect /* r1+0x4 */) {
    // Local variables
    float tmpy; // f3
    float tmpz; // r1+0x0
}

// Range: 0x800B14B0 -> 0x800B1514
// this: r3
class Vector & Vector::CrossProduct(const class Vector & vect1 /* r1+0x4 */, const class Vector & vect2 /* r1+0x8 */) {}

// Range: 0x800B1514 -> 0x800B1590
// this: r31
class Vector & Vector::Normalize() {
    // Local variables
    float mag; // f1
}

// Range: 0x800B1590 -> 0x800B1618
// this: r30
class Vector & Vector::Normalize(const class Vector & vect /* r31 */) {
    // Local variables
    float mag; // f1
}

// Range: 0x800B1618 -> 0x800B166C
// this: r31
class Vector & Vector::Transform(const class Matrix & m /* r4 */) {
    // Local variables
    class Vector tmp; // r1+0x10
}

// Range: 0x800B166C -> 0x800B16A4
// this: r31
class Vector & Vector::Transform(const class Vector & v /* r4 */, const class Matrix & m /* r5 */) {}

// Range: 0x800B16A4 -> 0x800B16F8
// this: r31
class Vector & Vector::Rotate(const class Matrix & m /* r4 */) {
    // Local variables
    class Vector tmp; // r1+0x10
}

// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800B16F8 -> 0x800B17BC
// this: r30
class Vector & Vector::ConvertToEulerYZX(const class Matrix & matrix /* r31 */) {}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};



