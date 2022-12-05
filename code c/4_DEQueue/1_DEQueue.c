#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
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

void enquefromrare(struct queue*q,int data)
{
    if(isfull(q))
    {
        printf("Queue is full");
    }
    else
    {
      q->r++;
      q->arr[q->r]=data;
      printf("Enque element from rare %d\n",data);
    }
}
int dequefromfront(struct queue*q)
{
    int val=-1;
    if(isempty(q))
    {
        return val;
    }
    else
    {
        q->f++;
        val=q->arr[q->f];
        return val;
    }
}

int dequefromrare(struct queue*q)
{
    int val=-1;
    if(isempty(q))
    {
        return val;
    }
    else
    {
        val=q->arr[q->r];
        q->r--;
        return val;
    }
}
void enquefromfront(struct queue*q,int data)
{
    if(q->f==-1)
    {
        printf("Queue is full from front ");
    }
    else
    {
        q->f--;
        q->arr[q->f]=data;
        printf("\nEnque element from front %d\n",data);
    }
}


int main()
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    
    enquefromrare(q,8);
    enquefromrare(q,35);
    enquefromrare(q,67);
    enquefromrare(q,87);
    enquefromrare(q,99);
    printf("\nDeque element from front %d\n",dequefromfront(q));
    printf("Deque element from front %d\n",dequefromfront(q));
    
    
    printf("\nDeque element from rare %d\n",dequefromrare(q));
    
    enquefromfront(q,300);

    return 0;
}
