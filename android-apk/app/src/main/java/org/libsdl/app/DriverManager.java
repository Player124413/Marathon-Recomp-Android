package org.libsdl.app;

import android.content.Context;

import org.json.JSONObject;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

import android.net.Uri;

/**
 * Custom Vulkan driver (Mesa Turnip) management for the launcher.
 *
 * Mirrors MarathonRecomp/os/android/vulkan_driver_android.cpp:
 *   - The user installs an AdrenoTools-style driver package zip
 *     (meta.json with "libraryName" plus driver binaries — the layout
 *     K11MCH1's AdrenoToolsDrivers and Turnip releases use — or simply a zip
 *     holding exactly one .so, e.g. a bare libvulkan_freedreno.so).
 *   - Every regular file is extracted flat (basename only, so hostile entry
 *     paths cannot escape) into <internalFiles>/turnip/.
 *   - turnip/driver_name.txt selects the entry library; the native side loads
 *     it through libadrenotools at the next launch. If the driver crashes
 *     during Vulkan startup, the native boot recovery renames driver_name.txt
 *     to driver_name.disabled.txt and boots with the system driver, so the app
 *     can never be wedged by a bad driver.
 */
final class DriverManager {
    private DriverManager() {}

    // Keep in sync with os/android/vulkan_driver_android.cpp.
    private static final String TURNIP_DIR_NAME       = "turnip";
    private static final String DRIVER_NAME_FILE      = "driver_name.txt";
    private static final String DRIVER_DISABLED_FILE  = "driver_name.disabled.txt";
    private static final String VULKAN_PENDING_FILE   = "vulkan_custom_pending";
    private static final String TU_DEBUG_FILE         = "tu_debug.txt";
    private static final String TU_DEBUG_SYSMEM       = "sysmem";

    // Drivers are ~40-60 MB; rejecting anything absurd protects against
    // truncated/adversarial archives before we allocate buffers.
    private static final long MAX_ENTRY_BYTES = 512L << 20;
    private static final long MAX_TOTAL_BYTES = 1024L << 20;

    enum State {
        SYSTEM,      // no custom driver installed -> system Vulkan driver
        CUSTOM,      // driver_name.txt selects a driver
        DISABLED,    // boot recovery disabled the driver after a crash
    }

    static final class Status {
        State state = State.SYSTEM;
        String driverName = "";   // selected / disabled .so base name
        boolean compatMode;       // tu_debug.txt == "sysmem"
    }

    static File driverDir(Context context) {
        return new File(context.getFilesDir(), TURNIP_DIR_NAME);
    }

    static File selectedFile(Context context)  { return new File(driverDir(context), DRIVER_NAME_FILE); }
    static File disabledFile(Context context)  { return new File(driverDir(context), DRIVER_DISABLED_FILE); }
    static File pendingFile(Context context)   { return new File(driverDir(context), VULKAN_PENDING_FILE); }
    static File tuDebugFile(Context context)   { return new File(driverDir(context), TU_DEBUG_FILE); }

    static void ensureFilesystem(Context context) {
        File dir = driverDir(context);
        if (!dir.isDirectory()) dir.mkdirs();
    }

    static String readSmallText(File file) {
        if (!file.isFile()) return "";
        try (FileInputStream in = new FileInputStream(file)) {
            byte[] buf = new byte[256];
            int n = in.read(buf);
            if (n <= 0) return "";
            return new String(buf, 0, n).trim();
        } catch (IOException e) {
            return "";
        }
    }

    static Status getStatus(Context context) {
        Status status = new Status();
        File selected = selectedFile(context);
        File disabled = disabledFile(context);
        if (selected.isFile()) {
            String name = readSmallText(selected);
            if (!name.isEmpty()) {
                status.state = State.CUSTOM;
                status.driverName = name;
            }
        } else if (disabled.isFile()) {
            String name = readSmallText(disabled);
            status.state = State.DISABLED;
            status.driverName = name.isEmpty() ? "(unknown driver)" : name;
        }
        status.compatMode = TU_DEBUG_SYSMEM.equals(readSmallText(tuDebugFile(context)));
        return status;
    }

    // ── zip installation ─────────────────────────────────────────────────────

