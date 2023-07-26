import threading 
import time
from concurrent.futures import ThreadPoolExecutor

def func(seconds):
    print(f"sleeping for {seconds} seconds")
    time.sleep(seconds)
    return seconds

def main():
    time1=time.perf_counter()
    # it run one by one

    # func(4)
    # func(2)
    # func(1)
    # time2=time.perf_counter()     # it is use to calc time
    # print(time2-time1)


    # # and if we want to run parallel
    t1=threading.Thread(target=func,args=[4])
    t2=threading.Thread(target=func,args=[2])
    t3=threading.Thread(target=func,args=[1])

    t1.start()
    t2.start()
    t3.start()
    # it print the starting time and if we want to print execution time
    t1.join()
    t2.join()
    t3.join()

    time2=time.perf_counter()
    print(time2-time1)

def poolingDemo():
    with ThreadPoolExecutor() as executor:   #this is executed from concurrent future  link--  https://docs.python.org/3/library/concurrent.futures.html
        # future1 = executor.submit(func,3)
        # future2 = executor.submit(func,2)
        # future3 = executor.submit(func,4)
        # print(future1.result())
        # print(future2.result())
        # print(future3.result())

        # another method
        l=[3,4,1,5]
        results=executor.map(func,l)
        for result in results:
            print(result)   

poolingDemo()