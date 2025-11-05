// Call by value and Call by reference in Structures
#include <stdio.h>
struct Student
{
	int id;
	char name[20];
	double cgpa;	
};
void fun(struct Student s1)
{
	s1.id = 101;
	printf("%d\n",s1.id);
}
int main()
{
	struct Student s1 = {1, "Alice", 7.7}; // 32 bytes will be allocated
	printf("Address in main function: %d\n", &s1);
	fun(s1); // structure as value
	printf("%d", s1.id);
	return 0;
}
