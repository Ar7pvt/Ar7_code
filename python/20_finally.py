# try:
#     a=[2,4,6,7]
#     i=input("Enter any index ")
#     print(a[i])
# except:
#     print("some error occure ")

# finally:
#     print("It will always executed ")

# print("it will always executed ")

def func():
   try:
      a=[2,4,6,7]
      i=int(input("Enter any index "))
      print(a[i])
      return 1
   except:
      print("some error occure ")
      return 0

   finally:
      print("It will always executed ") #it will execute even after return statement is there
   #print("it will always executed ") 

x=func()
print(x)