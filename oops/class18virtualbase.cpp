/* 45 video
    --------<------student------->-----
    |                                 |
    |                                 |
   test                             sports
    |                                 |
    |                                 |
    ------->------result------<--------
*/
#include <iostream>
using namespace std;

class student
{
    int rollno;

public:
    void setroll(int roll)
    {
        rollno = roll;
    }
    void displayroll()
    {
        cout << "Roll no " << rollno<<endl;
    }
};

class marks:virtual public student 
{
    protected:
    float physics;
    float maths;
    public:
    void setmarks(float m1,float m2)
    {
        physics=m1;
        maths=m2;
    }
    void displaymarks()
    {
        cout<<"Marks in physics "<<physics<<endl
            <<"Marks in maths "<<maths<<endl;
    }
};

class score:virtual public student
{
    protected:
    int score;
    public:
    void setscore(float sc)
    {
        score=sc;
    }
    void displayscore()
    {
        cout<<"The score is "<<score<<endl;
    }
};

class result: public marks,public score
{
    float total;
    public:
    void display()
    {
        total=physics+maths+score;
        displayroll();
        displaymarks();
        displayscore();
        cout<<"Total marks is "<<total<<endl;
    }
};

int main()
{
    result alok;
    alok.setroll(11);
    alok.setmarks(34.5,56.8);
    alok.setscore(8);
    alok.display();
return 0;
}