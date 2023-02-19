#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
      void setdata(void)
      {
        salary=144;
        cout<<"enter employee id "<<endl;
        cin>>id;
      }
      void display(void)
      {
        cout<<"The id of the employ is "<<id<<endl<<endl;
      }
};

int main()
{
    employee data[10];

    int size;

    cout<<"enter the size of array ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        data[i].setdata();
        data[i].display();
    }
}
