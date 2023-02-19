#include<iostream>
using namespace std;

class student
{
    int roll;
    public:
    void setroll(int);
    void getroll(void);
};

void student::setroll(int no)
{
    roll=no;
}

void student ::getroll()
{
    cout<<"The roll no is "<<roll<<endl;
}

class marks:public student
{
    protected:
    float physics;
    float maths;
    public:
    void setmarks(float,float);
    void getmarks();

};
void marks::setmarks(float m1,float m2)
{
    physics=m1;
    maths=m2;
}
void marks::getmarks()
{
    cout<<"The marks in physics is "<<physics<<endl;
    cout<<"The marks in maths is "<<maths<<endl;
}

class exam:public marks
{
    public:
    void display()
    {
        getroll();
        getmarks();
        cout<<"The percentage is "<<(physics+maths)/2<<"%"<<endl;
    }
};

int main()
{
    exam s1;
    s1.setroll(45);
    s1.setmarks(98,94);
    s1.display();
}