/*
    Compile unit: D:\Pure3d\development\pddi\base\basecontext.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BA5A4 -> 0x800BD078
*/
// total size: 0x4
class pddiState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class pddiRenderState : public pddiState {
    // Functions
    void Sync(class pddiRenderContext * context);

    // Members
public:
    enum pddiCullMode cullMode; // offset 0x4, size 0x4
    unsigned char zEnabled; // offset 0x8, size 0x1
    enum pddiCompareMode zCompare; // offset 0xC, size 0x4
    unsigned char zWrite; // offset 0x10, size 0x1
    enum pddiFillMode fillMode; // offset 0x14, size 0x4
    float alphaRef; // offset 0x18, size 0x4
    unsigned char redWrite; // offset 0x1C, size 0x1
    unsigned char greenWrite; // offset 0x1D, size 0x1
    unsigned char blueWrite; // offset 0x1E, size 0x1
    unsigned char alphaWrite; // offset 0x1F, size 0x1
};
// Range: 0x800BA5A4 -> 0x800BA68C
// this: r30
void pddiRenderState::Sync(class pddiRenderContext * context /* r31 */) {}

// total size: 0x10
class pddiFloatRect {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
// total size: 0x10
class pddiCamera {
    // Members
public:
    float nearPlane; // offset 0x0, size 0x4
    float farPlane; // offset 0x4, size 0x4
    float fov; // offset 0x8, size 0x4
    float aspect; // offset 0xC, size 0x4
};
// total size: 0x14
class pddiPlane {
    // Members
public:
    unsigned char enabled; // offset 0x0, size 0x1
    float coeff[4]; // offset 0x4, size 0x10
};
// total size: 0xC8
class pddiViewState : public pddiState {
    // Functions
    void Sync(class pddiRenderContext * context);

    // Members
public:
    struct pddiColour clearColour; // offset 0x4, size 0x4
    float clearDepth; // offset 0x8, size 0x4
    unsigned int clearStencil; // offset 0xC, size 0x4
    enum pddiProjectionMode projectionMode; // offset 0x10, size 0x4
    class pddiFloatRect viewWindow; // offset 0x14, size 0x10
    class pddiCamera camera; // offset 0x24, size 0x10
    class pddiPlane clipPlane[6]; // offset 0x34, size 0x78
    float zBias; // offset 0xAC, size 0x4
    float zRange[2]; // offset 0xB0, size 0x8
    class pddiRect scissor; // offset 0xB8, size 0x10
};
// Range: 0x800BA68C -> 0x800BA7BC
// this: r30
void pddiViewState::Sync(class pddiRenderContext * context /* r31 */) {}

// total size: 0x60
class pddiLight {
    // Members
public:
    class pddiVector worldPosition; // offset 0x0, size 0xC
    class pddiVector viewPosition; // offset 0xC, size 0xC
    class pddiVector worldDirection; // offset 0x18, size 0xC
    class pddiVector viewDirection; // offset 0x24, size 0xC
    int pad1; // offset 0x30, size 0x4
    unsigned char enabled; // offset 0x34, size 0x1
    enum pddiLightType type; // offset 0x38, size 0x4
    struct pddiColour colour; // offset 0x3C, size 0x4
    float range; // offset 0x40, size 0x4
    float attenA; // offset 0x44, size 0x4
    float attenB; // offset 0x48, size 0x4
    float attenC; // offset 0x4C, size 0x4
    float phi; // offset 0x50, size 0x4
    float theta; // offset 0x54, size 0x4
    float falloff; // offset 0x58, size 0x4
    int pad2; // offset 0x5C, size 0x4
};
// total size: 0x18C
class pddiLightingState : public pddiState {
    // Functions
    void Sync(class pddiRenderContext * context);

    // Members
public:
    struct pddiColour ambient; // offset 0x4, size 0x4
    int padd; // offset 0x8, size 0x4
    class pddiLight light[4]; // offset 0xC, size 0x180
};
// Range: 0x800BA7BC -> 0x800BA938
// this: r30
void pddiLightingState::Sync(class pddiRenderContext * context /* r28 */) {
    // Local variables
    int i; // r29
}

// total size: 0x14
class pddiFogState : public pddiState {
    // Functions
    void Sync(class pddiRenderContext * context);

    // Members
public:
    unsigned char enabled; // offset 0x4, size 0x1
    struct pddiColour colour; // offset 0x8, size 0x4
    float start; // offset 0xC, size 0x4
    float end; // offset 0x10, size 0x4
};
// Range: 0x800BA938 -> 0x800BA9AC
// this: r30
void pddiFogState::Sync(class pddiRenderContext * context /* r31 */) {}

// total size: 0x24
class pddiStencilState : public pddiState {
    // Functions
    void Sync(class pddiRenderContext * context);

