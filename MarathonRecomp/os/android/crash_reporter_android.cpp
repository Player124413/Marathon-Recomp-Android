// Crash reporter — Android implementation.
//
// Installs async-signal-safe handlers for the six most common fatal signals
// and overrides std::terminate.  On a crash it:
//
//   1. Captures a stack trace via _Unwind_Backtrace + dladdr().
//   2. Logs the crash header, stack, and recent log lines to logcat.
//   3. Appends the same information to _game_log.txt (the persistent log the
//      launcher already shows to the user) using low-level write() calls so
//      stdio corruption cannot suppress the output.
//   4. Overwrites _crash_sentinel with the signal name so the launcher can
//      show a meaningful error dialog instead of a silent black screen.
//   5. Re-raises the signal (via SA_RESETHAND) so the OS produces a tombstone.

#ifdef __ANDROID__

#include <os/crash_reporter.h>
#include <version.h>

#include <android/log.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <inttypes.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <unwind.h>

#include <atomic>
#include <array>
#include <cstdio>
#include <exception>
#include <string>

// Implemented in kernel/memory.cpp. Formats the emulated PowerPC state of the
// crashing thread (link register above all) into the caller's buffer, or
// returns 0 when the crashing thread is not a guest thread.
extern "C" int MarathonDescribeGuestState(char* buf, size_t size);

#define CRASH_TAG      "MarathonRecomp-Crash"
#define MAX_FRAMES     48
#define LOG_RING_SIZE  80        // keep last 80 log lines
#define LOG_LINE_MAX   320       // max chars per kept line

// ─── Recent-log ring buffer ───────────────────────────────────────────────────
// Written by the logger (PushLogLine) and read by the crash handler.
// The crash handler reads without a lock: safe because (a) we're already in a
// fatal state and (b) uint32_t atomic loads/stores are guaranteed lock-free.

namespace os::crash_reporter::internal
{

struct LogLine { char text[LOG_LINE_MAX]; };

static std::array<LogLine, LOG_RING_SIZE> s_logRing{};
// next-write index (monotonically increasing; slot = value % LOG_RING_SIZE).
static std::atomic<uint32_t> s_logHead{0};

void PushLogLine(const char* line, size_t len)
{
    uint32_t slot = s_logHead.fetch_add(1, std::memory_order_relaxed) % LOG_RING_SIZE;
    size_t n = (len < LOG_LINE_MAX - 1) ? len : (LOG_LINE_MAX - 1);
    memcpy(s_logRing[slot].text, line, n);
    s_logRing[slot].text[n] = '\0';
}

} // namespace os::crash_reporter::internal

// ─── Module state ─────────────────────────────────────────────────────────────

// 512 bytes is enough for any Android external-storage path.
static char s_dataPath[512] = {};
static struct sigaction s_oldHandlers[NSIG] = {};
static std::terminate_handler s_oldTerminate = nullptr;

// 64 KiB alternate signal stack — required to catch SIGSEGV from stack overflow.
alignas(16) static uint8_t s_altStack[65536];

// ─── Signal name table ────────────────────────────────────────────────────────

static const char* SignalName(int sig)
{
    switch (sig)
    {
    case SIGSEGV: return "SIGSEGV (Segmentation Fault — invalid memory access)";
    case SIGABRT: return "SIGABRT (Abort — assert / explicit abort())";
    case SIGFPE:  return "SIGFPE  (Floating-Point Exception — div-by-zero or overflow)";
    case SIGBUS:  return "SIGBUS  (Bus Error — misaligned or unmapped memory)";
    case SIGILL:  return "SIGILL  (Illegal Instruction — bad opcode or corrupt stack)";
    case SIGTRAP: return "SIGTRAP (Trap — breakpoint or __builtin_trap)";
    case SIGPIPE: return "SIGPIPE (Broken Pipe — write to closed socket/pipe)";
    default:      return "Unknown signal";
    }
}

// ─── Minimal async-signal-safe I/O helpers ────────────────────────────────────
// We avoid printf/fwrite because stdio buffers may be corrupt after a crash.

static void FdWrite(int fd, const char* s)
{
    if (fd < 0 || !s || !*s) return;
    ::write(fd, s, strlen(s));
}

// Render a uintptr_t as lowercase hex into buf[bufsz]; return pointer to the
// start of the number inside buf (not necessarily buf[0]).
static char* FmtHex(char* buf, size_t bufsz, uintptr_t v)
{
    static const char kHex[] = "0123456789abcdef";
    buf[bufsz - 1] = '\0';
    size_t i = bufsz - 1;
    if (v == 0)
    {
        buf[--i] = '0';
    }
    else
    {
        while (v && i > 0) { buf[--i] = kHex[v & 0xF]; v >>= 4; }
    }
    // Left-pad to 16 hex digits for addresses.
    while ((bufsz - 1 - i) < 16 && i > 0) buf[--i] = '0';
    return buf + i;
}

