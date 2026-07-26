#include <os/user.h>

bool os::user::IsDarkTheme()
{
    // Querying the app's UI-mode/night-mode config requires a JNI call into
    // the Android activity (Configuration.uiMode), which isn't wired up yet.
    // Default to light theme like the other non-Windows platforms did before
    // this was implemented for them.
    return false;
}
