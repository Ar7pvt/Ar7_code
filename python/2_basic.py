#Typecasting ,User input,string

# 1. Typecasting vid 9
"""
a="1"
b="2"
print(a+b) #output 12
#explecit  manually
print(int(a)+int(b))  #output 3

#implicti automatically
a=1.23
b=7
print(a+b)

"""
#2.user input  vid 10
"""

print("Enter any value")
a=input()   #it will take user input
print(a)

a=input("Enter your name ")
print("My name is ",a)

x=input("1st no ")
y=input("2nd no ")

print(x+y)   #output=xy  because input will always take string value
print(int(x)+int(y))  #output=x+y

# we can do also
x=int(input("1st no "))
y=int(input("2nd no "))

print("The sum is ",x+y)   #output x+y

"""

#string   vid 11
"""

name="Alok"
# apple='He said, "I want to eat apple" '

#if we want to write multiple line
# apple='''He said,
# if we want to become healthy
# then
# "you have  to eat apple a day" ''' #you can use both single cotation or double both

print("Hellow,"+name)
print(apple)

#print(name[0]) #it will print the digit at index

#if we want to print multiple index
for character in name:
 print(character)

"""

# now slicing   vid 12
"""
name="Alok,Raj"

length=len(name)
print(length)
print(name[0:7])
print(name[2:7])
print(name[:5])
print(name[0:-2])
# it like  print(name[0:len(name)-2])
print(name[-6:-2])
# it like  print(name[len(name)-6:len(name)-2])


"""

#string method vid 13
#"""

a="!!!Alok,raj !!!Alok!!"
print(len(a))
print(a)
print(a.upper()) # it will create another string
print(a.lower())
print(a.rstrip("!"))

print(a.replace("Alok","Prem"))
print(a.split(" "))   # it will split string at space

b="poster Hero"
print(b.capitalize())  # it will captalize only 1st letter 

print(a.count("Alok")) # it is use to count any word

str1=" This is my basic program !! " # 29 character
print(len(str1))   
print(len(str1.center(50)))
print("The length os string from center",len(str1.center(50)))

str1= "Welcome to the consol  to !!"  #you can rewrite the string in python
print(str1.endswith("!!"))
print(str1.endswith("to",4,10))

print(str1.find("to")) #it will return the index of 1st letter
print(str1.find("toaa")) #it will return -1 if the word is not found
#print(str1.index("toaa")) #it will through error if the word is not found

str1= "Welcome to the consol  to !!" 
print(str1.isalnum())  # A-Z,a-z,0-9  due to ! it will return false

str1= "Welcometotheconsol" 
print(str1.isalpha())  # A-Z,a-z

str1="alok raj"
print(str1.islower())  # a-z

str1="ALOK RAJ"
print(str1.isupper())  # A-Z

str1="Happy new year in bengali \n "
print(str1)
print(str1.isprintable())

str1="     "
print(str1.isspace())

str1="Happy New Year In Bengali  "
print(str1)
print(str1.istitle())

print(str1.startswith("Happy"))

print(str1.swapcase())

str1="Happy new Year in bengali  "
print(str1.title())



#"""
