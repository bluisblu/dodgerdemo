/*
    Compile unit: D:\Pure3d\development\pddi\gamecube\simpleshader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B94DC -> 0x800B9FC8
*/
enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
    GX_CC_TEXRRR = 16,
    GX_CC_TEXGGG = 17,
    GX_CC_TEXBBB = 18,
    GX_CC_QUARTER = 14,
};
enum _GXTevOp {
    GX_TEV_ADD = 0,
    GX_TEV_SUB = 1,
    GX_TEV_COMP_R8_GT = 8,
    GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10,
    GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_BGR24_GT = 12,
    GX_TEV_COMP_BGR24_EQ = 13,
    GX_TEV_COMP_RGB8_GT = 14,
    GX_TEV_COMP_RGB8_EQ = 15,
    GX_TEV_COMP_A8_GT = 14,
    GX_TEV_COMP_A8_EQ = 15,
};
enum _GXTevScale {
    GX_CS_SCALE_1 = 0,
    GX_CS_SCALE_2 = 1,
    GX_CS_SCALE_4 = 2,
    GX_CS_DIVIDE_2 = 3,
    GX_MAX_TEVSCALE = 4,
};
// total size: 0x18
struct gcColourBlendStruct {
    // Members
    enum _GXTevColorArg RegA; // offset 0x0, size 0x4
    enum _GXTevColorArg RegB; // offset 0x4, size 0x4
    enum _GXTevColorArg RegC; // offset 0x8, size 0x4
    enum _GXTevColorArg RegD; // offset 0xC, size 0x4
    enum _GXTevOp Op; // offset 0x10, size 0x4
    enum _GXTevScale Scale; // offset 0x14, size 0x4
};
static struct gcColourBlendStruct UntexturedColourBlendTable; // size: 0x18, address: 0x80111290
enum _GXTevAlphaArg {
    GX_CA_APREV = 0,
    GX_CA_A0 = 1,
    GX_CA_A1 = 2,
    GX_CA_A2 = 3,
    GX_CA_TEXA = 4,
    GX_CA_RASA = 5,
    GX_CA_KONST = 6,
    GX_CA_ZERO = 7,
    GX_CA_ONE = 6,
};
// total size: 0x18
struct gcAlphaBlendStruct {
    // Members
    enum _GXTevAlphaArg RegA; // offset 0x0, size 0x4
    enum _GXTevAlphaArg RegB; // offset 0x4, size 0x4
    enum _GXTevAlphaArg RegC; // offset 0x8, size 0x4
    enum _GXTevAlphaArg RegD; // offset 0xC, size 0x4
    enum _GXTevOp Op; // offset 0x10, size 0x4
    enum _GXTevScale Scale; // offset 0x14, size 0x4
};
static struct gcAlphaBlendStruct UntexturedAlphaBlendTable; // size: 0x18, address: 0x801112A8
static struct gcColourBlendStruct TexturedColourBlendTable; // size: 0x18, address: 0x801112C0
static struct gcAlphaBlendStruct TexturedAlphaBlendTable; // size: 0x18, address: 0x801112D8
static struct gcColourBlendStruct SpecularColourBlendTable; // size: 0x18, address: 0x801112F0
static struct gcAlphaBlendStruct SpecularAlphaBlendTable; // size: 0x18, address: 0x80111308
// total size: 0x8
struct TEVSetting {
    // Members
    struct gcColourBlendStruct * Colour; // offset 0x0, size 0x4
    struct gcAlphaBlendStruct * Alpha; // offset 0x4, size 0x4
};
static struct TEVSetting TEVSet[4]; // size: 0x20, address: 0x80111320
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
struct pddiShadeColourTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, struct pddiColour); // offset 0x4, size 0x4
};
struct pddiShadeColourTable gColourTable[5]; // size: 0x50, address: 0x80111370
struct pddiShadeTextureTable gTextureTable[2]; // size: 0x20, address: 0x801113CC
struct pddiShadeIntTable gIntTable[8]; // size: 0x80, address: 0x80111440
struct pddiShadeFloatTable gFloatTable[2]; // size: 0x20, address: 0x801114CC
// total size: 0x34
struct {} pddiShader::__vtable; // size: 0x34, address: 0x801115BC
// total size: 0x5C
struct {} pddiBaseShader::__vtable; // size: 0x5C, address: 0x80112510
unsigned int newUID; // size: 0x4, address: 0x8013B2D8
// total size: 0x5C
struct {} SimpleShader::__vtable; // size: 0x5C, address: 0x80111560
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
enum _GXTexMapID {
    GX_TEXMAP0 = 0,
    GX_TEXMAP1 = 1,
    GX_TEXMAP2 = 2,
    GX_TEXMAP3 = 3,
    GX_TEXMAP4 = 4,
    GX_TEXMAP5 = 5,
    GX_TEXMAP6 = 6,
    GX_TEXMAP7 = 7,
    GX_MAX_TEXMAP = 8,
    GX_TEXMAP_NULL = 255,
    GX_TEX_DISABLE = 256,
};
// total size: 0xBC
class gcTexture : public pddiTexture {
    // Members
protected:
    class gcContext * mContext; // offset 0xC, size 0x4
    struct _GXTexObj mTexture; // offset 0x10, size 0x20
    struct _GXTlutObj * mPalette; // offset 0x30, size 0x4
    unsigned short * mPalEntries; // offset 0x34, size 0x4
    int mPalEntryCount; // offset 0x38, size 0x4
    int mWidth; // offset 0x3C, size 0x4
    int mHeight; // offset 0x40, size 0x4
    int mBitsPerPixel; // offset 0x44, size 0x4
    int mAlphaDepth; // offset 0x48, size 0x4
    enum pddiTextureType mType; // offset 0x4C, size 0x4
    enum pddiPixelFormat mFormat; // offset 0x50, size 0x4
    enum _GXTexFmt mGXTexFormat; // offset 0x54, size 0x4
    enum _GXTexWrapMode mClampMode; // offset 0x58, size 0x4
    int mMipMapLevels; // offset 0x5C, size 0x4
    int mPriority; // offset 0x60, size 0x4
    struct pddiLockInfo mLock; // offset 0x64, size 0x50
    unsigned char mSwizzleEnable; // offset 0xB4, size 0x1
    char * * mBits; // offset 0xB8, size 0x4
};
enum pddiShadeMode {
    PDDI_SHADE_FLAT = 0,
    PDDI_SHADE_GOURAUD = 1,
};
enum pddiUVMode {
    PDDI_UV_TILE = 0,
    PDDI_UV_CLAMP = 1,
};
enum pddiFilterMode {
    PDDI_FILTER_NONE = 0,
    PDDI_FILTER_BILINEAR = 1,
    PDDI_FILTER_MIPMAP = 2,
    PDDI_FILTER_MIPMAP_BILINEAR = 3,
    PDDI_FILTER_MIPMAP_TRILINEAR = 4,
};
enum pddiTextureGen {
    PDDI_TEXGEN_NONE = 0,
    PDDI_TEXGEN_ENVMAP = 1,
    PDDI_TEXGEN_SPHEREMAP = 2,
};
enum pddiBlendMode {
    PDDI_BLEND_NONE = 0,
    PDDI_BLEND_ALPHA = 1,
    PDDI_BLEND_ADD = 2,
    PDDI_BLEND_SUBTRACT = 3,
    PDDI_BLEND_MODULATE = 4,
    PDDI_BLEND_MODULATE2 = 5,
    PDDI_BLEND_ADDMODULATEALPHA = 6,
};
enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
enum _GXChannelID {
    GX_COLOR0 = 0,
    GX_COLOR1 = 1,
    GX_ALPHA0 = 2,
    GX_ALPHA1 = 3,
    GX_COLOR0A0 = 4,
    GX_COLOR1A1 = 5,
    GX_COLOR_ZERO = 6,
    GX_ALPHA_BUMP = 7,
    GX_ALPHA_BUMPN = 8,
    GX_COLOR_NULL = 255,
};
enum _GXTevKColorSel {
    GX_TEV_KCSEL_1 = 0,
    GX_TEV_KCSEL_7_8 = 1,
    GX_TEV_KCSEL_3_4 = 2,
    GX_TEV_KCSEL_5_8 = 3,
    GX_TEV_KCSEL_1_2 = 4,
    GX_TEV_KCSEL_3_8 = 5,
    GX_TEV_KCSEL_1_4 = 6,
    GX_TEV_KCSEL_1_8 = 7,
    GX_TEV_KCSEL_K0 = 12,
    GX_TEV_KCSEL_K1 = 13,
    GX_TEV_KCSEL_K2 = 14,
    GX_TEV_KCSEL_K3 = 15,
    GX_TEV_KCSEL_K0_R = 16,
    GX_TEV_KCSEL_K1_R = 17,
    GX_TEV_KCSEL_K2_R = 18,
    GX_TEV_KCSEL_K3_R = 19,
    GX_TEV_KCSEL_K0_G = 20,
    GX_TEV_KCSEL_K1_G = 21,
    GX_TEV_KCSEL_K2_G = 22,
    GX_TEV_KCSEL_K3_G = 23,
    GX_TEV_KCSEL_K0_B = 24,
    GX_TEV_KCSEL_K1_B = 25,
    GX_TEV_KCSEL_K2_B = 26,
    GX_TEV_KCSEL_K3_B = 27,
    GX_TEV_KCSEL_K0_A = 28,
    GX_TEV_KCSEL_K1_A = 29,
    GX_TEV_KCSEL_K2_A = 30,
    GX_TEV_KCSEL_K3_A = 31,
};
enum _GXTevKAlphaSel {
    GX_TEV_KASEL_1 = 0,
    GX_TEV_KASEL_7_8 = 1,
    GX_TEV_KASEL_3_4 = 2,
    GX_TEV_KASEL_5_8 = 3,
    GX_TEV_KASEL_1_2 = 4,
    GX_TEV_KASEL_3_8 = 5,
    GX_TEV_KASEL_1_4 = 6,
    GX_TEV_KASEL_1_8 = 7,
    GX_TEV_KASEL_K0_R = 16,
    GX_TEV_KASEL_K1_R = 17,
    GX_TEV_KASEL_K2_R = 18,
    GX_TEV_KASEL_K3_R = 19,
    GX_TEV_KASEL_K0_G = 20,
    GX_TEV_KASEL_K1_G = 21,
    GX_TEV_KASEL_K2_G = 22,
    GX_TEV_KASEL_K3_G = 23,
    GX_TEV_KASEL_K0_B = 24,
    GX_TEV_KASEL_K1_B = 25,
    GX_TEV_KASEL_K2_B = 26,
    GX_TEV_KASEL_K3_B = 27,
    GX_TEV_KASEL_K0_A = 28,
    GX_TEV_KASEL_K1_A = 29,
    GX_TEV_KASEL_K2_A = 30,
    GX_TEV_KASEL_K3_A = 31,
};
enum _GXTevStageID {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
    GX_MAX_TEVSTAGE = 16,
};
// total size: 0x18
class gcTEVState {
    // Members
public:
    struct TEVSetting * mTEVSet; // offset 0x0, size 0x4
    enum _GXTexCoordID mTextureUVID; // offset 0x4, size 0x4
    enum _GXTexMapID mTextureMapID; // offset 0x8, size 0x4
    enum _GXChannelID mColourChannelID; // offset 0xC, size 0x4
    enum _GXTevKColorSel mKonstColourSource; // offset 0x10, size 0x4
    enum _GXTevKAlphaSel mKonstAlphaSource; // offset 0x14, size 0x4
};
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
enum _GXAttnFn {
    GX_AF_SPEC = 0,
    GX_AF_SPOT = 1,
    GX_AF_NONE = 2,
};
enum _GXLightID {
    GX_LIGHT0 = 1,
    GX_LIGHT1 = 2,
    GX_LIGHT2 = 4,
    GX_LIGHT3 = 8,
    GX_LIGHT4 = 16,
    GX_LIGHT5 = 32,
    GX_LIGHT6 = 64,
    GX_LIGHT7 = 128,
    GX_MAX_LIGHT = 256,
    GX_LIGHT_NULL = 0,
};
enum _GXColorSrc {
    GX_SRC_REG = 0,
    GX_SRC_VTX = 1,
};
// total size: 0x1C
class gcRasterizerState {
    // Members
public:
    unsigned char mEnableLights; // offset 0x0, size 0x1
    struct _GXColor mAmbient; // offset 0x1, size 0x4
    struct _GXColor mMaterial; // offset 0x5, size 0x4
    enum _GXAttnFn mAttenuation; // offset 0xC, size 0x4
    enum _GXLightID mLightMask; // offset 0x10, size 0x4
    enum _GXColorSrc mAmbientSource; // offset 0x14, size 0x4
    enum _GXColorSrc mMaterialSource; // offset 0x18, size 0x4
};
// total size: 0xD0
class SimpleShader : public pddiBaseShader {
    // Functions
    SimpleShader(class gcContext * c);

