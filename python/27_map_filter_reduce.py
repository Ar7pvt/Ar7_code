#MAP

# # def cube(a):
# #    return a*a*a
# cube=lambda a:a*a*a

# print(cube(2))

# l=[1,2,3,4,5]  #creating a list
# # newl=[]  #creating an empty list

# # for item in l:
# #     newl.append(cube(item))
# # replace these above three line by
# newl=list(map(cube,l))  #it return map but we have to convert into list
# print(newl)

# #FILTER

# def filter_fun(a):
#     return a>2

# newnewl=list(filter(filter_fun,l))
# print(newnewl)


#REDUCE
from functools import reduce

number=[1,2,3,4,5,6]

sum=reduce(lambda x,y:x+y,number)
print(sum)