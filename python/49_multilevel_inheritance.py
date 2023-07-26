class Animal:
    def __init__(self,name,species):
        self.name=name
        self.species=species
    def show(self):
        print(f"Name: {self.name}")
        print(f"species: {self.species}")

class dog(Animal):
    def __init__(self,name,breed):
        Animal.__init__(self,name,species="dog")
        self.breed=breed

    def show(self):
        Animal.show(self)
        print(f"breed: {self.breed}")

class streetdog(dog):
    def __init__(self,name,color):
        dog.__init__(self,name,breed="streetdog")
        self.color=color

    def show(self):
        dog.show(self)
        print(f"color: {self.color}")

o=streetdog("Tony","Black")
o.show()

print(streetdog.mro())