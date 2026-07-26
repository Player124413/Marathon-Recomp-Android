package org.libsdl.app;

import android.app.Activity;
import android.graphics.Typeface;
import android.os.Bundle;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.io.IOException;
import java.util.LinkedHashMap;
import java.util.Map;

/**
 * Settings screen for Marathon Recompiled (Android).
 *
 * Mirrors SansNope/UnleashedRecomp-Android: no SharedPreferences.
 * Settings are read directly from config.toml on open, and each change is
 * patched into config.toml immediately via GameSettings.patchConfig().
 * The native engine (Config::Load / Config::Save) operates on the same file,
 * so launcher and engine always agree.
 *
 * Sections: Graphics · Audio · System
 */
public final class SettingsActivity extends Activity {

    // ── palette ───────────────────────────────────────────────────────────────
    private static final int C_BG        = 0xFF0B1120;
    private static final int C_CARD      = 0xFF141D2E;
    private static final int C_SECTION   = 0xFF1A2640;
    private static final int C_ACCENT    = 0xFF00A8FF;
    private static final int C_TEXT_PRI  = 0xFFFFFFFF;
    private static final int C_TEXT_HINT = 0xFF607080;
    private static final int C_DIVIDER   = 0xFF1E2D40;

    private File configFile;
    private Map<String, String> config;

    // ── lifecycle ─────────────────────────────────────────────────────────────

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        if (getActionBar() != null) {
            getActionBar().setTitle("Settings");
            getActionBar().setDisplayHomeAsUpEnabled(true);
        }

        configFile = AppStorage.configFile(this);
        config = GameSettings.readConfig(configFile);

        ScrollView scroll = new ScrollView(this);
        scroll.setBackgroundColor(C_BG);
        scroll.setFillViewport(true);

        LinearLayout page = new LinearLayout(this);
        page.setOrientation(LinearLayout.VERTICAL);
        page.setPadding(0, dp(8), 0, dp(32));
        scroll.addView(page);

        buildGraphicsSection(page);
        buildAudioSection(page);
        buildSystemSection(page);

