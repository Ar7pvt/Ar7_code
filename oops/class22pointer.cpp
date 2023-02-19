#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *ptr=&a;
    // *ptr=999;
    cout<<"The value of a is "<<*(ptr)<<endl;

    int *p= new int(68);
    float *q=new float(57.78);
    cout<<"The value of new p is "<<*(p)<<endl;
    cout<<"The value of new q is "<<*(q)<<endl;

    int* arr=new int[3];
    arr[0]=40;
    *(arr+1)=50;
    arr[2]=60;
   // delete [] arr;
    cout<<"The value in arr are "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

}