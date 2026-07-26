#include <os/media.h>

bool os::media::IsExternalMediaPlaying()
{
    // MPRIS/D-Bus (used on Linux) has no Android equivalent, and there's no
    // system-wide "what else is playing audio" query available to an NDK app.
    // Not supported on Android.
    return false;
}
