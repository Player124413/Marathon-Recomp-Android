---
name: ImGui snapshot version-mismatch fallback
description: What happens when im_font_atlas.bin was built with a different ImGui version, and how the crash-safe fallback works.
---

## Rule
When `ImFontAtlasSnapshot::Load()` detects `header->imguiVersion != IMGUI_VERSION_NUM`,
it must return `nullptr` (not abort via assert). The caller in `video.cpp`
then falls back to runtime font building for both the atlas AND the texture upload.

**Why:** The assert was calling `abort()` in Debug builds on Android whenever the
pre-baked `im_font_atlas.bin` was compiled with a different ImGui version than the
current build (e.g. after the 1.92→1.91.9b downgrade). This was the crash seen at:
`[W][CreateImGuiBackend] VkInit: loading ImGui font snapshot` on Mali-G57 / Tab A9.

## How to apply
Three files were changed; all must stay in sync:

### imgui_snapshot.cpp — Load()
Replace `assert(header->imguiVersion == IMGUI_VERSION_NUM ...)` with:
```cpp
if (header->imguiVersion != IMGUI_VERSION_NUM) {
    fprintf(stderr, "[ImFontAtlasSnapshot] Version mismatch: atlas=%u current=%u ...\n", ...);
    g_imFontAtlas.reset();
    return nullptr;
}
```

### imgui_snapshot.cpp — GetFont()
Remove `assert(false && "Unable to locate equivalent font ...")` inside
`#ifdef ENABLE_IM_FONT_ATLAS_SNAPSHOT`. Replace with:
```cpp
fprintf(stderr, "[ImFontAtlasSnapshot] GetFont(\"%s\"): font not in atlas — using default font.\n", name);
return fontAtlas->Fonts.Size > 0 ? fontAtlas->Fonts[0] : nullptr;
```
`Fonts[0]` is safe because `AddFontDefault()` populates `Fonts` (via `Fonts.push_back`)
before `Build()` is ever called (`imgui_draw.cpp:2585`).

### video.cpp — CreateImGuiBackend()
After `io.Fonts = ImFontAtlasSnapshot::Load()`:
- Set `bool fontAtlasFromSnapshot = (io.Fonts != nullptr)`
- If false: `io.Fonts = IM_NEW(ImFontAtlas)(); io.Fonts->AddFontDefault(); GenerateGlyphRanges()`
- Inside `#ifdef ENABLE_IM_FONT_ATLAS_SNAPSHOT` texture block: gate on `fontAtlasFromSnapshot`:
  - true → load pre-built DDS via `LoadTexture`
  - false → full runtime atlas build + texture upload (same as `#else` branch)
