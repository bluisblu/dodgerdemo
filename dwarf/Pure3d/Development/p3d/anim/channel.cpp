/*
    Compile unit: D:\Pure3d\development\p3d\anim\channel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80058B60 -> 0x8005B704
*/
static float ooTable[64]; // size: 0x100, address: 0x80103ED0
// total size: 0xC
struct {} tTimeIndex::__vtable; // size: 0xC, address: 0x80104340
// total size: 0xC
class tTimeIndex {
    // Functions
    tTimeIndex(int nKey, unsigned char temp_allocation);

    tTimeIndex(int nKey, class tTimeIndex * index, unsigned char temp_allocation);

    ~tTimeIndex();

    int FindFirstKey(int frame, int nKey);

    float FindFrameDelta(float frame, int startFrameIndex);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    unsigned short * timeIndex; // offset 0x8, size 0x4
};
// Range: 0x80058B60 -> 0x80058BC8
// this: r31
tTimeIndex::tTimeIndex(int nKey /* r1+0xC */, unsigned char temp_allocation /* r1+0x10 */) {
    // References
    // -> struct [anonymous] tTimeIndex::__vtable;
}

// Range: 0x80058BC8 -> 0x80058C98
// this: r29
tTimeIndex::tTimeIndex(int nKey /* r30 */, class tTimeIndex * index /* r31 */, unsigned char temp_allocation /* r1+0x14 */) {
    // References
    // -> struct [anonymous] tTimeIndex::__vtable;
}

// Range: 0x80058C98 -> 0x80058D14
// this: r30
tTimeIndex::~tTimeIndex() {
    // References
    // -> struct [anonymous] tTimeIndex::__vtable;
}

// Range: 0x80058D14 -> 0x80058D98
// this: r1+0x0
int tTimeIndex::FindFirstKey(int frame /* r1+0x4 */, int nKey /* r1+0x8 */) {
    // Local variables
    int left; // r6
    int right; // r7
    int current; // r8
}

// Range: 0x80058D98 -> 0x80058DF0
// this: r1+0x8
float tTimeIndex::FindFrameDelta(float frame /* r1+0xC */, int startFrameIndex /* r1+0x10 */) {
    // References
    // -> static float ooTable[64];
}

// total size: 0x10
struct {} tDynamicVectorChannel::__vtable; // size: 0x10, address: 0x80104314
// total size: 0xC
class tDynamicVectorChannel : public tVectorChannel {
    // Functions
    tDynamicVectorChannel(int n);

    // Members
protected:
    int nKey; // offset 0x4, size 0x4
    class tTimeIndex * timeIndex; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 363A1B (GlobalSubroutine)
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
struct {} tVectorChannel3DOF::__vtable; // size: 0x14, address: 0x80104300
// total size: 0xC
struct tKey3DOF {
    // Members
    float v[3]; // offset 0x0, size 0xC
};
// total size: 0x10
class tVectorChannel3DOF : public tDynamicVectorChannel {
    // Functions
    tVectorChannel3DOF(class tVectorChannel3DOF * channel);

    ~tVectorChannel3DOF();

    void SetValue(int index, int frame, struct tKey3DOF & newKey);

    void GetValue(float frame, float * v);

    // Members
protected:
    struct tKey3DOF * key; // offset 0xC, size 0x4
};
// ERROR: Failed to emit tag 36435E (GlobalSubroutine)
// ERROR: Failed to emit tag 364424 (GlobalSubroutine)
// Range: 0x8005908C -> 0x800590D8
// this: r1+0x0
void tVectorChannel3DOF::SetValue(int index /* r1+0x4 */, int frame /* r1+0x8 */, struct tKey3DOF & newKey /* r1+0xC */) {}

// Range: 0x800590D8 -> 0x80059230
// this: r30
void tVectorChannel3DOF::GetValue(float frame /* f31 */, float * v /* r31 */) {
    // Local variables
    int start; // r1+0x8

    // References
    // -> static float ooTable[64];
}

// total size: 0x10
struct {} tVectorChannel1DOF::__vtable; // size: 0x10, address: 0x801042C8
// total size: 0x4
struct tKey1DOF {
    // Members
    float v; // offset 0x0, size 0x4
};
// total size: 0x24
class tVectorChannel1DOF : public tDynamicVectorChannel {
    // Functions
    ~tVectorChannel1DOF();

