#!/usr/bin/env sh

find sources -name '*.c' | sed 's/^/SRCS += /'
