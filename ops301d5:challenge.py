#!/usr/bin/python3

import subprocess
import time

one = subprocess.run(["whoami"], stdout=subprocess.PIPE, text=True)

print(one)

time.sleep(2)

two = subprocess.run(["ls"], stdout=subprocess.PIPE, text=True)

print(two)

time.sleep(2)

three = subprocess.run(["lshw", "sleep"], stdout=subprocess.PIPE, text=True)

print(three)
