#include<stdio.h>

void printarray(int a[], int n)
{
     for(int i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }
     printf("\n");
}
void merge(int a[],int mid,int low,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[100];

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }

    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(high+low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,mid,low,high);

    }
}

int main()
{
    int a[]={7,8,9,4,3,5};
    int n=6;

    printarray(a,n);
    mergesort(a,0,5);
    printarray(a,n);
    return 0;
}