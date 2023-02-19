#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    void setval(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void display()

    {
        cout << "Real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
/*
    complex comp;
    comp.setval(4, 89);
    comp.display();
*
    complex comp;
    complex *ptr=&comp;
    (*ptr).setval(5,56);
    (*ptr).display();
*
    complex comp;
    complex *ptr=&comp;
    ptr->setval(5,56);
    ptr->display(); 
*/
    complex *ptr=new complex;
    ptr->setval(5,56);
    ptr->display();

    //int *p=new int[10];
    complex *ptr1=new complex[2];
    ptr1->setval(7,78);
    ptr1->display();

    (ptr1+1)->setval(9,99);
    (ptr1+1)->display();


    
    return 0;
}