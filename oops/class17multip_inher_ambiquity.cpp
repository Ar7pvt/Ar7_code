#include <iostream>
using namespace std;

class base1
{

public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};

class base2
{

public:
    void greet()
    {
        cout << "good morning " << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet()//in both base1 and base2 there is same function greet so compiler will confuse to call
               //the function so it gives ambibuity error
    {
        base1::greet();//ambibuity defined
    }
};

int main()

{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
}