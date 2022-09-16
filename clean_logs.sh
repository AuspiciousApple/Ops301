#!/bin/bash

#Fabio Alvarez
#Log cleaner
#Last revised: Sep 2, 2022
#This script was made to clean log files
#Variables

poop=/var/log/syslog
Pi=/dev/null
Alpha=/var/log/wtmp
Angels=/home/fabs/.bash_history
mouse=/var/log/auth.log

#This script uses no functions

#Main

cat $poop
sudo cat $Pi > $poop

cat $Alpha
sudo cat $Pi > $Alpha

cat $Angels
sudo cat $Pi > $Angels

cat $mouse
sudo cat $Pi > $mouse

du -h $poop
du -h $Alpha
du -h $Angels
du -h $mouse





#End
