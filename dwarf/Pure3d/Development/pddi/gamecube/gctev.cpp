/*
    Compile unit: D:\Pure3d\Development\pddi\gamecube\gctev.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B76DC -> 0x800B7880
*/
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
enum _GXTexWrapMode gcUVWrapMode[3]; // size: 0xC, address: 0x80110FF0
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
enum _GXCompare gcAlphaCompTable[8]; // size: 0x20, address: 0x80110FFC
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
struct gcBlendModeStruct gcBlendModeTable[7]; // size: 0x70, address: 0x8011101C
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
// total size: 0x8
struct TEVSetting {
    // Members
    struct gcColourBlendStruct * Colour; // offset 0x0, size 0x4
    struct gcAlphaBlendStruct * Alpha; // offset 0x4, size 0x4
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
// total size: 0x18
class gcTEVState {
    // Functions
    void SetTEV(enum _GXTevStageID stage);

    // Members
public:
    struct TEVSetting * mTEVSet; // offset 0x0, size 0x4
    enum _GXTexCoordID mTextureUVID; // offset 0x4, size 0x4
    enum _GXTexMapID mTextureMapID; // offset 0x8, size 0x4
    enum _GXChannelID mColourChannelID; // offset 0xC, size 0x4
    enum _GXTevKColorSel mKonstColourSource; // offset 0x10, size 0x4
    enum _GXTevKAlphaSel mKonstAlphaSource; // offset 0x14, size 0x4
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
// Range: 0x800B76DC -> 0x800B77D4
// this: r30
void gcTEVState::SetTEV(enum _GXTevStageID stage /* r31 */) {}

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
    // Functions
    void SetRasterizer(enum _GXChannelID channel);

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
// Range: 0x800B77D4 -> 0x800B7880
// this: r30
void gcRasterizerState::SetRasterizer(enum _GXChannelID channel /* r31 */) {}




