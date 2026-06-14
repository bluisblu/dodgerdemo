Dodger Demo  
[![Build Status]][actions] [![Code Progress]][progress] [![Data Progress]][progress]
=============

<!--
Replace with your repository's URL.
-->

[Build Status]: https://github.com/bluisblu/dodgerdemo/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/bluisblu/dodgerdemo/actions/workflows/build.yml

<!--
decomp.dev progress badges
See https://decomp.dev/api for an API overview.
-->

[Code Progress]: https://decomp.dev/bluisblu/dodgerdemo.svg?mode=shield&measure=code&label=Code
[Data Progress]: https://decomp.dev/bluisblu/dodgerdemo.svg?mode=shield&measure=data&label=Data
[progress]: https://decomp.dev/bluisblu/dodgerdemo

A work-in-progress decompilation of Radical Entertainment's physics demo for the GameCube.

This repository does **not** contain any game assets or assembly whatsoever. An existing copy of the game is required.

Supported versions:

- `TESTNA`: physdemo.elf

# Dependencies

## Windows

On Windows, it's **highly recommended** to use native tooling. WSL or msys2 are **not** required.  
When running under WSL, [objdiff](#diffing) is unable to get filesystem notifications for automatic rebuilds.

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/detail/python-311/9NRWMJP3717K).
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`

## macOS

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages):

  ```sh
  brew install ninja
  ```

[wibo](https://github.com/decompals/wibo), a minimal 32-bit Windows binary wrapper, will be automatically downloaded and used.

## Linux

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages).

[wibo](https://github.com/decompals/wibo), a minimal 32-bit Windows binary wrapper, will be automatically downloaded and used.

# Building

- Clone the repository:

  ```sh
  git clone https://github.com/bluisblu/dodgerdemo.git
  ```

- Copy your game's disc image to `orig/TESTNA`.
  - Supported formats: ISO (GCM), RVZ, WIA, WBFS, CISO, NFS, GCZ, TGC
  - After the initial build, the disc image can be deleted to save space.

- Configure:

  ```sh
  python configure.py
  ```

  To use a version other than `GAMEID` (USA), specify it with `--version`.

- Build:

  ```sh
  ninja
  ```

# Diffing

Once the initial build succeeds, an `objdiff.json` should exist in the project root.

Download the latest release from [encounter/objdiff](https://github.com/encounter/objdiff). Under project settings, set `Project directory`. The configuration should be loaded automatically.

Select an object from the left sidebar to begin diffing. Changes to the project will rebuild automatically: changes to source files, headers, `configure.py`, `splits.txt` or `symbols.txt`.

![](assets/objdiff.png)

Dolphin SDK from [doldecomp/dolsdk2001](https://github.com/doldecomp/dolsdk2001)
