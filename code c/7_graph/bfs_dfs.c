#include<stdio.h>
#include<stdlib.h>
#define max 5

void BFS(int adj[][max],int visited[],int start)  // for unidirection
{
    int queue[max],front=-1,rear=-1,i,j;
    for(i=0;i<max;i++)
    {
        visited[i]=0;
    }

    queue[++rear]=start;      //++rear first increment and then put value
    ++front;                  //rear++ first put value then increment
    visited[start]=1;

    while(rear>=front)  //while queue is notempty
    {
        start=queue[front++];
        printf("%c ",start+65);

        for(i=0;i<max;i++)    //adding neighbours
        {
           if(adj[start][i] && visited[i]==0)
           {
            queue[++rear]=i;
            visited[i]=1;
           }
        }
    }

}

void DFS(int adj[][max],int visited[],int start)
{
    int stack[max], top=-1, i,j;

    for(i=0;i<max;i++)
    {
        visited[i]=0;
    }

    stack[++top]=start;
    visited[start]=1;
    
    while(top!=-1)
    {
    start=stack[top--];
    printf("%c ",start+65);

    for(i=0;i<max;i++)
    {
        if(adj[start][i] && visited[i]==0)
        {
            stack[++top]=i;
            visited[i]=1;
            break;
        }
    }
    }

}/**
int main()
{
    int visited[max]={0};
    int adj[max][max],i,j;
    int option,size;

    printf("\n Enter the value in matrix ");
        for(i=0;i<max;i++)
        for(j=0;j<max;j++)
        scanf("%d",&adj[i][j]);

    
    printf("\n1 BFS traversal ");
    BFS(adj,visited,0);
    printf("\n2 DFS traversal ");
    DFS(adj,visited,0);
    
}  

int main()
{
    int visited[max]={0};
    int adj[max][max],i,j;
    int option,size;

    while(1){
        printf("\n1 enter the value in graph ");
        printf("\n2 BFS traversal ");
        printf("\n3 DFS traversal ");
        printf("\n4 exit ");
        printf("\n\nEnter any option ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
               printf("\n Enter the value in matrix ");
               for(i=0;i<max;i++)
               {
                for(j=0;j<max;j++)
                {
                    scanf("%d",&adj[i][j]); 
                }
               }
            break;

            case 2:
               printf("\n BFS traversal\n");
               BFS(adj,visited,0);
            break;

            case 3:
               printf("\n DFS traversal\n");
               DFS(adj,visited,0);
            break;

            case 4:
              exit(0);
            break;

        }
    }

return 0;

} */

int main()
{
    int visited[max]={0};
    int adj[max][max],i,j;
    int option,size;

    do{
        printf("\n1 Enter the value in graph ");
        printf("\n2 BFS traversal ");
        printf("\n3 DFS traversal ");
        printf("\n4 Exit ");
        printf("\n\nEnter any option ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
               printf("\nEnter the value in matrix ");
               for(i=0;i<max;i++)
               {
                for(j=0;j<max;j++)
                {
                    scanf("%d",&adj[i][j]); 
                }
               }
            break;

            case 2:
               printf("\n BFS traversal\n");
               BFS(adj,visited,0);
            break;

            case 3:
               printf("\n DFS traversal\n");
               DFS(adj,visited,0);
            break;

           
        }
    }while(option!=4);

return 0;

} 