#include<stdio.h>
struct Human{
	char name[10];
	int age;
};
void sort(struct Human H[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(H[j].age>H[j+1].age)
			{
				struct Human temp=H[j];
				H[j]=H[j+1];
				H[j+1]=temp;
			}
		}
	}
}
int main()
{
	struct Human H[2]={{"Rohit",20},{"Surendra",15}};
	sort(H,2);
	for(int i=0;i<2;i++)
	{
		printf("%s %d\n",H[i].name,H[i].age);
	}
}
