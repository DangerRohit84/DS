#include<stdio.h>
void print(int num[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d ",num[i]); 
    }
    printf("\n");
}
int partition(int* num,int l,int r)
{
    int pivot=num[l];
    int temp[r-l+1];
    int j=0;
    for(int i=l+1;i<=r;i++)
    {
        if(num[i]<=pivot) temp[j++]=num[i];
    }
    int p=l+j;
    temp[j++]=pivot;
    for(int i=l+1;i<=r;i++)
    {
        if(num[i]>pivot) temp[j++]=num[i];
    }
    j=0;
    for(int i=l;i<=r;i++)
    {
        num[i]=temp[j++];
    }
    return p;
}
void quick_sort(int* num,int l,int r)
{
    if(l<r)
    {
        int p=partition(num,l,r);
        quick_sort(num,l,p-1);
        quick_sort(num,p+1,r);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Before Sorting: ");
    print(num,n);
    quick_sort(num,0,n-1);
    printf("After Sorting: ");
    print(num,n);
}