#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {
        a=0;
    }
    number(int val)
    {
        a = val;
    }
    //copy constructor
   /* number(number &obj)
    {
        a = obj.a;
    }*/
    void display()
    {
        cout << "The value is " << a << endl;
    }
};

int main()
{
    number x, y, z(55);

    x.display();
    y.display();
    z.display();
    number x1(z);
    x1.display();

}
