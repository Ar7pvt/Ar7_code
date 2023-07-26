class employe:
    companyname="Ar7"
    noofemploye=0
    def __init__(self,name):
        self.name=name
        self.raiseamount=0.5
        employe.noofemploye+=1
    def showdetail(self):
        print(f"The name of the employe is {self.name} and raise amount is {self.noofemploye} sized {self.companyname} is {self.raiseamount}")

emp1=employe("Alok")
emp1.raiseamount=0.9
emp1.companyname="AR7 india "
emp1.showdetail()

employe.companyname="google"
print(employe.companyname)

emp2=employe("Anshu")
emp2.companyname="TAta"
emp2.showdetail()