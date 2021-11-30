#!/bin/bash
wget -q -O /./unrandom.so https://github.com/oniy16/alx-low_level_programming/raw/master/0x17-dynamic_libraries/unrandom.so 
export LD_PRELOAD=/./unrandom.so
