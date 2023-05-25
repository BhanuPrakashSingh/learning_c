      // Taking input column wise
#include<stdio.h>
int main()
{
	int ar[3][3];
	int i,j;
	printf("Enter element of array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&ar[j][i]);
	}
        }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",ar[i][j]);
		printf("\n");
	}
	}
