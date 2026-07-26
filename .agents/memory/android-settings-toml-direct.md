---
name: Android settings — TOML direct read/write (no SharedPreferences)
description: How the Marathon Recompiled Android launcher reads and saves settings; mirrors SansNope/UnleashedRecomp-Android pattern.
---

## Rule
The launcher and SettingsActivity must read/write config.toml **directly** using
`GameSettings.readConfig()` / `GameSettings.patchConfig()`. No SharedPreferences
for any setting that the native engine also reads or writes.

**Why:**
SharedPreferences creates a stale parallel copy of settings. When the launcher
runs `writeConfigToml()` from prefs, it silently overwrites whatever `Config::Save()`
wrote after the last play session (in-game changes, manual file edits). This is the
root cause of "settings keep reverting."

## How to apply
- `GameSettings.java` — pure TOML utilities: `readConfig(File)` → `Map<String, String>`,
  `patchConfig(File, LinkedHashMap)` atomic patch, `seedDefaultConfig(Context)` first-launch only.
- `SettingsActivity` — calls `GameSettings.readConfig(AppStorage.configFile(this))` in `onCreate`;
  each widget change calls `patch(key, tomlValue)` which calls `patchConfig` directly.
- `LauncherActivity` — calls `GameSettings.seedDefaultConfig(this)` (no-op if file exists).
  `applyCompatibleSettings()` (Mali GPU) also calls `patchConfig` directly.
- `AppStorage` — exposes `configFile(Context)` returning `new File(dataRoot(context), "config.toml")`.

## Correct TOML enum string values (must match config_def.h / g_*_template maps)
- AntiAliasing: `"Off"`, `"2x MSAA"`, `"4x MSAA"`, `"8x MSAA"`  ← NOT "None"/"MSAA4x"
- ShadowResolution: `"512"`, `"1024"`, `"2048"`, `"4096"`, `"8192"` ← NOT "x512"/"x1024"
- GraphicsAPI: `"Auto"`, `"Vulkan"`
- SDLVideoDriver: `"Auto"`, `"System"`
- Language: `"English"`, `"Japanese"`, etc. (quoted strings in TOML)
- Volume keys: stored as floats 0.0–1.0, no quotes (`Audio.MasterVolume = 1.000000`)

## SharedPreferences that remain
`LAUNCHER_PREFS = "launcher_ui_state"` in LauncherActivity — only for one-time
UI state flags (e.g. `gpu_compat_warned`). Never for game settings.

## Spinner spurious callback fix
`committedValue[]` string comparison in `onItemSelected`: skip callback if
`values[position].equals(committedValue[0])`. Reliable regardless of initial
index or Android version (skipCount approach fails when initial index == 0).
