#include<stdio.h>
int main()
{
	int n,sum=0,rem,i=1;
	printf("Enter positive integer number\n");
	scanf("%d",&n);
	 while(n>0)
	 {
		 rem=n%8;
                sum=sum+rem*i;
		i*=10;
                n/=8;

	 }
/*	 
	rem=0;
	n=sum;
	sum=0;

	while(n>0)
	{
	     rem=n%10;
	     sum=sum*10+rem;
	     n/=10;
	}*/
	printf("%d ",sum);
	return 0;
}
