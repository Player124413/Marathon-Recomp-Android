#pragma once

#ifdef __ANDROID__

#include <string>

// Process watchdog / memory telemetry (Android only).
//
// Why this exists: the game was reported to "just close" right after the last
// archive is resolved (stage_wvo_b.arc), with _game_log.txt simply ending
// there and NO crash section - even though the crash reporter
// (os/android/crash_reporter_android.cpp) is installed before anything else
// and appends a report for every catchable fatal signal.
//
// That combination rules out the usual suspects: if the process had taken a
// SIGSEGV / SIGABRT (including any assert(), __builtin_trap() or std::abort()
// in our own code), a "CRASH REPORT" block would be in the log. There are
// exactly three ways to die without leaving one:
//
//   1. SIGKILL from the kernel's low-memory killer - uncatchable by design.
//   2. A hang: the process is still alive but no longer does anything, so the
//      log stops and Android eventually removes the app.
//   3. A clean-but-unexpected exit path (_Exit) that produces no log line.
//
// This watchdog separates those cases without needing logcat, which end users
// cannot capture:
//
//   * It samples VmRSS / VmHWM / MemAvailable and logs the memory curve, so a
//     low-memory kill shows up as RSS climbing into a collapsing MemAvailable
//     right up to the last line of the log.
//   * It watches a heartbeat that game activity bumps. If nothing happens for
//     kHangSeconds it declares a hang and dumps every thread's name, run
//     state and kernel wait channel - which is exactly what identifies a
//     deadlock (all threads parked in futex_wait), the failure mode this
//     port has already hit twice at this same point in the boot.
namespace os::android::watchdog
{
    // Starts the sampler thread. dataPath is the directory holding
    // _game_log.txt; a marker file is written there if a hang is detected so
    // the launcher can report it on the next start. Safe to call once.
    void Init(const std::string& dataPath);

    // Cheap liveness ping. Called from the logger and the per-frame update, so
    // "the process is doing something" is measured by real progress rather
    // than by the watchdog's own output.
    void Heartbeat();

    // Records a human-readable label for what the game is currently doing, so
    // a hang dump can say where it got stuck. The pointer must stay valid
    // (string literals only).
    void SetStage(const char* stage);

    // True while the calling thread is the watchdog's own sampler thread.
    // Used by the logger to avoid treating watchdog output as game activity.
    bool IsWatchdogThread();
}

#endif // __ANDROID__
