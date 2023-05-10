#include<stdio.h>

int main()
{
	int a,b,num;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	num = a>=b ? printf("Diff : %d\n",a-b) : printf("Sum : %d\n", a+b);

	return 0;
}


	
