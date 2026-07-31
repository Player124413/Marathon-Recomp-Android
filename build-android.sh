#!/usr/bin/env bash
# build-android.sh — configure + build MarathonRecomp for Android (arm64-v8a, API 28)
#
# Requires: NDK already downloaded to .ndk-tools/android-ndk-r27c
#   (see replit.md for the download command if missing)
#
# Usage:
#   ./build-android.sh               # cmake configure + build (debug)
#   ./build-android.sh --configure   # configure only
#   ./build-android.sh --build       # build only (skip configure)
set -euo pipefail

WORKSPACE="$(cd "$(dirname "$0")" && pwd)"
NDK="$WORKSPACE/.ndk-tools/android-ndk-r27c"
LLVM_BIN="$NDK/toolchains/llvm/prebuilt/linux-x86_64/bin"

if [[ ! -d "$NDK" ]]; then
  echo "ERROR: NDK not found at $NDK"
  echo "Run: mkdir -p .ndk-tools && cd .ndk-tools && curl -sL -o ndk.zip https://dl.google.com/android/repository/android-ndk-r27c-linux.zip && unzip -q ndk.zip && rm ndk.zip"
  exit 1
fi

export VCPKG_ROOT="$WORKSPACE/thirdparty/vcpkg"
# Prepend our pkg-config shim so the Nix wrapper doesn't swallow PKG_CONFIG_PATH
export PATH="$WORKSPACE/.local/bin:$PATH"
export ANDROID_NDK_HOME="$NDK"
export ANDROID_NDK_ROOT="$NDK"
export ANDROID_NDK="$NDK"

PRESET="android-debug"
DO_CONFIGURE=true
DO_BUILD=true

for arg in "$@"; do
  case "$arg" in
    --configure) DO_BUILD=false ;;
    --build)     DO_CONFIGURE=false ;;
    --release)   PRESET="android-release" ;;
  esac
done

# XenonRecomp/XenosRecomp/file_to_c/u8extract are code-generation tools that run
# *during* the build to produce sources (recompiled PPC code, shader cache, binary
# headers) - they must run on this machine, so cross-compiling them to arm64-android
# would produce binaries ninja can build but can't execute. Build a native pass of
# just those tools first, then hand their paths to the Android configure below so
# it reuses them instead of building (unrunnable) Android copies.
HOST_TOOLS_DIR="$WORKSPACE/out/build/host-tools"
if $DO_CONFIGURE; then
  echo "==> Configuring host tools (native, for code generation during the Android build)"
  # Force clang: these tools use a GNU anonymous-struct-with-constructor-member
  # extension (xbox.h's be<uint32_t> members inside anonymous unions) that gcc
  # (Nix's default host CC/CXX) rejects as ill-formed but clang accepts.
  # -DMARATHON_RECOMP_OPTIMIZE_TOOLS=OFF: the default ON setting enables
  # CMAKE_INTERPROCEDURAL_OPTIMIZATION (LTO), which in this environment leaves
  # LLVM-bitcode-only objects in static libs (e.g. libLibXenonAnalyse.a) that
  # this environment's linker step then fails on ("file format not
  # recognized") since it isn't invoked with -flto. Not needed for one-shot
  # code-gen tools anyway.
  NINJA_BIN="$(which ninja 2>/dev/null || which ninja-build 2>/dev/null)"
  cmake -S "$WORKSPACE" -B "$HOST_TOOLS_DIR" -G Ninja \
    -DCMAKE_MAKE_PROGRAM="$NINJA_BIN" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_COMPILER=clang \
    -DCMAKE_CXX_COMPILER=clang++ \
    -DMARATHON_RECOMP_OPTIMIZE_TOOLS=OFF \
    -DMARATHON_RECOMP_HOST_TOOLS_ONLY=ON
fi
if $DO_BUILD; then
  echo "==> Building host tools"
  cmake --build "$HOST_TOOLS_DIR" --target XenonRecomp XenosRecomp file_to_c u8extract x_decompress --parallel "$(nproc)"
fi

HOST_XENON_RECOMP="$(find "$HOST_TOOLS_DIR" -type f -name XenonRecomp | head -n1)"
HOST_XENOS_RECOMP="$(find "$HOST_TOOLS_DIR" -type f -name XenosRecomp | head -n1)"
HOST_FILE_TO_C="$(find "$HOST_TOOLS_DIR" -type f -name file_to_c | head -n1)"
HOST_U8EXTRACT="$(find "$HOST_TOOLS_DIR" -type f -name u8extract | head -n1)"
HOST_X_DECOMPRESS="$(find "$HOST_TOOLS_DIR" -type f -name x_decompress | head -n1)"

# libdxcompiler.so (shipped with XenosRecomp) depends on libz.so.1 but has no
# rpath entry for it. On Nix the library lives in the store, not in the default
# ld.so search path. Patch its rpath once so XenosRecomp can run without any
# LD_LIBRARY_PATH changes (which break Nix-built cmake via a vDSO conflict).
_DXC_LIB="$WORKSPACE/tools/XenosRecomp/thirdparty/dxc-bin/lib/x64/libdxcompiler.so"
_NIX_ZLIB="$(cc -print-file-name=libz.so 2>/dev/null | xargs dirname 2>/dev/null)"
if [[ -f "$_DXC_LIB" && -n "$_NIX_ZLIB" ]]; then
  patchelf --add-rpath "$_NIX_ZLIB" "$_DXC_LIB" 2>/dev/null || true
fi
unset _DXC_LIB _NIX_ZLIB

