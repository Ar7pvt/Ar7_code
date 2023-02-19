#include<iostream>
using namespace std;

template <class T1,class T2>
class firstry
{
    public:
    T1 data1;
    T2 data2;
    firstry(T1 x,T2 y)//constructor
    {
        data1=x;
        data2=y;
    }
    void display()
    {
        cout<<data1<<endl;
        cout<<data2<<endl;
    }
};

int main()
{
    firstry <float,char> v1(9.3,'A');
    v1.display();
   // firstry <int,char> v3(3,'a');
    //v3.display();
return 0;
}