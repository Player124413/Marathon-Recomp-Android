#!/usr/bin/env bash
# install-deps.sh — Download Android NDK r27c if not already present.
# Called automatically by the "Build APK (Full)" workflow before building.
set -euo pipefail

WORKSPACE="$(cd "$(dirname "$0")" && pwd)"
NDK_DIR="$WORKSPACE/.ndk-tools/android-ndk-r27c"
NDK_URL="https://dl.google.com/android/repository/android-ndk-r27c-linux.zip"

if [[ -d "$NDK_DIR" ]]; then
  echo "==> NDK already present at $NDK_DIR — skipping download."
  exit 0
fi

echo "==> NDK not found. Downloading Android NDK r27c (~650 MB)..."
mkdir -p "$WORKSPACE/.ndk-tools"
cd "$WORKSPACE/.ndk-tools"
curl -# -L -o ndk.zip "$NDK_URL"
echo "==> Extracting NDK..."
unzip -q ndk.zip
rm ndk.zip
echo "==> NDK installed at $NDK_DIR"
