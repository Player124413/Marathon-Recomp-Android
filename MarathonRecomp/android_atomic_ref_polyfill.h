#pragma once
// Polyfill for std::atomic_ref, which NDK r27c's libc++ does not implement
// even in C++20 mode.  We use the clang/GCC __atomic_* builtins directly.
// Only activated on Android (__ANDROID__) and only when the standard library
// has not already provided the real thing (guarded by __cpp_lib_atomic_ref).
#if defined(__ANDROID__) && !defined(__cpp_lib_atomic_ref)
#include <atomic>
#include <thread>

namespace std {

template<typename T>
class atomic_ref {
    static_assert(__is_trivially_copyable(T),
        "atomic_ref requires a trivially-copyable type");
public:
    using value_type = T;

    explicit atomic_ref(T& obj) noexcept : ptr_(&obj) {}
    atomic_ref(const atomic_ref&) noexcept = default;
    atomic_ref& operator=(const atomic_ref&) = delete;

    T load(memory_order order = memory_order_seq_cst) const noexcept {
        T result{};
        __atomic_load(ptr_, &result, static_cast<int>(order));
        return result;
    }

    void store(T desired, memory_order order = memory_order_seq_cst) noexcept {
        __atomic_store(ptr_, &desired, static_cast<int>(order));
    }

    // Assignment operator — same as store(seq_cst)
    T operator=(T desired) noexcept {
        store(desired);
        return desired;
    }

    T exchange(T desired, memory_order order = memory_order_seq_cst) noexcept {
        T result{};
        __atomic_exchange(ptr_, &desired, &result, static_cast<int>(order));
        return result;
    }

    bool compare_exchange_weak(T& expected, T desired,
                               memory_order success,
                               memory_order failure) noexcept {
        return __atomic_compare_exchange(
            ptr_, &expected, &desired,
            /*weak=*/true,
            static_cast<int>(success),
            static_cast<int>(failure));
    }

    bool compare_exchange_weak(T& expected, T desired,
                               memory_order order = memory_order_seq_cst) noexcept {
        return compare_exchange_weak(expected, desired, order,
            order == memory_order_acq_rel ? memory_order_acquire
          : order == memory_order_release ? memory_order_relaxed
          : order);
    }

    bool compare_exchange_strong(T& expected, T desired,
                                 memory_order success,
                                 memory_order failure) noexcept {
        return __atomic_compare_exchange(
            ptr_, &expected, &desired,
            /*weak=*/false,
            static_cast<int>(success),
            static_cast<int>(failure));
    }

    bool compare_exchange_strong(T& expected, T desired,
                                 memory_order order = memory_order_seq_cst) noexcept {
        return compare_exchange_strong(expected, desired, order,
            order == memory_order_acq_rel ? memory_order_acquire
          : order == memory_order_release ? memory_order_relaxed
          : order);
    }

    // C++20 wait / notify — implemented as a busy-wait spin.
    // Correct for the critical-section / spinlock patterns in this codebase;
    // heavier than a futex but the NDK doesn't expose __atomic_wait.
    void wait(T old, memory_order order = memory_order_seq_cst) const noexcept {
        while (load(order) == old) {
#if defined(__aarch64__)
            asm volatile("yield" ::: "memory");
#elif defined(__x86_64__) || defined(__i386__)
            asm volatile("pause" ::: "memory");
#else
            std::this_thread::yield();
#endif
        }
    }

    void notify_one() noexcept { /* no-op: wait() is a busy-spin */ }
    void notify_all() noexcept { /* no-op: wait() is a busy-spin */ }

private:
    T* ptr_;
};

} // namespace std

#endif // __ANDROID__ && !__cpp_lib_atomic_ref
