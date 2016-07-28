#!/bin/sh
if [[ -z `ifconfig | grep inet | grep -v inet6 | tr -d '\t' | cut -d ' ' -f2 | tr '\t' '\n'` ]]; then
	echo "Je suis perdu!"
else
	ifconfig | grep inet | grep -v inet6 | tr -d '\t' | cut -d ' ' -f2 | tr '\t' '\n'
fi
