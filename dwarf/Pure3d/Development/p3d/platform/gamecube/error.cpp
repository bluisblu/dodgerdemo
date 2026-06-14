/*
    Compile unit: D:\Pure3d\development\p3d\platform\gamecube\error.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80036FA0 -> 0x80037390
*/
void (* debugHandlers[3][4])(char *); // size: 0x30, address: 0x80100418
class tDebugLog * debugLog; // size: 0x4, address: 0x8013B218
// total size: 0x1
class tDebug {};
// Range: 0x80036FA0 -> 0x80037068
void tDebug::Verify(int cond /* r1+0x8 */, char * msg1 /* r4 */, char * msg2 /* r28 */, char * msg3 /* r29 */, char * msg4 /* r30 */, char * msg5 /* r31 */) {
    // Local variables
    char buf[255]; // r1+0x20
}

// Range: 0x80037068 -> 0x80037088
void tDebug::dmODS(char * message /* r3 */) {}

// Range: 0x80037088 -> 0x800370A8
void tDebug::dmMessageBox(char * message /* r3 */) {}

enum HandlerSet {
    OBLIVIOUS = 0,
    NORMAL = 1,
    PARANIOD = 2,
    ADD_FILE = 3,
    ODS_TO_CONSOLE = 4,
};
enum Severity {
    INFO = 0,
    WARN = 1,
    FATAL = 2,
};
// Range: 0x800370A8 -> 0x8003711C
void tDebug::Message(enum Severity severity /* r1+0x8 */, char * message /* r29 */) {
    // Local variables
    int i; // r30

    // References
    // -> void (* debugHandlers[3][4])(char *);
}

static char bufferChars[1024]; // size: 0x400, address: 0x80132B40
static unsigned char first$279; // size: 0x1, address: 0x8013B21C
static signed char init$280; // size: 0x1, address: 0x8013B21D
static signed char init$286; // size: 0x1, address: 0x8013B21E
// total size: 0x8
class tDebugLog {
    // Functions
    void SetSeverity(enum Severity s);

    tDebugLog();

    ~tDebugLog();

    class tDebugLog & operator<<(char * value);

    class tDebugLog & operator<<(enum p3dLogManip manip);

    // Members
    enum Severity severity; // offset 0x0, size 0x4
    unsigned char inMessage; // offset 0x4, size 0x1
};
static class tDebugLog static_log$284; // size: 0x8, address: 0x8013B220
// Range: 0x8003711C -> 0x800371C4
class tDebugLog & tDebug::Log(enum Severity severity /* r31 */) {
    // References
    // -> class tDebugLog * debugLog;
    // -> static unsigned char first$279;
    // -> static class tDebugLog static_log$284;
    // -> static signed char init$286;
    // -> static signed char init$280;
}

// Range: 0x800371C4 -> 0x80037214
// this: r30
void tDebugLog::SetSeverity(enum Severity s /* r31 */) {}

// Range: 0x80037214 -> 0x80037224
// this: r3
tDebugLog::tDebugLog() {}

// Range: 0x80037224 -> 0x80037288
// this: r30
tDebugLog::~tDebugLog() {}

// Range: 0x80037288 -> 0x800372DC
// this: r31
class tDebugLog & tDebugLog::operator<<(char * value /* r4 */) {
    // References
    // -> static char bufferChars[1024];
}

enum p3dLogManip {
    log_endl = 0,
};
// Range: 0x800372DC -> 0x80037390
// this: r28
class tDebugLog & tDebugLog::operator<<(enum p3dLogManip manip /* r1+0xC */) {
    // References
    // -> static char bufferChars[1024];
    // -> void (* debugHandlers[3][4])(char *);
}




