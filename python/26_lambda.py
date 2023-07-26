# def double(x):
#     return x*2

# print(double (5))

def alok(fx,val):
    return 6+fx(val)


#funsion name=lambda (value taken):(value returning)          
double=lambda x:x*2
cube=lambda x:x*x*x
avg=lambda x,y,z:(x+y+z)/3

print(double(5))
print(cube(3))
print(avg(3,4,5))
print(alok(cube,2))