/*
    Compile unit: D:\Pure3d\development\radmath\quaternion.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B07EC -> 0x800B0F8C
*/
// total size: 0x10
class Quaternion {
    // Functions
    class Quaternion & Identity();

    class Quaternion & Mult(const class Quaternion & q);

    class Quaternion & Normalize();

    class Quaternion & BuildFromAngleYZX(float ax, float ay, float az);

    class Matrix & ConvertToMatrix(class Matrix * m) const;

    class Quaternion & BuildFromMatrix(class Matrix & m);

    class Quaternion & MakeClosest(const class Quaternion & q);

    class Quaternion & Slerp(const class Quaternion & q1, const class Quaternion & q2, float t);

    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// Range: 0x800B07EC -> 0x800B0808
// this: r3
class Quaternion & Quaternion::Identity() {}

// Range: 0x800B0808 -> 0x800B08C4
// this: r3
class Quaternion & Quaternion::Mult(const class Quaternion & q /* r1+0xC */) {}

// Range: 0x800B08C4 -> 0x800B0958
// this: r31
class Quaternion & Quaternion::Normalize() {}

// Range: 0x800B0958 -> 0x800B0A68
// this: r31
class Quaternion & Quaternion::BuildFromAngleYZX(float ax /* r1+0xC */, float ay /* f29 */, float az /* f26 */) {
    // Local variables
    float cx; // r1+0x8
    float sx; // r1+0x8
    float cy; // r1+0x8
    float sy; // r1+0x8
    float cz; // r1+0x8
    float sz; // r1+0x8
    float cycz; // r1+0x8
    float sysz; // f4
    float sycz; // f6
    float cysz; // f7
}

// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
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
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800B0A68 -> 0x800B0B18
// this: r1+0x8
class Matrix & Quaternion::ConvertToMatrix(class Matrix * m /* r4 */) const {
    // Local variables
    float xs; // f7
    float ys; // f8
    float zs; // f2
    float wx; // f6
    float wy; // f9
    float wz; // f10
    float xx; // f11
    float xy; // f12
    float xz; // f13
    float yy; // f31
    float yz; // f5
    float zz; // f3
}

// Range: 0x800B0B18 -> 0x800B0D58
// this: r31
class Quaternion & Quaternion::BuildFromMatrix(class Matrix & m /* r1+0xC */) {
    // Local variables
    float X; // f1
    float Y; // f7
    float Z; // r1+0x8
    float T; // f2
    float value4x; // f31
    float value4y; // f30
    float value4z; // f29
    float value4w; // f28
    float value4Inverse; // f3
}

// Range: 0x800B0D58 -> 0x800B0E14
// this: r3
class Quaternion & Quaternion::MakeClosest(const class Quaternion & q /* r1+0x4 */) {}

// Range: 0x800B0E14 -> 0x800B0F8C
// this: r29
class Quaternion & Quaternion::Slerp(const class Quaternion & q1 /* r30 */, const class Quaternion & q2 /* r31 */, float t /* f29 */) {
    // Local variables
    float scale_qS; // f31
    float scale_qE; // f30
    float cos_omega; // f1
    float omega; // f28
    float one_over_sin_omega; // f27
}