    /**
     * Installs a driver package from a SAF-picked zip. Runs synchronously;
     * call from a background thread (a 60 MB archive takes a moment).
     *
     * @return the selected driver .so name on success
     * @throws IOException with a user-presentable message on failure
     */
    static String installDriverZip(Context context, Uri uri) throws IOException {
        File dir = driverDir(context);
        if (!dir.isDirectory() && !dir.mkdirs())
            throw new IOException("Could not create the driver folder.");

        // Single random-access pass requires a real file: copy the SAF
        // document into a temp file inside the app storage first.
        File tempZip = File.createTempFile("driver_import", ".zip", context.getCacheDir());
        try {
            copyUriToFile(context, uri, tempZip);

            String libraryName;
            List<String> entriesToExtract = new ArrayList<>();

            try (ZipFile zip = new ZipFile(tempZip)) {
                Enumeration<? extends ZipEntry> entries = zip.entries();
                int soCount = 0;
                String onlySoName = "";
                String metaJson = null;
                long totalBytes = 0;

                while (entries.hasMoreElements()) {
                    ZipEntry entry = entries.nextElement();
                    if (entry.isDirectory()) continue;

                    String baseName = new File(entry.getName()).getName();
                    if (baseName.isEmpty()) continue;

                    long size = entry.getSize(); // -1 when unknown
                    if (size > MAX_ENTRY_BYTES)
                        throw new IOException("Driver package entry \"" + baseName + "\" is too large.");
                    if (size > 0) totalBytes += size;

                    if (baseName.endsWith(".so")) {
                        soCount++;
                        onlySoName = baseName;
                    } else if (baseName.equals("meta.json")) {
                        byte[] meta = readEntry(zip, entry, 1 << 20);
                        metaJson = new String(meta, 0, meta.length, "UTF-8");
                    }

                    entriesToExtract.add(baseName);
                }

                if (totalBytes > MAX_TOTAL_BYTES)
                    throw new IOException("Driver package is too large (" + (totalBytes >> 20) + " MiB).");

                if (entriesToExtract.isEmpty())
                    throw new IOException("The selected zip is empty or contains no usable files.");

                libraryName = null;
                if (metaJson != null) {
                    try {
                        String name = new JSONObject(metaJson).optString("libraryName", "").trim();
                        if (!name.isEmpty()) libraryName = new File(name).getName();
                    } catch (Exception ignored) {}
                }
                if (libraryName == null && soCount == 1) libraryName = onlySoName;

                if (libraryName == null)
                    throw new IOException(
                        "Could not determine the driver library: the zip has no meta.json " +
                        "with a \"libraryName\" field and does not contain exactly one .so file.");

                if (!entriesToExtract.contains(libraryName))
                    throw new IOException(
                        "meta.json selects \"" + libraryName + "\" but the zip does not contain it.");

                // Extract flat (basename only): dependent libraries of an
                // AdrenoTools package live next to the entry library, and the
                // adrenotools linker namespace resolves them from this dir.
                for (String baseName : entriesToExtract) {
                    try (InputStream in = zip.getInputStream(zip.getEntry(findEntryName(zip, baseName)))) {
                        writeAtomic(new File(dir, baseName), in);
                    }
                }
            }

            // Select the freshly installed driver and clear the boot-recovery
            // state: a new install resets the retry cycle by definition.
            writeAtomicText(selectedFile(context), libraryName + "\n");
            disabledFile(context).delete();
            pendingFile(context).delete();

            return libraryName;
        } finally {
            tempZip.delete();
        }
    }

    private static String findEntryName(ZipFile zip, String baseName) throws IOException {
        Enumeration<? extends ZipEntry> entries = zip.entries();
        while (entries.hasMoreElements()) {
            ZipEntry entry = entries.nextElement();
            if (!entry.isDirectory() && new File(entry.getName()).getName().equals(baseName))
                return entry.getName();
        }

        throw new IOException("Entry disappeared from the zip: " + baseName);
    }

    private static byte[] readEntry(ZipFile zip, ZipEntry entry, int maxBytes) throws IOException {
        try (InputStream in = new BufferedInputStream(zip.getInputStream(entry))) {
            java.io.ByteArrayOutputStream out = new java.io.ByteArrayOutputStream();
            byte[] buf = new byte[1 << 13];
            int n;
            while ((n = in.read(buf)) != -1) {
                out.write(buf, 0, n);
                if (out.size() > maxBytes) throw new IOException("Entry is too large.");
            }
            return out.toByteArray();
        }
    }

    private static void copyUriToFile(Context context, Uri uri, File dest) throws IOException {
        try (InputStream in = context.getContentResolver().openInputStream(uri)) {
            if (in == null) throw new IOException("Could not open the selected file.");
            writeAtomic(dest, in);
        }
    }

    /** Streams {@code in} to {@code dest} via a temp file + rename (never half-written). */
    private static void writeAtomic(File dest, InputStream in) throws IOException {
        File temp = new File(dest.getParentFile(), dest.getName() + ".tmp");
        try (FileOutputStream out = new FileOutputStream(temp)) {
            byte[] buf = new byte[1 << 16];
            int n;
            while ((n = in.read(buf)) != -1) out.write(buf, 0, n);
            out.getFD().sync();
        }
        if (dest.exists() && !dest.delete()) {
            temp.delete();
            throw new IOException("Could not replace " + dest.getName());
        }
        if (!temp.renameTo(dest)) {
            temp.delete();
            throw new IOException("Could not move " + temp.getName() + " into place.");
        }
    }

    private static void writeAtomicText(File dest, String contents) throws IOException {
        File temp = new File(dest.getParentFile(), dest.getName() + ".tmp");
        try (FileOutputStream out = new FileOutputStream(temp)) {
            out.write(contents.getBytes("UTF-8"));
            out.getFD().sync();
        }
        if (dest.exists()) dest.delete();
        if (!temp.renameTo(dest)) temp.delete();
    }

    // ── selection management ─────────────────────────────────────────────────

    /** Resets to the system Vulkan driver. Driver files are kept for re-installs. */
    static void useSystemDriver(Context context) {
        selectedFile(context).delete();
        disabledFile(context).delete();
        // A system boot is safe: dead pending markers are cleaned natively, but
        // removing them here too keeps the state trivially consistent.
        pendingFile(context).delete();
    }

    /** Re-enables a driver that boot recovery disabled, untouched contents. */
    static void reEnableDisabledDriver(Context context) {
        File disabled = disabledFile(context);
        if (!disabled.isFile()) return;
        pendingFile(context).delete();
        disabled.renameTo(selectedFile(context));
    }

    /** Compatibility Mode: TU_DEBUG=sysmem for the next custom-driver boot. */
    static void setCompatMode(Context context, boolean enabled) throws IOException {
        if (enabled) {
            writeAtomicText(tuDebugFile(context), TU_DEBUG_SYSMEM + "\n");
        } else {
            tuDebugFile(context).delete();
        }
    }
}