# Export compiler env (Android configure/build only) so autotools-based vcpkg
# ports (openssl, etc.) pick up NDK clang instead of host gcc.
export CC="$LLVM_BIN/aarch64-linux-android28-clang"
export CXX="$LLVM_BIN/aarch64-linux-android28-clang++"
export AR="$LLVM_BIN/llvm-ar"
export NM="$LLVM_BIN/llvm-nm"
export RANLIB="$LLVM_BIN/llvm-ranlib"
export STRIP="$LLVM_BIN/llvm-strip"
export LD="$LLVM_BIN/ld.lld"

if $DO_CONFIGURE; then
  echo "==> Configuring preset: $PRESET"
  # dxc-bin/CMakeLists.txt picks the DXC binary using CMAKE_SYSTEM_PROCESSOR,
  # which for Android cross-compile is "aarch64" → arm64/dxc-linux (doesn't
  # exist). DXC always runs on the HOST (x86_64) at build time, so force the
  # x64 binary path explicitly.
  DXC_BIN_ROOT="$WORKSPACE/tools/XenosRecomp/thirdparty/dxc-bin"
  HOST_DXC_TOOL="LD_LIBRARY_PATH=${DXC_BIN_ROOT}/lib/x64;${DXC_BIN_ROOT}/bin/x64/dxc-linux"
  NINJA_BIN="$(which ninja 2>/dev/null || which ninja-build 2>/dev/null)"
  cmake --preset "$PRESET" \
    -DCMAKE_MAKE_PROGRAM="$NINJA_BIN" \
    -DMARATHON_RECOMP_HOST_XENON_RECOMP="$HOST_XENON_RECOMP" \
    -DMARATHON_RECOMP_HOST_XENOS_RECOMP="$HOST_XENOS_RECOMP" \
    -DMARATHON_RECOMP_HOST_FILE_TO_C="$HOST_FILE_TO_C" \
    -DMARATHON_RECOMP_HOST_U8EXTRACT="$HOST_U8EXTRACT" \
    -DMARATHON_RECOMP_HOST_X_DECOMPRESS="$HOST_X_DECOMPRESS" \
    "-DDIRECTX_DXC_TOOL=${HOST_DXC_TOOL}"
fi

if $DO_BUILD; then
  echo "==> Building preset: $PRESET"

  # When using prebuilt host tools, the cmake add_custom_command for XenosRecomp
  # invokes it with NO arguments (the non-prebuilt path bakes paths in at compile
  # time via -DXENOS_RECOMP_INPUT etc.). A prebuilt binary without those defines
  # just prints usage and exits 0 — "succeeding" without producing shader_cache.cpp.
  # Pre-run it explicitly here with the correct arguments so the file is always
  # present before ninja checks its dependency graph.
  SHADER_CACHE="$WORKSPACE/MarathonRecompLib/shader/shader_cache.cpp"
  SHADER_INPUT="$WORKSPACE/MarathonRecompLib/private/shader"
  XENOS_INCLUDE="$WORKSPACE/tools/XenosRecomp/XenosRecomp/shader_common.h"
  if [[ ! -f "$SHADER_CACHE" ]] || [[ "$SHADER_INPUT" -nt "$SHADER_CACHE" ]]; then
    echo "==> Pre-generating shader_cache.cpp via XenosRecomp..."
    "$HOST_XENOS_RECOMP" "$SHADER_INPUT" "$SHADER_CACHE" "$XENOS_INCLUDE"
  else
    echo "==> shader_cache.cpp is up-to-date, skipping XenosRecomp."
  fi

  # Invoke ninja directly instead of cmake --build: on Nix, exporting the NDK
  # CC/CXX/LD env vars above causes cmake's own shared-library loader to hit a
  # vDSO conflict ("__vdso_gettimeofday: invalid mode for dlopen"), crashing
  # cmake before it even starts ninja. Ninja itself is unaffected.
  # Only the game target itself - "ninja all" would also try to build
  # XenonRecomp/XenosRecomp/etc. for arm64-android, which fails (or produces
  # binaries this machine can't run) since they're host-only code-gen tools.
  ninja -C "out/build/$PRESET" -j"$(nproc)" MarathonRecomp

  BUILT_LIBMAIN="$(find "$WORKSPACE/out/build/$PRESET" -type f -name "libmain.so" | head -n1)"
  if [[ -n "$BUILT_LIBMAIN" ]]; then
    JNI_LIBS_DIR="$WORKSPACE/android-apk/app/jniLibs/arm64-v8a"
    mkdir -p "$JNI_LIBS_DIR"
    cp "$BUILT_LIBMAIN" "$JNI_LIBS_DIR/libmain.so"
    echo "==> Copied libmain.so into $JNI_LIBS_DIR (picked up by Gradle's jniLibs.srcDirs)"
  fi

  # Custom Vulkan driver support (libadrenotools): the hook shared libraries
  # are dlopen'ed by name from nativeLibraryDir at runtime, so they must be
  # packaged into the APK next to libmain.so. libhook_impl.so is a dependency
  # of the hook libs and is loaded by name as well.
  for HOOK_NAME in libmain_hook.so libhook_impl.so libfile_redirect_hook.so libgsl_alloc_hook.so; do
    BUILT_HOOK="$(find "$WORKSPACE/out/build/$PRESET" -type f -name "$HOOK_NAME" | head -n1)"
    if [[ -n "$BUILT_HOOK" ]]; then
      cp "$BUILT_HOOK" "${JNI_LIBS_DIR:-$WORKSPACE/android-apk/app/jniLibs/arm64-v8a}/$HOOK_NAME"
      echo "==> Copied $HOOK_NAME into android-apk/app/jniLibs/arm64-v8a (Turnip driver support)"
    else
      echo "!! $HOOK_NAME not found in the build tree - custom Turnip driver loading will not work" >&2
    fi
  done
fi
