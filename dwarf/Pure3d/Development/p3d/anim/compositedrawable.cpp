/*
    Compile unit: D:\Pure3d\development\p3d\anim\compositedrawable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005C38C -> 0x8005D2F0
*/
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x3C
struct {} tDrawablePose::__vtable; // size: 0x3C, address: 0x80104A68
// total size: 0x3C
struct {} tCompositeDrawable::__vtable; // size: 0x3C, address: 0x80104984
// total size: 0x10
class DisplayList {
    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
};
// total size: 0x68
class tCompositeDrawable : public tDrawablePose {
    // Functions
    tCompositeDrawable(int initialElementSize);

    ~tCompositeDrawable();

    void Display(class tPose * p);

    class DrawableElement * FindNode(unsigned long long uid);

    void ResizeDrawableElement();

    // Members
    struct tBox3D boundingBox; // offset 0x20, size 0x18
    struct tSphere boundingSphere; // offset 0x38, size 0x10
    int elementArraySize; // offset 0x48, size 0x4
    int nElements; // offset 0x4C, size 0x4
    class DrawableElement * * elements; // offset 0x50, size 0x4
    class DisplayList translucentObjects; // offset 0x54, size 0x10
};
// ERROR: Failed to emit tag 37F138 (GlobalSubroutine)
// Range: 0x8005C4B0 -> 0x8005C594
// this: r28
tCompositeDrawable::~tCompositeDrawable() {
    // Local variables
    int i; // r30

    // References
    // -> struct [anonymous] tCompositeDrawable::__vtable;
}

