{pkgs}: {
  deps = [
    pkgs.pkg-config
    pkgs.llvm
    pkgs.clang
    pkgs.ninja
    pkgs.cmake
    pkgs.unzip
  ];
}
