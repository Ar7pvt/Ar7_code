class library:
    def __init__(self):
        self.noofbooks=0
        self.books=[]
    
    def addbook(self,book):
        self.books.append(book)
        self.noofbooks=len(self.books)
    
    def showinfo(self):
        print(f"the no of books is {self.noofbooks} and the books are ")
        for book in self.books:
            print(book)

l1=library()
l1.addbook("premchand")
l1.addbook("travel")
l1.addbook("space")
l1.showinfo()
