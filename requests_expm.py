#!/usr/bin/python3

#!/usr/bin/python3

from typing import final
import requests
import sys
import os

URL = input("What URL would you like to inquire about? (I.E https://google.com)  ")

print("If you want a Get request input a 1")
print("If you want a Post request input a 2")
print("If you want a Put request input a 3")
print("If you want a Delete request input a 4")
print("If you want a Head request input a 5")
print("If you want a Patch request input a 6")
print("If you want a Options request input a 7")

def new_func1():
    decide = input("Are you sure you want to continue with option (type_of_req) in regards to webserver (URL)?")
    return decide

decide = new_func1()

def new_func():
    type_of_req = input()
    return type_of_req

while decide == "1":


	type_of_req = new_func()
	
	if type_of_req == "1":
		get = requests.get(URL)
		print(get)
	elif type_of_req == "2":
		post = requests.post(URL)
		print(post)
	elif type_of_req == "3":
		put = requests.put(URL)
		print(put)
	elif type_of_req == "4":
		delete = requests.delete(URL)
		print(delete)
	elif type_of_req == "5":
		head = requests.head(URL)
		print(head)
	elif type_of_req == "6":
		patch = requests.patch(URL)
		print(patch)
	elif type_of_req == "7":
		options = requests.options(URL)
		print(options)

else: print("ok bye")
