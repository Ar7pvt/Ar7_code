#include <iostream>
using namespace std;

class invest
{
    int principal, time, Rate;
    float rate;
    float rvalue;

public:
    invest(){};//you have to construct default constructorfor dynamic alllocation
    invest(int p, float r, int t);
    invest(int p, int R, int t);
    void display();
};

invest:: invest(int p,float r,int t)
{
    principal=p;
    rate=r;
    time=t;
    rvalue=principal;
    for(int i=0;i<t;i++)
    {
        rvalue=rvalue*(1+r);//compound interest calculated
    }

}

invest:: invest(int p,int R,int t)
{
    principal=p;
    rate=(float(R)/100);
    time=t;
    rvalue=principal;
    for(int i=0;i<t;i++)
    {
        rvalue=rvalue*(1+rate);//compound interest calculated
    }

}

void invest:: display()
{
   cout<<"The value after investment "<<rvalue<<endl;
}

int main()
{
    invest c1,c2,c3;
    int p,R,t;
    float r;
    cout<<"Enter the value of p,r,t "<<endl;
    cin>>p>>r>>t;
    c1=invest(p,r,t);
    c1.display();

    cout<<"Enter the value of p,r,t "<<endl;
    cin>>p>>R>>t;
    c2=invest(p,R,t);
    c2.display();
}