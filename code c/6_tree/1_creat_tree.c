#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int data)  //create a node
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
    n->right=NULL;
    n->data=data;
    return n;
}


void preorder(struct node* r)   // pre order traversal
{
    if(r!=NULL)
    {
        printf("%d ",r->data);
        preorder(r->left);
        preorder(r->right);

    }
}
void postorder(struct node* r)   //post order traversal
{
    if(r!=NULL)
    {
       
        postorder(r->left);
        postorder(r->right);
        printf("%d ",r->data);
    }
}
void inorder(struct node* r)   //in order traversal
{
    if(r!=NULL)
    {
        inorder(r->left);
        printf("%d ",r->data);
        inorder(r->right);

    }
}

int isBST(struct node*root)  //check the tree is BST or not
{
    static struct node* prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data)
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
int main()
{
/*           7
            /\
            5 8
            /\
            1 6
 */
    struct node* p=create(7); //creating a node by calling function

    struct node* p1=create(5);
    struct node* p2=create(8);

    struct node* p3=create(1);
    struct node* p4=create(6);

    p->left=p1;     //linking a node
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);

    printf("\n%d ",isBST(p));
}