    ~SimpleShader();

    void SetPass(int pass);

    void SetTexture(class pddiTexture * t);

    void SetUVMode(int mode);

    void SetFilterMode(int mode);

    void SetShadeMode(int shade);

    void EnableLighting(int b);

    void SetAmbient(struct pddiColour & a);

    void SetDiffuse(struct pddiColour & colour);

    void SetSpecular(struct pddiColour & c);

    void SetEmissive(struct pddiColour & c);

    void SetShininess(float power);

    void SetBlendMode(int mode);

    void EnableAlphaTest(int b);

    void SetAlphaCompare(int compare);

    void SetDevPass();

    void Rebuild();

    // Static members
    static struct pddiShadeFloatTable gFloatTable[2]; // size: 0x20
    static struct pddiShadeIntTable gIntTable[8]; // size: 0x80
    static struct pddiShadeTextureTable gTextureTable[2]; // size: 0x20
    static struct pddiShadeColourTable gColourTable[5]; // size: 0x50

    // Members
    class gcContext * mContext; // offset 0x10, size 0x4
    unsigned char mDirty; // offset 0x14, size 0x1
    class gcTexture * mTexture; // offset 0x18, size 0x4
    enum pddiShadeMode mShadeMode; // offset 0x1C, size 0x4
    enum pddiUVMode mUVMode; // offset 0x20, size 0x4
    enum pddiFilterMode mFilterMode; // offset 0x24, size 0x4
    enum pddiTextureGen mTexGen; // offset 0x28, size 0x4
    struct pddiColour mAmbient; // offset 0x2C, size 0x4
    struct pddiColour mDiffuse; // offset 0x30, size 0x4
    struct pddiColour mEmissive; // offset 0x34, size 0x4
    struct pddiColour mSpecular; // offset 0x38, size 0x4
    float mShininess; // offset 0x3C, size 0x4
    unsigned char mIsLit; // offset 0x40, size 0x1
    unsigned char mIsSpecular; // offset 0x41, size 0x1
    unsigned char mAlphaTest; // offset 0x42, size 0x1
    enum pddiBlendMode mAlphaBlendMode; // offset 0x44, size 0x4
    enum pddiCompareMode mAlphaCompareMode; // offset 0x48, size 0x4
    class gcTEVState mTEVStates[2]; // offset 0x4C, size 0x30
    class gcRasterizerState mRasStates[3]; // offset 0x7C, size 0x54
};
// Range: 0x800B94DC -> 0x800B95B8
// this: r30
SimpleShader::SimpleShader(class gcContext * c /* r31 */) {
    // References
    // -> struct [anonymous] SimpleShader::__vtable;
    // -> unsigned int newUID;
    // -> struct [anonymous] pddiBaseShader::__vtable;
    // -> struct [anonymous] pddiShader::__vtable;
}