    void GetValue(float frame, float * v);

    // Members
protected:
    struct tKey1DOF * key; // offset 0xC, size 0x4
    int nConstant; // offset 0x10, size 0x4
    float constant[3]; // offset 0x14, size 0xC
    int offset; // offset 0x20, size 0x4
};
// ERROR: Failed to emit tag 364B43 (GlobalSubroutine)
// Range: 0x800592D8 -> 0x80059418
// this: r30
void tVectorChannel1DOF::GetValue(float frame /* f31 */, float * v /* r31 */) {
    // Local variables
    int start; // r1+0x8
    float leftKey; // f1

    // References
    // -> static float ooTable[64];
}

// total size: 0x10
class tStaticVectorChannel : public tVectorChannel {
    // Functions
    void GetValue(float * v);

    // Members
protected:
    float value[3]; // offset 0x4, size 0xC
};
// Range: 0x80059418 -> 0x80059434
// this: r1+0x0
void tStaticVectorChannel::GetValue(float * v /* r1+0x8 */) {}

// total size: 0x18
struct {} tRotationChannel::__vtable; // size: 0x18, address: 0x80104220
// total size: 0x18
struct {} tDynamicRotationChannel::__vtable; // size: 0x18, address: 0x80104208
// total size: 0xC
class tDynamicRotationChannel : public tRotationChannel {
    // Members
protected:
    int nKey; // offset 0x4, size 0x4
    class tTimeIndex * timeIndex; // offset 0x8, size 0x4
};
// total size: 0x4
class tRotationChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
struct {} tQuaternionChannel::__vtable; // size: 0x18, address: 0x801041F0
// total size: 0x10
struct tKey4DOF {
    // Members
    float v[4]; // offset 0x0, size 0x10
};
// total size: 0x10
class tQuaternionChannel : public tDynamicRotationChannel {
    // Functions
    ~tQuaternionChannel();

    void GetEuler(float frame);

    void GetQuaternion(float frame, class Quaternion * v);

    void GetMatrix(float frame, class Matrix * v);

    void GetValue(float frame, class Quaternion * v);

    // Members
protected:
    struct tKey4DOF * key; // offset 0xC, size 0x4
};
// Range: 0x80059434 -> 0x800594EC
// this: r30
tQuaternionChannel::~tQuaternionChannel() {
    // References
    // -> struct [anonymous] tRotationChannel::__vtable;
    // -> struct [anonymous] tDynamicRotationChannel::__vtable;
    // -> struct [anonymous] tQuaternionChannel::__vtable;
}

// total size: 0x10
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// Range: 0x800594EC -> 0x8005951C
// this: r3
void tQuaternionChannel::GetEuler(float frame /* f1 */) {
    // Local variables
    class Quaternion tmp; // r1+0x54
    class Matrix m; // r1+0x14
}

// Range: 0x8005951C -> 0x8005953C
// this: r3
void tQuaternionChannel::GetQuaternion(float frame /* f1 */, class Quaternion * v /* r4 */) {}

// Range: 0x8005953C -> 0x80059578
// this: r3
void tQuaternionChannel::GetMatrix(float frame /* f1 */, class Matrix * v /* r31 */) {
    // Local variables
    class Quaternion tmp; // r1+0x14
}

// Range: 0x80059578 -> 0x800596A0
// this: r30
void tQuaternionChannel::GetValue(float frame /* f31 */, class Quaternion * v /* r31 */) {
    // Local variables
    int start; // r1+0x8
    float delta; // f1

    // References
    // -> static float ooTable[64];
}

// total size: 0x1C
struct {} tEulerChannel3DOF::__vtable; // size: 0x1C, address: 0x801041AC
// total size: 0x4
struct tKey3DOFAngle {
    // Members
    unsigned int v; // offset 0x0, size 0x4
};
// total size: 0x10
class tEulerChannel3DOF : public tDynamicRotationChannel {
    // Functions
    tEulerChannel3DOF(class tEulerChannel3DOF * channel);

    ~tEulerChannel3DOF();

    void SetValue(int index, int frame, struct tKey3DOFAngle & newKey);

