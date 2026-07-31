# Fixing the Android APK CI build

The `build-apk.yml` workflow in this repo has never succeeded (all runs fail at
the *Build native library (.so files)* step). The patched workflow below makes
the build self-diagnosing and, on success, publishes the APK as a GitHub
release so users can download it directly.

## What this patched workflow changes

1. **`permissions:`** — grants the workflow token rights to create releases and
   to post failure diagnostics to a tracking issue.
2. **Self-diagnostics** — every long build step streams into
   `build-logs/build.log`. On failure the last ~30 KB of that log is posted to
   an open issue titled **"CI build diagnostics"** (created automatically if it
   doesn't exist), because Actions logs are not always reachable from outside.
   The log is also uploaded as a workflow artifact.
3. **ccache** for the C++ compile — the repo contains ~169 MB of generated
   PowerPC sources; without ccache every retry costs ~20+ minutes of compile
   time. With ccache, second and later builds reuse the compiled objects.
4. **Extra autotools deps** (`pkg-config autoconf automake autoconf-archive
   libtool bison flex gettext texinfo gperf`) — the vcpkg ports used for
   `arm64-android` (`openssl`, `freetype`, `curl`) build via autotools; the
   stock ubuntu-24.04 image does not guarantee all of these.
5. **Release publishing** — on success the APK is attached to a new release
   `ci-build.<run_number>` so it can be shared with testers immediately.
6. `gh release create` gets `--target "$GITHUB_SHA"` so the tag points at the
   commit the run actually built.

## How to apply

Replace the contents of `.github/workflows/build-apk.yml` with the YAML below
and push to `main`. (A token with the `workflows` permission is required to
push workflow files — the repository owner must do this from the GitHub web UI
or with a full-permission key.)

To run the new workflow once it is on `main`, use **Actions →
build-android-apk → Run workflow** (or push to `main`).

If the native build step fails afterwards, open the issue titled **CI build
diagnostics** — it now contains the tail of the failing log.

## The patched workflow

```yaml
name: build-android-apk

on:
  push:
    branches: ["main"]
  pull_request:
    branches: ["main"]
  workflow_dispatch:

permissions:
  contents: write   # create releases + push tags
  issues: write     # post build diagnostics on failure

concurrency:
  group: ${{ github.workflow }}-${{ github.ref }}
  cancel-in-progress: true

jobs:
  build-android:
    name: Build Android APK
    runs-on: ubuntu-24.04

    env:
      # Force vcpkg to use system cmake/ninja instead of downloading its own
      # binaries, which fail with "Could not find CMAKE_ROOT" on GitHub Actions.
      VCPKG_FORCE_SYSTEM_BINARIES: 1
      # Log file all long steps append to; uploaded as an artifact and posted
      # to a tracking issue so failures can be diagnosed without log access.
      BUILD_LOG: ${{ github.workspace }}/build-logs/build.log
      # Use ccache for every CMake configure (host tools + android target) so
      # repeated CI runs don't recompile the 169 MB of generated PPC sources.
      CMAKE_CXX_COMPILER_LAUNCHER: ccache
      CMAKE_C_COMPILER_LAUNCHER: ccache
      CCACHE_DIR: ${{ github.workspace }}/.ccache
      CCACHE_MAXSIZE: 2G

    steps:
      - name: Checkout repository
        uses: actions/checkout@v4
        with:
          submodules: false
          lfs: true

      # ── System dependencies ─────────────────────────────────────────────────
      - name: Install system dependencies
        run: |
          sudo apt-get update -y
          sudo apt-get install -y \
            ninja-build \
            cmake \
            clang \
            ccache \
            patchelf \
            unzip \
            zip \
            curl \
            pkg-config \
            autoconf \
            automake \
            autoconf-archive \
            libtool \
            bison \
            flex \
            gettext \
            texinfo \
            gperf \
            openjdk-17-jdk
          echo "ninja: $(which ninja)"
          ninja --version
          ccache --version
          mkdir -p "$(dirname "$BUILD_LOG")"
          echo "=== build started $(date -u) ===" > "$BUILD_LOG"

      # ── dxc-bin binaries (lib/x64 and bin/x64 not committed to this repo) ────
      - name: Fetch dxc-bin binaries
        run: |
          git clone --depth=1 https://github.com/renderbag/dxc-bin.git /tmp/dxc-bin
          DXC_DEST="tools/XenosRecomp/thirdparty/dxc-bin"
          mkdir -p "$DXC_DEST/lib/x64" "$DXC_DEST/bin/x64"
          cp /tmp/dxc-bin/lib/x64/libdxcompiler.so "$DXC_DEST/lib/x64/"
          cp /tmp/dxc-bin/lib/x64/libdxil.so       "$DXC_DEST/lib/x64/"
          cp /tmp/dxc-bin/bin/x64/dxc-linux        "$DXC_DEST/bin/x64/"
          chmod +x "$DXC_DEST/bin/x64/dxc-linux"
          ls -lh "$DXC_DEST/lib/x64/" "$DXC_DEST/bin/x64/"

      # ── ccache restore ──────────────────────────────────────────────────────
      - name: Cache ccache
        uses: actions/cache@v4
        with:
          path: .ccache
          key: ccache-android-${{ github.sha }}
          restore-keys: |
            ccache-android-

      # ── Android NDK ─────────────────────────────────────────────────────────
      - name: Cache Android NDK r27c
        id: cache-ndk
        uses: actions/cache@v4
        with:
          path: .ndk-tools/android-ndk-r27c
          key: android-ndk-r27c

      - name: Download Android NDK r27c
        if: steps.cache-ndk.outputs.cache-hit != 'true'
        run: |
          mkdir -p .ndk-tools
          curl -sL -o /tmp/ndk.zip \
            https://dl.google.com/android/repository/android-ndk-r27c-linux.zip
          unzip -q /tmp/ndk.zip -d .ndk-tools
          rm /tmp/ndk.zip

      # ── Android SDK cmdline-tools ────────────────────────────────────────────
      - name: Cache Android SDK
        id: cache-sdk
        uses: actions/cache@v4
        with:
          path: |
            .ndk-tools/android-sdk/cmdline-tools
            .ndk-tools/android-sdk/platforms
            .ndk-tools/android-sdk/build-tools
          key: android-sdk-platform34-buildtools34

      # ── vcpkg packages ───────────────────────────────────────────────────────
      - name: Cache vcpkg packages
        uses: actions/cache@v4
        with:
          path: |
            ./thirdparty/vcpkg/downloads
            ./thirdparty/vcpkg/packages
            ./out/build/android-debug/vcpkg_installed
          key: vcpkg-android-${{ hashFiles('vcpkg.json') }}
          restore-keys: |
            vcpkg-android-

      # ── Gradle cache ─────────────────────────────────────────────────────────
      - name: Cache Gradle files
        uses: actions/cache@v4
        with:
          path: |
            ~/.gradle/caches
            ~/.gradle/wrapper
          key: gradle-${{ hashFiles('android-apk/**/*.gradle*', 'android-apk/gradle/wrapper/gradle-wrapper.properties') }}
          restore-keys: |
            gradle-

      # ── Build .so files ──────────────────────────────────────────────────────
      - name: Build native library (.so files)
        id: build-native
        run: |
          set -o pipefail
          bash build-android.sh 2>&1 | tee -a "$BUILD_LOG"

      # ── Diagnose failure via tracking issue ─────────────────────────────────
      - name: Post failure diagnostics to issue
        if: (failure() && steps.build-native.conclusion == 'failure') || (failure() && steps.build-apk.conclusion == 'failure')
        env:
          GH_TOKEN: ${{ secrets.GITHUB_TOKEN }}
        run: |
          BODY_FILE=/tmp/issue-body.md
          {
            echo "Run: [$GITHUB_RUN_ID ($GITHUB_EVENT_NAME)]($GITHUB_SERVER_URL/$GITHUB_REPOSITORY/actions/runs/$GITHUB_RUN_ID)"
            echo ""
            echo "Commit: \`$GITHUB_SHA\` (\`$GITHUB_REF_NAME\`)"
            echo ""
            echo '```'
            tail -c 30000 "$BUILD_LOG" | sed 's/\r//g'
            echo '```'
          } > "$BODY_FILE"
          ISSUE_URL="$(gh issue list --state open --search 'CI build diagnostics' --json url,title -q '.[0].url' || true)"
          if [ -n "$ISSUE_URL" ]; then
            gh issue comment "$ISSUE_URL" --body-file "$BODY_FILE"
          else
            gh issue create --title "CI build diagnostics" --body-file "$BODY_FILE"
          fi

      # Always upload the build log for debugging.
      - name: Upload build log
        if: always()
        uses: actions/upload-artifact@v4
        with:
          name: MarathonRecomp-Android-build-log
          path: build-logs/build.log
          if-no-files-found: ignore

      # ── Copy .so files into jniLibs for Gradle packaging ─────────────────────
      - name: Package .so files into APK staging directory
        run: |
          JNI_DIR="android-apk/app/jniLibs/arm64-v8a"
          mkdir -p "$JNI_DIR"
          if [[ -f "$JNI_DIR/libmain.so" ]]; then
            BYTES="$(stat -c '%s' "$JNI_DIR/libmain.so")"
            SHA="$(sha256sum "$JNI_DIR/libmain.so" | awk '{print $1}')"
            echo "libmain.so ready for packaging: ${BYTES} bytes (sha256 $SHA)"
          else
            echo "libmain.so not found in $JNI_DIR — build-android.sh may have failed"
            exit 1
          fi
          BUILT_DIR="$(find out/build/android-debug -name 'libmain.so' -printf '%h\n' 2>/dev/null | head -1)"
          if [[ -n "$BUILT_DIR" ]]; then
            for so in "$BUILT_DIR"/*.so; do
              [[ -f "$so" ]] || continue
              NAME="$(basename "$so")"
              if [[ "$NAME" != "libmain.so" ]]; then
                cp "$so" "$JNI_DIR/$NAME"
                echo "  + $NAME"
              fi
            done
          fi

      # ── Build APK ────────────────────────────────────────────────────────────
      - name: Build APK
        id: build-apk
        run: |
          set -o pipefail
          bash build-apk.sh --skip-native 2>&1 | tee -a "$BUILD_LOG"

      # ── Upload artifacts ─────────────────────────────────────────────────────
      - name: Upload APK
        uses: actions/upload-artifact@v4
        with:
          name: MarathonRecomp-Android-debug
          path: android-apk/app/build/outputs/apk/debug/app-debug.apk
          if-no-files-found: error

      - name: Upload libmain.so
        uses: actions/upload-artifact@v4
        with:
          name: MarathonRecomp-Android-libmain
          path: android-apk/app/jniLibs/arm64-v8a/libmain.so
          if-no-files-found: warn

      # ── Publish a GitHub release with the APK ────────────────────────────────
      - name: Create release with APK
        if: success() && steps.build-apk.conclusion == 'success' && github.event_name != 'pull_request'
        env:
          GH_TOKEN: ${{ secrets.GITHUB_TOKEN }}
        run: |
          TAG="ci-build.${GITHUB_RUN_NUMBER}"
          RELEASE_NOTES_FILE=/tmp/release-notes.md
          {
            echo "Automated CI build of the Android APK."
            echo ""
            echo "- Commit: \`$GITHUB_SHA\`"
            echo "- Branch: \`$GITHUB_REF_NAME\`"
            echo "- Run: [$GITHUB_RUN_ID]($GITHUB_SERVER_URL/$GITHUB_REPOSITORY/actions/runs/$GITHUB_RUN_ID)"
            echo ""
            echo "Install \`app-debug.apk\` on your Android device and copy your game files via the launcher."
          } > "$RELEASE_NOTES_FILE"
          gh release create "$TAG" \
            --title "Android CI build $GITHUB_RUN_NUMBER (${GITHUB_SHA:0:7})" \
            --notes-file "$RELEASE_NOTES_FILE" \
            --target "$GITHUB_SHA" \
            android-apk/app/build/outputs/apk/debug/app-debug.apk
```

## Note on fork Actions

GitHub disables Actions on newly-created forks. In that case the owner must
open the **Actions** tab once and press **"I understand my workflows, enable
them"** before any workflow can run — API tokens cannot flip that switch.

## Post-mortem: the "Build native library (.so files)" failure (2026-07-31)

All `build-apk.yml` runs (mymes1's repo and this fork) died within ~5 minutes
at the native build step. Root cause: **the checkout uses `submodules: false`,
so the `MarathonRecompResources` gitlink (~70 MB of fonts/images/sounds/music
that `MarathonRecomp/CMakeLists.txt`'s `BIN2C` steps embed into libmain.so)
was an empty directory**, and `ninja` fails instantly with "missing and no
known rule to make it" against the generated resource sources. mymes1's local
Replit builds had the submodule checked out, which is why the released APKs
exist at all.

Fixed in `build-android.sh`: when the sentinel file
`MarathonRecompResources/images/game_icon.bmp` is missing, the pinned commit
is read from the index's gitlink and the snapshot is fetched + extracted from
`https://codeload.github.com/sonicnext-dev/MarathonRecompResources/tar.gz/<sha>`
— no submodule protocol, no LFS, works on shallow clones.
