class person:
    def __init__(self,n,o):
        print("hello ")
        self.name=n
        self.occ=o
    def info(self):
        print(f"{self.name} is a {self.occ}")

a=person("prem","Developer")
b=person("alok","designer")
a.info()
b.info()
