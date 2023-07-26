class person:
    name="alok"
    occupation="student"
    income=0

    def info(self):
       print(f"{self.name} is a {self.occupation}")

a=person()
b=person()
c=person()

a.name="akshay"
a.occupation="developer"

b.name="prem"
b.occupation="creator"

a.info()
b.info()
c.info()