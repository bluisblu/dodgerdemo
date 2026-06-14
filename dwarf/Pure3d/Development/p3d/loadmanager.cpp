/*
    Compile unit: D:\Pure3d\development\p3d\loadmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80046920 -> 0x80047BC4
*/
// total size: 0x14
struct {} tP3DFileHandler::__vtable; // size: 0x14, address: 0x80101EAC
// total size: 0x58
class tP3DFileHandler : public tFileHandler {
    // Functions
    tP3DFileHandler(int n);

    ~tP3DFileHandler();

    unsigned char CheckExtension(char * file);

    enum tLoadStatus Load(class tFile * file, class tEntityStore * store);

    class tChunkHandler * AddHandler(class tChunkHandler * l);

    class tChunkHandler * GetHandler(unsigned int chunkID);

    void RemoveAllHandlers();

    // Members
protected:
    int nLoadSlots; // offset 0x8, size 0x4
    int nLoaders; // offset 0xC, size 0x4
    class tChunkHandler * * loaders; // offset 0x10, size 0x4
    int nExtensions; // offset 0x14, size 0x4
    char extensions[8][8]; // offset 0x18, size 0x40
};
// ERROR: Failed to emit tag 26773C (GlobalSubroutine)
// total size: 0x8
class tRefCounted {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int refCount; // offset 0x4, size 0x4
};
// total size: 0x8
class tFileHandler : public tRefCounted {};
// ERROR: Failed to emit tag 267DB9 (GlobalSubroutine)
// Range: 0x80046B10 -> 0x80046BF4
// this: r26
unsigned char tP3DFileHandler::CheckExtension(char * file /* r27 */) {
    // Local variables
    int i; // r28
    int len; // r1+0x8
    int extLen; // r1+0x8
}

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
// Range: 0x80046BF4 -> 0x80046CDC
// this: r27
enum tLoadStatus tP3DFileHandler::Load(class tFile * file /* r4 */, class tEntityStore * store /* r28 */) {
    // Local variables
    class tChunkFile chunkFile; // r1+0x18
    enum tLoadStatus fileStatus; // r30
    int x; // r1+0x8
    class tChunkHandler * h; // r29
    enum tLoadStatus status; // r3
}

// Range: 0x80046CDC -> 0x80046D4C
// this: r1+0x0
class tChunkHandler * tP3DFileHandler::AddHandler(class tChunkHandler * l /* r4 */) {
    // Local variables
    int i; // r7
}

