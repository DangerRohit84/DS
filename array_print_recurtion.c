#include<stdio.h>
void print(int num[],int i,int n)
{
	if(i==n) return;
	printf("%d ",num[i]);
	print(num,i+1,n);
	
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
	print(num,0,n);
}