    // Members
public:
    unsigned char enabled; // offset 0x4, size 0x1
    enum pddiCompareMode compare; // offset 0x8, size 0x4
    int ref; // offset 0xC, size 0x4
    unsigned int mask; // offset 0x10, size 0x4
    unsigned int writeMask; // offset 0x14, size 0x4
    enum pddiStencilOp failOp; // offset 0x18, size 0x4
    enum pddiStencilOp zFailOp; // offset 0x1C, size 0x4
    enum pddiStencilOp zPassOp; // offset 0x20, size 0x4
};
// Range: 0x800BA9AC -> 0x800BAA78
// this: r30
void pddiStencilState::Sync(class pddiRenderContext * context /* r31 */) {}

// total size: 0x184
struct {} pddiRenderContext::__vtable; // size: 0x184, address: 0x80111D6C
// total size: 0x1B8
struct {} pddiBaseContext::__vtable; // size: 0x1B8, address: 0x80111A88
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
enum pddiDisplayMode {
    PDDI_DISPLAY_FULLSCREEN = 0,
    PDDI_DISPLAY_WINDOW = 1,
    PDDI_DISPLAY_FULLSCREEN_PAL = 2,
};
// total size: 0xC
class pddiDisplay : public pddiObject {};
// total size: 0x110
struct pddiLibInfo {
    // Members
    int versionMajor; // offset 0x0, size 0x4
    int versionMinor; // offset 0x4, size 0x4
    int versionBuild; // offset 0x8, size 0x4
    int libID; // offset 0xC, size 0x4
    char description[256]; // offset 0x10, size 0x100
};
// total size: 0xC
class pddiDevice : public pddiObject {};
// total size: 0x10
class pddiMatrixStack : public pddiStack {};
// total size: 0x48
class pddiContextState {
    // Members
public:
    unsigned int currentFrame; // offset 0x0, size 0x4
    unsigned int inFrame; // offset 0x4, size 0x4
    unsigned int contextFlags; // offset 0x8, size 0x4
    class pddiMatrixStack * matrixStack[5]; // offset 0xC, size 0x14
    class pddiStack * viewStateStack; // offset 0x20, size 0x4
    class pddiStack * renderStateStack; // offset 0x24, size 0x4
    class pddiStack * lightingStateStack; // offset 0x28, size 0x4
    class pddiStack * fogStateStack; // offset 0x2C, size 0x4
    class pddiStack * stencilStateStack; // offset 0x30, size 0x4
    class pddiViewState * viewState; // offset 0x34, size 0x4
    class pddiRenderState * renderState; // offset 0x38, size 0x4
    class pddiLightingState * lightingState; // offset 0x3C, size 0x4
    class pddiFogState * fogState; // offset 0x40, size 0x4
    class pddiStencilState * stencilState; // offset 0x44, size 0x4
};
// total size: 0x8
class pddiFont {
    // Members
    class pddiRenderContext * context; // offset 0x0, size 0x4
    class pddiShader * shader; // offset 0x4, size 0x4
};
// total size: 0x104
class pddiBaseContext : public pddiRenderContext {
    // Functions
    pddiBaseContext(class pddiDisplay * disp, class pddiDevice * dev);

    ~pddiBaseContext();

    void DefaultState();

    void SyncState(unsigned int mask);

    void BuildStateStacks();

    void ResetStats();

    void ComputeFrameStats();

    void BuildMatrixStacks();

    void DisplayStats();

    void BeginFrame();

    void EndFrame();

    void SetClearColour(struct pddiColour & colour);

    struct pddiColour GetClearColour();

    void SetClearDepth(float depth);

    float GetClearDepth();

    void SetClearStencil(unsigned int stencil);

    unsigned int GetClearStencil();

    void IdentityMatrix(enum pddiMatrixType id);

    void LoadMatrix(enum pddiMatrixType id, class pddiMatrix * matrix);

    void PushMatrix(enum pddiMatrixType id);

    void PopMatrix(enum pddiMatrixType id);

    void MultMatrix(enum pddiMatrixType id, class pddiMatrix * matrix);

    void ScaleMatrix(enum pddiMatrixType id, float x, float y, float z);

    class pddiMatrix * GetMatrix(enum pddiMatrixType id);

    void SetProjectionMode(enum pddiProjectionMode mode);

    enum pddiProjectionMode GetProjectionMode();

    void SetViewWindow(float left, float top, float right, float bottom);

    void GetViewWindow(float * left, float * top, float * right, float * bottom);

    void SetCamera(float n, float f, float fv, float ar);

    void GetCamera(float * n, float * f, float * fov, float * aspect);

    void SetScissor(class pddiRect * rect);

    void GetScissor(class pddiRect * rect);

    void DrawString(char * s, int x, int y, struct pddiColour & colour);

    void SetAmbientLight(struct pddiColour & colour);

    struct pddiColour GetAmbientLight();

    void EnableLight(int light, unsigned char enable);

    unsigned char IsLightEnabled(int light);

    void SetLightType(int light, enum pddiLightType type);

