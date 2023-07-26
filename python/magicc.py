# half part of file 43 that is main function

class employe:
    def __init__(self,name):
        self.name=name

    def __len__(self):
        i=0
        for c in self.name:
            i=i+1
        return i
    def __str__(self):
        return f"The name of the employe is {self.name} str"
    
    def __repr__(self):
        return f"The name of the employe is {self.name} repr"
    
    def __call__(call):
        print("This is good place to code ")