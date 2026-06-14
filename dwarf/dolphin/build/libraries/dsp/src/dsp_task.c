/*
    Compile unit: c:\dolphin\build\libraries\dsp\src\dsp_task.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8001F3BC -> 0x8001FC40
*/
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
int __DSP_rude_task_pending; // size: 0x4, address: 0x8013B178
struct STRUCT_DSP_TASK * __DSP_rude_task; // size: 0x4, address: 0x8013B17C
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    double psf[32]; // offset 0x1C8, size 0x100
};
// ERROR: Failed to emit tag 15C51A (GlobalSubroutine)
// Range: 0x8001F7E0 -> 0x8001F980
void __DSP_exec_task(struct STRUCT_DSP_TASK * curr /* r30 */, struct STRUCT_DSP_TASK * next /* r31 */) {}

// Range: 0x8001F980 -> 0x8001FB0C
void __DSP_boot_task(struct STRUCT_DSP_TASK * task /* r30 */) {
    // Local variables
    unsigned long mail; // r1+0xC
}

// ERROR: Failed to emit tag 15C6EF (GlobalSubroutine)
// ERROR: Failed to emit tag 15C7E5 (GlobalSubroutine)



