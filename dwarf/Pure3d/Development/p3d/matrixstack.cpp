/*
    Compile unit: D:\Pure3d\development\p3d\matrixstack.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80047EAC -> 0x80048C74
*/
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
class Matrix tmp; // size: 0x40, address: 0x80132FA0
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
class Vector tmpv; // size: 0xC, address: 0x80132FE0
// total size: 0x50
struct {} tBasicMatrixStack::__vtable; // size: 0x50, address: 0x80102078
// total size: 0x10
class tBasicMatrixStack : public tMatrixStack {
    // Functions
    ~tBasicMatrixStack();

    void Load(const class Matrix & m);

    void LoadIdentity();

    void Push();

    void Pop();

    void Multiply(const class Matrix & matrix);

    void RotateX(float x);

    void RotateY(float y);

    void RotateZ(float z);

    void RotateXYZ(float x, float y, float z);

    void RotateYZX(float x, float y, float z);

    void Translate(const class Vector & trans);

    void Translate(float x, float y, float z);

    void Scale(float x, float y, float z);

    void Scale(const class Vector & scale);

    void Scale(float scale);

    class Matrix * GetMatrix();

    void TransformVector(class Vector & v, class Vector * r);

    // Static members
    static class Vector tmpv; // size: 0xC
    static class Matrix tmp; // size: 0x40

    // Members
protected:
    int size; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class Matrix * stack; // offset 0xC, size 0x4
};
// total size: 0x4
class tMatrixStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// ERROR: Failed to emit tag 278650 (GlobalSubroutine)
// Range: 0x80047F24 -> 0x80047FB8
// this: r1+0x0
void tBasicMatrixStack::Load(const class Matrix & m /* r1+0x4 */) {}

// Range: 0x80047FB8 -> 0x80047FE8
// this: r1+0x8
void tBasicMatrixStack::LoadIdentity() {}

// Range: 0x80047FE8 -> 0x80048088
// this: r1+0x0
void tBasicMatrixStack::Push() {}

// Range: 0x80048088 -> 0x80048098
// this: r1+0x0
void tBasicMatrixStack::Pop() {}

// Range: 0x80048098 -> 0x80048178
// this: r30
void tBasicMatrixStack::Multiply(const class Matrix & matrix /* r4 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048178 -> 0x800481E8
// this: r30
void tBasicMatrixStack::RotateX(float x /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x800481E8 -> 0x80048258
// this: r30
void tBasicMatrixStack::RotateY(float y /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048258 -> 0x800482C8
// this: r30
void tBasicMatrixStack::RotateZ(float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x800482C8 -> 0x80048358
// this: r30
void tBasicMatrixStack::RotateXYZ(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048358 -> 0x800483E8
// this: r30
void tBasicMatrixStack::RotateYZX(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x800483E8 -> 0x80048464
// this: r30
void tBasicMatrixStack::Translate(const class Vector & trans /* r4 */) {
    // References
    // -> class Vector tmpv;
}

