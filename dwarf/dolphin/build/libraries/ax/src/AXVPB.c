/*
    Compile unit: C:\dolphin\build\libraries\ax\src\AXVPB.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80014DE8 -> 0x80015ED0
*/
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
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    signed short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x6
struct _AXPBFIR {
    // Members
    unsigned short numCoefs; // offset 0x0, size 0x2
    unsigned short coefsHi; // offset 0x2, size 0x2
    unsigned short coefsLo; // offset 0x4, size 0x2
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
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[8][2]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
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
static struct _AXPB __AXPB[64]; // size: 0x3000, address: 0x80120220
// total size: 0x40
struct _AXPBITDBUFFER {
    // Members
    signed short data[32]; // offset 0x0, size 0x40
};
static struct _AXPBITDBUFFER __AXITD[64]; // size: 0x1000, address: 0x80123220
// total size: 0x100
struct _AXPBU {
    // Members
    unsigned short data[128]; // offset 0x0, size 0x100
};
static struct _AXPBU __AXUpdates[64]; // size: 0x4000, address: 0x80124220
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
static struct _AXVPB __AXVPB[64]; // size: 0x7E00, address: 0x80128220
static unsigned long __AXSrcCycles[5]; // size: 0x14, address: 0x800FD1E8
static unsigned long __AXMixCycles[32]; // size: 0x80, address: 0x800FD1FC
static unsigned long __AXMaxDspCycles; // size: 0x4, address: 0x8013AFA0
static unsigned long __AXRecDspCycles; // size: 0x4, address: 0x8013AFA4
static unsigned long __AXNumVoices; // size: 0x4, address: 0x8013AFA8
// Range: 0x80014DE8 -> 0x80014DF0
unsigned long __AXGetNumVoices() {
    // References
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x80014DF0 -> 0x800154CC
void __AXServiceVPB(struct _AXVPB * pvpb /* r1+0x0 */) {
    // Local variables
    struct _AXPB * ppbDsp; // r5
    struct _AXPB * ppbUser; // r6
    unsigned long sync; // r1+0x0
    unsigned long * src; // r1+0x0
    unsigned long * dst; // r1+0x0
    unsigned long count; // r4
    unsigned short * src; // r8
    unsigned short * dst; // r9
    unsigned short * src; // r9
    unsigned short * dst; // r10
    unsigned long * dst_; // r8
    unsigned short * src; // r8
    unsigned short * dst; // r9
    unsigned long * src_; // r3
    unsigned long * dst_; // r8
    unsigned long count; // r7
    unsigned short * src; // r3
    unsigned short * dst; // r7
    unsigned short * src; // r3
    unsigned short * dst; // r7
    unsigned long * src; // r3
    unsigned long * dst; // r7
    unsigned long * src; // r3
    unsigned long * dst; // r7
    unsigned short * src; // r3
    unsigned short * dst; // r7
    unsigned short * src; // r3
    unsigned short * dst; // r4

    // References
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPB __AXPB[64];
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x800154CC -> 0x80015714
void __AXSyncPBs(unsigned long lessDspCycles /* r25 */) {
    // Local variables
    unsigned long cycles; // r29
    unsigned long i; // r28
    struct _AXVPB * pvpb; // r27

    // References
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPBITDBUFFER __AXITD[64];
    // -> static struct _AXPB __AXPB[64];
    // -> static unsigned long __AXRecDspCycles;
    // -> static unsigned long __AXMaxDspCycles;
    // -> static unsigned long __AXMixCycles[32];
    // -> static unsigned long __AXSrcCycles[5];
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x80015714 -> 0x80015720
struct _AXPB * __AXGetPBs() {
    // References
    // -> static struct _AXPB __AXPB[64];
}

// Range: 0x80015720 -> 0x8001575C
void __AXSetPBDefault(struct _AXVPB * p /* r1+0x0 */) {}

// Range: 0x8001575C -> 0x80015954
void __AXVPBInit() {
    // Local variables
    unsigned long i; // r1+0x8
    struct _AXVPB * pvpb; // r3
    unsigned long * p; // r4

    // References
    // -> static struct _AXPB __AXPB[64];
    // -> static struct _AXVPB __AXVPB[64];
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPBITDBUFFER __AXITD[64];
    // -> static unsigned long __AXRecDspCycles;
    // -> static unsigned long __AXMaxDspCycles;
}

// Range: 0x80015954 -> 0x80015A18
void AXSetVoiceSrcType(struct _AXVPB * p /* r30 */, unsigned long type /* r31 */) {
    // Local variables
    int old; // r3
    struct _AXPB * ppb; // r4
}

// Range: 0x80015A18 -> 0x80015A74
void AXSetVoiceState(struct _AXVPB * p /* r30 */, unsigned short state /* r31 */) {
    // Local variables
    int old; // r3
}

unsigned long __AXClMode; // size: 0x4, address: 0x8013AF54
// Range: 0x80015A74 -> 0x80015CD0
void AXSetVoiceMix(struct _AXVPB * p /* r29 */, struct _AXPBMIX * mix /* r30 */) {
    // Local variables
    int old; // r3
    unsigned short mixerCtrl; // r1+0x8
    unsigned short * dst; // r31
    unsigned short * src; // r1+0x8

    // References
    // -> unsigned long __AXClMode;
}

// Range: 0x80015CD0 -> 0x80015D28
void AXSetVoiceVe(struct _AXVPB * p /* r30 */, struct _AXPBVE * ve /* r31 */) {
    // Local variables
    int old; // r3
}

// Range: 0x80015D28 -> 0x80015E38
void AXSetVoiceAddr(struct _AXVPB * p /* r29 */, struct _AXPBADDR * addr /* r30 */) {
    // Local variables
    int old; // r3
    unsigned long * dst; // r31
    unsigned long * src; // r1+0x8
}

// Range: 0x80015E38 -> 0x80015ED0
void AXSetVoiceSrc(struct _AXVPB * p /* r29 */, struct _AXPBSRC * src_ /* r30 */) {
    // Local variables
    int old; // r3
    unsigned short * dst; // r31
    unsigned short * src; // r1+0x8
}




