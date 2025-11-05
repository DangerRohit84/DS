#include<stdio.h>
#include<stdlib.h>

typedef struct graphs
{
    int val;
    struct graphs* next;
}graphs;


int main()
{
    int n;
    scanf("%d",&n);
    int num[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            num[i][j]=0;
        }
    }
    while(1)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        num[i][j]=1;
        num[j][i]=1;
        if(i!=1 || j!=1) break;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}