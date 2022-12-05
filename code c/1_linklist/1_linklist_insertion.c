#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int print(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertatfirst(struct node* head,int val)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=val;
    return ptr;
}
struct node* insertatindex(struct node* head ,int data,int index)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    int i=0;
    struct node* p=head;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* insertatend(struct node* head,int val)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    int i;
    struct node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=val;
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
}
struct node* insertafternode(struct node*head,struct node*prenode,int val)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    
    ptr->next=prenode->next;
    prenode->next=ptr;
    
    return head;
    
}


int main()
{
    struct node * head=(struct node*)malloc(sizeof(struct node));
    struct node * second=(struct node*)malloc(sizeof(struct node));
    struct node * third=(struct node*)malloc(sizeof(struct node));
    
    head->data=8;
    head->next=second;
    
    (*second).data=9;
    (*second).next=third;
    
    third->data=10;
    third->next=NULL;
    
    print(head);
    head=insertatfirst(head,55);
    head=insertatindex(head,59,1);
    head=insertatend(head,53);
    head=insertafternode(head,second,52);
    printf("\n");
    print(head);

    return 0;
}


