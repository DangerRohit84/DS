#include<stdio.h>
void fibonacci(int);
int main()
{
	int x;
	scanf("%d",&x);
	printf("Fibonacci is ");
	fibonacci(x);
}
void fibonacci(int n)
{
	int f=0;
	int a=0,b=1,c=a+b;
	printf("%d %d ",a,b);
	int i;	
	for(i=1;i<n-1;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	
	}
}
