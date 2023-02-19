#include<iostream>
#include<math.h>
using namespace std;
//finding distance between two point
class point
{
    int x,y;

    public:
    friend int distance(point o1,point o2);

    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

int distance(point o1,point o2)
{
    int d,p,q;

    p=pow((o1.x-o2.x),2);
    q=pow((o1.y-o2.y),2);
    d=sqrt(p+q);

    return d;

}

int main()
{
    point p1(0,1);
    p1.display();

    point p2(0,6);
    p2.display();

    int d=distance(p1,p2);
    cout<<"The distance between point is "<<d<<endl;
}