#include<stdio.h>
int Linear_search(int num[],int n,int k,int i)
{
	if(i==n) return -1;
	else if(num[i]==k)
	{
		return i;
	}
	return Linear_search(num,n,k,i+1);
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
	int r=Linear_search(num,n,k,0);
	printf("%d",r);
}
