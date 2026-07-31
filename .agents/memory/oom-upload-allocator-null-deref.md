# OOM в UploadAllocator → SIGSEGV pc=0 (Adreno 710 и Turnip одинаково)

**Дата:** 2026-07-31. Устройство: Honor X9b (Snapdragon 6 Gen 1, Adreno 710).
Симптом: после загрузки всех stage-архивов (stage_wvo_b.arc — последний) игра
падала с `SIGSEGV, pc=0x0`, стек оканчивался на
`UploadAllocator::allocate(unsigned, unsigned)`. В `_game_log.txt` («у меня
ничего не высвечивается») — ничего, потому что plume писал ошибки только в
logcat, который пользователь не видит. В logcat было
`VK_ERROR_OUT_OF_DEVICE_MEMORY` / `vmaCreateBuffer failed`.

## Цепочка краха (корень)

1. `UploadAllocator::allocate` дорастает до нового 16 МБ чанка →
   `g_device->createBuffer(...)`.
2. `VulkanDevice::createBuffer` в plume ВСЕГДА возвращает объект
   (`make_unique<VulkanBuffer>`); при ошибке `vmaCreateBuffer` конструктор
   просто делает `fprintf(stderr)` и ранний `return` — поля `vk`/`allocation`
   остаются null.
3. `buffer.buffer->map()` → `vmaMapMemory(..., allocation=nullptr)` → nullptr.
4. Аллокатор возвращает `memory = nullptr + offset` → memcpy → SIGSEGV.
   (либо позже — bind нулевого `VkBuffer` в драйвере; тот же pc≈0). 

Воспроизводилось детерминированно в одной точке контента и одинаково на
стоковом Adreno и на Turnip → это не «разница драйверов», а реальное
истощение GPU-кучи на этом контенте (Sonic'06 тяжелее Unleashed-порта по
всплескам аплоадов при старте геймплея), плюс усиливатель: чанки за пределами
пика одного фрейма никогда не освобождались (`reset()` сбрасывал только
смещения → всплески загрузки удерживали сотни МБ навсегда).

## Что сделано (коммит локальный, «Turnip/OOM hotfix»)

- `MarathonRecomp/gpu/video.cpp`, `UploadAllocator`:
  - `createChunk()` — проверяет `isValid()` + map; при ошибке лог в _game_log
    (с троттлингом) и graceful fallback: переиспользование старейшего валидного
    чанка нужной ёмкости → вечный emergency-чанк → чистый abort с понятным
    сообщением (вместо SIGSEGV pc=0).
  - «Всплесковый» shrink в `reset()`: держим не более `used+2` чанков, если
    избыток ≥4 (reset идёт после fence слота → чанки не в полёте).
  - Аплоады `>16 МБ` больше не переполняют чанк молча в release (assert не
    работал): выделенный oversized-чанк, очищается в `reset()`.
- `thirdparty/plume/plume_vulkan.cpp`:
  - `extern "C" void MarathonPlumeGameLog(int isError, const char*)` — хук,
    реализованный в `vulkan_driver_android.cpp` (разбивает многострочный текст
    и пишет через LOGF/LOGF_ERROR → _game_log.txt).
  - При создании девайса: полный дамп heap[]/type[] (размеры, флаги).
  - `vmaCreateBuffer`/`vmaCreateImage`/`vmaMapMemory` failure → детальный
    лог (размер, usage flags, heapType / WxHxD, формат, mipLevels).
- Бамп версии APK: versionCode 5, `1.0.3-android-debug-turnip`.

## Чему НЕ является причиной (на вопрос пользователя «сделать Android 11+ и Vulkan 1.3+»)

Крах одинаков под Turnip (Vulkan 1.3) → версия API/minSdk не при чём; это
объём памяти, а не версия. Поднимать планку смысла нет: баг был в обработке
ошибки аллокации + удержании всплесков чанков. Планку не трогали.

## Следующий шаг по данным

Если OOM повторится: `_game_log.txt` теперь содержит таблицу куч/типов и
точные размеры падающих аллокаций — по ним решать, что резать дальше
(internal resolution, MSAA, текстурные пути гостевых текстур).
