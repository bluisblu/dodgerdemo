/*
    Compile unit: D:\Pure3d\development\p3d\scenegraph\scenegraph.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800806A0 -> 0x800831A4
*/
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
// total size: 0x40
class Matrix {
    // Members
public:
    float m[4][4]; // offset 0x0, size 0x40
};
static class Matrix identity; // size: 0x40, address: 0x80133200
static class Matrix tmp; // size: 0x40, address: 0x80133240
// total size: 0x20
struct {} tDrawable::__vtable; // size: 0x20, address: 0x80100ADC
// total size: 0x20
struct {} Scenegraph::Scenegraph::__vtable; // size: 0x20, address: 0x80109F0C
// total size: 0x4
struct pddiColour {
    // Members
    unsigned int c; // offset 0x0, size 0x4
};
// total size: 0x20
class tLight : public tEntity {
    // Members
protected:
    struct pddiColour colour; // offset 0x10, size 0x4
    unsigned int slot; // offset 0x14, size 0x4
    unsigned char active; // offset 0x18, size 0x1
    unsigned char enabled; // offset 0x19, size 0x1
};
// total size: 0x0
class tView {};
// total size: 0x18
class tLightGroup : public tEntity {
    // Members
    int mNumLights; // offset 0x10, size 0x4
    class tLight * * mLights; // offset 0x14, size 0x4
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
// total size: 0x10
class tDrawable : public tEntity {};
// total size: 0x28
class Scenegraph : public tDrawable {
    // Functions
    ~Scenegraph();

    void Display();

    class Node * Find(char * name);

    class Node * Search(class Node * node, unsigned long long uid);

    // Members
protected:
    class Node * root; // offset 0x10, size 0x4
    class DisplayList translucentDrawables; // offset 0x14, size 0x10
};
// Range: 0x800806A0 -> 0x8008073C
// this: r30
Scenegraph::~Scenegraph() {
    // References
    // -> struct [anonymous] tDrawable::__vtable;
    // -> struct [anonymous] Scenegraph::Scenegraph::__vtable;
}

// Range: 0x8008073C -> 0x800808BC
// this: r31
void Scenegraph::Display() {
    // Local variables
    class Matrix tmp; // r1+0x1C

    // References
    // -> static class Matrix identity;
}

// Range: 0x800808BC -> 0x80080900
// this: r31
class Node * Scenegraph::Find(char * name /* r4 */) {}

// Range: 0x80080900 -> 0x80080A50
// this: r28
class Node * Scenegraph::Search(class Node * node /* r29 */, unsigned long long uid /* r31 */) {
    // Local variables
    unsigned int count; // r1+0x8
    unsigned int i; // r23
}

static // total size: 0x8
struct {} DisplayListDrawable::__RTTI; // size: 0x8, address: 0x801392D0
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x801392D8
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x801392E8
static // total size: 0x8
struct {} Scenegraph::Node::__RTTI; // size: 0x8, address: 0x801392F0
static // total size: 0x8
struct {} Scenegraph::Leaf::__RTTI; // size: 0x8, address: 0x801392F8
static // total size: 0x8
struct {} Scenegraph::Drawable::__RTTI; // size: 0x8, address: 0x80139300
// total size: 0x4
class SceneGraphVisitor {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class DrawableCounter : public SceneGraphVisitor {
    // Functions
    void Visit(class Node * sceneGraphNode);

    // Members
protected:
    long nDrawables; // offset 0x4, size 0x4
};
// Range: 0x80080A50 -> 0x80080AA4
// this: r31
void DrawableCounter::Visit(class Node * sceneGraphNode /* r4 */) {
    // Local variables
    class Drawable * drawable; // r1+0x8

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Drawable::__RTTI;
}

// total size: 0x8
class TranslucentDrawableCounter : public DrawableCounter {
    // Functions
    void Visit(class Node * sceneGraphNode);
};
// Range: 0x80080AA4 -> 0x80080B04
// this: r31
void TranslucentDrawableCounter::Visit(class Node * sceneGraphNode /* r4 */) {
    // Local variables
    class Drawable * drawable; // r1+0x8

    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Drawable::__RTTI;
}

// total size: 0x1
class SceneGraphTraversal {};
// Range: 0x80080B04 -> 0x80080C48
void SceneGraphTraversal::Traverse(class Node * node /* r22 */, class SceneGraphVisitor & vis /* r23 */) {
    // Local variables
    unsigned int count; // r1+0x8
    unsigned int i; // r24
}

// total size: 0x30
struct {} Scenegraph::Node::__vtable; // size: 0x30, address: 0x80109E0C
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
    // Functions
    ~Node();

