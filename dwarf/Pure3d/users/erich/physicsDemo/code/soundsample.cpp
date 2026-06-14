/*
    Compile unit: D:\Pure3d\users\erich\physicsDemo\code\soundsample.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000C024 -> 0x8000C730
*/
// total size: 0xE
struct _AXPBITD {
    // Members
    unsigned short flag; // offset 0x0, size 0x2
    unsigned short bufferHi; // offset 0x2, size 0x2
    unsigned short bufferLo; // offset 0x4, size 0x2
    unsigned short shiftL; // offset 0x6, size 0x2
    unsigned short shiftR; // offset 0x8, size 0x2
    unsigned short targetShiftL; // offset 0xA, size 0x2
    unsigned short targetShiftR; // offset 0xC, size 0x2
};
// total size: 0xE
struct _AXPBUPDATE {
    // Members
    unsigned short updNum[5]; // offset 0x0, size 0xA
    unsigned short dataHi; // offset 0xA, size 0x2
    unsigned short dataLo; // offset 0xC, size 0x2
};
// total size: 0x12
struct _AXPBDPOP {
    // Members
    signed short aL; // offset 0x0, size 0x2
    signed short aAuxAL; // offset 0x2, size 0x2
    signed short aAuxBL; // offset 0x4, size 0x2
    signed short aR; // offset 0x6, size 0x2
    signed short aAuxAR; // offset 0x8, size 0x2
    signed short aAuxBR; // offset 0xA, size 0x2
    signed short aS; // offset 0xC, size 0x2
    signed short aAuxAS; // offset 0xE, size 0x2
    signed short aAuxBS; // offset 0x10, size 0x2
};
// total size: 0x6
struct _AXPBFIR {
    // Members
    unsigned short numCoefs; // offset 0x0, size 0x2
    unsigned short coefsHi; // offset 0x2, size 0x2
    unsigned short coefsLo; // offset 0x4, size 0x2
};
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[8][2]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0x6
struct _AXPBADPCMLOOP {
    // Members
    unsigned short loop_pred_scale; // offset 0x0, size 0x2
    unsigned short loop_yn1; // offset 0x2, size 0x2
    unsigned short loop_yn2; // offset 0x4, size 0x2
};
// total size: 0xC0
struct _AXPB {
    // Members
    unsigned short nextHi; // offset 0x0, size 0x2
    unsigned short nextLo; // offset 0x2, size 0x2
    unsigned short currHi; // offset 0x4, size 0x2
    unsigned short currLo; // offset 0x6, size 0x2
    unsigned short srcSelect; // offset 0x8, size 0x2
    unsigned short coefSelect; // offset 0xA, size 0x2
    unsigned short mixerCtrl; // offset 0xC, size 0x2
    unsigned short state; // offset 0xE, size 0x2
    unsigned short type; // offset 0x10, size 0x2
    struct _AXPBMIX mix; // offset 0x12, size 0x24
    struct _AXPBITD itd; // offset 0x36, size 0xE
    struct _AXPBUPDATE update; // offset 0x44, size 0xE
    struct _AXPBDPOP dpop; // offset 0x52, size 0x12
    struct _AXPBVE ve; // offset 0x64, size 0x4
    struct _AXPBFIR fir; // offset 0x68, size 0x6
    struct _AXPBADDR addr; // offset 0x6E, size 0x10
    struct _AXPBADPCM adpcm; // offset 0x7E, size 0x28
    struct _AXPBSRC src; // offset 0xA6, size 0xE
    struct _AXPBADPCMLOOP adpcmLoop; // offset 0xB4, size 0x6
    unsigned short pad[3]; // offset 0xBA, size 0x6
};
// total size: 0x1F8
struct _AXVPB {
    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    void * next1; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    void (* callback)(void *); // offset 0x10, size 0x4
    unsigned long userContext; // offset 0x14, size 0x4
    unsigned long index; // offset 0x18, size 0x4
    unsigned long sync; // offset 0x1C, size 0x4
    unsigned long depop; // offset 0x20, size 0x4
    unsigned long updateMS; // offset 0x24, size 0x4
    unsigned long updateCounter; // offset 0x28, size 0x4
    unsigned long updateTotal; // offset 0x2C, size 0x4
    unsigned short * updateWrite; // offset 0x30, size 0x4
    unsigned short updateData[128]; // offset 0x34, size 0x100
    void * itdBuffer; // offset 0x134, size 0x4
    struct _AXPB pb; // offset 0x138, size 0xC0
};
struct _AXVPB * mVoiceAlloc[64]; // size: 0x100, address: 0x80117740
class SoundSample * mSilence; // size: 0x4, address: 0x8013AE98
unsigned long mSilenceStart; // size: 0x4, address: 0x8013AE9C
unsigned long mSilenceEnd; // size: 0x4, address: 0x8013AEA0
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned long owner; // offset 0x4, size 0x4
    unsigned long type; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    unsigned long source; // offset 0x10, size 0x4
    unsigned long dest; // offset 0x14, size 0x4
    unsigned long length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
