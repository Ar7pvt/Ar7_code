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
struct node* deletfirst(struct node* head)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p->next;
    head=head->next;
    free(p);
    
    return head;
}
struct node* deletlast(struct node* head)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=head)
    {
        q=q->next;
        p=p->next;
    }
    p->next=q->next;
    
    free(q);
    
    return head;
}
struct node* deletindex(struct node* head,int index)
{
    struct node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct node*q=p->next;
    p->next=q->next;
    
    free(q);
    
    return head;
}
struct node* deletaftervalue(struct node* head,int value)
{
    struct node*p=head;
    struct node*q=head->next;
    while(p->data!=value && q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    if(p->data==value)
    {
    p->next=q->next;
    
    free(q);
    }
    return head;
}


int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* forth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    struct node* sixth=(struct node*)malloc(sizeof(struct node));
    
    (*head).data=6;
    (*head).next=second;
    
    second->data=7;
    second->next=third;
    
    third->data=9;
    third->next=forth;
    
    forth->data=5;
    forth->next=fifth;
    
    fifth->data=66;
    fifth->next=sixth;
    
    sixth->data=69;
    sixth->next=head;
    
    printf("circular linklist before insertion ");
    display(head);
    head=deletfirst(head);
    head=deletlast(head);
    head=deletindex(head,2);
    head=deletaftervalue(head,7);
    printf("\ncircular linklist after insertion ");
    display(head);
    
    return 0;
}
