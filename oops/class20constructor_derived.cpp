#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
    base1(int a)
    {
        data1=a;
        cout<<"Constructor of base1 is called "<<endl;
    }
    void display1()
    {
        cout<<"The value of base 1 is "<<data1<<endl;
    }
};

class base2
{
    int data2;
    public:
    base2(int a)
    {
        data2=a;
        cout<<"Constructor of base1 is called "<<endl;
    }
    void display2()
    {
        cout<<"The value of base 1 is "<<data2<<endl;
    }
};

class derived: public base1,public base2
{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1( a),base2( b)
    {
        derived1=c;
        derived2=d;
    }
/*
    void display()
    {
        base1::display();
    }
*/
    void displayderived()
    {
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main()
{
    derived alok(5,6,7,8);
    alok.display1();
    alok.display2();
    alok.displayderived();

}