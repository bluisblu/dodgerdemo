/*
    Compile unit: D:\Pure3d\development\p3d\anim\visibilityanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006B774 -> 0x8006C3A4
*/
// total size: 0xC
struct {} tVisibilityAnimation::__vtable; // size: 0xC, address: 0x801079A8
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
// total size: 0x18
struct tBox3D {
    // Members
    class Vector pmin; // offset 0x0, size 0xC
    class Vector pmax; // offset 0xC, size 0xC
};
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x0
class tSkeleton {};
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
    // Members
    struct tBox3D boundingBox; // offset 0x20, size 0x18
    struct tSphere boundingSphere; // offset 0x38, size 0x10
    int elementArraySize; // offset 0x48, size 0x4
    int nElements; // offset 0x4C, size 0x4
    class DrawableElement * * elements; // offset 0x50, size 0x4
    class DisplayList translucentObjects; // offset 0x54, size 0x10
};
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
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x20
class tVisibilityChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned long long nodeUID; // offset 0x8, size 0x8
    unsigned char bStartState; // offset 0x10, size 0x1
    unsigned int nFrames; // offset 0x14, size 0x4
    unsigned int * frames; // offset 0x18, size 0x4
};
// total size: 0x30
class tVisibilityAnimation : public tAnimation {
    // Functions
    unsigned long long GetSceneUID();

    ~tVisibilityAnimation();

    // Members
    unsigned long long uidScene; // offset 0x20, size 0x8
    unsigned int nChannels; // offset 0x28, size 0x4
    class tVisibilityChannel * animChannels; // offset 0x2C, size 0x4
};
// Range: 0x8006B774 -> 0x8006B784
// this: r4
unsigned long long tVisibilityAnimation::GetSceneUID() {}

// ERROR: Failed to emit tag 44129C (GlobalSubroutine)
// total size: 0x40
struct {} tVisibilityAnimationController::__vtable; // size: 0x40, address: 0x80107968
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x28
class tSimpleFrameController : public tAnimationFrameController {
    // Members
protected:
    class tAnimation * animation; // offset 0x18, size 0x4
    float frame; // offset 0x1C, size 0x4
    float relativeSpeed; // offset 0x20, size 0x4
};
enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// total size: 0x18
class Node : public tEntity {
    // Members
protected:
    class Node * parent; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0x28
class Scenegraph : public tDrawable {
    // Members
protected:
    class Node * root; // offset 0x10, size 0x4
    class DisplayList translucentDrawables; // offset 0x14, size 0x10
};
// total size: 0x28
class Branch : public Node {
    // Members
protected:
    int nChildren; // offset 0x18, size 0x4
    int allocatedChildren; // offset 0x1C, size 0x4
    class Node * * children; // offset 0x20, size 0x4
};
// total size: 0x30
class Visibility : public Branch {
    // Members
protected:
    unsigned char isVisible; // offset 0x28, size 0x1
};
// total size: 0x30
class tVisibilityAnimationController : public tSimpleFrameController {
    // Functions
    tVisibilityAnimationController();

    void SetDrawable(class Scenegraph * scene);

    class tFrameController * Clone();

    void SetAnimation(class tVisibilityAnimation * pVAnim);

    void Update();

    ~tVisibilityAnimationController();

    // Members
protected:
    class Scenegraph * pScene; // offset 0x28, size 0x4
    class Visibility * * visNodes; // offset 0x2C, size 0x4
};
// Range: 0x8006B80C -> 0x8006B854
// this: r31
tVisibilityAnimationController::tVisibilityAnimationController() {
    // References
    // -> struct [anonymous] tVisibilityAnimationController::__vtable;
}

// Range: 0x8006B854 -> 0x8006B8AC
// this: r30
void tVisibilityAnimationController::SetDrawable(class Scenegraph * scene /* r31 */) {}

// Range: 0x8006B8AC -> 0x8006B928
// this: r30
class tFrameController * tVisibilityAnimationController::Clone() {
    // References
    // -> struct [anonymous] tVisibilityAnimationController::__vtable;
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138E08
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138E18
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80138E20
static // total size: 0x8
struct {} tVisibilityAnimation::__RTTI; // size: 0x8, address: 0x80138E28
// Range: 0x8006B928 -> 0x8006B968
unsigned char tVisibilityAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tVisibilityAnimation::__RTTI;
}

static // total size: 0x8
struct {} Scenegraph::Node::__RTTI; // size: 0x8, address: 0x80138E30
static // total size: 0x8
struct {} Scenegraph::Branch::__RTTI; // size: 0x8, address: 0x80138E38
static // total size: 0x8
struct {} Scenegraph::Visibility::__RTTI; // size: 0x8, address: 0x80138E40
// Range: 0x8006B968 -> 0x8006BA2C
// this: r26
void tVisibilityAnimationController::SetAnimation(class tVisibilityAnimation * pVAnim /* r27 */) {
    // Local variables
    int i; // r29
    int iNumNodes; // r28
    class Visibility * visibilityNode; // r1+0x8

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Visibility::__RTTI;
}

// Range: 0x8006BA2C -> 0x8006BB78
// this: r26
void tVisibilityAnimationController::Update() {
    // Local variables
    float fFrame; // r1+0x8
    unsigned int ui; // r28
    unsigned int uiFrameIndex; // r22
    class tVisibilityAnimation * pVisAnim; // r27
    class tVisibilityChannel * pVisChan; // r24
    unsigned char bSet; // r21
    int iAnimIndex; // r20
}

// Range: 0x8006BB78 -> 0x8006BC0C
// this: r30
tVisibilityAnimationController::~tVisibilityAnimationController() {
    // References
    // -> struct [anonymous] tVisibilityAnimationController::__vtable;
}

// total size: 0x40
struct {} tCompDrawVisibilityAnimationController::__vtable; // size: 0x40, address: 0x801078DC
// total size: 0x30
class tCompDrawVisibilityAnimationController : public tSimpleFrameController {
    // Functions
    tCompDrawVisibilityAnimationController();

