# Cossacks: The Last Stand (v1.52) — Cross-Platform Build

Портированная версия игры «Казаки: Последний довод» v1.52 с поддержкой macOS (ARM64/x86_64)
и Windows (x86/x64). Рендеринг через SDL2 вместо DirectDraw, сетевая игра через CommCore (UDP)
вместо DirectPlay.

## Требования

### macOS (хост для кросс-компиляции)
- macOS 12+ (Monterey или новее)
- Apple Clang 14+ (Xcode Command Line Tools)
- CMake 3.16+
- SDL2, SDL2_mixer (через Homebrew)
- MinGW-w64 (для кросс-компиляции Windows-бинарников)

```bash
xcode-select --install
brew install cmake sdl2 sdl2_mixer pkg-config
brew install mingw-w64          # кросс-компиляторы i686/x86_64-w64-mingw32
```

### Windows (нативная сборка)
- Visual Studio 2015–2022 (с компонентом «Разработка классических приложений на C++»)
- CMake 3.16+ (встроен в VS 2019+, или установить отдельно)
- SDL2 и SDL2_mixer уже включены в проект (`Main executable/sdl/`, `Main executable/SDL2_mixer/`)

### Linux (экспериментально)
- GCC 7+ или Clang 10+
- CMake 3.16+
- SDL2, SDL2_mixer (через пакетный менеджер)

```bash
# Ubuntu / Debian
sudo apt install build-essential cmake libsdl2-dev libsdl2-mixer-dev pkg-config
```

---

## Сборка

### macOS (ARM64 — Apple Silicon)

```bash
cd src
mkdir -p build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . -j$(sysctl -n hw.ncpu)
```

Бинарник: `build/Main executable/dmcr` (Mach-O 64-bit arm64)

### macOS (x86_64 — Intel)

```bash
cd src
mkdir -p build-x86_64 && cd build-x86_64
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_OSX_ARCHITECTURES=x86_64
cmake --build . -j$(sysctl -n hw.ncpu)
```

### Windows x64 (64-bit) — кросс-компиляция с macOS/Linux

```bash
cd src
mkdir -p build-win64 && cd build-win64
cmake .. -DCMAKE_TOOLCHAIN_FILE=../cmake/toolchain-mingw64.cmake -DCMAKE_BUILD_TYPE=Release
make -j$(sysctl -n hw.ncpu)
```

Бинарник: `build-win64/Main executable/dmcr.exe` (PE32+ x86-64)

### Windows x86 (32-bit) — кросс-компиляция с macOS/Linux

```bash
cd src
mkdir -p build-win32 && cd build-win32
cmake .. -DCMAKE_TOOLCHAIN_FILE=../cmake/toolchain-mingw32.cmake -DCMAKE_BUILD_TYPE=Release
make -j$(sysctl -n hw.ncpu)
```

Бинарник: `build-win32/Main executable/dmcr.exe` (PE32 x86)

### Windows — нативная сборка через Visual Studio

```cmd
cd src
mkdir build-win64 && cd build-win64
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release
```

Или открыть `Cossacks.sln`, выбрать **Release | x64** (или **Win32**) и собрать.

### Linux (x86_64)

```bash
cd src
mkdir -p build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . -j$(nproc)
```

---

## Сборка миссионных DLL (только Windows x64)

Миссии в игре реализованы как DLL-плагины, загружаемые в рантайме. Исходники DLL получены
декомпиляцией оригинальных 32-битных DLL через Ghidra и автоматически трансформируются
скриптом `transform_dll.py` в компилируемый C-код.

### Когда нужно пересобирать DLL

**Не обязательно** пересобирать DLL при каждой сборке exe. DLL зависят только от экспортируемых
символов `dmcr.exe` (описаны в `tools/dll_build/dmcr.def`). Пересборка DLL нужна, если:

- Изменились экспортируемые символы exe (добавлены/удалены/переименованы глобальные переменные или функции)
- Изменился `dmcr.def`
- Изменился `transform_dll.py` (исправления в трансформации декомпилированного кода)

Файлы `SDL2.dll`, `SDL2_mixer.dll` и `unrar.dll` — это сторонние библиотеки, они **не пересобираются** скриптом. Их нужно обновлять вручную только при обновлении версий SDL2/SDL2_mixer.

### Команда сборки

```bash
cd src/tools/dll_build
bash build_all_dlls.sh
```

Скрипт:
1. Находит все декомпилированные `.c` файлы в `decompiled/`
2. Трансформирует через `transform_dll.py` → `transformed/`
3. Компилирует и линкует через `x86_64-w64-mingw32-gcc` → `dist/Windows-x64/`

Результат: ~220 DLL в `dist/Windows-x64/missions/`, `dist/Windows-x64/history_battl/` и т.д.

> **Примечание:** 32-битные DLL не пересобираются. Для 32-битной версии используются оригинальные DLL из дистрибутива игры.

---

## Сборка AI DLL

Каждая нация в игре имеет свою AI-логику в виде DLL-плагина (20 штук). Исходники декомпилированы
через Ghidra и трансформированы скриптом `transform_ai_dll.py`.

### macOS (ARM64)

```bash
cd src/tools/dll_build
bash build_ai_dlls_macos.sh
```

Результат: 20 `.dylib` файлов в `dist/macOS-arm64/ai/` (Mach-O 64-bit bundle arm64).

Используется `-bundle -bundle_loader dmcr` — бандлы резолвят API-символы из хост-исполняемого
файла dmcr при загрузке через `dlopen()`.

### Windows x64 (кросс-компиляция)

```bash
cd src/tools/dll_build
GAME_DIR=/path/to/cossacks bash build_ai_dlls.sh
```

Результат: 20 `.dll` файлов в `dist/Windows-x64/ai/`.

