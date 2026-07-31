# APK native libs: Gradle strips libmain.so; extractNativeLibs is the lever for Turnip

**Date:** 2026-07-31 · verified empirically on CI run 30643170884 via the
`::notice:: APK native libraries` annotation (build-apk.sh always emits it —
use it to inspect any CI APK without artifact access):

- Staged `jniLibs/arm64-v8a/libmain.so` (CMake output): 322,891,872 bytes.
- SAME lib inside the APK: 139,742,552 bytes, different sha256 —
  **AGP 8.5 strips debug symbols from `jniLibs.srcDirs` libraries while
  packaging** (default behavior, no opt-out configured). Kept as-is on
  purpose: 51 MB APK instead of ~90 MB; runtime unaffected (dynamic symbols
  survive `strip`), only logcat backtraces lose C++ frames.
- `packagingOptions { jniLibs { useLegacyPackaging true } }` in
  android-apk/app/build.gradle was **not honored** (entries are `Defl:N`,
  not `Stored`): cause unknown (possibly needs the newer `packaging {}` DSL
  block). Harmless in practice *only because* `extractNativeLibs` stays
  true ⇒ PackageManager still extracts libs to disk at install ⇒
  `ApplicationInfo.nativeLibraryDir` has real files, which is all
  libadrenotools' hook loading needs.
- **Guardrail:** `android:extractNativeLibs="true"` is now set explicitly in
  AndroidManifest.xml (with a comment explaining the libadrenotools
  dependency). Never flip it to false — that would run libs from the (Defl!,
  unaligned) APK directly and the app would not even start.

## Second lesson: gate conditions must match the CI call path

The "fail when APK lacks libmain.so" guard introduced earlier was guarded by
`! --skip-native` — but CI always runs `bash build-apk.sh --skip-native`, so
the gate never executed. Condition is now `[[ -f "$JNI_LIB" ]]` (staged lib
exists ⇒ APK must contain it), which is true on exactly the CI path that
matters and false only for launcher-only local builds.
