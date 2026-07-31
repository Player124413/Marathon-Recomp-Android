// Process watchdog / memory telemetry — Android implementation.
// See watchdog_android.h for why this exists.

#ifdef __ANDROID__

#include "watchdog_android.h"

#include <os/logger.h>

#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <string>
#include <thread>
#include <unistd.h>

// Implemented in kernel/imports.cpp. Bumps the kernel wait generation so
// threads parked in KeWaitForMultipleObjects' wait-any loop re-poll their
// objects periodically; without it, a genuine deadlock never gets a chance to
// notice and report itself.
extern "C" void MarathonKernelWakeWaiters();

namespace
{
    // How long the process may make no observable progress before the
    // watchdog declares a hang and dumps thread state. Archive loading and
    // shader compilation can legitimately block the main thread for a long
    // time on a phone, so this is deliberately generous: the point is to
    // catch a permanent deadlock, not to flag slow frames.
    constexpr int kHangSeconds = 25;

    // Sampling period. Slow enough to be free (a few /proc reads), fast
    // enough that the last sample before an OOM kill is still meaningful.
    constexpr int kSampleSeconds = 2;

    std::atomic<uint64_t> g_heartbeat{0};
    std::atomic<const char*> g_stage{"startup"};
    std::atomic<bool> g_started{false};
    std::atomic<bool> g_hangReported{false};

    thread_local bool t_isWatchdogThread = false;

    std::string g_dataPath;

    // Reads a whole (small) /proc file. Returns an empty string on failure;
    // /proc reads must use read() loops because their size is reported as 0.
    std::string ReadProcFile(const char* path)
    {
        FILE* f = fopen(path, "re");
        if (f == nullptr)
            return {};

        std::string out;
        char buf[1024];
        size_t n;
        while ((n = fread(buf, 1, sizeof(buf), f)) > 0)
            out.append(buf, n);

        fclose(f);
        return out;
    }

    // Extracts the integer value (in kB) of a "Key:  1234 kB" style line.
    long ReadKeyKb(const std::string& text, const char* key)
    {
        const size_t keyLen = strlen(key);
        size_t pos = 0;
        while ((pos = text.find(key, pos)) != std::string::npos)
        {
            // Must be at the start of a line to avoid matching a substring.
            if (pos == 0 || text[pos - 1] == '\n')
            {
                const char* p = text.c_str() + pos + keyLen;
                while (*p == ' ' || *p == '\t' || *p == ':')
                    ++p;
                return strtol(p, nullptr, 10);
            }
            pos += keyLen;
        }
        return -1;
    }

    // Per-thread state, the thing that distinguishes a deadlock from a
    // livelock: 'S' + a futex wait channel on every thread means everyone is
    // parked waiting for a wakeup that will never come.
    void DumpThreads()
    {
        DIR* dir = opendir("/proc/self/task");
        if (dir == nullptr)
        {
            os::logger::Log("watchdog: cannot open /proc/self/task", os::logger::ELogType::Error, "watchdog");
            return;
        }

        int count = 0;
        while (dirent* entry = readdir(dir))
        {
            if (entry->d_name[0] == '.')
                continue;

            char path[128];

            snprintf(path, sizeof(path), "/proc/self/task/%s/comm", entry->d_name);
            std::string comm = ReadProcFile(path);
            while (!comm.empty() && (comm.back() == '\n' || comm.back() == '\r'))
                comm.pop_back();

            // stat field 3 is the run state (R/S/D/Z/...). Parse from the
            // closing parenthesis of the comm field so thread names that
            // contain spaces or parens cannot shift the field offsets.
            snprintf(path, sizeof(path), "/proc/self/task/%s/stat", entry->d_name);
            std::string stat = ReadProcFile(path);
            char state = '?';
            const size_t close = stat.rfind(')');
            if (close != std::string::npos && close + 2 < stat.size())
                state = stat[close + 2];

            snprintf(path, sizeof(path), "/proc/self/task/%s/wchan", entry->d_name);
            std::string wchan = ReadProcFile(path);
            while (!wchan.empty() && (wchan.back() == '\n' || wchan.back() == '\0'))
                wchan.pop_back();
            if (wchan.empty())
                wchan = "-";

            os::logger::Log(
                "  tid " + std::string(entry->d_name) + "  state=" + std::string(1, state) +
                "  wchan=" + wchan + "  name=" + (comm.empty() ? std::string("?") : comm),
                os::logger::ELogType::Error, "watchdog");
            ++count;
        }

        closedir(dir);

        os::logger::Log("  (" + std::to_string(count) + " threads; state S + wchan futex_wait on all of them means a deadlock, "
                        "state R means a busy loop, state D means blocked on I/O)",
                        os::logger::ELogType::Error, "watchdog");
    }

