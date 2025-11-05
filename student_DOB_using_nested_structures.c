#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
typedef struct Student_Details{
	int id;
	char Name[10];
	float cgpa;
	char college[10];
	struct Date DOB;
}Detail; 
int main()
{
	int n;
	printf("Enter No of Student data do you want:");
	scanf("%d",&n);
	Detail s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Student%d ID:",i+1);	
		scanf("%d",&s[i].id);
		printf("Enter Student%d Name:",i+1);
		scanf("%s",s[i].Name);
		printf("Enter Student%d CGPA:",i+1);
		scanf("%f",&s[i].cgpa);
		printf("Enter Student%d College:",i+1);
		scanf("%s",s[i].college);
		printf("Enter Student%d Date Of Birth:",i+1);
		scanf("%d %d %d",&s[i].DOB.day,&s[i].DOB.month,&s[i].DOB.year);
	}
	printf("ID\t|\tName\t|\tCGPA\t|\tCollege\t|\tDOB\n");
	printf("-------------------------------------------\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t|\t%-10s\t|\t%.1f\t|\t%-10s\t|\t%d-%d-%d\n",s[i].id,s[i].Name,s[i].cgpa,s[i].college,s[i].DOB.day,s[i].DOB.month,s[i].DOB.year);
	}
	
	
}
