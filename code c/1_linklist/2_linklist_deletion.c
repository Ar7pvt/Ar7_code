#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void print(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node* deletfirst(struct node* head)
{
    struct node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* deletinbetween(struct node* head,int index)
{
    struct node*p=head;
    for(int i=0;i<index-1;i++)
    {
       p=p->next; 
    }
    struct node*q=p->next;
    p->next=q->next;
    free(q);
    
    return head;
}
struct node* deletatend(struct node* head)
{
   struct node* p=head;
   struct node* q=head->next;
   while(q->next!=NULL)
   {
       p=p->next;
       q=q->next;
   }
   p->next=NULL;
   free(q);
   return head;
}
struct node* deletaftervalue(struct node* head,int value)
{
    
    struct node* p=head;
    struct node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    {
        p->next=q->next;
        free(q);
    }
    return(head);
}


int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*forth=(struct node*)malloc(sizeof(struct node));
    struct node*fifth=(struct node*)malloc(sizeof(struct node));
    struct node*sixth=(struct node*)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=9;
    third->next=forth;
    
    forth->data=3;
    forth->next=fifth;
    
    fifth->data=1;
    fifth->next=sixth;
    
    sixth->data=5;
    sixth->next=NULL;
    
    printf("linklist before deletion ");
    print(head);
    head=deletfirst(head);
    head=deletinbetween(head,2);
    head=deletatend(head);
    head=deletaftervalue(head,15);
    printf("\nlinklist after deletion ");
    print(head);
    

    return 0;
}