    enum pddiLightType GetLightType(int light);

    void SetLightColour(int light, struct pddiColour & colour);

    struct pddiColour GetLightColour(int light);

    void SetLightPosition(int light, class pddiVector * vector);

    void GetLightPosition(int light, class pddiVector * vector);

    void SetLightDirection(int light, class pddiVector * vector);

    void GetLightDirection(int light, class pddiVector * vector);

    void SetLightRange(int light, float range);

    float GetLightRange(int light);

    void SetLightAttenuation(int light, float a, float b, float c);

    void GetLightAttenuation(int light, float * a, float * b, float * c);

    void SetLightCone(int light, float a, float b, float c);

    void GetLightCone(int light, float * a, float * b, float * c);

    void SetCullMode(enum pddiCullMode mode);

    enum pddiCullMode GetCullMode();

    void SetColourWrite(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

    void GetColourWrite(unsigned char * red, unsigned char * green, unsigned char * blue, unsigned char * alpha);

    void EnableZBuffer(unsigned char enable);

    unsigned char IsZBufferEnabled();

    void SetZCompare(enum pddiCompareMode zCompare);

    enum pddiCompareMode GetZCompare();

    void SetZWrite(unsigned char zWrite);

    unsigned char GetZWrite();

    void SetZBias(float bias);

    float GetZBias();

    void SetZRange(float n, float f);

    void GetZRange(float * n, float * f);

    void EnableStencilBuffer(unsigned char enable);

    unsigned char IsStencilBufferEnabled();

    void SetStencilCompare(enum pddiCompareMode compare);

    enum pddiCompareMode GetStencilCompare();

    void SetStencilRef(int ref);

    int GetStencilRef();

    void SetStencilMask(unsigned int mask);

    unsigned int GetStencilMask();

    void SetStencilWriteMask(unsigned int mask);

    unsigned int GetStencilWriteMask();

    void SetStencilOp(enum pddiStencilOp failOp, enum pddiStencilOp zFailOp, enum pddiStencilOp zPassOp);

    void GetStencilOp(enum pddiStencilOp * failOp, enum pddiStencilOp * zFailOp, enum pddiStencilOp * zPassOp);

    void SetAlphaRef(float ref);

    float GetAlphaRef();

    void SetFillMode(enum pddiFillMode mode);

    enum pddiFillMode GetFillMode();

    void EnableFog(unsigned char enable);

    unsigned char IsFogEnabled();

    void SetFog(struct pddiColour & colour, float start, float end);

    void GetFog(struct pddiColour * colour, float * start, float * end);

    int GetIntStat(enum pddiStatType stat);

    float GetFloatStat(enum pddiStatType stat);

    void EnableStatsOverlay(unsigned char enable);

    unsigned char IsStatsOverlayEnabled();

    void PushState(enum pddiStateMask mask);

    void PopState(enum pddiStateMask mask);

    // Members
protected:
    class pddiDisplay * display; // offset 0xC, size 0x4
    class pddiDevice * device; // offset 0x10, size 0x4
    class pddiContextState state; // offset 0x14, size 0x48
    float stats[40]; // offset 0x5C, size 0xA0
    class pddiFont * font; // offset 0xFC, size 0x4
    unsigned char displayStats; // offset 0x100, size 0x1
    unsigned char supressPrimTally; // offset 0x101, size 0x1
};
// Range: 0x800BAA78 -> 0x800BABA8
// this: r1+0x8
pddiBaseContext::pddiBaseContext(class pddiDisplay * disp /* r30 */, class pddiDevice * dev /* r31 */) {
    // References
    // -> struct [anonymous] pddiBaseContext::__vtable;
    // -> struct [anonymous] pddiRenderContext::__vtable;
}

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
// total size: 0xC
class pddiVector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class pddiRenderContext : public pddiObject {};
// Range: 0x800BABA8 -> 0x800BAD3C
// this: r30
pddiBaseContext::~pddiBaseContext() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] pddiRenderContext::__vtable;
    // -> struct [anonymous] pddiBaseContext::__vtable;
}

// total size: 0xC
struct {} pddiStack<pddiStencilState>::__vtable; // size: 0xC, address: 0x80111D60
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiStencilState * stack; // offset 0xC, size 0x4
};
// total size: 0xC
struct {} pddiStack<pddiFogState>::__vtable; // size: 0xC, address: 0x80111D38
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiFogState * stack; // offset 0xC, size 0x4
};
// total size: 0xC
struct {} pddiStack<pddiLightingState>::__vtable; // size: 0xC, address: 0x80111D14
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiLightingState * stack; // offset 0xC, size 0x4
};
// total size: 0xC
struct {} pddiStack<pddiRenderState>::__vtable; // size: 0xC, address: 0x80111CE8
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiRenderState * stack; // offset 0xC, size 0x4
};
// total size: 0xC
struct {} pddiStack<pddiViewState>::__vtable; // size: 0xC, address: 0x80111CC0
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiViewState * stack; // offset 0xC, size 0x4
};
// Range: 0x800BADAC -> 0x800BB084
// this: r30
void pddiBaseContext::DefaultState() {
    // Local variables
    int i; // r1+0x8
}

