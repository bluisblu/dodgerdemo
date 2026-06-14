/*
    Compile unit: D:\Pure3d\development\p3d\effects\particlechannel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006F898 -> 0x8006FCD8
*/
// total size: 0x10
class tParticleFloatChannel {
    // Functions
    tParticleFloatChannel(unsigned char temp_allocation);

    tParticleFloatChannel(int num, unsigned char temp_allocation);

    tParticleFloatChannel(class tParticleFloatChannel * channel, unsigned char temp_allocation);

    void SetValueOnFrame(int index, int frameNum, float value);

    void SetNumFrames(int num);

    void SetFrames(int * f);

    void SetData(float * d);

    float GetValueOnFrame(float frame);

    float GetMaxValue();

    ~tParticleFloatChannel();

    // Members
protected:
    unsigned char temp_allocated; // offset 0x0, size 0x1
    int numFrames; // offset 0x4, size 0x4
    int * frames; // offset 0x8, size 0x4
    float * data; // offset 0xC, size 0x4
};
// Range: 0x8006F898 -> 0x8006F8B0
// this: r3
tParticleFloatChannel::tParticleFloatChannel(unsigned char temp_allocation /* r1+0x4 */) {}

// Range: 0x8006F8B0 -> 0x8006F930
// this: r31
tParticleFloatChannel::tParticleFloatChannel(int num /* r1+0xC */, unsigned char temp_allocation /* r1+0x10 */) {}

// Range: 0x8006F930 -> 0x8006FA10
// this: r30
tParticleFloatChannel::tParticleFloatChannel(class tParticleFloatChannel * channel /* r31 */, unsigned char temp_allocation /* r1+0x10 */) {
    // Local variables
    class tParticleFloatChannel temp_allocation; // r1+0x14
}

// Range: 0x8006FA10 -> 0x8006FA3C
// this: r1+0x0
void tParticleFloatChannel::SetValueOnFrame(int index /* r1+0x4 */, int frameNum /* r1+0x8 */, float value /* r1+0xC */) {}

// Range: 0x8006FA3C -> 0x8006FA44
// this: r1+0x0
void tParticleFloatChannel::SetNumFrames(int num /* r1+0x4 */) {}

// Range: 0x8006FA44 -> 0x8006FA9C
// this: r30
void tParticleFloatChannel::SetFrames(int * f /* r31 */) {}

// Range: 0x8006FA9C -> 0x8006FAF4
// this: r30
void tParticleFloatChannel::SetData(float * d /* r31 */) {}

// Range: 0x8006FAF4 -> 0x8006FC24
// this: r1+0x8
float tParticleFloatChannel::GetValueOnFrame(float frame /* r1+0xC */) {
    // Local variables
    int lastFrame; // r1+0x8
    int i; // r9
    int prevKeyFrame; // r10
}

// Range: 0x8006FC24 -> 0x8006FC5C
// this: r1+0x0
float tParticleFloatChannel::GetMaxValue() {
    // Local variables
    float max; // f1
    int i; // r1+0x0
}

// Range: 0x8006FC5C -> 0x8006FCD8
// this: r30
tParticleFloatChannel::~tParticleFloatChannel() {}