class pddiBaseShader * lastShader; // size: 0x4, address: 0x8013B2DC
// total size: 0x10
struct pddiShadeFloatTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, float); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeIntTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, int); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeTextureTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiTexture *); // offset 0x4, size 0x4
};
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
enum pddiLightType {
    PDDI_LIGHT_DIRECTIONAL = 0,
    PDDI_LIGHT_POINT = 1,
    PDDI_LIGHT_SPOT = 2,
};
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
class pddiStack {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int depth; // offset 0x4, size 0x4
    int top; // offset 0x8, size 0x4
    class pddiMatrix * stack; // offset 0xC, size 0x4
};
// total size: 0x10
class pddiMatrixStack : public pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x0
class pddiStack {};
// total size: 0x4
class pddiState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum pddiProjectionMode {
    PDDI_PROJECTION_PERSPECTIVE = 0,
    PDDI_PROJECTION_ORTHOGRAPHIC = 1,
    PDDI_PROJECTION_DEVICE = 2,
};
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
// total size: 0x20
class pddiRenderState : public pddiState {
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
    // Members
public:
    struct pddiColour ambient; // offset 0x4, size 0x4
    int padd; // offset 0x8, size 0x4
    class pddiLight light[4]; // offset 0xC, size 0x180
};
// total size: 0x14
class pddiFogState : public pddiState {
    // Members
public:
    unsigned char enabled; // offset 0x4, size 0x1
    struct pddiColour colour; // offset 0x8, size 0x4
    float start; // offset 0xC, size 0x4
    float end; // offset 0x10, size 0x4
};
// total size: 0x24
class pddiStencilState : public pddiState {
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
enum pddiMatrixType {
    PDDI_MATRIX_MODELVIEW = 0,
    PDDI_MATRIX_TEXTURE0 = 1,
    PDDI_MATRIX_TEXTURE1 = 2,
    PDDI_MATRIX_TEXTURE2 = 3,
    PDDI_MATRIX_TEXTURE3 = 4,
};
// total size: 0x104
class pddiBaseContext : public pddiRenderContext {
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
// total size: 0x0
class gcDevice {};
// total size: 0x0
class gcDisplay {};
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
enum _GXPerf0 {
    GX_PERF0_VERTICES = 0,
    GX_PERF0_CLIP_VTX = 1,
    GX_PERF0_CLIP_CLKS = 2,
    GX_PERF0_XF_WAIT_IN = 3,
    GX_PERF0_XF_WAIT_OUT = 4,
    GX_PERF0_XF_XFRM_CLKS = 5,
    GX_PERF0_XF_LIT_CLKS = 6,
    GX_PERF0_XF_BOT_CLKS = 7,
    GX_PERF0_XF_REGLD_CLKS = 8,
    GX_PERF0_XF_REGRD_CLKS = 9,
    GX_PERF0_CLIP_RATIO = 10,
    GX_PERF0_TRIANGLES = 11,
    GX_PERF0_TRIANGLES_CULLED = 12,
    GX_PERF0_TRIANGLES_PASSED = 13,
    GX_PERF0_TRIANGLES_SCISSORED = 14,
    GX_PERF0_TRIANGLES_0TEX = 15,
    GX_PERF0_TRIANGLES_1TEX = 16,
    GX_PERF0_TRIANGLES_2TEX = 17,
    GX_PERF0_TRIANGLES_3TEX = 18,
    GX_PERF0_TRIANGLES_4TEX = 19,
    GX_PERF0_TRIANGLES_5TEX = 20,
    GX_PERF0_TRIANGLES_6TEX = 21,
    GX_PERF0_TRIANGLES_7TEX = 22,
    GX_PERF0_TRIANGLES_8TEX = 23,
    GX_PERF0_TRIANGLES_0CLR = 24,
    GX_PERF0_TRIANGLES_1CLR = 25,
    GX_PERF0_TRIANGLES_2CLR = 26,
    GX_PERF0_QUAD_0CVG = 27,
    GX_PERF0_QUAD_NON0CVG = 28,
    GX_PERF0_QUAD_1CVG = 29,
    GX_PERF0_QUAD_2CVG = 30,
    GX_PERF0_QUAD_3CVG = 31,
    GX_PERF0_QUAD_4CVG = 32,
    GX_PERF0_AVG_QUAD_CNT = 33,
    GX_PERF0_CLOCKS = 34,
    GX_PERF0_NONE = 35,
};
enum _GXPerf1 {
    GX_PERF1_TEXELS = 0,
    GX_PERF1_TX_IDLE = 1,
    GX_PERF1_TX_REGS = 2,
    GX_PERF1_TX_MEMSTALL = 3,
    GX_PERF1_TC_CHECK1_2 = 4,
    GX_PERF1_TC_CHECK3_4 = 5,
    GX_PERF1_TC_CHECK5_6 = 6,
    GX_PERF1_TC_CHECK7_8 = 7,
    GX_PERF1_TC_MISS = 8,
    GX_PERF1_VC_ELEMQ_FULL = 9,
    GX_PERF1_VC_MISSQ_FULL = 10,
    GX_PERF1_VC_MEMREQ_FULL = 11,
    GX_PERF1_VC_STATUS7 = 12,
    GX_PERF1_VC_MISSREP_FULL = 13,
    GX_PERF1_VC_STREAMBUF_LOW = 14,
    GX_PERF1_VC_ALL_STALLS = 15,
    GX_PERF1_VERTICES = 16,
    GX_PERF1_FIFO_REQ = 17,
    GX_PERF1_CALL_REQ = 18,
    GX_PERF1_VC_MISS_REQ = 19,
    GX_PERF1_CP_ALL_REQ = 20,
    GX_PERF1_CLOCKS = 21,
    GX_PERF1_NONE = 22,
};
// total size: 0x10
struct Stats {
    // Members
    enum _GXPerf0 metric0; // offset 0x0, size 0x4
    unsigned long * var0; // offset 0x4, size 0x4
    enum _GXPerf1 metric1; // offset 0x8, size 0x4
    unsigned long * var1; // offset 0xC, size 0x4
};
// total size: 0x498
class gcContext : public pddiBaseContext {
    // Members
protected:
    class gcDevice * mDevice; // offset 0x104, size 0x4
    class gcDisplay * mDisplay; // offset 0x108, size 0x4
    struct _GXLightObj mHWLights[8]; // offset 0x10C, size 0x200
    long long mTimerStart; // offset 0x310, size 0x8
    int mStatPass; // offset 0x318, size 0x4
    unsigned long mPerfClippedVertices; // offset 0x31C, size 0x4
    unsigned long mPerfClippedVertexClocks; // offset 0x320, size 0x4
    unsigned long mPerfTransformClipRatio; // offset 0x324, size 0x4
    unsigned long mPerfTransformWaitInputClocks; // offset 0x328, size 0x4
    unsigned long mPerfTransformWaitOutputClocks; // offset 0x32C, size 0x4
    unsigned long mPerfTransformClocks; // offset 0x330, size 0x4
    unsigned long mPerfTransformLightingClocks; // offset 0x334, size 0x4
    unsigned long mPerfTransformWaitBottomClocks; // offset 0x338, size 0x4
    unsigned long mPerfTransformRegisterLoadClocks; // offset 0x33C, size 0x4
    unsigned long mPerfTransformRegisterReadClocks; // offset 0x340, size 0x4
    unsigned long mPerfTrianglesCulled; // offset 0x344, size 0x4
    unsigned long mPerfTrianglesPassed; // offset 0x348, size 0x4
    unsigned long mPerfTrianglesScissored; // offset 0x34C, size 0x4
    unsigned long mPerfPerf0Clocks; // offset 0x350, size 0x4
    unsigned long mPerfTexelsProcesed; // offset 0x354, size 0x4
    unsigned long mPerfTextureIdleClocks; // offset 0x358, size 0x4
    unsigned long mPerfTextureRegisterLoad; // offset 0x35C, size 0x4
    unsigned long mPerfTextureMainMemStallClocks; // offset 0x360, size 0x4
    unsigned long mPerfTextureCacheHit12; // offset 0x364, size 0x4
    unsigned long mPerfTextureCacheHit34; // offset 0x368, size 0x4
    unsigned long mPerfTextureCacheHit56; // offset 0x36C, size 0x4
    unsigned long mPerfTextureCacheHit78; // offset 0x370, size 0x4
    unsigned long mPerfTextureCacheMiss; // offset 0x374, size 0x4
    unsigned long mPerfVertexCacheStalls; // offset 0x378, size 0x4
    unsigned long mPerfVertexCount; // offset 0x37C, size 0x4
    unsigned long mPerfIndexedVertexCahceMisses; // offset 0x380, size 0x4
    unsigned long mPerfGXTotalBytesRead; // offset 0x384, size 0x4
    unsigned long mPerfPerf1Clocks; // offset 0x388, size 0x4
    unsigned long mPerfVCacheCheck; // offset 0x38C, size 0x4
    unsigned long mPerfVCacheMiss; // offset 0x390, size 0x4
    unsigned long mPerfVCacheStallClocks; // offset 0x394, size 0x4
    unsigned long mPerfTopPixelsIn; // offset 0x398, size 0x4
    unsigned long mPerfTopPixelsOut; // offset 0x39C, size 0x4
    unsigned long mPerfBottomPixelsIn; // offset 0x3A0, size 0x4
    unsigned long mPerfBottomPixelsOut; // offset 0x3A4, size 0x4
    unsigned long mPerfRasterisedPixels; // offset 0x3A8, size 0x4
    unsigned long mPerfPixelCopyClocks; // offset 0x3AC, size 0x4
    struct Stats mStatPasses[14]; // offset 0x3B0, size 0xE0
    long long mBeginFrameTime; // offset 0x490, size 0x8
};
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
// total size: 0x10
class pddiBaseShader : public pddiShader {
    // Static members
    static unsigned int newUID; // size: 0x4
    static unsigned int currentUID; // size: 0x4
    static class pddiBaseShader * lastShader; // size: 0x4

