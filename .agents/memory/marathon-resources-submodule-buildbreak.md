# MarathonRecompResources submodule breaks CI/native builds

**Date:** 2026-07-31 · **Status:** fixed in build-android.sh

## Symptom

Every `build-apk.yml` run (mymes1/Marathon-Recomp-Android and the
Player124413 fork — 5+ runs) failed within ~5 minutes at
"Build native library (.so files)" with no visible error beyond "Process
completed with exit code 1". Released APKs (0.1.5) were built locally on
Replit, never by Actions.

## Root cause

`MarathonRecomp/CMakeLists.txt` BIN2C steps embed ~31 files from
`MarathonRecompResources/` (fonts/images/sounds/music) into libmain.so via
`add_custom_command(DEPENDS <source>)`. That path is a **git submodule**
(sonicnext-dev/MarathonRecompResources, pinned at 763b3f8b) while the CI
checkout uses `submodules: false` → empty dir → `ninja` aborts instantly with
"missing and no known rule to make it" before compiling anything. Everything
else under thirdparty/ and tools/ was flattened into real trees by the port,
so this is the only submodule the Android build actually needs.

## Fix

`build-android.sh` now self-heals: when the sentinel
`MarathonRecompResources/images/game_icon.bmp` is absent, it reads the pinned
SHA from the index gitlink and downloads/extracts the snapshot via
`https://codeload.github.com/sonicnext-dev/MarathonRecompResources/tar.gz/<sha>`
(codeload works from GHA; no submodule protocol or LFS needed; tarball ~68 MB,
79 files). Hard failure with a clear message if the fetch cannot materialize
the sentinel.

Lesson: when porting flattened-submodule repos, grep all
`add_custom_command(DEPENDS ...)`/configure-time `file()` reads for paths
outside the tree — the repo may still contain a live gitlink.
