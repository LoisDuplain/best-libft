#!/usr/bin/env sh

echo "SOURCES ="
find sources -name '*.c' | sed 's/^/SOURCES += /'
