#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int data)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
   
}
void inorder(struct node*root)
{
    if(root!=NULL){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
struct node* prevnode(struct node* root)
{
    root=root->left;
    while(root!=NULL)
    {
        root=root->right;
    }
    return root;
    
}

struct node* deletion(struct node* root,int key)
{
    struct node*prev;
    //deletion of node
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL  &&root->right==NULL)
    {
        free(root);
        return NULL;
    }

    //searching of node
    if(root->data>key)
    {
        root->left=deletion(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=(deletion(root->right,key));
    }
    else{
        prev=prevnode(root);
        root->data=prev->data;
        deletion(root->left,prev->data); 
         //prev data is copied to root data now we have to free prev data

    }

}

int main()
{
    struct node*p=create(8);

    struct node*p1=create(4);
    struct node*p2=create(10);

    struct node*p11=create(3);
    struct node*p12=create(6);
    
    p->left=p1;
    p->right=p2;

    p1->left=p11;
    p1->right=p12;

    inorder(p);

    deletion(p,6);
    printf("\n");

    inorder(p);

}
