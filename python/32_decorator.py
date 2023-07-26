def greet(fx):
    def mfx(*args,**kwargs):   #*args and **kwargs is use for passing arguments
        print("good morning")
        fx(*args,**kwargs)
        print("THanks for using this function")
    return mfx

@greet
def hello():
    print("Hellow world")

@greet
def add(a,b):
    print(a+b)

#greet(hello)()
hello()

#greet(add)(1,2)
add(1,2)