    void GetEuler(float frame, class Vector * v);

    void GetQuaternion(float frame, class Quaternion * v);

    void GetMatrix(float frame, class Matrix * v);

    void GetValue(float frame, class Vector * v);

    // Members
protected:
    struct tKey3DOFAngle * key; // offset 0xC, size 0x4
};
// Range: 0x800596A0 -> 0x800597E0
// this: r1+0x8
tEulerChannel3DOF::tEulerChannel3DOF(class tEulerChannel3DOF * channel /* r31 */) {
    // References
    // -> struct [anonymous] tEulerChannel3DOF::__vtable;
    // -> struct [anonymous] tDynamicRotationChannel::__vtable;
    // -> struct [anonymous] tRotationChannel::__vtable;
}

// Range: 0x800597E0 -> 0x80059898
// this: r30
tEulerChannel3DOF::~tEulerChannel3DOF() {
    // References
    // -> struct [anonymous] tRotationChannel::__vtable;
    // -> struct [anonymous] tDynamicRotationChannel::__vtable;
    // -> struct [anonymous] tEulerChannel3DOF::__vtable;
}

// Range: 0x80059898 -> 0x800598D0
// this: r1+0x0
void tEulerChannel3DOF::SetValue(int index /* r1+0x4 */, int frame /* r1+0x8 */, struct tKey3DOFAngle & newKey /* r1+0xC */) {}

// Range: 0x800598D0 -> 0x800598F0
// this: r3
void tEulerChannel3DOF::GetEuler(float frame /* f1 */, class Vector * v /* r4 */) {}

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
// Range: 0x800598F0 -> 0x80059934
// this: r3
void tEulerChannel3DOF::GetQuaternion(float frame /* f1 */, class Quaternion * v /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x14
}

// Range: 0x80059934 -> 0x80059978
// this: r3
void tEulerChannel3DOF::GetMatrix(float frame /* f1 */, class Matrix * v /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x14
}

// Range: 0x80059978 -> 0x80059B94
// this: r30
void tEulerChannel3DOF::GetValue(float frame /* f31 */, class Vector * v /* r31 */) {
    // Local variables
    int start; // r1+0x8
    unsigned int key1; // r10
    unsigned int key2; // r11
    int a0; // r3
    int a1; // r5

    // References
    // -> static float ooTable[64];
}

// total size: 0x18
struct {} tEulerChannel1DOF::__vtable; // size: 0x18, address: 0x8010416C
// total size: 0x2
struct tKey1DOFAngle {
    // Members
    unsigned short v; // offset 0x0, size 0x2
};
// total size: 0x24
class tEulerChannel1DOF : public tDynamicRotationChannel {
    // Functions
    ~tEulerChannel1DOF();

    void GetEuler(float frame, class Vector * v);

    void GetQuaternion(float frame, class Quaternion * v);

    void GetMatrix(float frame, class Matrix * v);

    void GetValue(float frame, class Vector * v);

    // Members
protected:
    struct tKey1DOFAngle * key; // offset 0xC, size 0x4
    int nConstant; // offset 0x10, size 0x4
    float constant[3]; // offset 0x14, size 0xC
    int offset; // offset 0x20, size 0x4
};
// Range: 0x80059B94 -> 0x80059C4C
// this: r30
tEulerChannel1DOF::~tEulerChannel1DOF() {
    // References
    // -> struct [anonymous] tRotationChannel::__vtable;
    // -> struct [anonymous] tDynamicRotationChannel::__vtable;
    // -> struct [anonymous] tEulerChannel1DOF::__vtable;
}

// Range: 0x80059C4C -> 0x80059C6C
// this: r3
void tEulerChannel1DOF::GetEuler(float frame /* f1 */, class Vector * v /* r4 */) {}

// Range: 0x80059C6C -> 0x80059CB0
// this: r3
void tEulerChannel1DOF::GetQuaternion(float frame /* f1 */, class Quaternion * v /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x14
}

// Range: 0x80059CB0 -> 0x80059CF4
// this: r3
void tEulerChannel1DOF::GetMatrix(float frame /* f1 */, class Matrix * v /* r31 */) {
    // Local variables
    class Vector tmp; // r1+0x14
}

// Range: 0x80059CF4 -> 0x80059E90
// this: r30
void tEulerChannel1DOF::GetValue(float frame /* f31 */, class Vector * v /* r31 */) {
    // Local variables
    int start; // r1+0x8
    float leftKey; // f1
    float * value; // r1+0x8
    int a0; // r3

    // References
    // -> static float ooTable[64];
}

// total size: 0x14
class tStaticQuaternionChannel : public tRotationChannel {
    // Functions
    void GetEuler();

