class math:
    def __init__(self,num):
        self.num=num
    
    def addition(self,n):
        self.num=self.num+n
    
    @staticmethod
    def add(a,b):
        return a+b

a=math(5)
print(a.num)
a.addition(9)
print(a.num)

print(a.add(8,9))
print(math.add(7,8))