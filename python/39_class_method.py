class employe:
    company="AR7"  #class variable
    def show(self):
        print(f"THe name is {self.name} and company is {self.company}")

    #  #it change company name for instance but if we want to print company again then it show AR7
    # def changecompany(cls,newcompany):  # in place of cls you can use any thing like self
    #     cls.company=newcompany
    
    @classmethod   #it hehp change in class method
    def changecompany(cls,newcompany):  # in place of cls you can use any thing like self
        cls.company=newcompany

e1=employe()
e1.name="Alok"
e1.show()
e1.changecompany("TATA")
e1.show()   
print(employe.company)   #print(e1.company)