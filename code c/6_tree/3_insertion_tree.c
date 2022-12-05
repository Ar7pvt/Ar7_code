#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node* creat(int data)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int isBST(struct node*root)
{
    static struct node* prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void insert(struct node*root,int key)
{
    struct node* prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("\nCannot be inserted %d is already exist ",key);
            return;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct node* newnode=creat(key);
    if(prev->data > key)
    {
        prev->left=newnode;
    }
    else{
        prev->right=newnode;
    }
}

int main()
{
    struct node*p=creat(5);

    struct node*p1=creat(3);
    struct node*p2=creat(6);

    struct node*p11=creat(1);
    struct node*p12=creat(4);

    p->left=p1;
    p->right=p2;

    p1->left=p11;
    p1->right=p12;

    inorder(p);

   if(isBST(p))
    {
        insert(p,4);
    }
    else{
        printf("Tree is not BST ");
    }
    
    printf("\n");
    inorder(p);
}