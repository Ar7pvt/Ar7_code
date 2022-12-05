#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
    int height;
};

int getheight(struct node*n)
{
    if(n==NULL)
    {
        return 0;
    }
    return n->height;
}

struct node* newnode(int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    n->height=1;
    return n;
    
}

int balancefactor(struct node* n)
{
    if(n==NULL)
    {
        return 0;
    }
    return getheight(n->right)-getheight(n->left);
}
int max(int a,int b)
{
    return (a>b)?a:b;
}

struct node* rightrotate(struct node*y)
{
    struct node*x=y->left;
    struct node*t2=x->right;

    x->right=y;
    y->left=t2;

    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;

    return x;
}

struct node*leftrotate(struct node*x)
{
    struct node*y=x->right;
    struct node*t2=y->left;

    y->left=x;
    x->right=t2;

    x->height=max(getheight(x->right),getheight(x->left))+1;
    y->height=max(getheight(y->right),getheight(y->left))+1;

    return y;
}

struct node * insert(struct node* node,int data)
{
    if(node==NULL)
    {
        return newnode(data);
    }
    if(data > node->data)
    {
        node->right= insert(node->right,data);
    }
    else if(data < node->data)
    {
        node->left= insert(node->left,data);
    }
    else
    {
        return node;
    }

    //
    node->height=max(getheight(node->right),getheight(node->left))+1;
    int bf=balancefactor(node);
    
    //for RR case we have to rotate left
    if(bf>1 && data > node->right->data)
    {
        return leftrotate(node);
    }
    //for LL case we have to rotate right
    if(bf<-1 && data < node->left->data)
    {
        return rightrotate(node);
    }
    //for LR case 1st rotate left then right
    if(bf<-1 && data > node->left->data)
    {
        node->left=leftrotate(node->left);
        return rightrotate(node);

    }
    //for RL case 1st rorate right then left
    if(bf>1 && data < node->right->data)
    {
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}
//avl tree deletion

struct node* minvaluenode(struct node* node)
{
    struct node* x=node;
    while(x->left!=NULL)
    {
        x=x->left;
    }
    return x;
}

struct node*deletnode(struct node* root,int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(val > root->data)   // check val in right side
    {
        root->right=deletnode(root->right,val);
    }
    else if(val<root->data)     // check val in left side
    {
        root->left=deletnode(root->left,val);
    }
    else{       //if val is found
        if((root->right==NULL) || (root->left==NULL))
        {
            struct node* temp=root->left?root->left:root->right;
            if(temp==NULL)//no child
            {
                temp=root;
                root=NULL;
            }
            else{   //one child
                *root=*temp;

            }
            free(temp);
        }
        else///two child
        {
            struct node* temp=minvaluenode(root->right);
            root->data=temp->data;
            root->right=deletnode(root->right,temp->data);

        }
    }

    if(root==NULL)  //if val not found
    {
        return root;
    }
    
    
    root->height=1+max(getheight(root->right),getheight(root->left));  //update height
    int balance=balancefactor(root);   //balance factor of root node

    //for r0 r-1 and r1 rotation
    if(balance<0 && balancefactor(root->left) <=0)
    {
       return rightrotate(root);
    }
    if(balance<0 && balancefactor(root->left) >0)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    //
    //for L0 L1 AND L-1
    if(balance>0 && balancefactor(root->right) >=0)
    {
        return leftrotate(root);
    }
    if(balance>0 && balancefactor(root->right) <0)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
return root;
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
int main()
{
    struct node* root=NULL;
    root=insert(root,8);
    root=insert(root,4);
    root=insert(root,7);
    root=insert(root,3);
    root=insert(root,6);
    root=insert(root,9);

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");


    root=deletnode(root,3);

    inorder(root);

    return 0;   
}
