#include<stdio.h>

int main(void)
{
	static int  a=19;
	printf("%d ",a);
	{
	static int a=20;
		printf("%d ",a);
	}
	printf("%d ",a);

	return 0;
}