// Range: 0x800BB084 -> 0x800BB158
// this: r30
void pddiBaseContext::SyncState(unsigned int mask /* r31 */) {}

// Range: 0x800BB158 -> 0x800BB3C0
// this: r31
void pddiBaseContext::BuildStateStacks() {
    // References
    // -> struct [anonymous] pddiStack<pddiStencilState>::__vtable;
    // -> struct [anonymous] pddiStack<pddiFogState>::__vtable;
    // -> struct [anonymous] pddiStack<pddiLightingState>::__vtable;
    // -> struct [anonymous] pddiStack<pddiRenderState>::__vtable;
    // -> struct [anonymous] pddiStack<pddiViewState>::__vtable;
}

// Range: 0x800BB494 -> 0x800BB4EC
// this: r1+0x0
void pddiBaseContext::ResetStats() {}

// Range: 0x800BB4EC -> 0x800BB530
// this: r1+0x0
void pddiBaseContext::ComputeFrameStats() {}

// total size: 0xC
struct {} pddiStack<pddiMatrix>::__vtable; // size: 0xC, address: 0x80111C70
// total size: 0xC
struct {} pddiMatrixStack::__vtable; // size: 0xC, address: 0x80111C98
// Range: 0x800BB530 -> 0x800BB7DC
// this: r31
void pddiBaseContext::BuildMatrixStacks() {
    // References
    // -> struct [anonymous] pddiMatrixStack::__vtable;
    // -> struct [anonymous] pddiStack<pddiMatrix>::__vtable;
}

// total size: 0x40
class pddiMatrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// total size: 0x10
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiMatrix * stack; // offset 0xC, size 0x4
};
// Range: 0x800BB7DC -> 0x800BB9D4
// this: r31
void pddiBaseContext::DisplayStats() {
    // Local variables
    float bonesPerVertex; // f3
    char buf[512]; // r1+0xDC
}

// Range: 0x800BB9D4 -> 0x800BBA6C
// this: r31
void pddiBaseContext::BeginFrame() {}

// Range: 0x800BBA6C -> 0x800BBAD0
// this: r31
void pddiBaseContext::EndFrame() {}

// Range: 0x800BBAD0 -> 0x800BBAE0
// this: r1+0x0
void pddiBaseContext::SetClearColour(struct pddiColour & colour /* r1+0x4 */) {}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x800BBAE0 -> 0x800BBAF0
// this: r1+0x4
struct pddiColour pddiBaseContext::GetClearColour() {}

// Range: 0x800BBAF0 -> 0x800BBAFC
// this: r1+0x0
void pddiBaseContext::SetClearDepth(float depth /* r1+0x4 */) {}

// Range: 0x800BBAFC -> 0x800BBB08
// this: r1+0x0
float pddiBaseContext::GetClearDepth() {}

// Range: 0x800BBB08 -> 0x800BBB14
// this: r1+0x0
void pddiBaseContext::SetClearStencil(unsigned int stencil /* r1+0x4 */) {}

// Range: 0x800BBB14 -> 0x800BBB20
// this: r1+0x0
unsigned int pddiBaseContext::GetClearStencil() {}

// Range: 0x800BBB20 -> 0x800BBB24
void pddiBaseContext::Clear() {}

enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// Range: 0x800BBB24 -> 0x800BBB90
// this: r30
void pddiBaseContext::IdentityMatrix(enum pddiMatrixType id /* r31 */) {}

// Range: 0x800BBB90 -> 0x800BBC58
// this: r3
void pddiBaseContext::LoadMatrix(enum pddiMatrixType id /* r4 */, class pddiMatrix * matrix /* r1+0x10 */) {}

// Range: 0x800BBC58 -> 0x800BBD04
// this: r1+0x0
void pddiBaseContext::PushMatrix(enum pddiMatrixType id /* r1+0x4 */) {}

// Range: 0x800BBD04 -> 0x800BBD48
// this: r3
void pddiBaseContext::PopMatrix(enum pddiMatrixType id /* r4 */) {}

// Range: 0x800BBD48 -> 0x800BBE54
// this: r29
void pddiBaseContext::MultMatrix(enum pddiMatrixType id /* r30 */, class pddiMatrix * matrix /* r5 */) {}

// Range: 0x800BBE54 -> 0x800BBFB4
// this: r29
void pddiBaseContext::ScaleMatrix(enum pddiMatrixType id /* r30 */, float x /* r1+0x10 */, float y /* r1+0x14 */, float z /* r1+0x18 */) {
    // Local variables
    class pddiMatrix m; // r1+0x5C
}

// Range: 0x800BBFB4 -> 0x800BBFD4
// this: r1+0x0
class pddiMatrix * pddiBaseContext::GetMatrix(enum pddiMatrixType id /* r1+0x4 */) {}

enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
// Range: 0x800BBFD4 -> 0x800BC008
// this: r3
void pddiBaseContext::SetProjectionMode(enum pddiProjectionMode mode /* r1+0xC */) {}

// Range: 0x800BC008 -> 0x800BC014
// this: r1+0x0
enum pddiProjectionMode pddiBaseContext::GetProjectionMode() {}

// Range: 0x800BC014 -> 0x800BC054
// this: r3
void pddiBaseContext::SetViewWindow(float left /* r1+0xC */, float top /* r1+0x10 */, float right /* r1+0x14 */, float bottom /* r1+0x18 */) {}

// Range: 0x800BC054 -> 0x800BC088
// this: r1+0x0
void pddiBaseContext::GetViewWindow(float * left /* r1+0x4 */, float * top /* r1+0x8 */, float * right /* r1+0xC */, float * bottom /* r1+0x10 */) {}

// Range: 0x800BC088 -> 0x800BC0C8
// this: r3
void pddiBaseContext::SetCamera(float n /* r1+0xC */, float f /* r1+0x10 */, float fv /* r1+0x14 */, float ar /* r1+0x18 */) {}

// Range: 0x800BC0C8 -> 0x800BC0FC
// this: r1+0x0
void pddiBaseContext::GetCamera(float * n /* r1+0x4 */, float * f /* r1+0x8 */, float * fov /* r1+0xC */, float * aspect /* r1+0x10 */) {}

// Range: 0x800BC0FC -> 0x800BC124
// this: r1+0x0
void pddiBaseContext::SetScissor(class pddiRect * rect /* r1+0x4 */) {}

// Range: 0x800BC124 -> 0x800BC14C
// this: r1+0x0
void pddiBaseContext::GetScissor(class pddiRect * rect /* r1+0x4 */) {}

// Range: 0x800BC14C -> 0x800BC154
class gcPrimStream * pddiBaseContext::BeginPrims() {}

// Range: 0x800BC154 -> 0x800BC158
void pddiBaseContext::EndPrims() {}

// Range: 0x800BC158 -> 0x800BC15C
void pddiBaseContext::DrawPrimBuffer() {}

// total size: 0x10
class pddiRect {
    // Members
public:
    int left; // offset 0x0, size 0x4
    int top; // offset 0x4, size 0x4
    int right; // offset 0x8, size 0x4
    int bottom; // offset 0xC, size 0x4
};
// Range: 0x800BC15C -> 0x800BC31C
// this: r24
void pddiBaseContext::DrawString(char * s /* r25 */, int x /* r26 */, int y /* r27 */, struct pddiColour & colour /* r28 */) {
    // Local variables
    class pddiRect oldScissor; // r1+0xB0
    enum pddiProjectionMode proj; // r29
    class pddiRect scissor; // r1+0xA0
}

// Range: 0x800BC31C -> 0x800BC324
int pddiBaseContext::GetMaxLights() {}

// Range: 0x800BC324 -> 0x800BC334
// this: r1+0x0
void pddiBaseContext::SetAmbientLight(struct pddiColour & colour /* r1+0x4 */) {}

// Range: 0x800BC334 -> 0x800BC344
// this: r1+0x4
struct pddiColour pddiBaseContext::GetAmbientLight() {}

// Range: 0x800BC344 -> 0x800BC360
// this: r1+0x0
void pddiBaseContext::EnableLight(int light /* r1+0x4 */, unsigned char enable /* r1+0x8 */) {}

// Range: 0x800BC360 -> 0x800BC384
// this: r1+0x0
unsigned char pddiBaseContext::IsLightEnabled(int light /* r1+0x4 */) {}

enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
// Range: 0x800BC384 -> 0x800BC3C8
// this: r3
void pddiBaseContext::SetLightType(int light /* r4 */, enum pddiLightType type /* r1+0x10 */) {}

// Range: 0x800BC3C8 -> 0x800BC3EC
// this: r1+0x0
enum pddiLightType pddiBaseContext::GetLightType(int light /* r1+0x4 */) {}

// Range: 0x800BC3EC -> 0x800BC434
// this: r3
void pddiBaseContext::SetLightColour(int light /* r4 */, struct pddiColour & colour /* r1+0x10 */) {}

// Range: 0x800BC434 -> 0x800BC460
// this: r1+0x4
struct pddiColour pddiBaseContext::GetLightColour(int light /* r1+0x8 */) {}

// Range: 0x800BC460 -> 0x800BC4B8
// this: r3
void pddiBaseContext::SetLightPosition(int light /* r4 */, class pddiVector * vector /* r1+0x10 */) {}

// Range: 0x800BC4B8 -> 0x800BC4FC
// this: r1+0x0
void pddiBaseContext::GetLightPosition(int light /* r1+0x4 */, class pddiVector * vector /* r1+0x8 */) {}

