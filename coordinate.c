			// Give a point(x,y) find out where it lies on x-axis,y-axis or origin.
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter points(x,y) to check where it lie(X-axis,Y-axis or origin).\n");
	printf("Enter points like(0,a), (a,0) or (0,0)\n");
	printf("Enter point(x,y):");
	scanf("%d%d",&x,&y);
	if(x=0 || y!=0)
	printf("Point(x,y) lie on y-axis");
	else if(x!=0 || y==0)
	printf("Point(x,y) lie on x-axis");
	else
	printf("Point(x,y) lie on origin");
	return 0;
}