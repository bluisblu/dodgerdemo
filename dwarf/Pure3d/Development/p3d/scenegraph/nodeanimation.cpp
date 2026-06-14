/*
    Compile unit: D:\Pure3d\development\p3d\scenegraph\nodeanimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007FA7C -> 0x80080584
*/
// total size: 0xC
struct {} Scenegraph::TransformAnimation::__vtable; // size: 0xC, address: 0x80109764
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
// total size: 0x38
class TransformAnimation : public tAnimation {
    // Functions
    ~TransformAnimation();

    // Members
protected:
    class tRotationChannel * rotation; // offset 0x20, size 0x4
    class tVectorChannel * translation; // offset 0x24, size 0x4
    char * nodeName; // offset 0x28, size 0x4
    unsigned long long nodeUID; // offset 0x30, size 0x8
};
// ERROR: Failed to emit tag 5106C4 (GlobalSubroutine)
// total size: 0x4
class tVectorChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class tRotationChannel {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x50
struct {} Scenegraph::TransformAnimationController::__vtable; // size: 0x50, address: 0x801096C8
// total size: 0xC8
class TransformAnimationController : public tBlendFrameController {
    // Functions
    ~TransformAnimationController();

    class tFrameController * Clone();

    void UpdateNoBlending();

    void UpdateWithBlending();

