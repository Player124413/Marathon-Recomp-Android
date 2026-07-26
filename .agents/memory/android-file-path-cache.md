---
name: Android file path cache
description: Preserve the actual filesystem path selected by Android's case-insensitive cache
---

When a case-insensitive path cache opens a corrected filesystem path, the file handle must retain that corrected path for all later metadata calls, not only for the open stream.

**Why:** Archive loading can open a file through the cache successfully, then query its size through the stale unresolved path. A failed or invalid size can make the guest archive loader allocate or read using corrupted bounds, with no useful native error.

**How to apply:** Any Android fallback from a guest path to a cached host path should update the handle's stored path only after the fallback stream opens successfully.