#include<stdio.h>
int main()
{
	int posi=0,zero=0,neg=0,num;
	printf("Enter the number till you want.\nEnter 999 for Quit\n");
	while(1)
	{
		scanf("%d",&num);
		if(num==999)
                        break;
		if(num>0)

			posi++;
		if(num<0)

			neg++;
		if(num==0)
			zero++;
	}
	printf("Positive: %d\tNegative: %d\tZero: %d\n",posi,neg,zero);
	return 0;
}
