#!/bin/sh
touch -r bomb.txt -a -A '-000001' bomb.txt
stat -r bomb.txt | cut -d ' ' -f9
