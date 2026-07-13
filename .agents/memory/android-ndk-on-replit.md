---
name: Android NDK on Replit's Nix environment
description: How to get an Android NDK toolchain working for native CMake/vcpkg cross-compiles on Replit, and pitfalls hit along the way.
---

# Android NDK on Replit

Replit's Nix package index (`installSystemDependencies`) has **no** Android
SDK/NDK modules — `android-ndk`, `androidndk`, `androidenv.*`,
`androidenv.androidsdk` etc. all fail with "not present in rippkgs index".

**How to apply:** download the NDK directly from Google instead (it's a
plain zip, no license-acceptance flow needed):
```bash
curl -sL -o ndk.zip https://dl.google.com/android/repository/android-ndk-r27c-linux.zip
unzip -q ndk.zip
```
~2GB extracted; keep it outside git (gitignore) since it's a huge binary
blob unrelated to source.

## vcpkg + Android cross-compiling gotchas
- vcpkg needs **full git history**, not a shallow clone — a `--depth 1`
  clone fails to check out the manifest's `builtin-baseline` commit
  (`git show <baseline>:versions/baseline.json` errors). Run
  `git fetch --unshallow` if you cloned shallow.
- vcpkg already ships an `arm64-android` triplet
  (`triplets/arm64-android.cmake`) with `VCPKG_CMAKE_SYSTEM_NAME Android`,
  so `CMAKE_TOOLCHAIN_FILE` = vcpkg's own toolchain (not the NDK's
  `android.toolchain.cmake`) plus `ANDROID_NDK_HOME` env var is enough to
  select it — no manual NDK toolchain chainload needed.
- Autotools-based vcpkg ports (e.g. `openssl`) can pick up the host's
  `gcc`/`g++` instead of the NDK's clang wrapper scripts when
  cross-compiling for `arm64-android`, producing errors like `gcc: error:
  unrecognized command-line option '--target=aarch64-none-linux-android28'`.
  This is a PATH/CC-detection issue in the port's build step, not a config
  mistake in the preset — needs the port's Makefile/Configure invocation
  forced onto the NDK clang wrapper (`$ANDROID_NDK_HOME/toolchains/llvm/prebuilt/linux-x86_64/bin/`).