    void SetParent(class Node * p);

    class Node * GetParent();

    class Matrix & GetTransform();

    class Matrix & GetWorldTransform();

    void SetFlags(unsigned char set, unsigned int f, enum Propagation prop, unsigned char stopIfSet);

    // Members
protected:
    class Node * parent; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// Range: 0x80080C48 -> 0x80080CAC
// this: r30
Node::~Node() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
}

// Range: 0x80080CAC -> 0x80080CB4
// this: r1+0x0
void Node::SetParent(class Node * p /* r1+0x4 */) {}

// Range: 0x80080CB4 -> 0x80080CBC
// this: r3
class Node * Node::GetParent() {}

// Range: 0x80080CBC -> 0x80080D00
// this: r1+0x8
class Matrix & Node::GetTransform() {
    // References
    // -> static class Matrix identity;
}

// Range: 0x80080D00 -> 0x80080D50
// this: r1+0x8
class Matrix & Node::GetWorldTransform() {
    // References
    // -> static class Matrix identity;
}

enum Propagation {
    PROPAGATE_NONE = 0,
    PROPAGATE_UP = 1,
    PROPAGATE_DOWN = 2,
};
// Range: 0x80080D50 -> 0x80080E18
// this: r29
void Node::SetFlags(unsigned char set /* r30 */, unsigned int f /* r31 */, enum Propagation prop /* r6 */, unsigned char stopIfSet /* r7 */) {}

// total size: 0x3C
struct {} Scenegraph::Branch::__vtable; // size: 0x3C, address: 0x80109DD0
// total size: 0x28
class Branch : public Node {
    // Functions
    Branch(int initialChildren);

    ~Branch();

    unsigned int GetNumChildren();

    class Node * GetChild(unsigned int index);

    void AddChild(class Node * child);

    void RemoveChild(class Node * child);

    void Display(const class Matrix & view, class DisplayList & list);

    void UpdateTransform(const class Matrix & parent);

    void SetFlags(unsigned char set, unsigned int f, enum Propagation prop, unsigned char stopIfSet);

    void Resize(int n);

