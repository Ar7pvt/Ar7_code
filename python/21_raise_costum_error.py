i=int(input("Enter value between 5 to 9 :"))

if(i<5 or i>9):
    raise ValueError("Enter the correct value")

print(i)