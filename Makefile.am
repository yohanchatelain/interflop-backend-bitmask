ACLOCAL_AMFLAGS=-I m4

lib_LTLIBRARIES = libinterflop_bitmask.la
libinterflop_bitmask_la_SOURCES = \
    interflop_bitmask.c \
    @INTERFLOP_STDLIB_PATH@/include/interflop-stdlib/iostream/logger.c \
    @INTERFLOP_STDLIB_PATH@/include/interflop-stdlib/common/options.c
libinterflop_bitmask_la_CFLAGS = -DBACKEND_HEADER="interflop_bitmask" -fno-stack-protector -fPIC -O3
if WALL_CFLAGS
libinterflop_bitmask_la_CFLAGS += -Wall -Wextra -Wno-varargs
endif
libinterflop_bitmask_la_LIBADD = @INTERFLOP_STDLIB_PATH@/lib/libinterflop_rng.la
if LINK_INTERFLOP_STDLIB
libinterflop_bitmask_la_LIBADD += @INTERFLOP_STDLIB_PATH@/lib/libinterflop_stdlib.la
endif
libinterflop_bitmask_la_includedir =$(includedir)/
libinterflop_bitmask_la_HEADER = interflop.h interflop_stdlib.h
    

