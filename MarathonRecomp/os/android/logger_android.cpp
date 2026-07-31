#include <os/logger.h>

#include <os/android/watchdog_android.h>
#include <os/crash_reporter.h>

#include <algorithm>
#include <android/log.h>
#include <cstdio>
#include <ctime>
#include <mutex>
#include <string>

#define MARATHON_RECOMP_ANDROID_LOG_TAG "MarathonRecomp"

static FILE*       s_logFile  = nullptr;
static std::mutex  s_logMutex;

void os::logger::Init()
{
    // logcat is always available; file log is activated later via
    // SetLogFilePath once the data directory is known.
}

void os::logger::SetLogFilePath(const std::string& path)
{
    std::lock_guard<std::mutex> lock(s_logMutex);
    if (s_logFile)
    {
        fclose(s_logFile);
        s_logFile = nullptr;
    }

    // Overwrite each session — keeps the file to exactly one run, making
    // crash diagnosis straightforward (no need to hunt through old output).
    s_logFile = fopen(path.c_str(), "w");
    if (!s_logFile)
    {
        __android_log_print(ANDROID_LOG_ERROR, MARATHON_RECOMP_ANDROID_LOG_TAG,
                            "Failed to open log file: %s", path.c_str());
        return;
    }

    time_t    t      = time(nullptr);
    struct tm tmInfo = {};
    localtime_r(&t, &tmInfo);
    char timeBuf[64];
    strftime(timeBuf, sizeof(timeBuf), "%Y-%m-%d %H:%M:%S", &tmInfo);
    fprintf(s_logFile, "=== Marathon Recompiled — session %s ===\n", timeBuf);
    fflush(s_logFile);

    __android_log_print(ANDROID_LOG_INFO, MARATHON_RECOMP_ANDROID_LOG_TAG,
                        "Persistent log file: %s", path.c_str());
}

void os::logger::Log(const std::string_view str, ELogType type, const char* func)
{
    android_LogPriority priority;
    switch (type)
    {
    case ELogType::Warning: priority = ANDROID_LOG_WARN;  break;
    case ELogType::Error:   priority = ANDROID_LOG_ERROR; break;
    default:                priority = ANDROID_LOG_INFO;  break;
    }

    if (func)
        __android_log_print(priority, MARATHON_RECOMP_ANDROID_LOG_TAG,
                            "[%s] %.*s", func, (int)str.size(), str.data());
    else
        __android_log_print(priority, MARATHON_RECOMP_ANDROID_LOG_TAG,
                            "%.*s", (int)str.size(), str.data());

    // Feed the crash reporter's ring buffer. It is dumped into the crash
    // report, which is the only way to see what the game was doing in the
    // instants before a fatal signal - the log file's own tail can be stale
    // because a crash may happen between two flushes. This was declared and
    // implemented but never actually called, so every crash report so far had
    // an empty "Last log lines" section.
    {
        char ringLine[320];
        int n = func
            ? snprintf(ringLine, sizeof(ringLine), "[%s] %.*s", func, (int)str.size(), str.data())
            : snprintf(ringLine, sizeof(ringLine), "%.*s", (int)str.size(), str.data());
        if (n > 0)
            os::crash_reporter::internal::PushLogLine(ringLine, (size_t)std::min<int>(n, (int)sizeof(ringLine) - 1));
    }

    // Any log line that isn't the watchdog's own output means the process is
    // still doing something; that is what the hang detector measures.
    if (!os::android::watchdog::IsWatchdogThread())
        os::android::watchdog::Heartbeat();

    std::lock_guard<std::mutex> lock(s_logMutex);
    if (!s_logFile) return;

    const char* prefix =
        (type == ELogType::Warning) ? "W" :
        (type == ELogType::Error)   ? "E" : "I";

    if (func)
        fprintf(s_logFile, "[%s][%s] %.*s\n", prefix, func, (int)str.size(), str.data());
    else
        fprintf(s_logFile, "[%s] %.*s\n",     prefix,       (int)str.size(), str.data());

    fflush(s_logFile);
}
