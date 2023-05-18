	// Enter the size of array and index upto which array short in ascending after that short in dscending order.
#include<stdio.h>
void swp(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void sort_incre(int *ar,int f,int l)
{
	int i,j,minIdx;
	for(i=f;i<l;i++)
	{
		minIdx=i;
		for(j=i+1;j<=l;j++)
		{
		if(ar[j]<ar[minIdx])
		minIdx=j;
		}
		swp(&ar[i],&ar[minIdx]);
	}
}
void sort_decre(int *ar,int f,int l)
{
	int i,j,minIdx;
	for(i=f;i<l;i++)
	{
		minIdx=i;
		for(j=i+1;j<=l;j++)
		{
		if(ar[j]>ar[minIdx])
		minIdx=j;
		}
		swp(&ar[i],&ar[minIdx]);
	}
}
int main()
{
	int n,k,i;
	printf("Enter size of array\n");
		scanf("%d",&n);
	printf("Enter index\n");
	scanf("%d",&k);
	int ar[n];
	for(i=0;i<n;i++)
	{
	   scanf("%d",&ar[i]);
     }
	sort_incre(ar,0,k-1);
	sort_decre(ar,k,n-1);
	printf(" first in Ascending order then in Dscending order array\n");
	for(i=0;i<n;i++)
	printf(" %d ",ar[i]);
    
	return 0;
}