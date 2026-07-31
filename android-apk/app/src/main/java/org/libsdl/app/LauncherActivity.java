package org.libsdl.app;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Color;
import android.graphics.Typeface;
import android.net.Uri;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.os.Bundle;
import android.provider.DocumentsContract;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.documentfile.provider.DocumentFile;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.LinkedHashMap;

/**
 * Marathon Recompiled launcher — shown every time the app starts.
 *
 * Mirrors SansNope/UnleashedRecomp-Android: settings are stored in config.toml
 * only.  SharedPreferences are used solely for launcher-UI state (one-time
 * dialogs etc.) — never for game settings.
 *
 * Responsibilities:
 *   1. Guard the game — GameActivity is never started until default.xex is present.
 *   2. Let the user pick their Xbox 360 game dump (SAF) and copy it to storage.
 *   3. Open SettingsActivity.
 *   4. Seed a default config.toml on the very first launch.
 */
public final class LauncherActivity extends Activity {

    private static final int REQUEST_GAME_TREE  = 1001;
    private static final int REQUEST_DRIVER_ZIP = 1002;

    // Launcher-only prefs (one-time UI state — NOT game settings).
    private static final String LAUNCHER_PREFS = "launcher_ui_state";
    private static final String PREF_GPU_WARNED = "gpu_compat_warned";

    // ── palette ───────────────────────────────────────────────────────────────
    private static final int C_BG          = 0xFF0B1120;
    private static final int C_CARD        = 0xFF141D2E;
    private static final int C_ACCENT      = 0xFF00A8FF;
    private static final int C_TEXT_PRI    = 0xFFFFFFFF;
    private static final int C_TEXT_SEC    = 0xFFB0BEC5;
    private static final int C_TEXT_HINT   = 0xFF607080;
    private static final int C_BTN_PLAY    = 0xFF00A8FF;
    private static final int C_BTN_SEC     = 0xFF1E2D40;

    private TextView    statusText;
    private Button      playButton;
    private Button      selectButton;
    private ProgressBar progressBar;
    private volatile boolean copying = false;

    // ── GPU driver (Turnip) card ────────────────────────────────────────────
    private TextView driverStatusText;
    private Button   driverInstallButton;
    private Button   driverCompatButton;
    private Button   driverSystemButton;
    private Button   driverReEnableButton;
    private volatile boolean installingDriver = false;

    // ── lifecycle ─────────────────────────────────────────────────────────────

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Ensure the internal turnip/ directory exists on first launch: it
        // ships the readme the native side writes, and DriverManager writes
        // the boot-recovery state there too.
        DriverManager.ensureFilesystem(this);

        // Seed a default config.toml on the very first launch.
        // If the file already exists (subsequent launches, post-game saves,
        // or manual edits) this is a no-op — we never overwrite it.
        GameSettings.seedDefaultConfig(this);

