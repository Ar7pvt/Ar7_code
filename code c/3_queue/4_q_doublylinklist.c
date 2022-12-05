#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node*prev;
    int data;
    struct node*next;
};

void displayLtoR(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void displayRtoL(struct node*ptr)
{
    
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* forth=(struct node*)malloc(sizeof(struct node));
    
    head->prev=NULL;
    head->data=90;
    head->next=second;
    
    second->prev=head;
    second->data=80;
    second->next=third;
    
    third->prev=second;
    third->data=70;
    third->next=forth;
    
    forth->prev=third;
    forth->data=60;
    forth->next=NULL;
    
    printf("doubly linklist from left to right ");
    displayLtoR(head);
    
    printf("\ndoubly linklist from right to left ");
    displayRtoL(forth);
    return 0;
}
