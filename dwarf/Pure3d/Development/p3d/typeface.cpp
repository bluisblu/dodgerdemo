/*
    Compile unit: D:\Pure3d\development\p3d\typeface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80053C80 -> 0x8005486C
*/
// Range: 0x80053C80 -> 0x80053D08
int strcmpi(char * a /* r3 */, char * b /* r4 */) {
    // Local variables
    char ca; // r5
    char cb; // r1+0x0
}

static char allChars[96]; // size: 0x60, address: 0x80102FD0
// Range: 0x80053D08 -> 0x80053D34
static int Compare(void * arg1 /* r1+0x0 */, void * arg2 /* r1+0x4 */) {
    // Local variables
    unsigned short * a; // r1+0x0
    unsigned short * b; // r1+0x0
}

// total size: 0xC
struct {} tFreeTypeHandle::__vtable; // size: 0xC, address: 0x80103178
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
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
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
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
// total size: 0x18
class tTexture : public tEntity {
    // Members
protected:
    class pddiTexture * texture; // offset 0x10, size 0x4
};
// total size: 0x18
class tShader : public tEntity {
    // Members
protected:
    class pddiShader * shader; // offset 0x10, size 0x4
};
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x0
struct FT_LibraryRec_ {};
// total size: 0x0
struct FT_DriverRec_ {};
union FT_StreamDesc_ {
    long value; // offset 0x0, size 0x4
    void * pointer; // offset 0x0, size 0x4
};
// total size: 0x28
struct FT_StreamRec_ {
    // Members
    char * base; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
    unsigned long pos; // offset 0x8, size 0x4
    union FT_StreamDesc_ descriptor; // offset 0xC, size 0x4
    union FT_StreamDesc_ pathname; // offset 0x10, size 0x4
    unsigned long (* read)(struct FT_StreamRec_ *, unsigned long, char *, unsigned long); // offset 0x14, size 0x4
    void (* close)(struct FT_StreamRec_ *); // offset 0x18, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x1C, size 0x4
    char * cursor; // offset 0x20, size 0x4
    char * limit; // offset 0x24, size 0x4
};
// total size: 0x8
struct FT_Generic_ {
    // Members
    void * data; // offset 0x0, size 0x4
    void (* finalizer)(void *); // offset 0x4, size 0x4
};
// total size: 0x20
struct FT_Glyph_Metrics_ {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int horiBearingX; // offset 0x8, size 0x4
    int horiBearingY; // offset 0xC, size 0x4
    int horiAdvance; // offset 0x10, size 0x4
    int vertBearingX; // offset 0x14, size 0x4
    int vertBearingY; // offset 0x18, size 0x4
    int vertAdvance; // offset 0x1C, size 0x4
};
enum FT_Glyph_Tag_ {
    ft_glyph_format_none = 0,
    ft_glyph_format_composite = 1668246896,
    ft_glyph_format_bitmap = 1651078259,
    ft_glyph_format_outline = 1869968492,
    ft_glyph_format_plotter = 1886154612,
};
// total size: 0x18
struct FT_Bitmap_ {
    // Members
    int rows; // offset 0x0, size 0x4
    int width; // offset 0x4, size 0x4
    int pitch; // offset 0x8, size 0x4
    void * buffer; // offset 0xC, size 0x4
    signed short num_grays; // offset 0x10, size 0x2
    char pixel_mode; // offset 0x12, size 0x1
    char palette_mode; // offset 0x13, size 0x1
    void * palette; // offset 0x14, size 0x4
};
// total size: 0x8
struct FT_Vector_ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x14
struct FT_Outline_ {
    // Members
    signed short n_contours; // offset 0x0, size 0x2
    signed short n_points; // offset 0x2, size 0x2
    struct FT_Vector_ * points; // offset 0x4, size 0x4
    char * tags; // offset 0x8, size 0x4
    signed short * contours; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
// total size: 0x10
struct FT_Matrix_ {
    // Members
    int xx; // offset 0x0, size 0x4
    int xy; // offset 0x4, size 0x4
    int yx; // offset 0x8, size 0x4
    int yy; // offset 0xC, size 0x4
};
// total size: 0x20
struct FT_SubGlyph_ {
    // Members
    int index; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    int arg1; // offset 0x8, size 0x4
    int arg2; // offset 0xC, size 0x4
    struct FT_Matrix_ transform; // offset 0x10, size 0x10
};
// total size: 0x90
struct FT_GlyphSlotRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    struct FT_GlyphSlotRec_ * next; // offset 0x4, size 0x4
    struct FT_Glyph_Metrics_ metrics; // offset 0x8, size 0x20
    struct FT_Glyph_Metrics_ metrics2; // offset 0x28, size 0x20
    enum FT_Glyph_Tag_ format; // offset 0x48, size 0x4
    struct FT_Bitmap_ bitmap; // offset 0x4C, size 0x18
    struct FT_Outline_ outline; // offset 0x64, size 0x14
    int num_subglyphs; // offset 0x78, size 0x4
    int max_subglyphs; // offset 0x7C, size 0x4
    struct FT_SubGlyph_ * subglyphs; // offset 0x80, size 0x4
    void * control_data; // offset 0x84, size 0x4
    void * control_len; // offset 0x88, size 0x4
    void * other; // offset 0x8C, size 0x4
};
// total size: 0x1C
struct FT_Size_Metrics_ {
    // Members
    unsigned short x_ppem; // offset 0x0, size 0x2
    unsigned short y_ppem; // offset 0x2, size 0x2
    int x_scale; // offset 0x4, size 0x4
    int y_scale; // offset 0x8, size 0x4
    int ascender; // offset 0xC, size 0x4
    int descender; // offset 0x10, size 0x4
    int height; // offset 0x14, size 0x4
    int max_advance; // offset 0x18, size 0x4
};
// total size: 0x28
struct FT_SizeRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    struct FT_Generic_ generic; // offset 0x4, size 0x8
    struct FT_Size_Metrics_ metrics; // offset 0xC, size 0x1C
};
enum FT_Encoding_ {
    ft_encoding_none = 0,
    ft_encoding_symbol = 0,
    ft_encoding_unicode = 1970170211,
    ft_encoding_latin_2 = 1818326066,
    ft_encoding_sjis = 1936353651,
    ft_encoding_big5 = 1651074869,
    ft_encoding_adobe_standard = 1633972066,
    ft_encoding_adobe_expert = 1633968741,
    ft_encoding_adobe_custom = 1633968739,
    ft_encoding_apple_roman = 1634889070,
};
// total size: 0xC
struct FT_CharMapRec_ {
    // Members
    struct FT_FaceRec_ * face; // offset 0x0, size 0x4
    enum FT_Encoding_ encoding; // offset 0x4, size 0x4
    unsigned short platform_id; // offset 0x8, size 0x2
    unsigned short encoding_id; // offset 0xA, size 0x2
};
// total size: 0xC
struct FT_ListNodeRec_ {
    // Members
    struct FT_ListNodeRec_ * prev; // offset 0x0, size 0x4
    struct FT_ListNodeRec_ * next; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x8
struct FT_ListRec_ {
    // Members
    struct FT_ListNodeRec_ * head; // offset 0x0, size 0x4
    struct FT_ListNodeRec_ * tail; // offset 0x4, size 0x4
};
// total size: 0x4
struct FT_Bitmap_Size_ {
    // Members
    signed short height; // offset 0x0, size 0x2
    signed short width; // offset 0x2, size 0x2
};
// total size: 0x10
struct FT_BBox_ {
    // Members
    int xMin; // offset 0x0, size 0x4
    int yMin; // offset 0x4, size 0x4
    int xMax; // offset 0x8, size 0x4
    int yMax; // offset 0xC, size 0x4
};
// total size: 0x7C
struct FT_FaceRec_ {
    // Members
    struct FT_DriverRec_ * driver; // offset 0x0, size 0x4
    struct FT_MemoryRec_ * memory; // offset 0x4, size 0x4
    struct FT_StreamRec_ * stream; // offset 0x8, size 0x4
    int num_faces; // offset 0xC, size 0x4
    int face_index; // offset 0x10, size 0x4
    struct FT_Generic_ generic; // offset 0x14, size 0x8
    struct FT_GlyphSlotRec_ * glyph; // offset 0x1C, size 0x4
    struct FT_SizeRec_ * size; // offset 0x20, size 0x4
    struct FT_CharMapRec_ * charmap; // offset 0x24, size 0x4
    int num_charmaps; // offset 0x28, size 0x4
    struct FT_CharMapRec_ * * charmaps; // offset 0x2C, size 0x4
    struct FT_ListRec_ sizes_list; // offset 0x30, size 0x8
    void * extensions; // offset 0x38, size 0x4
    int face_flags; // offset 0x3C, size 0x4
    int style_flags; // offset 0x40, size 0x4
    int num_glyphs; // offset 0x44, size 0x4
    char * family_name; // offset 0x48, size 0x4
    char * style_name; // offset 0x4C, size 0x4
    int num_fixed_sizes; // offset 0x50, size 0x4
    struct FT_Bitmap_Size_ * available_sizes; // offset 0x54, size 0x4
    struct FT_BBox_ bbox; // offset 0x58, size 0x10
    unsigned short units_per_EM; // offset 0x68, size 0x2
    signed short ascender; // offset 0x6A, size 0x2
    signed short descender; // offset 0x6C, size 0x2
    signed short height; // offset 0x6E, size 0x2
    signed short max_advance_width; // offset 0x70, size 0x2
    signed short max_advance_height; // offset 0x72, size 0x2
    signed short underline_position; // offset 0x74, size 0x2
    signed short underline_thickness; // offset 0x76, size 0x2
    unsigned short max_points; // offset 0x78, size 0x2
    signed short max_contours; // offset 0x7A, size 0x2
};
enum DataType {
    BYTE = 1,
    WORD = 2,
    DWORD = 4,
    QWORD = 8,
};
// total size: 0x18
class tFile : public tRefCounted {
    // Members
protected:
    char * fullFilename; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char * extension; // offset 0x10, size 0x4
    unsigned char endianSwap; // offset 0x14, size 0x1
};
// total size: 0x3C
class tFreeTypeHandle : public tRefCounted {
    // Functions
    ~tFreeTypeHandle();

