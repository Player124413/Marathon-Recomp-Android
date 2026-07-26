package org.libsdl.app;

import android.content.Context;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/**
 * TOML config utilities for Marathon Recompiled.
 *
 * Mirrors SansNope/UnleashedRecomp-Android: no SharedPreferences —
 * we read/write config.toml directly so the launcher and the native engine
 * always share exactly one file and neither can silently overwrite the other.
 *
 * Key naming: "Section.Key" flat strings matching config_def.h exactly.
 * Enum string values must match the keys in the C++ g_*_template maps.
 */
public final class GameSettings {
    private GameSettings() {}

    // ── TOML "Section.Key" identifiers ────────────────────────────────────────
    // These must match the section/name pairs in config_def.h exactly.

    static final String K_GRAPHICS_API        = "Video.GraphicsAPI";
    static final String K_SDL_VIDEO_DRIVER    = "Video.SDLVideoDriver";
    static final String K_INTERNAL_RESOLUTION = "Video.InternalResolution";
    static final String K_RESOLUTION_SCALE    = "Video.ResolutionScale";
    static final String K_VSYNC               = "Video.VSync";
    static final String K_FPS                 = "Video.FPS";
    static final String K_SHOW_FPS            = "Video.ShowFPS";
    // Enum values: "Off" / "2x MSAA" / "4x MSAA" / "8x MSAA"  (from EAntiAliasing template)
    static final String K_ANTI_ALIASING       = "Video.AntiAliasing";
    // Enum values: "512" / "1024" / "2048" / "4096" / "8192"   (from EShadowResolution template)
    static final String K_SHADOW_RES          = "Video.ShadowResolution";

    static final String K_MASTER_VOLUME       = "Audio.MasterVolume";
    static final String K_MUSIC_VOLUME        = "Audio.MusicVolume";
    static final String K_EFFECTS_VOLUME      = "Audio.EffectsVolume";
    static final String K_MUTE_FOCUS          = "Audio.MuteOnFocusLost";

    // Enum values: "English" / "Japanese" / "German" / "French" / "Spanish" / "Italian"
    static final String K_LANGUAGE            = "System.Language";
    static final String K_SUBTITLES           = "System.Subtitles";

    // Codes section — CONFIG_DEFINE_HIDDEN; the engine still reads them.
    static final String K_SKIP_INTRO          = "Codes.SkipIntroLogos";
    static final String K_DISABLE_INPUT_DELAY = "Codes.DisableTitleInputDelay";

    // ── First-launch seeding ──────────────────────────────────────────────────

    /**
     * Writes a minimal default config.toml if none exists yet.
     * Does nothing if the file is already present — preserves whatever the
     * engine or the user has written there.
     */
    static void seedDefaultConfig(Context context) {
        File file = AppStorage.configFile(context);
        if (file.isFile()) return;
        LinkedHashMap<String, String> d = new LinkedHashMap<>();
        d.put(K_GRAPHICS_API,        q("Auto"));
        d.put(K_SDL_VIDEO_DRIVER,    q("Auto"));
        d.put(K_INTERNAL_RESOLUTION, q("960x540"));
        d.put(K_RESOLUTION_SCALE,    fmtFloat(1.0f));
        d.put(K_VSYNC,               "true");
        d.put(K_FPS,                 "60");
        d.put(K_SHOW_FPS,            "false");
        // Android default: safe values that work on all tested GPUs including
        // Mali (Galaxy Tab A9 SM-X110 / Mali-G57).  The native engine raises
        // these for discrete/high-end Adreno devices at runtime via
        // ApplyLowEndDefaults; we seed conservatively so a first launch on a
        // Mali device doesn't immediately trigger a GPU driver crash.
        d.put(K_ANTI_ALIASING,       q("Off"));
        d.put(K_SHADOW_RES,          q("1024"));
        d.put(K_MASTER_VOLUME,       fmtFloat(1.0f));
        d.put(K_MUSIC_VOLUME,        fmtFloat(0.6f));
        d.put(K_EFFECTS_VOLUME,      fmtFloat(0.6f));
        d.put(K_MUTE_FOCUS,          "true");
        d.put(K_LANGUAGE,            q("English"));
        d.put(K_SUBTITLES,           "true");
        d.put(K_SKIP_INTRO,          "false");
        d.put(K_DISABLE_INPUT_DELAY, "false");
        try { patchConfig(file, d); } catch (IOException ignored) {}
    }

    // ── TOML read ─────────────────────────────────────────────────────────────

    /**
     * Parses config.toml into a flat "Section.Key" → raw-value map.
     * String values keep their surrounding quotes; booleans/numbers do not.
     * Returns an empty map if the file does not exist or cannot be read.
     */
    static Map<String, String> readConfig(File file) {
        Map<String, String> result = new LinkedHashMap<>();
        if (!file.isFile()) return result;
        String section = "";
        try (BufferedReader r = new BufferedReader(new InputStreamReader(
                new FileInputStream(file), StandardCharsets.UTF_8))) {
            String line;
            while ((line = r.readLine()) != null) {
                String t = line.trim();
                if (t.startsWith("[") && t.endsWith("]")) {
                    section = t.substring(1, t.length() - 1).trim();
                } else if (!t.startsWith("#") && !t.isEmpty()) {
                    int eq = t.indexOf('=');
                    if (eq > 0) {
                        result.put(section + "." + t.substring(0, eq).trim(),
                                   t.substring(eq + 1).trim());
                    }
                }
            }
        } catch (IOException ignored) {}
        return result;
    }

