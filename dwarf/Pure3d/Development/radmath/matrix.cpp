/*
    Compile unit: D:\Pure3d\development\radmath\matrix.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AF7AC -> 0x800B07EC
*/
static float identity[16]; // size: 0x40, address: 0x80110460
// total size: 0x40
class Matrix {
    // Functions
    Matrix(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m2, float n, float o, float p);

    class Matrix & Identity();

    class Matrix & IdentityTranslation();

    class Matrix & IdentityProjection();

    class Matrix & FillRotateX(float angle);

    class Matrix & FillRotateY(float angle);

    class Matrix & FillRotateZ(float angle);

    class Matrix & FillRotation(const class Vector & vector, float theta);

    class Matrix & FillRotateXYZ(float anglex, float angley, float anglez);

    class Matrix & FillRotateYZX(float anglex, float angley, float anglez);

    class Matrix & FillTranslate(const class Vector & vector);

    class Matrix & FillScale(float xScale, float yScale, float zScale);

    class Matrix & FillHeading(const class Vector & heading, const class Vector & vup);

    class Matrix & Transpose();

    class Matrix & InvertOrtho();

    class Matrix & Invert();

    class Matrix & OrthoNormal();

    class Vector & Transform(const class Vector & src, class Vector * dest) const;

    class Vector & RotateVector(const class Vector & src, class Vector * dest) const;

    class Matrix & Mult(const class Matrix & a, const class Matrix & b);

    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800AF7AC -> 0x800AF818
// this: r3
Matrix::Matrix(float a /* r1+0xC */, float b /* r1+0x10 */, float c /* r1+0x14 */, float d /* r1+0x18 */, float e /* r1+0x1C */, float f /* r1+0x20 */, float g /* r1+0x24 */, float h /* r1+0x28 */, float i /* f12 */, float j /* f11 */, float k /* f10 */, float l /* f9 */, float m2 /* f3 */, float n /* f2 */, float o /* f1 */, float p /* r1+0x54 */) {}

// Range: 0x800AF818 -> 0x800AF8A4
// this: r3
class Matrix & Matrix::Identity() {
    // References
    // -> static float identity[16];
}

// Range: 0x800AF8A4 -> 0x800AF8B8
// this: r3
class Matrix & Matrix::IdentityTranslation() {}

// Range: 0x800AF8B8 -> 0x800AF8D4
// this: r3
class Matrix & Matrix::IdentityProjection() {}

// Range: 0x800AF8D4 -> 0x800AF954
// this: r31
class Matrix & Matrix::FillRotateX(float angle /* f30 */) {
    // Local variables
    float sinX; // r1+0x8
    float cosX; // r1+0x8
}

// Range: 0x800AF954 -> 0x800AF9D4
// this: r31
class Matrix & Matrix::FillRotateY(float angle /* f30 */) {
    // Local variables
    float sinY; // r1+0x8
    float cosY; // r1+0x8
}

// Range: 0x800AF9D4 -> 0x800AFA54
// this: r31
class Matrix & Matrix::FillRotateZ(float angle /* f30 */) {
    // Local variables
    float sinZ; // r1+0x8
    float cosZ; // r1+0x8
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
// Range: 0x800AFA54 -> 0x800AFB64
// this: r31
class Matrix & Matrix::FillRotation(const class Vector & vector /* r4 */, float theta /* f29 */) {
    // Local variables
    class Vector axis; // r1+0x18
    float sinHalfTheta; // r1+0x8
    float cosHalfTheta; // r1+0x8
    float halfTheta; // f30
    float xs; // f6
    float ys; // f3
    float zs; // f7
    float wx; // f4
    float wy; // f8
    float wz; // f9
    float xx; // f10
    float xy; // f11
    float xz; // f12
    float yy; // f13
    float yz; // f6
    float zz; // f30
    float qx; // f2
    float qy; // f29
    float qz; // f4
}

// Range: 0x800AFB64 -> 0x800AFC7C
// this: r31
class Matrix & Matrix::FillRotateXYZ(float anglex /* f28 */, float angley /* f29 */, float anglez /* f26 */) {
    // Local variables
    float sx; // r1+0x8
    float cx; // r1+0x8
    float sy; // r1+0x8
    float cy; // r1+0x8
    float sz; // r1+0x8
    float cz; // r1+0x8
    float sxsy; // f4
    float cxsy; // f7
}

// Range: 0x800AFC7C -> 0x800AFD8C
// this: r31
class Matrix & Matrix::FillRotateYZX(float anglex /* f28 */, float angley /* f30 */, float anglez /* f26 */) {
    // Local variables
    float cx; // r1+0x8
    float sx; // r1+0x8
    float cy; // r1+0x8
    float sy; // r1+0x8
    float cz; // r1+0x8
    float sz; // r1+0x8
    float cxcy; // f5
    float sxsy; // f6
    float sxcy; // f7
    float cxsy; // f8
}

// Range: 0x800AFD8C -> 0x800AFDA8
// this: r3
class Matrix & Matrix::FillTranslate(const class Vector & vector /* r1+0x4 */) {}

// Range: 0x800AFDA8 -> 0x800AFDD4
// this: r3
class Matrix & Matrix::FillScale(float xScale /* r1+0x4 */, float yScale /* r1+0x8 */, float zScale /* r1+0xC */) {}

// Range: 0x800AFDD4 -> 0x800AFE70
// this: r29
class Matrix & Matrix::FillHeading(const class Vector & heading /* r30 */, const class Vector & vup /* r31 */) {}

// Range: 0x800AFE70 -> 0x800AFED4
// this: r3
class Matrix & Matrix::Transpose() {
    // Local variables
    float t1; // f1
    float t2; // f2
    float t3; // f3
    float t4; // f4
    float t5; // f5
    float t6; // f6
}

// Range: 0x800AFED4 -> 0x800AFFB8
// this: r31
class Matrix & Matrix::InvertOrtho() {
    // Local variables
    float t0; // f31
    float t1; // f30
    float t2; // f29
}

// Range: 0x800AFFB8 -> 0x800B0350
// this: r31
class Matrix & Matrix::Invert() {
    // Local variables
    float det; // f28
    class Matrix tmp; // r1+0xC
    float inverseDet; // f12
}

// Range: 0x800B0350 -> 0x800B0430
// this: r30
class Matrix & Matrix::OrthoNormal() {
    // Local variables
    class Vector r1new; // r1+0x44
    class Vector r2new; // r1+0x38
    class Vector r3new; // r1+0x2C
    class Vector r2norm; // r1+0x20
}

// Range: 0x800B0430 -> 0x800B04E0
// this: r1+0x0
class Vector & Matrix::Transform(const class Vector & src /* r1+0x4 */, class Vector * dest /* r5 */) const {}

// Range: 0x800B04E0 -> 0x800B0578
// this: r1+0x0
class Vector & Matrix::RotateVector(const class Vector & src /* r1+0x4 */, class Vector * dest /* r5 */) const {}

// Range: 0x800B0578 -> 0x800B07EC
// this: r3
class Matrix & Matrix::Mult(const class Matrix & a /* r1+0x4 */, const class Matrix & b /* r1+0x8 */) {}




