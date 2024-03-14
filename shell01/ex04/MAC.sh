ifconfig | grep ether | tr -d '	' | cut -f 10 -d ' '
