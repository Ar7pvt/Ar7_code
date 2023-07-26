questions=[["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1],
["who will win the TATA IPL 2023 ","RR","GT","LSG","CSK","Others",1]] #10

levels=[1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,11000,12000,13000,14000,15000,16000]
money=0
for i in range(0,len(questions)):
    question=questions[i]
    print(f"\nQuestion for Rs{levels[i]}")
    print(f"1.{question[1]}          2.{question[2]}")
    print(f"3.{question[3]}          4.{question[4]}")
    print(f"       0.Quit                     ")
    reply=int(input("Enter your ans "))

    # if you want to quit
    if(reply==0):
        money=levels[i-1]
        break
    if(reply==question[6]):
        print(f"Your ans is correct you won {levels[i]}")
        if(i==4):
            money=5000
        elif(i==9):
            money=9000
        elif(i==16):
            money=16000
    else:
        print("Wrong ans ")
        break

print("you won ",money)