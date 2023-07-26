# info={"name":"Alok","id":"3123","cgpa":"8.2"}

# print(info)
# print(info.keys())
# print(info.values())

# for key in info.keys():
#     print(f"The value corresponding to {key} is {info[key]}")


# for key,values in info.items():
#     print(f"The value corresponding to {key} is {values}")


#dictionaries method
ep1={3123:8.2,3124:8.6,3125:8.9}
ep2={3140:8.7,3141:8.9}

ep1.update(ep2)
print(ep1)

ep1.pop(3124)
print(ep1)

ep1.popitem()
print(ep1)

# ep1.clear()# it will print empty dictionary
# del ep1 # it will del entire dictionary
del ep1[3125]
print(ep1)