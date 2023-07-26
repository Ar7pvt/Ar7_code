# for i in range(12):
#     if(i==10):
#         print("Break statement is executed")
#         break    #it will terminate the loop
#     print("5 x",i+1,"=",5*(i+1))


# for i in range(12):
#     if(i==10):
#         print("Break statement is executed")
#         continue    #it will skip the iteration
#     print("5 x",i+1,"=",5*(i+1))

i=0
while True:
    print(i)
    i=i+1
    if(i%100==0):
        break