static char* FmtDec(char* buf, size_t bufsz, uint64_t v)
{
    buf[bufsz - 1] = '\0';
    size_t i = bufsz - 1;
    if (v == 0) { buf[--i] = '0'; }
    else { while (v && i > 0) { buf[--i] = (char)('0' + v % 10); v /= 10; } }
    return buf + i;
}

// ─── Stack unwinder ───────────────────────────────────────────────────────────

struct UnwindState
{
    uintptr_t frames[MAX_FRAMES];
    int       count = 0;
    int       skip  = 0;   // number of leading frames to discard (crash handler frames)
};

static _Unwind_Reason_Code UnwindCallback(struct _Unwind_Context* ctx, void* arg)
{
    auto* st = static_cast<UnwindState*>(arg);
    if (st->skip > 0) { --st->skip; return _URC_NO_REASON; }
    if (st->count >= MAX_FRAMES) return _URC_END_OF_STACK;
    uintptr_t pc = _Unwind_GetIP(ctx);
    if (pc) st->frames[st->count++] = pc;
    return _URC_NO_REASON;
}

// ─── Core crash-report writer ─────────────────────────────────────────────────

static void WriteCrashReport(int signum, siginfo_t* si, bool fromTerminate)
{
    // ── Timestamp ──
    char tsBuf[64] = "<unknown time>";
    {
        time_t t = time(nullptr);
        struct tm tm_info = {};
        localtime_r(&t, &tm_info);
        strftime(tsBuf, sizeof(tsBuf), "%Y-%m-%d %H:%M:%S", &tm_info);
    }

    // ── Logcat banner ──
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "╔══════════════════════════════════════════════╗");
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "║          MARATHON RECOMP CRASH REPORT        ║");
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "╚══════════════════════════════════════════════╝");
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "Time     : %s", tsBuf);
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "Version  : %s", g_versionString);

    const char* causeStr = nullptr;
    char causeBuf[256];
    if (fromTerminate)
    {
        causeStr = "std::terminate — unhandled C++ exception or pure-virtual call";
        __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG, "Cause    : %s", causeStr);
    }
    else
    {
        snprintf(causeBuf, sizeof(causeBuf), "%s (signal %d)", SignalName(signum), signum);
        causeStr = causeBuf;
        __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG, "Signal   : %s", causeStr);
        if (si && (signum == SIGSEGV || signum == SIGBUS))
            __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
                "FaultAt  : 0x%016" PRIxPTR, (uintptr_t)si->si_addr);
    }

    // ── Guest CPU state ──
    // The host stack trace can be empty (null function pointer => pc = 0), so
    // capture the emulated PowerPC state too: its link register points at the
    // call that was in progress, which survives even when host unwinding does
    // not. Implemented in kernel/memory.cpp; returns 0 if this thread is not a
    // guest thread.
    char guestState[256] = {};
    const int guestStateLen = MarathonDescribeGuestState(guestState, sizeof(guestState));
    if (guestStateLen > 0)
        __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG, "Guest    : %s", guestState);

    // ── Stack trace ──
    // Do NOT skip frames when the unwinder is likely to produce very few of
    // them. A jump through a null function pointer (the "pc=0" crash) leaves
    // no valid frame at the fault site, so _Unwind_Backtrace often yields
    // only the handler's own frames - and skipping those printed an EMPTY
    // stack trace, which is exactly the useless report this project kept
    // getting. Keeping everything is far better than discarding the only
    // frames available; the handler frames are clearly named anyway.
    UnwindState uw{};
    uw.skip = 0;
    _Unwind_Backtrace(UnwindCallback, &uw);

    if (uw.count == 0)
    {
        __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
            "Stack trace unavailable — this is typical for a jump through a null function pointer "
            "(faulting pc = 0), where no return frame exists to unwind.");
    }

    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "Stack trace (%d frames):", uw.count);
    for (int i = 0; i < uw.count; i++)
    {
        uintptr_t pc = uw.frames[i];
        Dl_info info{};
        if (dladdr(reinterpret_cast<void*>(pc), &info) && info.dli_fname)
        {
            uintptr_t symOff = info.dli_saddr
                ? (pc - reinterpret_cast<uintptr_t>(info.dli_saddr)) : 0;
            __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
                "  #%02d  0x%016" PRIxPTR "  %s  (%s+0x%zx)",
                i, pc,
                info.dli_sname ? info.dli_sname : "?",
                info.dli_fname, (size_t)symOff);
        }
        else
        {
            __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
                "  #%02d  0x%016" PRIxPTR "  ??", i, pc);
        }
    }

    // ── Recent log lines from ring buffer ──
    {
        using namespace os::crash_reporter::internal;
        uint32_t head  = s_logHead.load(std::memory_order_relaxed);
        uint32_t total = (head < LOG_RING_SIZE) ? head : LOG_RING_SIZE;
        uint32_t start = (head >= LOG_RING_SIZE) ? (head - LOG_RING_SIZE) : 0;
        __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
            "--- Last %u log lines ---", total);
        for (uint32_t i = start; i < head; i++)
        {
            const char* line = s_logRing[i % LOG_RING_SIZE].text;
            if (line[0])
                __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG, "  %s", line);
        }
    }
    __android_log_print(ANDROID_LOG_FATAL, CRASH_TAG,
        "══════════════════════════════════════════════");

    // ── Write to persistent log file ──────────────────────────────────────────
    // Open in append mode so the crash section joins the normal session log.
    // Use write() rather than stdio to avoid corrupt FILE* buffers.
    if (s_dataPath[0])
    {
        char path[600];
        snprintf(path, sizeof(path), "%s/_game_log.txt", s_dataPath);
        int fd = open(path, O_WRONLY | O_CREAT | O_APPEND, 0644);
        if (fd >= 0)
        {
            char numBuf[32], addrBuf[32];

            FdWrite(fd, "\n╔═══════════════════════════════════════╗\n");
            FdWrite(fd, "║         CRASH REPORT                  ║\n");
            FdWrite(fd, "╚═══════════════════════════════════════╝\n");
            FdWrite(fd, "Time     : "); FdWrite(fd, tsBuf);      FdWrite(fd, "\n");
            FdWrite(fd, "Version  : "); FdWrite(fd, g_versionString); FdWrite(fd, "\n");
            FdWrite(fd, "Cause    : "); FdWrite(fd, causeStr);   FdWrite(fd, "\n");

            if (!fromTerminate && si && (signum == SIGSEGV || signum == SIGBUS))
            {
                FdWrite(fd, "FaultAt  : 0x");
                FdWrite(fd, FmtHex(addrBuf, sizeof(addrBuf), (uintptr_t)si->si_addr));
                FdWrite(fd, "\n");
            }

            if (guestStateLen > 0)
            {
                FdWrite(fd, "Guest    : ");
                FdWrite(fd, guestState);
                FdWrite(fd, "\n");
            }

            FdWrite(fd, "--- Stack trace ---\n");
            if (uw.count == 0)
            {
                FdWrite(fd, "  (empty — typical for a jump through a null function pointer: with pc = 0\n"
                            "   there is no frame to unwind. Look at the log lines below instead; if an\n"
                            "   \"Indirect call to guest address\" error precedes this report, that address\n"
                            "   is the missing function.)\n");
            }
            for (int i = 0; i < uw.count; i++)
            {
                uintptr_t pc = uw.frames[i];
                Dl_info info{};

                FdWrite(fd, "  #");
                FdWrite(fd, FmtDec(numBuf, sizeof(numBuf), (uint64_t)i));
                FdWrite(fd, "  0x");
                FdWrite(fd, FmtHex(addrBuf, sizeof(addrBuf), pc));

                if (dladdr(reinterpret_cast<void*>(pc), &info) && info.dli_fname)
                {
                    uintptr_t symOff = info.dli_saddr
                        ? (pc - reinterpret_cast<uintptr_t>(info.dli_saddr)) : 0;
                    char offBuf[32];
                    FdWrite(fd, "  ");
                    FdWrite(fd, info.dli_sname ? info.dli_sname : "?");
                    FdWrite(fd, "  (");
                    FdWrite(fd, info.dli_fname);
                    FdWrite(fd, " + 0x");
                    FdWrite(fd, FmtHex(offBuf, sizeof(offBuf), symOff));
                    FdWrite(fd, ")\n");
                }
                else
                {
                    FdWrite(fd, "  ??\n");
                }
            }

            // Recent log lines
            {
                using namespace os::crash_reporter::internal;
                uint32_t head  = s_logHead.load(std::memory_order_relaxed);
                uint32_t start = (head >= LOG_RING_SIZE) ? (head - LOG_RING_SIZE) : 0;
                FdWrite(fd, "--- Last log lines ---\n");
                for (uint32_t i = start; i < head; i++)
                {
                    const char* line = s_logRing[i % LOG_RING_SIZE].text;
                    if (line[0]) { FdWrite(fd, "  "); FdWrite(fd, line); FdWrite(fd, "\n"); }
                }
            }

            FdWrite(fd, "══════════════════════════════════════════\n");
            close(fd);
        }

        // ── Update crash sentinel with the crash reason ────────────────────
        // The launcher reads this file on resume; overwrite it with the crash
        // type so it can show a targeted error message.
        snprintf(path, sizeof(path), "%s/_crash_sentinel", s_dataPath);
        int sfd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (sfd >= 0)
        {
            FdWrite(sfd, "CRASHED\n");
            FdWrite(sfd, "Cause : "); FdWrite(sfd, causeStr); FdWrite(sfd, "\n");
            FdWrite(sfd, "Time  : "); FdWrite(sfd, tsBuf);    FdWrite(sfd, "\n");
            FdWrite(sfd, "Build : "); FdWrite(sfd, g_versionString); FdWrite(sfd, "\n");
            close(sfd);
        }
    }
}

