{pkgs}: {
  deps = [
    pkgs.jdk17
    pkgs.pkg-config
    pkgs.llvm
    pkgs.clang
    pkgs.ninja
    pkgs.cmake
    pkgs.unzip
  ];
}