        setContentView(scroll);
    }

    @Override
    public boolean onNavigateUp() {
        finish();
        return true;
    }

    // ── sections ──────────────────────────────────────────────────────────────

    private void buildGraphicsSection(LinearLayout parent) {
        addSectionHeader(parent, "GRAPHICS");

        addStringSpinnerRow(parent,
                "Graphics API",
                "Rendering backend. Vulkan is required; Auto picks it automatically.",
                new String[]{"Auto (default)", "Vulkan"},
                new String[]{"Auto", "Vulkan"},
                GameSettings.K_GRAPHICS_API,
                GameSettings.findIndex(new String[]{"Auto", "Vulkan"},
                        config.get(GameSettings.K_GRAPHICS_API)));

        addStringSpinnerRow(parent,
                "Graphics Driver",
                "SDL video driver. On Android both Auto and System use the " +
                "same underlying driver — keep this on Auto.",
                new String[]{"Auto (default)", "System"},
                new String[]{"Auto", "System"},
                GameSettings.K_SDL_VIDEO_DRIVER,
                GameSettings.findIndex(new String[]{"Auto", "System"},
                        config.get(GameSettings.K_SDL_VIDEO_DRIVER)));

        final String[] internalResolutionValues = {"960x540", "720p", "Native"};
        final String[] internalResolutionLabels = {
                "960×540 (recommended)",
                "720p (higher quality)",
                "Native (display resolution)"
        };
        addStringSpinnerRow(parent,
                "Internal Resolution",
                "Render internally at a stable resolution, then upscale to the full display",
                internalResolutionLabels,
                internalResolutionValues,
                GameSettings.K_INTERNAL_RESOLUTION,
                GameSettings.findIndex(internalResolutionValues,
                        config.get(GameSettings.K_INTERNAL_RESOLUTION)));

        // Resolution scale — float, no quotes in TOML
        final String[] resValues  = {"0.5", "0.75", "1.0", "1.5", "2.0"};
        final String[] resLabels  = {"0.5× (Low)", "0.75× (Medium-Low)", "1.0× (Native)", "1.5× (High)", "2.0× (Ultra)"};
        addSpinnerRow(parent,
                "Resolution Scale",
                "Internal render resolution multiplier",
                resLabels,
                resValues,
                GameSettings.findFloatIndex(resValues, config.get(GameSettings.K_RESOLUTION_SCALE)),
                value -> patch(GameSettings.K_RESOLUTION_SCALE,
                        GameSettings.fmtFloat(Float.parseFloat(value))));

        addSwitchRow(parent,
                "VSync",
                "Synchronise frame output with display refresh",
                GameSettings.parseBool(config.get(GameSettings.K_VSYNC), true),
                checked -> patch(GameSettings.K_VSYNC, Boolean.toString(checked)));

        // Anti-aliasing — values must match EAntiAliasing template keys in config.cpp
        final String[] aaValues = {"Off", "2x MSAA", "4x MSAA", "8x MSAA"};
        final String[] aaLabels = {"Off", "MSAA 2×", "MSAA 4×", "MSAA 8×"};
        addSpinnerRow(parent,
                "Anti-Aliasing",
                "Multisample anti-aliasing level",
                aaLabels,
                aaValues,
                GameSettings.findIndex(aaValues, config.get(GameSettings.K_ANTI_ALIASING)),
                value -> patch(GameSettings.K_ANTI_ALIASING, GameSettings.q(value)));

        // FPS — integer, no quotes
        final String[] fpsValues = {"30", "60", "120"};
        final String[] fpsLabels = {"30 FPS", "60 FPS", "120 FPS"};
        addSpinnerRow(parent,
                "FPS Cap",
                "Maximum frames per second",
                fpsLabels,
                fpsValues,
                GameSettings.findIntIndex(fpsValues, config.get(GameSettings.K_FPS)),
                value -> patch(GameSettings.K_FPS, value));

        // Shadow resolution — values must match EShadowResolution template keys
        final String[] shadowValues = {"512", "1024", "2048", "4096", "8192"};
        final String[] shadowLabels = {"Low (512)", "Medium (1024)", "High (2048)", "Ultra (4096)", "Extreme (8192)"};
        addSpinnerRow(parent,
                "Shadow Resolution",
                "Quality of real-time shadow maps",
                shadowLabels,
                shadowValues,
                GameSettings.findIndex(shadowValues, config.get(GameSettings.K_SHADOW_RES)),
                value -> patch(GameSettings.K_SHADOW_RES, GameSettings.q(value)));

        addSwitchRow(parent,
                "Show FPS Counter",
                "Display frame rate in-game",
                GameSettings.parseBool(config.get(GameSettings.K_SHOW_FPS), false),
                checked -> patch(GameSettings.K_SHOW_FPS, Boolean.toString(checked)));
    }

    private void buildAudioSection(LinearLayout parent) {
        addSectionHeader(parent, "AUDIO");

        int masterPct  = Math.round(GameSettings.parseFloat(config.get(GameSettings.K_MASTER_VOLUME),  1.0f) * 100f);
        int musicPct   = Math.round(GameSettings.parseFloat(config.get(GameSettings.K_MUSIC_VOLUME),   0.6f) * 100f);
        int effectsPct = Math.round(GameSettings.parseFloat(config.get(GameSettings.K_EFFECTS_VOLUME), 0.6f) * 100f);

        addSeekBarRow(parent, "Master Volume",  masterPct,
                p -> patch(GameSettings.K_MASTER_VOLUME,  GameSettings.fmtFloat(p / 100f)));
        addSeekBarRow(parent, "Music Volume",   musicPct,
                p -> patch(GameSettings.K_MUSIC_VOLUME,   GameSettings.fmtFloat(p / 100f)));
        addSeekBarRow(parent, "Effects Volume", effectsPct,
                p -> patch(GameSettings.K_EFFECTS_VOLUME, GameSettings.fmtFloat(p / 100f)));

        addSwitchRow(parent,
                "Mute on Focus Lost",
                "Mute audio when the app is in the background",
                GameSettings.parseBool(config.get(GameSettings.K_MUTE_FOCUS), true),
                checked -> patch(GameSettings.K_MUTE_FOCUS, Boolean.toString(checked)));
    }

    private void buildSystemSection(LinearLayout parent) {
        addSectionHeader(parent, "SYSTEM");

        final String[] langValues = {"English", "Japanese", "German", "French", "Spanish", "Italian"};
        addSpinnerRow(parent,
                "Language",
                "In-game text and menu language",
                langValues,
                langValues,
                GameSettings.findIndex(langValues, config.get(GameSettings.K_LANGUAGE)),
                value -> patch(GameSettings.K_LANGUAGE, GameSettings.q(value)));

        addSwitchRow(parent,
                "Subtitles",
                "Show subtitles during cutscenes",
                GameSettings.parseBool(config.get(GameSettings.K_SUBTITLES), true),
                checked -> patch(GameSettings.K_SUBTITLES, Boolean.toString(checked)));

        addSwitchRow(parent,
                "Skip Intro Logos",
                "Skip the SEGA / Sonic Team splash screens",
                GameSettings.parseBool(config.get(GameSettings.K_SKIP_INTRO), false),
                checked -> patch(GameSettings.K_SKIP_INTRO, Boolean.toString(checked)));

        addSwitchRow(parent,
                "Disable Title Input Delay",
                "Remove the input wait on the title screen",
                GameSettings.parseBool(config.get(GameSettings.K_DISABLE_INPUT_DELAY), false),
                checked -> patch(GameSettings.K_DISABLE_INPUT_DELAY, Boolean.toString(checked)));
    }

    // ── widget helpers ────────────────────────────────────────────────────────

    private void addSectionHeader(LinearLayout parent, String label) {
        View spacer = new View(this);
        spacer.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(12)));
        parent.addView(spacer);

        LinearLayout header = new LinearLayout(this);
        header.setOrientation(LinearLayout.HORIZONTAL);
        header.setGravity(Gravity.CENTER_VERTICAL);
        header.setBackgroundColor(C_SECTION);
        header.setPadding(dp(20), dp(10), dp(20), dp(10));

        View bar = new View(this);
        LinearLayout.LayoutParams barP = new LinearLayout.LayoutParams(dp(3),
                ViewGroup.LayoutParams.MATCH_PARENT);
        barP.rightMargin = dp(12);
        bar.setLayoutParams(barP);
        bar.setBackgroundColor(C_ACCENT);
        header.addView(bar);

        TextView tv = new TextView(this);
        tv.setText(label);
        tv.setTextColor(C_ACCENT);
        tv.setTextSize(12);
        tv.setTypeface(null, Typeface.BOLD);
        tv.setLetterSpacing(0.12f);
        header.addView(tv);

        parent.addView(header, new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
    }

    private void addSwitchRow(LinearLayout parent, String title, String desc,
                               boolean initial, BoolConsumer listener) {
        LinearLayout row = makeRow();

        LinearLayout text = new LinearLayout(this);
        text.setOrientation(LinearLayout.VERTICAL);
        LinearLayout.LayoutParams tp = new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f);
        tp.rightMargin = dp(12);
        text.setLayoutParams(tp);
        text.addView(makeTitleText(title));
        if (desc != null && !desc.isEmpty()) text.addView(makeDescText(desc));
        row.addView(text);

        Switch sw = new Switch(this);
        sw.setChecked(initial);
        sw.setOnCheckedChangeListener((buttonView, isChecked) -> listener.accept(isChecked));
        row.addView(sw);

        parent.addView(row);
        addDivider(parent);
    }

    /**
     * Spinner row for string-enum TOML values. Saves using GameSettings.q(value).
     * Convenience wrapper over the general addSpinnerRow.
     */
    private void addStringSpinnerRow(LinearLayout parent, String title, String desc,
                                      String[] labels, String[] values,
                                      String tomlKey, int initialIdx) {
        addSpinnerRow(parent, title, desc, labels, values, initialIdx,
                value -> patch(tomlKey, GameSettings.q(value)));
    }

    /** General spinner row. The consumer receives the raw value string. */
    private void addSpinnerRow(LinearLayout parent, String title, String desc,
                                String[] labels, final String[] values, int initialIdx,
                                StringConsumer listener) {
        LinearLayout row = makeRow();

        LinearLayout text = new LinearLayout(this);
        text.setOrientation(LinearLayout.VERTICAL);
        LinearLayout.LayoutParams tp = new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f);
        tp.rightMargin = dp(8);
        text.setLayoutParams(tp);
        text.addView(makeTitleText(title));
        if (desc != null && !desc.isEmpty()) text.addView(makeDescText(desc));
        row.addView(text);

        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this,
                android.R.layout.simple_spinner_item, labels) {
            @Override
            public View getView(int pos, View cv, ViewGroup p) {
                TextView tv = (TextView) super.getView(pos, cv, p);
                tv.setTextColor(C_TEXT_PRI);
                tv.setTextSize(14);
                return tv;
            }
            @Override
            public View getDropDownView(int pos, View cv, ViewGroup p) {
                TextView tv = (TextView) super.getDropDownView(pos, cv, p);
                tv.setTextColor(C_TEXT_PRI);
                tv.setBackgroundColor(C_CARD);
                tv.setPadding(dp(16), dp(12), dp(16), dp(12));
                return tv;
            }
        };
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);

        Spinner spinner = new Spinner(this);
        spinner.setAdapter(adapter);
        spinner.setSelection(initialIdx, false);
        spinner.setPopupBackgroundResource(android.R.color.background_dark);

        // Compare by value to ignore spurious onItemSelected calls (Android may
        // fire one when the spinner is attached, or may not — neither skipCount
        // nor a boolean flag handles this reliably when initialIdx == 0).
        final String[] committed = {values[initialIdx]};
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> p, View v, int pos, long id) {
                String selected = values[pos];
                if (selected.equals(committed[0])) return;
                committed[0] = selected;
                listener.accept(selected);
            }
            @Override public void onNothingSelected(AdapterView<?> p) {}
        });

        LinearLayout.LayoutParams sp = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        sp.gravity = Gravity.CENTER_VERTICAL;
        row.addView(spinner, sp);

        parent.addView(row);
        addDivider(parent);
    }

    private void addSeekBarRow(LinearLayout parent, String title, int initial,
                                IntConsumer listener) {
        LinearLayout row = new LinearLayout(this);
        row.setOrientation(LinearLayout.VERTICAL);
        row.setBackgroundColor(C_CARD);
        row.setPadding(dp(20), dp(14), dp(20), dp(14));

        LinearLayout topLine = new LinearLayout(this);
        topLine.setOrientation(LinearLayout.HORIZONTAL);
        topLine.setGravity(Gravity.CENTER_VERTICAL);

        TextView titleTv = makeTitleText(title);
        titleTv.setLayoutParams(new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f));
        topLine.addView(titleTv);

        TextView valueTv = new TextView(this);
        valueTv.setText(initial + "%");
        valueTv.setTextColor(C_ACCENT);
        valueTv.setTextSize(14);
        valueTv.setTypeface(null, Typeface.BOLD);
        valueTv.setMinWidth(dp(48));
        valueTv.setGravity(Gravity.END);
        topLine.addView(valueTv);
        row.addView(topLine);

        SeekBar bar = new SeekBar(this);
        bar.setMax(100);
        bar.setProgress(initial);
        LinearLayout.LayoutParams bp = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        bp.topMargin = dp(8);
        bar.setLayoutParams(bp);
        bar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar s, int progress, boolean fromUser) {
                valueTv.setText(progress + "%");
                if (fromUser) listener.accept(progress);
            }
            @Override public void onStartTrackingTouch(SeekBar s) {}
            @Override public void onStopTrackingTouch(SeekBar s) {}
        });
        row.addView(bar);

        parent.addView(row, new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        addDivider(parent);
    }

    // ── layout utilities ──────────────────────────────────────────────────────

    private LinearLayout makeRow() {
        LinearLayout row = new LinearLayout(this);
        row.setOrientation(LinearLayout.HORIZONTAL);
        row.setGravity(Gravity.CENTER_VERTICAL);
        row.setBackgroundColor(C_CARD);
        row.setPadding(dp(20), dp(14), dp(20), dp(14));
        row.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        return row;
    }

    private TextView makeTitleText(String text) {
        TextView tv = new TextView(this);
        tv.setText(text);
        tv.setTextColor(C_TEXT_PRI);
        tv.setTextSize(15);
        return tv;
    }

    private TextView makeDescText(String text) {
        TextView tv = new TextView(this);
        tv.setText(text);
        tv.setTextColor(C_TEXT_HINT);
        tv.setTextSize(12);
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        p.topMargin = dp(2);
        tv.setLayoutParams(p);
        return tv;
    }

    private void addDivider(LinearLayout parent) {
        View div = new View(this);
        div.setBackgroundColor(C_DIVIDER);
        div.setLayoutParams(new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, 1));
        parent.addView(div);
    }

    private int dp(int value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }

    // ── config patch helper ───────────────────────────────────────────────────

    /**
     * Patches a single key in config.toml.  Silently ignores IO errors so that
     * a disk-full or permission issue doesn't crash the settings screen.
     */
    private void patch(String key, String tomlValue) {
        LinkedHashMap<String, String> change = new LinkedHashMap<>();
        change.put(key, tomlValue);
        try {
            GameSettings.patchConfig(configFile, change);
        } catch (IOException e) {
            Toast.makeText(this, "Could not save setting — check storage permissions.",
                    Toast.LENGTH_SHORT).show();
        }
    }

    // ── functional interfaces ─────────────────────────────────────────────────

    interface BoolConsumer   { void accept(boolean value); }
    interface StringConsumer { void accept(String value); }
    interface IntConsumer    { void accept(int value); }
}
