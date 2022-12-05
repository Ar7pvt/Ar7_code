#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("element %d\n",p->data);
        p=p->next;
    }
}
int isEmpty(struct node*p)
{
    if(p==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct node*p)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}

struct node* push(struct node*p,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("stack overflow ");
    }
    else{
    n->data=val;
    n->next=p;
    p=n;
    return p;
    }
}
int peek(struct node*p,int pos)
{
    struct node*a=p;
    for(int i=0;(i<pos-1&&a!=NULL);i++)
    {
       a=a->next; 
    }
    if(a!=NULL)
    {
        return a->data;
    }
    return -1;
}

int isTop(struct node*p)
{
    return p->data;
}
int isbottom(struct node *p)
{
    struct node*a=p->next;
    while(a!=NULL)
    {
        a=a->next;
        p=p->next;
    }
    return p->data;
}
int main()
{
    struct node* p;    //we can also declare this as global variable
    p=push(p,34);
    p=push(p,35);
    p=push(p,50);
    p=push(p,52);
    
    
    print(p);
    for(int i=1;i<=4;i++){
    printf("The value at %d is %d\n",i,peek(p,i));
    }
    
    printf("The top most element is %d \n",isTop(p));
    printf("The bottom element is %d \n",isbottom(p));
    
    printf("isEmpty=%d",isEmpty(p));
    printf("\nisFull=%d",isFull(p));
    

    return 0;
}

