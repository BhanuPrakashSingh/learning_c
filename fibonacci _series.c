				//Printing fibonacci series Within range.
#include<stdio.h>
int main(void)
{
	int x=0,y=1,z,n;
	printf("Enter number to print fibonacci series within that range.\n ");
	printf("Enter number: ");
	scanf("%d",&n);
	printf("1\t");
	for(int i=0;i<n;i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf("%d\t",z);
	}
	return 0;
}