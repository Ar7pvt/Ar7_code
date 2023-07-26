"""

print("WELCOME TO THE SECRET MESSAGE ENCODER AND DECODER\n")

inp1=list(input("Enter your message "))
inp22=input("Type whether to Encode or Decode? ")

inp2=inp22.capitalize()    #it turn 1st letter into capital
if inp2=="Encode" :
    print("Message encoding have been started!!")
    if len(inp1)>=3 :
       inp1.append(inp1[0])  # it add 1st letter at end
       inp1.remove(inp1[0])  #  it remove 1 st letter
       inp1.append("*")      # adding * at end
       inp1.append("9")      
       inp1.append("-")
       inp1.insert(0,"1")    #add 1 at index 0
       inp1.insert(0, "7")
       inp1.insert(0, "+")
       print(''.join(inp1))   # through join  +71loka*9-  if input alok
       #print(inp1)    ['+', '7', '1', 'l', 'o', 'k', 'a', '*', '9', '-']
    else :
        inp1.reverse()
        print("".join(inp1))
elif inp2=="Decode" :
    print("Message decoding have been started!!")
    if len(inp1) >= 3:
        inp1.remove(inp1[0])   #remove from index 0
        inp1.remove(inp1[0])
        inp1.remove(inp1[0])
        inp1.pop()
        inp1.pop()             # remove from endre
        inp1.pop()
        inp1.insert(0, inp1[-1])
        inp1.pop()
        print(''.join(inp1))
    else:
        inp1.reverse()
        print(''.join(inp1))
        #print(inp1)


"""
# harry soln
import string
import random
st = input("Enter message")
words = st.split(" ")

coding = input("1 for coding and 0 for decoding")
coding=True if (coding=='1') else False
if (coding):
    nwords = []
    for word in words:
        if (len(word) >= 3):
            r1 = ''.join(random.choices(string.ascii_lowercase+string.digits,k=3))   #"dsf"
            r2 = "jkr"
            #    random word+ add word from index 1 to last+ add word at index 0+ add random word
            stnew = r1 + word[1:] + word[0] + r2
            nwords.append(stnew)

        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))
else:
    nwords = []
    for word in words:
        if (len(word) >= 3):
           
            stnew =  word[3:-3]
            stnew=stnew[-1]+stnew[:-1] 
            nwords.append(stnew)

        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))