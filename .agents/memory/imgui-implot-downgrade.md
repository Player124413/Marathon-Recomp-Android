---
name: imgui/implot downgrade for Android build
description: Which versions work, what renames happened in v1.91.9b, and what files needed patching.
---
## Target versions
- imgui v1.91.9b (https://github.com/ocornut/imgui/archive/refs/tags/v1.91.9b.tar.gz)
- implot v0.17 (https://github.com/epezent/implot/archive/refs/tags/v0.17.tar.gz)

## API changes present even in v1.91.9b (vs what game code expected)
- ImFontAtlas::ConfigData -> Sources (renamed in 1.91.1); ImFont::ConfigData -> Sources, ConfigDataCount -> SourcesCount
- ImFont::CalcTextSizeA is NOT const; ImDrawList::AddText(ImFont*,...) takes non-const ImFont*
- ImTextureID changed from void* to ImU64 in v1.91.4 — fixed by adding `#define ImTextureID void*` to imconfig.h

## Files patched
- thirdparty/imgui/ and thirdparty/implot/ replaced wholesale with correct versions
- thirdparty/imgui/imconfig.h — added `#define ImTextureID void*` near top
- MarathonRecomp/gpu/imgui/imgui_font_builder.cpp — ConfigData->Sources renames
- MarathonRecomp/gpu/imgui/imgui_snapshot.cpp — ConfigData->Sources renames (atlas and ImFont)
- MarathonRecomp/ui/imgui_utils.h + imgui_utils.cpp — all `const ImFont*` params -> `ImFont*`

**Why:** imgui 1.92 overhauled font atlas internals extensively; downgrading to 1.91.9b is safer than adapting all game code.
**How to apply:** If imgui/implot are ever updated again, audit for ConfigData/Sources and CalcTextSizeA const.
