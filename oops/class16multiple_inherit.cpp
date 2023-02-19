#include <iostream>
using namespace std;

class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "The value of data1 is " << base1int << endl;
        cout << "The value of data2 is " << base2int << endl;
        cout << "The sum is " << base1int + base2int << endl;
    }
};

int main()
{
    derived alok;
    alok.set_base1int(45);
    alok.set_base2int(5);
    alok.display();
    return 0;
}