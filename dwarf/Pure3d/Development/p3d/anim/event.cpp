/*
    Compile unit: D:\Pure3d\development\p3d\anim\event.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005D64C -> 0x8005D8A0
*/
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x8
class tEvent : public tRefCounted {};
// Range: 0x8005D64C -> 0x8005D658
unsigned long long tEvent::GetName() {}

// Range: 0x8005D658 -> 0x8005D664
unsigned long long tEvent::GetAddressName() {}

// Range: 0x8005D664 -> 0x8005D66C
unsigned int tEvent::GetParameter() {}

// Range: 0x8005D66C -> 0x8005D670
void tEvent::SetParameter() {}

// total size: 0x1C
struct {} tEvent::__vtable; // size: 0x1C, address: 0x80104B44
// total size: 0x1C
struct {} tBaseEvent::__vtable; // size: 0x1C, address: 0x80104B28
// total size: 0x20
class tBaseEvent : public tEvent {
    // Functions
    unsigned long long GetName();

    void SetName(char * n);

    unsigned long long GetAddressName();

    void SetAddressName(char * n);

    unsigned int GetParameter();

    void SetParameter(unsigned int p);

    // Members
protected:
    unsigned long long nameUID; // offset 0x8, size 0x8
    unsigned long long addressUID; // offset 0x10, size 0x8
    unsigned int param; // offset 0x18, size 0x4
};
// Range: 0x8005D6D4 -> 0x8005D6E4
// this: r4
unsigned long long tBaseEvent::GetName() {}

// Range: 0x8005D6E4 -> 0x8005D71C
// this: r31
void tBaseEvent::SetName(char * n /* r4 */) {}

// Range: 0x8005D71C -> 0x8005D72C
// this: r4
unsigned long long tBaseEvent::GetAddressName() {}

// Range: 0x8005D72C -> 0x8005D764
// this: r31
void tBaseEvent::SetAddressName(char * n /* r4 */) {}

// Range: 0x8005D764 -> 0x8005D76C
// this: r3
unsigned int tBaseEvent::GetParameter() {}

// Range: 0x8005D76C -> 0x8005D774
// this: r1+0x0
void tBaseEvent::SetParameter(unsigned int p /* r1+0x4 */) {}

// total size: 0x1C
struct {} tGenericEvent::__vtable; // size: 0x1C, address: 0x80104B0C
// total size: 0x30
class tGenericEvent : public tBaseEvent {
    // Functions
    ~tGenericEvent();

    unsigned int GetDataLength();

    void SetDataLength(unsigned int l);

    void SetData(void * d, unsigned char del);

    // Members
protected:
    unsigned int dataLen; // offset 0x20, size 0x4
    void * data; // offset 0x24, size 0x4
    unsigned char delData; // offset 0x28, size 0x1
};
// Range: 0x8005D7E8 -> 0x8005D884
// this: r30
tGenericEvent::~tGenericEvent() {
    // References
    // -> struct [anonymous] tEvent::__vtable;
    // -> struct [anonymous] tBaseEvent::__vtable;
    // -> struct [anonymous] tGenericEvent::__vtable;
}

// Range: 0x8005D884 -> 0x8005D88C
// this: r3
unsigned int tGenericEvent::GetDataLength() {}

// Range: 0x8005D88C -> 0x8005D894
// this: r1+0x0
void tGenericEvent::SetDataLength(unsigned int l /* r1+0x4 */) {}

// Range: 0x8005D894 -> 0x8005D8A0
// this: r1+0x0
void tGenericEvent::SetData(void * d /* r1+0x4 */, unsigned char del /* r1+0x8 */) {}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80138788
static // total size: 0x8
struct {} tEvent::__RTTI; // size: 0x8, address: 0x80138798
static // total size: 0x8
struct {} tBaseEvent::__RTTI; // size: 0x8, address: 0x801387A0
static // total size: 0x8
struct {} tGenericEvent::__RTTI; // size: 0x8, address: 0x801387A8



