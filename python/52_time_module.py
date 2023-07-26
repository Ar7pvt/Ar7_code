import time

# def usingwhile():
#     i=0
#     while(i<5000):
#         print(i)
#         i=i+1
# def usingfor():
#     for i in range(5000):
#         print(i)

# init = time.time()   # it calculate time after 1970 in second
# usingfor()
# p=time.time()-init     #it calc time after for loop - time after 1970 in second

# init = time.time()
# usingwhile()
# print(time.time()-init)  #for while
# print(p)     # for for



# print("Alok")
# time.sleep(4)     # it stop time for 4 sec
# print("THis is printed after 4 sec")


t=time.localtime()
formatted_time=time.strftime("%Y-%m-%d %H:%M:%S",t)  # it calc local time

print(formatted_time)