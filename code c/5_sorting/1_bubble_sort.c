#include<stdio.h>

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
}
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        printf("Working on pass no %d \n",i+1);
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
}
void bubblesortadaptive(int a[],int n)
{
    int temp;
    int issorted=0;
    for(int i=0;i<n-1;i++)
    {
        issorted=1;
        printf("Working on pass no %d \n",i+1);
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issorted=0;
            }

        }
        if(issorted)
        {
            return;
        }
    }
}

int main()
{
    int a[]={9,8,5,6,3,2,9};
    int n=7;

    printarray(a,n);
    bubblesort(a,n);
    printarray(a,n);
    bubblesortadaptive(a,n);
    printarray(a,n);
}