    class tFrameController * Clone();

    void SetDrawable(class tCompositeDrawable * compDraw);

    void SetAnimation(class tVisibilityAnimation * pVAnim);

    void Update();

    ~tCompDrawVisibilityAnimationController();

    // Members
protected:
    class tCompositeDrawable * pCompDraw; // offset 0x28, size 0x4
    class DrawableElement * * visNodes; // offset 0x2C, size 0x4
};
// Range: 0x8006BC0C -> 0x8006BC54
// this: r31
tCompDrawVisibilityAnimationController::tCompDrawVisibilityAnimationController() {
    // References
    // -> struct [anonymous] tCompDrawVisibilityAnimationController::__vtable;
}

// Range: 0x8006BC54 -> 0x8006BCD0
// this: r30
class tFrameController * tCompDrawVisibilityAnimationController::Clone() {
    // References
    // -> struct [anonymous] tCompDrawVisibilityAnimationController::__vtable;
}

// Range: 0x8006BCD0 -> 0x8006BD10
unsigned char tCompDrawVisibilityAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] tVisibilityAnimation::__RTTI;
}

// Range: 0x8006BD10 -> 0x8006BD68
// this: r30
void tCompDrawVisibilityAnimationController::SetDrawable(class tCompositeDrawable * compDraw /* r31 */) {}

// Range: 0x8006BD68 -> 0x8006BE14
// this: r26
void tCompDrawVisibilityAnimationController::SetAnimation(class tVisibilityAnimation * pVAnim /* r27 */) {
    // Local variables
    int i; // r29
    int iNumNodes; // r28
    class DrawableElement * drawable; // r1+0x8
}

// Range: 0x8006BE14 -> 0x8006BF60
// this: r26
void tCompDrawVisibilityAnimationController::Update() {
    // Local variables
    float fFrame; // r1+0x8
    unsigned int ui; // r28
    unsigned int uiFrameIndex; // r22
    class tVisibilityAnimation * pVisAnim; // r27
    class tVisibilityChannel * pVisChan; // r24
    unsigned char bSet; // r21
    int iAnimIndex; // r20
}

// Range: 0x8006BF60 -> 0x8006BFF4
// this: r30
tCompDrawVisibilityAnimationController::~tCompDrawVisibilityAnimationController() {
    // References
    // -> struct [anonymous] tCompDrawVisibilityAnimationController::__vtable;
}

// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class tVisibilityAnimationLoader : public tSimpleChunkHandler {
    // Functions
    tVisibilityAnimationLoader();

    ~tVisibilityAnimationLoader();
};
// ERROR: Failed to emit tag 4469C9 (GlobalSubroutine)
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
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} tVisibilityAnimationLoader::__vtable; // size: 0x1C, address: 0x801077D0
// ERROR: Failed to emit tag 447619 (GlobalSubroutine)
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
// ERROR: Failed to emit tag 448B9C (GlobalSubroutine)
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80138E48
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138E50
static // total size: 0x8
struct {} tVisibilityAnimationLoader::__RTTI; // size: 0x8, address: 0x80138E58
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138E60
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138E68
static // total size: 0x8
struct {} tSimpleFrameController::__RTTI; // size: 0x8, address: 0x80138E70
static // total size: 0x8
struct {} tCompDrawVisibilityAnimationController::__RTTI; // size: 0x8, address: 0x80138E78
static // total size: 0x8
struct {} tVisibilityAnimationController::__RTTI; // size: 0x8, address: 0x80138E80



