#include<stdio.h>

int main(void)
{
	register int a;
	printf("a=%d\t ",a);

	{
		register float pi=3.14;
		printf("pi=%f\t ",pi);
	}

	register int g=9;
     printf("g=%d ",g);

	return 0;
}	