// Range: 0x800BC4FC -> 0x800BC554
// this: r3
void pddiBaseContext::SetLightDirection(int light /* r4 */, class pddiVector * vector /* r1+0x10 */) {}

// Range: 0x800BC554 -> 0x800BC598
// this: r1+0x0
void pddiBaseContext::GetLightDirection(int light /* r1+0x4 */, class pddiVector * vector /* r1+0x8 */) {}

// Range: 0x800BC598 -> 0x800BC5DC
// this: r3
void pddiBaseContext::SetLightRange(int light /* r4 */, float range /* r1+0x10 */) {}

// Range: 0x800BC5DC -> 0x800BC600
// this: r1+0x0
float pddiBaseContext::GetLightRange(int light /* r1+0x4 */) {}

// Range: 0x800BC600 -> 0x800BC65C
// this: r3
void pddiBaseContext::SetLightAttenuation(int light /* r4 */, float a /* r1+0x10 */, float b /* r1+0x14 */, float c /* r1+0x18 */) {}

// Range: 0x800BC65C -> 0x800BC6B0
// this: r1+0x0
void pddiBaseContext::GetLightAttenuation(int light /* r1+0x4 */, float * a /* r1+0x8 */, float * b /* r1+0xC */, float * c /* r1+0x10 */) {}

// Range: 0x800BC6B0 -> 0x800BC70C
// this: r3
void pddiBaseContext::SetLightCone(int light /* r4 */, float a /* r1+0x10 */, float b /* r1+0x14 */, float c /* r1+0x18 */) {}

// Range: 0x800BC70C -> 0x800BC760
// this: r1+0x0
void pddiBaseContext::GetLightCone(int light /* r1+0x4 */, float * a /* r1+0x8 */, float * b /* r1+0xC */, float * c /* r1+0x10 */) {}

enum pddiCullMode {
    PDDI_CULL_NONE = 0,
    PDDI_CULL_NORMAL = 1,
    PDDI_CULL_INVERTED = 2,
    PDDI_CULL_SHADOW_BACKFACE = 3,
    PDDI_CULL_SHADOW_FRONTFACE = 4,
};
// Range: 0x800BC760 -> 0x800BC76C
// this: r1+0x0
void pddiBaseContext::SetCullMode(enum pddiCullMode mode /* r1+0x4 */) {}

// Range: 0x800BC76C -> 0x800BC778
// this: r1+0x0
enum pddiCullMode pddiBaseContext::GetCullMode() {}

// Range: 0x800BC778 -> 0x800BC79C
// this: r1+0x0
void pddiBaseContext::SetColourWrite(unsigned char red /* r1+0x4 */, unsigned char green /* r1+0x5 */, unsigned char blue /* r1+0x6 */, unsigned char alpha /* r1+0x7 */) {}

// Range: 0x800BC79C -> 0x800BC7D0
// this: r1+0x0
void pddiBaseContext::GetColourWrite(unsigned char * red /* r1+0x4 */, unsigned char * green /* r1+0x8 */, unsigned char * blue /* r1+0xC */, unsigned char * alpha /* r1+0x10 */) {}

// Range: 0x800BC7D0 -> 0x800BC7DC
// this: r1+0x0
void pddiBaseContext::EnableZBuffer(unsigned char enable /* r1+0x4 */) {}

// Range: 0x800BC7DC -> 0x800BC7E8
// this: r1+0x0
unsigned char pddiBaseContext::IsZBufferEnabled() {}

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
// Range: 0x800BC7E8 -> 0x800BC7F4
// this: r1+0x0
void pddiBaseContext::SetZCompare(enum pddiCompareMode zCompare /* r1+0x4 */) {}

// Range: 0x800BC7F4 -> 0x800BC800
// this: r1+0x0
enum pddiCompareMode pddiBaseContext::GetZCompare() {}

// Range: 0x800BC800 -> 0x800BC80C
// this: r1+0x0
void pddiBaseContext::SetZWrite(unsigned char zWrite /* r1+0x4 */) {}

// Range: 0x800BC80C -> 0x800BC818
// this: r1+0x0
unsigned char pddiBaseContext::GetZWrite() {}

// Range: 0x800BC818 -> 0x800BC824
// this: r1+0x0
void pddiBaseContext::SetZBias(float bias /* r1+0x4 */) {}

// Range: 0x800BC824 -> 0x800BC830
// this: r1+0x0
float pddiBaseContext::GetZBias() {}

// Range: 0x800BC830 -> 0x800BC844
// this: r1+0x0
void pddiBaseContext::SetZRange(float n /* r1+0x4 */, float f /* r1+0x8 */) {}

// Range: 0x800BC844 -> 0x800BC860
// this: r1+0x0
void pddiBaseContext::GetZRange(float * n /* r1+0x4 */, float * f /* r1+0x8 */) {}