    // Members
protected:
    int nChildren; // offset 0x18, size 0x4
    int allocatedChildren; // offset 0x1C, size 0x4
    class Node * * children; // offset 0x20, size 0x4
};
// Range: 0x80080E18 -> 0x80080ECC
// this: r1+0x8
Branch::Branch(int initialChildren /* r30 */) {
    // Local variables
    int i; // r5

    // References
    // -> struct [anonymous] Scenegraph::Branch::__vtable;
    // -> struct [anonymous] Scenegraph::Node::__vtable;
}

// Range: 0x80080ECC -> 0x80080FA8
// this: r26
Branch::~Branch() {
    // Local variables
    int i; // r28

    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Branch::__vtable;
}

// Range: 0x80080FA8 -> 0x80080FB0
// this: r3
unsigned int Branch::GetNumChildren() {}

// Range: 0x80080FB0 -> 0x80081008
// this: r1+0x0
class Node * Branch::GetChild(unsigned int index /* r1+0x4 */) {
    // Local variables
    unsigned int count; // r7
    int i; // r8
}

// Range: 0x80081008 -> 0x800810FC
// this: r29
void Branch::AddChild(class Node * child /* r30 */) {
    // Local variables
    int i; // r5
}

// Range: 0x800810FC -> 0x800811B4
// this: r30
void Branch::RemoveChild(class Node * child /* r1+0xC */) {
    // Local variables
    int i; // r6
}

// Range: 0x800811B4 -> 0x8008122C
// this: r27
void Branch::Display(const class Matrix & view /* r28 */, class DisplayList & list /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8008122C -> 0x800812CC
// this: r28
void Branch::UpdateTransform(const class Matrix & parent /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800812CC -> 0x800813AC
// this: r25
void Branch::SetFlags(unsigned char set /* r26 */, unsigned int f /* r27 */, enum Propagation prop /* r28 */, unsigned char stopIfSet /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800813AC -> 0x80081420
// this: r30
void Branch::Resize(int n /* r1+0xC */) {
    // Local variables
    class Node * * newChildren; // r31
}

// total size: 0x30
struct {} Scenegraph::Leaf::__vtable; // size: 0x30, address: 0x80109DA0
// total size: 0x18
class Leaf : public Node {
    // Functions
    ~Leaf();
};
// Range: 0x80081420 -> 0x80081494
// this: r30
Leaf::~Leaf() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Leaf::__vtable;
}

// Range: 0x80081494 -> 0x8008149C
unsigned int Leaf::GetNumChildren() {}

// Range: 0x8008149C -> 0x800814A4
class Node * Leaf::GetChild() {}

// Range: 0x800814A4 -> 0x800814A8
void Leaf::UpdateTransform() {}

// Range: 0x800814A8 -> 0x800814AC
void Leaf::Display() {}

// total size: 0x3C
struct {} Scenegraph::Transform::__vtable; // size: 0x3C, address: 0x80109D64
// total size: 0xA8
class Transform : public Branch {
    // Functions
    ~Transform();

    class Matrix & GetTransform();

    class Matrix & GetWorldTransform();

    class Matrix * ModifyTransform();

    class Matrix * ModifyWorldTransform();

    void Display(const class Matrix & view, class DisplayList & list);

    void UpdateTransform(const class Matrix & parent);

    // Members
protected:
    class Matrix transform; // offset 0x28, size 0x40
    class Matrix world; // offset 0x68, size 0x40
};
// Range: 0x800814AC -> 0x80081598
// this: r26
Transform::~Transform() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Branch::__vtable;
    // -> struct [anonymous] Scenegraph::Transform::__vtable;
}

// Range: 0x80081598 -> 0x800815A0
// this: r3
class Matrix & Transform::GetTransform() {}

// Range: 0x800815A0 -> 0x80081610
// this: r31
class Matrix & Transform::GetWorldTransform() {}

// Range: 0x80081610 -> 0x80081688
// this: r31
class Matrix * Transform::ModifyTransform() {}

// Range: 0x80081688 -> 0x80081690
// this: r3
class Matrix * Transform::ModifyWorldTransform() {}

// Range: 0x80081690 -> 0x80081784
// this: r27
void Transform::Display(const class Matrix & view /* r28 */, class DisplayList & list /* r29 */) {
    // References
    // -> static class Matrix tmp;
}

// Range: 0x80081784 -> 0x80081840
// this: r29
void Transform::UpdateTransform(const class Matrix & parent /* r4 */) {}

// total size: 0x48
struct {} Scenegraph::Drawable::__vtable; // size: 0x48, address: 0x80109CC8
// total size: 0x28
class Drawable : public Leaf, public DisplayListDrawable {
    // Functions
    ~Drawable();

    void Display(class DisplayList & list);

    // Members
protected:
    class tDrawable * draw; // offset 0x1C, size 0x4
    unsigned char isTranslucent; // offset 0x20, size 0x1
};
// Range: 0x80081840 -> 0x800818E8
// this: r30
Drawable::~Drawable() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Leaf::__vtable;
    // -> struct [anonymous] Scenegraph::Drawable::__vtable;
}

// Range: 0x800818E8 -> 0x80081958
// this: r3
void Drawable::Display(class DisplayList & list /* r5 */) {}

// total size: 0x3C
struct {} Scenegraph::Attachment::__vtable; // size: 0x3C, address: 0x80109C8C
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
// total size: 0x30
class Attachment : public Branch {
    // Functions
    ~Attachment();

    void AddChild(class Node * child);

    void SetAttachment(int joint, class Node * graft);

    void Display(const class Matrix & view, class DisplayList & list);

    void UpdateTransform(const class Matrix & parent);

    void Resize(int n);

    // Members
protected:
    class tDrawablePose * pose; // offset 0x28, size 0x4
    int * jointIndices; // offset 0x2C, size 0x4
};
// Range: 0x80081958 -> 0x80081A68
// this: r30
Attachment::~Attachment() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Branch::__vtable;
    // -> struct [anonymous] Scenegraph::Attachment::__vtable;
}

