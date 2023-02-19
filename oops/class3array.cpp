#include<iostream>
using namespace std;

class shop
{
    int itemno[100];
    int price[100];
    int count;

    public:
      void counter(void)
      {
        count=0;
      }
      void getdata(void);
      void display(void);
};
void shop::getdata(void)
{
    cout<<"Enter itemno"<<endl;
    cin>>itemno[count];
    cout<<"enter price"<<endl;
    cin>>price[count];
    count++;
}
void shop::display(void)
{
    for(int i=0;i<count;i++)
    {
        cout<<"The price of item "<<itemno[i]<<" is "<<price[i]<<endl;
    }
}

int main()
{
    shop product;

    product.counter();
    product.getdata();
    product.getdata();
    product.getdata();

    product.display();
}