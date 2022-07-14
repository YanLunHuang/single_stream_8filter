#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/YL_HUANG/7_8/8_filter/read_from_weight_h/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
