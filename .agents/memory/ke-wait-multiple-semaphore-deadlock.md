---
name: KeWaitForMultipleObjects semaphore deadlock
description: Post-archive-loading hang caused by KeWaitForMultipleObjects not handling Semaphore objects, fixed by type dispatch + g_keSetEventGeneration notification in KeReleaseSemaphore/NtReleaseSemaphore.
---

## Root cause

`KeWaitForMultipleObjects` (kernel/imports.cpp) only cast all objects as `Event` (type 0/1) via `QueryKernelObject<Event>`. The game's worker threads (FrameSynchronizerThread, FrustumCullingThread, UpdateResourceInFrustumThread) use `Semaphore` objects (type 5) for synchronization.

After all stage archives finish loading, the guest engine calls `KeWaitForMultipleObjects` with a mix of Events and Semaphores. The wait-any polling loop slept on `g_keSetEventGeneration.wait()`, which is only incremented by `KeSetEvent`. `KeReleaseSemaphore` and `NtReleaseSemaphore` only called `count.notify_all()` on the Semaphore object — never incrementing `g_keSetEventGeneration` — so the loop never woke up.

**Symptom:** Game log ends at `stage_wvo_b.arc` (the last archive) with no error or crash message — pure hang.

## Fix (kernel/imports.cpp)

1. **`KeWaitForMultipleObjects`**: Replaced the hardcoded `QueryKernelObject<Event>` calls with a `waitOne` lambda that switches on `hdr.Type` (0/1 → Event, 5 → Semaphore, else assert). Both the wait-all loop and the wait-any polling loop now dispatch correctly.

2. **`KeReleaseSemaphore`**: After `Release()`, also do `++g_keSetEventGeneration; g_keSetEventGeneration.notify_all()` so wait-any loops wake up.

3. **`NtReleaseSemaphore`**: Same notify bump added after `Release()`.

**Why:** `g_keSetEventGeneration` is the single wakeup signal for `KeWaitForMultipleObjects` wait-any; every kernel object signalling path must increment it.

**How to apply:** If any new kernel object type is added (e.g. Mutant, type 2), add a case to the `waitOne` lambda AND make its release/signal function bump `g_keSetEventGeneration`.