// Range: 0x80046D4C -> 0x80046DF0
// this: r28
class tChunkHandler * tP3DFileHandler::GetHandler(unsigned int chunkID /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80046DF0 -> 0x80046E58
// this: r27
void tP3DFileHandler::RemoveAllHandlers() {
    // Local variables
    int i; // r28
}

// total size: 0xC
struct {} tLoadManager::__vtable; // size: 0xC, address: 0x80101DFC
// total size: 0x10
struct {} tTask::__vtable; // size: 0x10, address: 0x80101E9C
// total size: 0x10
struct {} tLoadManager::LoadTask::__vtable; // size: 0x10, address: 0x80101E8C
// total size: 0x14
struct {} tBufferStore::__vtable; // size: 0x14, address: 0x80101E2C
// total size: 0x4
class MemoryManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
class tLoadManager : public tRefCounted {
    // Functions
    tLoadManager(int n);

    ~tLoadManager();

    enum tLoadStatus Load(class tFile * file, class tEntityStore * st);

    enum tLoadStatus LoadInternal(class tFile * file, class tEntityStore * st);

    void TriggerCallbacks();

    class tFileHandler * AddHandler(class tFileHandler * l);

    void RemoveAllHandlers();

    class tP3DFileHandler * GetP3DHandler();

    // Members
protected:
    class tEntityStore * store; // offset 0x8, size 0x4
    int nLoadSlots; // offset 0xC, size 0x4
    int nLoaders; // offset 0x10, size 0x4
    class tFileHandler * * loaders; // offset 0x14, size 0x4
    class MemoryManager * memManager; // offset 0x18, size 0x4
    class LoadTask * async; // offset 0x1C, size 0x4
};
// ERROR: Failed to emit tag 26AB16 (GlobalSubroutine)
// total size: 0xC
class tTask : public tRefCounted {
    // Members
protected:
    unsigned char suspended; // offset 0x8, size 0x1
};
// Range: 0x800470B0 -> 0x80047174
// this: r29
tLoadManager::~tLoadManager() {
    // References
    // -> struct [anonymous] tLoadManager::__vtable;
}

// Range: 0x80047174 -> 0x800471FC
// this: r28
enum tLoadStatus tLoadManager::Load(class tFile * file /* r29 */, class tEntityStore * st /* r30 */) {}

// Range: 0x800471FC -> 0x800472E0
// this: r27
enum tLoadStatus tLoadManager::LoadInternal(class tFile * file /* r28 */, class tEntityStore * st /* r29 */) {
    // Local variables
    int i; // r30
    enum tLoadStatus status; // r30
}

// Range: 0x800472E0 -> 0x80047364
// this: r1+0x8
void tLoadManager::TriggerCallbacks() {}

// Range: 0x80047364 -> 0x800473C8
// this: r1+0x0
class tFileHandler * tLoadManager::AddHandler(class tFileHandler * l /* r4 */) {
    // Local variables
    int i; // r7
}

// Range: 0x800473C8 -> 0x80047448
// this: r28
void tLoadManager::RemoveAllHandlers() {
    // Local variables
    int i; // r29
}

static // total size: 0x8
struct {} tRefCounted::__RTTI; // size: 0x8, address: 0x80137FC0
static // total size: 0x8
struct {} tFileHandler::__RTTI; // size: 0x8, address: 0x80137FC8
static // total size: 0x8
struct {} tP3DFileHandler::__RTTI; // size: 0x8, address: 0x80137FD0
// Range: 0x80047448 -> 0x800474F4
// this: r29
class tP3DFileHandler * tLoadManager::GetP3DHandler() {
    // References
    // -> static struct [anonymous] tFileHandler::__RTTI;
    // -> static struct [anonymous] tP3DFileHandler::__RTTI;
}

static // total size: 0x8
struct {} tEntityStore::__RTTI; // size: 0x8, address: 0x80137FD8
static // total size: 0x8
struct {} tInventory::__RTTI; // size: 0x8, address: 0x80137FE0
// total size: 0x18
class tSimpleChunkHandler : public tChunkHandler {
    // Functions
    enum tLoadStatus Load(class tChunkFile * file, class tEntityStore * store);

    unsigned char CheckChunkID(unsigned int id);

    // Members
protected:
    unsigned int _id; // offset 0x10, size 0x4
    enum tLoadStatus status; // offset 0x14, size 0x4
};
// total size: 0x458
class tInventory : public tEntityStore {
    // Members
protected:
    int nSection; // offset 0x8, size 0x4
    int currentSection; // offset 0xC, size 0x4
    unsigned char currentSectionOnly; // offset 0x10, size 0x1
    int sectionStack[16]; // offset 0x14, size 0x40
    int stackPos; // offset 0x54, size 0x4
    class tEntityTable * section[256]; // offset 0x58, size 0x400
};
// Range: 0x800474F4 -> 0x800475FC
// this: r29
enum tLoadStatus tSimpleChunkHandler::Load(class tChunkFile * file /* r31 */, class tEntityStore * store /* r30 */) {
    // Local variables
    class tEntity * t; // r31
    class tInventory * inv; // r3

    // References
    // -> static struct [anonymous] tEntityStore::__RTTI;
    // -> static struct [anonymous] tInventory::__RTTI;
}

// Range: 0x800475FC -> 0x80047620
void tSimpleChunkHandler::HandleCollision(class tEntity * e /* r4 */) {}

// Range: 0x80047620 -> 0x80047634
// this: r1+0x0
unsigned char tSimpleChunkHandler::CheckChunkID(unsigned int id /* r1+0x4 */) {}

static // total size: 0x8
struct {} tEntity::__RTTI; // size: 0x8, address: 0x80137FF0
static // total size: 0x8
struct {} tChunkHandler::__RTTI; // size: 0x8, address: 0x80137FF8
static // total size: 0x8
struct {} tSimpleChunkHandler::__RTTI; // size: 0x8, address: 0x80138000
// total size: 0x1C
struct {} tSimpleChunkHandler::__vtable; // size: 0x1C, address: 0x80101DB0
// total size: 0x10
class tEntity : public tRefCounted {
    // Members
    unsigned long long uid; // offset 0x8, size 0x8
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
static // total size: 0x8
struct {} tLoadManager::__RTTI; // size: 0x8, address: 0x80138008
static // total size: 0x8
struct {} tBufferStore::__RTTI; // size: 0x8, address: 0x80138010
// total size: 0x30
class tEntityTable : public tEntity {
    // Members
    int tableSize; // offset 0x10, size 0x4
    class tEntity * * table; // offset 0x14, size 0x4
    int nElement; // offset 0x18, size 0x4
    int resizeThreshhold; // offset 0x1C, size 0x4
    int nDeleteMarker; // offset 0x20, size 0x4
    int repackThreshhold; // offset 0x24, size 0x4
    class tEntity * deleteMarker; // offset 0x28, size 0x4
};
// total size: 0xC
class tBufferStore : public tEntityStore {
    // Functions
    ~tBufferStore();

    class tEntity * Find(class tSafeEntityCasterBase & caster, unsigned long long uid);

    void Store(class tEntity * obj);

    // Members
protected:
    class tEntityTable * tmpStore; // offset 0x8, size 0x4
};
// ERROR: Failed to emit tag 26E853 (GlobalSubroutine)
// total size: 0x20
class Iterator {
    // Members
    class tEntityTable * table; // offset 0x0, size 0x4
    unsigned long long uid; // offset 0x8, size 0x8
    int hash; // offset 0x10, size 0x4
    int increment; // offset 0x14, size 0x4
    int nSearch; // offset 0x18, size 0x4
};
// Range: 0x800476B4 -> 0x800477A4
// this: r3
class tEntity * tBufferStore::Find(class tSafeEntityCasterBase & caster /* r28 */, unsigned long long uid /* r30 */) {
    // Local variables
    class Iterator iterator; // r1+0x30
    class tEntity * obj; // r31
}

// Range: 0x800477A4 -> 0x800477C8
// this: r3
void tBufferStore::Store(class tEntity * obj /* r4 */) {}

static // total size: 0x8
struct {} tTask::__RTTI; // size: 0x8, address: 0x80138020
static // total size: 0x8
struct {} tLoadManager::LoadTask::__RTTI; // size: 0x8, address: 0x80138028
// total size: 0x4
class AsyncDone {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x20
struct queueEntry {
    // Members
    class tFile * file; // offset 0x0, size 0x4
    class AsyncDone * done; // offset 0x4, size 0x4
    void * user; // offset 0x8, size 0x4
    unsigned int handle; // offset 0xC, size 0x4
    unsigned long long section; // offset 0x10, size 0x8
    unsigned int pool; // offset 0x18, size 0x4
};
// total size: 0x10
struct callbackStruct {
    // Members
    enum tLoadStatus status; // offset 0x0, size 0x4
    class AsyncDone * callback; // offset 0x4, size 0x4
    void * user; // offset 0x8, size 0x4
    unsigned int handle; // offset 0xC, size 0x4
};
// total size: 0x468
class LoadTask : public tTask {
    // Functions
    ~LoadTask();

    void Run();

    // Static members
    static int currentHandle; // size: 0x4

    // Members
protected:
    struct queueEntry queue[32]; // offset 0x10, size 0x400
    int queueStart; // offset 0x410, size 0x4
    int queueEnd; // offset 0x414, size 0x4
    class tLoadManager * load; // offset 0x418, size 0x4
    class tBufferStore * store; // offset 0x41C, size 0x4
    int nCallbacks; // offset 0x420, size 0x4
    struct callbackStruct callbacks[4]; // offset 0x424, size 0x40
    unsigned char done; // offset 0x464, size 0x1
};
// Range: 0x800477C8 -> 0x80047848
// this: r30
LoadTask::~LoadTask() {
    // References
    // -> struct [anonymous] tTask::__vtable;
    // -> struct [anonymous] tLoadManager::LoadTask::__vtable;
}

// Range: 0x80047848 -> 0x80047BC4
// this: r31
void LoadTask::Run() {
    // Local variables
    enum tLoadStatus status; // r1+0x8
    unsigned long long uid; // r27
}