// ─── Signal handler ───────────────────────────────────────────────────────────

static void CrashSignalHandler(int signum, siginfo_t* si, void* /*ucontext*/)
{
    // Restore previous handlers for all caught signals before doing anything
    // else.  SA_RESETHAND already resets *this* signal, but we also restore
    // the others so a second signal during report writing doesn't recurse.
    const int kSignals[] = { SIGSEGV, SIGABRT, SIGFPE, SIGBUS, SIGILL, SIGTRAP, SIGPIPE };
    for (int s : kSignals)
        sigaction(s, &s_oldHandlers[s], nullptr);

    WriteCrashReport(signum, si, false);

    // Re-raise through the now-restored (default) handler so the OS generates
    // a tombstone / coredump normally.
    raise(signum);
}

// ─── std::terminate override ─────────────────────────────────────────────────

static void CrashTerminateHandler()
{
    WriteCrashReport(0, nullptr, true);
    if (s_oldTerminate)
        s_oldTerminate();
    else
        std::abort();
}

// ─── Public API ───────────────────────────────────────────────────────────────

void os::crash_reporter::Init()
{
    // Set up an alternate signal-delivery stack so we can catch SIGSEGV that
    // are caused by stack overflow (the normal stack has no room for the handler).
    stack_t ss{};
    ss.ss_sp    = s_altStack;
    ss.ss_size  = sizeof(s_altStack);
    ss.ss_flags = 0;
    sigaltstack(&ss, nullptr);

    struct sigaction sa{};
    sa.sa_sigaction = CrashSignalHandler;
    sigemptyset(&sa.sa_mask);

    // Block all caught signals during handler execution to prevent re-entrant delivery.
    const int kSignals[] = { SIGSEGV, SIGABRT, SIGFPE, SIGBUS, SIGILL, SIGTRAP, SIGPIPE };
    for (int s : kSignals) sigaddset(&sa.sa_mask, s);

    // SA_SIGINFO  — receive siginfo_t (fault address etc.)
    // SA_RESETHAND — restore default handler after first delivery (no recursion)
    // SA_ONSTACK  — deliver on the alternate stack (needed for stack-overflow)
    sa.sa_flags = SA_SIGINFO | SA_RESETHAND | SA_ONSTACK;

    for (int s : kSignals)
        sigaction(s, &sa, &s_oldHandlers[s]);

    // Override std::terminate for unhandled exceptions and pure-virtual calls.
    s_oldTerminate = std::set_terminate(CrashTerminateHandler);
}

void os::crash_reporter::SetDataPath(const std::string& path)
{
    size_t n = path.size();
    if (n >= sizeof(s_dataPath)) n = sizeof(s_dataPath) - 1;
    memcpy(s_dataPath, path.c_str(), n);
    s_dataPath[n] = '\0';
}

void os::crash_reporter::InitThread()
{
    // 32 KiB is comfortably above SIGSTKSZ and enough for the handler's own
    // call depth (backtrace, dladdr, snprintf, file I/O). One copy per
    // thread that calls this - fine even with dozens of guest threads alive
    // at once (a few hundred KiB total at worst).
    alignas(16) thread_local uint8_t s_threadAltStack[32768];

    stack_t ss{};
    ss.ss_sp    = s_threadAltStack;
    ss.ss_size  = sizeof(s_threadAltStack);
    ss.ss_flags = 0;
    sigaltstack(&ss, nullptr);
}

#endif // __ANDROID__
