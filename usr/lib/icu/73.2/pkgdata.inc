GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.73.2
COMPILE=/home/adixal/Repo/knulli/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=0  -DU_ATTRIBUTE_DEPRECATED= -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -O2 -g0  -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=/home/adixal/Repo/knulli/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -O2 -g0  -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings    -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/home/adixal/Repo/knulli/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc-ar
ARFLAGS=r
RANLIB=/home/adixal/Repo/knulli/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc-ranlib
INSTALL_CMD=/usr/bin/install -c
