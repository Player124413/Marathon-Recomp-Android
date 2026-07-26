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

our @PREFIX                     = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg' );
our @libdir                     = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg' );
our @BINDIR                     = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/apps' );
our @BINDIR_REL_PREFIX          = ( 'apps' );
our @LIBDIR                     = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg' );
our @LIBDIR_REL_PREFIX          = ( '' );
our @INCLUDEDIR                 = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/include', '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/../src/nssl-3.4.0-821e8e5bdc.clean/include' );
our @INCLUDEDIR_REL_PREFIX      = ( 'include', '../src/nssl-3.4.0-821e8e5bdc.clean/include' );
our @APPLINKDIR                 = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/ms' );
our @APPLINKDIR_REL_PREFIX      = ( 'ms' );
our @ENGINESDIR                 = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/engines' );
our @ENGINESDIR_REL_LIBDIR      = ( 'engines' );
our @MODULESDIR                 = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg/providers' );
our @MODULESDIR_REL_LIBDIR      = ( 'providers' );
our @PKGCONFIGDIR               = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg' );
our @PKGCONFIGDIR_REL_LIBDIR    = ( '.' );
our @CMAKECONFIGDIR             = ( '/home/runner/workspace/thirdparty/vcpkg/buildtrees/openssl/arm64-android-dbg' );
our @CMAKECONFIGDIR_REL_LIBDIR  = ( '.' );
our $VERSION                    = '3.4.0';
our @LDLIBS                     =
    # Unix and Windows use space separation, VMS uses comma separation
    $^O eq 'VMS'
    ? split(/ *, */, '-ldl -pthread ')
    : split(/ +/, '-ldl -pthread ');

1;
