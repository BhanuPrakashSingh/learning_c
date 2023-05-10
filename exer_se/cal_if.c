#include<stdio.h>
int main()
{
        float a,b,num;
        printf("Enter 1 for Sum\n");
        printf("Enter 2 for Difference\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter 5 for Modulus\n");
        scanf("%f",&num);
        printf("Please Enter Two Number\n");
        scanf("%f %f",&a,&b);

	if(num==1)
		printf("a=%f\tb=%f\tSum=%f\n",a,b,a+b);
	else if(num==2)
		printf("a=%f\tb=%f\tDifference=%f\n",a,b,a-b);
	else if(num==3)
		printf("a=%f\tb=%f\tMultiplication=%f\n",a,b,a*b);
	else if(num==4)
		printf("a=%f\tb=%f\tDivision=%f\n",a,b,a/b);
	else if(num==5)
		printf("a=%f\tb=%f\tModulus=%d\n",a,b,(int)a%(int)b);
	else
		printf("INVALID INPUT");
	return 0;
}
