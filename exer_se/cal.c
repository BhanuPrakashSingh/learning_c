#include<stdio.h>
int main()
{
	float a,b;
	int num;
	printf("Enter 1 for Sum\n");
	printf("Enter 2 for Difference\n");
	printf("Enter 3 for Multiplication\n");
	printf("Enter 4 for Division\n");
	printf("Enter 5 for Modulus\n");
	scanf("%d",&num);
	printf("Please Enter Two Number\n");
	scanf("%f %f",&a,&b);

	switch(num)
	{
          case 1:
		  printf("a=%f\tb=%f\tSum=%f\n",a,b,a+b);
		  break;
	   case 2:
		  printf("a=%f\tb=%f\tDifference=%f\n",a,b,a-b);
		  break;
	   case 3:
		  printf("a=%f\tb=%f\tMultiplication=%f\n",a,b,a*b);
		  break;
	   case 4:
	  	 printf("a=%f\tb=%f\tDivision=%f\n",a,b,a/b);
		 break;
	   case 5:
		 printf("a=%f\tb=%f\tModulus=%d\n",a,b,(int)a%(int)b);
		 break;
	   default:
		 printf("INVALID INPUT");
	}

	return 0;
}


