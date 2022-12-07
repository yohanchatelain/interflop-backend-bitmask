ACLOCAL_AMFLAGS=-I m4

lib_LTLIBRARIES = libinterflop_bitmask.la
libinterflop_bitmask_la_SOURCES = \
    interflop_bitmask.c \
    @INTERFLOP_STDLIB_PATH@/include/interflop-stdlib/iostream/logger.c \
    @INTERFLOP_STDLIB_PATH@/include/interflop-stdlib/common/options.c
libinterflop_bitmask_la_CFLAGS = \
    -DBACKEND_HEADER="interflop_bitmask" \
    -I@INTERFLOP_STDLIB_PATH@/include/ \
    -fno-stack-protector -O3
if WALL_CFLAGS
libinterflop_bitmask_la_CFLAGS += -Wall -Wextra -Wno-varargs
endif

libinterflop_bitmask_la_LIBADD = \
    @INTERFLOP_STDLIB_PATH@/lib/libinterflop_rng.la \
    @INTERFLOP_STDLIB_PATH@/lib/libinterflop_fma.la
if RNG_THREAD_SAFE
libinterflop_bitmask_la_CFLAGS += -DRNG_THREAD_SAFE
endif
if LINK_INTERFLOP_STDLIB
libinterflop_bitmask_la_LIBADD += @INTERFLOP_STDLIB_PATH@/lib/libinterflop_stdlib.la
endif
libinterflop_bitmask_la_includedir =$(includedir)/
include_HEADER = interflop_bitmask.h
