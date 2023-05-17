#include<stdio.h>
#include<math.h>
main()
{
	int n,count,temp,rem,sum=0,temp1;
	scanf("%d",&n);
	temp=temp1=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(temp1==sum)
	printf("Armstrong");
	else
	printf("Not armstrong");

}