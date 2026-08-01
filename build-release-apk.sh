#!/usr/bin/env bash
# build-release-apk.sh — one-click Release APK, без секретов и костылей
# Собирает Release libmain.so (android-release preset) + Release APK, подписанный debug-ключом
# чтобы был сразу устанавливаемым. Для Play Store подмени ANDROID_KEYSTORE_* env vars.
set -euo pipefail
WORKSPACE="$(cd "$(dirname "$0")" && pwd)"

echo "=== Marathon Recompiled — One-Click Release APK ==="
echo "Этот скрипт сделает всё сам:"
echo "  1. Скачает NDK r27c + Android SDK 34 (если нет)"
echo "  2. Скачает MarathonRecompResources + dxc-bin (если нет)"
echo "  3. Соберёт хост-тулзы (XenonRecomp, XenosRecomp, file_to_c, ...)"
echo "  4. Соберёт Release libmain.so (arm64-v8a, API 28, оптимизированный)"
echo "  5. Соберёт Release APK и подпишет debug-ключом (устанавливаемый без секретов)"
echo ""

# Если есть приватные файлы игры (для рекомпиляции PPC и шейдеров) — используем их,
# если нет — соберётся только лаунчер (в самой игре потом выберешь папку с дампом через SAF).
PRIVATE_XEX="$WORKSPACE/MarathonRecompLib/private/default.xex"
if [[ ! -f "$PRIVATE_XEX" ]]; then
  echo "⚠ ВНИМАНИЕ: нет $PRIVATE_XEX"
  echo "  Для полной сборки нужен дамп Xbox 360 (default.xex + shader.arc + shader_lt.arc)"
  echo "  Положи их в MarathonRecompLib/private/ и перезапусти, ИЛИ собери APK-лаунчер"
  echo "  без движка (игра скопирует дамп при первом запуске через Storage Access Framework)."
  echo ""
fi

bash "$WORKSPACE/build-apk.sh" --release

APK_RELEASE="$WORKSPACE/android-apk/app/build/outputs/apk/release/app-release.apk"
APK_RELEASE_UNSIGNED="$WORKSPACE/android-apk/app/build/outputs/apk/release/app-release-unsigned.apk"
if [[ -f "$APK_RELEASE" ]]; then
  echo ""
  echo "✔ Release APK готов: $APK_RELEASE"
  ls -lh "$APK_RELEASE"
elif [[ -f "$APK_RELEASE_UNSIGNED" ]]; then
  echo ""
  echo "✔ Release APK (unsigned) готов: $APK_RELEASE_UNSIGNED"
  echo "  Подпиши его сам или переcобери — build-apk.sh --release теперь генерит debug-keystore автоматически,"
  echo "  но если файл всё равно unsigned, проверь android-apk/app/release-signing.properties"
  ls -lh "$APK_RELEASE_UNSIGNED"
else
  echo "✘ APK не найден"
  exit 1
fi
echo ""
echo "Установи: adb install -r $APK_RELEASE"
