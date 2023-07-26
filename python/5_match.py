# this is like switch case but we can write statement in default
a=int(input("Enter any value"))
match a:
    case 0:
        print("it is in case zero")
    case 1:
        print("it is in case one")
    case 2:
        print("it is in case two")
        #default cases
    case _ if a==90:
        print(a," is  90")
    case _ if a==80:
        print(a," is  80")
    case _:
        print(a)
