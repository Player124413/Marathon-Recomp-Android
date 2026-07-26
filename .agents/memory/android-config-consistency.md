---
name: Android config consistency
description: Cross-layer consistency required when adding Android-exposed native configuration settings
---

When adding a native configuration enum that is exposed to Android, keep all three representations synchronized: the C++ enum/template, the native localized name/value tables, and the Java TOML settings UI key/value mapping.

**Why:** The native build can fail at link time when the enum is registered without localized tables, while the APK can fail at Java compile time when the Android spinner call omits its TOML key. These failures are separate and easy to miss if only the native library is built.

**How to apply:** For every new Android setting, verify native compilation/linking, Java compilation, and the final APK contents. Keep enum strings identical across C++ config templates, locale tables, and Java TOML values.