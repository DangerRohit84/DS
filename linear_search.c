#include<stdio.h>
int Linear_search(int num[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(num[i]==k)
		{
			return i;
		}
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
	Linear_search(num,n,k);
}
