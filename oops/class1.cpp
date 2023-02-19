#include<iostream>
using namespace std;

class first
{
    private:
      int a,b,c;
    public:
      int e,d;
      void getdata(int a1,int b1,int c1);
      void getval()
        {
          cout<<"the value of a is"<<a<<endl;
          cout<<"the value of b is"<<b<<endl;
          cout<<"the value of c is"<<c<<endl;
          cout<<"the value of d is"<<d<<endl;
          cout<<"the value of e is"<<e<<endl; 
        }
};

void first::getdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;

}
int main()
{
    first a;
    a.d=34;
    a.e=78;
    a.getdata(1,2,3);
    a.getval();
}