#include<iostream>
using namespace std;

class employ
{
    int employid;
    static int count;

    public:
      
      void getdata(void);
      void display(void);
};

int employ::count;

void employ::getdata(void)
{
    cout<<"Enter employid "<<endl;
    cin>>employid;
    count++;
    
}
void employ::display(void)
{
    cout<<"The employ id is "<<employid<<"and employ no is "<<count<<endl;
}

int main()
{
    employ anshu,alok,akshay;

    anshu.getdata();
    anshu.display();

    alok.getdata();
    alok.display();

    akshay.getdata();
    akshay.display();

}