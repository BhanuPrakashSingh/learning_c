#include<stdio.h>
#include<math.h>
int fxn(int *ar,int n,int x,int y)
{
	int i,j,min=n+1;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((ar[i]==x && ar[j]==y) || ar[i]==y && ar[j]==x)
			if(min>abs(i-j))
			min=abs(i-j);
		}
	
	}
	printf("%d",abs(min));
		if(min>n)
		printf("X or Y not found");
}
int main(void)
{
	printf("Enter n,x and y\n");
	int n,x,y,i;
	printf("Enter n: ");
	scanf("%d",&n);
	 int ar[n];
	 for(i=0;i<n;i++)
	 {
	 	printf("ar[%d]: ",i);
	 	scanf("%d",&ar[i]);
	 }
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	fxn( ar ,n, x, y);
	return 0;
}