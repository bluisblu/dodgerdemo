/*
    Compile unit: D:\Pure3d\development\p3d\targa.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80050E00 -> 0x80051614
*/
// Range: 0x80050E00 -> 0x80050F50
static void GetTGAHeader(class tFile * f /* r30 */, struct TargaHeader * header /* r31 */) {}

// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
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
// total size: 0x4
struct __file_modes {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4
    unsigned int io_mode : 3; // offset 0x0, size 0x4
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4
    unsigned int file_kind : 3; // offset 0x0, size 0x4
    unsigned int file_orientation : 2; // offset 0x0, size 0x4
    unsigned int binary_io : 1; // offset 0x0, size 0x4
};
// total size: 0x4
struct __file_state {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4
    unsigned int free_buffer : 1; // offset 0x0, size 0x4
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
};
// total size: 0x48
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    struct __file_modes mode; // offset 0x4, size 0x4
    struct __file_state state; // offset 0x8, size 0x4
    unsigned char char_buffer; // offset 0xC, size 0x1
    unsigned char char_buffer_overflow; // offset 0xD, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xE, size 0x2
    wchar_t ungetwc_buffer[2]; // offset 0x10, size 0x4
    unsigned long position; // offset 0x14, size 0x4
    unsigned char * buffer; // offset 0x18, size 0x4
    unsigned long buffer_size; // offset 0x1C, size 0x4
    unsigned char * buffer_ptr; // offset 0x20, size 0x4
    unsigned long buffer_len; // offset 0x24, size 0x4
    unsigned long buffer_alignment; // offset 0x28, size 0x4
    unsigned long saved_buffer_len; // offset 0x2C, size 0x4
    unsigned long buffer_pos; // offset 0x30, size 0x4
    int (* position_proc)(unsigned long, unsigned long *, int, void (*)()); // offset 0x34, size 0x4
    int (* read_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x38, size 0x4
    int (* write_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x3C, size 0x4
    int (* close_proc)(unsigned long); // offset 0x40, size 0x4
    void (* idle_proc)(); // offset 0x44, size 0x4
};
// total size: 0x14
struct TargaHeader {
    // Members
    unsigned char idLength; // offset 0x0, size 0x1
    unsigned char cmapType; // offset 0x1, size 0x1
    unsigned char imageType; // offset 0x2, size 0x1
    unsigned short cmapStart; // offset 0x4, size 0x2
    unsigned short cmapLength; // offset 0x6, size 0x2
    unsigned char cmapFormat; // offset 0x8, size 0x1
    unsigned short xOrigin; // offset 0xA, size 0x2
    unsigned short yOrigin; // offset 0xC, size 0x2
    unsigned short width; // offset 0xE, size 0x2
    unsigned short height; // offset 0x10, size 0x2
    unsigned char bpp; // offset 0x12, size 0x1
    unsigned char imageDecr; // offset 0x13, size 0x1
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
enum Origin {
    TOP = 0,
    BOTTOM = 1,
};
// total size: 0x4
class Builder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x80050F50 -> 0x8005110C
static void LoadTargaCMAP(struct TargaHeader & header /* r29 */, class tFile * file /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    int nColours; // r25
    struct pddiColour palette[256]; // r1+0x14
    int i; // r24
    unsigned char b; // r1+0x8
    unsigned char g; // r1+0x8
    unsigned char r; // r1+0x8
    unsigned char * scanline; // r24
    int i; // r25
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x8005110C -> 0x80051284
static void LoadTargaTRUECOLOUR(struct TargaHeader & header /* r24 */, class tFile * file /* r25 */, class Builder * builder /* r26 */) {
    // Local variables
    unsigned int * scanline; // r30
    int i; // r31
    int i; // r29
    int count; // r28
    unsigned char * scan; // r27
}

// total size: 0x18
class tTargaHandler : public tImageHandler {
    // Functions
    void CreateImage(class tFile * file, class Builder * builder);
};
// Range: 0x80051284 -> 0x80051394
unsigned char tTargaHandler::CheckHeader(class tFile * file /* r30 */) {
    // Local variables
    struct TargaHeader header; // r1+0x10
}

// Range: 0x80051394 -> 0x80051588
// this: r3
void tTargaHandler::CreateImage(class tFile * file /* r30 */, class Builder * builder /* r31 */) {
    // Local variables
    char buf[256]; // r1+0x28
    struct TargaHeader header; // r1+0x14
}

// Range: 0x80051588 -> 0x80051590
unsigned char tTargaHandler::SaveImage() {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138290
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80138298
static // total size: 0x8
struct {} tImageHandler::__RTTI; // size: 0x8, address: 0x801382A0
static // total size: 0x8
struct {} tTargaHandler::__RTTI; // size: 0x8, address: 0x801382A8
// total size: 0x3C
struct {} tTargaHandler::__vtable; // size: 0x3C, address: 0x80102C4C
enum AllocType {
    TEMP = 0,
    PERMANENT = 1,
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
// total size: 0x18
class tImageHandler : public tFileHandler {
    // Members
protected:
    enum LoadType loadType; // offset 0x8, size 0x4
    unsigned char fullName; // offset 0xC, size 0x1
    int m_NativeX; // offset 0x10, size 0x4
    int m_NativeY; // offset 0x14, size 0x4
};
enum LoadType {
    IMAGE = 0,
    TEXTURE = 1,
    SPRITE = 2,
};
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
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



