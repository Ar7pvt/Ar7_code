class employe:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    
    def showdetail(self):
        print(f"The name of employ is {self.name} and id is {self.id}")

class programer(employe):
    def language(self):
        print("The default language is python ")
       
e1=employe("Alok","102")
e1.showdetail()
e2=programer("Akshay","103")
e2.showdetail()
e2.language()