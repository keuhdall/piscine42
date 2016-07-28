ldapsearch -xLL "(cn=z*)" cn | grep "^cn" | sort -rf | cut -d ":" -f2 | sed -e 's/^ //'
