#include <os/logger.h>

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
