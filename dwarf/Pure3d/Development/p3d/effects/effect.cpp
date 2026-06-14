/*
    Compile unit: D:\Pure3d\development\p3d\effects\effect.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006EA68 -> 0x8006EDA4
*/
// total size: 0x40
struct {} tEffectController::__vtable; // size: 0x40, address: 0x80107F98
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
// total size: 0x10
class tEffect : public tDrawable {};
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
class tFrameController : public tEntity {};
// total size: 0x20
class tAnimation : public tEntity {
    // Members
protected:
    int nFrame; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    unsigned char cyclic; // offset 0x18, size 0x1
};
// total size: 0x18
class tAnimationFrameController : public tFrameController {
    // Members
protected:
    float minFrame; // offset 0x10, size 0x4
    float maxFrame; // offset 0x14, size 0x4
};
// total size: 0x28
class tEffectController : public tAnimationFrameController {
    // Functions
    tEffectController();

    class tFrameController * Clone();

    void SetRelativeSpeed(float rs);

    float GetRelativeSpeed();

    void SetFrame(float f);

    float GetFrame();

    void SetEffect(class tEffect * e);

    class tEffect * GetEffect();

    void Update();

    void Advance(float deltaTime, unsigned char update);

    ~tEffectController();

    // Members
protected:
    class tEffect * effect; // offset 0x18, size 0x4
    float relativeSpeed; // offset 0x1C, size 0x4
    float accumulatedTime; // offset 0x20, size 0x4
};
// ERROR: Failed to emit tag 47DE77 (GlobalSubroutine)
// ERROR: Failed to emit tag 47DFB8 (GlobalSubroutine)
// Range: 0x8006EBA4 -> 0x8006EBAC
// this: r1+0x0
void tEffectController::SetRelativeSpeed(float rs /* r1+0x4 */) {}

// Range: 0x8006EBAC -> 0x8006EBB4
// this: r1+0x0
float tEffectController::GetRelativeSpeed() {}

// Range: 0x8006EBB4 -> 0x8006EBE4
// this: r3
void tEffectController::SetFrame(float f /* f1 */) {}

// Range: 0x8006EBE4 -> 0x8006EC14
// this: r3
float tEffectController::GetFrame() {}

// Range: 0x8006EC14 -> 0x8006EC6C
// this: r30
void tEffectController::SetEffect(class tEffect * e /* r31 */) {}

// Range: 0x8006EC6C -> 0x8006EC74
// this: r3
class tEffect * tEffectController::GetEffect() {}

// Range: 0x8006EC74 -> 0x8006ECBC
// this: r31
void tEffectController::Update() {}

// Range: 0x8006ECBC -> 0x8006ED04
// this: r3
void tEffectController::Advance(float deltaTime /* r1+0xC */, unsigned char update /* r1+0x10 */) {}

// ERROR: Failed to emit tag 47E4E4 (GlobalSubroutine)
static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138F98
static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80138FA8
static // total size: 0x8
struct {} tFrameController::__RTTI; // size: 0x8, address: 0x80138FB0
static // total size: 0x8
struct {} tAnimationFrameController::__RTTI; // size: 0x8, address: 0x80138FB8
static // total size: 0x8
struct {} tEffectController::__RTTI; // size: 0x8, address: 0x80138FC0



