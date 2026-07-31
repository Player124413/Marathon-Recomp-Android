---
name: SIGSEGV pc=0 with an EMPTY stack = null indirect guest call
description: The real signature behind "the game just closes after stage_wvo_b.arc" — PPC_CALL_INDIRECT_FUNC jumping through a null function-table entry, and the guard that names the guest address.
---

# `SIGSEGV pc=0` + пустой стек = прыжок по нулевому указателю функции

**Дата:** 2026-07-31. Honor X9b (Adreno 710), Turnip и сток — одинаково.

## Что показал первый настоящий CRASH REPORT

```
Cause    : SIGSEGV (signal 11)
FaultAt  : 0x0000000000000000
--- Stack trace ---            <- ПУСТО
--- Last log lines ---
  [Game] Loading file: "game:\win32\archives\stage_wvo_b.arc"
```

Отчёт наконец появился только потому, что в прошлой сессии починили вызов
`PushLogLine` и маркер `_session_active` (см. silent-death-telemetry.md).

**ВАЖНАЯ ПОПРАВКА (третий лог).** Сначала я счёл пустой стек доказательством
прыжка на адрес 0. Это неверно: `_Unwind_Backtrace` **не проходит через
сигнальный кадр ядра**, поэтому раскрутка всегда упирается в
`__kernel_rt_sigreturn`, а кадры #0/#1 — это сам обработчик. Короткий стек
получается при ЛЮБОМ сбое и уликой не является.

Единственный достоверный источник места сбоя — `ucontext`, который приходит
третьим аргументом в `sa_sigaction`. Обработчик его **игнорировал**
(`void* /*ucontext*/`). Теперь оттуда пишутся `pc`, `lr`, `sp`, `x0-x2` плюс
резолв адреса в «библиотека + смещение (символ)».

## Механизм (корень)

`MarathonRecompLib/ppc/ppc_context.h`:

```c
#define PPC_LOOKUP_FUNC(x, y) *(PPCFunc**)(x + PPC_IMAGE_BASE + PPC_IMAGE_SIZE + ...)
#define PPC_CALL_INDIRECT_FUNC(x) (PPC_LOOKUP_FUNC(base, x))(ctx, base)   // БЕЗ ПРОВЕРКИ
```

Каждый косвенный переход гостя (`bctrl` — виртуальные вызовы, колбэки,
таблицы функций) ищет хост-функцию в таблице по гостевому адресу. Если запись
нулевая (функция не рекомпилирована, либо гостевой указатель — мусор), вызов
уходит на адрес 0. В сгенерированном коде **23166** таких мест.

## Что сделано

- `tools/XenonRecomp/XenonUtils/ppc_context.h` **и**
  `MarathonRecompLib/ppc/ppc_context.h` — проверка перед вызовом, при null →
  `PPCReportMissingIndirectFunction(guestAddress)`.
  ⚠️ Правку надо держать в **обоих** файлах: генератор (recompiler.cpp,
  `SaveCurrentOutData("ppc_context.h")`) просто копирует XenonUtils-версию
  поверх сгенерированной, а сгенерированная лежит в Git и используется, если
  перегенерации не было.
- `kernel/memory.cpp` — реализация: пишет гостевой адрес и **различает два
  случая**: адрес внутри `PPC_CODE_BASE..+PPC_CODE_SIZE` → функция не
  рекомпилирована (кандидат в `MarathonRecompLib/config/Marathon.toml`);
  вне диапазона → битый/неинициализированный гостевой указатель (вызов метода
  на разрушенном объекте либо неудачная аллокация, принятая за успех).
  Затем `std::abort()` → SIGABRT ловится репортером, и в логе остаётся строка
  с адресом.
- `MarathonDescribeGuestState()` — гостевые `lr/ctr/r3/r4/r5` в крэш-отчёт.
  При пустом хост-стеке **`lr` — единственная зацепка**: это адрес возврата
  выполнявшегося вызова.
- `crash_reporter_android.cpp`: `uw.skip` было **4**, что при короткой
  раскрутке выбрасывало все имеющиеся кадры и печатало пустой стек. Теперь
  `skip = 0` + явное пояснение, когда кадров нет.

## Как читать следующий лог

Ищите строку `Indirect call to guest address 0x…`:
- адрес **внутри** кодового диапазона → добавить функцию в `Marathon.toml`;
- **вне** → искать, кто отдал мусорный указатель (в отчёте рядом `guest lr=`).
