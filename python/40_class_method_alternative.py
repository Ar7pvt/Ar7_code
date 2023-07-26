class employe:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    
    @classmethod
    def split(cls,string):
        return cls(string.split("-")[0],int(string.split("-")[1]))

e1=employe("Alok",232)
print(e1.name)
print(e1.id)

string="prem-101"
#e2=employe(string.split("-")[0],string.split("-")[1]) #we do not want to write aganin so class method is used
e2=employe.split(string)
print(e2.name)
print(e2.id)

string="shiv-501"
e2=employe.split(string)
print(e2.name)
print(e2.id)

string="Archit-511"
e2=employe.split(string)
print(e2.name)
print(e2.id)

# class method is used as a alternative of constructor