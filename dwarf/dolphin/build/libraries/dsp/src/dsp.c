/*
    Compile unit: c:\dolphin\build\libraries\dsp\src\dsp.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001F128 -> 0x8001F36C
*/
static int __DSP_init_flag; // size: 0x4, address: 0x8013B160
// Range: 0x8001F128 -> 0x8001F138
unsigned long DSPCheckMailToDSP() {}

// Range: 0x8001F138 -> 0x8001F148
unsigned long DSPCheckMailFromDSP() {}

// Range: 0x8001F148 -> 0x8001F160
unsigned long DSPReadMailFromDSP() {}

// Range: 0x8001F160 -> 0x8001F174
void DSPSendMailToDSP(unsigned long mail /* r1+0x0 */) {}

// total size: 0x50
struct STRUCT_DSP_TASK {
    // Members
    unsigned long state; // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    unsigned long flags; // offset 0x8, size 0x4
    unsigned short * iram_mmem_addr; // offset 0xC, size 0x4
    unsigned long iram_length; // offset 0x10, size 0x4
    unsigned long iram_addr; // offset 0x14, size 0x4
    unsigned short * dram_mmem_addr; // offset 0x18, size 0x4
    unsigned long dram_length; // offset 0x1C, size 0x4
    unsigned long dram_addr; // offset 0x20, size 0x4
    unsigned short dsp_init_vector; // offset 0x24, size 0x2
    unsigned short dsp_resume_vector; // offset 0x26, size 0x2
    void (* init_cb)(void *); // offset 0x28, size 0x4
    void (* res_cb)(void *); // offset 0x2C, size 0x4
    void (* done_cb)(void *); // offset 0x30, size 0x4
    void (* req_cb)(void *); // offset 0x34, size 0x4
    struct STRUCT_DSP_TASK * next; // offset 0x38, size 0x4
    struct STRUCT_DSP_TASK * prev; // offset 0x3C, size 0x4
    long long t_context; // offset 0x40, size 0x8
    long long t_task; // offset 0x48, size 0x8
};
struct STRUCT_DSP_TASK * __DSP_first_task; // size: 0x4, address: 0x8013B170
struct STRUCT_DSP_TASK * __DSP_last_task; // size: 0x4, address: 0x8013B16C
struct STRUCT_DSP_TASK * __DSP_curr_task; // size: 0x4, address: 0x8013B168
struct STRUCT_DSP_TASK * __DSP_tmp_task; // size: 0x4, address: 0x8013B164
// Range: 0x8001F174 -> 0x8001F22C
void DSPInit() {
    // Local variables
    int old; // r31
    unsigned short tmp; // r3

    // References
    // -> static int __DSP_init_flag;
    // -> struct STRUCT_DSP_TASK * __DSP_tmp_task;
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
    // -> struct STRUCT_DSP_TASK * __DSP_last_task;
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
}

// Range: 0x8001F22C -> 0x8001F234
int DSPCheckInit() {
    // References
    // -> static int __DSP_init_flag;
}

// Range: 0x8001F234 -> 0x8001F2A4
struct STRUCT_DSP_TASK * DSPAddTask(struct STRUCT_DSP_TASK * task /* r30 */) {
    // Local variables
    int old; // r31

    // References
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
}

struct STRUCT_DSP_TASK * __DSP_rude_task; // size: 0x4, address: 0x8013B17C
int __DSP_rude_task_pending; // size: 0x4, address: 0x8013B178
// Range: 0x8001F2A4 -> 0x8001F36C
struct STRUCT_DSP_TASK * DSPAssertTask(struct STRUCT_DSP_TASK * task /* r30 */) {
    // Local variables
    int old; // r31

    // References
    // -> int __DSP_rude_task_pending;
    // -> struct STRUCT_DSP_TASK * __DSP_rude_task;
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
}




