---
name: dxc-bin host arch fix for Android cross-compile
description: DXC shader compiler must always use the host (x86_64) binary when cross-compiling; Android target caused it to pick arm64.
---
## Problem
tools/XenosRecomp/thirdparty/dxc-bin/CMakeLists.txt uses CMAKE_SYSTEM_PROCESSOR to select the DXC binary.
For Android cross-compiles, CMAKE_SYSTEM_PROCESSOR is aarch64, so it picks arm64/dxc-linux which doesn't exist on the x86_64 Replit host.

The -DDIRECTX_DXC_TOOL override in build-android.sh is ignored because dxc-bin sets it as CACHE INTERNAL inside the subdirectory.

## Fix
In tools/XenosRecomp/thirdparty/dxc-bin/CMakeLists.txt, added before the existing elseif(CMAKE_SYSTEM_PROCESSOR) check:
```cmake
elseif(CMAKE_CROSSCOMPILING)
    # DXC is a host build tool — always use the host arch when cross-compiling.
    set(DXC_ARCHITECTURE ${CMAKE_HOST_SYSTEM_PROCESSOR})
```

**Why:** DXC is a build-time code generation tool, not a target-deployed binary. Its architecture must always match the build host.
**How to apply:** Any time a new cross-compile target is added, verify dxc-bin selects the host arch. This fix is already in place.
