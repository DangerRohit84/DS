#include<stdio.h>
void merg(int num1[],int num2[],int n,int m)
{
	int i=0;
	int j=0;
	int k=0;
	int p=n+m;
	int num3[p];
	while(i<m && j<n)
	{
		if(num1[i]<=num2[j])
		{
			num3[k]=num1[i];
			i++;
			k++;
		}
		else
		{
			num3[k]=num2[j];
			j++;
			k++;
		}	
	}
	while(i<n)
	{
		num3[k]=num1[i];
		i++;
		k++;
	}
	while(j<m)
	{
		num3[k]=num2[j];
		j++;
		k++;
	}
	for(int l=0;l<p;l++)
	{
		printf("%d ",num3[l]);
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num1[n],num2[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num1[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&num2[i]);
	}
	merg(num1,num2,n,m);
}
