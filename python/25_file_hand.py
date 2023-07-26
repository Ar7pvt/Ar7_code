# video no 49 and 50  harry

#f=open('alok.txt')   # r for read a file it is also default
f=open('25_alok.txt','r')
text=f.read()
print(text)
f.close()

f=open('25_alok1.txt','w')  # it is use to write one time
f.write("my self alok raj i study in techno india university \n")
f.close()


f=open('25_alok2.txt','a')  #it is use to write every time you run # append mode
f.write("my self alok raj i study in techno india university \n")
f.close()

with open('25_alok2.txt','a')as f :
   f.write(" i study in techno india university \n")
#you not need to close it automatically close


