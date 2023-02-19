/*
#include <iostream>
using namespace std;

class base
{
public:
    int base_data;
    void display()
    {
        cout << "The value of base data is " << base_data << endl;
    }
};

class derived : public base
{
public:
    int derived_data;
    void display()
    {
        cout << "The value of base data is " << base_data << endl;
        cout << "The value of derived data is " << derived_data << endl;
    }
};

int main()
{
    base* base_class_pionter;        //int * p;
    base obj_base;                   // int b;
    derived obj_derived;             // float d;
    base_class_pionter=&obj_derived;  //p=&d;  


    base_class_pionter->base_data=45;
   // base_class_pionter->derived_data=56;  //late binding
    base_class_pionter->display();

    derived* derived_class_pointer;
    derived_class_pointer=&obj_derived;

    derived_class_pointer->base_data=67;
    derived_class_pointer->derived_data=700;
    derived_class_pointer->display();
    return 0;
}
*/

#include<iostream>
using namespace std;

class base
{
public:
    int base_data=23;
   virtual void display()// virtual keyword
    {
        cout << "The value of base data is " << base_data << endl;
    }
};

class derived : public base
{
public:
    int derived_data=67;
    void display()
    {
        cout << "The value of base data is " << base_data << endl;
        cout << "The value of derived data is " << derived_data << endl;
    }
};

int main()
{
    base* base_class_pionter;        //int * p;
    base obj_base;                   // int b;
    derived obj_derived;             // float d;
    base_class_pionter=&obj_derived;  //p=&d;  

    base_class_pionter->display();

   
    return 0;
}