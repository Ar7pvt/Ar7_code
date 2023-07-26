# class parent:
#     def parent_method(self):
#         print("This is the parent method ")

# class childclass(parent):
#     def parent_method(self):
#         print("ALok raj")
#         super().parent_method()   #it call the parent_method of base class

#     def child_method(self):
#         print("THis is the child class ")
#         super().parent_method()  #it call the parent_method of base class  
        

# c=childclass()
# c.child_method()
# c.parent_method()  #it acess the parent_method of child class
#                    #if parent_method is not exist in child class then it acess parent_method of parent class
    

class employe:
    def __init__(self,name,id):
        self.name=name
        self.id=id

class programmer(employe):
    def __init__(self,name,id,lang):
        super().__init__(name,id)
        self.lang=lang

A=employe("Alok raj",123)
b=programmer("prem",67,"c++")

print(b.name)
print(b.id)
print(b.lang)
