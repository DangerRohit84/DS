#include<stdio.h>
#include<stdlib.h>
int *square(int a[],int n)
{
    int *b= (int *)malloc(sizeof(int)*n);
    printf("Address of b is %d\n",b);
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]*a[i];
    }
    return b;
}
int main()
{
    int a[]={1,2,3,4,5};
    int *b=square(a,5);
    printf("Address after square function call: %d\n",b);
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}