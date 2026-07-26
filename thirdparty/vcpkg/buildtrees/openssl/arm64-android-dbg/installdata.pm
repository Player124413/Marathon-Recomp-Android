package OpenSSL::safe::installdata;

use strict;
use warnings;
use Exporter;
our @ISA = qw(Exporter);
our @EXPORT = qw(
    @PREFIX
    @libdir
    @BINDIR @BINDIR_REL_PREFIX
    @LIBDIR @LIBDIR_REL_PREFIX
    @INCLUDEDIR @INCLUDEDIR_REL_PREFIX
    @APPLINKDIR @APPLINKDIR_REL_PREFIX
    @ENGINESDIR @ENGINESDIR_REL_LIBDIR
    @MODULESDIR @MODULESDIR_REL_LIBDIR
    @PKGCONFIGDIR @PKGCONFIGDIR_REL_LIBDIR
    @CMAKECONFIGDIR @CMAKECONFIGDIR_REL_LIBDIR
    $VERSION @LDLIBS
);

our @PREFIX                     = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug' );
our @libdir                     = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/lib' );
our @BINDIR                     = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/bin' );
our @BINDIR_REL_PREFIX          = ( 'bin' );
our @LIBDIR                     = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/lib' );
our @LIBDIR_REL_PREFIX          = ( 'lib' );
our @INCLUDEDIR                 = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/include' );
our @INCLUDEDIR_REL_PREFIX      = ( 'include' );
our @APPLINKDIR                 = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/include/openssl' );
our @APPLINKDIR_REL_PREFIX      = ( 'include/openssl' );
our @ENGINESDIR                 = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/lib/engines-3' );
our @ENGINESDIR_REL_LIBDIR      = ( 'engines-3' );
our @MODULESDIR                 = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/lib/ossl-modules' );
our @MODULESDIR_REL_LIBDIR      = ( 'ossl-modules' );
our @PKGCONFIGDIR               = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/lib/pkgconfig' );
our @PKGCONFIGDIR_REL_LIBDIR    = ( 'pkgconfig' );
our @CMAKECONFIGDIR             = ( '/home/runner/workspace/out/build/android-debug/vcpkg_installed/arm64-android/debug/share/openssl' );
our @CMAKECONFIGDIR_REL_LIBDIR  = ( '../share/openssl' );
our $VERSION                    = '3.4.0';
our @LDLIBS                     =
    # Unix and Windows use space separation, VMS uses comma separation
    $^O eq 'VMS'
    ? split(/ *, */, '-ldl -pthread ')
    : split(/ +/, '-ldl -pthread ');

1;