    // ── TOML patch ────────────────────────────────────────────────────────────

    /**
     * Updates specific keys in config.toml in-place; all other lines,
     * comments and sections are preserved.  Missing keys/sections are appended.
     * Writes atomically via a .tmp file.
     */
    static void patchConfig(File file, LinkedHashMap<String, String> changes) throws IOException {
        List<String> lines = file.isFile()
                ? Files.readAllLines(file.toPath(), StandardCharsets.UTF_8)
                : new ArrayList<>();

        // Track which changes have been written.
        Map<String, Boolean> written = new LinkedHashMap<>();
        for (String key : changes.keySet()) written.put(key, false);

        String section = "";
        for (int i = 0; i < lines.size(); i++) {
            String t = lines.get(i).trim();
            if (t.startsWith("[") && t.endsWith("]")) {
                section = t.substring(1, t.length() - 1).trim();
                continue;
            }
            int eq = t.indexOf('=');
            if (eq <= 0 || t.startsWith("#")) continue;
            String full = section + "." + t.substring(0, eq).trim();
            if (changes.containsKey(full)) {
                lines.set(i, t.substring(0, eq).trim() + " = " + changes.get(full));
                written.put(full, true);
            }
        }

        // Append any keys that were not already in the file.
        for (String full : changes.keySet()) {
            if (written.get(full)) continue;
            int dot = full.indexOf('.');
            String wantedSection = full.substring(0, dot);
            String name = full.substring(dot + 1);
            int insertAt = lines.size();
            boolean found = false;
            for (int i = 0; i < lines.size(); i++) {
                if (lines.get(i).trim().equals("[" + wantedSection + "]")) {
                    found = true;
                    insertAt = i + 1;
                    while (insertAt < lines.size()
                            && !lines.get(insertAt).trim().startsWith("["))
                        insertAt++;
                    break;
                }
            }
            if (!found) {
                if (!lines.isEmpty() && !lines.get(lines.size() - 1).isEmpty())
                    lines.add("");
                lines.add("[" + wantedSection + "]");
                insertAt = lines.size();
            }
            lines.add(insertAt, name + " = " + changes.get(full));
        }

        // Atomic write.
        File parent = file.getParentFile();
        if (parent != null && !parent.isDirectory()) parent.mkdirs();
        File tmp = new File(parent != null ? parent : new File("."), file.getName() + ".tmp");
        try (OutputStreamWriter w = new OutputStreamWriter(
                new FileOutputStream(tmp), StandardCharsets.UTF_8)) {
            for (String line : lines) w.write(line + "\n");
        }
        try {
            Files.move(tmp.toPath(), file.toPath(),
                    StandardCopyOption.REPLACE_EXISTING, StandardCopyOption.ATOMIC_MOVE);
        } catch (IOException ignored) {
            Files.move(tmp.toPath(), file.toPath(), StandardCopyOption.REPLACE_EXISTING);
        }
    }

    // ── Value helpers ─────────────────────────────────────────────────────────

    /** Wrap a string value in TOML double-quotes. */
    static String q(String value) { return "\"" + value + "\""; }

    /** Format a float for TOML output (six decimal places, no quotes). */
    static String fmtFloat(float v) {
        return String.format(Locale.US, "%.6f", v);
    }

    /**
     * Find the spinner-index whose entry equals the raw TOML value string
     * (strips surrounding quotes before comparing, case-insensitive).
     * Returns 0 (first entry) if not found.
     */
    static int findIndex(String[] values, String raw) {
        if (raw == null) return 0;
        String stripped = raw.replace("\"", "").trim();
        for (int i = 0; i < values.length; i++) {
            if (values[i].equalsIgnoreCase(stripped)) return i;
        }
        return 0;
    }

    /**
     * Find the spinner-index whose float value is nearest the raw TOML string.
     * Used for ResolutionScale where "1.0" and "1.000000" must both match index 2.
     */
    static int findFloatIndex(String[] floatValues, String raw) {
        if (raw == null) return 0;
        float target;
        try { target = Float.parseFloat(raw.trim()); }
        catch (NumberFormatException e) { return 0; }
        for (int i = 0; i < floatValues.length; i++) {
            try {
                if (Math.abs(Float.parseFloat(floatValues[i]) - target) < 0.001f) return i;
            } catch (NumberFormatException ignored) {}
        }
        return 0;
    }

    /**
     * Find the spinner-index whose integer value equals the raw TOML string.
     * Used for FPS.
     */
    static int findIntIndex(String[] intValues, String raw) {
        if (raw == null) return 0;
        try {
            int target = Integer.parseInt(raw.trim());
            for (int i = 0; i < intValues.length; i++) {
                if (Integer.parseInt(intValues[i]) == target) return i;
            }
        } catch (NumberFormatException ignored) {}
        return 0;
    }

    /** Parse a raw TOML boolean string; returns fallback on null/error. */
    static boolean parseBool(String raw, boolean fallback) {
        if (raw == null) return fallback;
        return Boolean.parseBoolean(raw.trim());
    }

    /** Parse a raw TOML float string; returns fallback on null/error. */
    static float parseFloat(String raw, float fallback) {
        if (raw == null) return fallback;
        try { return Float.parseFloat(raw.trim()); }
        catch (NumberFormatException e) { return fallback; }
    }
}
