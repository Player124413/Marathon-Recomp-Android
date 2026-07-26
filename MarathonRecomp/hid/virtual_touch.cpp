#include <stdafx.h>

#include "virtual_touch.h"

#include <SDL.h>
#include <imgui.h>
#include <gpu/video.h>
#include <hid/hid.h>
#include <sdl_listener.h>
#include <ui/game_window.h>

#include <array>
#include <cmath>
#include <mutex>

namespace
{
constexpr size_t MAX_TOUCHES = 16;
constexpr float STICK_CENTER_X = 0.20f;
constexpr float STICK_CENTER_Y = 0.78f;
constexpr float STICK_RADIUS = 0.14f;
constexpr float STICK_DEADZONE = 0.12f;

struct TouchPoint
{
    SDL_FingerID id = 0;
    float x = 0.0f;
    float y = 0.0f;
    bool used = false;
};

std::array<TouchPoint, MAX_TOUCHES> g_touches;
std::mutex g_touchMutex;

bool IsInStickArea(float x, float y)
{
    return x < 0.48f && y > 0.58f;
}

void ResetTouches()
{
    std::lock_guard lock(g_touchMutex);
    for (auto& touch : g_touches)
        touch = {};
}

TouchPoint* FindTouch(SDL_FingerID id)
{
    for (auto& touch : g_touches)
    {
        if (touch.used && touch.id == id)
            return &touch;
    }
    return nullptr;
}

TouchPoint* FindFreeTouch()
{
    for (auto& touch : g_touches)
    {
        if (!touch.used)
            return &touch;
    }
    return nullptr;
}

void UpdateTouch(SDL_FingerID id, float x, float y)
{
    std::lock_guard lock(g_touchMutex);

    auto* touch = FindTouch(id);
    if (!touch)
        touch = FindFreeTouch();

    if (touch)
    {
        touch->id = id;
        touch->x = std::clamp(x, 0.0f, 1.0f);
        touch->y = std::clamp(y, 0.0f, 1.0f);
        touch->used = true;
    }
}

void RemoveTouch(SDL_FingerID id)
{
    std::lock_guard lock(g_touchMutex);
    if (auto* touch = FindTouch(id))
        *touch = {};
}

int16_t StickAxis(float value, float center)
{
    const float delta = (value - center) / STICK_RADIUS;
    const float magnitude = std::abs(delta);
    if (magnitude <= STICK_DEADZONE)
        return 0;

    const float normalized = std::clamp(
        std::copysign((magnitude - STICK_DEADZONE) / (1.0f - STICK_DEADZONE), delta),
        -1.0f, 1.0f);
    return static_cast<int16_t>(normalized * 32767.0f);
}

bool IsPressed(float x, float y, float cx, float cy, float radius)
{
    const float dx = x - cx;
    const float dy = y - cy;
    return dx * dx + dy * dy <= radius * radius;
}

class VirtualTouchListener final : public SDLEventListener
{
public:
    bool OnSDLEvent(SDL_Event* event) override
    {
#ifdef __ANDROID__
        switch (event->type)
        {
            case SDL_FINGERDOWN:
            case SDL_FINGERMOTION:
                UpdateTouch(event->tfinger.fingerId, event->tfinger.x, event->tfinger.y);
                hid::g_inputDevice = hid::EInputDevice::Xbox;
                return true;

            case SDL_FINGERUP:
                RemoveTouch(event->tfinger.fingerId);
                hid::g_inputDevice = hid::EInputDevice::Xbox;
                return true;

            case SDL_WINDOWEVENT:
                if (event->window.event == SDL_WINDOWEVENT_FOCUS_LOST)
                    ResetTouches();
                break;
        }
#else
        (void)event;
#endif
        return false;
    }
};

VirtualTouchListener g_virtualTouchListener;
}

bool hid::ApplyVirtualTouchState(XAMINPUT_GAMEPAD& state)
{
#ifndef __ANDROID__
    (void)state;
    return false;
#else
    std::array<TouchPoint, MAX_TOUCHES> touches;
    {
        std::lock_guard lock(g_touchMutex);
        touches = g_touches;
    }

    bool active = false;
    for (const auto& touch : touches)
    {
        if (!touch.used)
            continue;

        active = true;

        if (IsInStickArea(touch.x, touch.y))
        {
            state.sThumbLX = StickAxis(touch.x, STICK_CENTER_X);
            state.sThumbLY = static_cast<int16_t>(-StickAxis(touch.y, STICK_CENTER_Y));
            continue;
        }

        // Xbox layout: Y on top, X on left, B on right, A on bottom.
        if (IsPressed(touch.x, touch.y, 0.84f, 0.69f, 0.075f))
            state.wButtons |= XAMINPUT_GAMEPAD_Y;
        if (IsPressed(touch.x, touch.y, 0.76f, 0.78f, 0.075f))
            state.wButtons |= XAMINPUT_GAMEPAD_X;
        if (IsPressed(touch.x, touch.y, 0.92f, 0.78f, 0.075f))
            state.wButtons |= XAMINPUT_GAMEPAD_B;
        if (IsPressed(touch.x, touch.y, 0.84f, 0.87f, 0.075f))
            state.wButtons |= XAMINPUT_GAMEPAD_A;
    }

    return active;
#endif
}

void hid::DrawVirtualTouchOverlay()
{
#ifndef __ANDROID__
    return;
#else
    if (!ImGui::GetCurrentContext() || Video::s_viewportWidth == 0 || Video::s_viewportHeight == 0)
        return;

    const ImVec2 display = {
        static_cast<float>(Video::s_viewportWidth),
        static_cast<float>(Video::s_viewportHeight)
    };
    auto* draw = ImGui::GetBackgroundDrawList();

    const auto point = [&](float x, float y) {
        return ImVec2(display.x * x, display.y * y);
    };

    const ImVec2 stickCenter = point(STICK_CENTER_X, STICK_CENTER_Y);
    const float stickRadius = display.x * STICK_RADIUS;
    draw->AddCircleFilled(stickCenter, stickRadius, IM_COL32(20, 25, 35, 105), 48);
    draw->AddCircle(stickCenter, stickRadius, IM_COL32(230, 240, 255, 150), 48, 2.0f);
    draw->AddCircleFilled(stickCenter, stickRadius * 0.42f, IM_COL32(110, 125, 145, 145), 32);

    struct Button
    {
        float x;
        float y;
        const char* label;
    };
    constexpr Button buttons[] = {
        { 0.84f, 0.69f, "Y" },
        { 0.76f, 0.78f, "X" },
        { 0.92f, 0.78f, "B" },
        { 0.84f, 0.87f, "A" },
    };

    const float buttonRadius = display.x * 0.037f;
    for (const auto& button : buttons)
    {
        const ImVec2 center = point(button.x, button.y);
        draw->AddCircleFilled(center, buttonRadius, IM_COL32(20, 25, 35, 125), 32);
        draw->AddCircle(center, buttonRadius, IM_COL32(230, 240, 255, 165), 32, 2.0f);
        const ImVec2 textSize = ImGui::CalcTextSize(button.label);
        draw->AddText(
            { center.x - textSize.x * 0.5f, center.y - textSize.y * 0.5f },
            IM_COL32(255, 255, 255, 210),
            button.label);
    }
#endif
}