// total size: 0xC
struct AllocInfo {
    // Members
    unsigned long start; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
    unsigned char released; // offset 0x8, size 0x1
};
// total size: 0x2C
class ARAMObj {
    // Static members
    static int mAllocHead; // size: 0x4
    static struct AllocInfo mAllocInfo[257]; // size: 0xC0C

    // Members
    struct ARQRequest mTransferRequest; // offset 0x0, size 0x20
    struct AllocInfo * mAlloc; // offset 0x20, size 0x4
    unsigned char mTransferring; // offset 0x24, size 0x1
    unsigned long mAllocSize; // offset 0x28, size 0x4
};
// total size: 0x8
class SoundSample {
    // Functions
    SoundSample(char * filename, int samplerate);

    void SetData(void * data, unsigned long destoffset);

    int Play(unsigned char loop, float volumeDB, float pan, float pitchmult);

    // Static members
    static unsigned long mSilenceEnd; // size: 0x4
    static unsigned long mSilenceStart; // size: 0x4
    static class SoundSample * mSilence; // size: 0x4
    static struct _AXVPB * mVoiceAlloc[64]; // size: 0x100

    // Members
protected:
    class ARAMObj * mARAM; // offset 0x0, size 0x4
    int mSampleRate; // offset 0x4, size 0x4
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// Range: 0x8000C024 -> 0x8000C11C
// this: r28
SoundSample::SoundSample(char * filename /* r29 */, int samplerate /* r1+0x10 */) {
    // Local variables
    struct DVDFileInfo fi; // r1+0x14
    unsigned char ok; // r1+0x8
    unsigned long size; // r31
    unsigned long readsize; // r30
    char * data; // r29
}

// Range: 0x8000C11C -> 0x8000C174
// this: r31
void SoundSample::SetData(void * data /* r4 */, unsigned long destoffset /* r6 */) {}

// total size: 0x24
struct _AXPBMIX {
    // Members
    unsigned short vL; // offset 0x0, size 0x2
    unsigned short vDeltaL; // offset 0x2, size 0x2
    unsigned short vR; // offset 0x4, size 0x2
    unsigned short vDeltaR; // offset 0x6, size 0x2
    unsigned short vAuxAL; // offset 0x8, size 0x2
    unsigned short vDeltaAuxAL; // offset 0xA, size 0x2
    unsigned short vAuxAR; // offset 0xC, size 0x2
    unsigned short vDeltaAuxAR; // offset 0xE, size 0x2
    unsigned short vAuxBL; // offset 0x10, size 0x2
    unsigned short vDeltaAuxBL; // offset 0x12, size 0x2
    unsigned short vAuxBR; // offset 0x14, size 0x2
    unsigned short vDeltaAuxBR; // offset 0x16, size 0x2
    unsigned short vAuxBS; // offset 0x18, size 0x2
    unsigned short vDeltaAuxBS; // offset 0x1A, size 0x2
    unsigned short vS; // offset 0x1C, size 0x2
    unsigned short vDeltaS; // offset 0x1E, size 0x2
    unsigned short vAuxAS; // offset 0x20, size 0x2
    unsigned short vDeltaAuxAS; // offset 0x22, size 0x2
};
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    signed short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x10
struct _AXPBADDR {
    // Members
    unsigned short loopFlag; // offset 0x0, size 0x2
    unsigned short format; // offset 0x2, size 0x2
    unsigned short loopAddressHi; // offset 0x4, size 0x2
    unsigned short loopAddressLo; // offset 0x6, size 0x2
    unsigned short endAddressHi; // offset 0x8, size 0x2
    unsigned short endAddressLo; // offset 0xA, size 0x2
    unsigned short currentAddressHi; // offset 0xC, size 0x2
    unsigned short currentAddressLo; // offset 0xE, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
};
// Range: 0x8000C174 -> 0x8000C46C
// this: r29
int SoundSample::Play(unsigned char loop /* r30 */, float volumeDB /* f30 */, float pan /* f29 */, float pitchmult /* f31 */) {
    // Local variables
    struct _AXVPB * voice; // r31
    float volL; // f2
    float volR; // f30
    int ivolL; // r28
    int ivolR; // r5
    struct _AXPBMIX mix; // r1+0x58
    struct _AXPBVE ve; // r1+0x54
    struct _AXPBADDR addr; // r1+0x44
    struct _AXPBSRC src; // r1+0x34
    int samplestart; // r6
    int sampleend; // r5
    int srmult; // r6

    // References
    // -> struct _AXVPB * mVoiceAlloc[64];
    // -> unsigned long mSilenceStart;
}

// Range: 0x8000C46C -> 0x8000C6B8
void SoundSample::Init() {
    // Local variables
    int a; // r1+0x8
    unsigned long fivems; // r30
    signed short * zeros; // r29

    // References
    // -> unsigned long mSilenceEnd;
    // -> unsigned long mSilenceStart;
    // -> class SoundSample * mSilence;
    // -> struct _AXVPB * mVoiceAlloc[64];
}

// Range: 0x8000C6B8 -> 0x8000C72C
void SoundSample::Update() {
    // Local variables
    int a; // r29

    // References
    // -> struct _AXVPB * mVoiceAlloc[64];
}

// Range: 0x8000C72C -> 0x8000C730
void SoundSample::VoiceDropCallback() {}




