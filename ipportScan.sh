#!/bin/bash
network=192.168.50.
for host in {1..254}; do
	ping -c1 $network$host $>/dev/null;
	[ $? -eq 0 ] && echo "$network$host is up" >> file1
	for port in {23,513,137,138,139,445,2049}; do
		(echo > /dev/tcp/$network$host/$port) &>/dev/null
		[ $? -eq 0 ] && echo "Port $port is running on IP address $network$host" >> file1
	done
done