// Range: 0x80081A68 -> 0x80081A90
// this: r3
void Attachment::AddChild(class Node * child /* r4 */) {}

// Range: 0x80081A90 -> 0x80081BE0
// this: r30
void Attachment::SetAttachment(int joint /* r31 */, class Node * graft /* r27 */) {
    // Local variables
    int i; // r28
    class Transform * transform; // r3

    // References
    // -> struct [anonymous] Scenegraph::Transform::__vtable;
}

// Range: 0x80081BE0 -> 0x80081CC4
// this: r27
void Attachment::Display(const class Matrix & view /* r28 */, class DisplayList & list /* r29 */) {}

static // total size: 0x8
struct {} Scenegraph::Branch::__RTTI; // size: 0x8, address: 0x80139308
static // total size: 0x8
struct {} Scenegraph::Transform::__RTTI; // size: 0x8, address: 0x80139310
// Range: 0x80081CC4 -> 0x80081EB0
// this: r27
void Attachment::UpdateTransform(const class Matrix & parent /* r28 */) {
    // References
    // -> static struct [anonymous] Scenegraph::Node::__RTTI;
    // -> static struct [anonymous] Scenegraph::Transform::__RTTI;
}

// Range: 0x80081EB0 -> 0x80081F50
// this: r30
void Attachment::Resize(int n /* r1+0xC */) {
    // Local variables
    int * newJoints; // r31
}

// total size: 0x3C
struct {} Scenegraph::Visibility::__vtable; // size: 0x3C, address: 0x80109C14
// total size: 0x30
class Visibility : public Branch {
    // Functions
    void Display(const class Matrix & m, class DisplayList & list);

    // Members
protected:
    unsigned char isVisible; // offset 0x28, size 0x1
};
// Range: 0x80081F50 -> 0x80081FD4
// this: r27
void Visibility::Display(const class Matrix & m /* r28 */, class DisplayList & list /* r29 */) {}

// total size: 0x30
struct {} Scenegraph::Camera::__vtable; // size: 0x30, address: 0x80109BA8
// total size: 0xF0
class tCamera : public tEntity {
    // Members
protected:
    float fov; // offset 0x10, size 0x4
    float aspect; // offset 0x14, size 0x4
    float nearPlane; // offset 0x18, size 0x4
    float farPlane; // offset 0x1C, size 0x4
    float fovScaleX; // offset 0x20, size 0x4
    float fovScaleY; // offset 0x24, size 0x4
    float leftPlane[4]; // offset 0x28, size 0x10
    float rightPlane[4]; // offset 0x38, size 0x10
    float upPlane[4]; // offset 0x48, size 0x10
    float downPlane[4]; // offset 0x58, size 0x10
    class Matrix worldToCamera; // offset 0x68, size 0x40
    class Matrix cameraToWorld; // offset 0xA8, size 0x40
    unsigned char updated; // offset 0xE8, size 0x1
};
// total size: 0x20
class Camera : public Leaf {
    // Functions
    ~Camera();

    // Members
protected:
    class tCamera * camera; // offset 0x18, size 0x4
};
// Range: 0x80081FD4 -> 0x80082074
// this: r30
Camera::~Camera() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Leaf::__vtable;
    // -> struct [anonymous] Scenegraph::Camera::__vtable;
}

// total size: 0x30
struct {} Scenegraph::LightGroup::__vtable; // size: 0x30, address: 0x80109B40
// total size: 0x20
class LightGroup : public Leaf {
    // Functions
    ~LightGroup();

    // Members
protected:
    class tLightGroup * lights; // offset 0x18, size 0x4
};
// Range: 0x80082074 -> 0x80082114
// this: r30
LightGroup::~LightGroup() {
    // References
    // -> struct [anonymous] Scenegraph::Node::__vtable;
    // -> struct [anonymous] Scenegraph::Leaf::__vtable;
    // -> struct [anonymous] Scenegraph::LightGroup::__vtable;
}

// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x1C
struct {} Scenegraph::Loader16::__vtable; // size: 0x1C, address: 0x80109AD4
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x20
class Loader16 : public tSimpleChunkHandler {
    // Functions
    Loader16();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    class SceneGraphGenericLoader bothFormatsLoader; // offset 0x18, size 0x1
};
// ERROR: Failed to emit tag 53129E (GlobalSubroutine)
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
// Range: 0x80082174 -> 0x80082198
// this: r3
class tEntity * Loader16::LoadObject(class tChunkFile * f /* r4 */, class tEntityStore * store /* r5 */) {}

// total size: 0x1C
struct {} Scenegraph::Loader::__vtable; // size: 0x1C, address: 0x80109A7C
// total size: 0x20
class Loader : public tSimpleChunkHandler {
    // Functions
    Loader();

    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    // Members
protected:
    class SceneGraphGenericLoader bothFormatsLoader; // offset 0x18, size 0x1
};
// ERROR: Failed to emit tag 532CEA (GlobalSubroutine)
// Range: 0x800821F8 -> 0x8008221C
// this: r3
class tEntity * Loader::LoadObject(class tChunkFile * f /* r4 */, class tEntityStore * store /* r5 */) {}

// total size: 0xC
struct {} Scenegraph::SceneGraphVisitor::__vtable; // size: 0xC, address: 0x801099E4
// total size: 0xC
struct {} Scenegraph::DrawableCounter::__vtable; // size: 0xC, address: 0x80109EAC
// total size: 0xC
struct {} Scenegraph::TranslucentDrawableCounter::__vtable; // size: 0xC, address: 0x80109EA0
// total size: 0x1
class SceneGraphGenericLoader {
    // Functions
    class tEntity * LoadObject(class tChunkFile * f, class tEntityStore * store);

    class Node * LoadNode(class tChunkFile * f, class tEntityStore * store);
};
// Range: 0x8008221C -> 0x80082488
// this: r28
class tEntity * SceneGraphGenericLoader::LoadObject(class tChunkFile * f /* r29 */, class tEntityStore * store /* r30 */) {
    // Local variables
    char buf[256]; // r1+0x30
    class Scenegraph * scene; // r31
    class TranslucentDrawableCounter translucentDrawableCount; // r1+0x24

    // References
    // -> struct [anonymous] Scenegraph::TranslucentDrawableCounter::__vtable;
    // -> struct [anonymous] Scenegraph::DrawableCounter::__vtable;
    // -> struct [anonymous] Scenegraph::SceneGraphVisitor::__vtable;
    // -> struct [anonymous] Scenegraph::Scenegraph::__vtable;
    // -> struct [anonymous] tDrawable::__vtable;
}

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
// ERROR: Failed to emit tag 533F09 (GlobalSubroutine)
static // total size: 0x8
struct {} tSafeEntityCasterBase::__RTTI; // size: 0x8, address: 0x80139318
static // total size: 0x8
struct {} Scenegraph::SceneGraphVisitor::__RTTI; // size: 0x8, address: 0x80139320
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80139328
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80139330
static // total size: 0x8
struct {} Scenegraph::Loader::__RTTI; // size: 0x8, address: 0x80139338
static // total size: 0x8
struct {} Scenegraph::Loader16::__RTTI; // size: 0x8, address: 0x80139340
static // total size: 0x8
struct {} Scenegraph::LightGroup::__RTTI; // size: 0x8, address: 0x80139348
static // total size: 0x8
struct {} Scenegraph::Camera::__RTTI; // size: 0x8, address: 0x80139350
static // total size: 0x8
struct {} Scenegraph::Visibility::__RTTI; // size: 0x8, address: 0x80139358
static // total size: 0x8
struct {} Scenegraph::Attachment::__RTTI; // size: 0x8, address: 0x80139360
static // total size: 0x8
struct {} Scenegraph::DrawableCounter::__RTTI; // size: 0x8, address: 0x80139368
static // total size: 0x8
struct {} Scenegraph::TranslucentDrawableCounter::__RTTI; // size: 0x8, address: 0x80139370
static // total size: 0x8
struct {} tDrawable::__RTTI; // size: 0x8, address: 0x80139378
static // total size: 0x8
struct {} Scenegraph::Scenegraph::__RTTI; // size: 0x8, address: 0x80139380
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
static // total size: 0x8
struct {} tPosable::__RTTI; // size: 0x8, address: 0x80139388
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};
// total size: 0x4
class tSafeEntityCaster : public tSafeEntityCasterBase {};



