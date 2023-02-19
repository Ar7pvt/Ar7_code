// member function template;
/*
#include <iostream>
using namespace std;

template <class T>
class alok
{
public:
    T a;

    alok(T x)
    {
        a = x;
    }
    void display();
};

template<class T>
void alok<T>:: display()
{
    cout << "The value of a is " << a << endl;
}

int main()
{
    alok<int> a1(4);
    a1.display();
    cout << endl;

    return 0;
}

*/

//template overloading

#include<iostream>
using namespace std;

void fun(int a)
{
    cout<<"the value of a is "<<a<<endl;
}

template<class T>
void fun(T a)
{
    cout<<"the value of a is "<<a<<endl;
    
}

int main()
{
    char a='A';
    fun(a);
}