#!/bin/sh
cat annuaire | cut -d\t -f1 | grep -i "nicolas\tbomber" | cut -f3 | grep -o '[\(\)\.0-9\-]\+'
