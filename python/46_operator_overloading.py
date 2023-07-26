class vector:
    def __init__(self,x,y,z):
        self.x=x
        self.y=y
        self.z=z
    
    def __str__(self):
        return f"{self.x}i + {self.y}j + {self.z}k "
    
    def __add__(self,a):   #if same add function is written in derived class then it is called operator overloading
        return vector(self.x+a.x ,self.y+a.y ,self.z+a.z)
    
v1=vector(2,3,4)
print(v1)  #it call str function

v2=vector(11,10,9)
print(v2)

print(v1+v2)
print(type(v1+v2))  # it print the type