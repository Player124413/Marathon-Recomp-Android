# NDK libc++: std::string is not an implicit operator/ LHS for filesystem paths

**Date:** 2026-07-31 · CI build 30638166562 (PR #1) failed with:

```
error: invalid operands to binary expression ('const std::string' and 'const char *const')
    ReadTextFile(turnipDir / DRIVER_NAME_FILE, driverName);
```

Under the Android NDK's libc++, `std::filesystem::operator/` requires at least
the LEFT operand to be a `std::filesystem::path` — it does not apply an
implicit string→path conversion there (MSVC/libstdc++ are more permissive,
and this pattern compiles in URA's NDK build only because URA kept
`std::filesystem::path turnipDir` throughout and used `+` on strings instead).

**Rule for this repo:** when a constant (turnip dir etc.) is used for path
joins, keep it as `std::filesystem::path`; use `std::string` only where plain
string concatenation (`dir + name`) is genuinely wanted, e.g. adrenotools'
`customDriverDir + customDriverName`.

**Rule learned for CI debugging here:** artifact/log blob hosts
(`*.blob.core.windows.net`, `results-receiver...`, `raw/objects.githubusercontent.com`)
are unreachable from the dev sandbox; `gh run download` fails with EOF. The
working telemetry channel is `::error::` workflow annotations, which are
returned by the check-runs annotations API — `build-android.sh`/`build-apk.sh`
now always trap-exit-print the log tail this way (see build-android.sh's
`_ci_fail_trap`).
