#include<iostream>
using namespace std;

template <class T>
class vector
{
    public:
    T *arr;
    int size;
    vector(int n)
    {
        size=n;
        arr= new T[size];
    }
    T dotproduct(vector &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }

};
int main()
{
    vector<float> v1(3);
    v1.arr[0]=1.4;
    v1.arr[1]=3.3;
    v1.arr[2]=0.1;
    vector<float> v2(3);
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a=v1.dotproduct(v2);
    cout<<"Dot product is "<<a;
return 0;
} 



/*
#include<iostream>
using namespace std;

class vector
{
    public:
    int *arr;
    int size;
    vector(int n)
    {
        size=n;
        arr= new int[size];
    }
    int dotproduct(vector &v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }

};
int main()
{
    vector v1(3);
    v1.arr[0]=5;
    v1.arr[1]=3;
    v1.arr[2]=1;
    vector v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a=v1.dotproduct(v2);
    cout<<"Dot product is "<<a;
return 0;
}  
 */