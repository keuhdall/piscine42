#!/bin/sh
echo "$FT_NBR1 + $FT_NBR2" | tr "mrdoc" "01234" | tr "\'\\" "01" | tr "\"\?\!" "234" | awk '{print "obase=13;ibase=5;"$1"+"$3}' | bc | tr "0123456789ABC" "gtaio luSanemf"
