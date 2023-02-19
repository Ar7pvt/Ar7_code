#include <iostream>
using namespace std;

class marks
{
    int a;
    int b;

public:
    //marks(int i, int j) : a(i), b(j)
    //marks(int i,int j):b(j),a(b+i)// it gives garbage value because we first define a then b
    marks(int i,int j):a(i),b(a+j)
    {
        cout << "the value of a and b is " << a << " " << b << endl;
    }
};

int main()
{
    marks m1(7,8);
}