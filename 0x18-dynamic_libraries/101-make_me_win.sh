#!/bin/sh
echo -e '#include <stdio.h>\n#include <stdlib.h>\nint rand(void) { return 6; }' > /tmp/libfake.so.c
gcc -shared -o /tmp/libfake.so /tmp/libfake.so.c
export LD_PRELOAD=/tmp/libfake.so
