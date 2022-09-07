#!/usr/bin/python3

import subprocess
import time

time.sleep(2)

one = subprocess.run(["ip", "a"], stdout=subprocess.PIPE, text=True)

print(one)

time.sleep(2)

two = subprocess.run(["whoami"], stdout=subprocess.PIPE, text=True)

print(two)

time.sleep(2)

three = subprocess.run(["lshw", "-short"], stdout=subprocess.PIPE, text=True)

print(three)
