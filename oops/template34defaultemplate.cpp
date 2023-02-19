#include<iostream>
using namespace std;

template<class T1=int,class T2=float ,class T3=char>//default
//template<class T1,class T2 ,class T3>//parametrised
class alok
{
    public:
    T1 a;
    T2 b;
    T3 c;
    alok(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }

};

int main()
{
    alok<> a1(4,5.6,'A');//default
    a1.display();
    cout<<endl;

    alok<float,char,double> a2(4.0,'R','A');//parametrised
    a2.display();

return 0;
}