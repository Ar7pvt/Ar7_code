#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int a1, int b1)
    {
        cout << "enter the value of a and b " << endl;
        a = a1;
        b = b1;
    }
    friend complex sumofcomplex(complex o1, complex o2);
    void display(void)
    {
        cout << "complex no is " << a << " + i" << b << endl;
    }
};

complex sumofcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex a1, b1, sum;

    a1.setdata(1, 2);
    a1.display();

    b1.setdata(3, 5);
    b1.display();

    sum = sumofcomplex(a1, b1);
    sum.display();

    return 0;
}
