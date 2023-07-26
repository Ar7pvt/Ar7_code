import random

def check(comp,user):
    if(comp==user):
        return 0
    elif(comp==0 & user==1):
        return 1
    elif(comp==1 & user==2):
        return 1
    elif(comp==2 & user==0):
        return 1
    return -1

comp=(random.randint(0,2))
user=int(input("0 for stone, 1 for paper, 2 for scissor  "))

score=check(comp,user)
print("comp= ",comp)
print("user=",user)

if(score==0):
    print("draw")
elif(score==1):
    print("You won ")
else:
    print("you lose")