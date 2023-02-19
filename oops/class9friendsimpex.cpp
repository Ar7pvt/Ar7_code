#include<iostream>
using namespace std;

class y;
class x
{
    int val1;
    friend void exchanging(x &,y &);
   
    public:
      void intdata(int data)
      {
        val1=data;
      }
      void display()
      {
        cout<<"the value after exchanging is "<<val1<<endl;
      }
};

class y
{
    int val2;
    friend void exchanging(x &,y &);

    public:
      void intdata(int data)
      {
        val2=data;
      }
      void display()
      {
        cout<<"the value after exchanging is "<<val2<<endl;
      }
};

void exchanging(x &a,y &b)
{
    int temp;
    temp=a.val1;
    a.val1=b.val2;
    b.val2=temp;

}

int main()
{
    x t1;
    y t2;

    t1.intdata(34);
    t2.intdata(89);

    exchanging(t1,t2);

    t1.display();
    t2.display();

    return 0;
}