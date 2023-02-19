#include <iostream>
using namespace std;

class employe
{
public:
    int id;
    float salary;
    employe(int empid)
    {
        id = empid;
        salary = 34;
    }
    employe(){}
};

class programer : public employe
{
public:
    int languagecode;
    programer(int empid)
    {
        id = empid;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employe rohan(1),sohan(2);
    cout<<rohan.salary<<endl;
    cout<<sohan.salary<<endl;

    programer skill(10);
    cout<<skill.languagecode<<endl;
    cout<<skill.id<<endl;
    skill.getdata();
    return 0;
}