    void GetQuaternion(class Quaternion * v);

    void GetMatrix(class Matrix * v);

    // Members
protected:
    class Quaternion value; // offset 0x4, size 0x10
};
// Range: 0x80059E90 -> 0x80059EB8
// this: r3
void tStaticQuaternionChannel::GetEuler() {
    // Local variables
    class Matrix m; // r1+0x14
}

// Range: 0x80059EB8 -> 0x80059EDC
// this: r1+0x0
void tStaticQuaternionChannel::GetQuaternion(class Quaternion * v /* r1+0x8 */) {}

// Range: 0x80059EDC -> 0x80059F00
// this: r3
void tStaticQuaternionChannel::GetMatrix(class Matrix * v /* r4 */) {}

// total size: 0x10
class tStaticEulerChannel : public tRotationChannel {
    // Functions
    void GetEuler(class Vector * v);

    void GetQuaternion(class Quaternion * v);

    void GetMatrix(class Matrix * v);

    // Members
protected:
    class Vector value; // offset 0x4, size 0xC
};
// Range: 0x80059F00 -> 0x80059F1C
// this: r1+0x0
void tStaticEulerChannel::GetEuler(class Vector * v /* r1+0x8 */) {}

// Range: 0x80059F1C -> 0x80059F50
// this: r5
void tStaticEulerChannel::GetQuaternion(class Quaternion * v /* r4 */) {}

// Range: 0x80059F50 -> 0x80059F84
// this: r5
void tStaticEulerChannel::GetMatrix(class Matrix * v /* r4 */) {}

// total size: 0x18
struct {} tColourChannel::__vtable; // size: 0x18, address: 0x8010407C
// total size: 0x14
class tColourChannel {
    // Functions
    tColourChannel(int n, unsigned char temp_allocation);

    tColourChannel(class tColourChannel * channel, unsigned char temp_allocation);

    ~tColourChannel();

