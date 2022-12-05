#include <stdio.h>

void print(int *a,int n)
{
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}

void insertionsort(int *a,int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>=key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
    int a[]={2,9,6,4,5,2};
    int n=6;
    print(a,n);
    insertionsort(a,n);
    print(a,n);

    return 0;
}
