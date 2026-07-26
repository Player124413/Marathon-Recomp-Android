#include <os/process.h>

#include <signal.h>
#include <unistd.h>
#include <climits>

// Mostly identical to os/linux/process_linux.cpp - fork()/exec()/readlink()
// are all available under the NDK - except GetExecutablePath, which can't
// rely on argv[0] or a conventional install path the way desktop builds do;
// /proc/self/exe is still valid on Android though, so it's reused as-is.

std::filesystem::path os::process::GetExecutablePath()
{
    char exePath[PATH_MAX] = {};
    if (readlink("/proc/self/exe", exePath, PATH_MAX) > 0)
    {
        return std::filesystem::path(std::u8string_view((const char8_t*)(exePath)));
    }
    else
    {
        return std::filesystem::path();
    }
}

std::filesystem::path os::process::GetExecutableRoot()
{
    return GetExecutablePath().remove_filename();
}

std::filesystem::path os::process::GetWorkingDirectory()
{
    char cwd[PATH_MAX] = {};
    char *res = getcwd(cwd, sizeof(cwd));
    if (res != nullptr)
    {
        return std::filesystem::path(std::u8string_view((const char8_t*)(cwd)));
    }
    else
    {
        return std::filesystem::path();
    }
}

bool os::process::SetWorkingDirectory(const std::filesystem::path& path)
{
    return chdir(path.c_str()) == 0;
}

bool os::process::StartProcess(const std::filesystem::path& path, const std::vector<std::string>& args, std::filesystem::path work)
{
    // Android app sandboxing generally won't allow launching arbitrary other
    // executables (e.g. an installer helper) the way desktop builds might;
    // this is kept as a best-effort fork+exec since nothing in the engine
    // currently depends on it succeeding on Android, but it is unverified.
    pid_t pid = fork();
    if (pid < 0)
        return false;

    if (pid == 0)
    {
        setsid();

        std::u8string workU8 = work.u8string();
        chdir((const char*)(workU8.c_str()));

        std::u8string pathU8 = path.u8string();
        std::vector<char*> argStrs;
        argStrs.push_back((char*)(pathU8.c_str()));
        for (const std::string& arg : args)
            argStrs.push_back((char *)(arg.c_str()));

        argStrs.push_back(nullptr);
        execvp((const char*)(pathU8.c_str()), argStrs.data());
        raise(SIGKILL);
    }

    return true;
}

void os::process::CheckConsole()
{
    // There is no attached console on Android; output only goes to logcat.
    g_consoleVisible = false;
}

void os::process::ShowConsole()
{
    // No-op: there is no console to show on Android.
}
