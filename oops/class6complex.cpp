#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:
      void setdata(int a1,int b1)
      {
        cout<<"enter the value of a and b "<<endl;
        a=a1;
        b=b1;
        
      }
    /*  void sumofcomplex(complex o1,complex o2)
      {
         a=o1.a+o2.a;
         b=o1.b+o2.b;
      }*/
     complex sumofcomplex(complex x)
     {
      complex temp;
      temp.a=a+x.a;
      temp.b=b+x.b;
      return temp;
     }
      

      void display(void)
      {
        cout<<"complex no is "<<a<<" + i"<<b<<endl;
      }
};

int main()
{
    complex a1,b1,c1;

    a1.setdata(1,2);
    a1.display();

    b1.setdata(3,5);
    b1.display();

   // c1.sumofcomplex(a1,b1);
  //  c1.display();
    c1=a1.sumofcomplex(b1);
     c1.display();

}