    // Members
public:
    struct FT_LibraryRec_ * library; // offset 0x8, size 0x4
    struct FT_FaceRec_ * face; // offset 0xC, size 0x4
    struct FT_StreamRec_ fileStream; // offset 0x10, size 0x28
    class tFile * file; // offset 0x38, size 0x4
};
// Range: 0x80053D34 -> 0x80053DA0
// this: r30
tFreeTypeHandle::~tFreeTypeHandle() {
    // References
    // -> struct [anonymous] tFreeTypeHandle::__vtable;
}

// total size: 0x8
class tTypeFaceHandler : public tFileHandler {};
// Range: 0x80053DA0 -> 0x80053DFC
unsigned char tTypeFaceHandler::CheckExtension(char * ext /* r31 */) {
    // Local variables
    int len; // r1+0x8
}

enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// Range: 0x80053DFC -> 0x80053E78
enum tLoadStatus tTypeFaceHandler::Load(class tFile * file /* r30 */, class tEntityStore * store /* r31 */) {
    // Local variables
    class tTypeFace * typeFace; // r4
}

// total size: 0x10
struct {} tFreeTypeGlyphRetriever::__vtable; // size: 0x10, address: 0x801030E0
// total size: 0x18
class tBitmapGlyphRetriever {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int minGlyphWidth; // offset 0x4, size 0x4
    int maxGlyphWidth; // offset 0x8, size 0x4
    int glyphHeight; // offset 0xC, size 0x4
    int * glyphWidths; // offset 0x10, size 0x4
    class tGlyphArray * glyphs; // offset 0x14, size 0x4
};
// total size: 0x824
class tFreeTypeGlyphRetriever : public tBitmapGlyphRetriever {
    // Functions
    ~tFreeTypeGlyphRetriever();

