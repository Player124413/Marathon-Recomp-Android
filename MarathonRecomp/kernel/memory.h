#pragma once

#ifndef _WIN32
#define MEM_COMMIT  0x00001000  
#define MEM_RESERVE 0x00002000  
#endif

// Implemented in kernel/memory.cpp. Reports an attempt to call a guest address
// that has no recompiled function and does not return (it aborts, so the crash
// reporter records the guest address instead of a bare "SIGSEGV pc=0").
extern "C" [[noreturn]] void PPCReportMissingIndirectFunction(unsigned int guestAddress);

struct Memory
{
    uint8_t* base{};

    Memory();

    bool IsInMemoryRange(const void* host) const noexcept
    {
        return host >= base && host < (base + PPC_MEMORY_SIZE);
    }

    void* Translate(size_t offset) const noexcept
    {
        if (offset)
            assert(offset < PPC_MEMORY_SIZE);

        return base + offset;
    }

    uint32_t MapVirtual(const void* host) const noexcept
    {
        if (host)
            assert(IsInMemoryRange(host));

        return static_cast<uint32_t>(static_cast<const uint8_t*>(host) - base);
    }

    PPCFunc* FindFunction(uint32_t guest) const noexcept
    {
        PPCFunc* func = PPC_LOOKUP_FUNC(base, guest);

        // Same failure as PPC_CALL_INDIRECT_FUNC, but for the paths that look a
        // guest function up by hand instead of going through the generated
        // macro: GuestThread::Start (every ExCreateThread), GuestToHostFunction
        // (host code calling back into the game) and the XAudio client
        // callback. A null here was called straight away, jumping to host
        // address 0 - the "SIGSEGV pc=0 with an empty stack" crash, with no
        // indication of which guest address was missing.
        if (func == nullptr) [[unlikely]]
            PPCReportMissingIndirectFunction(guest);

        return func;
    }

    void InsertFunction(uint32_t guest, PPCFunc* host)
    {
        PPC_LOOKUP_FUNC(base, guest) = host;
    }
};

extern "C" void* MmGetHostAddress(uint32_t ptr);
extern Memory g_memory;
