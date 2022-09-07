#!/bin/bash

echo "Starting Script"

sleep 3

today=$(date +%d%m%Y-%I:%M)

echo "Today is" $today

sleep 2

echo "Syslog Copying"

cp /var/log/syslog ~/Desktop/

sleep 2
 
echo "syslog is appending"

mv ~/Desktop/syslog syslog.$today

sleep 2

echo "done :)"

sleep 1
