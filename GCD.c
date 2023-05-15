         //Calculating GCD
#include<stdio.h>
int main(void)
{
	int n1,n2,temp;
	printf("Calculating GCD\n---------------------------\n");
	printf("Enter two number(n1,n2).\n");
	printf("Enter n1: ");
	scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
//	int a=n1,b=n2;
	printf("GCD of %d and %d is: ",n1,n2);
	while(n2!=0)
	{
		temp=n2;
		n2=n1%n2;
		n1=temp;
	}
	printf(" %d",n1);
	return 0;
	
}