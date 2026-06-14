/*
    Compile unit: D:\Pure3d\development\lib\freetype\src\base\ftlist.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80099460 -> 0x8009958C
*/
// Range: 0x80099460 -> 0x80099488
struct FT_ListNodeRec_ * FT_List_Find(struct FT_ListRec_ * list /* r1+0x0 */, void * data /* r1+0x4 */) {
    // Local variables
    struct FT_ListNodeRec_ * cur; // r3
}

// Range: 0x80099488 -> 0x800994B4
void FT_List_Add(struct FT_ListRec_ * list /* r1+0x0 */, struct FT_ListNodeRec_ * node /* r1+0x4 */) {
    // Local variables
    struct FT_ListNodeRec_ * before; // r5
}

// Range: 0x800994B4 -> 0x800994E8
void FT_List_Remove(struct FT_ListRec_ * list /* r1+0x0 */, struct FT_ListNodeRec_ * node /* r1+0x4 */) {
    // Local variables
    struct FT_ListNodeRec_ * before; // r1+0x0
    struct FT_ListNodeRec_ * after; // r4
}

// Range: 0x800994E8 -> 0x8009958C
void FT_List_Finalize(struct FT_ListRec_ * list /* r26 */, void (* destroy)(struct FT_MemoryRec_ *, void *, void *) /* r27 */, struct FT_MemoryRec_ * memory /* r28 */, void * user /* r29 */) {
    // Local variables
    struct FT_ListNodeRec_ * cur; // r1+0x18
    struct FT_ListNodeRec_ * next; // r30
    void * data; // r4
}




