"""
import time
timestamp=time.strftime('%H:%M:%S')
print(timestamp)

timestamp=int(time.strftime('%H'))
print(timestamp)

timestamp=int(time.strftime('%M'))
print(timestamp)

timestamp=int(time.strftime('%S'))
print(timestamp)

"""

import time
timestamp=time.strftime('%H:%M:%S')
print(timestamp)

hour=int(time.strftime('%H'))

if(4<=hour<12):
    print("Good morning ")
elif(12<=hour<16):
    print("Good afternoon ")
elif(16<=hour<21):
    print("Good evening ")
else:
    print("Good neight ")

