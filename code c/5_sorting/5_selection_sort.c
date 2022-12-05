#include <stdio.h>

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionsort(int *a,int n)
{
    int indexmin,temp;
    for(int i=0;i<n-1;i++)
    {
        indexmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[indexmin])
            indexmin=j;
        }
    temp=a[i];
    a[i]=a[indexmin];
    a[indexmin]=temp;
    }
    
}

int main()
{
    int a[]={9,7,5,4,3,8};
    int n=6;
    print(a,n);
    selectionsort(a,n);
    print(a,n);

    return 0;
}