`GAME_DIR` должен указывать на каталог с оригинальными 32-битными DLL (нужны для трансформации).

### Структура каталога tools/dll_build/

| Файл | Назначение |
|------|------------|
| `game_api.h` | Общий заголовок API (42+ функций экспортируемых dmcr) |
| `transform_ai_dll.py` | Трансформация Ghidra C → компилируемый C для AI DLL |
| `build_ai_dlls.sh` | Сборка AI DLL для Windows x64 |
| `build_ai_dlls_macos.sh` | Сборка AI DLL для macOS ARM64 |
| `dmcr.def` / `libdmcr.a` | Import library для линковки DLL → exe (Windows) |

---

## Установка и запуск

Скопируйте собранный бинарник (`dmcr` / `dmcr.exe`) в каталог с данными игры.
Для Windows x64 также скопируйте содержимое `dist/Windows-x64/` (DLL миссий, SDL2, unrar).

```
cossacks/
  dmcr(.exe)        # собранный бинарник
  SDL2.dll          # (Windows) — из dist/
  SDL2_mixer.dll    # (Windows) — из dist/
  unrar.dll         # (Windows) — из dist/
  all.gsc           # основной архив данных
  all_ru.gsc        # русская локализация (опционально)
  mode.dat          # настройки (разрешение, звук и т.д.)
  Tracks/           # музыка (Track_10.wav .. Track_20.wav)
  ai/               # AI DLL (.dylib на macOS, .dll на Windows) — из dist/
  missions/         # DLL миссий — из dist/ (x64) или оригинальные (x86)
```

**Важно:** рабочий каталог при запуске должен быть каталогом с данными игры:

```bash
# macOS / Linux
cd /path/to/cossacks && ./dmcr

# Windows
cd C:\Games\Cossacks && dmcr.exe
```

На macOS бинарник нужно подписать перед запуском:
```bash
codesign -f -s - dmcr
```

---

## Структура проекта

```
src/
├── CMakeLists.txt              # Корневой CMake
├── Cossacks.sln                # Visual Studio Solution (Windows)
├── cmake/
│   ├── toolchain-mingw32.cmake # Тулчейн кросс-компиляции Win32 (i686)
│   └── toolchain-mingw64.cmake # Тулчейн кросс-компиляции Win64 (x86_64)
├── Main executable/            # Основной исполняемый файл (95+ исходников)
│   ├── CMakeLists.txt
│   ├── MPlayerStub.cpp         # Мультиплеер (CommCore UDP, замена DirectPlay)
│   ├── SdlEventBridge.cpp      # Трансляция SDL событий → Win32 API
│   ├── sdl/                    # SDL2 (Windows, включены .lib/.dll)
│   └── SDL2_mixer/             # SDL2_mixer (Windows, включены .lib/.dll)
├── CommCore library/           # UDP-сетевая библиотека (кроссплатформенная)
├── platform/                   # Слой совместимости Win32 → POSIX
│   ├── platform_types.h        # Типы, макросы, функции Win32 API
│   ├── windows.h               # Перехват #include <windows.h>
│   └── ...
├── decompiled/                 # Декомпилированные исходники DLL (Ghidra)
├── transformed/                # Трансформированные .c после transform_dll.py
├── tools/
│   ├── dll_build/
│   │   ├── build_all_dlls.sh   # Скрипт сборки всех DLL
│   │   ├── transform_dll.py    # Трансформация Ghidra C → компилируемый C
│   │   ├── transform_ai_dll.py # Трансформация AI DLL (20 наций)
│   │   ├── build_ai_dlls.sh    # Сборка AI DLL (Windows x64)
│   │   ├── build_ai_dlls_macos.sh # Сборка AI DLL (macOS ARM64)
│   │   ├── game_api.h          # API-заголовок для AI DLL
│   │   ├── dmcr.def            # Экспортируемые символы exe
│   │   └── libdmcr.a           # Import library для линковки DLL → exe
│   └── decompile_all.sh        # Пакетная декомпиляция через Ghidra
├── dist/                       # Готовые бинарники
│   ├── macOS-arm64/            # dmcr (Mach-O) + ai/*.dylib (20 AI DLL)
│   ├── Windows-x86/            # dmcr.exe (PE32) + SDL2.dll, SDL2_mixer.dll
│   └── Windows-x64/            # dmcr.exe (PE32+) + SDL2/SDL2_mixer/unrar.dll + ai/*.dll + ~220 DLL миссий
├── IChat library/              # GameSpy чат (опционально, серверы закрыты)
└── IntExplorer library/        # GameSpy браузер (опционально)
```

---

## Опции CMake

| Опция | Описание | По умолчанию |
|-------|----------|--------------|
| `CMAKE_BUILD_TYPE` | Debug / Release / RelWithDebInfo | — |
| `CMAKE_TOOLCHAIN_FILE` | Путь к тулчейн-файлу для кросс-компиляции | — |
| `CMAKE_OSX_ARCHITECTURES` | arm64 / x86_64 (macOS) | native |
| `BUILD_ICHAT` | Собрать IChat библиотеку | OFF |
| `BUILD_INTEXPLORER` | Собрать IntExplorer библиотеку | OFF |

---

## Известные ограничения

- **GP_Draw ассемблерные подпрограммы** (~65 штук): на macOS/Linux заменены C-фолбэками.
  Основной рендеринг работает, но отдельные код-пути могут быть медленнее оригинала.
- **IChat / IntExplorer**: Зависят от серверов GameSpy (закрыты), отключены по умолчанию.
- **DirectPlay**: Полностью заменён на CommCore UDP на всех платформах.
- **32-bit DLL миссий**: Не пересобираются, используются оригинальные из дистрибутива игры.
  Для 64-bit DLL получены декомпиляцией и пересобраны как x64.