    // Members
protected:
    class Scenegraph * scene; // offset 0xC0, size 0x4
};
// Range: 0x8007FB3C -> 0x8007FBB8
// this: r30
TransformAnimationController::~TransformAnimationController() {
    // References
    // -> struct [anonymous] Scenegraph::TransformAnimationController::__vtable;
}

// Range: 0x8007FBB8 -> 0x8007FC48
// this: r30
class tFrameController * TransformAnimationController::Clone() {
    // References
    // -> struct [anonymous] Scenegraph::TransformAnimationController::__vtable;
}

// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
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
enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// total size: 0x4
class DisplayListDrawable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class DisplayList {
    // Members
    long nDrawables; // offset 0x0, size 0x4
    long nDrawablesEndPos; // offset 0x4, size 0x4
    class DisplayListDrawable * * drawables; // offset 0x8, size 0x4
    float sortRange; // offset 0xC, size 0x4
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
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80139230
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80139240
static // total size: 0x8
struct {} tAnimation::__RTTI; // size: 0x8, address: 0x80139248
static // total size: 0x8
struct {} Scenegraph::TransformAnimation::__RTTI; // size: 0x8, address: 0x80139250
// Range: 0x8007FC48 -> 0x8007FC90
unsigned char TransformAnimationController::ValidateAnimation(class tAnimation * anim /* r4 */) {
    // Local variables
    class TransformAnimation * animation; // r1+0x8

    // References
    // -> static struct [anonymous] tAnimation::__RTTI;
    // -> static struct [anonymous] Scenegraph::TransformAnimation::__RTTI;
}

static // total size: 0x8
struct {} Scenegraph::Node::__RTTI; // size: 0x8, address: 0x80139258
static // total size: 0x8
struct {} Scenegraph::Branch::__RTTI; // size: 0x8, address: 0x80139260
static // total size: 0x8
struct {} Scenegraph::Transform::__RTTI; // size: 0x8, address: 0x80139268
// total size: 0x28
class Branch : public Node {
    // Members
protected:
    int nChildren; // offset 0x18, size 0x4
    int allocatedChildren; // offset 0x1C, size 0x4
    class Node * * children; // offset 0x20, size 0x4
};
// total size: 0xA8
class Transform : public Branch {
    // Members
protected:
    class Matrix transform; // offset 0x28, size 0x40
    class Matrix world; // offset 0x68, size 0x40
};
// Range: 0x8007FC90 -> 0x8007FD74
// this: r29
void TransformAnimationController::UpdateNoBlending() {
    // Local variables
    class TransformAnimation * anim; // r30
    float frame; // f31
    class Transform * transform; // r29
    class tVectorChannel * channel; // r31
    class tRotationChannel * rot; // r30

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Transform::__RTTI;
}

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
class Quaternion {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// Range: 0x8007FD74 -> 0x8007FFF4
// this: r30
void TransformAnimationController::UpdateWithBlending() {
    // Local variables
    int j; // r27
    class Vector vBlend; // r1+0x74
    class TransformAnimation * anim; // r27
    class Transform * transform; // r31
    class tVectorChannel * channel; // r28
    float frame; // f1
    class tVectorChannel * channel; // r26
    class Vector v; // r1+0x68
    float frame; // f1
    class Quaternion qBlend; // r1+0x58
    class tRotationChannel * rot; // r26
    float frame; // f1
    class tRotationChannel * rot; // r26
    class Quaternion q; // r1+0x48
    float frame; // f1

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Transform::__RTTI;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} Scenegraph::TransformAnimationLoader::__vtable; // size: 0x1C, address: 0x801095A4
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x18
class TransformAnimationLoader : public tSimpleChunkHandler {
    // Functions
    TransformAnimationLoader();
};
// ERROR: Failed to emit tag 51A1DE (GlobalSubroutine)
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
struct {} tRotationChannelLoader::__vtable; // size: 0xC, address: 0x80104060
// total size: 0x4
class tVectorChannelLoader {
    // Members
protected:
    int poseIndex; // offset 0x0, size 0x4
};
// total size: 0x8
class tRotationChannelLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int poseIndex; // offset 0x4, size 0x4
};
// ERROR: Failed to emit tag 51BE82 (GlobalSubroutine)
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
// total size: 0x18
class tFrameControllerLoader : public tSimpleChunkHandler {};
// total size: 0x18
class TransformFrameControllerLoader : public tFrameControllerLoader {
    // Functions
    class tFrameController * LoadFC(class tChunkFile * f, class tEntityStore * store);
};
// Range: 0x80080290 -> 0x800802A0
unsigned char TransformFrameControllerLoader::CheckFC(unsigned int type /* r1+0x4 */) {}

// total size: 0xC
struct {} tSafeEntityCaster<Scenegraph::TransformAnimation>::__vtable; // size: 0xC, address: 0x801093F0
enum p3dFrameControllerType {
    P3D_FC_UNDEFINED = 0,
    P3D_FC_CAMERA = 1,
    P3D_FC_EXPRESSION = 2,
    P3D_FC_LIGHT = 3,
    P3D_FC_POLYSKIN = 4,
    P3D_FC_COMPOUNDMESH = 5,
    P3D_FC_VISIBILITY = 6,
    P3D_FC_DEFORMPOLYSKIN = 7,
    P3D_FC_TEXTURE = 8,
    P3D_FC_SCENEGRAPHTRANSFORM = 9,
    P3D_FC_HSPLINEOFFSETABSOLUTE = 10,
    P3D_FC_HSPLINEOFFSETRELATIVE = 11,
    P3D_FC_HSPLINESKIN = 12,
    P3D_FC_EFFECT = 13,
    P3D_FC_COMPOSITEDRAWABLE = 14,
    P3D_FC_COMPOSITEDRAWABLEVISIBILITY = 15,
};
// ERROR: Failed to emit tag 51D598 (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80139270
static // total size: 0x8
struct {} tSafeEntityCaster<Scenegraph::TransformAnimation>::__RTTI; // size: 0x8, address: 0x80139278
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80139280
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80139288
static // total size: 0x8
struct {} tFrameControllerLoader::__RTTI; // size: 0x8, address: 0x80139290
static // total size: 0x8
struct {} Scenegraph::TransformFrameControllerLoader::__RTTI; // size: 0x8, address: 0x80139298
// total size: 0x24
struct {} Scenegraph::TransformFrameControllerLoader::__vtable; // size: 0x24, address: 0x80109534
static // total size: 0x8
struct {} Scenegraph::TransformAnimationLoader::__RTTI; // size: 0x8, address: 0x801392A0
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x801392A8
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x801392B0
static // total size: 0x8
struct {} tBlendFrameController::__RTTI; // size: 0x8, address: 0x801392B8
static // total size: 0x8
struct {} Scenegraph::TransformAnimationController::__RTTI; // size: 0x8, address: 0x801392C0
// total size: 0x10
class tFrameController : public tEntity {};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x20
class PlayInfo {
    // Members
    float currentFrame; // offset 0x0, size 0x4
    float blendFrames; // offset 0x4, size 0x4
    float ooBlendFrames; // offset 0x8, size 0x4
    float accumDelta; // offset 0xC, size 0x4
    float t; // offset 0x10, size 0x4
    float minFrame; // offset 0x14, size 0x4
    float maxFrame; // offset 0x18, size 0x4
    class tAnimation * anim; // offset 0x1C, size 0x4
};
// total size: 0xC0
class tBlendFrameController : public tAnimationFrameController {
    // Members
protected:
    float relativeSpeed; // offset 0x18, size 0x4
    int nAnim; // offset 0x1C, size 0x4
    class PlayInfo playInfo[5]; // offset 0x20, size 0xA0
};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x801392C8
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



