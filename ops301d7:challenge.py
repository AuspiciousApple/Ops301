#!/bin/python3

import os

pop = input("Specify your directory: ")

def popfunc(pop2):

	for root, dirs, files in os.walk(pop):


		print(root)
		print(files)
		print(dirs)
	
popfunc(pop)
