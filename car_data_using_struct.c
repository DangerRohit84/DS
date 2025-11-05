#include<stdio.h>
struct car{
	char Engin[10];
	char fuelType[10];
	int fuelCap;
	int seatingCap;
	int mileage;
};
int main()
{
	int n;
	scanf("%d",&n);
	struct car c[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Car%d information\n",i+1);
		scanf("%s",&c[i].Engin);
		scanf("%s",&c[i].fuelType);
		scanf("%d",&c[i].fuelCap);
		scanf("%d",&c[i].seatingCap);
		scanf("%d",&c[i].mileage);
	}
	printf("Engin Fuel Type Fuel Capacity Seating Capacity Milage\n");
	printf("--------------------------------------------------------------------------------------\n");
	for(int i=0;i<n;i++)
	{
	printf("%-7s %-8s %-5d %-5d %-5d\n",c[i].Engin,c[i].fuelType,c[i].fuelCap,c[i].seatingCap,c[i].mileage);		
	}
}
