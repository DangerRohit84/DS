#include<stdio.h>
void merge(int num1[],int a,int b,int c)
{
	int i=a;
	int j=b+1;
	int k=0;
	int num2[c-a+1];
	while(i<=b && j<=c)
	{
		if(num1[i]<=num1[j])
		{
			num2[k]=num1[i];
			i++;
			k++;
		}
		else
		{
			num2[k]=num1[j];
			j++;
			k++;
		}
	}
	while(i<=b)
	{
		num2[k]=num1[i];
		i++;
		k++;
	}
	while(j<=c)
	{
		num2[k]=num1[j];
		j++;
		k++;
	}
	k=0;
	for(int i=a;i<=c;i++)
	{
		num1[i]=num2[k];
		k++;
	}
}
void merge_sort(int num[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		merge_sort(num,l,m);
		merge_sort(num,m+1,h);
		merge(num,l,m,h);
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
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
	merge_sort(num,0,n-1);
	print(num,n);
}
