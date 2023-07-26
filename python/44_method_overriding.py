# method overriding mean change in base class through derived class

class shape:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    
    def area(self):
        return(self.x*self.y)

class circle(shape):
    def __init__(self,r):
        self.r=r
        super().__init__(r,r)
    def area(self):
        return 3.14*super().area()


rec=shape(3,4)
print(rec.area())

c=circle(10)
print(c.area())