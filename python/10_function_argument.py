# def average(a=8,b=2):  # default argument
#     avg=(a+b)/2
#     print("The average is ",avg)


# average()

# average(9,11)

# average(a=4,b=5)

def average(*num):
    sum=0
    for i in num:
        sum=sum+i
    print("The average is ",sum/len(num))

average(2,4,6,2,9,7)

#if we want to return
def average(*num):
    sum=0
    for i in num:
        sum=sum+i
    return sum/len(num)

A=average(2,4,6,2,9,7)
print(A)

#it work like dictoniery

# def name(**name):
#     print("Hello", name["fname"],name["mname"],name["nname"])

# name(mname="Alok",nname="prem",fname="shiv")