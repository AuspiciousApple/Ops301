#!/bin/bash

echo "=================MENU==================="

echo "1. Print Hello World"
echo "2. Ping Yourself lol"
echo "3. Give Network Info"
echo "4. Exit Menu"


read input

if [ $input -eq 1 ]; then
	sleep 1
	echo "---Hello World---" 
	sleep 2
bash whatdoyouwant.sh
fi

if [ $input -eq 2 ]; then
	sleep 1
	ping -c 3 127.0.0.1
	sleep 2
bash whatdoyouwant.sh
fi


if [ $input -eq 3 ]; then
	sleep 1
	ip a
	sleep 2
bash whatdoyouwant.sh
fi

if [ $input -eq 4 ]; then
	sleep 1
	echo "Goodbye Friend!"
	sleep 1
fi
