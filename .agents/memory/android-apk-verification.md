---
name: Android APK verification
description: Reliable identity and size checks for rebuilt Android APKs
---

For an Android rebuild, verify the final APK after packaging rather than relying on the source JNI library or an older APK left on disk. Source changes and a locally copied `libmain.so` can both be newer than the APK currently installed on the device. Record the versionCode, versionName, archive byte size, APK SHA-256, and SHA-256 of the extracted `lib/arm64-v8a/libmain.so`. A distinctive launcher/native log marker is useful for proving which APK is installed.

**Why:** Android package updates and file-manager storage displays can make an old or extracted artifact look current. ZIP directory totals also do not equal the APK archive size; summing the ZIP entries can double-count the central-directory total.

**How to apply:** Force the Gradle package task, inspect `output-metadata.json`, hash the finished APK, extract and hash the packaged ARM64 library, and compare embedded diagnostic strings before device testing.