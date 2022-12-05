#include <stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct queue*q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    return 0;
}

int isfull(struct queue*q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enque(struct queue*q,int data)
{
    if(isfull(q))
    {
        printf("Queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r]=data;
        printf("Enque element %d\n",data);
    }
}

int dequeue(struct queue*q)
{
    int a;
    if(isempty(q))
    {
        return -1;
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
        return a;
    }
}

int main()
{
    struct queue*q=(struct queue*)malloc(sizeof(struct queue));
    q->size=20;
    q->r=q->f=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    
    enque(q,23);
    enque(q,20);
    printf("Dequing element %d\n",dequeue(q));

    return 0;
}