    // Members
protected:
    unsigned int uid; // offset 0xC, size 0x4
};
// total size: 0xC
class pddiObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int refCount; // offset 0x4, size 0x4
    int lastError; // offset 0x8, size 0x4
};
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
class pddiShader : public pddiObject {};
// Range: 0x800B95B8 -> 0x800B9674
// this: r30
SimpleShader::~SimpleShader() {
    // References
    // -> struct [anonymous] pddiShader::__vtable;
    // -> class pddiBaseShader * lastShader;
    // -> struct [anonymous] pddiBaseShader::__vtable;
    // -> struct [anonymous] SimpleShader::__vtable;
}

// Range: 0x800B9674 -> 0x800B96A4
void SimpleShader::Install() {}

// Range: 0x800B96A4 -> 0x800B96F4
class pddiBaseShader * SimpleShader::Allocate(class pddiRenderContext * c /* r31 */) {}

static char simple$118[7]; // size: 0x7, address: 0x8013A120
// Range: 0x800B96F4 -> 0x800B96FC
char * SimpleShader::GetType() {
    // References
    // -> static char simple$118[7];
}

// Range: 0x800B96FC -> 0x800B9704
int SimpleShader::GetPasses() {}

// Range: 0x800B9704 -> 0x800B9724
// this: r3
void SimpleShader::SetPass(int pass /* r4 */) {}

// Range: 0x800B9724 -> 0x800B97A8
// this: r30
void SimpleShader::SetTexture(class pddiTexture * t /* r31 */) {}

// Range: 0x800B97A8 -> 0x800B97B8
// this: r1+0x0
void SimpleShader::SetUVMode(int mode /* r1+0x4 */) {}

// Range: 0x800B97B8 -> 0x800B97C8
// this: r1+0x0
void SimpleShader::SetFilterMode(int mode /* r1+0x4 */) {}

// Range: 0x800B97C8 -> 0x800B97D8
// this: r1+0x0
void SimpleShader::SetShadeMode(int shade /* r1+0x4 */) {}

// Range: 0x800B97D8 -> 0x800B97F4
// this: r1+0x0
void SimpleShader::EnableLighting(int b /* r1+0x4 */) {}

// Range: 0x800B97F4 -> 0x800B9808
// this: r1+0x0
void SimpleShader::SetAmbient(struct pddiColour & a /* r1+0x4 */) {}

// Range: 0x800B9808 -> 0x800B981C
// this: r1+0x0
void SimpleShader::SetDiffuse(struct pddiColour & colour /* r1+0x4 */) {}

// Range: 0x800B981C -> 0x800B9830
// this: r1+0x0
void SimpleShader::SetSpecular(struct pddiColour & c /* r1+0x4 */) {}

// Range: 0x800B9830 -> 0x800B9844
// this: r1+0x0
void SimpleShader::SetEmissive(struct pddiColour & c /* r1+0x4 */) {}

// Range: 0x800B9844 -> 0x800B9854
// this: r1+0x0
void SimpleShader::SetShininess(float power /* r1+0x4 */) {}

// Range: 0x800B9854 -> 0x800B9864
// this: r1+0x0
void SimpleShader::SetBlendMode(int mode /* r1+0x4 */) {}

// Range: 0x800B9864 -> 0x800B9880
// this: r1+0x0
void SimpleShader::EnableAlphaTest(int b /* r1+0x4 */) {}

// Range: 0x800B9880 -> 0x800B9890
// this: r1+0x0
void SimpleShader::SetAlphaCompare(int compare /* r1+0x4 */) {}

enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
enum _GXCompare gcAlphaCompTable[]; // size: 0x0, address: 0x80110FFC
enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
// total size: 0x10
struct gcBlendModeStruct {
    // Members
    enum _GXBlendMode Type; // offset 0x0, size 0x4
    enum _GXBlendFactor Source; // offset 0x4, size 0x4
    enum _GXBlendFactor Dest; // offset 0x8, size 0x4
    enum _GXLogicOp Op; // offset 0xC, size 0x4
};
struct gcBlendModeStruct gcBlendModeTable[]; // size: 0x0, address: 0x8011101C
// Range: 0x800B9890 -> 0x800B9C40
// this: r31
void SimpleShader::SetDevPass() {
    // Local variables
    unsigned char aref; // r4
    int m; // r4
    int r; // r8
    int g; // r6
    int b; // r5
    int alpha; // r7
    int lightmask; // r29
    int a; // r28

    // References
    // -> struct gcBlendModeStruct gcBlendModeTable[];
    // -> enum _GXCompare gcAlphaCompTable[];
}

enum _GXTexWrapMode gcUVWrapMode[]; // size: 0x0, address: 0x80110FF0
// Range: 0x800B9C40 -> 0x800B9E20
// this: r31
void SimpleShader::Rebuild() {
    // References
    // -> enum _GXTexWrapMode gcUVWrapMode[];
    // -> static struct TEVSetting TEVSet[4];
}

static // total size: 0x8
struct {} pddiObject::__RTTI; // size: 0x8, address: 0x8013A128
static // total size: 0x8
struct {} pddiShader::__RTTI; // size: 0x8, address: 0x8013A130
static // total size: 0x8
struct {} pddiBaseShader::__RTTI; // size: 0x8, address: 0x8013A138
static // total size: 0x8
struct {} SimpleShader::__RTTI; // size: 0x8, address: 0x8013A140
// total size: 0x10
struct pddiShadeVectorTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiVector &); // offset 0x4, size 0x4
};
// total size: 0x10
struct pddiShadeMatrixTable {
    // Members
    unsigned int param; // offset 0x0, size 0x4
    void (pddiBaseShader::* func)(void *, void *, class pddiMatrix &); // offset 0x4, size 0x4
};



