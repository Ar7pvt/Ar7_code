#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
/*
int isfull(struct node*n)    
{
   if(n==NULL)      //if inserted element is null mean element is not inserted mean full 
   {
       return 1;
   }
   return 0;
}

int isempty(struct node*r)
{
    if(r==NULL)
    {
        return 1;
    }
    return 0;
}
*/

struct node*r;
struct node*f;

void enque(int val)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->next=NULL;
        n->data=val;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}
int deque()
{
    int val=-1;
    struct node*ptr=f;
    if(f==NULL)
    {
        printf("queue is empty"); //empty
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
        
    }
    return val;
}

void display(struct node*p)
{
    printf("Element in queue are \n");
    while(p!=NULL)
    {
        printf("Element %d\n",p->data);
        p=p->next;
    }
}

int main()
{
    
    enque(8);
    enque(30);
    enque(20);
    enque(36);
    display(f);
    printf("Dequed element are %d\n",deque());
    display(f);
    

    return 0;
}

