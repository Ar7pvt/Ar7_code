class student:
    def __init__(self,name):
        self.name=name

    def show(self):
        print(f"The name of student is {self.name}")

class singer:
    def __init__(self,song):
        self.name=song

    def show(self):
        print(f"The name of song is {self.song}")

class studentsinger(student,singer):   #if student is first then show of student is called
    def __init__(self,name,song):
        self.name=name
        self.song=song

o=studentsinger("prem ","daspacito")
print(o.name)
print(o.song)
o.show()
print(studentsinger.mro())  