/*
    Compile unit: C:\dolphin\build\libraries\ax\src\AXProf.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80015ED0 -> 0x80015F18
*/
// total size: 0x38
struct _AXPROFILE {
    // Members
    long long axFrameStart; // offset 0x0, size 0x8
    long long auxProcessingStart; // offset 0x8, size 0x8
    long long auxProcessingEnd; // offset 0x10, size 0x8
    long long userCallbackStart; // offset 0x18, size 0x8
    long long userCallbackEnd; // offset 0x20, size 0x8
    long long axFrameEnd; // offset 0x28, size 0x8
    unsigned long axNumVoices; // offset 0x30, size 0x4
};
static struct _AXPROFILE * __AXProfile; // size: 0x4, address: 0x8013AFB0
static unsigned long __AXMaxProfiles; // size: 0x4, address: 0x8013AFB4
static unsigned long __AXCurrentProfile; // size: 0x4, address: 0x8013AFB8
static unsigned long __AXProfileInitialized; // size: 0x4, address: 0x8013AFBC
// Range: 0x80015ED0 -> 0x80015F18
struct _AXPROFILE * __AXGetCurrentProfile() {
    // Local variables
    struct _AXPROFILE * profile; // r3

    // References
    // -> static unsigned long __AXMaxProfiles;
    // -> static unsigned long __AXCurrentProfile;
    // -> static struct _AXPROFILE * __AXProfile;
    // -> static unsigned long __AXProfileInitialized;
}




