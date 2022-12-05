// push pop
#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
struct Node* p = NULL;
 
void print(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 

 
struct Node* push(struct Node* p, int x)
{
    struct Node* n = (struct Node*) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Stack Overflow\n");
    }
    else{
        
        n->data = x;
        n->next = p;
        p = n;
        return p;
    }
}
 
int pop(struct Node* a){
    if(a==NULL){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = a;
        p = n->next;    //in global decleration value comes but in local deaceration the value dosent comes
        int x = n->data;
        free(n);
        return x; 
    }
}
 
int main(){
    p = push(p, 78);
    p = push(p, 7);
    p = push(p, 8);
    
    print(p);
 
    int element = pop(p); 
    printf("Popped element is %d\n", element);
    print(p);
    return 0;
}

