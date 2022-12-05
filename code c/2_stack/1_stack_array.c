#include <stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int*arr;
};
int isEmpty(struct stack*p)
{
    if(p->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack*p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack*p,int val)
{
    if(p->top==p->size-1)
    {
        printf("stack overflow %d can not be inserted ",val);
    }
    else
    {
        p->top++;
        p->arr[p->top]=val;
    }
}
void pop(struct stack*p)
{
    if(isEmpty(p))
    {
        printf("stack is empty");
    }
    else
    {
       int val=p->arr[p->top];
        p->top--;
        printf("\n%d is poped",val);
    }
}

int peek(struct stack*p,int i)
{
    if(p->top-i+1<0)
    {
        printf("Not valid position ");
        return -1;
    }
    else
    {
        return (p->arr[p->top-i+1]);
    }
}
int isTop(struct stack*a)
{
    return (a->arr[a->top]);
}
int isBottom(struct stack*a)
{
    return (a->arr[0]);
}


int main()
{
    struct stack*p=(struct stack*)malloc(sizeof(struct stack));
    p->size=20;
    p->top=-1;
    p->arr=(int*)malloc(p->size*sizeof(int));
    
    
    printf("Before insertion isEmpty %d",isEmpty(p));
    printf("\nAfter insertion isFull %d",isFull(p));
    push(p,34);
    push(p,3);
    push(p,4);
    push(p,79);
    push(p,76);
    push(p,36);
    push(p,89);
    push(p,90);
    
    pop(p);
    pop(p);
    
    printf("\nBefore insertion isEmpty %d",isEmpty(p));
    printf("\nAfter insertion isFull %d",isFull(p));
    
    for(int i=1;i<=p->top+1;i++)
    {
        printf("\nThe value of position %d is %d",i,peek(p,i));
    }
    
    printf("\nisTop=%d",isTop(p));
    printf("\nisBottom=%d",isBottom(p));

    return 0;
}
