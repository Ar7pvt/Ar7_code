#include <stdio.h>
#include <stdlib.h>

struct queue 
{
    int size;
    int r;
    int f;
    int *arr;
};
int isfull(struct queue*q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue*q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue*q,int val)
{
    if(isfull(q))
    {
        printf("queue is full \n");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("Enqued val=%d\n",val);
        
    }
}
int deque(struct queue*q)
{
    int a;
    if(isempty(q))
    {
        return -1;
    }
    else
    {
       q->f=(q->f+1)%q->size;
       a=q->arr[q->f];
       return a;
    }
}

int main()
{
    struct queue*q=(struct queue*)malloc(sizeof(struct queue));
    q->size=5;//you can insert 4 element because 0 index is taken by f and r
    q->r=q->f=0;
    q->arr=(int*)malloc(q->size * sizeof(int));
    
    enqueue(q,21);
    enqueue(q,8);
    enqueue(q,81);
    enqueue(q,25);
     enqueue(q,5);
    
    printf("popped value=%d\n",deque(q));
    printf("popped value=%d\n",deque(q));
    printf("popped value=%d\n",deque(q));
    printf("popped value=%d\n",deque(q));

    enqueue(q,2);
    if(isfull(q))
    {
        printf("queue is full");
    }
    if(isempty(q))
    {
        printf("queue is empty");
    }
    return 0;
}