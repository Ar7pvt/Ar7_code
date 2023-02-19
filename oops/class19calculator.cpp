#include<iostream>
#include<cmath>
using namespace std;

class simplecalc
{
    int a;
    int b;
    public:
    void setdatasimplecalc()
    {
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }
    void processsimplecalc()
    {
        cout<<"The value of a+b is "<<a+b<<endl;
        cout<<"The value of a-b is "<<a-b<<endl;
        cout<<"The value of a*b is "<<a*b<<endl;
        cout<<"The value of a/b is "<<a/b<<endl;

    }
};
class scientificcalc
{
    int a;
    int b;
    public:
    void setdatascientificcalc()
    {
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
    void processscientificcalc()
    {
        cout<<"The value of cos(a) is "<<cos(a)<<endl;
        cout<<"The value of sin(a) is "<<sin(b)<<endl;
        cout<<"The value of exe(a) is "<<exp(a)<<endl;
        cout<<"The value of ten(a) is "<<tan(a)<<endl;

    }
};
class hybrid:public simplecalc,public scientificcalc
{

};

int main()
{
    hybrid calc;
    calc.setdatasimplecalc();
    calc.processsimplecalc();
    calc.setdatascientificcalc();
    calc.processscientificcalc();
}