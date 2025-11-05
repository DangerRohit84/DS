#pragma pack(1)
#include<stdio.h>
typedef struct structure{
	int f;
	char c;
	int n;
}demo; 
int main()
{
	demo s;
	printf("%d %d %d",&s.f,&s.c,&s.n);
	return 0;
	
}
