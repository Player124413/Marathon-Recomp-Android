---
name: Silent death after stage_wvo_b.arc — how to actually diagnose it
description: The OOM/UploadAllocator theory was disproven by the user's own log; what the log proves, and the telemetry added to identify the real cause.
---

# «Игра просто закрывается» после последнего архива — диагностика

**Устройство:** Honor X9b (Snapdragon 6 Gen 1, Adreno 710), Turnip и сток —
одинаково. Лог обрывается на `stage_wvo_b.arc` (последний архив), ошибок нет.

## Что ОПРОВЕРГНУТО (важно не повторять)

Предыдущий коммит лечил «OOM в UploadAllocator → SIGSEGV pc=0». Лог с новой
сборкой это опроверг:

1. `[plume] heap[0]: 8593 MiB DEVICE_LOCAL`, `uaM=1` — видеопамяти 8.5 ГБ,
   истощения GPU-кучи нет и близко.
2. Ни одной строки `UploadAllocator: failed to create...` — новый код
   аллокатора вообще не срабатывал.
3. **Ни одной строки `CRASH REPORT`** — хотя `os::crash_reporter::Init()`
   вызывается первым делом в `main()` и ловит SIGSEGV/SIGABRT/SIGBUS/SIGILL/
   SIGFPE/SIGTRAP + `std::terminate`.

Пункт 3 — ключевой вывод: **фатального сигнала не было**. Любой `assert()`,
`__builtin_trap()`, `std::abort()` или разыменование null в нативном коде
оставили бы отчёт в `_game_log.txt`. Значит остаются ровно три варианта:

- **SIGKILL от low-memory killer** — перехватить невозможно в принципе;
- **дедлок** (процесс жив, но ничего не делает);
- «тихий» выход через `_Exit` без лог-строки.

## Почему пользователь не видел даже диалога об ошибке

`_crash_sentinel` удаляется в `AndroidMarkVulkanStartupSuccessful()` — то есть
сразу после создания свопчейна, задолго до загрузки архивов. Любая смерть
позже этой точки не оставляла маркера, и лаунчер молчал.

## Добавленная телеметрия (эта сессия)

- `os/android/watchdog_android.{h,cpp}` — сэмплер /proc: `VmRSS`, `VmHWM`,
  `MemAvailable`, число потоков + «стадия». Печатает предупреждение, когда
  системная память на исходе (сигнатура будущего LMK-килла), и при отсутствии
  прогресса ≥25 с дампит все потоки (`state` + `wchan`) — `S` + `futex_wait`
  на всех = дедлок.
- `MarathonKernelWakeWaiters()` (kernel/imports.cpp) — вотчдог периодически
  будит `KeWaitForMultipleObjects`-ждунов, иначе при настоящем дедлоке
  wait-any-цикл спит вечно и не успевает себя продиагностировать.
- `KeWaitForMultipleObjects`: репорт «жду >20 с, типы объектов N» + громкая
  ошибка на нераспознанный тип объекта (раньше — только `assert`, вырезаемый
  в release → вечный сон).
- **`PushLogLine` наконец вызывается** из `logger_android.cpp`. Он был
  объявлен и реализован, но не вызывался ниоткуда — поэтому секция
  «Last log lines» в каждом крэш-отчёте была пустой.
- Гостевая куча: `RtlAllocateHeap` / `RtlReAllocateHeap` / `XAllocMem` /
  `MmAllocatePhysicalMemoryEx` при OOM больше не возвращают 0 молча (в release
  `assert` не работает) — пишут диагностику o1heap (capacity/allocated/peak/
  oom_count). У `MmAllocatePhysicalMemoryEx` проверки не было вовсе: null
  маппился в гостевой адрес 0 и отдавался игре как успех.
- `_session_active` — маркер, снимаемый только при чистом выходе
  (`App::Exit()` — реальный путь выхода на Android, и `main()`), плюс
  `_hang_sentinel` от вотчдога.
- Лаунчер: `ActivityManager.getHistoricalProcessExitReasons()` (API 30+) —
  Android сам сообщает `REASON_LOW_MEMORY` / `REASON_CRASH_NATIVE` /
  `REASON_ANR` / `REASON_SIGNALED` + PSS/RSS на момент смерти. Это
  единственный авторитетный ответ для некатчабельного SIGKILL.

## Как читать следующий лог

- Последняя строка — `[W][watchdog] system memory is nearly exhausted` или
  диалог говорит `OUT OF MEMORY` → это LMK, не краш: резать память.
- Есть `HANG DETECTED` + дамп потоков → дедлок; смотреть `wchan`.
- Появился `CRASH REPORT` → обычный краш, стек уже в файле.
