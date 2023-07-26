#generator does not store value it generate value on the fly,this makes generator powerful

def my_generator():
    for i in range(5000):
        yield i   # yield return a value from generator and suspends the execution of the function until next value is executed

gen=my_generator()
# print(next(gen))
# print(next(gen))
# print(next(gen))

for j in gen:
    print(j)