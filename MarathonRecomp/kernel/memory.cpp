#include <stdafx.h>
#include "memory.h"

#include <cpu/ppc_context.h>
#include <os/logger.h>
#include <cstdio>
#include <cstdlib>

Memory::Memory()
{
#ifdef _WIN32
    base = (uint8_t*)VirtualAlloc((void*)0x100000000ull, PPC_MEMORY_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    if (base == nullptr)
        base = (uint8_t*)VirtualAlloc(nullptr, PPC_MEMORY_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    if (base == nullptr)
        return;

    DWORD oldProtect;
    VirtualProtect(base, 4096, PAGE_NOACCESS, &oldProtect);
#else
    base = (uint8_t*)mmap((void*)0x100000000ull, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

    if (base == (uint8_t*)MAP_FAILED)
        base = (uint8_t*)mmap(NULL, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

    if (base == nullptr)
        return;

    mprotect(base, 4096, PROT_NONE);
#endif

    for (size_t i = 0; PPCFuncMappings[i].guest != 0; i++)
    {
        if (PPCFuncMappings[i].host != nullptr)
            InsertFunction(PPCFuncMappings[i].guest, PPCFuncMappings[i].host);
    }
}

void* MmGetHostAddress(uint32_t ptr)
{
    return g_memory.Translate(ptr);
}

// Describes the *guest* CPU state of the crashing thread for the crash
// reporter. When the host stack trace is empty (a jump through a null function
// pointer leaves no frame to unwind), the guest link register is the only
// remaining clue about where the game actually was: it holds the return
// address of the call that was in progress.
//
// Called from a signal handler, so this only reads a thread-local pointer and
// formats with snprintf - no allocation, no locks.
extern "C" int MarathonDescribeGuestState(char* buf, size_t size)
{
    if (buf == nullptr || size == 0)
        return 0;

    const PPCContext* ctx = GetPPCContext();
    if (ctx == nullptr)
        return 0;

    const int n = snprintf(buf, size,
        "guest lr=0x%08X ctr=0x%08X r3=0x%08X r4=0x%08X r5=0x%08X "
        "(lr = return address of the call in progress; look it up in the XEX)",
        (unsigned)ctx->lr, (unsigned)ctx->ctr.u32, (unsigned)ctx->r3.u32,
        (unsigned)ctx->r4.u32, (unsigned)ctx->r5.u32);

    return (n < 0) ? 0 : ((size_t)n >= size ? (int)size - 1 : n);
}

// Called from PPC_CALL_INDIRECT_FUNC (ppc_context.h) when the recompiled code
// performs an indirect branch to a guest address whose function-table entry is
// null.
//
// Without this check the generated code simply calls through the null pointer,
// which lands on host address 0. That produces the most misleading crash this
// project can produce: "SIGSEGV, pc=0000000000000000" with an EMPTY stack
// trace, because the unwinder cannot build a frame for address 0 - so the
// crash report says nothing at all about where the game actually was. Turning
// it into a message that names the guest address makes it directly actionable:
// the address can be looked up in the XEX to find the missing function.
extern "C" [[noreturn]] void PPCReportMissingIndirectFunction(unsigned int guestAddress)
{
    const bool inCodeRange =
        guestAddress >= PPC_CODE_BASE &&
        guestAddress < (PPC_CODE_BASE + PPC_CODE_SIZE);

    LOGF_ERROR("Indirect call to guest address 0x{:08X} has no recompiled function "
               "(function table entry is null). {} This is the cause of the "
               "\"SIGSEGV pc=0 with an empty stack trace\" crash.",
               guestAddress,
               inCodeRange
                   ? "The address is inside the executable's code range, so this function was not recompiled - "
                     "it most likely needs to be added to MarathonRecompLib/config/Marathon.toml."
                   : "The address is OUTSIDE the executable's code range, so this is a corrupted or uninitialised "
                     "guest function pointer (a virtual call on a freed/never-constructed object, or a failed "
                     "allocation that was treated as success).");

    // Abort rather than returning: continuing would call through the null
    // pointer anyway. std::abort() raises SIGABRT, which the crash reporter
    // catches, so the log gets a proper report - with this line right above it.
    std::abort();
}
