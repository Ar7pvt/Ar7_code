/**
#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=40,y=50;
    swapp(x,y);
    cout<<x<<"  "<<y<<endl;
}


*/
#include<iostream>
using namespace std;

template<class T1,class T2>
T2 average(T1 a,T2 b)
//float average(int a,float b)
{
    T2 ave;
    ave=(a+b)/2;
    return ave;
}

int main()
{
    float av=average(7,2.8);
    cout<<"The average is "<<av;
}
