#!/bin/bash
user=$UID # capturing the user (value would be 0 if the user is root)

if [ $user -ne 0 ]; then
	echo -e "\033[31mSorry this software is only for root user!!"
#	echo -e "\033[30mHello"
else 
	echo "executing the makefile commands as a root user :p"
	mknod bluetoothDongle c 
	make
fi