// Range: 0x800BC860 -> 0x800BC86C
// this: r1+0x0
void pddiBaseContext::EnableStencilBuffer(unsigned char enable /* r1+0x4 */) {}

// Range: 0x800BC86C -> 0x800BC878
// this: r1+0x0
unsigned char pddiBaseContext::IsStencilBufferEnabled() {}

// Range: 0x800BC878 -> 0x800BC884
// this: r1+0x0
void pddiBaseContext::SetStencilCompare(enum pddiCompareMode compare /* r1+0x4 */) {}

// Range: 0x800BC884 -> 0x800BC890
// this: r1+0x0
enum pddiCompareMode pddiBaseContext::GetStencilCompare() {}

// Range: 0x800BC890 -> 0x800BC89C
// this: r1+0x0
void pddiBaseContext::SetStencilRef(int ref /* r1+0x4 */) {}

// Range: 0x800BC89C -> 0x800BC8A8
// this: r1+0x0
int pddiBaseContext::GetStencilRef() {}

// Range: 0x800BC8A8 -> 0x800BC8B4
// this: r1+0x0
void pddiBaseContext::SetStencilMask(unsigned int mask /* r1+0x4 */) {}

// Range: 0x800BC8B4 -> 0x800BC8C0
// this: r1+0x0
unsigned int pddiBaseContext::GetStencilMask() {}

// Range: 0x800BC8C0 -> 0x800BC8CC
// this: r1+0x0
void pddiBaseContext::SetStencilWriteMask(unsigned int mask /* r1+0x4 */) {}

// Range: 0x800BC8CC -> 0x800BC8D8
// this: r1+0x0
unsigned int pddiBaseContext::GetStencilWriteMask() {}

enum pddiStencilOp {
    PDDI_STENCIL_KEEP = 0,
    PDDI_STENCIL_ZERO = 1,
    PDDI_STENCIL_REPLACE = 2,
    PDDI_STENCIL_INCR = 3,
    PDDI_STENCIL_DECR = 4,
    PDDI_STENCIL_INVERT = 5,
};
// Range: 0x800BC8D8 -> 0x800BC8F4
// this: r1+0x0
void pddiBaseContext::SetStencilOp(enum pddiStencilOp failOp /* r1+0x4 */, enum pddiStencilOp zFailOp /* r1+0x8 */, enum pddiStencilOp zPassOp /* r1+0xC */) {}

// Range: 0x800BC8F4 -> 0x800BC91C
// this: r1+0x0
void pddiBaseContext::GetStencilOp(enum pddiStencilOp * failOp /* r1+0x4 */, enum pddiStencilOp * zFailOp /* r1+0x8 */, enum pddiStencilOp * zPassOp /* r1+0xC */) {}

// Range: 0x800BC91C -> 0x800BC928
// this: r1+0x0
void pddiBaseContext::SetAlphaRef(float ref /* r1+0x4 */) {}

// Range: 0x800BC928 -> 0x800BC934
// this: r1+0x0
float pddiBaseContext::GetAlphaRef() {}

enum pddiFillMode {
    PDDI_FILL_SOLID = 0,
    PDDI_FILL_WIRE = 1,
    PDDI_FILL_POINT = 2,
};
// Range: 0x800BC934 -> 0x800BC940
// this: r1+0x0
void pddiBaseContext::SetFillMode(enum pddiFillMode mode /* r1+0x4 */) {}

// Range: 0x800BC940 -> 0x800BC94C
// this: r1+0x0
enum pddiFillMode pddiBaseContext::GetFillMode() {}

// Range: 0x800BC94C -> 0x800BC958
// this: r1+0x0
void pddiBaseContext::EnableFog(unsigned char enable /* r1+0x4 */) {}

// Range: 0x800BC958 -> 0x800BC964
// this: r1+0x0
unsigned char pddiBaseContext::IsFogEnabled() {}

// Range: 0x800BC964 -> 0x800BC984
// this: r1+0x0
void pddiBaseContext::SetFog(struct pddiColour & colour /* r1+0x4 */, float start /* r1+0x8 */, float end /* r1+0xC */) {}

// Range: 0x800BC984 -> 0x800BC9AC
// this: r1+0x0
void pddiBaseContext::GetFog(struct pddiColour * colour /* r1+0x4 */, float * start /* r1+0x8 */, float * end /* r1+0xC */) {}

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
// Range: 0x800BC9AC -> 0x800BC9D0
// this: r1+0x8
int pddiBaseContext::GetIntStat(enum pddiStatType stat /* r1+0xC */) {}

// Range: 0x800BC9D0 -> 0x800BC9E0
// this: r1+0x0
float pddiBaseContext::GetFloatStat(enum pddiStatType stat /* r1+0x4 */) {}

// Range: 0x800BC9E0 -> 0x800BC9E8
// this: r1+0x0
void pddiBaseContext::EnableStatsOverlay(unsigned char enable /* r1+0x4 */) {}

