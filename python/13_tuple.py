countries=("Brazil","Russia","India","china","South africa")
print(countries)
temp=list(countries)
temp.append("Iran")    # add new element
#temp.pop(3)
temp[3]="saudi arebia"
countries=tuple(temp)
print(countries)


# tuple1=(0,1,2,3,8,7,3,4,9,3,5,3)

# #res=tuple1.count(3)
# #res=tuple1.index(5)     # it give variable is present in which index
# #res=tuple1.index(3,4,7)  # it gives the index of 3 between index 4 to 7
# res=len(tuple1)
# print("The no of variable is ",res)