        setContentView(buildPage());
        refreshStatus();
        refreshDriverCard();
        checkGpuCompatibilityAsync();
    }

    @Override
    protected void onResume() {
        super.onResume();
        refreshDriverCard();
        if (!copying && !installingDriver) {
            refreshStatus();
            checkCrashSentinel();
        }
    }

    // ── crash sentinel ────────────────────────────────────────────────────────

    /**
     * If a _crash_sentinel file exists the game process was killed unexpectedly
     * (GPU driver fault) before it could remove it on clean exit.
     */
    private void checkCrashSentinel() {
        File sentinel = new File(AppStorage.dataRoot(this), "_crash_sentinel");
        if (!sentinel.exists()) return;
        sentinel.delete();

        // Read the tail of the persistent log file so the user (or a dev)
        // can see exactly what happened before the crash.
        final String logTail = readLogTail(AppStorage.logFile(this), 4000);

        AlertDialog.Builder builder = new AlertDialog.Builder(this)
            .setTitle("⚠  Game Exited Unexpectedly")
            .setMessage(
                "The game was killed by a graphics driver crash.\n\n" +
                "Suggested fixes:\n" +
                "• Set Shadow Resolution to Medium (1024) or lower\n" +
                "• Set Anti-Aliasing to Off\n" +
                "• Lower Resolution Scale to 0.75× or 0.5×\n" +
                "• Set Graphics Driver to Auto (not System)\n" +
                "• On Snapdragon (Adreno) devices, try the open-source Turnip " +
                "driver: it's often more stable than the vendor driver with " +
                "this engine. Install it from a zip in the GPU DRIVER card " +
                "on this screen.\n\n" +
                "On Mali GPUs (Galaxy Tab A9, etc.) shadow resolutions above " +
                "1024 and any MSAA level cause driver crashes.\n\n" +
                (logTail != null
                    ? "Log tail (last ~4 KB) — tap 'Copy Log' to share:\n\n" + logTail
                    : "(No log file found — launch the game once to generate one.)"))
            .setPositiveButton("Open Settings", (d, w) ->
                    startActivity(new Intent(this, SettingsActivity.class)))
            .setNegativeButton("OK", null)
            .setCancelable(true);

        if (logTail != null) {
            builder.setNeutralButton("Copy Log", (d, w) -> copyToClipboard(logTail));
        }

        builder.show();
    }

    /** Reads the last {@code maxChars} characters of a file, or null if unavailable. */
    private String readLogTail(File file, int maxChars) {
        if (!file.isFile()) return null;
        try (FileInputStream fis = new FileInputStream(file)) {
            long length = file.length();
            long skip   = Math.max(0, length - maxChars);
            if (skip > 0) fis.skip(skip);
            byte[] buf = new byte[(int) Math.min(length, maxChars)];
            int read = fis.read(buf);
            if (read <= 0) return null;
            return new String(buf, 0, read, "UTF-8");
        } catch (Exception e) {
            return null;
        }
    }

    private void copyToClipboard(String text) {
        ClipboardManager cm =
            (ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
        if (cm == null) return;
        cm.setPrimaryClip(ClipData.newPlainText("MarathonRecomp Log", text));
        Toast.makeText(this, "Log copied to clipboard", Toast.LENGTH_SHORT).show();
    }

    // ── UI ────────────────────────────────────────────────────────────────────

    private View buildPage() {
        ScrollView scroll = new ScrollView(this);
        scroll.setBackgroundColor(C_BG);

        LinearLayout page = new LinearLayout(this);
        page.setOrientation(LinearLayout.VERTICAL);
        page.setGravity(Gravity.CENTER_HORIZONTAL);
        page.setBackgroundColor(C_BG);
        scroll.addView(page, new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.MATCH_PARENT));

        // ── hero ──────────────────────────────────────────────────────────────
        LinearLayout hero = new LinearLayout(this);
        hero.setOrientation(LinearLayout.VERTICAL);
        hero.setGravity(Gravity.CENTER_HORIZONTAL);
        hero.setBackgroundColor(C_CARD);
        hero.setPadding(dp(24), dp(48), dp(24), dp(32));

        View stripe = new View(this);
        stripe.setBackgroundColor(C_ACCENT);
        LinearLayout.LayoutParams stripeP =
                new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, dp(4));
        stripeP.bottomMargin = dp(32);

        TextView titleBig = new TextView(this);
        titleBig.setText("SONIC THE HEDGEHOG");
        titleBig.setTextColor(C_TEXT_PRI);
        titleBig.setTextSize(26);
        titleBig.setTypeface(null, Typeface.BOLD);
        titleBig.setGravity(Gravity.CENTER);
        titleBig.setLetterSpacing(0.08f);

        TextView yearText = new TextView(this);
        yearText.setText("2006");
        yearText.setTextColor(C_ACCENT);
        yearText.setTextSize(46);
        yearText.setTypeface(null, Typeface.BOLD);
        yearText.setGravity(Gravity.CENTER);
        yearText.setLetterSpacing(0.05f);

        TextView subtitleText = new TextView(this);
        subtitleText.setText("MARATHON RECOMPILED");
        subtitleText.setTextColor(C_TEXT_SEC);
        subtitleText.setTextSize(13);
        subtitleText.setGravity(Gravity.CENTER);
        subtitleText.setLetterSpacing(0.15f);
        LinearLayout.LayoutParams subP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        subP.topMargin = dp(2);

        TextView pill = new TextView(this);
        pill.setText("  Android  ");
        pill.setTextColor(C_ACCENT);
        pill.setTextSize(11);
        pill.setTypeface(null, Typeface.BOLD);
        pill.setLetterSpacing(0.12f);
        pill.setBackgroundColor(0x200091EA);
        pill.setPadding(dp(10), dp(4), dp(10), dp(4));
        LinearLayout.LayoutParams pillP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        pillP.topMargin = dp(10);

        hero.addView(stripe, stripeP);
        hero.addView(titleBig);
        hero.addView(yearText);
        hero.addView(subtitleText, subP);
        hero.addView(pill, pillP);
        page.addView(hero, new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        // ── status card ───────────────────────────────────────────────────────
        LinearLayout statusCard = new LinearLayout(this);
        statusCard.setOrientation(LinearLayout.VERTICAL);
        statusCard.setGravity(Gravity.CENTER_HORIZONTAL);
        statusCard.setBackgroundColor(C_CARD);
        statusCard.setPadding(dp(24), dp(16), dp(24), dp(16));

        statusText = new TextView(this);
        statusText.setTextSize(14);
        statusText.setGravity(Gravity.CENTER);
        statusCard.addView(statusText);

        progressBar = new ProgressBar(this);
        progressBar.setIndeterminate(true);
        progressBar.setVisibility(View.GONE);
        LinearLayout.LayoutParams pbP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        pbP.topMargin = dp(12);
        pbP.gravity = Gravity.CENTER_HORIZONTAL;
        statusCard.addView(progressBar, pbP);

        LinearLayout.LayoutParams statusCardP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        statusCardP.topMargin = dp(1);
        page.addView(statusCard, statusCardP);

        // ── buttons ───────────────────────────────────────────────────────────
        LinearLayout btnArea = new LinearLayout(this);
        btnArea.setOrientation(LinearLayout.VERTICAL);
        btnArea.setBackgroundColor(C_CARD);
        btnArea.setPadding(dp(20), dp(8), dp(20), dp(20));

        playButton = new Button(this);
        playButton.setText("▶  PLAY");
        playButton.setTextSize(16);
        playButton.setTypeface(null, Typeface.BOLD);
        playButton.setLetterSpacing(0.08f);
        playButton.setEnabled(false);
        playButton.setOnClickListener(v -> launchGame());
        stylePlayButton(false);

        LinearLayout.LayoutParams playP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(54));
        playP.topMargin = dp(8);
        btnArea.addView(playButton, playP);

        selectButton = new Button(this);
        selectButton.setText("Select Game Files");
        selectButton.setTextSize(14);
        selectButton.setOnClickListener(v -> chooseGameFolder());
        styleSecondaryButton(selectButton);

        LinearLayout.LayoutParams selectP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(48));
        selectP.topMargin = dp(10);
        btnArea.addView(selectButton, selectP);

        Button settingsButton = new Button(this);
        settingsButton.setText("⚙  Settings");
        settingsButton.setTextSize(14);
        settingsButton.setTextColor(C_TEXT_SEC);
        settingsButton.setBackgroundColor(0x00000000);
        settingsButton.setOnClickListener(v ->
                startActivity(new Intent(this, SettingsActivity.class)));

        LinearLayout.LayoutParams settingsP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(44));
        settingsP.topMargin = dp(4);
        btnArea.addView(settingsButton, settingsP);

        LinearLayout.LayoutParams btnAreaP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        btnAreaP.topMargin = dp(1);
        page.addView(btnArea, btnAreaP);

        page.addView(buildDriverCard(), new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        // ── footer ────────────────────────────────────────────────────────────
        TextView footer = new TextView(this);
        footer.setText("Android debug build: Mali guards enabled\n"
                + "Requires a legally-owned Xbox 360 game dump");
        footer.setTextSize(11);
        footer.setTextColor(C_TEXT_HINT);
        footer.setGravity(Gravity.CENTER);
        LinearLayout.LayoutParams footerP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        footerP.topMargin = dp(20);
        footerP.bottomMargin = dp(16);
        footerP.leftMargin = dp(24);
        footerP.rightMargin = dp(24);
        page.addView(footer, footerP);

        return scroll;
    }

    private void stylePlayButton(boolean enabled) {
        if (enabled) {
            playButton.setBackgroundColor(C_BTN_PLAY);
            playButton.setTextColor(Color.BLACK);
        } else {
            playButton.setBackgroundColor(0xFF1A2640);
            playButton.setTextColor(0xFF4A6080);
        }
    }

    private void styleSecondaryButton(Button btn) {
        btn.setBackgroundColor(C_BTN_SEC);
        btn.setTextColor(C_TEXT_PRI);
    }

    // ── GPU driver (Turnip) ─────────────────────────────────────────────────

    /**
     * Driver management card. The native side
     * (os/android/vulkan_driver_android.cpp) loads whatever driver_name.txt
     * selects through libadrenotools; here we only manage the files.
     * Requires an Adreno GPU (A6xx+) — Turnip does not work on Mali/PowerVR.
     */
    private View buildDriverCard() {
        LinearLayout card = new LinearLayout(this);
        card.setOrientation(LinearLayout.VERTICAL);
        card.setBackgroundColor(C_CARD);
        card.setPadding(dp(20), dp(14), dp(20), dp(18));
        LinearLayout.LayoutParams cardP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        cardP.topMargin = dp(1);
        card.setLayoutParams(cardP);

        TextView title = new TextView(this);
        title.setText("GPU DRIVER (VULKAN / TURNIP)");
        title.setTextColor(C_ACCENT);
        title.setTextSize(12);
        title.setTypeface(null, Typeface.BOLD);
        title.setLetterSpacing(0.12f);
        card.addView(title);

        driverStatusText = new TextView(this);
        driverStatusText.setTextSize(13);
        driverStatusText.setTextColor(C_TEXT_SEC);
        LinearLayout.LayoutParams statusP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        statusP.topMargin = dp(8);
        card.addView(driverStatusText, statusP);

        driverInstallButton = new Button(this);
        driverInstallButton.setText("Install Turnip Driver (.zip)");
        driverInstallButton.setTextSize(13);
        styleSecondaryButton(driverInstallButton);
        driverInstallButton.setOnClickListener(v -> chooseDriverZip());
        LinearLayout.LayoutParams installP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(42));
        installP.topMargin = dp(10);
        card.addView(driverInstallButton, installP);

        driverCompatButton = new Button(this);
        driverCompatButton.setTextSize(12);
        driverCompatButton.setBackgroundColor(0x00000000);
        driverCompatButton.setTextColor(C_TEXT_SEC);
        driverCompatButton.setOnClickListener(v -> toggleCompatMode());
        LinearLayout.LayoutParams compatP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(38));
        card.addView(driverCompatButton, compatP);

        driverReEnableButton = new Button(this);
        driverReEnableButton.setText("Re-enable Turnip Driver");
        driverReEnableButton.setTextSize(12);
        driverReEnableButton.setBackgroundColor(0x00000000);
        driverReEnableButton.setTextColor(C_ACCENT);
        driverReEnableButton.setOnClickListener(v -> reEnableDriver());
        LinearLayout.LayoutParams reEnableP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(38));
        card.addView(driverReEnableButton, reEnableP);

        driverSystemButton = new Button(this);
        driverSystemButton.setText("Use System Driver");
        driverSystemButton.setTextSize(12);
        driverSystemButton.setBackgroundColor(0x00000000);
        driverSystemButton.setTextColor(C_TEXT_SEC);
        driverSystemButton.setOnClickListener(v -> confirmUseSystemDriver());
        LinearLayout.LayoutParams systemP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, dp(38));
        card.addView(driverSystemButton, systemP);

        TextView hint = new TextView(this);
        hint.setText(
            "Install an open-source Mesa Turnip driver package (AdrenoTools-style zip, " +
            "e.g. from the AdrenoToolsDrivers releases) to replace the vendor driver. " +
            "Adreno GPUs only. If booting fails, the game automatically falls back to " +
            "the system driver and the custom one is disabled here.");
        hint.setTextSize(11);
        hint.setTextColor(C_TEXT_HINT);
        LinearLayout.LayoutParams hintP = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        hintP.topMargin = dp(8);
        card.addView(hint, hintP);

        return card;
    }

    private void refreshDriverCard() {
        if (driverStatusText == null) return;

        DriverManager.Status status = DriverManager.getStatus(this);
        switch (status.state) {
            case CUSTOM:
                driverStatusText.setText("✔  Custom driver active:\n" + status.driverName);
                driverStatusText.setTextColor(0xFF4CAF50);
                break;
            case DISABLED:
                driverStatusText.setText("⚠  " + status.driverName + "\ncrashed during boot and was auto-disabled — the system driver is in use.");
                driverStatusText.setTextColor(0xFFFFB74D);
                break;
            case SYSTEM:
            default:
                driverStatusText.setText("System driver (default)");
                driverStatusText.setTextColor(C_TEXT_SEC);
                break;
        }

        driverCompatButton.setVisibility(
                status.state == DriverManager.State.CUSTOM ? View.VISIBLE : View.GONE);
        driverCompatButton.setText(status.compatMode
                ? "Compatibility Mode (Sysmem): ON  — takes effect on next launch"
                : "Compatibility Mode (Sysmem): OFF (fixes glitches on some Adreno 7xx)");

        driverReEnableButton.setVisibility(
                status.state == DriverManager.State.DISABLED ? View.VISIBLE : View.GONE);
        driverSystemButton.setVisibility(
                status.state == DriverManager.State.CUSTOM ? View.VISIBLE : View.GONE);
    }

    private void chooseDriverZip() {
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("application/zip");
        // Some file managers ignore the zip MIME type or report driver
        // packages as octet-stream; offer those alternatives too.
        intent.putExtra(Intent.EXTRA_MIME_TYPES,
                new String[] {"application/zip", "application/x-zip-compressed", "application/octet-stream"});
        startActivityForResult(intent, REQUEST_DRIVER_ZIP);
    }

    private void installDriverZip(Uri uri) {
        installingDriver = true;
        driverInstallButton.setEnabled(false);
        progressBar.setVisibility(View.VISIBLE);
        statusText.setText("Installing Turnip driver\u2026");
        statusText.setTextColor(C_TEXT_SEC);

        new Thread(() -> {
            String error = null;
            String selected = null;
            try {
                selected = DriverManager.installDriverZip(this, uri);
            } catch (IOException e) {
                error = e.getMessage();
                if (error == null) error = "Could not install the driver package.";
            }

            final String finalError = error;
            final String finalSelected = selected;
            runOnUiThread(() -> {
                installingDriver = false;
                driverInstallButton.setEnabled(true);
                progressBar.setVisibility(View.GONE);
                if (finalError != null) {
                    Toast.makeText(this, finalError, Toast.LENGTH_LONG).show();
                } else {
                    Toast.makeText(this,
                            "Driver \"" + finalSelected + "\" installed — takes effect on the next launch.",
                            Toast.LENGTH_LONG).show();
                }
                refreshStatus();
                refreshDriverCard();
            });
        }).start();
    }

    private void toggleCompatMode() {
        DriverManager.Status status = DriverManager.getStatus(this);
        try {
            DriverManager.setCompatMode(this, !status.compatMode);
        } catch (IOException e) {
            Toast.makeText(this, "Could not update compatibility mode.", Toast.LENGTH_SHORT).show();
        }
        refreshDriverCard();
    }

    private void reEnableDriver() {
        DriverManager.reEnableDisabledDriver(this);
        Toast.makeText(this, "Turnip driver re-enabled — takes effect on the next launch.",
                Toast.LENGTH_SHORT).show();
        refreshDriverCard();
    }

    private void confirmUseSystemDriver() {
        new AlertDialog.Builder(this)
            .setTitle("Use System Driver")
            .setMessage("Stop using the custom Turnip driver and boot the game with the "
                    + "vendor Vulkan driver instead?\n\nInstalled driver files are kept; "
                    + "you can re-install a package at any time.")
            .setPositiveButton("Use System Driver", (d, w) -> {
                DriverManager.useSystemDriver(this);
                refreshDriverCard();
            })
            .setNegativeButton("Cancel", null)
            .show();
    }

    // ── game file management ──────────────────────────────────────────────────

    private void refreshStatus() {
        boolean ready = AppStorage.hasGameFiles(this);
        if (ready) {
            statusText.setText("✔  Game files ready");
            statusText.setTextColor(0xFF4CAF50);
        } else {
            statusText.setText("⚠  Game files not found\n\nSelect your Xbox 360 game dump folder below.\nFiles will be copied to:\n"
                    + AppStorage.gameDir(this).getAbsolutePath());
            statusText.setTextColor(C_TEXT_SEC);
        }
        playButton.setEnabled(ready);
        stylePlayButton(ready);
    }

    private void chooseGameFolder() {
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT_TREE);
        intent.putExtra(DocumentsContract.EXTRA_PROMPT,
                "Choose the folder containing your Xbox 360 game dump");
        startActivityForResult(intent, REQUEST_GAME_TREE);
    }

    private void launchGame() {
        startActivity(new Intent(this, GameActivity.class));
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_GAME_TREE && resultCode == Activity.RESULT_OK && data != null) {
            Uri treeUri = data.getData();
            if (treeUri != null) {
                getContentResolver().takePersistableUriPermission(treeUri,
                        Intent.FLAG_GRANT_READ_URI_PERMISSION);
                copyGameFiles(treeUri);
            }
        } else if (requestCode == REQUEST_DRIVER_ZIP && resultCode == Activity.RESULT_OK && data != null) {
            Uri zipUri = data.getData();
            if (zipUri != null) {
                installDriverZip(zipUri);
            }
        }
    }

    private void copyGameFiles(Uri treeUri) {
        DocumentFile tree = DocumentFile.fromTreeUri(this, treeUri);
        if (tree == null) {
            Toast.makeText(this, "Could not open the selected folder.", Toast.LENGTH_LONG).show();
            return;
        }

        copying = true;
        selectButton.setEnabled(false);
        playButton.setEnabled(false);
        progressBar.setVisibility(View.VISIBLE);
        statusText.setText("Copying game files\u2026");
        statusText.setTextColor(C_TEXT_SEC);

        File destRoot = AppStorage.gameDir(this);

        new Thread(() -> {
            final String[] errorMsg = {null};
            try {
                destRoot.mkdirs();
                copyTreeRecursive(tree, destRoot);
            } catch (IOException e) {
                errorMsg[0] = "Could not copy the selected files.";
            }

            if (errorMsg[0] == null && !AppStorage.hasGameFiles(this)) {
                errorMsg[0] = "Copy finished, but default.xex was not found in the selected folder.";
            }

            final String finalError = errorMsg[0];
            runOnUiThread(() -> {
                copying = false;
                selectButton.setEnabled(true);
                progressBar.setVisibility(View.GONE);
                if (finalError != null) {
                    Toast.makeText(this, finalError, Toast.LENGTH_LONG).show();
                }
                refreshStatus();
            });
        }).start();
    }

    private void copyTreeRecursive(DocumentFile source, File destDir) throws IOException {
        for (DocumentFile child : source.listFiles()) {
            String name = child.getName();
            if (name == null) continue;
            if (child.isDirectory()) {
                new File(destDir, name).mkdirs();
                copyTreeRecursive(child, new File(destDir, name));
            } else {
                copyFile(child.getUri(), new File(destDir, name));
            }
        }
    }

    private void copyFile(Uri sourceUri, File dest) throws IOException {
        try (InputStream in  = getContentResolver().openInputStream(sourceUri);
             OutputStream out = new FileOutputStream(dest)) {
            if (in == null) throw new IOException("Could not open " + sourceUri);
            byte[] buf = new byte[1 << 16];
            int n;
            while ((n = in.read(buf)) != -1) out.write(buf, 0, n);
        }
    }

    // ── GPU compatibility ─────────────────────────────────────────────────────

    private static String queryGlRenderer() {
        EGLDisplay display = EGL14.eglGetDisplay(EGL14.EGL_DEFAULT_DISPLAY);
        if (display == EGL14.EGL_NO_DISPLAY) return "";
        int[] ver = new int[2];
        if (!EGL14.eglInitialize(display, ver, 0, ver, 1)) return "";
        try {
            int[] cfgA = { EGL14.EGL_RENDERABLE_TYPE, EGL14.EGL_OPENGL_ES2_BIT, EGL14.EGL_NONE };
            EGLConfig[] cfgs = new EGLConfig[1];
            int[] num = new int[1];
            if (!EGL14.eglChooseConfig(display, cfgA, 0, cfgs, 0, 1, num, 0) || num[0] == 0)
                return "";
            int[] ctxA = { EGL14.EGL_CONTEXT_CLIENT_VERSION, 2, EGL14.EGL_NONE };
            EGLContext ctx = EGL14.eglCreateContext(display, cfgs[0], EGL14.EGL_NO_CONTEXT, ctxA, 0);
            if (ctx == EGL14.EGL_NO_CONTEXT) return "";
            int[] pbA = { EGL14.EGL_WIDTH, 1, EGL14.EGL_HEIGHT, 1, EGL14.EGL_NONE };
            EGLSurface surf = EGL14.eglCreatePbufferSurface(display, cfgs[0], pbA, 0);
            if (surf == EGL14.EGL_NO_SURFACE) { EGL14.eglDestroyContext(display, ctx); return ""; }
            EGL14.eglMakeCurrent(display, surf, surf, ctx);
            String renderer = GLES20.glGetString(GLES20.GL_RENDERER);
            EGL14.eglMakeCurrent(display, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_CONTEXT);
            EGL14.eglDestroySurface(display, surf);
            EGL14.eglDestroyContext(display, ctx);
            return renderer != null ? renderer : "";
        } finally {
            EGL14.eglTerminate(display);
        }
    }

    /**
     * Applies conservative settings for Mali / unknown GPUs by patching
     * config.toml directly — no SharedPreferences involved.
     */
    private void applyCompatibleSettings() {
        LinkedHashMap<String, String> changes = new LinkedHashMap<>();
        changes.put(GameSettings.K_ANTI_ALIASING,    GameSettings.q("Off"));
        changes.put(GameSettings.K_SHADOW_RES,        GameSettings.q("1024"));
        changes.put(GameSettings.K_RESOLUTION_SCALE,  GameSettings.fmtFloat(0.75f));
        // Ensure the SDL video driver is on Auto — "System" is equivalent on
        // Android but can confuse users into thinking it changes something.
        changes.put(GameSettings.K_SDL_VIDEO_DRIVER,  GameSettings.q("Auto"));
        try {
            GameSettings.patchConfig(AppStorage.configFile(this), changes);
            Toast.makeText(this, "Performance settings applied.", Toast.LENGTH_SHORT).show();
        } catch (IOException e) {
            Toast.makeText(this, "Could not apply settings.", Toast.LENGTH_SHORT).show();
        }
    }

    private void checkGpuCompatibilityAsync() {
        SharedPreferences launcherPrefs = getSharedPreferences(LAUNCHER_PREFS, MODE_PRIVATE);
        if (launcherPrefs.getBoolean(PREF_GPU_WARNED, false)) return;

        new Thread(() -> {
            String renderer = queryGlRenderer();
            boolean isMali = renderer.toLowerCase().contains("mali");
            if (!isMali) return;

            runOnUiThread(() -> {
                launcherPrefs.edit().putBoolean(PREF_GPU_WARNED, true).apply();

                new AlertDialog.Builder(LauncherActivity.this)
                    .setTitle("⚠  Mali GPU Detected")
                    .setMessage(
                        "Your device uses a Mali GPU (" + renderer + ").\n\n" +
                        "Mali GPUs have known Vulkan driver issues with this " +
                        "engine.  In particular:\n" +
                        "• Shadow Resolution above 1024 causes a hard driver crash\n" +
                        "• Any MSAA level causes a hard driver crash\n\n" +
                        "Tap \"Apply Safe Settings\" to set Anti-Aliasing Off, " +
                        "Shadow Resolution 1024, Resolution Scale 0.75×, and " +
                        "Graphics Driver Auto — the configuration most likely " +
                        "to run on your device.\n\n" +
                        "A Qualcomm Adreno GPU gives full compatibility.")
                    .setPositiveButton("Apply Safe Settings", (d, w) ->
                            applyCompatibleSettings())
                    .setNegativeButton("Continue Anyway", null)
                    .setCancelable(true)
                    .show();
            });
        }).start();
    }

    private int dp(int value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }
}
