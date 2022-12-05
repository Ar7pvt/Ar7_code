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

struct node* searching(struct node* root,int key)
{
    if (root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(root->data > key)
    {
        return searching(root->left,key);
    }
    else
    {
        return searching(root->right,key);
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

   
    inorder(p);

    printf("\n%d \n",isBST(p));
    
    struct node* n=searching(p,5);
    if(n!=NULL)
    {
        printf("Element found %d",n->data);
    }
    else
    {
        printf("Element not found");
    }

}