// Range: 0x80048464 -> 0x800484A8
// this: r3
void tBasicMatrixStack::Translate(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {
    // References
    // -> class Vector tmpv;
}

// Range: 0x800484A8 -> 0x80048538
// this: r30
void tBasicMatrixStack::Scale(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048538 -> 0x80048570
// this: r3
void tBasicMatrixStack::Scale(const class Vector & scale /* r1+0xC */) {}

// Range: 0x80048570 -> 0x800485A4
// this: r3
void tBasicMatrixStack::Scale(float scale /* f1 */) {}

// Range: 0x800485A4 -> 0x800485B8
// this: r1+0x0
class Matrix * tBasicMatrixStack::GetMatrix() {}

// Range: 0x800485B8 -> 0x800485E8
// this: r1+0x8
void tBasicMatrixStack::TransformVector(class Vector & v /* r4 */, class Vector * r /* r5 */) {}

class Matrix tmp; // size: 0x40, address: 0x80132FEC
class Vector tmpv; // size: 0xC, address: 0x8013302C
// total size: 0x50
struct {} tPddiMatrixStack::__vtable; // size: 0x50, address: 0x80102008
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
enum pddiPixelFormat {
    PDDI_PIXEL_UNKNOWN = 0,
    PDDI_PIXEL_RGB565 = 1,
    PDDI_PIXEL_ARGB1555 = 2,
    PDDI_PIXEL_RGB555 = 3,
    PDDI_PIXEL_ARGB4444 = 4,
    PDDI_PIXEL_RGB888 = 5,
    PDDI_PIXEL_ARGB8888 = 6,
    PDDI_PIXEL_PAL8 = 7,
    PDDI_PIXEL_PAL4 = 8,
    PDDI_PIXEL_LUM8 = 9,
    PDDI_PIXEL_DUDV88 = 10,
    PDDI_PIXEL_DXT1 = 11,
    PDDI_PIXEL_DXT2 = 12,
    PDDI_PIXEL_DXT3 = 13,
    PDDI_PIXEL_DXT4 = 14,
    PDDI_PIXEL_DXT5 = 15,
    PDDI_PIXEL_Z32 = 16,
    PDDI_PIXEL_Z24 = 17,
    PDDI_PIXEL_Z16 = 18,
    PDDI_PIXEL_Z8 = 19,
    PDDI_PIXEL_PS2_4BIT = 20,
    PDDI_PIXEL_PS2_8BIT = 21,
    PDDI_PIXEL_PS2_16BIT = 22,
    PDDI_PIXEL_PS2_32BIT = 23,
};
// total size: 0x50
struct pddiLockInfo {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum pddiPixelFormat format; // offset 0xC, size 0x4
    unsigned char native; // offset 0x10, size 0x1
    int rgbaLShift[4]; // offset 0x14, size 0x10
    int rgbaRShift[4]; // offset 0x24, size 0x10
    unsigned int rgbaMask[4]; // offset 0x34, size 0x10
    int pitch; // offset 0x44, size 0x4
    void * bits; // offset 0x48, size 0x4
    void * palette; // offset 0x4C, size 0x4
};
// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
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
enum pddiTextureUsageHint {
    PDDI_USAGE_STATIC = 0,
    PDDI_USAGE_DYNAMIC = 1,
    PDDI_USAGE_NOCACHE = 2,
};
// total size: 0xC
class pddiTexture : public pddiObject {};
enum pddiStateMask {
    PDDI_STATE_RENDER = 1,
    PDDI_STATE_VIEW = 2,
    PDDI_STATE_LIGHTING = 4,
    PDDI_STATE_FOG = 8,
    PDDI_STATE_STENCIL = 16,
    PDDI_STATE_ALL = -1,
};
enum pddiStatType {
    PDDI_STAT_CURRENT_FRAME = 0,
    PDDI_STAT_FRAME_TIME = 1,
    PDDI_STAT_BUFFERED_PRIM = 2,
    PDDI_STAT_BUFFERED_PRIM_VERT = 3,
    PDDI_STAT_BUFFERED_INDEXED_PRIM = 4,
    PDDI_STAT_BUFFERED_INDEXED_PRIM_VERT = 5,
    PDDI_STAT_BUFFERED_PRIM_CALLS = 6,
    PDDI_STAT_BUFFERED_PRIM_AVG = 7,
    PDDI_STAT_BUFFERED_COUNT = 8,
    PDDI_STAT_BUFFERED_ALLOC = 9,
    PDDI_STAT_STREAMED_PRIM = 10,
    PDDI_STAT_STREAMED_PRIM_VERT = 11,
    PDDI_STAT_STREAMED_PRIM_CALLS = 12,
    PDDI_STAT_STREAMED_PRIM_AVG = 13,
    PDDI_STAT_SKINNED_BONES = 14,
    PDDI_STAT_SKINNED_XFORM_VERT = 15,
    PDDI_STAT_SKINNED_XFORM_MS = 16,
    PDDI_STAT_SKINNED_WAIT_MS = 17,
    PDDI_STAT_MATRIX_OPS = 18,
    PDDI_STAT_LIGHT_OPS = 19,
    PDDI_STAT_MATERIAL_OPS = 20,
    PDDI_STAT_TEXTURE_HITS = 21,
    PDDI_STAT_TEXTURE_MISSES = 22,
    PDDI_STAT_TEXTURE_UPLOADED = 23,
    PDDI_STAT_TEXTURE_ALLOCATED = 24,
    PDDI_STAT_TEXTURE_SLOP = 25,
    PDDI_STAT_TEXTURE_COUNT_4BIT = 26,
    PDDI_STAT_TEXTURE_ALLOC_4BIT = 27,
    PDDI_STAT_TEXTURE_COUNT_8BIT = 28,
    PDDI_STAT_TEXTURE_ALLOC_8BIT = 29,
    PDDI_STAT_TEXTURE_COUNT_16BIT = 30,
    PDDI_STAT_TEXTURE_ALLOC_16BIT = 31,
    PDDI_STAT_TEXTURE_COUNT_32BIT = 32,
    PDDI_STAT_TEXTURE_ALLOC_32BIT = 33,
    PDDI_STAT_TEXTURE_COUNT_DXTN = 34,
    PDDI_STAT_TEXTURE_ALLOC_DXTN = 35,
};
enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
enum pddiCompareMode {
    PDDI_COMPARE_NONE = 0,
    PDDI_COMPARE_ALWAYS = 1,
    PDDI_COMPARE_LESS = 2,
    PDDI_COMPARE_LESSEQUAL = 3,
    PDDI_COMPARE_GREATER = 4,
    PDDI_COMPARE_GREATEREQUAL = 5,
    PDDI_COMPARE_EQUAL = 6,
    PDDI_COMPARE_NOTEQUAL = 7,
};
enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0xC
class pddiShader : public pddiObject {};
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
class pddiPrimBufferStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum pddiPrimType {
    PDDI_PRIM_TRIANGLES = 0,
    PDDI_PRIM_TRISTRIP = 1,
    PDDI_PRIM_LINES = 2,
    PDDI_PRIM_LINESTRIP = 3,
    PDDI_PRIM_POINTS = 4,
    PDDI_PRIM_BSPLINE = 5,
};
enum pddiHint {
    PDDI_HINT_DEFAULT = 0,
    PDDI_HINT_MEMORY_IMAGE = 1,
};
// total size: 0xC
class pddiPrimBuffer : public pddiObject {};
// total size: 0x0
class gcContext {};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
// total size: 0x3C
struct gcStreamVertex {
    // Members
    class pddiVector pos; // offset 0x0, size 0xC
    class pddiVector norm; // offset 0xC, size 0xC
    class pddiVector2 uv[4]; // offset 0x18, size 0x20
    struct pddiColour col; // offset 0x38, size 0x4
};
// total size: 0x90
class gcPrimStream {
    // Members
    class gcContext * mContext; // offset 0x0, size 0x4
    enum _GXPrimitive mPrimType; // offset 0x4, size 0x4
    unsigned int mVertexType; // offset 0x8, size 0x4
    int mVertexCount; // offset 0xC, size 0x4
    int mTotalVertsSubmitted; // offset 0x10, size 0x4
    int mCurrentVertex; // offset 0x14, size 0x4
    struct gcStreamVertex mPrevVerts[2]; // offset 0x18, size 0x78
};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
// total size: 0xC
class pddiRenderContext : public pddiObject {};
// total size: 0xC
class tPddiMatrixStack : public tMatrixStack {
    // Functions
    tPddiMatrixStack(class pddiRenderContext * context, enum pddiMatrixType t);

    ~tPddiMatrixStack();

    void Load(const class Matrix & m);

    void LoadIdentity();

    void Push();

    void Pop();

    void Multiply(const class Matrix & matrix);

    void RotateX(float x);

    void RotateY(float y);

    void RotateZ(float z);

    void RotateXYZ(float x, float y, float z);

    void RotateYZX(float x, float y, float z);

    void Translate(const class Vector & trans);

    void Translate(float x, float y, float z);

    void Scale(float x, float y, float z);

    void Scale(const class Vector & scale);

    void Scale(float scale);

    class Matrix * GetMatrix();

    void TransformVector(class Vector & v, class Vector * r);

    // Static members
    static class Vector tmpv; // size: 0xC
    static class Matrix tmp; // size: 0x40

    // Members
protected:
    class pddiRenderContext * pddi_context; // offset 0x4, size 0x4
    enum pddiMatrixType type; // offset 0x8, size 0x4
};
enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// ERROR: Failed to emit tag 282511 (GlobalSubroutine)
// ERROR: Failed to emit tag 282609 (GlobalSubroutine)
// Range: 0x800486A8 -> 0x800486E4
// this: r6
void tPddiMatrixStack::Load(const class Matrix & m /* r5 */) {}

// Range: 0x800486E4 -> 0x80048718
// this: r3
void tPddiMatrixStack::LoadIdentity() {}

// Range: 0x80048718 -> 0x8004874C
// this: r3
void tPddiMatrixStack::Push() {}

// Range: 0x8004874C -> 0x80048780
// this: r3
void tPddiMatrixStack::Pop() {}

// Range: 0x80048780 -> 0x800487B8
// this: r3
void tPddiMatrixStack::Multiply(const class Matrix & matrix /* r4 */) {}

// Range: 0x800487B8 -> 0x80048828
// this: r30
void tPddiMatrixStack::RotateX(float x /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048828 -> 0x80048898
// this: r30
void tPddiMatrixStack::RotateY(float y /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048898 -> 0x80048908
// this: r30
void tPddiMatrixStack::RotateZ(float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048908 -> 0x80048998
// this: r30
void tPddiMatrixStack::RotateXYZ(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048998 -> 0x80048A28
// this: r30
void tPddiMatrixStack::RotateYZX(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048A28 -> 0x80048AA4
// this: r29
void tPddiMatrixStack::Translate(const class Vector & trans /* r30 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048AA4 -> 0x80048AE8
// this: r3
void tPddiMatrixStack::Translate(float x /* r1+0xC */, float y /* r1+0x10 */, float z /* r1+0x14 */) {
    // References
    // -> class Vector tmpv;
}

// Range: 0x80048AE8 -> 0x80048B78
// this: r30
void tPddiMatrixStack::Scale(float x /* f29 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Matrix tmp;
}

// Range: 0x80048B78 -> 0x80048BB0
// this: r3
void tPddiMatrixStack::Scale(const class Vector & scale /* r1+0xC */) {}

// Range: 0x80048BB0 -> 0x80048BE4
// this: r3
void tPddiMatrixStack::Scale(float scale /* f1 */) {}

// Range: 0x80048BE4 -> 0x80048C18
// this: r3
class Matrix * tPddiMatrixStack::GetMatrix() {}

// Range: 0x80048C18 -> 0x80048C70
// this: r3
void tPddiMatrixStack::TransformVector(class Vector & v /* r30 */, class Vector * r /* r31 */) {}

static // total size: 0x8
struct {} tMatrixStack::__RTTI; // size: 0x8, address: 0x80138068
static // total size: 0x8
struct {} tPddiMatrixStack::__RTTI; // size: 0x8, address: 0x80138070
static // total size: 0x8
struct {} tBasicMatrixStack::__RTTI; // size: 0x8, address: 0x80138078



