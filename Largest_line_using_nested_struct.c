#include<stdio.h>
#include<math.h>
typedef struct Point {
	int x;
	int y;
}Point;
typedef struct Line{
	Point P1,P2;
}Line;
double get_len(Line L)
{
	return sqrt(pow(L.P2.x-L.P1.x,2)+pow(L.P2.y-L.P1.y,2));
}
void print(Line L)
{
	printf("Line((%d,%d),(%d,%d)) is Larger",L.P1.x,L.P1.y,L.P2.x,L.P2.y);
}
int main()
{
	int n;
	scanf("%d",&n);
	Line L[n]; //{}
	for(int i=0;i<n;i++)
	{
		printf("Enter the Coordinate for x1, y1 for Line %d:",i+1);
		scanf("%d %d",&L[i].P1.x,&L[i].P1.y);
		printf("Enter the Coordinate for x2, y2 for Line %d:",i+1);
		scanf("%d %d",&L[i].P2.x,&L[i].P2.y);
	}
	double len[n];
	for(int i=0;i<n;i++)
	{
	len[i]=get_len(L[i]);	
	}
	double max=len[0];
	int max_in=0;
	for(int i=1;i<n;i++)
	{
		if(len[i]>max)
		{
			max=len[i];
			max_in=i;
		}
	}
	print(L[max_in]);
}