    unsigned char GetGlyph(int i, class tImage * srcImage, int dx, int dy);

    // Members
protected:
    unsigned char bitLookUp[256][8]; // offset 0x18, size 0x800
    unsigned char antiAlias; // offset 0x818, size 0x1
    unsigned char fourBit; // offset 0x819, size 0x1
    int offset; // offset 0x81C, size 0x4
    class tFreeTypeHandle * handle; // offset 0x820, size 0x4
};
// Range: 0x80053E78 -> 0x80053F1C
// this: r30
tFreeTypeGlyphRetriever::~tFreeTypeGlyphRetriever() {
    // References
    // -> struct [anonymous] tFreeTypeGlyphRetriever::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x8013835C
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x8013836C
static // total size: 0x8
struct {} tImage::__RTTI; // size: 0x8, address: 0x8013837C
static // total size: 0x8
struct {} tImage8::__RTTI; // size: 0x8, address: 0x80138384
// Range: 0x80053F1C -> 0x80054160
// this: r27
unsigned char tFreeTypeGlyphRetriever::GetGlyph(int i /* r4 */, class tImage * srcImage /* r21 */, int dx /* r28 */, int dy /* r29 */) {
    // Local variables
    unsigned char * bitmap; // r31
    class tGlyph * currentGlyph; // r1+0x8
    class tImage8 * image; // r30
    unsigned int glyph_index; // r3
    int error; // r1+0x8
    int glyphWidth; // r23
    int glyphHeight; // r24
    int x; // r25
    int y; // r22
    int i; // r22
    int x; // r21

    // References
    // -> static struct [anonymous] tImage::__RTTI;
    // -> static struct [anonymous] tImage8::__RTTI;
}

// total size: 0xC
struct {} tTypeFace::__vtable; // size: 0xC, address: 0x80103098
// total size: 0x30
class tTypeFace : public tEntity {
    // Functions
    tTypeFace(class tFile * fontFile, int pixelSize, float qualityFactor);

    ~tTypeFace();

    void SetResolution(int pixelSize, float qualityFactor);

    void SetCharacters(char * c);

    void SetShaderTemplate(class tShader * mat);

    // Members
protected:
    int height; // offset 0x10, size 0x4
    int offset; // offset 0x14, size 0x4
    struct pddiColour foreground; // offset 0x18, size 0x4
    struct pddiColour background; // offset 0x1C, size 0x4
    unsigned short * chars; // offset 0x20, size 0x4
    int nChars; // offset 0x24, size 0x4
    class tShader * Shader; // offset 0x28, size 0x4
    class tFreeTypeHandle * handle; // offset 0x2C, size 0x4
};
// Range: 0x80054160 -> 0x80054338
// this: r1+0x8
tTypeFace::tTypeFace(class tFile * fontFile /* r29 */, int pixelSize /* r31 */, float qualityFactor /* f31 */) {
    // References
    // -> static char allChars[96];
    // -> struct [anonymous] tFreeTypeHandle::__vtable;
    // -> struct [anonymous] tTypeFace::__vtable;
}

// Range: 0x80054338 -> 0x800543DC
// this: r30
tTypeFace::~tTypeFace() {
    // References
    // -> struct [anonymous] tTypeFace::__vtable;
}

// total size: 0x14
struct FT_Open_Args_ {
    // Members
    unsigned char * memory_base; // offset 0x0, size 0x4
    int memory_size; // offset 0x4, size 0x4
    char * pathname; // offset 0x8, size 0x4
    struct FT_StreamRec_ * stream; // offset 0xC, size 0x4
    struct FT_DriverRec_ * driver; // offset 0x10, size 0x4
};
// Range: 0x800543DC -> 0x800544E0
// this: r31
void tTypeFace::SetResolution(int pixelSize /* r30 */, float qualityFactor /* f31 */) {
    // Local variables
    struct FT_Open_Args_ args; // r1+0x18
    int pointSize; // r30
    int correctHeight; // r1+0x8
}

// Range: 0x800544E0 -> 0x80054574
// this: r29
void tTypeFace::SetCharacters(char * c /* r30 */) {
    // Local variables
    int size; // r31
}

// Range: 0x80054574 -> 0x800545CC
// this: r30
void tTypeFace::SetShaderTemplate(class tShader * mat /* r31 */) {}

// total size: 0x30
class tImage32 : public tImage {};
enum pddiLockType {
    PDDI_LOCK_READONLY = 0,
    PDDI_LOCK_WRITEONLY = 1,
    PDDI_LOCK_READWRITE = 2,
};
// total size: 0xC
class pddiSurface : public pddiObject {};
// total size: 0x4
class tImageConverter {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class tFont : public tEntity {};
// total size: 0x20
class tTextureGlyph : public tGlyph {
    // Members
public:
    unsigned int originX; // offset 0x4, size 0x4
    unsigned int originY; // offset 0x8, size 0x4
    float glyphWidth; // offset 0xC, size 0x4
    float totalWidth; // offset 0x10, size 0x4
    float leftOffset; // offset 0x14, size 0x4
    float rightOffset; // offset 0x18, size 0x4
    unsigned int texture; // offset 0x1C, size 0x4
};
// total size: 0x18
class tTextureGlyphArray : public tGlyphArray {
    // Members
protected:
    float glyphHeight; // offset 0x10, size 0x4
    class tTextureGlyph * glyphs; // offset 0x14, size 0x4
};
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
// total size: 0x8
class pddiVector2 {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x40
class tTextureFont : public tFont {
    // Members
protected:
    enum p3dFontMode fontMode; // offset 0x10, size 0x4
    float nativeX; // offset 0x14, size 0x4
    float nativeY; // offset 0x18, size 0x4
    float fontSize; // offset 0x1C, size 0x4
    float lineSpacing; // offset 0x20, size 0x4
    class tTextureGlyph * missingLetter; // offset 0x24, size 0x4
    class tTextureGlyphArray * glyphs; // offset 0x28, size 0x4
    struct pddiColour colour; // offset 0x2C, size 0x4
    int nTextures; // offset 0x30, size 0x4
    class tTexture * * textures; // offset 0x34, size 0x4
    class tShader * baseShader; // offset 0x38, size 0x4
};
enum p3dFontMode {
    P3D_SCREEN_FONT = 0,
    P3D_WORLD_FONT = 1,
};
// total size: 0x10
class tBitmapFontRepacker {
    // Members
protected:
    int currGlyph; // offset 0x0, size 0x4
    int glyphBorder; // offset 0x4, size 0x4
    unsigned char * packedGlyphs; // offset 0x8, size 0x4
    class tBitmapGlyphRetriever * glyphRetriever; // offset 0xC, size 0x4
};
// total size: 0x438
class tImage8 : public tImage {
    // Members
protected:
    unsigned int palette[256]; // offset 0x30, size 0x400
    int usedColours; // offset 0x430, size 0x4
};
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
};
// total size: 0x30
class tImage : public tEntity {
    // Members
protected:
    unsigned char permanent; // offset 0x10, size 0x1
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    int depth; // offset 0x1C, size 0x4
    unsigned int key; // offset 0x20, size 0x4
    int alphaDepth; // offset 0x24, size 0x4
    unsigned char * image; // offset 0x28, size 0x4
    unsigned char hasAlpha; // offset 0x2C, size 0x1
    unsigned char keyEnabled; // offset 0x2D, size 0x1
};
// total size: 0x2
class tGlyph {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
};
// total size: 0x1C
class tImageGlyph : public tGlyph {
    // Members
public:
    unsigned int originX; // offset 0x4, size 0x4
    unsigned int originY; // offset 0x8, size 0x4
    int glyphWidth; // offset 0xC, size 0x4
    int totalWidth; // offset 0x10, size 0x4
    int leftOffset; // offset 0x14, size 0x4
    int rightOffset; // offset 0x18, size 0x4
};
enum p3dGlyphType {
    STD_GLYPH = 0,
    IMAGE_GLYPH = 1,
    TEXTURE_GLYPH = 2,
};
// total size: 0x10
class tGlyphArray : public tRefCounted {
    // Members
protected:
    enum p3dGlyphType glyphType; // offset 0x8, size 0x4
    int numGlyphs; // offset 0xC, size 0x4
};
// total size: 0x18
class tImageGlyphArray : public tGlyphArray {
    // Members
protected:
    int glyphHeight; // offset 0x10, size 0x4
    class tImageGlyph * glyphs; // offset 0x14, size 0x4
};
// total size: 0x28
class tImageFont : public tEntity {
    // Members
protected:
    int lineSpacing; // offset 0x10, size 0x4
    class tImage * glyphImage; // offset 0x14, size 0x4
    class tImageGlyph * missingLetter; // offset 0x18, size 0x4
    class tImageGlyphArray * glyphs; // offset 0x1C, size 0x4
    struct pddiColour colour; // offset 0x20, size 0x4
};
// Range: 0x800545CC -> 0x80054614
static void ft_close_stream(struct FT_StreamRec_ * stream /* r31 */) {}

// Range: 0x80054614 -> 0x80054694
static unsigned long ft_io_stream(struct FT_StreamRec_ * stream /* r27 */, unsigned long offset /* r28 */, char * buffer /* r29 */, unsigned long count /* r30 */) {
    // Local variables
    class tFile * file; // r31
}

// Range: 0x80054694 -> 0x8005469C
int FT_New_Stream() {}

// Range: 0x8005469C -> 0x8005472C
static void FileToFTStream(class tFile * * file /* r30 */, struct FT_StreamRec_ * stream /* r31 */) {}

// Range: 0x8005472C -> 0x80054760
static void * ft_alloc(struct FT_MemoryRec_ * memory /* r1+0x8 */, long size /* r4 */) {}

// Range: 0x80054760 -> 0x80054798
static void * ft_realloc(struct FT_MemoryRec_ * memory /* r1+0x8 */, long cur_size /* r1+0xC */, long new_size /* r31 */, void * block /* r6 */) {}

// Range: 0x80054798 -> 0x800547BC
static void ft_free(struct FT_MemoryRec_ * memory /* r1+0x8 */, void * block /* r4 */) {}

// total size: 0x10
struct FT_MemoryRec_ {
    // Members
    void * user; // offset 0x0, size 0x4
    void * (* alloc)(struct FT_MemoryRec_ *, long); // offset 0x4, size 0x4
    void (* free)(struct FT_MemoryRec_ *, void *); // offset 0x8, size 0x4
    void * (* realloc)(struct FT_MemoryRec_ *, long, long, void *); // offset 0xC, size 0x4
};
struct FT_MemoryRec_ mem; // size: 0x10, address: 0x80133048
// Range: 0x800547BC -> 0x800547FC
struct FT_MemoryRec_ * FT_New_Memory() {
    // Local variables
    struct FT_MemoryRec_ * memory; // r3

    // References
    // -> struct FT_MemoryRec_ mem;
}

// Range: 0x800547FC -> 0x80054834
int ft_temp_alloc(void * mem /* r31 */, int c /* r4 */) {}

// Range: 0x80054834 -> 0x8005486C
void ft_temp_free(void * mem /* r31 */) {}

static // total size: 0x8
struct {} tTypeFace::__RTTI; // size: 0x8, address: 0x8013838C
static // total size: 0x8
struct {} tBitmapGlyphRetriever::__RTTI; // size: 0x8, address: 0x80138394
static // total size: 0x8
struct {} tFreeTypeGlyphRetriever::__RTTI; // size: 0x8, address: 0x8013839C
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x801383A4
static // total size: 0x8
struct {} tTypeFaceHandler::__RTTI; // size: 0x8, address: 0x801383AC
// total size: 0x14
struct {} tTypeFaceHandler::__vtable; // size: 0x14, address: 0x80103134
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x8
class tFileHandler : public tRefCounted {};
static // total size: 0x8
struct {} tFreeTypeHandle::__RTTI; // size: 0x8, address: 0x801383B4



