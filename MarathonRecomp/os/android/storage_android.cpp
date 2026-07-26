#include "storage_android.h"

#include <user/paths.h>

#include <SDL.h>
#include <SDL_system.h>

#include <cstdio>
#include <cstdlib>

namespace os::android
{
    // A directory can exist but be unusable: e.g. created via `adb shell mkdir` it's owned
    // by the shell uid, and the app gets EACCES through FUSE. std::filesystem calls on such
    // paths throw all over the codebase (Config::Load etc.), so catch this case up front.
    static bool ProbeDirWritable(const std::filesystem::path& dir)
    {
        std::filesystem::path probePath = dir / ".write_probe";
        FILE* file = fopen(probePath.c_str(), "wb");
        if (file == nullptr)
            return false;

        fclose(file);
        remove(probePath.c_str());
        return true;
    }

    const std::filesystem::path& GetInternalFilesDir()
    {
        static std::filesystem::path path = []() -> std::filesystem::path
        {
            const char* storagePath = SDL_AndroidGetInternalStoragePath();
            return (storagePath != nullptr) ? std::filesystem::path(storagePath) : std::filesystem::path();
        }();

        return path;
    }

    const std::filesystem::path& GetExternalFilesDir()
    {
        static std::filesystem::path path = []() -> std::filesystem::path
        {
            const char* storagePath = SDL_AndroidGetExternalStoragePath();
            return (storagePath != nullptr) ? std::filesystem::path(storagePath) : std::filesystem::path();
        }();

        return path;
    }

    const std::filesystem::path& GetDataRoot()
    {
        static std::filesystem::path root = []() -> std::filesystem::path
        {
            std::error_code ec;

            const std::filesystem::path& external = GetExternalFilesDir();
            if (!external.empty())
            {
                std::filesystem::path result = external / USER_DIRECTORY;
                std::filesystem::create_directories(result, ec);

                if (!ProbeDirWritable(result))
                {
                    // Refuse to continue with a poisoned directory - later std::filesystem
                    // calls would throw an uncaught exception with no explanation.
                    char text[1024];
                    snprintf(text, sizeof(text),
                        "The storage folder is not accessible:\n\n%s\n\n"
                        "It was likely created by another tool (e.g. adb shell), so the "
                        "app cannot write to it. Delete the folder from a PC or file "
                        "manager and restart the app.",
                        result.string().c_str());
                    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Marathon Recompiled", text, nullptr);
                    std::_Exit(1);
                }

                return result;
            }

            // External storage unavailable (shouldn't happen on real devices) - stay
            // functional on internal storage. LauncherActivity.java falls back to the
            // same directory when getExternalFilesDir() returns null.
            std::filesystem::path result = GetInternalFilesDir() / USER_DIRECTORY;
            std::filesystem::create_directories(result, ec);
            return result;
        }();

        return root;
    }

    bool HasGameFiles()
    {
        std::error_code ec;
        return std::filesystem::exists(GetDataRoot() / "game" / "default.xex", ec);
    }
}
