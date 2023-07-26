class Animal:
    def __init__(self,sound,species):
        self.species=species
        self.sound=sound

    def makesound(self):
        print("The sound of the animal is")

class dog(Animal):
    def __init__(self,sound,properties):
        #Animal.__init__(self,sound,species="dog")  or
        super().__init__(sound,species="dog")
        self.properties=properties
    
    def makesound(self):
        print(f"\nThe dog is {self.sound}")
        print(f"The properties of dog is {self.properties}")

a=Animal("mew","cat")   #animal class
print(a.species)
print(a.sound)
a.makesound()

d=dog("barking","Smell")  #dog class inherit the animal class
d.makesound()