    void GetValue(float frame, struct pddiColour * c);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char temp_allocated; // offset 0x4, size 0x1
    int nKey; // offset 0x8, size 0x4
    class tTimeIndex * timeIndex; // offset 0xC, size 0x4
    struct pddiColour * key; // offset 0x10, size 0x4
};
// Range: 0x80059F84 -> 0x8005A0B8
// this: r31
tColourChannel::tColourChannel(int n /* r1+0xC */, unsigned char temp_allocation /* r1+0x10 */) {
    // References
    // -> struct [anonymous] tTimeIndex::__vtable;
    // -> struct [anonymous] tColourChannel::__vtable;
}

// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// Range: 0x8005A0B8 -> 0x8005A284
// this: r31
tColourChannel::tColourChannel(class tColourChannel * channel /* r30 */, unsigned char temp_allocation /* r1+0x10 */) {
    // References
    // -> struct [anonymous] tColourChannel::__vtable;
}

// Range: 0x8005A284 -> 0x8005A340
// this: r30
tColourChannel::~tColourChannel() {
    // References
    // -> struct [anonymous] tColourChannel::__vtable;
}

// Range: 0x8005A340 -> 0x8005A520
// this: r30
void tColourChannel::GetValue(float frame /* f31 */, struct pddiColour * c /* r31 */) {
    // Local variables
    int start; // r1+0x8

    // References
    // -> static float ooTable[64];
}

// total size: 0x4
class tVectorChannelLoader {
    // Functions
    class tVectorChannel * Load(class tChunkFile * f);

    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// Range: 0x8005A520 -> 0x8005A608
// this: r29
class tVectorChannel * tVectorChannelLoader::Load(class tChunkFile * f /* r30 */) {
    // Local variables
    char jointName[128]; // r1+0x18
    class tVectorChannel * v; // r31
}

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
// Range: 0x8005A608 -> 0x8005A638
unsigned char tVectorChannelLoader::HandlesChunk(unsigned int chunkID /* r1+0x4 */) {}

// total size: 0x10
struct {} tStaticVectorChannel::__vtable; // size: 0x10, address: 0x8010426C
// total size: 0x10
struct Chunk {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int dataLength; // offset 0x4, size 0x4
    unsigned int chunkLength; // offset 0x8, size 0x4
    unsigned int startPosition; // offset 0xC, size 0x4
};
// total size: 0x210
class tChunkFile {
    // Members
protected:
    struct Chunk chunkStack[32]; // offset 0x0, size 0x200
    int stackTop; // offset 0x200, size 0x4
    unsigned char oldChunkFormat; // offset 0x204, size 0x1
    class tFile * realFile; // offset 0x208, size 0x4
    unsigned int peekPos; // offset 0x20C, size 0x4
};
// ERROR: Failed to emit tag 36FC51 (GlobalSubroutine)
// total size: 0x8
class tRotationChannelLoader {
    // Functions
    class tRotationChannel * Load(class tChunkFile * f);

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int poseIndex; // offset 0x4, size 0x4
};
// Range: 0x8005A9EC -> 0x8005AAD4
// this: r29
class tRotationChannel * tRotationChannelLoader::Load(class tChunkFile * f /* r30 */) {
    // Local variables
    char jointName[128]; // r1+0x18
    class tRotationChannel * r; // r31
}

// Range: 0x8005AAD4 -> 0x8005AB04
unsigned char tRotationChannelLoader::HandlesChunk(unsigned int chunkID /* r1+0x4 */) {}

// total size: 0x18
struct {} tStaticQuaternionChannel::__vtable; // size: 0x18, address: 0x80104108
// total size: 0x18
struct {} tStaticEulerChannel::__vtable; // size: 0x18, address: 0x801040C8
// Range: 0x8005AB04 -> 0x8005B0A0
class tRotationChannel * tRotationChannelLoader::LoadChannel(class tChunkFile * f /* r31 */) {
    // Local variables
    int nKey; // r30
    unsigned short * timeIndex; // r4
    int nKey; // r30
    unsigned short * timeIndex; // r4
    int nKey; // r30
    unsigned short * timeIndex; // r4

    // References
    // -> struct [anonymous] tStaticEulerChannel::__vtable;
    // -> struct [anonymous] tRotationChannel::__vtable;
    // -> struct [anonymous] tStaticQuaternionChannel::__vtable;
    // -> struct [anonymous] tEulerChannel3DOF::__vtable;
    // -> struct [anonymous] tDynamicRotationChannel::__vtable;
    // -> struct [anonymous] tEulerChannel1DOF::__vtable;
    // -> struct [anonymous] tQuaternionChannel::__vtable;
}

// total size: 0x1
class tColourChannelLoader {};
// Range: 0x8005B0A0 -> 0x8005B1D0
class tColourChannel * tColourChannelLoader::Load(class tChunkFile * f /* r28 */, unsigned char temp_allocation /* r29 */) {
    // Local variables
    int nKey; // r31
    class tColourChannel * cc; // r29
    unsigned short * timeIndex; // r4
}

// total size: 0xC
struct {} tVisibilityChannel::__vtable; // size: 0xC, address: 0x8010403C
// total size: 0x20
class tVisibilityChannel {
    // Functions
    tVisibilityChannel();

    void SetNodeUID(unsigned long long nodeUID);

    void SetStartState(signed short sStartState);

    void SetNumFrames(unsigned int uiFrames);

    void SetFrameData(unsigned int index, unsigned int frame);

    unsigned int GetFrameData(unsigned int index);

