#include <os/version.h>

#include <cstdlib>
#include <sys/system_properties.h>

static uint32_t ParseLeadingUInt(const char* str)
{
    return str ? (uint32_t)(strtoul(str, nullptr, 10)) : 0;
}

os::version::OSVersion os::version::GetOSVersion()
{
    os::version::OSVersion version{};

    // "ro.build.version.release" is e.g. "14" or "7.1.1"; only the major
    // component is parsed since that's all OSVersion's callers have needed
    // on other platforms so far.
    char release[PROP_VALUE_MAX] = {};
    if (__system_property_get("ro.build.version.release", release) > 0)
        version.Major = ParseLeadingUInt(release);

    // "ro.build.version.sdk" is the API level (e.g. 34), which is more
    // reliable to parse than the release string and is stashed in Minor.
    char sdk[PROP_VALUE_MAX] = {};
    if (__system_property_get("ro.build.version.sdk", sdk) > 0)
        version.Minor = ParseLeadingUInt(sdk);

    return version;
}
