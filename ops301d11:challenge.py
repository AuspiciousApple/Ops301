#!/usr/bin/python3

import os

nlines = [" Brand new line 1\n", "Brand new line2\n", "Brand new line3\n", "Brand new line4\n"]

file = open("newfiletry.txt", "wb")

file = open("newfiletry.txt", "a")

with file:
	file.writelines(nlines)

file = open("newfiletry.txt", "r")

contents_line1 = file.readlines(1)

print(contents_line1)

file.close()

os.remove("newfiletry.txt")
