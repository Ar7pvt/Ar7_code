import time
# import functools

# @functools.lru_cache(maxsize=None)
from  functools import lru_cache

@lru_cache(maxsize=None)
def fib(n):
    time.sleep(5)
    return n*5

print(fib(20))
print("Done for previous") # it run this program

print(fib(2))
print("Done for previous")  # it run this program

print(fib(10))
print("Done for previous") # it run this program



print(fib(20))
print("Done for previous")  # it automatically execute because of cache

print(fib(2))
print("Done for previous")  # it automatically execute

print(fib(10))
print("Done for previous")   # it automatically execute

print(fib(12))
print("Done for previous")  # it run this program