// Range: 0x800BC9E8 -> 0x800BC9F0
// this: r3
unsigned char pddiBaseContext::IsStatsOverlayEnabled() {}

enum pddiStateMask {
    PDDI_STATE_RENDER = 1,
    PDDI_STATE_VIEW = 2,
    PDDI_STATE_LIGHTING = 4,
    PDDI_STATE_FOG = 8,
    PDDI_STATE_STENCIL = 16,
    PDDI_STATE_ALL = -1,
};
// Range: 0x800BC9F0 -> 0x800BCC3C
// this: r30
void pddiBaseContext::PushState(enum pddiStateMask mask /* r31 */) {}

// Range: 0x800BCD50 -> 0x800BCEEC
// this: r30
void pddiBaseContext::PopState(enum pddiStateMask mask /* r31 */) {}

// total size: 0x4
class CallBack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static class CallBack * memCallback; // size: 0x4, address: 0x8013B2D0
// total size: 0xC
class pddiExtMemRegistration : public pddiObject {};
// total size: 0xC
class _pddiExtMemRegistration : public pddiExtMemRegistration {};
static class _pddiExtMemRegistration memExt; // size: 0xC, address: 0x8013734C
// Range: 0x800BCEEC -> 0x800BCF0C
class pddiObject * pddiBaseContext::GetExtension(unsigned int id /* r1+0x4 */) {
    // References
    // -> static class _pddiExtMemRegistration memExt;
}

// Range: 0x800BCF0C -> 0x800BCF28
unsigned char pddiBaseContext::VerifyExtension(unsigned int id /* r1+0x4 */) {}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A188
static // total size: 0x8
struct {} pddiRenderContext::__RTTI; // size: 0x8, address: 0x8013A190
static // total size: 0x8
struct {} pddiBaseContext::__RTTI; // size: 0x8, address: 0x8013A198
static // total size: 0x8
struct {} pddiState::__RTTI; // size: 0x8, address: 0x8013A1A0
// total size: 0xC
struct {} pddiState::__vtable; // size: 0xC, address: 0x80111C4C
static // total size: 0x8
struct {} pddiStack<pddiMatrix>::__RTTI; // size: 0x8, address: 0x8013A1A8
static // total size: 0x8
struct {} pddiMatrixStack::__RTTI; // size: 0x8, address: 0x8013A1B0
static // total size: 0x8
struct {} pddiStack<pddiViewState>::__RTTI; // size: 0x8, address: 0x8013A1B8
static // total size: 0x8
struct {} pddiStack<pddiRenderState>::__RTTI; // size: 0x8, address: 0x8013A1C0
static // total size: 0x8
struct {} pddiStack<pddiLightingState>::__RTTI; // size: 0x8, address: 0x8013A1C8
static // total size: 0x8
struct {} pddiStack<pddiFogState>::__RTTI; // size: 0x8, address: 0x8013A1D0
static // total size: 0x8
struct {} pddiStack<pddiStencilState>::__RTTI; // size: 0x8, address: 0x8013A1D8
static // total size: 0x8
struct {} pddiStencilState::__RTTI; // size: 0x8, address: 0x8013A1E0
// total size: 0xC
struct {} pddiStencilState::__vtable; // size: 0xC, address: 0x80111F10
static // total size: 0x8
struct {} pddiFogState::__RTTI; // size: 0x8, address: 0x8013A1E8
// total size: 0xC
struct {} pddiFogState::__vtable; // size: 0xC, address: 0x80111F38
static // total size: 0x8
struct {} pddiLightingState::__RTTI; // size: 0x8, address: 0x8013A1F0
// total size: 0xC
struct {} pddiLightingState::__vtable; // size: 0xC, address: 0x80111F64
static // total size: 0x8
struct {} pddiViewState::__RTTI; // size: 0x8, address: 0x8013A1F8
// total size: 0xC
struct {} pddiViewState::__vtable; // size: 0xC, address: 0x80111F8C
static // total size: 0x8
struct {} pddiRenderState::__RTTI; // size: 0x8, address: 0x8013A200
// total size: 0xC
struct {} pddiRenderState::__vtable; // size: 0xC, address: 0x80111FB4
static // total size: 0x8
struct {} pddiExtMemRegistration::__RTTI; // size: 0x8, address: 0x8013A208
static // total size: 0x8
struct {} _pddiExtMemRegistration::__RTTI; // size: 0x8, address: 0x8013A210
// total size: 0x1C
struct {} _pddiExtMemRegistration::__vtable; // size: 0x1C, address: 0x80112010
// Range: 0x800BCF94 -> 0x800BCF9C
void _pddiExtMemRegistration::Register(class CallBack * c /* r1+0x4 */) {
    // References
    // -> static class CallBack * memCallback;
}

// Range: 0x800BCF9C -> 0x800BCFA0
void _pddiExtMemRegistration::Release() {}

// total size: 0x1C
struct {} pddiExtMemRegistration::__vtable; // size: 0x1C, address: 0x8011202C



