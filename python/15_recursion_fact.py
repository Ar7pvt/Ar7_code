#Factorial of no
def factor(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factor(n-1)

print(factor(5))