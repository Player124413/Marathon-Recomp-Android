#pragma once

#include <xbox.h>

namespace hid
{
    // Merges the active Android touch controls into an Xbox 360 gamepad state.
    // Returns true when at least one virtual control is active.
    bool ApplyVirtualTouchState(XAMINPUT_GAMEPAD& state);

    // Draws the touch controls using the existing ImGui background draw list.
    void DrawVirtualTouchOverlay();
}