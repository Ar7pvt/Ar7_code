# sets are use to store non  repeating linear data
s1={3,4,6,5,7}
s2={6,7,8}
print(s1.union(s2))
# s1.update(s2)
# print(s1,s2)

cities1={"Delhi","kolkata","chennai","mumbai"}
cities2={"Delhi","lukhnow","patna","kolkata"}


# cities3=cities1.union(cities2)
# print(cities3) # or this
# cities1.update(cities2)
# print(cities1) 

# cities3=cities1.intersection(cities2)
# print(cities3)# or this
# cities1.intersection_update(cities2)
# print(cities1) 

# cities3=cities1.symmetric_difference(cities2)
# print(cities3)  #or this
# cities1.symmetric_difference_update(cities2)
# print(cities1) 

# cities3=cities1.difference(cities2)
# print(cities3)

print(cities1.isdisjoint(cities2))

cities3={"Delhi","kolkata","chennai","mumbai","Delhi","lukhnow","patna","kolkata"}

print(cities1.issubset(cities3))
print(cities3.issuperset(cities1))

cities3.add("banglor")
print(cities3)

cities3.remove("kolkata")  # it will through error if the element is not found
print(cities3)

cities3.discard("mumbai")
print(cities3)

cities3.pop()
print(cities3)

cities3.clear()
print(cities3)

# del is use to delet entire set
#clear all element in set