#include <stdio.h>
int Binary_search(int arr[],int n,int x)
{
	int low=0,high=n-1;
    while (low<=high) {
        int mid=(low+high)/2;

        if (arr[mid]==x)
            return mid;

        if (arr[mid]<x)
            low=mid+1;

        else
            high=mid-1;
    }
    return -1;
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
	int k;
	scanf("%d",&k);
	int r=Binary_search(num,n,k);
	printf("%d",r);
}
