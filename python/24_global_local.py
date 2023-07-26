# x=10   #global variable

# def alok():
#     x=5  #local variable
#     y=4
#     print(y)

# alok()
# print(x)

x=10   #global variable

def alok():
    global x  #through the we will update the value of x
    x=5    #local variable
    y=4
    print(y)

print(x)
alok()  #after running the function it will update the value of x
print(x)