---
name: Cross-compiling recomp projects (Xenon/Xenos-style) to Android
description: Code-gen tools invoked mid-build via add_custom_command must never be cross-compiled themselves; build them natively first and pass prebuilt paths. Also: CMake/Ninja's combined header-dependency scan blocks testing any single source in isolation if the target has generated sources.
---

Xbox-360-recomp projects (XenonRecomp/UnleashedRecomp-Android/MarathonRecomp-style) invoke
code-generation tools (PPC recompiler, shader recompiler, binary-to-C embedders,
archive extractors) via `add_custom_command` at build time to produce sources.

**Rule:** these tools must always run on the machine doing the build, never on the
target. When cross-compiling to Android (or any target != host), CMake will happily
build these tools for the target too unless told otherwise — producing binaries that
either fail to link (missing target-arch third-party libs, e.g. no arm64-android
`libdxcompiler.so`) or link fine but can't execute on the host.

**How to apply:** use a host-tools-split pattern (seen working in
`UnleashedRecomp-Android`, applied to Marathon Recompiled): add a
"host-tools-only" CMake option that builds just the tool targets in a separate
native build dir; add `HOST_<TOOL>` cache path variables; when all are supplied,
switch the `add_custom_command`s to invoke the prebuilt host binary path (with
explicit CLI args, since prebuilt tools can't rely on baked-in
`target_compile_definitions`) instead of `$<TARGET_FILE:Tool>`; and make sure the
final cross-compiling build step targets only the real output target, not the
default `all`, so the target-arch copies of the tools are never attempted.

Also: when a project's host-native tool build must use a specific compiler (e.g.
because a header relies on a GNU extension gcc rejects but clang accepts), don't let
compiler env vars meant for the cross-compile pass leak into the host-tools pass —
keep them scoped to the actual cross-compiling configure/build invocation only.

**Testing limitation:** you cannot verify that a single new/changed source file in
such a target compiles in isolation (e.g. `ninja path/to/file.cpp.o`) if the target
also has custom-command-generated sources (recompiled PPC code, embedded binary
headers, etc.) that are missing their inputs (e.g. the user's private game file).
CMake's Ninja generator does one combined header-dependency scan across *all* of a
target's sources before compiling any of them, and that scan itself depends on the
generated headers — so a missing generator input blocks compiling anything in the
target, not just the files that actually need it. There is no workaround short of
providing the generator's real input.
