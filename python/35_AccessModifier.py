# # class programer:
# #     def __init__(self):
# #         self.name="alok"

# # a=programer()
# # print(a.name)  #in python by default every thing is public

# # if want to make private then

# class programer:
#     def __init__(self):
#         self.__name="alok"

# a=programer()
# # print(a.__name) # it cant access private data but
# print(a._programer__name)   #but it can acess the private data indirectly call "Name mangling "

# #print(a.__dir__())  #print(dir(a))  #these are attributes which can acess private


class student:
    def __init__(self):
      self._name="ALOK"
    
    def _func(self):  # protected method
       return "Alok raj "
    
class subject(student):
   pass

obj=student()
obj1=subject()

print(obj._name)
print(obj._func())   #but is directly acess because it is use as convensition

print(obj1._name)
print(obj1._func())