#pragma once

#include <cstddef>
#include <string>

// Crash reporter — installs signal handlers and a std::terminate override that
// write structured crash reports (signal name, stack trace, recent log lines)
// to the persistent log file and the crash sentinel before re-raising/aborting.
//
// Call order:
//   1. os::crash_reporter::Init()        — as early as possible in main()
//   2. os::crash_reporter::SetDataPath() — after Config::Load() (Android only)

namespace os::crash_reporter
{
    // Install signal handlers (SIGSEGV/SIGABRT/SIGFPE/SIGBUS/SIGILL/SIGTRAP)
    // and override std::terminate.  Safe to call before any other subsystem.
    void Init();

#ifdef __ANDROID__
    // Tell the crash reporter where the app's data root is so it can append to
    // _game_log.txt and update _crash_sentinel with the crash reason.
    // Call once, after Config::Load() has resolved the data directory.
    void SetDataPath(const std::string& path);

    namespace internal
    {
        // Called by logger_android.cpp for every log line so the crash reporter
        // can show the last N lines in a crash report without touching the log
        // file (which may be closed/corrupt at signal time).
        void PushLogLine(const char* line, size_t len);
    }
#endif
}