    void WatchdogMain()
    {
        t_isWatchdogThread = true;

        uint64_t lastHeartbeat = g_heartbeat.load(std::memory_order_relaxed);
        int secondsSinceProgress = 0;
        long peakRss = 0;

        while (true)
        {
            std::this_thread::sleep_for(std::chrono::seconds(kSampleSeconds));

            // Let guest threads parked in the kernel wait-any loop re-poll, so
            // a deadlock there can detect and report itself.
            MarathonKernelWakeWaiters();

            const std::string status = ReadProcFile("/proc/self/status");
            const std::string meminfo = ReadProcFile("/proc/meminfo");

            const long rssKb = ReadKeyKb(status, "VmRSS");
            const long hwmKb = ReadKeyKb(status, "VmHWM");
            const long availKb = ReadKeyKb(meminfo, "MemAvailable");
            const long threads = ReadKeyKb(status, "Threads");

            const uint64_t beat = g_heartbeat.load(std::memory_order_relaxed);
            const bool progressed = (beat != lastHeartbeat);
            lastHeartbeat = beat;
            secondsSinceProgress = progressed ? 0 : (secondsSinceProgress + kSampleSeconds);

            // Log a memory line whenever RSS moves meaningfully (16 MiB), when
            // available memory gets dangerously low, or when nothing is
            // happening. Steady-state gameplay stays quiet.
            const bool rssJumped = (rssKb > 0) && (rssKb - peakRss >= 16 * 1024);
            const bool lowMemory = (availKb >= 0) && (availKb < 350 * 1024);

            if (rssKb > peakRss)
                peakRss = rssKb;

            if (rssJumped || lowMemory || !progressed)
            {
                os::logger::Log(
                    "mem: rss=" + std::to_string(rssKb / 1024) + " MiB peak=" + std::to_string(hwmKb / 1024) +
                    " MiB sysAvail=" + std::to_string(availKb / 1024) + " MiB threads=" + std::to_string(threads) +
                    " stage=" + std::string(g_stage.load(std::memory_order_relaxed)) +
                    (progressed ? "" : (" idle=" + std::to_string(secondsSinceProgress) + "s")),
                    lowMemory ? os::logger::ELogType::Warning : os::logger::ELogType::None,
                    "watchdog");
            }

            if (lowMemory)
            {
                // This is the signature of an imminent low-memory kill: the
                // kernel reclaims until MemAvailable collapses, then SIGKILLs
                // the biggest process. SIGKILL cannot be caught, so this
                // warning is the only trace that will ever exist - if the log
                // ends right after one of these lines, the game did not
                // crash, it was killed for using too much memory.
                os::logger::Log(
                    "system memory is nearly exhausted — if the game disappears now it was killed by Android's "
                    "low-memory killer (uncatchable SIGKILL), not by a crash. Close background apps, or lower "
                    "Resolution Scale / Shadow Resolution.",
                    os::logger::ELogType::Warning, "watchdog");
            }

            if (secondsSinceProgress >= kHangSeconds && !g_hangReported.exchange(true))
            {
                os::logger::Log("======================================", os::logger::ELogType::Error, "watchdog");
                os::logger::Log("HANG DETECTED: no progress for " + std::to_string(secondsSinceProgress) +
                                    "s at stage \"" + std::string(g_stage.load(std::memory_order_relaxed)) +
                                    "\". The process is alive but stuck — this is a deadlock, not a crash.",
                                os::logger::ELogType::Error, "watchdog");
                DumpThreads();
                os::logger::Log("======================================", os::logger::ELogType::Error, "watchdog");

                // Leave a marker the launcher can pick up next start, since a
                // hung process is usually force-closed by the user or the OS
                // and never gets to write anything else.
                if (!g_dataPath.empty())
                {
                    FILE* f = fopen((g_dataPath + "/_hang_sentinel").c_str(), "w");
                    if (f != nullptr)
                    {
                        fprintf(f, "HUNG\nStage : %s\nIdle  : %ds\n",
                                g_stage.load(std::memory_order_relaxed), secondsSinceProgress);
                        fclose(f);
                    }
                }
            }
            else if (progressed && g_hangReported.load())
            {
                // Recovered (it was only a very long stall).
                g_hangReported.store(false);
                os::logger::Log("watchdog: progress resumed after the reported stall.",
                                os::logger::ELogType::Warning, "watchdog");
            }
        }
    }
}

void os::android::watchdog::Init(const std::string& dataPath)
{
    if (g_started.exchange(true))
        return;

    g_dataPath = dataPath;

    // Detached: this thread must outlive every other subsystem so it can
    // still report on a hang during shutdown.
    std::thread(WatchdogMain).detach();

    os::logger::Log("watchdog: memory + hang monitor started (samples every " + std::to_string(kSampleSeconds) +
                        "s, hang threshold " + std::to_string(kHangSeconds) + "s)",
                    os::logger::ELogType::None, "watchdog");
}

void os::android::watchdog::Heartbeat()
{
    g_heartbeat.fetch_add(1, std::memory_order_relaxed);
}

void os::android::watchdog::SetStage(const char* stage)
{
    if (stage != nullptr)
        g_stage.store(stage, std::memory_order_relaxed);
    Heartbeat();
}

bool os::android::watchdog::IsWatchdogThread()
{
    return t_isWatchdogThread;
}

#endif // __ANDROID__
