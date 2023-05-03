#include<stdio.h>

int main(void)
{
	auto int a;
	printf("%d ",a);
	{
		auto int b=10;
		printf("%d ",b);
	}

	// we can not access 'b' form above block
	// Because auto storage class , visibility with in block

		return 0;
}
