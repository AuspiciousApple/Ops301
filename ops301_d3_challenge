#!/bin/bash

echo "Desired Directory?"

read directory

sleep 2

echo "Desired Privileges?"

read entry

chmod -R $entry $directory 

ls -l $directory

cd $directory

exec bash
