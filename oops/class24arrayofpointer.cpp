#include<iostream>
using namespace std;

class shop
{
    int id;
    float price;
    public:
    void setdata(int a,float b)
    {
        id=a;
        price=b;
    }
    void display()
    {
        cout<<"The id is "<<id<<endl;
        cout<<"The price is "<<price<<endl;
    }
};

int main()
{
    int size,id;
    float price;
    cout<<"Enter the size ";
    cin>>size;

    shop *ptr=new shop[size];
    shop *ptr1=ptr;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter id and price ";
        cin>>id>>price;
        ptr->setdata(id,price);
        ptr++;
    }
    for(int i=0;i<size;i++)
    {
        ptr1->display();
        ptr1++;
    }

}