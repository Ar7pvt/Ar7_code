#list
l=[2,4,"Alok",6,7,True]

print(l)
# print(l[0])
# print(l[1])
# print(l[2])
# print(l[3])

if "Alok" in l:
    print("yes")
else:
    print("no")


# you can use this in string also
# if "lok" in "Alok":
#     print("yes")
# else:
#     print("no")

print(l[:])
print(l[1:5])
print(l[0:5:2])
print("\n")

lst=[i for i in range(4)]
print(lst)

lst=[i*i for i in range(4)]
print(lst)

lst=[i*i for i in range(8) if i%2==0]
print(lst)