    ~tVisibilityChannel();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned long long nodeUID; // offset 0x8, size 0x8
    unsigned char bStartState; // offset 0x10, size 0x1
    unsigned int nFrames; // offset 0x14, size 0x4
    unsigned int * frames; // offset 0x18, size 0x4
};
// Range: 0x8005B1D0 -> 0x8005B1FC
// this: r3
tVisibilityChannel::tVisibilityChannel() {
    // References
    // -> struct [anonymous] tVisibilityChannel::__vtable;
}

// Range: 0x8005B1FC -> 0x8005B208
// this: r1+0x0
void tVisibilityChannel::SetNodeUID(unsigned long long nodeUID /* r1+0x8 */) {}

// Range: 0x8005B208 -> 0x8005B224
// this: r1+0x0
void tVisibilityChannel::SetStartState(signed short sStartState /* r1+0x4 */) {}

// Range: 0x8005B224 -> 0x8005B25C
// this: r31
void tVisibilityChannel::SetNumFrames(unsigned int uiFrames /* r1+0xC */) {}

// Range: 0x8005B25C -> 0x8005B26C
// this: r1+0x0
void tVisibilityChannel::SetFrameData(unsigned int index /* r1+0x4 */, unsigned int frame /* r1+0x8 */) {}

// Range: 0x8005B26C -> 0x8005B27C
// this: r1+0x0
unsigned int tVisibilityChannel::GetFrameData(unsigned int index /* r1+0x4 */) {}

// Range: 0x8005B27C -> 0x8005B2DC
// this: r30
tVisibilityChannel::~tVisibilityChannel() {
    // References
    // -> struct [anonymous] tVisibilityChannel::__vtable;
}

// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0xC
class tEntityChannel {
    // Functions
    ~tEntityChannel();

    void GetValue(float frame, class tEntity * * e);

    // Members
public:
    int nKey; // offset 0x0, size 0x4
    class tTimeIndex * timeIndex; // offset 0x4, size 0x4
    class tEntity * * key; // offset 0x8, size 0x4
};
// Range: 0x8005B2DC -> 0x8005B3B4
// this: r28
tEntityChannel::~tEntityChannel() {
    // Local variables
    int a; // r30
}

// Range: 0x8005B3B4 -> 0x8005B414
// this: r30
void tEntityChannel::GetValue(float frame /* r1+0xC */, class tEntity * * e /* r31 */) {
    // Local variables
    int start; // r1+0x8
}

// total size: 0xC
struct {} tSafeEntityCaster<tEntity>::__vtable; // size: 0xC, address: 0x80104010
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// ERROR: Failed to emit tag 372120 (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x801385E0
static // total size: 0x8
struct {} tSafeEntityCaster<tEntity>::__RTTI; // size: 0x8, address: 0x801385E8
static // total size: 0x8
struct {} tVisibilityChannel::__RTTI; // size: 0x8, address: 0x801385F0
static // total size: 0x8
struct {} tRotationChannelLoader::__RTTI; // size: 0x8, address: 0x801385F8
// total size: 0xC
struct {} tRotationChannelLoader::__vtable; // size: 0xC, address: 0x80104060
static // total size: 0x8
struct {} tColourChannel::__RTTI; // size: 0x8, address: 0x80138600
static // total size: 0x8
struct {} tRotationChannel::__RTTI; // size: 0x8, address: 0x80138608
static // total size: 0x8
struct {} tStaticEulerChannel::__RTTI; // size: 0x8, address: 0x80138610
static // total size: 0x8
struct {} tStaticQuaternionChannel::__RTTI; // size: 0x8, address: 0x80138618
static // total size: 0x8
struct {} tDynamicRotationChannel::__RTTI; // size: 0x8, address: 0x80138620
static // total size: 0x8
struct {} tEulerChannel1DOF::__RTTI; // size: 0x8, address: 0x80138628
static // total size: 0x8
struct {} tEulerChannel3DOF::__RTTI; // size: 0x8, address: 0x80138630
static // total size: 0x8
struct {} tQuaternionChannel::__RTTI; // size: 0x8, address: 0x80138638
static // total size: 0x8
struct {} tVectorChannel::__RTTI; // size: 0x8, address: 0x80138640
static // total size: 0x8
struct {} tStaticVectorChannel::__RTTI; // size: 0x8, address: 0x80138648
static // total size: 0x8
struct {} tDynamicVectorChannel::__RTTI; // size: 0x8, address: 0x80138650
static // total size: 0x8
struct {} tVectorChannel1DOF::__RTTI; // size: 0x8, address: 0x80138658
static // total size: 0x8
struct {} tVectorChannel3DOF::__RTTI; // size: 0x8, address: 0x80138660
static // total size: 0x8
struct {} tTimeIndex::__RTTI; // size: 0x8, address: 0x80138668
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



