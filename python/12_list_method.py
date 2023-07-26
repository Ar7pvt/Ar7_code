l=[23,9,7,78,3,5,20]
print(l)

l.append(3)  #add any element in the list
#l.sort()      #sort the list
#l.sort(reverse=True)  #sort in decending order
#l.reverse()
print(l.count(3))  #count any element in list
print(l.index(3))  # it give index 

# m=l.copy()
# m[0]=0
# print(m)

l.insert(1,900)

m=[800,900,1000]
#l.extend(m)
k=l+m
print(k)
print(l)
