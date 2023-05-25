      // Taking input column wise
#include<stdio.h>
void search(int ar[][3],int r,int c,int x)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<3;j++)
		if(ar[i][j]==x)
	{
			printf("Found");
		return ;
	}
	}
	printf("Not found");	
}
int main()
{
	int ar[3][3];
	int i,j;
	printf("Enter element of array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("ar[%d][%d]: ",i,j);
		scanf("%d",&ar[j][i]);
	}
        }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",ar[i][j]);
		printf("\n");
	}
	int x;
	printf("Enter searching element");
	scanf("%d",&x);
	search(ar,3,3,x);
	}
	
