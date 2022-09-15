#!/usr/bin/python3

import psutil

psutil.cpu_times()
user = psutil.cpu_times()

print("Time spent executing user processes:"), print(user[0])

print("Time spent executing kernel processes:"), print(user[2])

print("Time spent in idle:"), print(user[3])

print("Time spent executing in priority mode"), print(user[1])

print("Time spent waiting for IO"), print(user[4])

print("Time spent servicing hardware interrupts"), print(user[5])

print("Time spent servicing software interrupts"), print(user[6])

print("Time spent by other systems running vm"), print(user[8])

print("Time spent by other systems running under linux"), print(user[9])