// total size: 0x24
struct {} tCompositeDrawable::DrawableElement::__vtable; // size: 0x24, address: 0x80104920
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xC
class DrawableElement : public DisplayListDrawable {
    // Members
protected:
    unsigned char visible; // offset 0x4, size 0x1
    unsigned char isTranslucent; // offset 0x5, size 0x1
    class tPose * pose; // offset 0x8, size 0x4
};
// Range: 0x8005C594 -> 0x8005C68C
// this: r28
void tCompositeDrawable::Display(class tPose * p /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8005C68C -> 0x8005C718
// this: r27
class DrawableElement * tCompositeDrawable::FindNode(unsigned long long uid /* r29 */) {
    // Local variables
    int i; // r30
}

// total size: 0x10
struct {} DisplayListDrawable::__vtable; // size: 0x10, address: 0x80104910
// total size: 0x24
struct {} tCompositeDrawable::DrawablePropElement::__vtable; // size: 0x24, address: 0x801048EC
// total size: 0x24
struct {} tCompositeDrawable::DrawablePoseElement::__vtable; // size: 0x24, address: 0x801048C8
// Range: 0x8005C718 -> 0x8005C7CC
// this: r30
void tCompositeDrawable::ResizeDrawableElement() {
    // Local variables
    int i; // r5
    class DrawableElement * * newElements; // r31
}

static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x801386D8
static // total size: 0x8
struct {} tCompositeDrawable::DrawableElement::__RTTI; // size: 0x8, address: 0x801386E0
static // total size: 0x8
struct {} tCompositeDrawable::DrawablePropElement::__RTTI; // size: 0x8, address: 0x801386E8
static // total size: 0x8
struct {} tCompositeDrawable::DrawablePoseElement::__RTTI; // size: 0x8, address: 0x801386F0
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x801386F8
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138700
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138710
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80138718
static // total size: 0x8
struct {} tDrawablePose::__RTTI; // size: 0x8, address: 0x80138720
// total size: 0x10
class DrawablePoseElement : public DrawableElement {
    // Functions
    void Draw(class tPose * pose);

    void SetDrawable(class tDrawable * drawable);

    void SetPose(class tPose * p);

    ~DrawablePoseElement();

    // Members
    class tDrawablePose * skin; // offset 0xC, size 0x4
};
// total size: 0x14
class DrawablePropElement : public DrawableElement {
    // Functions
    void Draw(class tPose * pose);

    void SetDrawable(class tDrawable * drawable);

    ~DrawablePropElement();

    // Members
    class tDrawable * prop; // offset 0xC, size 0x4
    int poseIndex; // offset 0x10, size 0x4
};
// Range: 0x8005C7CC -> 0x8005C888
// this: r30
void DrawablePropElement::Draw(class tPose * pose /* r31 */) {}

// Range: 0x8005C888 -> 0x8005C8E0
// this: r30
void DrawablePropElement::SetDrawable(class tDrawable * drawable /* r31 */) {}

// Range: 0x8005C8E0 -> 0x8005C95C
// this: r30
DrawablePropElement::~DrawablePropElement() {
    // References
    // -> struct [anonymous] tCompositeDrawable::DrawableElement::__vtable;
    // -> struct [anonymous] tCompositeDrawable::DrawablePropElement::__vtable;
}

// Range: 0x8005C95C -> 0x8005C98C
// this: r3
void DrawablePoseElement::Draw(class tPose * pose /* r4 */) {}

// Range: 0x8005C98C -> 0x8005CA00
// this: r30
void DrawablePoseElement::SetDrawable(class tDrawable * drawable /* r4 */) {
    // Local variables
    class tDrawablePose * newSkin; // r1+0x8

    // References
    // -> static struct [anonymous] tDrawable::__RTTI;
    // -> static struct [anonymous] tDrawablePose::__RTTI;
}

// Range: 0x8005CA00 -> 0x8005CA34
// this: r3
void DrawablePoseElement::SetPose(class tPose * p /* r4 */) {}

// Range: 0x8005CA34 -> 0x8005CAB0
// this: r30
DrawablePoseElement::~DrawablePoseElement() {
    // References
    // -> struct [anonymous] tCompositeDrawable::DrawableElement::__vtable;
    // -> struct [anonymous] tCompositeDrawable::DrawablePoseElement::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tCompositeDrawableLoader::__vtable; // size: 0x1C, address: 0x80104898
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tCompositeDrawableLoader : public tSimpleChunkHandler {
    // Functions
    tCompositeDrawableLoader();
};
// ERROR: Failed to emit tag 382267 (GlobalSubroutine)
enum tLoadStatus {
    LOAD_OK = 0,
    LOAD_SKIP = 1,
    LOAD_ERROR = 2,
};
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
// total size: 0x4
class tSafeEntityCasterBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class tEntityStore : public tRefCounted {};
// total size: 0x10
class tChunkHandler : public tEntity {};
// total size: 0xC
struct {} tSafeEntityCaster<tDrawablePose>::__vtable; // size: 0xC, address: 0x801047B4
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x10
class Vector4 : public Vector {
    // Members
public:
    float w; // offset 0xC, size 0x4
};
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
// ERROR: Failed to emit tag 385E45 (GlobalSubroutine)
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
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80138728
static // total size: 0x8
struct {} tSafeEntityCaster<tDrawablePose>::__RTTI; // size: 0x8, address: 0x80138730
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138738
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138740
static // total size: 0x8
struct {} tCompositeDrawableLoader::__RTTI; // size: 0x8, address: 0x80138748
static // total size: 0x8
struct {} tCompositeDrawable::__RTTI; // size: 0x8, address: 0x80138750
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
};
// total size: 0xC
class Vector {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
struct tSphere {
    // Members
    class Vector centre; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
enum Axis {
    AXIS_X = 1,
    AXIS_Y = 2,
    AXIS_Z = 4,
};
// total size: 0x108
class Joint {
    // Members
public:
    unsigned long long uid; // offset 0x0, size 0x8
    int parentIndex; // offset 0x8, size 0x4
    int dof; // offset 0xC, size 0x4
    class Matrix restPose; // offset 0x10, size 0x40
    class Matrix worldMatrix; // offset 0x50, size 0x40
    class Matrix inverseWorldMatrix; // offset 0x90, size 0x40
    enum Axis freeAxes; // offset 0xD0, size 0x4
    enum Axis primaryAxis; // offset 0xD4, size 0x4
    enum Axis secondaryAxis; // offset 0xD8, size 0x4
    enum Axis twistAxis; // offset 0xDC, size 0x4
    long mappedJointIndex; // offset 0xE0, size 0x4
    float xAxisMap; // offset 0xE4, size 0x4
    float yAxisMap; // offset 0xE8, size 0x4
    float zAxisMap; // offset 0xEC, size 0x4
    class Vector restPoseYZXEuler; // offset 0xF0, size 0xC
    unsigned char preserveBoneLengths; // offset 0xFC, size 0x1
    int pad1; // offset 0x100, size 0x4
    int pad2; // offset 0x104, size 0x4
};
// total size: 0x18
class tSkeleton : public tEntity {
    // Members
protected:
    int nJoint; // offset 0x10, size 0x4
    class Joint * joint; // offset 0x14, size 0x4
};
// total size: 0x90
class Joint {
    // Members
public:
    class Matrix objectMatrix; // offset 0x0, size 0x40
    class Matrix worldMatrix; // offset 0x40, size 0x40
    class Joint * parent; // offset 0x80, size 0x4
    unsigned int pad[3]; // offset 0x84, size 0xC
};
// total size: 0x18
class tPose : public tRefCounted {
    // Members
protected:
    int nJoint; // offset 0x8, size 0x4
    class tSkeleton * skeleton; // offset 0xC, size 0x4
    class Joint * joint; // offset 0x10, size 0x4
    unsigned char poseReady; // offset 0x14, size 0x1
};
// total size: 0x4
class tPosable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tDrawablePose : public tDrawable, public tPosable {
    // Members
protected:
    class tSkeleton * skeleton; // offset 0x14, size 0x4
    class tPose * pose; // offset 0x18, size 0x4
};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



