#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};
void display(struct node*head)
{
    struct node*ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
}
struct node* insertatfirst(struct node* head,int key)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head->next;
    ptr->data=key;
    while(p->next!=head)
    {
        p=p->next;
    }
   /* ptr->next=p->next; */ ptr->next=head;
    p->next=ptr;
    //head=ptr;   
    //return (head);
    return(ptr);
}

struct node* insertatindex(struct node* head,int index)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    int i=0;
    struct node* p=head->next;
   
    while(i!=index-2)    //(i<index-2) //index-2 because p=head->next
    {                                 //index-1  if p=head
        p=p->next;
        i++;
    }
    ptr->data=90;
    ptr->next=p->next;
    p->next=ptr;
    
    return(head);
}
struct node* insertatend(struct node* head,int key)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    
    struct node* p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    ptr->data=key;
    ptr->next=p->next;
    p->next=ptr;
    
    
    return(head);
}
struct node* insertafternode(struct node* head,struct node*prenode,int key)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
   ptr->data=key; 
   ptr->next=prenode->next;
   prenode->next=ptr;
    
    
    return(head);
}

int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* forth=(struct node*)malloc(sizeof(struct node));
    
    (*head).data=6;
    (*head).next=second;
    
    second->data=7;
    second->next=third;
    
    third->data=9;
    third->next=forth;
    
    forth->data=5;
    forth->next=head;
    
    printf("circular linklist before insertion ");
    display(head);
    head=insertatfirst(head,56);
    head=insertatindex(head,2);
    head=insertatend(head,81);
    head=insertafternode(head,second,45);
    printf("\ncircular linklist after insertion ");
    display(head);
    
    return 0;
}

