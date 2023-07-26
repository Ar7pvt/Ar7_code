# a=[2,4,5]
# print(dir(a))
# print(a.__add__)

class person:
    def __init__(self,name,id):
        self.name=name
        self.id=id

a=person("alok",902)
print(a.__dict__)  #dictionary

print(help(person))