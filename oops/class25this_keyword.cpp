#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void setdata(int a)
   // A& setdata(int a)
    {
        this->a=a;
       // return *this;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    A a;
   // a.setdata(56).display();
    a.setdata(78);
    a.display();
}