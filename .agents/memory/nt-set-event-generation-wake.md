---
name: NtSetEvent does not wake KeWaitForMultipleObjects
description: Second half of the post-archive deadlock — events signalled via NtSetEvent never bumped g_keSetEventGeneration, so wait-any loops kept sleeping.
---

## Context

`KeWaitForMultipleObjects` (kernel/imports.cpp) implements its infinite
wait-any loop by polling every object with timeout 0 and, when none is
signalled, sleeping on the global `g_keSetEventGeneration` counter
(`std::atomic::wait`). **Every** signalling path must increment that counter
and `notify_all()`, otherwise a thread waiting on that object type through
this function sleeps forever — the process freezes with the log ending at the
last archive (`stage_wvo_b.arc`) and no crash report.

The earlier fix (see `ke-wait-multiple-semaphore-deadlock.md`) covered
`KeSetEvent`, `KeReleaseSemaphore`, and `NtReleaseSemaphore`, but left out
`NtSetEvent`. The game can signal its FrameSynchronizer/worker sync objects
through the NT path; on the Adreno 710 boot (Snapdragon 6 Gen 1) the freeze
still occurs at exactly the same point in the log.

## Fix (kernel/imports.cpp)

`NtSetEvent` now does, mirroring `NtReleaseSemaphore`:

```cpp
++g_keSetEventGeneration;
g_keSetEventGeneration.notify_all();
```

## Also fixed in the same pass

`os::crash_reporter::SetDataPath()` was never called anywhere — so even when
the process died of a *caught* signal (SIGSEGV/SIGABRT/...), no crash section
was appended to `_game_log.txt` and `_crash_sentinel` kept its empty content.
main() now calls `SetDataPath(Config::GetConfigPath().parent_path().string())`
right after `Config::Load()`, and every guest thread gets its own altstack via
`os::crash_reporter::InitThread()` at the top of `GuestThreadFunc`.

## How to apply

Any future kernel-object signalling path (e.g. a hypothetical
`NtPulseEvent`/`NtSignalAndWaitForSingleObjectEx` implementation) must follow
the same rule: after changing the object state, bump and notify
`g_keSetEventGeneration` so `KeWaitForMultipleObjects` re-polls.
