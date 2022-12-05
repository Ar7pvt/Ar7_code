#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack 
{
    int size;
    int top;
    char* arr;
};

int isempty(struct stack*p)
{
    if(p->top==-1)
    {
        return 1;
        
    }
    return 0;
}

int isfull(struct stack*p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack*p,char val)
{
    if(isfull(p))
    {
        printf("stack overflow ");
    }
    else
    {
      p->top++;
      p->arr[p->top]=val;
    }
}

char pop(struct stack*p)
{
    if(isempty(p))
    {
        return -1;
    }
    else
    {
        int val=p->arr[p->top];
        p->top--;
        return val;
    }
}

int isoperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 1;
    }
    return 0;
}
int precedence(char ch)
{
    if(ch=='/'||ch=='*')
    {
        return 3;
    }
    else if(ch=='+'||ch=='-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int stacktop(struct stack*p)
{
    return p->arr[p->top];
}

char * infixtopostfix(char* infix)
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size* sizeof(char));
    
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    
    while(infix[i]!='\0')
    {
       if(!isoperator(infix[i]))
       {
           postfix[j]=infix[i];
           i++;
           j++;
       }
       else
       {
           if(precedence(infix[i])>precedence(stacktop(sp)))
           {
               push(sp,infix[i]);
               i++;
           }
           else
           {
               postfix[j]=pop(sp);
               j++;
           }
           
       }
    }
    while(!isempty(sp))
    {
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char * infix="a+b";
    printf("posfix %s",infixtopostfix(infix));

    return 0;
}
