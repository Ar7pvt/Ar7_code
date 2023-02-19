#include<iostream>
using namespace std;

class complex;

class calculator
{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex);
};

class complex
{
    int a,b;

    friend class calculator;

    public:
    void setnum(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    void printarray(void)
    {
        cout << "complex no is " << a << " + i" << b << endl;
    }
};

int calculator::sumrealcomplex(complex o1,complex o2)
{
    return(o1.a+o2.a);
}
int calculator::sumcompcomplex(complex o1,complex o2)
{
    return(o1.b+o2.b);
}

int main()
{
    complex o1,o2;
    o1.setnum(1,4);
    o2.setnum(5,7);

    calculator calc;
    int res=calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part is "<<res<<endl;
    int resc=calc.sumcompcomplex(o1,o2);
    cout<<"the sum of comp part is "<<resc<<endl;

    return 0;

}
