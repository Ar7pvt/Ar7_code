//function object (Functor)
//for extra cppreferance.com

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={2,4,5,25,10};

    //sort(arr,arr+5);//default sort in asending order
    sort(arr,arr+5,greater<int>());

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}